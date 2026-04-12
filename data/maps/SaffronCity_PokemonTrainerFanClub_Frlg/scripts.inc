# 1 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 5 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 4 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonTrainerFanClub_OnTransition
# 5 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 2 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 6 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 9 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 3 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 11 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
# 12 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 14 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 15 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 16 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 9 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 17 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lockall
# 18 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 10 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 19 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 20 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 11 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 21 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_WalkInPlaceFasterDown
# 22 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 12 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 23 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 24 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 13 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 25 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	playse SE_PIN
# 26 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 14 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 27 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_ExclamationMark
# 28 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 15 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 29 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 16 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 31 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_Delay48
# 32 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 17 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 33 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 34 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 18 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 35 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HuhYou
# 36 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 19 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 37 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	closemessage
# 38 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 20 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 39 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 40 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 21 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 41 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 42 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 22 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 43 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 44 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 23 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 45 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 46 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 24 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 47 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow
# 48 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 25 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 49 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
# 50 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 26 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 51 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	releaseall
# 52 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 53 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 54 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 55 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 30 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 56 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer:
# 57 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 31 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 58 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_16
# 59 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 32 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 60 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_8
# 61 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 33 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 62 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_down
# 63 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 34 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 64 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_16
# 65 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 35 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 66 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_down
# 67 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 36 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 68 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_8
# 69 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 37 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 70 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_left
# 71 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 38 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 72 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	step_end
# 73 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 74 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_OnTransition::
# 75 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 42 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 76 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1
# 77 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_OnTransition_2
# 78 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_OnTransition_1:
# 79 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 45 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 80 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
# 81 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_OnTransition_5
# 82 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_OnTransition_4:
# 83 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 84 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 85 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_OnTransition_2:
# 86 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 43 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 87 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting
# 88 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_OnTransition_1
# 89 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 90 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_OnTransition_5:
# 91 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 46 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 92 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
# 93 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_OnTransition_4
# 94 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 95 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 96 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 97 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 52 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 98 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_TryLoseFansFromPlayTime
# 99 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 53 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 100 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 101 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 54 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 102 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 103 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 55 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 104 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 105 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_2
# 106 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_1:
# 107 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 58 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 108 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 109 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 59 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 110 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 111 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 60 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 112 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 113 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_5
# 114 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_4:
# 115 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 63 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 116 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 117 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 64 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 118 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 119 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 65 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 120 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 121 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_8
# 122 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_7:
# 123 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 68 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 124 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 125 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 69 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 126 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 127 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 70 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 128 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 129 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_11
# 130 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_10:
# 131 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 73 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 132 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 133 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 74 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 134 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 135 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 75 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 136 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 137 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_14
# 138 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_13:
# 139 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 78 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 140 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 141 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 79 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 142 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 143 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 80 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 144 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 145 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_17
# 146 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_16:
# 147 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 83 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 148 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 149 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 84 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 150 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 151 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 85 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 152 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 153 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_20
# 154 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_19:
# 155 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 88 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 156 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 157 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 89 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 158 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 159 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 90 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 160 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 161 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_23
# 162 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_22:
# 163 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 164 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 165 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_2:
# 166 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 56 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 167 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
# 168 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_1
# 169 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 170 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_5:
# 171 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 61 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 172 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 173 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_4
# 174 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 175 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_8:
# 176 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 66 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 177 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
# 178 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_7
# 179 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 180 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_11:
# 181 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 71 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 182 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 183 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_10
# 184 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 185 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_14:
# 186 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 76 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 187 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 188 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_13
# 189 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 190 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_17:
# 191 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 81 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 192 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 193 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_16
# 194 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 195 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_20:
# 196 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 86 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 197 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 198 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_19
# 199 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 200 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_23:
# 201 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 91 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 202 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 203 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_22
# 204 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 205 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 206 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
# 207 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 97 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 208 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, 5, 2
# 209 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 98 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 210 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, MOVEMENT_TYPE_FACE_UP
# 211 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 212 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 213 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 214 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
# 215 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 103 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 216 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, 7, 4
# 217 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 104 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 218 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, MOVEMENT_TYPE_FACE_LEFT
# 219 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 220 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 221 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 222 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
# 223 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 109 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 224 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, 2, 2
# 225 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 110 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 226 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, MOVEMENT_TYPE_FACE_UP
# 227 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 228 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 229 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 230 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 231 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 115 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 232 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 3, 4
# 233 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 116 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 234 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, MOVEMENT_TYPE_FACE_RIGHT
# 235 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 236 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 237 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 238 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 239 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 121 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 240 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_ROCKER, 4, 6
# 241 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 122 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 242 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_ROCKER, MOVEMENT_TYPE_FACE_UP
# 243 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 244 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 245 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 246 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 247 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 127 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 248 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 10, 3
# 249 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 128 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 250 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_WOMAN, MOVEMENT_TYPE_FACE_UP
# 251 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 252 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 253 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 254 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 255 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 133 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 256 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BEAUTY, 7, 5
# 257 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 134 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 258 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BEAUTY, MOVEMENT_TYPE_FACE_LEFT
# 259 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 260 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 261 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 262 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 263 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 139 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 264 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, 9, 6
# 265 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 140 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 266 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, MOVEMENT_TYPE_FACE_LEFT
# 267 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 268 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 269 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 270 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting::
# 271 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 145 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 272 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 273 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 146 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 274 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 275 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 147 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 276 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 277 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 148 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 278 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 279 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 149 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 280 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 281 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 282 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 283 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 284 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl::
# 285 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 154 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 286 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 287 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 155 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 288 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 289 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 156 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 290 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 291 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 157 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 292 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 293 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 158 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 294 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
# 295 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_2
# 296 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_1:
# 297 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 161 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 298 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 299 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 162 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 300 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 301 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_5
# 302 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_4:
# 303 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 165 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 304 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 305 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 166 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 306 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan
# 307 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 167 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 308 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore
# 309 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 168 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 310 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 311 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 312 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 313 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_2:
# 314 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 159 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 315 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion
# 316 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_1
# 317 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 318 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_5:
# 319 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 163 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 320 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan
# 321 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_4
# 322 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 323 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 324 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan::
# 325 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 173 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 326 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 327 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 174 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 328 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 329 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan_2
# 330 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan_1:
# 331 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 177 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 332 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
# 333 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 178 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 334 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 335 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 336 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 337 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan_2:
# 338 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 175 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 339 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan
# 340 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan_1
# 341 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 342 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 343 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan::
# 344 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 183 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 345 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou
# 346 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 184 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 347 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 348 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 349 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 350 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 351 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan::
# 352 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 189 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 353 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe
# 354 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 190 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 355 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 356 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 357 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 358 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 359 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion::
# 360 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 195 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 361 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling
# 362 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 196 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 363 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 364 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 365 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 366 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 367 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 368 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 201 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 369 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 370 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 202 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 371 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 372 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 203 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 373 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 374 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 204 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 375 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 376 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 205 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 377 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
# 378 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_2
# 379 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_1:
# 380 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 208 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 381 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 382 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 209 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 383 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 384 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_5
# 385 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_4:
# 386 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 212 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 387 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 388 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 213 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 389 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
# 390 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 214 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 391 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina
# 392 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 215 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 393 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 394 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 395 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 396 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_2:
# 397 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 206 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 398 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
# 399 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_1
# 400 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 401 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_5:
# 402 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 210 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 403 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
# 404 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_4
# 405 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 406 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 407 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
# 408 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 220 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 409 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 410 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 221 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 411 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 412 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_2
# 413 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_1:
# 414 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 224 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 415 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay
# 416 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 225 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 417 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 418 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 419 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 420 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_2:
# 421 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 222 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 422 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
# 423 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_1
# 424 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 425 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 426 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
# 427 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 230 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 428 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan
# 429 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 231 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 430 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 431 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 432 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 433 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 434 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
# 435 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 236 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 436 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan
# 437 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 237 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 438 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 439 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 440 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 441 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 442 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
# 443 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 242 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 444 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay
# 445 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 243 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 446 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 447 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 448 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 449 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 450 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Youngster::
# 451 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 248 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 452 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 453 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 249 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 454 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 455 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 250 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 456 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 457 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 251 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 458 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 459 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 252 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 460 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
# 461 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_2
# 462 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_1:
# 463 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 255 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 464 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 465 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 256 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 466 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 467 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_5
# 468 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_4:
# 469 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 259 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 470 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 471 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 260 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 472 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan
# 473 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 261 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 474 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero
# 475 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 262 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 476 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 477 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 478 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 479 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_2:
# 480 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 253 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 481 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion
# 482 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_1
# 483 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 484 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_5:
# 485 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 257 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 486 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan
# 487 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_4
# 488 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 489 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 490 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan::
# 491 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 267 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 492 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 493 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 268 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 494 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 495 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan_2
# 496 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan_1:
# 497 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 271 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 498 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts
# 499 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 272 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 500 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 501 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 502 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 503 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan_2:
# 504 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 269 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 505 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan
# 506 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan_1
# 507 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 508 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 509 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan::
# 510 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 277 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 511 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou
# 512 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 278 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 513 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 514 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 515 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 516 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 517 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan::
# 518 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 283 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 519 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd
# 520 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 284 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 521 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 522 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 523 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 524 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 525 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion::
# 526 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 289 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 527 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool
# 528 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 290 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 529 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 530 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 531 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 532 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 533 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman::
# 534 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 295 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 535 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 536 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 296 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 537 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 538 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 297 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 539 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 540 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 298 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 541 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 542 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 299 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 543 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
# 544 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_2
# 545 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_1:
# 546 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 302 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 547 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 548 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 303 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 549 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 550 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_5
# 551 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_4:
# 552 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 306 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 553 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 554 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 307 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 555 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan
# 556 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 308 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 557 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre
# 558 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 309 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 559 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 560 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 561 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 562 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_2:
# 563 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 300 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 564 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion
# 565 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_1
# 566 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 567 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_5:
# 568 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 304 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 569 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan
# 570 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_4
# 571 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 572 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 573 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan::
# 574 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 314 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 575 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 576 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 315 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 577 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 578 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan_2
# 579 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan_1:
# 580 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 318 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 581 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle
# 582 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 319 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 583 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 584 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 585 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 586 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan_2:
# 587 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 316 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 588 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan
# 589 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan_1
# 590 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 591 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 592 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan::
# 593 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 324 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 594 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence
# 595 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 325 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 596 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 597 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 598 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 599 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 600 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan::
# 601 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 330 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 602 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo
# 603 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 331 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 604 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 605 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 606 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 607 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 608 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion::
# 609 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 336 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 610 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning
# 611 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 337 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 612 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 613 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 614 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 615 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 616 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Woman::
# 617 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 342 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 618 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 619 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 343 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 620 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 621 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 344 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 622 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 623 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 345 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 624 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 625 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 346 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 626 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 627 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 347 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 628 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 629 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Woman_2
# 630 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Woman_1:
# 631 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 350 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 632 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 633 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 351 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 634 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
# 635 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 352 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 636 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire
# 637 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 353 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 638 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 639 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 640 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 641 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Woman_2:
# 642 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 348 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 643 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
# 644 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Woman_1
# 645 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 646 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 647 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
# 648 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 358 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 649 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 650 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 359 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 651 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 652 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_2
# 653 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_1:
# 654 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 362 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 655 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle
# 656 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 363 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 657 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 658 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 659 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 660 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_2:
# 661 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 360 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 662 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
# 663 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_1
# 664 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 665 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 666 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
# 667 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 368 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 668 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan
# 669 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 369 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 670 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 671 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 672 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 673 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 674 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
# 675 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 374 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 676 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou
# 677 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 375 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 678 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 679 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 680 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 681 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 682 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Rocker::
# 683 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 380 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 684 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 685 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 381 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 686 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 687 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 382 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 688 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 689 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 383 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 690 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 691 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 384 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 692 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 693 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 385 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 694 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 695 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_2
# 696 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_1:
# 697 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 388 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 698 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 699 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 389 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 700 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan
# 701 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 390 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 702 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks
# 703 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 391 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 704 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 705 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 706 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 707 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_2:
# 708 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 386 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 709 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan
# 710 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_1
# 711 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 712 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 713 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan::
# 714 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 396 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 715 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 716 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 397 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 717 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 718 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan_2
# 719 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan_1:
# 720 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 400 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 721 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool
# 722 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 401 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 723 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 724 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 725 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 726 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan_2:
# 727 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 398 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 728 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan
# 729 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan_1
# 730 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 731 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 732 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan::
# 733 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 406 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 734 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans
# 735 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 407 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 736 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 737 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 738 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 739 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 740 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan::
# 741 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 412 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 742 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan
# 743 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 413 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 744 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 745 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 746 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 747 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 748 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Beauty::
# 749 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 418 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 750 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 751 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 419 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 752 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 753 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 420 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 754 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 755 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 421 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 756 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 757 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 422 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 758 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 759 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 423 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 760 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 761 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_2
# 762 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_1:
# 763 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 426 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 764 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 765 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 427 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 766 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan
# 767 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 428 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 768 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity
# 769 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 429 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 770 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 771 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 772 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 773 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_2:
# 774 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 424 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 775 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan
# 776 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_1
# 777 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 778 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 779 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan::
# 780 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 434 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 781 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 782 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 435 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 783 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 784 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan_2
# 785 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan_1:
# 786 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 438 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 787 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing
# 788 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 439 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 789 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 790 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 791 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 792 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan_2:
# 793 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 436 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 794 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan
# 795 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan_1
# 796 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 797 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 798 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan::
# 799 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 444 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 800 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan
# 801 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 445 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 802 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 803 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 804 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 805 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 806 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan::
# 807 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 450 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 808 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart
# 809 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 451 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 810 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 811 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 812 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 813 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 814 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt::
# 815 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 456 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 816 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 817 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 457 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 818 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 819 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 458 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 820 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 821 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 459 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 822 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 823 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 460 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 824 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 825 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 461 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 826 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 827 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_2
# 828 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_1:
# 829 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 464 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 830 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 831 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 465 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 832 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan
# 833 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 466 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 834 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect
# 835 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 467 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 836 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 837 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 838 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 839 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_2:
# 840 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 462 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 841 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan
# 842 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_1
# 843 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 844 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 845 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan::
# 846 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 472 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 847 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 848 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 473 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 849 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 850 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan_2
# 851 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan_1:
# 852 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 476 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 853 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational
# 854 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 477 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 855 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 856 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 857 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 858 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan_2:
# 859 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 474 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 860 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan
# 861 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan_1
# 862 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 863 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 864 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan::
# 865 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 482 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 866 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan
# 867 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 483 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 868 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 869 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 870 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 871 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 872 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan::
# 873 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 488 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 874 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster
# 875 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 489 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 876 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 877 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 878 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 879 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 880 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_HuhYou::
# 881 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 493 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 882 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Huh?\n"
# 883 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You…$"
# 884 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 885 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow::
# 886 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 498 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 887 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Are you maybe…\n"
# 888 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "… …\p"
# 889 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You are!\n"
# 890 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You are {PLAYER}!\p"
# 891 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "We were just talking about you!\p"
# 892 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "We were talking about how an\n"
# 893 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "incredibly good TRAINER appeared.\p"
# 894 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "And that someone is you!\n"
# 895 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You're so cool!\p"
# 896 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "So, we decided that we'll become\n"
# 897 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "your FAN CLUB!\p"
# 898 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "We all hope you'll keep battling\n"
# 899 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "and show us how cool you are.\p"
# 900 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "That way, maybe other people will\n"
# 901 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "become fans just like me.$"
# 902 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 903 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou::
# 904 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 516 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 905 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll always be cheering for you!\p"
# 906 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Go, {PLAYER}, go!$"
# 907 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 908 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou::
# 909 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 521 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 910 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll always believe in you,\n"
# 911 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{PLAYER}.\p"
# 912 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Please show the others what you're\n"
# 913 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "like when you battle seriously.$"
# 914 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 915 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore::
# 916 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 528 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 917 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm sorry.\n"
# 918 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I was your fan before.\p"
# 919 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But now, you seem to have lost\n"
# 920 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "the drive you had before.\p"
# 921 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Lately, I think {STR_VAR_1} has been\n"
# 922 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "a lot cooler.$"
# 923 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 924 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe::
# 925 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 537 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 926 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh!\n"
# 927 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 928 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Everyone's been all excited about\n"
# 929 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "you recently.\p"
# 930 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I can understand why.\n"
# 931 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I know that you're strong.\p"
# 932 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But, do you know what?\p"
# 933 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Once I became {STR_VAR_1}'s fan,\n"
# 934 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I can't just stop being a fan.$"
# 935 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 936 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling::
# 937 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 549 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 938 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I think TRAINERS are so cool when\n"
# 939 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "they're battling.\p"
# 940 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Don't you think so, too?$"
# 941 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 942 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts::
# 943 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 555 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 944 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh! It's {PLAYER}!\n"
# 945 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Too cool!\p"
# 946 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh!\n"
# 947 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, yeah!\p"
# 948 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Can you autograph something?\n"
# 949 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "How about my shorts?$"
# 950 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 951 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou::
# 952 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 564 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 953 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "However hot it's been…\p"
# 954 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "And however cold it may get…\p"
# 955 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I've always believed in, and worn,\n"
# 956 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "shorts!\p"
# 957 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm counting on you to keep\n"
# 958 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "winning!\p"
# 959 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I believe in you just as much as\n"
# 960 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I believe in shorts!$"
# 961 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 962 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero::
# 963 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 575 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 964 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "BROCK's my hero!\n"
# 965 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "He's a man among men!\p"
# 966 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Heheh, I got my mom to do\n"
# 967 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "something for me.\p"
# 968 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I got her to embroider “BROCK”\n"
# 969 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "on my shorts!$"
# 970 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 971 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd::
# 972 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 584 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 973 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "…  …\p"
# 974 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "…  …\n"
# 975 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm BROCK's fan!\p"
# 976 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Even if I were his only fan,\n"
# 977 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I swear it on my rock-hard will,\l"
# 978 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "and on my shorts!\p"
# 979 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll be his fan to the bitter end!$"
# 980 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 981 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool::
# 982 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 594 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 983 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "BROCK's the last word on cool,\n"
# 984 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "end of story!\p"
# 985 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Now there's a guy who I want to\n"
# 986 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "be like!$"
# 987 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 988 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle::
# 989 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 601 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 990 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{PLAYER}, I've had the pleasure of\n"
# 991 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "watching you battle.\p"
# 992 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "It brings back sweet memories of\n"
# 993 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "my own long-lost youth.\p"
# 994 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "May you continue to find success.\n"
# 995 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You have a fan in me!$"
# 996 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 997 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence::
# 998 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 610 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 999 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I have journeyed far and wide\n"
# 1000 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "across the lands.\p"
# 1001 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But never have I seen a TRAINER\n"
# 1002 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "of your magnificence.\p"
# 1003 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Take courage in your abilities\n"
# 1004 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "and keep battling on!\p"
# 1005 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Make that a promise to me,\n"
# 1006 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "my young idol!$"
# 1007 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1008 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre::
# 1009 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 621 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1010 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hmm…\n"
# 1011 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "And you are?\p"
# 1012 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Were you hoping to sign up for\n"
# 1013 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "a membership in our FAN CLUB?$"
# 1014 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1015 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo::
# 1016 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 628 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1017 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Ah, so you are the much-\n"
# 1018 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "talked-about {PLAYER}.\p"
# 1019 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You certainly do have the look of\n"
# 1020 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "a winner.\p"
# 1021 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But for me to accept you as\n"
# 1022 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "a true POKéMON great…\p"
# 1023 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "… …\p"
# 1024 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You've still a ways to go!$"
# 1025 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1026 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning::
# 1027 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 639 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1028 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "All of us gathered here are fans\n"
# 1029 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "of POKéMON TRAINERS.\p"
# 1030 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "The way they look in battle…\n"
# 1031 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "They are the picture of coolness.\p"
# 1032 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Perhaps you will be talked about\n"
# 1033 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "here, too, if you keep winning.$"
# 1034 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1035 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay::
# 1036 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 648 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1037 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "It's {PLAYER}!\n"
# 1038 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "It's {PLAYER}!\p"
# 1039 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I want to be like {PLAYER} one day!$"
# 1040 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1041 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan::
# 1042 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 654 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1043 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Everyone stopped being {PLAYER}'s\n"
# 1044 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "fan…\p"
# 1045 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But that means I can have {PLAYER}\n"
# 1046 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "all to myself!\p"
# 1047 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Yay! Go for it!\n"
# 1048 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "My one and only {PLAYER}!$"
# 1049 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1050 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina::
# 1051 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 663 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1052 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Do you know what?\n"
# 1053 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I want to be like SABRINA!\p"
# 1054 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I want to be a psychic girl just\n"
# 1055 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "like her!$"
# 1056 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1057 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan::
# 1058 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 670 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1059 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Even if I'm the only one, I won't\n"
# 1060 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "stop being SABRINA's fan.\p"
# 1061 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "My dream is to be like SABRINA,\n"
# 1062 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "cute, but cool.\p"
# 1063 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I want to be a psychic girl just\n"
# 1064 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "like her!$"
# 1065 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1066 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay::
# 1067 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 679 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1068 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I wonder if I can become a cool\n"
# 1069 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "TRAINER one day?$"
# 1070 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1071 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool::
# 1072 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 684 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1073 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, man, oh, man!\n"
# 1074 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Cool! Too cool!\p"
# 1075 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "…Huh?\n"
# 1076 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "No, not you.\p"
# 1077 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Just the way you battle.\n"
# 1078 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "That's cool.$"
# 1079 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1080 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans::
# 1081 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 693 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1082 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Yo, {PLAYER}!\p"
# 1083 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Looks like I'm the only one left\n"
# 1084 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "out of your fans.\p"
# 1085 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But, you know, I like being an only\n"
# 1086 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "fan… It's less stressful.\p"
# 1087 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Keep up and at it!$"
# 1088 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1089 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks::
# 1090 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 702 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1091 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{STR_VAR_1}'s cool, huh?\n"
# 1092 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I love the way he talks.\p"
# 1093 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'd really relish a chance to meet\n"
# 1094 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "him in person once.$"
# 1095 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1096 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan::
# 1097 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 709 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1098 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Huh, can you believe it?\n"
# 1099 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Everyone turned into your fans.\p"
# 1100 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "So after all we've been through,\n"
# 1101 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm the lone {STR_VAR_1} fan?\p"
# 1102 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Eh, being the one and only\n"
# 1103 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{STR_VAR_1} fan's my style, anyway.$"
# 1104 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1105 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle::
# 1106 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 718 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1107 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, my goodness!\n"
# 1108 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Is it really you, {PLAYER}?\p"
# 1109 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I have to tell you, I adore the\n"
# 1110 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "way you battle.\p"
# 1111 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I hope you'll keep at it.\n"
# 1112 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll be your number one fan!$"
# 1113 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1114 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan::
# 1115 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 727 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1116 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, my goodness!\n"
# 1117 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "If it isn't {PLAYER}!\p"
# 1118 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "It's so disappointing… I realized\n"
# 1119 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm your number-one-and-only fan!\p"
# 1120 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Well, it can't be helped!\n"
# 1121 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Let me cheer you on, at least!\p"
# 1122 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hurray, hurray, {PLAYER}!$"
# 1123 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1124 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire::
# 1125 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 737 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1126 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Recently, {STR_VAR_1} has been on\n"
# 1127 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "fire.\p"
# 1128 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "The way he battles… It's just \n"
# 1129 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "the way that I like it!$"
# 1130 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1131 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou::
# 1132 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 744 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1133 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, hello!\n"
# 1134 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "If it isn't {PLAYER}!\p"
# 1135 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Lately, all everyone talks about\n"
# 1136 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "is you.\p"
# 1137 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm feeling lonesome because I\n"
# 1138 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "prefer {STR_VAR_1}.$"
# 1139 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1140 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing::
# 1141 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 753 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1142 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Amazing!\n"
# 1143 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{PLAYER}, you really are amazing!\p"
# 1144 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Instead of just watching, maybe\n"
# 1145 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I should become a TRAINER, too.$"
# 1146 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1147 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan::
# 1148 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 760 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1149 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm your only fan…\n"
# 1150 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Sigh… This is lonely…\p"
# 1151 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Can't you try harder and make the\n"
# 1152 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "others take notice of you?$"
# 1153 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1154 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity::
# 1155 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 767 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1156 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Master {STR_VAR_1} is so dignified…\n"
# 1157 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "He is so my type.\p"
# 1158 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Why can't the others see the\n"
# 1159 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "dignity he simply oozes?$"
# 1160 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1161 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart::
# 1162 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 774 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1163 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I believe in Master {STR_VAR_1}\n"
# 1164 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "with all my heart.\p"
# 1165 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Even if I am the only one to\n"
# 1166 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "believe in him.\p"
# 1167 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I won't ever feel lonesome, though.\p"
# 1168 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Not if I keep thinking about Master\n"
# 1169 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{STR_VAR_1}.$"
# 1170 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1171 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational::
# 1172 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 784 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1173 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah!\p"
# 1174 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Your battling style is most\n"
# 1175 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "educational.\p"
# 1176 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I hope that you will keep plugging\n"
# 1177 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "away at success, hiyah!$"
# 1178 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1179 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan::
# 1180 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 792 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1181 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Instead of just watching others\n"
# 1182 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "battle, battle yourself!\p"
# 1183 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "…My DOJO's MASTER chewed me out\n"
# 1184 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "like that…\p"
# 1185 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But I won't let that stop me from\n"
# 1186 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "being your fan!\p"
# 1187 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I can't stop being your fan!$"
# 1188 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1189 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect::
# 1190 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 802 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1191 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah! There is but one TRAINER\n"
# 1192 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "who has my respect.\p"
# 1193 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "And that is none other than my\n"
# 1194 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "MASTER at the FIGHTING DOJO.\p"
# 1195 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You should become a fan of my\n"
# 1196 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "MASTER like me! Hiyah!$"
# 1197 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 1198 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster::
# 1199 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 811 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
# 1200 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah! I respect my MASTER at the\n"
# 1201 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "FIGHTING DOJO.\p"
# 1202 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I will never become a fan of\n"
# 1203 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "anyone other than my MASTER!\p"
# 1204 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I will even sneak out of the DOJO\n"
# 1205 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "to spread word of his greatness.\p"
# 1206 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah!$"
