# 1 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerLobby_OnResume
# 5 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerLobby_OnTransition
# 7 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerLobby_OnWarp
# 9 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 10 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.byte 0
# 12 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleTowerLobby_EventScript_GetChallengeStatus
# 16 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving
# 18 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 7 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge
# 20 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleTowerLobby_EventScript_WonChallenge
# 22 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 9 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleTowerLobby_EventScript_LostChallenge
# 24 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.2byte 0
# 25 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 26 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 27 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnResume::
# 28 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryHideBattleTowerReporter
# 30 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 31 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 33 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnTransition::
# 34 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 20 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_ShowOrHideReporter
# 36 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_shouldcheckgone
# 38 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, FALSE
# 40 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_OnTransition_2
# 41 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnTransition_1:
# 42 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_set FLAG_DAILY_APPRENTICE_LEAVES, BattleFrontier_BattleTowerLobby_OnTransition_4
# 44 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 45 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 46 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnTransition_2:
# 47 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ShowApprentice
# 49 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_OnTransition_1
# 50 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 51 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnTransition_4:
# 52 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_HideApprentice
# 54 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 55 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 56 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 57 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowApprentice::
# 58 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_HIDE_APPRENTICE
# 60 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 32 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_setgfx
# 62 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 63 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 64 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 65 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndShowOrHideApprentice::
# 66 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 67 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 68 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 69 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_HideApprentice::
# 70 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setflag FLAG_HIDE_APPRENTICE
# 72 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndShowOrHideApprentice
# 74 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 75 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 76 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 77 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 44 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 79 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnWarp:
# 81 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerLobby_EventScript_PlayerFaceNorth
# 83 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.2byte 0
# 85 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 86 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_PlayerFaceNorth::
# 87 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 52 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 89 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 91 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 92 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 93 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 94 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetChallengeStatus::
# 95 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 58 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 96 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_getstatus
# 97 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 99 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving::
# 101 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK, 0
# 111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
# 113 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 115 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WonChallenge::
# 123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_isbrain
# 129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_2
# 132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_1:
# 133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven
# 135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 137 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons
# 139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_2:
# 142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_DefeatedMaiden
# 144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_1
# 145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_DefeatedMaiden::
# 148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden, MSGBOX_DEFAULT
# 150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons::
# 154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_giveribbons
# 156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 93 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FALSE
# 158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons_2
# 159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons_1:
# 160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 96 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons
# 162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitfanfare
# 168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons, MSGBOX_DEFAULT
# 170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons_2:
# 173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints
# 175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons_1
# 176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints::
# 179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_givepoints
# 183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 49
# 191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints_2
# 192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints_1:
# 193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer, MSGBOX_DEFAULT
# 195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints_2:
# 198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LookForwardToChallenge
# 200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints_1
# 201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LookForwardToChallenge::
# 204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge::
# 218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_2
# 221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_1:
# 222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_5
# 224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_4:
# 225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
# 229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_7
# 230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_2:
# 233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak
# 235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_1
# 236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_5:
# 238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak
# 240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_4
# 241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_7:
# 243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LostThanksForPlaying
# 245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak::
# 249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
# 251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostThanksForPlaying::
# 255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying
# 261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle::
# 279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved
# 281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkairshow
# 285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 286 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special HealPlayerParty
# 289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_2
# 300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_1:
# 301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordLastMatch
# 303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_5
# 311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_6
# 313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_7
# 315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_2:
# 318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_1
# 321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_5:
# 323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_6:
# 328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_EventScript_SaveBattle
# 330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_7:
# 333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_SaveBattle::
# 339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_savebattle
# 341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FALSE
# 343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_EventScript_SaveBattle_2
# 344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_SaveBattle_1:
# 345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass, MSGBOX_DEFAULT
# 349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 353 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_SaveBattle_2:
# 354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_EventScript_BattleSaveFailed
# 356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_EventScript_SaveBattle_1
# 357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_BattleSaveFailed::
# 360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved, MSGBOX_DEFAULT
# 362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 365 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle::
# 366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_GetCantRecordBattle::
# 370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_RECORD_DISABLED
# 372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge::
# 376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge_2
# 383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge_1:
# 384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou
# 386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved
# 390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge_2:
# 405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_SetBravoTrainerOn
# 407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge_1
# 408 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 409 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 410 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetBravoTrainerOn::
# 411 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 412 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 413 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SinglesAttendant::
# 417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 422 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 423 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 424 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 425 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 426 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle, MSGBOX_DEFAULT
# 427 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 428 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 429 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 430 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge::
# 431 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 432 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge
# 433 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 434 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 435 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 436 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 437 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 438 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 439 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_2
# 441 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 442 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_3
# 443 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 444 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_4
# 445 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 446 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_5
# 447 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 448 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 449 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_2:
# 450 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 451 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge
# 452 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 453 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 454 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_3:
# 455 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 456 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ExplainSinglesChallenge
# 457 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 458 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 459 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_4:
# 460 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 461 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 462 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 463 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 464 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_5:
# 465 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 466 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 467 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 468 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 469 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 470 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge::
# 471 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 472 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 473 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 474 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 475 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 476 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 477 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 478 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 479 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 480 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 481 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 482 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_3
# 483 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 484 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_4
# 485 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_1:
# 486 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 487 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 488 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 489 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 490 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_6
# 491 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_5:
# 492 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 493 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 494 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 495 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 496 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 497 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 498 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 499 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 500 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 501 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 502 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 503 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 504 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 505 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 506 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 507 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 508 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 509 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 510 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 511 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
# 512 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_9
# 513 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_8:
# 514 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 515 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 516 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 517 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 518 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 519 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_12
# 520 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 521 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_13
# 522 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 523 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_14
# 524 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 525 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 526 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_3:
# 527 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 528 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 529 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_1
# 530 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 531 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_4:
# 532 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 533 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 534 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_1
# 535 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 536 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_6:
# 537 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 538 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 539 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_5
# 540 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 541 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_9:
# 542 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 543 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 544 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_8
# 545 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 546 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_12:
# 547 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 549 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 550 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 551 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_13:
# 552 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 553 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge
# 554 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 555 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 556 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_14:
# 557 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 558 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 559 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 561 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 562 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge::
# 563 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 565 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 567 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 568 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 569 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 570 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 571 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 572 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 573 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 575 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 576 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 577 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 579 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 581 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 582 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 583 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 584 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
# 585 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge_2
# 586 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge_1:
# 587 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 588 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 589 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 590 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 591 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 592 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 593 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 594 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 595 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge_2:
# 596 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 597 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 598 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge_1
# 599 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 600 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 601 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainSinglesChallenge::
# 602 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 603 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 605 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge
# 606 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 607 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_DoublesAttendant::
# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 611 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 612 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 615 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 616 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 617 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 618 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 619 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 620 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 621 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 622 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 623 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge::
# 624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 625 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge
# 626 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 627 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 629 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 630 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 631 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 632 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 633 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_2
# 634 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 635 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_3
# 636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 637 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_4
# 638 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 639 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_5
# 640 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 642 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_2:
# 643 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 644 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge
# 645 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 646 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 647 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_3:
# 648 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 649 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ExplainDoublesChallenge
# 650 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 651 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 652 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_4:
# 653 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 654 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 655 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 656 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 657 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_5:
# 658 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 659 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 660 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 661 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 662 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 663 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge::
# 664 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 665 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 666 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 667 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 668 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 669 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 670 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 671 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 672 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 673 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 674 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 675 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_3
# 676 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 677 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_4
# 678 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_1:
# 679 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 680 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 681 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 682 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 683 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_6
# 684 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_5:
# 685 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 686 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 687 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 688 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons, MSGBOX_DEFAULT
# 689 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 690 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 691 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 692 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 693 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 694 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 695 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 696 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 697 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 698 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 699 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 700 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 701 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 702 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 703 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 704 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
# 705 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_9
# 706 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_8:
# 707 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 708 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 709 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 710 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 711 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 712 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_12
# 713 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 714 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_13
# 715 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 716 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_14
# 717 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 718 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 719 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_3:
# 720 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 721 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 722 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_1
# 723 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 724 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_4:
# 725 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 726 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 727 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_1
# 728 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 729 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_6:
# 730 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 731 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 732 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_5
# 733 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 734 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_9:
# 735 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 736 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 737 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_8
# 738 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 739 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_12:
# 740 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 741 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 742 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 743 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 744 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_13:
# 745 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 746 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge
# 747 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 748 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 749 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_14:
# 750 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 751 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 752 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 753 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 754 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 755 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge::
# 756 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 757 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 758 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 759 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 760 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 761 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 762 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 763 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 764 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 765 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 766 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 767 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 768 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 769 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 770 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 771 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 772 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 773 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 774 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 775 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 776 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 777 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
# 778 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge_2
# 779 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge_1:
# 780 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 781 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 782 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 783 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 784 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 785 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 786 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 787 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 788 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge_2:
# 789 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 790 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 791 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge_1
# 792 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 793 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 794 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainDoublesChallenge::
# 795 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 796 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 797 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 798 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge
# 799 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 800 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 801 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 802 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_MultisAttendant::
# 803 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 804 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 805 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 806 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 807 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 808 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 809 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 810 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 811 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 408 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 812 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 813 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 409 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 814 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle, MSGBOX_DEFAULT
# 815 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 816 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 817 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 818 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge::
# 819 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 820 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge
# 821 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 822 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 823 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 824 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 825 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 826 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 827 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 828 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_2
# 829 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 830 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_3
# 831 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 832 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_4
# 833 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 834 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_5
# 835 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 836 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 837 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_2:
# 838 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 839 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge
# 840 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 841 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 842 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_3:
# 843 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 844 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ExplainMultisChallenge
# 845 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 846 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 847 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_4:
# 848 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 422 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 849 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 850 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 851 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 852 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_5:
# 853 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 424 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 854 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 855 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 856 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 857 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 858 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge::
# 859 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 429 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 860 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 861 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 430 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 862 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 863 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 431 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 864 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 865 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 432 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 866 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 867 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 433 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 868 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 869 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 434 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 870 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_3
# 871 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 436 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 872 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_4
# 873 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_1:
# 874 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 439 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 875 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 876 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 877 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 878 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_6
# 879 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_5:
# 880 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 443 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 881 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 882 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 444 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 883 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons, MSGBOX_DEFAULT
# 884 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 445 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 885 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 886 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 446 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 887 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 888 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 447 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 889 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 890 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 448 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 891 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 892 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 449 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 893 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 894 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 450 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 895 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 896 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 451 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 897 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 898 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 452 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 899 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
# 900 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_9
# 901 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_8:
# 902 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 455 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 903 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 904 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 456 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 905 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 906 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 457 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 907 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_12
# 908 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 459 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 909 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_13
# 910 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 461 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 911 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_14
# 912 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 913 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 914 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_3:
# 915 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 435 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 916 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 917 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_1
# 918 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 919 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_4:
# 920 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 437 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 921 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 922 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_1
# 923 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 924 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_6:
# 925 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 441 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 926 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 927 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_5
# 928 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 929 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_9:
# 930 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 453 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 931 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 932 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_8
# 933 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 934 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_12:
# 935 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 458 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 936 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 937 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 938 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 939 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_13:
# 940 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 460 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 941 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge
# 942 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 943 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 944 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_14:
# 945 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 462 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 946 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 947 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 948 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 949 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 950 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge::
# 951 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 467 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 952 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 953 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 954 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 955 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 469 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 956 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 957 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 470 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 958 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 959 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 471 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 960 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 961 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 472 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 962 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 963 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 473 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 964 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 965 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 474 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 966 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 967 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 475 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 968 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 969 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 476 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 970 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 971 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 477 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 972 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
# 973 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge_2
# 974 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge_1:
# 975 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 480 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 976 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 977 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 481 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 978 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 979 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 482 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 980 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 981 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 982 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 983 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge_2:
# 984 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 478 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 985 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 986 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge_1
# 987 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 988 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 989 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainMultisChallenge::
# 990 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 487 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 991 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge, MSGBOX_DEFAULT
# 992 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 488 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 993 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge
# 994 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 995 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 996 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 997 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LinkMultisAttendant::
# 998 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 493 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 999 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 1000 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 494 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1001 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 1002 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 495 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1003 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 1004 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 496 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1005 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 1006 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 497 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1007 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle, MSGBOX_DEFAULT
# 1008 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1009 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1010 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1011 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge::
# 1012 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 501 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1013 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
# 1014 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 502 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1015 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 1016 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 503 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1017 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 1018 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 504 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1019 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 1020 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 505 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1021 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_2
# 1022 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 507 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1023 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_3
# 1024 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 509 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1025 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_4
# 1026 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 511 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1027 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_5
# 1028 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1029 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1030 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_2:
# 1031 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 506 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1032 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge
# 1033 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1034 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1035 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_3:
# 1036 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 508 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1037 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ExplainLinkMultisChallenge
# 1038 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1039 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1040 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_4:
# 1041 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 510 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1042 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 1043 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1044 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1045 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_5:
# 1046 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 512 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1047 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 1048 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1049 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1050 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1051 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge::
# 1052 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 517 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1053 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 1054 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 518 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1055 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 1056 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 519 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1057 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 1058 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 520 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1059 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 1060 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 521 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1061 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 1062 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 522 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1063 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_3
# 1064 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 524 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1065 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_4
# 1066 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_1:
# 1067 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 527 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1068 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 1069 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 528 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1070 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 1071 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_6
# 1072 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_5:
# 1073 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 531 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1074 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 1075 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 532 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1076 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2, MSGBOX_DEFAULT
# 1077 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 533 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1078 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1079 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 534 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1080 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 1081 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 535 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1082 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 1083 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1084 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 1085 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 537 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1086 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 1087 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 538 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1088 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 1089 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 539 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1090 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 1091 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 540 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1092 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
# 1093 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_9
# 1094 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_8:
# 1095 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 543 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1096 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 1097 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 544 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1098 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 1099 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 545 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_12
# 1101 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 547 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1102 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_13
# 1103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 549 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_14
# 1105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_3:
# 1108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 523 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 1110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_1
# 1111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_4:
# 1113 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 525 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 1115 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_1
# 1116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_6:
# 1118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 529 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 1120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_5
# 1121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_9:
# 1123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 541 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 1125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_8
# 1126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_12:
# 1128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 546 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 1130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_13:
# 1133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge
# 1135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1137 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_14:
# 1138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 550 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 1140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge::
# 1144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 555 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 1146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 556 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 1148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 557 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 1150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 558 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 1152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 559 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 1154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 1156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 561 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 1158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 562 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 1160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 1162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 1164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 567 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 1166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 568 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
# 1168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge_2
# 1169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge_1:
# 1170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 572 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 1172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	specialvar VAR_RESULT, IsWirelessAdapterConnected
# 1174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 575 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 1176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge_5
# 1177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge_4:
# 1178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink
# 1180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge_2:
# 1183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 569 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 1185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge_1
# 1186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge_5:
# 1188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 576 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink
# 1190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge_4
# 1191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan::
# 1194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 583 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 1196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 584 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 1198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 585 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
# 1200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 586 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 1202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 587 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_TOWER_FEELINGS, FALSE
# 1204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 588 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 1206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 589 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_3
# 1208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 591 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_4
# 1210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 593 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_5
# 1212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 595 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_6
# 1214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 597 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_7
# 1216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1:
# 1217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 600 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 1219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_3:
# 1222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 590 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsBattleNow
# 1224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1
# 1225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_4:
# 1227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 592 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsIWon
# 1229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1
# 1230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_5:
# 1232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 594 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsILost
# 1234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1
# 1235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_6:
# 1237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 596 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell
# 1239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1
# 1240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_7:
# 1242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 598 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell
# 1244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1
# 1245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsBattleNow::
# 1248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 605 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin, MSGBOX_DEFAULT
# 1250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 606 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_START
# 1252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 607 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 1254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 1256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 1258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 1260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsIWon::
# 1264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 615 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon, MSGBOX_DEFAULT
# 1266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 616 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_WON
# 1268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 617 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 1270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 618 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 1272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 619 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 1274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 620 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 1276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsILost::
# 1280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 625 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost, MSGBOX_DEFAULT
# 1282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 626 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_LOST
# 1284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 627 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 1286 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 1288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 629 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 1290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 630 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 1292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell::
# 1296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 635 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt, MSGBOX_DEFAULT
# 1298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 1300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings::
# 1304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
# 1306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings_2
# 1307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings_1:
# 1308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 644 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 1
# 1310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings_5
# 1311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings_4:
# 1312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings_2:
# 1315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 642 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CanceledEasyChat
# 1317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings_1
# 1318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings_5:
# 1320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 645 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SubmittedFeelings
# 1322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings_4
# 1323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CanceledEasyChat::
# 1326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 651 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChangedYourMind, MSGBOX_DEFAULT
# 1328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 1330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SubmittedFeelings::
# 1334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 657 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel, MSGBOX_DEFAULT
# 1336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 658 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 1338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_Woman::
# 1342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 663 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded, MSGBOX_NPC
# 1344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_Boy::
# 1348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 668 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins, MSGBOX_NPC
# 1350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1353 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowSinglesResults::
# 1354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 673 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 1356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 674 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_SINGLES
# 1358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 675 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 1360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 676 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 1362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 677 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 1364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1365 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowDoublesResults::
# 1368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 682 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 1370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 683 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_DOUBLES
# 1372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 684 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 1374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 685 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 1376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 686 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 1378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowMultisResults::
# 1382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 691 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 1384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 692 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_MULTIS
# 1386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 693 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 1388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 694 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 1390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 695 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 1392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowLinkMultisResults::
# 1396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 700 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 1398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 701 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_LINK_MULTIS
# 1400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 702 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 1402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 703 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 1404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 704 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 1406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1408 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1409 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons::
# 1410 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 709 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1411 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 1412 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 710 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1413 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_2
# 1414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 712 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_3
# 1416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_2:
# 1419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 711 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50
# 1421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1422 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1423 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_3:
# 1424 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 713 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1425 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen
# 1426 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1427 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1428 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1429 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50::
# 1430 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 718 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1431 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 1432 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 719 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1433 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50_3
# 1434 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 721 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1435 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50_4
# 1436 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50_1:
# 1437 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 724 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1438 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis, MSGBOX_DEFAULT
# 1439 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 725 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1440 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 1441 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 726 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1442 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 1443 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 727 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1444 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 1445 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1446 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1447 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50_3:
# 1448 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 720 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1449 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Singles
# 1450 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50_1
# 1451 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1452 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50_4:
# 1453 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 722 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1454 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Doubles
# 1455 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50_1
# 1456 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1457 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1458 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Singles::
# 1459 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 732 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1460 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles, MSGBOX_DEFAULT
# 1461 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 733 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1462 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 1463 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 734 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1464 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 1465 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 735 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1466 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 1467 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1468 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1469 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1470 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Doubles::
# 1471 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 740 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1472 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles, MSGBOX_DEFAULT
# 1473 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 741 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1474 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 1475 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 742 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1476 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 1477 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 743 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1478 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 1479 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1480 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1481 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1482 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen::
# 1483 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 748 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1484 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 1485 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 749 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1486 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen_3
# 1487 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 751 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1488 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen_4
# 1489 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen_1:
# 1490 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 754 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1491 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis, MSGBOX_DEFAULT
# 1492 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 755 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1493 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 1494 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 756 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1495 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 1496 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 757 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1497 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 1498 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1499 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1500 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen_3:
# 1501 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 750 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1502 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenSingles
# 1503 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen_1
# 1504 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1505 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen_4:
# 1506 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 752 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1507 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenDoubles
# 1508 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen_1
# 1509 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1510 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1511 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenSingles::
# 1512 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 762 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1513 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles, MSGBOX_DEFAULT
# 1514 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 763 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1515 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 1516 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 764 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1517 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 1518 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 765 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1519 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 1520 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1521 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1522 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1523 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenDoubles::
# 1524 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 770 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1525 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles, MSGBOX_DEFAULT
# 1526 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 771 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1527 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 1528 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 772 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1529 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 1530 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 773 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1531 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 1532 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1533 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1534 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1535 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed::
# 1536 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 778 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1537 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS
# 1538 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 779 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1539 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 1540 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1541 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1542 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1543 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge::
# 1544 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 784 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1545 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 1546 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 785 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1547 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 1548 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1549 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1550 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1551 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge::
# 1552 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 789 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1553 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 1554 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 790 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1555 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 1556 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1557 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1558 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1559 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge::
# 1560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 794 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1561 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 1562 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1563 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1564 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1565 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EnterElevator::
# 1566 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 799 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1567 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 1568 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 800 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1569 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_PARTY_ORDER
# 1570 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 801 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1571 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetPartySize
# 1572 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 802 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1573 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CallFrontierUtilFunc
# 1574 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 803 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1575 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 1576 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1577 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1579 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad::
# 1580 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 807 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1581 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_loadlinkopponents
# 1582 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 808 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1583 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 1
# 1584 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 809 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1585 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 6
# 1586 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_2
# 1587 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_1:
# 1588 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 812 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1589 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom
# 1590 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 813 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1591 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CANCEL_BATTLE_ROOM_CHALLENGE
# 1592 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 814 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1593 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 1594 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 815 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1595 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 1596 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 816 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1597 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 1598 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 1599 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1600 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_2:
# 1601 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 810 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1602 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad
# 1603 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_1
# 1604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1605 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1606 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom::
# 1607 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 821 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_BufferModeText
# 1609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 822 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 1611 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom_2
# 1612 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom_1:
# 1613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 825 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom, MSGBOX_DEFAULT
# 1615 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 826 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1616 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WalkToElevator
# 1617 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1618 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1619 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom_2:
# 1620 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 823 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1621 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ShowYouToLinkMultiBattleRoom
# 1622 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom_1
# 1623 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1625 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToLinkMultiBattleRoom::
# 1626 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 830 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1627 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	messageautoscroll BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom
# 1628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 831 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1629 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 1630 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 832 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1631 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 48
# 1632 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1633 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1634 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1635 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WalkToElevator::
# 1636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 836 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1637 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 1638 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 837 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1639 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo
# 1640 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 838 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord
# 1642 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 839 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1643 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_WalkToElevator
# 1644 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 840 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1645 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_WalkToElevator
# 1646 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 841 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1647 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 1648 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 842 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1649 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	opendoor VAR_0x8004, 1
# 1650 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 843 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1651 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 1652 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 844 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1653 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_AttendantEnterElevator
# 1654 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 845 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1655 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_PlayerEnterElevator
# 1656 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 846 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1657 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 1658 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 847 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1659 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closedoor VAR_0x8004, 1
# 1660 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 848 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1661 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 1662 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1663 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1664 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1665 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 852 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1666 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_WalkToElevator:
# 1667 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 853 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1668 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 1669 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 854 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1670 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 1671 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 855 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1672 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 1673 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 856 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1674 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 1675 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1676 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 859 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1677 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_AttendantEnterElevator:
# 1678 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 860 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1679 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 1680 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 861 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1681 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 1682 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 862 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1683 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 1684 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1685 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 865 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1686 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_PlayerEnterElevator:
# 1687 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 866 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1688 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 1689 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 867 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1690 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 1691 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 868 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1692 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 1693 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 869 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1694 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 1695 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1696 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 872 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1697 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_UnusedEnterElevator:
# 1698 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 873 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1699 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 1700 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 874 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1701 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 1702 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 875 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1703 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 1704 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 876 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1705 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 1706 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 877 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1707 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 1708 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 878 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1709 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 1710 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 879 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1711 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 1712 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1713 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText::
# 1714 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 883 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1715 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 1716 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_2
# 1717 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_1:
# 1718 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 886 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1719 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 1720 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_5
# 1721 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_4:
# 1722 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 889 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1723 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 1724 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_8
# 1725 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_7:
# 1726 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 892 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1727 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 1728 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_11
# 1729 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_10:
# 1730 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1731 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1732 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_2:
# 1733 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 884 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1734 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_BufferTextSingle
# 1735 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_1
# 1736 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1737 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_5:
# 1738 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 887 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1739 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_BufferTextDouble
# 1740 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_4
# 1741 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1742 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_8:
# 1743 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 890 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1744 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_BufferTextMulti
# 1745 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_7
# 1746 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1747 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_11:
# 1748 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 893 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1749 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_BufferTextLinkMulti
# 1750 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_BufferModeText_10
# 1751 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1752 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1753 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextSingle::
# 1754 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 899 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1755 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
# 1756 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1757 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1758 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1759 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextDouble::
# 1760 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 904 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1761 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
# 1762 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1763 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1764 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1765 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextMulti::
# 1766 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 909 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1767 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
# 1768 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1769 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1770 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1771 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextLinkMulti::
# 1772 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 914 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1773 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
# 1774 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1775 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1776 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1777 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo::
# 1778 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 919 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1779 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 1780 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_2
# 1781 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_1:
# 1782 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 922 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1783 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 1784 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_5
# 1785 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_4:
# 1786 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 925 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1787 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 1788 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_8
# 1789 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_7:
# 1790 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 928 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1791 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 1792 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_11
# 1793 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_10:
# 1794 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1795 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1796 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_2:
# 1797 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 920 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1798 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_TalkedToSinglesAttendant
# 1799 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_1
# 1800 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1801 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_5:
# 1802 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 923 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1803 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_TalkedToDoublesAttendant
# 1804 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_4
# 1805 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1806 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_8:
# 1807 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 926 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1808 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_TalkedToMultisAttendant
# 1809 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_7
# 1810 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1811 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_11:
# 1812 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 929 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1813 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_TalkedToLinkMultisAttendant
# 1814 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo_10
# 1815 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1816 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1817 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToSinglesAttendant::
# 1818 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 935 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1819 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_SINGLES
# 1820 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1821 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1822 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1823 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToDoublesAttendant::
# 1824 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 940 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1825 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_DOUBLES
# 1826 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1827 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1828 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1829 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToMultisAttendant::
# 1830 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 945 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1831 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_MULTIS
# 1832 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1833 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1834 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1835 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToLinkMultisAttendant::
# 1836 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 950 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1837 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_LINK_MULTIS
# 1838 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1839 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1840 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1841 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord::
# 1842 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 955 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1843 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 1844 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_2
# 1845 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_1:
# 1846 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 958 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1847 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 1848 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_5
# 1849 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_4:
# 1850 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 961 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1851 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 1852 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_8
# 1853 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_7:
# 1854 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 964 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1855 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 1856 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_11
# 1857 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_10:
# 1858 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1859 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1860 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_2:
# 1861 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 956 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1862 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordSingles
# 1863 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_1
# 1864 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1865 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_5:
# 1866 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 959 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1867 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordDoubles
# 1868 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_4
# 1869 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1870 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_8:
# 1871 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 962 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1872 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordMultis
# 1873 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_7
# 1874 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1875 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_11:
# 1876 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 965 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1877 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordLinkMultis
# 1878 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord_10
# 1879 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1880 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1881 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordSingles::
# 1882 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 971 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1883 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 6
# 1884 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1885 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1886 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1887 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordDoubles::
# 1888 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 976 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1889 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 10
# 1890 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1891 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1892 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1893 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordMultis::
# 1894 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 981 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1895 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 14
# 1896 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1897 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1898 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1899 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordLinkMultis::
# 1900 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 986 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1901 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 18
# 1902 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1903 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1904 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1905 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize::
# 1906 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 991 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1907 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 1908 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_2
# 1909 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_1:
# 1910 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 994 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1911 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 1912 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_5
# 1913 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_4:
# 1914 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 997 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1915 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 1916 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_8
# 1917 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_7:
# 1918 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1000 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1919 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 1920 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_11
# 1921 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_10:
# 1922 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1923 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1924 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_2:
# 1925 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 992 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1926 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetSinglesPartySize
# 1927 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_1
# 1928 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1929 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_5:
# 1930 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 995 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1931 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetDoublesPartySize
# 1932 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_4
# 1933 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1934 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_8:
# 1935 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 998 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1936 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetMultisPartySize
# 1937 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_7
# 1938 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1939 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_11:
# 1940 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1001 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1941 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetLinkMultisPartySize
# 1942 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GetPartySize_10
# 1943 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1944 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1945 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetSinglesPartySize::
# 1946 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1007 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1947 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 1948 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1949 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1950 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1951 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoublesPartySize::
# 1952 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1012 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1953 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 1954 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1955 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1956 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1957 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetMultisPartySize::
# 1958 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1017 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1959 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 1960 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1961 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1962 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1963 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetLinkMultisPartySize::
# 1964 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1022 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1965 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 1966 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1967 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1968 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1969 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_GetLvlMode::
# 1970 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1027 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1971 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 1972 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 1973 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1974 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1975 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink::
# 1976 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1032 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1977 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, USING_BATTLE_TOWER
# 1978 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1033 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1979 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message gText_PleaseWaitForLink
# 1980 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1034 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1981 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 1982 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1035 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1983 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, 0
# 1984 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1036 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1985 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryBattleLinkup
# 1986 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1037 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1987 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 1988 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1038 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1989 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_SUCCESS
# 1990 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_2
# 1991 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1:
# 1992 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1041 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1993 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_SOMEONE_NOT_READY
# 1994 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_5
# 1995 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_4:
# 1996 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1044 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1997 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_DIFF_SELECTIONS
# 1998 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_8
# 1999 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_7:
# 2000 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1047 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2001 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS
# 2002 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_11
# 2003 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_10:
# 2004 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1050 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2005 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED
# 2006 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_14
# 2007 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_13:
# 2008 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1053 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2009 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_CONNECTION_ERROR
# 2010 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_17
# 2011 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_16:
# 2012 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1056 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2013 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER
# 2014 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_20
# 2015 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_19:
# 2016 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2017 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2018 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_2:
# 2019 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1039 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2020 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful
# 2021 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1
# 2022 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2023 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_5:
# 2024 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1042 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2025 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto CableClub_EventScript_AbortLinkSomeoneNotReady
# 2026 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_4
# 2027 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2028 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_8:
# 2029 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1045 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2030 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections
# 2031 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_7
# 2032 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2033 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_11:
# 2034 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1048 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2035 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers
# 2036 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_10
# 2037 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2038 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_14:
# 2039 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1051 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2040 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 2041 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_13
# 2042 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2043 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_17:
# 2044 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1054 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2045 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto CableClub_EventScript_AbortLinkConnectionError
# 2046 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_16
# 2047 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2048 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_20:
# 2049 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1057 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2050 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 2051 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_19
# 2052 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2053 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2054 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections::
# 2055 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1063 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2056 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 2057 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1064 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2058 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8005, 3
# 2059 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections_2
# 2060 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections_1:
# 2061 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1067 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2062 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox Text_PlayersMadeDifferentSelections, MSGBOX_DEFAULT
# 2063 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1068 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2064 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 2065 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2066 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2067 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections_2:
# 2068 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1065 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2069 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_FriendDifferentSelection
# 2070 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections_1
# 2071 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2072 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2073 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendDifferentSelection::
# 2074 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1073 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2075 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 2076 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1074 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2077 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
# 2078 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1075 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2079 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 2080 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2081 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2082 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2083 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers::
# 2084 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1080 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2085 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers, MSGBOX_DEFAULT
# 2086 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1081 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2087 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 2088 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1082 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2089 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox CableClub_Text_IncorrectNumberOfParticipants, MSGBOX_DEFAULT
# 2090 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1083 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2091 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 2092 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2093 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2094 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2095 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLink::
# 2096 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1088 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2097 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 2098 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1089 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2099 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8005, 0
# 2100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_AbortLink_2
# 2101 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLink_1:
# 2102 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1092 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8005, 1
# 2104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_AbortLink_5
# 2105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLink_4:
# 2106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1095 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8005, 2
# 2108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_AbortLink_8
# 2109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLink_7:
# 2110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1098 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
# 2112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1099 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2113 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 2114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2115 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLink_2:
# 2117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1090 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_FriendChoseDifferentLvlMode
# 2119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink_1
# 2120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLink_5:
# 2122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1093 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMon
# 2124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink_4
# 2125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLink_8:
# 2127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1096 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMons
# 2129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink_7
# 2130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendChoseDifferentLvlMode::
# 2133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 2135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 2136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2137 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMon::
# 2139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon, MSGBOX_DEFAULT
# 2141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 2142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMons::
# 2145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons, MSGBOX_DEFAULT
# 2147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 2148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful::
# 2151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 2153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 2155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 2157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 2159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 2161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 2163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 2165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 2167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 2169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TrySetBattleTowerLinkType
# 2171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 2173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainLinkMultisChallenge::
# 2177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge, MSGBOX_DEFAULT
# 2179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge
# 2181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink::
# 2185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BATTLE_TOWER
# 2187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 2189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader::
# 2193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message CableClub_Text_ChooseGroupLeaderOfTwo
# 2195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 2197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 2199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 2201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_3
# 2203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_4
# 2205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_5
# 2207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_6
# 2209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1:
# 2210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_3:
# 2213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
# 2215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1
# 2216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_4:
# 2218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
# 2220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1
# 2221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_5:
# 2223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 2225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1
# 2226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_6:
# 2228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 2230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1
# 2231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader::
# 2234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryBecomeLinkLeader
# 2236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_SUCCESS
# 2238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_2
# 2239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1:
# 2240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED
# 2242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_5
# 2243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_4:
# 2244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN
# 2246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_8
# 2247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_7:
# 2248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER
# 2250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_11
# 2251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_10:
# 2252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 2254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 2255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_2:
# 2257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 2259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1
# 2260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_5:
# 2262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 2264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_4
# 2265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_8:
# 2267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
# 2269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_7
# 2270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_11:
# 2272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 2274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_10
# 2275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup::
# 2278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryJoinLinkGroup
# 2280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_SUCCESS
# 2282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_2
# 2283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1:
# 2284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED
# 2286 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_5
# 2287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_4:
# 2288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN
# 2290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_8
# 2291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_7:
# 2292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER
# 2294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_11
# 2295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_10:
# 2296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 2298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 2299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_2:
# 2301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 2303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1
# 2304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_5:
# 2306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 2308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_4
# 2309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_8:
# 2311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
# 2313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_7
# 2314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_11:
# 2316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 2318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_10
# 2319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful::
# 2322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 2324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 2326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 2328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 2330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 2332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 2334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 2336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 2338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 2340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 2342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesBoard::
# 2346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 2348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 2350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 2352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2353 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard::
# 2356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading
# 2358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 2360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_TOWER_RULES, FALSE
# 2362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 2364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2365 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_3
# 2366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_4
# 2368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_5
# 2370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_6
# 2372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 4, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_7
# 2374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_8
# 2376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1:
# 2377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_3:
# 2380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_RulesTower
# 2382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1
# 2383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_4:
# 2385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_RulesMons
# 2387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1
# 2388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_5:
# 2390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_RulesSalon
# 2392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1
# 2393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_6:
# 2395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_RulesMultiLink
# 2397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1
# 2398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_7:
# 2400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ExitRules
# 2402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1
# 2403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_8:
# 2405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ExitRules
# 2407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1
# 2408 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2409 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2410 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesTower::
# 2411 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2412 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules, MSGBOX_DEFAULT
# 2413 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 2415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesMons::
# 2419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 2421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2422 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 2423 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2424 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2425 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2426 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesSalon::
# 2427 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2428 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules, MSGBOX_DEFAULT
# 2429 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2430 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 2431 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2432 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2433 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2434 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesMultiLink::
# 2435 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2436 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules, MSGBOX_DEFAULT
# 2437 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2438 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 2439 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2440 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2441 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2442 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExitRules::
# 2443 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2444 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 2445 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 2446 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2447 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2448 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DirectYouToBattleRoom::
# 2449 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2450 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I'll direct you to your BATTLE ROOM now.$"
# 2451 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2452 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting::
# 2453 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2454 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 2455 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You didn't save before you quit your\n"
# 2456 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge last time.\p"
# 2457 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Because of that, your challenge so far\n"
# 2458 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "has been disqualified. Sorry!$"
# 2459 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2460 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven::
# 2461 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2462 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Congratulations!\n"
# 2463 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You've beaten all seven TRAINERS!\p"
# 2464 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 2465 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2466 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_EarnedFabulousPrize::
# 2467 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2468 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For beating seven TRAINERS in a row,\n"
# 2469 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you have earned this fabulous prize!\p"
# 2470 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 2471 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2472 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ReceivedPrize::
# 2473 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2474 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 2475 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 2476 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2477 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_BagFullMakeRoom::
# 2478 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2479 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, your BAG appears to be full.\p"
# 2480 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please make room in your BAG, then come\n"
# 2481 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "see me.$"
# 2482 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2483 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying::
# 2484 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2485 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Thank you for playing!\p"
# 2486 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 2487 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2488 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved::
# 2489 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2490 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your record will be saved.\n"
# 2491 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please wait.$"
# 2492 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2493 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou::
# 2494 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2495 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "We've been waiting for you!\p"
# 2496 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 2497 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2498 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved::
# 2499 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2500 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\n"
# 2501 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "progress will be saved. Please wait.$"
# 2502 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2503 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer::
# 2504 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2505 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You're finally about to face the\n"
# 2506 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "50th TRAINER.\p"
# 2507 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "From here on, every time you beat seven\n"
# 2508 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "TRAINERS in a row, your POKéMON will\l"
# 2509 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "receive a commemorative RIBBON.\p"
# 2510 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Good luck!$"
# 2511 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2512 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons::
# 2513 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2514 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Here are some RIBBONS for beating\n"
# 2515 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "seven tough TRAINERS in a row.\p"
# 2516 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} received some RIBBONS!$"
# 2517 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2518 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons::
# 2519 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2520 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} put the RIBBONS on\n"
# 2521 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the challenger POKéMON.$"
# 2522 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2523 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower::
# 2524 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2525 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me, do you have a moment?\p"
# 2526 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Can you describe your feelings when\n"
# 2527 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you're about to begin a BATTLE TOWER\l"
# 2528 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "match, or when you've either won or\l"
# 2529 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "lost a match?$"
# 2530 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2531 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin::
# 2532 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2533 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Okay, what are your feelings when\n"
# 2534 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you're about to begin a match?$"
# 2535 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2536 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon::
# 2537 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2538 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "What do you feel when you've won\n"
# 2539 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a match?$"
# 2540 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2541 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost::
# 2542 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2543 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Can I hear about your feelings when\n"
# 2544 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you have lost a match?$"
# 2545 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2546 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt::
# 2547 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2548 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, so you don't think much about it?\n"
# 2549 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You're one cool customer.$"
# 2550 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2551 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChangedYourMind::
# 2552 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2553 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hunh? You changed your mind?\n"
# 2554 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I guess you're fickle.$"
# 2555 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2556 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel::
# 2557 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2558 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Okay, so that's how you feel?\n"
# 2559 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "That's quite original.\p"
# 2560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Thanks!$"
# 2561 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2562 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded::
# 2563 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2564 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The number of matches you win in a row\n"
# 2565 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is recorded.\p"
# 2566 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I'd better not get beaten in\n"
# 2567 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "an embarrassing way!$"
# 2568 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2569 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins::
# 2570 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2571 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Once you've entered the BATTLE TOWER,\n"
# 2572 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you can't leave until you either lose\l"
# 2573 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "or you beat seven TRAINERS in a row.\p"
# 2574 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You'd best be certain that you're up\n"
# 2575 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to the challenge.$"
# 2576 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2577 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction::
# 2578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2579 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER\n"
# 2580 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "DOUBLE BATTLE CORNER!\p"
# 2581 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Unfortunately, the BATTLE ROOMS\n"
# 2582 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are still under construction.\p"
# 2583 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come back when the work\n"
# 2584 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is completed.$"
# 2585 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2586 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction::
# 2587 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2588 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER\n"
# 2589 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "MULTI BATTLE CORNER!\p"
# 2590 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Unfortunately, the BATTLE ROOMS\n"
# 2591 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are still under construction.\p"
# 2592 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come back when the work\n"
# 2593 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is completed.$"
# 2594 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2595 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge::
# 2596 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2597 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "We look forward to seeing you on\n"
# 2598 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "another challenge!$"
# 2599 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2600 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WhichLevelMode::
# 2601 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2602 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE ROOM offers two levels\n"
# 2603 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of challenge, Level 50 and Open Level.\l"
# 2604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Which is your choice?$"
# 2605 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2606 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectMons::
# 2607 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1427 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please select the POKéMON you wish\n"
# 2609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.$"
# 2610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2611 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering::
# 2612 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1432 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\n"
# 2614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "progress must be saved. Is that okay?$"
# 2615 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2616 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom::
# 2617 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1437 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2618 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I will now show you to the\n"
# 2619 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{STR_VAR_1} BATTLE ROOM.$"
# 2620 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2621 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RecordLastMatch::
# 2622 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1442 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2623 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Shall I record your last BATTLE TOWER\n"
# 2624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "match on your FRONTIER PASS?$"
# 2625 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2626 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50::
# 2627 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1447 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 2629 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have {STR_VAR_2} eligible POKéMON.\p"
# 2630 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have {STR_VAR_2} different POKéMON\n"
# 2631 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 2632 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 2633 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 2634 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 2635 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd::
# 2637 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1457 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2638 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 2639 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2640 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpen::
# 2641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1461 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2642 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 2643 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have {STR_VAR_2} eligible POKéMON.\p"
# 2644 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have {STR_VAR_2} different POKéMON\n"
# 2645 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 2646 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 2647 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 2648 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 2649 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2650 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles::
# 2651 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1471 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2652 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 2653 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have three eligible POKéMON.\p"
# 2654 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have three different POKéMON\n"
# 2655 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 2656 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 2657 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 2658 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 2659 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2660 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles::
# 2661 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1481 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2662 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 2663 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have three eligible POKéMON.\p"
# 2664 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have three different POKéMON\n"
# 2665 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 2666 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 2667 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 2668 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 2669 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2670 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles::
# 2671 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1491 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2672 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 2673 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have four eligible POKéMON.\p"
# 2674 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have four different POKéMON\n"
# 2675 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 2676 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 2677 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 2678 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 2679 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2680 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles::
# 2681 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1501 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2682 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 2683 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have four eligible POKéMON.\p"
# 2684 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have four different POKéMON\n"
# 2685 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 2686 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 2687 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 2688 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 2689 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2690 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis::
# 2691 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1511 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2692 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 2693 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have two eligible POKéMON.\p"
# 2694 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have two different POKéMON\n"
# 2695 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 2696 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 2697 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 2698 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 2699 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2700 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis::
# 2701 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1521 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2702 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 2703 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have two eligible POKéMON.\p"
# 2704 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have two different POKéMON\n"
# 2705 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 2706 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 2707 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 2708 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 2709 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2710 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle::
# 2711 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1531 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2712 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
# 2713 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 2714 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER!\p"
# 2715 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the SINGLE\n"
# 2716 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOMS.$"
# 2717 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2718 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge::
# 2719 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1539 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2720 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the SINGLE\n"
# 2721 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOM challenge?$"
# 2722 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2723 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge::
# 2724 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1544 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2725 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's SINGLE BATTLE\n"
# 2726 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ROOMS are facilities for conducting\l"
# 2727 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "SINGLE BATTLES with three POKéMON.\p"
# 2728 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There are many SINGLE BATTLE ROOMS\n"
# 2729 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the BATTLE TOWER for team battles.\p"
# 2730 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In each of the SINGLE BATTLE ROOMS,\n"
# 2731 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "seven TRAINERS await your challenge.\p"
# 2732 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven,\n"
# 2733 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will earn Battle Points.\p"
# 2734 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 2735 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 2736 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 2737 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will be disqualified.$"
# 2738 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2739 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_SelectThreeMons::
# 2740 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2741 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the three POKéMON\n"
# 2742 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 2743 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2744 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle::
# 2745 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1565 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2746 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
# 2747 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 2748 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER!\p"
# 2749 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the DOUBLE\n"
# 2750 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOMS.$"
# 2751 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2752 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge::
# 2753 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1573 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2754 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the DOUBLE\n"
# 2755 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOM challenge?$"
# 2756 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2757 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge::
# 2758 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2759 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's DOUBLE BATTLE\n"
# 2760 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ROOMS are facilities for conducting\l"
# 2761 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "DOUBLE BATTLES with four POKéMON.\p"
# 2762 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There are many DOUBLE BATTLE ROOMS\n"
# 2763 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the BATTLE TOWER for team battles.\p"
# 2764 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In each of the DOUBLE BATTLE ROOMS,\n"
# 2765 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "seven TRAINERS await your challenge.\p"
# 2766 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven,\n"
# 2767 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will earn Battle Points.\p"
# 2768 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 2769 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 2770 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 2771 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will be disqualified.$"
# 2772 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2773 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons::
# 2774 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1594 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2775 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the four POKéMON\n"
# 2776 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 2777 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2778 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle::
# 2779 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1599 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2780 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
# 2781 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 2782 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER!\p"
# 2783 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the MULTI\n"
# 2784 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOMS.$"
# 2785 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2786 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge::
# 2787 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1607 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2788 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the MULTI\n"
# 2789 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOM challenge?$"
# 2790 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2791 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge::
# 2792 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1612 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2793 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's MULTI BATTLE\n"
# 2794 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ROOMS are facilities for conducting\l"
# 2795 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "MULTI BATTLES.\p"
# 2796 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For MULTI BATTLES, you must partner\n"
# 2797 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "with a TRAINER in the TOWER and enter\l"
# 2798 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "with two POKéMON each.\p"
# 2799 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Inside the TOWER is a room named\n"
# 2800 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the BATTLE SALON where you may meet\l"
# 2801 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "other TRAINERS.\p"
# 2802 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There, you must find a TRAINER to act\n"
# 2803 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "as your partner in MULTI BATTLES.\p"
# 2804 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Once you have partnered up, you will\n"
# 2805 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "be shown to a MULTI BATTLE ROOM.\p"
# 2806 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In the MULTI BATTLE ROOM, seven\n"
# 2807 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tag teams await your challenge.\p"
# 2808 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven\n"
# 2809 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teams, you will earn Battle Points.\p"
# 2810 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 2811 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 2812 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 2813 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will be disqualified.$"
# 2814 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2815 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons::
# 2816 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2817 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the two POKéMON\n"
# 2818 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 2819 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2820 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle::
# 2821 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2822 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
# 2823 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 2824 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER!\p"
# 2825 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the LINK MULTI\n"
# 2826 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOMS.$"
# 2827 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2828 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge::
# 2829 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1649 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2830 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the LINK MULTI\n"
# 2831 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOM challenge?$"
# 2832 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2833 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge::
# 2834 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1654 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2835 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's MULTI BATTLE\n"
# 2836 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ROOMS are facilities for conducting\l"
# 2837 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "MULTI BATTLES with a friend.\p"
# 2838 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must link with your friend using\n"
# 2839 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Wireless Adapters or a Game Boy\l"
# 2840 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Advance Game Link cable.\p"
# 2841 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must partner with your friend and\n"
# 2842 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "enter two different kinds of POKéMON.\p"
# 2843 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There are many MULTI BATTLE ROOMS\n"
# 2844 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the BATTLE TOWER for team battles.\p"
# 2845 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In a MULTI BATTLE ROOM, seven\n"
# 2846 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tag teams await you and your friend\l"
# 2847 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to make a tag-team challenge.\p"
# 2848 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven\n"
# 2849 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teams, you will earn Battle Points.\p"
# 2850 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please beware that unlike other ROOMS,\n"
# 2851 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you may not interrupt your challenge.\p"
# 2852 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Once you start, you must battle seven\n"
# 2853 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "MULTI BATTLES in a row nonstop.$"
# 2854 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2855 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2::
# 2856 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1676 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2857 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the two POKéMON\n"
# 2858 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 2859 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2860 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend::
# 2861 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1681 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2862 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You have chosen the same kind of\n"
# 2863 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "POKéMON as your friend.\p"
# 2864 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please choose two POKéMON different\n"
# 2865 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "from your friend's, match the level\l"
# 2866 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you wish to enter, and register again.$"
# 2867 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2868 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers::
# 2869 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1689 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2870 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The LINK MULTI BATTLE ROOM challenge\n"
# 2871 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is only for two linked players.$"
# 2872 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2873 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon::
# 2874 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1694 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2875 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected\n"
# 2876 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the POKéMON {STR_VAR_1}.$"
# 2877 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2878 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons::
# 2879 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1699 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2880 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected the\n"
# 2881 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "POKéMON {STR_VAR_1} and {STR_VAR_2}.$"
# 2882 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2883 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode::
# 2884 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1704 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2885 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
# 2886 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "battle level.$"
# 2887 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2888 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon::
# 2889 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1709 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2890 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
# 2891 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "battle level.\p"
# 2892 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected\n"
# 2893 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the POKéMON {STR_VAR_1}.$"
# 2894 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2895 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons::
# 2896 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1716 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2897 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
# 2898 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "battle level.\p"
# 2899 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected the\n"
# 2900 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "POKéMON {STR_VAR_1} and {STR_VAR_2}.$"
# 2901 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2902 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode::
# 2903 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1723 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2904 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please choose two POKéMON different\n"
# 2905 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "from your friend's, match the level\l"
# 2906 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you wish to enter, and register again.$"
# 2907 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2908 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn::
# 2909 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1729 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2910 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I will save the game before\n"
# 2911 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "showing you in. Please wait.$"
# 2912 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2913 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden::
# 2914 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1734 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2915 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Congratulations!\n"
# 2916 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You have defeated the SALON MAIDEN\l"
# 2917 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "and swept seven TRAINERS!$"
# 2918 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2919 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints::
# 2920 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1740 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2921 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In recognition of your infinite talent,\n"
# 2922 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "we award you these Battle Point(s).$"
# 2923 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2924 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_Text_ObtainedXBattlePoints::
# 2925 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1745 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2926 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} obtained {STR_VAR_1} Battle Point(s).$"
# 2927 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2928 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RulesAreListed::
# 2929 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1749 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2930 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER rules are listed.$"
# 2931 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2932 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading::
# 2933 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1753 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2934 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 2935 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2936 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules::
# 2937 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1757 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2938 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER is a facility where\n"
# 2939 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "four types of battles are waged--\l"
# 2940 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "SINGLE BATTLE, DOUBLE BATTLE, MULTI\l"
# 2941 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE, and LINK MULTI BATTLE.\p"
# 2942 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For each of these types, there are\n"
# 2943 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "separate BATTLE ROOMS.\p"
# 2944 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please speak with a guide offering\n"
# 2945 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the type of battle you wish to enter.$"
# 2946 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2947 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMonRules::
# 2948 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1768 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2949 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Depending on the BATTLE ROOM you are\n"
# 2950 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "entering, you will be required to take\l"
# 2951 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a certain number of POKéMON.\p"
# 2952 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The SINGLE BATTLE mode requires\n"
# 2953 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "three POKéMON.\p"
# 2954 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The DOUBLE BATTLE mode requires four,\n"
# 2955 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "and the MULTI modes both require two.$"
# 2956 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2957 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules::
# 2958 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1778 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2959 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE SALON is where you must\n"
# 2960 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "find a partner to form a tag team for\l"
# 2961 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the MULTI BATTLE ROOM challenge.\p"
# 2962 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Choose the best partner for you by\n"
# 2963 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "examining other TRAINERS'\l"
# 2964 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "POKéMON and their moves.\p"
# 2965 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You may choose a new tag partner\n"
# 2966 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "after winning seven straight matches.$"
# 2967 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2968 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules::
# 2969 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 1789 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
# 2970 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The LINK MULTI BATTLE Mode is for two\n"
# 2971 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "friends to mount a challenge together.\p"
# 2972 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You and your friend must be linked with\n"
# 2973 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Wireless Adapters or a GBA Game Link\l"
# 2974 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "cable.\p"
# 2975 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must choose two POKéMON at\n"
# 2976 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the registration counter.\p"
# 2977 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "These POKéMON must be different\n"
# 2978 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "from those of your friend.\p"
# 2979 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You may not interrupt this challenge\n"
# 2980 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the middle, unlike other modes.$"
