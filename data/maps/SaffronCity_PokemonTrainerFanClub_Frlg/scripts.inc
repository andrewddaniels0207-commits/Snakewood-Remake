SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts::
# 5 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonTrainerFanClub_OnTransition
# 2 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
	.2byte 0


SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 9 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lockall
# 10 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 11 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_WalkInPlaceFasterDown
# 12 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 13 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	playse SE_PIN
# 14 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_ExclamationMark
# 15 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 16 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_Delay48
# 17 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 18 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HuhYou
# 19 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	closemessage
# 20 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 21 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 22 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 23 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 24 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow
# 25 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
# 26 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	releaseall
	end


# 30 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer:
# 31 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_16
# 32 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_8
# 33 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_down
# 34 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_16
# 35 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_down
# 36 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_8
# 37 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_left
# 38 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	step_end

SaffronCity_PokemonTrainerFanClub_OnTransition::
# 42 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_OnTransition_2
SaffronCity_PokemonTrainerFanClub_OnTransition_1:
# 45 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
	goto_if_eq SaffronCity_PokemonTrainerFanClub_OnTransition_5
SaffronCity_PokemonTrainerFanClub_OnTransition_4:
	end

SaffronCity_PokemonTrainerFanClub_OnTransition_2:
# 43 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting
	goto SaffronCity_PokemonTrainerFanClub_OnTransition_1

SaffronCity_PokemonTrainerFanClub_OnTransition_5:
# 46 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
	goto SaffronCity_PokemonTrainerFanClub_OnTransition_4


SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 52 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_TryLoseFansFromPlayTime
# 53 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 54 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 55 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_2
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_1:
# 58 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 59 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 60 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_5
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_4:
# 63 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 64 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 65 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_8
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_7:
# 68 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 69 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 70 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_11
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_10:
# 73 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 74 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 75 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_14
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_13:
# 78 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 79 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 80 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_17
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_16:
# 83 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 84 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 85 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_20
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_19:
# 88 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 89 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 90 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_23
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_22:
	end

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_2:
# 56 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_1

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_5:
# 61 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_4

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_8:
# 66 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_7

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_11:
# 71 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_10

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_14:
# 76 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_13

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_17:
# 81 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_16

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_20:
# 86 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_19

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_23:
# 91 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_22


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
# 97 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, 5, 2
# 98 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, MOVEMENT_TYPE_FACE_UP
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
# 103 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, 7, 4
# 104 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, MOVEMENT_TYPE_FACE_LEFT
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
# 109 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, 2, 2
# 110 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, MOVEMENT_TYPE_FACE_UP
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 115 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 3, 4
# 116 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, MOVEMENT_TYPE_FACE_RIGHT
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 121 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_ROCKER, 4, 6
# 122 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_ROCKER, MOVEMENT_TYPE_FACE_UP
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 127 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 10, 3
# 128 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_WOMAN, MOVEMENT_TYPE_FACE_UP
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 133 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BEAUTY, 7, 5
# 134 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BEAUTY, MOVEMENT_TYPE_FACE_LEFT
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 139 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, 9, 6
# 140 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, MOVEMENT_TYPE_FACE_LEFT
	return


SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting::
# 145 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 146 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 147 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 148 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 149 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl::
# 154 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 155 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 156 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 157 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 158 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_2
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_1:
# 161 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 162 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_5
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_4:
# 165 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 166 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan
# 167 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore
# 168 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_2:
# 159 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_1

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_5:
# 163 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_4


SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan::
# 173 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 174 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan_2
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan_1:
# 177 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
# 178 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan_2:
# 175 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan_1


SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan::
# 183 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou
# 184 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan::
# 189 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe
# 190 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion::
# 195 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling
# 196 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 201 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 202 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 203 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 204 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 205 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_2
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_1:
# 208 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 209 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_5
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_4:
# 212 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 213 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
# 214 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina
# 215 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_2:
# 206 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_1

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_5:
# 210 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_4


SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
# 220 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 221 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_2
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_1:
# 224 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay
# 225 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_2:
# 222 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_1


SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
# 230 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan
# 231 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
# 236 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan
# 237 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
# 242 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay
# 243 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_Youngster::
# 248 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 249 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 250 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 251 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 252 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_2
SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_1:
# 255 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 256 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_5
SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_4:
# 259 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 260 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan
# 261 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero
# 262 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_2:
# 253 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_1

SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_5:
# 257 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_4


SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan::
# 267 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 268 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan_2
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan_1:
# 271 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts
# 272 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan_2:
# 269 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan_1


SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan::
# 277 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou
# 278 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan::
# 283 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd
# 284 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion::
# 289 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool
# 290 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman::
# 295 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 296 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 297 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 298 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 299 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_2
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_1:
# 302 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 303 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_5
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_4:
# 306 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 307 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan
# 308 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre
# 309 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_2:
# 300 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_1

SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_5:
# 304 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_4


SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan::
# 314 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 315 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan_2
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan_1:
# 318 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle
# 319 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan_2:
# 316 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan_1


SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan::
# 324 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence
# 325 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan::
# 330 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo
# 331 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion::
# 336 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning
# 337 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_Woman::
# 342 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 343 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 344 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 345 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 346 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 347 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Woman_2
SaffronCity_PokemonTrainerFanClub_EventScript_Woman_1:
# 350 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 351 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
# 352 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire
# 353 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Woman_2:
# 348 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Woman_1


SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
# 358 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 359 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_2
SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_1:
# 362 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle
# 363 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_2:
# 360 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_1


SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
# 368 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan
# 369 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
# 374 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou
# 375 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_Rocker::
# 380 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 381 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 382 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 383 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 384 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 385 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_2
SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_1:
# 388 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 389 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan
# 390 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks
# 391 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_2:
# 386 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_1


SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan::
# 396 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 397 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan_2
SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan_1:
# 400 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool
# 401 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan_2:
# 398 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan_1


SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan::
# 406 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans
# 407 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan::
# 412 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan
# 413 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_Beauty::
# 418 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 419 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 420 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 421 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 422 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 423 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_2
SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_1:
# 426 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 427 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan
# 428 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity
# 429 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_2:
# 424 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_1


SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan::
# 434 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 435 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan_2
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan_1:
# 438 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing
# 439 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan_2:
# 436 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan_1


SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan::
# 444 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan
# 445 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan::
# 450 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart
# 451 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt::
# 456 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 457 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 458 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 459 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 460 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 461 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_2
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_1:
# 464 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 465 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan
# 466 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect
# 467 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_2:
# 462 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_1


SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan::
# 472 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 473 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan_2
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan_1:
# 476 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational
# 477 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan_2:
# 474 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan_1


SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan::
# 482 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan
# 483 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan::
# 488 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster
# 489 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_Text_HuhYou::
# 493 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Huh?\n"
	.string "You…$"

SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow::
# 498 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Are you maybe…\n"
	.string "… …\p"
	.string "You are!\n"
	.string "You are {PLAYER}!\p"
	.string "We were just talking about you!\p"
	.string "We were talking about how an\n"
	.string "incredibly good TRAINER appeared.\p"
	.string "And that someone is you!\n"
	.string "You're so cool!\p"
	.string "So, we decided that we'll become\n"
	.string "your FAN CLUB!\p"
	.string "We all hope you'll keep battling\n"
	.string "and show us how cool you are.\p"
	.string "That way, maybe other people will\n"
	.string "become fans just like me.$"

SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou::
# 516 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll always be cheering for you!\p"
	.string "Go, {PLAYER}, go!$"

SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou::
# 521 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll always believe in you,\n"
	.string "{PLAYER}.\p"
	.string "Please show the others what you're\n"
	.string "like when you battle seriously.$"

SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore::
# 528 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm sorry.\n"
	.string "I was your fan before.\p"
	.string "But now, you seem to have lost\n"
	.string "the drive you had before.\p"
	.string "Lately, I think {STR_VAR_1} has been\n"
	.string "a lot cooler.$"

SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe::
# 537 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "{PLAYER}!\p"
	.string "Everyone's been all excited about\n"
	.string "you recently.\p"
	.string "I can understand why.\n"
	.string "I know that you're strong.\p"
	.string "But, do you know what?\p"
	.string "Once I became {STR_VAR_1}'s fan,\n"
	.string "I can't just stop being a fan.$"

SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling::
# 549 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I think TRAINERS are so cool when\n"
	.string "they're battling.\p"
	.string "Don't you think so, too?$"

SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts::
# 555 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh! It's {PLAYER}!\n"
	.string "Too cool!\p"
	.string "Oh!\n"
	.string "Oh, yeah!\p"
	.string "Can you autograph something?\n"
	.string "How about my shorts?$"

SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou::
# 564 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "However hot it's been…\p"
	.string "And however cold it may get…\p"
	.string "I've always believed in, and worn,\n"
	.string "shorts!\p"
	.string "I'm counting on you to keep\n"
	.string "winning!\p"
	.string "I believe in you just as much as\n"
	.string "I believe in shorts!$"

SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero::
# 575 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "BROCK's my hero!\n"
	.string "He's a man among men!\p"
	.string "Heheh, I got my mom to do\n"
	.string "something for me.\p"
	.string "I got her to embroider “BROCK”\n"
	.string "on my shorts!$"

SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd::
# 584 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "…  …\p"
	.string "…  …\n"
	.string "I'm BROCK's fan!\p"
	.string "Even if I were his only fan,\n"
	.string "I swear it on my rock-hard will,\l"
	.string "and on my shorts!\p"
	.string "I'll be his fan to the bitter end!$"

SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool::
# 594 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "BROCK's the last word on cool,\n"
	.string "end of story!\p"
	.string "Now there's a guy who I want to\n"
	.string "be like!$"

SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle::
# 601 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{PLAYER}, I've had the pleasure of\n"
	.string "watching you battle.\p"
	.string "It brings back sweet memories of\n"
	.string "my own long-lost youth.\p"
	.string "May you continue to find success.\n"
	.string "You have a fan in me!$"

SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence::
# 610 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I have journeyed far and wide\n"
	.string "across the lands.\p"
	.string "But never have I seen a TRAINER\n"
	.string "of your magnificence.\p"
	.string "Take courage in your abilities\n"
	.string "and keep battling on!\p"
	.string "Make that a promise to me,\n"
	.string "my young idol!$"

SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre::
# 621 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hmm…\n"
	.string "And you are?\p"
	.string "Were you hoping to sign up for\n"
	.string "a membership in our FAN CLUB?$"

SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo::
# 628 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Ah, so you are the much-\n"
	.string "talked-about {PLAYER}.\p"
	.string "You certainly do have the look of\n"
	.string "a winner.\p"
	.string "But for me to accept you as\n"
	.string "a true POKéMON great…\p"
	.string "… …\p"
	.string "You've still a ways to go!$"

SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning::
# 639 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "All of us gathered here are fans\n"
	.string "of POKéMON TRAINERS.\p"
	.string "The way they look in battle…\n"
	.string "They are the picture of coolness.\p"
	.string "Perhaps you will be talked about\n"
	.string "here, too, if you keep winning.$"

SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay::
# 648 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "It's {PLAYER}!\n"
	.string "It's {PLAYER}!\p"
	.string "I want to be like {PLAYER} one day!$"

SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan::
# 654 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Everyone stopped being {PLAYER}'s\n"
	.string "fan…\p"
	.string "But that means I can have {PLAYER}\n"
	.string "all to myself!\p"
	.string "Yay! Go for it!\n"
	.string "My one and only {PLAYER}!$"

SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina::
# 663 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Do you know what?\n"
	.string "I want to be like SABRINA!\p"
	.string "I want to be a psychic girl just\n"
	.string "like her!$"

SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan::
# 670 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Even if I'm the only one, I won't\n"
	.string "stop being SABRINA's fan.\p"
	.string "My dream is to be like SABRINA,\n"
	.string "cute, but cool.\p"
	.string "I want to be a psychic girl just\n"
	.string "like her!$"

SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay::
# 679 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I wonder if I can become a cool\n"
	.string "TRAINER one day?$"

SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool::
# 684 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, man, oh, man!\n"
	.string "Cool! Too cool!\p"
	.string "…Huh?\n"
	.string "No, not you.\p"
	.string "Just the way you battle.\n"
	.string "That's cool.$"

SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans::
# 693 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Yo, {PLAYER}!\p"
	.string "Looks like I'm the only one left\n"
	.string "out of your fans.\p"
	.string "But, you know, I like being an only\n"
	.string "fan… It's less stressful.\p"
	.string "Keep up and at it!$"

SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks::
# 702 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{STR_VAR_1}'s cool, huh?\n"
	.string "I love the way he talks.\p"
	.string "I'd really relish a chance to meet\n"
	.string "him in person once.$"

SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan::
# 709 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Huh, can you believe it?\n"
	.string "Everyone turned into your fans.\p"
	.string "So after all we've been through,\n"
	.string "I'm the lone {STR_VAR_1} fan?\p"
	.string "Eh, being the one and only\n"
	.string "{STR_VAR_1} fan's my style, anyway.$"

SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle::
# 718 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, my goodness!\n"
	.string "Is it really you, {PLAYER}?\p"
	.string "I have to tell you, I adore the\n"
	.string "way you battle.\p"
	.string "I hope you'll keep at it.\n"
	.string "I'll be your number one fan!$"

SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan::
# 727 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, my goodness!\n"
	.string "If it isn't {PLAYER}!\p"
	.string "It's so disappointing… I realized\n"
	.string "I'm your number-one-and-only fan!\p"
	.string "Well, it can't be helped!\n"
	.string "Let me cheer you on, at least!\p"
	.string "Hurray, hurray, {PLAYER}!$"

SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire::
# 737 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Recently, {STR_VAR_1} has been on\n"
	.string "fire.\p"
	.string "The way he battles… It's just \n"
	.string "the way that I like it!$"

SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou::
# 744 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, hello!\n"
	.string "If it isn't {PLAYER}!\p"
	.string "Lately, all everyone talks about\n"
	.string "is you.\p"
	.string "I'm feeling lonesome because I\n"
	.string "prefer {STR_VAR_1}.$"

SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing::
# 753 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Amazing!\n"
	.string "{PLAYER}, you really are amazing!\p"
	.string "Instead of just watching, maybe\n"
	.string "I should become a TRAINER, too.$"

SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan::
# 760 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm your only fan…\n"
	.string "Sigh… This is lonely…\p"
	.string "Can't you try harder and make the\n"
	.string "others take notice of you?$"

SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity::
# 767 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Master {STR_VAR_1} is so dignified…\n"
	.string "He is so my type.\p"
	.string "Why can't the others see the\n"
	.string "dignity he simply oozes?$"

SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart::
# 774 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I believe in Master {STR_VAR_1}\n"
	.string "with all my heart.\p"
	.string "Even if I am the only one to\n"
	.string "believe in him.\p"
	.string "I won't ever feel lonesome, though.\p"
	.string "Not if I keep thinking about Master\n"
	.string "{STR_VAR_1}.$"

SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational::
# 784 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah!\p"
	.string "Your battling style is most\n"
	.string "educational.\p"
	.string "I hope that you will keep plugging\n"
	.string "away at success, hiyah!$"

SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan::
# 792 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Instead of just watching others\n"
	.string "battle, battle yourself!\p"
	.string "…My DOJO's MASTER chewed me out\n"
	.string "like that…\p"
	.string "But I won't let that stop me from\n"
	.string "being your fan!\p"
	.string "I can't stop being your fan!$"

SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect::
# 802 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah! There is but one TRAINER\n"
	.string "who has my respect.\p"
	.string "And that is none other than my\n"
	.string "MASTER at the FIGHTING DOJO.\p"
	.string "You should become a fan of my\n"
	.string "MASTER like me! Hiyah!$"

SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster::
# 811 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah! I respect my MASTER at the\n"
	.string "FIGHTING DOJO.\p"
	.string "I will never become a fan of\n"
	.string "anyone other than my MASTER!\p"
	.string "I will even sneak out of the DOJO\n"
	.string "to spread word of his greatness.\p"
	.string "Hiyah!$"
