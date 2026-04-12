TrainerHill_Entrance_MapScripts::
# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
	.2byte 0


TrainerHill_Entrance_OnTransition::
# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
	end


TrainerHill_Entrance_OnWarp::
	end


TrainerHill_Entrance_OnResume::
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TrainerHill_Entrance_OnResume_2
TrainerHill_Entrance_OnResume_1:
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 6
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
	end

TrainerHill_Entrance_OnResume_2:
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_TryFaceAttendant
	goto TrainerHill_Entrance_OnResume_1


TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TrainerHill_Entrance_EventScript_TryFaceAttendant_2
TrainerHill_Entrance_EventScript_TryFaceAttendant_1:
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
	end

TrainerHill_Entrance_EventScript_TryFaceAttendant_2:
# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
	goto TrainerHill_Entrance_EventScript_TryFaceAttendant_1


TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
	end


TrainerHill_Entrance_OnReturn::
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_NURSE
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_ATTENDANT
# 52 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_MAN
# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_GIRL
	end


TrainerHill_Entrance_OnLoad::
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_TEMP_D, 17
	goto_if_eq TrainerHill_Entrance_OnLoad_2
TrainerHill_Entrance_OnLoad_1:
	end

TrainerHill_Entrance_OnLoad_2:
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
	call TrainerHill_Entrance_EventScript_OpenCounterDoor
	goto TrainerHill_Entrance_OnLoad_1


TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
	return


TrainerHill_Entrance_EventScript_ExitElevator::
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


TrainerHill_Entrance_EventScript_ExitChallenge::
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallenge_2
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallenge_3
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_ExitChallenge_4
	return

TrainerHill_Entrance_EventScript_ExitChallenge_2:
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ExitChallengeLost
	return

TrainerHill_Entrance_EventScript_ExitChallenge_3:
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ExitChallengeECard
	return

TrainerHill_Entrance_EventScript_ExitChallenge_4:
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_EndExitChallenge
	return


TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
	return


TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
	return


TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	return


TrainerHill_Entrance_EventScript_EndExitChallenge::
	end


TrainerHill_Entrance_EventScript_Nurse::
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_TRAINER_HILL_NURSE
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
	end


TrainerHill_Entrance_EventScript_Attendant::
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TrainerHill_Entrance_EventScript_Attendant_2
TrainerHill_Entrance_EventScript_Attendant_1:
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
	return

TrainerHill_Entrance_EventScript_Attendant_2:
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ThanksForPlaying
	goto TrainerHill_Entrance_EventScript_Attendant_1


TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
	return


TrainerHill_Entrance_EventScript_AttendantEnd::
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
	end


TrainerHill_Entrance_EventScript_EntryTrigger::
# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_EntryTrigger_2
TrainerHill_Entrance_EventScript_EntryTrigger_1:
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TrainerHill_Entrance_EventScript_EntryTrigger_5
TrainerHill_Entrance_EventScript_EntryTrigger_4:
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TrainerHill_Entrance_EventScript_EntryTrigger_8
TrainerHill_Entrance_EventScript_EntryTrigger_7:
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
	return

TrainerHill_Entrance_EventScript_EntryTrigger_2:
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_Closed
	goto TrainerHill_Entrance_EventScript_EntryTrigger_1

TrainerHill_Entrance_EventScript_EntryTrigger_5:
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	call TrainerHill_Entrance_EventScript_SaveGame
	goto TrainerHill_Entrance_EventScript_EntryTrigger_4

TrainerHill_Entrance_EventScript_EntryTrigger_8:
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AllFloorsUsed
	goto TrainerHill_Entrance_EventScript_EntryTrigger_7


TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
	return


TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_AskChallengeTrainers_3
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_AskChallengeTrainers_4
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_AskChallengeTrainers_5
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_AskChallengeTrainers_6
TrainerHill_Entrance_EventScript_AskChallengeTrainers_1:
	end

TrainerHill_Entrance_EventScript_AskChallengeTrainers_3:
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ChooseChallenge
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers_1

TrainerHill_Entrance_EventScript_AskChallengeTrainers_4:
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers_1

TrainerHill_Entrance_EventScript_AskChallengeTrainers_5:
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_Info
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers_1

TrainerHill_Entrance_EventScript_AskChallengeTrainers_6:
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers_1


TrainerHill_Entrance_EventScript_Info::
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
	end


TrainerHill_Entrance_EventScript_ChooseChallenge::
# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_ChooseChallenge_3
# 202 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_ChooseChallenge_4
TrainerHill_Entrance_EventScript_ChooseChallenge_1:
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 206 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end

TrainerHill_Entrance_EventScript_ChooseChallenge_3:
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
	goto TrainerHill_Entrance_EventScript_ChooseChallenge_1

TrainerHill_Entrance_EventScript_ChooseChallenge_4:
# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
	goto TrainerHill_Entrance_EventScript_ChooseChallenge_1


TrainerHill_Entrance_EventScript_CancelEntry::
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


TrainerHill_Entrance_EventScript_SaveGame::
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TrainerHill_Entrance_EventScript_SaveGame_2
TrainerHill_Entrance_EventScript_SaveGame_1:
# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
	return

TrainerHill_Entrance_EventScript_SaveGame_2:
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_SaveFailed
	goto TrainerHill_Entrance_EventScript_SaveGame_1


TrainerHill_Entrance_EventScript_SaveFailed::
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
	end


TrainerHill_Entrance_EventScript_Closed::
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end

# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end

# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end

# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end

TrainerHill_Entrance_EventScript_Records::
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x8004, 0
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


TrainerHill_Entrance_EventScript_Man::
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Man_2
TrainerHill_Entrance_EventScript_Man_1:
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
	end

TrainerHill_Entrance_EventScript_Man_2:
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ManTrainerHillClosed
	goto TrainerHill_Entrance_EventScript_Man_1


TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
	end


TrainerHill_Entrance_EventScript_Girl::
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Girl_2
TrainerHill_Entrance_EventScript_Girl_1:
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
	end

TrainerHill_Entrance_EventScript_Girl_2:
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
	goto TrainerHill_Entrance_EventScript_Girl_1


TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
	end


TrainerHill_Entrance_EventScript_Clerk::
# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Clerk_2
TrainerHill_Entrance_EventScript_Clerk_1:
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Basic
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
	end

TrainerHill_Entrance_EventScript_Clerk_2:
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ExpandedPokemart
	goto TrainerHill_Entrance_EventScript_Clerk_1


TrainerHill_Entrance_Pokemart_Basic::
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartlistend
	return


TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
	end


TrainerHill_Entrance_Pokemart_Expanded::
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartlistend
	return


TrainerHill_Entrance_Text_StillGettingReady::
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
	.string "you may enjoy tag battles with many\l"
	.string "TRAINERS.\p"
	.string "Unfortunately, we're still getting\n"
	.string "things ready. Please come back later!$"

TrainerHill_Entrance_Text_WelcomeToTrainerHill::
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
	.string "This is the TRAINER HILL where\n"
	.string "you may enjoy tag battles with many\l"
	.string "TRAINERS!$"

TrainerHill_Entrance_Text_SaveGameBeforeEnter::
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
	.string "Before you enter, please save\n"
	.string "your game.$"

TrainerHill_Entrance_Text_TrainersUpToFloorX::
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
	.string "The TRAINERS here now are…\p"
	.string "Up to floor no. {STR_VAR_1}.$"

TrainerHill_Entrance_Text_TrainersInEveryRoom::
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
	.string "The TRAINERS here now are…\p"
	.string "There appear to be TRAINERS gathered\n"
	.string "in every room.$"

TrainerHill_Entrance_Text_LikeToChallengeTrainers::
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
	.string "waiting TRAINERS?$"

TrainerHill_Entrance_Text_TimeProgessGetSetGo::
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
	.string "Best of luck!\p"
	.string "On your marks…\p"
	.string "Get set…\p"
	.string "Go!$"

TrainerHill_Entrance_Text_PleaseVisitUsAgain::
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"

TrainerHill_Entrance_Text_TooBadTremendousEffort::
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
	.string "I think you put in a tremendous\n"
	.string "effort in your battling.\p"
	.string "Please come back and try again!$"

TrainerHill_Entrance_Text_HopeYouGiveItYourBest::
# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"

TrainerHill_Entrance_Text_MovedReceptionHereForSwitch::
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the TRAINERS switch places,\n"
	.string "the movement can be hectic.\p"
	.string "To avoid the stampede, we moved\n"
	.string "the reception counter here.\p"
	.string "I'm sorry for the inconvenience.$"

TrainerHill_Entrance_Text_ThankYouForPlaying::
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"

TrainerHill_Entrance_Text_ExplainTrainerHill::
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the TRAINER HILL, we conduct\n"
	.string "an event called the Time Attack.\p"
	.string "It is a race that measures how long\n"
	.string "you take to reach our owner on\l"
	.string "the rooftop from this counter.\p"
	.string "The fastest times are posted on\n"
	.string "the Time Board--try competing with\l"
	.string "your friends.\p"
	.string "In TRAINER battles along the way,\n"
	.string "neither Exp. Points nor money will\l"
	.string "be awarded.$"

TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon::
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
	.string "only one POKéMON with you.\p"
	.string "You will need at least two POKéMON\n"
	.string "to enter this event.$"

TrainerHill_Roof_Text_YouFinallyCameBravo::
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
	.string "You finally came!\n"
	.string "Yes, you have arrived!\p"
	.string "Wait! Don't say it!\n"
	.string "I know why you came all the way\l"
	.string "here by yourself!\p"
	.string "You wanted to see me, the owner\n"
	.string "of the TRAINER HILL, because…\p"
	.string "You want to form a tag team with me!\n"
	.string "Wa-hoo!\p"
	.string "…Uh?\n"
	.string "That's not it?\p"
	.string "Anyway, I watched you on your way up.\n"
	.string "Marvelous battling! Bravo, indeed!$"

TrainerHill_Roof_Text_HaveTheMostMarvelousGift::
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
	.string "I have the most marvelous gift!$"

TrainerHill_Roof_Text_FullUpBeBackLaterForThis::
# 456 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
	.string "You'll be back later for this!$"

TrainerHill_Roof_Text_GotHereMarvelouslyQuickly::
# 461 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
	.string "here marvelously quickly?\p"
	.string "How splendid! You needn't have\n"
	.string "hurried so to see me!\p"
	.string "That is so delightful. I'll have the Time\n"
	.string "Board at the reception updated!$"

TrainerHill_Roof_Text_YouWerentVeryQuick::
# 470 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
	.string "You weren't very quick getting here.$"

TrainerHill_Roof_Text_ArriveZippierNextTime::
# 475 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
	.string "arrived zippier next time.\p"
	.string "Then, I should be pleased to form\n"
	.string "a tag team with you!\p"
	.string "Until we meet again, amigo!$"

TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner::
# 483 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the TRAINER HILL built for but\n"
	.string "one reason and one only!\p"
	.string "To find the most suitable partner\n"
	.string "with whom I may form a tag team!$"

TrainerHill_Entrance_Text_ChallengeTime::
# 490 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"

TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead::
# 494 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of TRAINERS\n"
	.string "and POKéMON combos are ahead?\p"
	.string "All I know is that I'll knock aside\n"
	.string "anyone that stands in my way!$"

TrainerHill_Entrance_Text_CantWaitToTestTheWaters::
# 501 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough TRAINERS come to this\n"
	.string "TRAINER HILL from all over.\p"
	.string "I can't wait to test the waters!\p"
	.string "I'll knock aside anyone that stands\n"
	.string "in my way!$"

TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop::
# 509 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
	.string "My friends and I are trying to see who\n"
	.string "can reach the top in the least time.$"

TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen::
# 515 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
	.string "this place up?\p"
	.string "I'm waiting here to be the first\n"
	.string "challenger ever!$"

TrainerHill_Elevator_Text_ReturnToReception::
# 522 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
	.string "the reception counter?$"
