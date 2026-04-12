LittlerootTown_MaysHouse_1F_MapScripts::
# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
	.2byte 0


LittlerootTown_MaysHouse_1F_OnLoad::
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_lt LittlerootTown_MaysHouse_1F_OnLoad_2
LittlerootTown_MaysHouse_1F_OnLoad_1:
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_OnLoad_5
LittlerootTown_MaysHouse_1F_OnLoad_4:
	end

LittlerootTown_MaysHouse_1F_OnLoad_2:
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
	goto LittlerootTown_MaysHouse_1F_OnLoad_1

LittlerootTown_MaysHouse_1F_OnLoad_5:
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
	goto LittlerootTown_MaysHouse_1F_OnLoad_4


LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
	return


LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual_2
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual_1:
	return

LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual_2:
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
	goto LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual_1


LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
	return


LittlerootTown_MaysHouse_1F_OnTransition::
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_eq LittlerootTown_MaysHouse_1F_OnTransition_2
LittlerootTown_MaysHouse_1F_OnTransition_1:
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_eq LittlerootTown_MaysHouse_1F_OnTransition_5
LittlerootTown_MaysHouse_1F_OnTransition_4:
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_eq LittlerootTown_MaysHouse_1F_OnTransition_8
LittlerootTown_MaysHouse_1F_OnTransition_7:
	end

LittlerootTown_MaysHouse_1F_OnTransition_2:
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
	goto LittlerootTown_MaysHouse_1F_OnTransition_1

LittlerootTown_MaysHouse_1F_OnTransition_5:
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
	goto LittlerootTown_MaysHouse_1F_OnTransition_4

LittlerootTown_MaysHouse_1F_OnTransition_8:
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
	goto LittlerootTown_MaysHouse_1F_OnTransition_7


LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 2, 4
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 6, 5
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 1, 8
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	end


# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
	end


LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
	end


LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	end


# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

RivalsHouse_1F_EventScript_RivalMom::
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_RivalMom_2
RivalsHouse_1F_EventScript_RivalMom_1:
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalMom_5
RivalsHouse_1F_EventScript_RivalMom_4:
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_eq RivalsHouse_1F_EventScript_RivalMom_8
RivalsHouse_1F_EventScript_RivalMom_7:
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
	end

RivalsHouse_1F_EventScript_RivalMom_2:
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto RivalsHouse_1F_EventScript_GoHomeEverySoOften
	goto RivalsHouse_1F_EventScript_RivalMom_1

RivalsHouse_1F_EventScript_RivalMom_5:
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto RivalsHouse_1F_EventScript_RivalIsOnRoute103
	goto RivalsHouse_1F_EventScript_RivalMom_4

RivalsHouse_1F_EventScript_RivalMom_8:
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto RivalsHouse_1F_EventScript_RivalTooBusy
	goto RivalsHouse_1F_EventScript_RivalMom_7


RivalsHouse_1F_EventScript_RivalTooBusy::
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
	end


RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
	end


RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
	end


RivalsHouse_1F_EventScript_RivalSibling::
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
	end


LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
	end


LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
	end


LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
	end


LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
	end


LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_ne LittlerootTown_MaysHouse_1F_EventScript_MeetRival_2
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_1:
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_5
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_4:
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_8
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_7:
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_11
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_10:
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_14
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_13:
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_17
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_16:
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_20
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_19:
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_2:
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_1

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_5:
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_4

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_8:
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_7

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_11:
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_10

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_14:
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_13

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_17:
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_16

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_20:
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_19


LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
	return


# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
	return


# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

RivalsHouse_1F_Text_OhYoureTheNewNeighbor::
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
	.string "… … … … … … … … …\n"
	.string "… … … … … … … … …\p"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
	.string "neighbor! Hi!\p"
	.string "We have a {STR_VAR_1} about the same\n"
	.string "age as you.\p"
	.string "Our {STR_VAR_1} was excited about making\n"
	.string "a new friend.\p"
	.string "Our {STR_VAR_1} is upstairs, I think.$"

RivalsHouse_1F_Text_LikeChildLikeFather::
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
	.string "My husband is as wild about POKéMON\n"
	.string "as our child.\p"
	.string "If he's not at his LAB, he's likely\n"
	.string "scrabbling about in grassy places.$"

RivalsHouse_1F_Text_TooBusyToNoticeVisit::
# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
	.string "I guess our child is too busy with\n"
	.string "POKéMON to notice that you came\l"
	.string "to visit, {PLAYER}{KUN}.$"

RivalsHouse_1F_Text_WentOutToRoute103::
# 416 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
	.string "just a little while ago.\p"
	.string "Like father, like child.\n"
	.string "{RIVAL} can't stay quietly at home.$"

RivalsHouse_1F_Text_ShouldGoHomeEverySoOften::
# 423 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
	.string "travel with POKéMON.\p"
	.string "But you should go home every so often\n"
	.string "to let your mother know you're okay.\p"
	.string "She might not say it, but I'm sure she\n"
	.string "worries about you, {PLAYER}{KUN}.$"

RivalsHouse_1F_Text_MayWhoAreYou::
# 432 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
	.string "Who… Who are you?\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Oh, you're {PLAYER}{KUN}.\n"
	.string "So your move was today.\p"
	.string "Um… I'm MAY.\n"
	.string "Glad to meet you!\p"
	.string "I…\n"
	.string "I have this dream of becoming friends\l"
	.string "with POKéMON all over the world.\p"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
	.string "my dad, PROF. BIRCH.\p"
	.string "I was hoping that you would be nice,\n"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
	.string "Oh, this is silly, isn't it?\n"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
	.string "Eheheh…\p"
	.string "Oh, no! I forgot!\p"
	.string "I was supposed to go help Dad catch\n"
	.string "some wild POKéMON!\p"
	.string "{PLAYER}{KUN}, I'll catch you later!$"

RivalsHouse_1F_Text_BrendanWhoAreYou::
# 457 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
	.string "You…\p"
	.string "Who are you?\p"
	.string "Oh, you're {PLAYER}, aren't you?\n"
	.string "Moved in next door, right?\p"
	.string "I didn't know that you're a girl.\p"
	.string "Dad, PROF. BIRCH, said that our new\n"
	.string "next-door neighbor is a GYM LEADER's\l"
	.string "kid, so I assumed you'd be a guy.\p"
	.string "My name's BRENDAN.\n"
	.string "So, hi, neighbor!\p"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
	.string "a POKéMON?\p"
	.string "Do you want me to go catch you one?\p"
	.string "Aw, darn, I forgot…\p"
	.string "I'm supposed to go help my dad catch\n"
	.string "some wild POKéMON.\p"
	.string "Some other time, okay?$"

RivalsHouse_1F_Text_DoYouHavePokemon::
# 478 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
	.string "Do you already have your\n"
	.string "own POKéMON?$"
