BattleFrontier_BattlePyramidTop_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidTop_OnResume
# 7 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidTop_OnTransition
# 8 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePyramidTop_OnWarp
# 3 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic
# 5 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidTop_EventScript_ShowMapName
	.2byte 0


BattleFrontier_BattlePyramidTop_OnTransition::
# 12 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
# 13 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
	end


# 17 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 18 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnWarp:
# 19 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects
# 20 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.2byte 0

BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects::
# 25 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_1, 1
# 26 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 27 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_TEMP_C, 0
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects_2
BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects_1:
# 30 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setobjectxyperm LOCALID_BRANDON, 0, 0
	return

BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects_2:
# 28 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects
	goto BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects_1


BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects::
	end


BattleFrontier_BattlePyramidTop_OnResume::
# 38 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getbrainstatus
# 39 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
	goto_if_eq BattleFrontier_BattlePyramidTop_OnResume_2
BattleFrontier_BattlePyramidTop_OnResume_1:
# 42 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
	return

BattleFrontier_BattlePyramidTop_OnResume_2:
# 40 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus
	goto BattleFrontier_BattlePyramidTop_OnResume_1


BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus::
# 46 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	copyvar VAR_TEMP_C, VAR_RESULT
# 47 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getstatus
# 48 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 49 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case 0, BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_3
# 51 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_4
# 53 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_5
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_1:
# 56 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 57 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_7
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_6:
# 60 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_DREW
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_10
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_9:
# 63 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_FORFEITED
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_13
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_12:
	end

BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_3:
# 50 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_1

BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_4:
# 52 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobby
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_1

BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_5:
# 54 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_1

BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_7:
# 58 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_6

BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_10:
# 61 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_9

BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_13:
# 64 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_12


BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic::
# 70 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 71 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
	end


BattleFrontier_BattlePyramidTop_EventScript_ShowMapName::
# 76 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special ShowMapNamePopup
# 77 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 0
	end


BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge::
# 82 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 83 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SavePlayerParty
# 84 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 85 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_settrainers
# 86 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 87 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
	end


BattleFrontier_BattlePyramidTop_EventScript_Attendant::
# 92 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lock
# 93 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	faceplayer
# 94 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_TEMP_D, 0
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_Attendant_2
BattleFrontier_BattlePyramidTop_EventScript_Attendant_1:
# 97 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_TEMP_C, FRONTIER_BRAIN_NOT_READY
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_Attendant_5
BattleFrontier_BattlePyramidTop_EventScript_Attendant_4:
# 100 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 102 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside
# 103 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 104 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop
# 105 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 106 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath
# 107 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 108 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid
# 109 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 110 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 111 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 112 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
	return

BattleFrontier_BattlePyramidTop_EventScript_Attendant_2:
# 95 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady
	goto BattleFrontier_BattlePyramidTop_EventScript_Attendant_1

BattleFrontier_BattlePyramidTop_EventScript_Attendant_5:
# 98 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside
	goto BattleFrontier_BattlePyramidTop_EventScript_Attendant_4


BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon::
# 116 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 117 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 118 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitstate
	end


BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady::
# 123 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady, MSGBOX_DEFAULT
# 124 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
	end


BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside::
# 129 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere, MSGBOX_DEFAULT
# 130 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside
# 131 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_D, 1
# 132 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
	end


BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon::
# 137 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lockall
# 138 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_C
# 139 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_3
# 141 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_4
# 143 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_5
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1:
# 146 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 147 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_7
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_6:
# 150 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 151 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp
# 152 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 153 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure, MSGBOX_DEFAULT
# 154 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 155 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 156 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 157 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 158 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon, MSGBOX_DEFAULT
# 159 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver
	end

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_3:
# 140 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_4:
# 142 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_5:
# 144 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_7:
# 148 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_6


BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech::
# 164 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 165 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
	return


BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver::
# 169 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle, MSGBOX_DEFAULT
# 170 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 171 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 172 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_2
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_1:
# 175 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	return

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_2:
# 173 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_1


BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver::
# 179 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 180 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver_2
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver_1:
# 183 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 185 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol
# 186 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 187 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 188 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 189 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting, MSGBOX_DEFAULT
# 190 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
	return

BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver_2:
# 181 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
	goto BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver_1


BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold::
# 194 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 195 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_2
BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_1:
# 198 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 199 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp
# 200 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 201 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned, MSGBOX_DEFAULT
# 202 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 203 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 204 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 205 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 206 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter, MSGBOX_DEFAULT
# 207 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold
	end

BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_2:
# 196 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_1


BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech::
# 212 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 213 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
	return


BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold::
# 217 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_EverythingYouHave, MSGBOX_DEFAULT
# 218 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 219 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 220 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_2
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_1:
# 223 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	return

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_2:
# 221 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_1


BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold::
# 227 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 228 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold_2
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold_1:
# 231 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis, MSGBOX_DEFAULT
# 232 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 233 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine
# 234 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 235 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 236 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 237 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_FarewellForNow, MSGBOX_DEFAULT
# 238 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
	return

BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold_2:
# 229 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
	goto BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold_1


BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle::
# 242 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 243 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PYRAMID
# 244 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitstate
	return


# 248 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside:
# 249 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_right
# 250 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_left
# 251 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end

# 254 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath:
# 255 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_left
# 256 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_up
# 257 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end

# 260 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop:
# 261 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 262 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 263 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 264 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 265 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 266 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_down
# 267 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end

# 270 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer:
# 271 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_fast_down
# 272 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end

# 275 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_CameraPanUp:
# 276 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_slow_up
# 277 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_slow_up
# 278 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	delay_16
# 279 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end

BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo::
# 282 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "It is a delight to see you here!\n"
	.string "You have reached the summit of\l"
	.string "the BATTLE PYRAMID!\p"
	.string "Above here is the PYRAMID's\n"
	.string "lookout point.\p"
	.string "It is a place open only to those\n"
	.string "who have conquered the PYRAMID.\p"
	.string "Now, please!\n"
	.string "Up you go!$"

BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid::
# 294 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The PYRAMID's new conqueror!\n"
	.string "Let the name {PLAYER} be known!$"

BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere::
# 299 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "It is a delight to see you here!\p"
	.string "Unfortunately, you were second by\n"
	.string "a mere fraction of time!\p"
	.string "Our chief has already conquered\n"
	.string "the PYRAMID ahead of you.\p"
	.string "However, my young explorer…\n"
	.string "You are a TRAINER!\p"
	.string "Assert your power and take the glory\n"
	.string "of the pinnacle from our chief!\p"
	.string "Now, please! When you are ready,\n"
	.string "take one more step of courage!$"

BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure::
# 313 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Young adventurer…\p"
	.string "Wouldn't you agree that explorations\n"
	.string "are the grandest of adventures?\p"
	.string "Your own wits!\p"
	.string "Your own strength!\p"
	.string "Your own POKéMON!\p"
	.string "And, above all, only your own courage\n"
	.string "to lead you through unknown worlds…$"

BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon::
# 324 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Aah, yes, indeed this life is grand!\n"
	.string "Grand, it is! Eh?\p"
	.string "I'm BRANDON!\p"
	.string "I'm the PYRAMID KING, which means\n"
	.string "I'm in charge here.\p"
	.string "Most people call me the chief!\p"
	.string "You coming here means you have\n"
	.string "that much confidence in yourself,\l"
	.string "am I right?\p"
	.string "Hahahah!\n"
	.string "This should be exciting!$"

BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle::
# 338 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, then!\n"
	.string "Bring your courage to our battle!$"

BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease::
# 343 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: Hahahah! Grand it was!\n"
	.string "Grand, yes, indeed!\p"
	.string "Well done! You've earned recognition!\n"
	.string "Your FRONTIER PASS, please!$"

BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol::
# 350 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The Brave Symbol was embossed on\n"
	.string "the FRONTIER PASS!$"

BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting::
# 355 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Young explorer!\n"
	.string "I look forward to our next meeting!$"

BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned::
# 360 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: …You've finally returned,\n"
	.string "young explorer…\p"
	.string "Your love of adventure seems to come\n"
	.string "deep from within your heart…\p"
	.string "Yes… You are exactly as I was in\n"
	.string "my own youth…\p"
	.string "… … …Ah…\p"
	.string "The passionate!\p"
	.string "The dangerous!\p"
	.string "The desperate!\p"
	.string "Those days of death-defying,\n"
	.string "life-affirming adventures are back…$"

BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter::
# 375 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, then!\p"
	.string "I sense my own courage is off\n"
	.string "the meter!$"

BattleFrontier_BattlePyramidTop_Text_EverythingYouHave::
# 381 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Everything you have!\n"
	.string "I'm braced for it all!$"

BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis::
# 386 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: Hahahah!\n"
	.string "Remarkable!\l"
	.string "Yes, it's grand, indeed!\p"
	.string "Young explorer!\p"
	.string "You've bested me through and through!\n"
	.string "Here! I want you to have this!$"

BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine::
# 395 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The Brave Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattlePyramidTop_Text_FarewellForNow::
# 400 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Ah, yes! It just goes to show that\n"
	.string "I have much to learn still!\p"
	.string "May our paths cross again!\n"
	.string "Farewell for now, young explorer!$"

BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady::
# 407 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, when you are ready, take courage\n"
	.string "and step forward.$"
