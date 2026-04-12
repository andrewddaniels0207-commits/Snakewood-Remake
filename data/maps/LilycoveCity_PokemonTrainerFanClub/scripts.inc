# 1 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 2 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_MapScripts::
# 3 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 5 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 4 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonTrainerFanClub_OnTransition
# 5 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 2 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 6 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_PokemonTrainerFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 9 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 3 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 11 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script_2 VAR_LILYCOVE_FAN_CLUB_STATE, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
# 12 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.2byte 0
# 13 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 14 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 15 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 16 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 9 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 17 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lockall
# 18 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 10 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 19 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LASS, Common_Movement_WalkInPlaceFasterDown
# 20 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 11 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 21 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 22 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 12 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 23 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 13 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 25 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer
# 26 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 14 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 27 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_MAN, LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 28 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 15 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 29 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 30 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 16 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 31 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 32 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 17 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 33 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 34 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 18 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 35 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan, MSGBOX_DEFAULT
# 36 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 19 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 37 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer
# 38 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 20 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 39 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 40 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 21 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 41 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 22 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 43 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 44 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 23 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 45 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer
# 46 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 24 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 47 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 48 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 25 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 49 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_LILYCOVE_FAN_CLUB_STATE, 2
# 50 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 26 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 51 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	releaseall
# 52 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 54 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 55 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 30 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 56 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer:
# 57 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 31 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 58 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 59 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 32 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 60 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 61 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 33 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 62 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 63 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 34 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 64 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 65 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 35 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 66 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 67 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 36 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 68 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 69 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 37 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 70 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 71 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 38 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 72 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 73 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 74 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 41 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 75 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer:
# 76 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 42 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 77 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 78 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 43 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 79 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 80 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 44 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 81 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 82 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 45 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 83 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 84 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 46 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 85 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 86 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 47 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 87 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 88 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 48 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 89 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 90 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 91 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 51 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 92 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer:
# 93 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 52 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 94 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 95 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 53 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 96 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_right
# 97 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 54 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 98 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 99 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 100 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 57 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 101 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer:
# 102 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 58 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 103 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	jump_in_place_right
# 104 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 59 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 105 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 106 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 60 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 107 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 108 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 61 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 109 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_right
# 110 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 62 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 111 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 112 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 63 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 113 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 114 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 115 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnTransition::
# 116 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 67 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 117 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer
# 118 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 68 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 119 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_LILYCOVE_FAN_CLUB_STATE, 1
# 120 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_OnTransition_2
# 121 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnTransition_1:
# 122 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 71 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 123 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_LILYCOVE_FAN_CLUB_STATE, 2
# 124 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_OnTransition_5
# 125 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnTransition_4:
# 126 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 127 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 128 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnTransition_2:
# 129 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 69 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 130 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_SetFanMemberPositionsForFirstFanMeeting
# 131 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_OnTransition_1
# 132 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 133 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnTransition_5:
# 134 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 72 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 135 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
# 136 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_OnTransition_4
# 137 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 138 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 139 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 140 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 78 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 141 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special TryLoseFansFromPlayTime
# 142 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 79 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 143 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow
# 144 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 80 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 145 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 146 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 81 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 147 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 148 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 82 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 149 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 150 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_2
# 151 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_1:
# 152 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 85 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 153 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 154 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 86 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 155 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 156 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 87 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 157 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 158 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_5
# 159 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_4:
# 160 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 90 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 161 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 162 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 91 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 163 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 164 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 92 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 165 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 166 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_8
# 167 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_7:
# 168 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 95 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 169 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 170 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 96 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 171 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 172 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 97 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 173 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 174 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_11
# 175 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_10:
# 176 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 100 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 177 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 178 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 101 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 179 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 180 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 102 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 181 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 182 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_14
# 183 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_13:
# 184 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 105 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 185 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 186 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 106 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 187 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 188 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 107 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 189 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 190 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_17
# 191 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_16:
# 192 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 110 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 193 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 194 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 111 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 195 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 196 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 112 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 197 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 198 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_20
# 199 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_19:
# 200 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 115 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 201 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 202 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 116 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 203 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 204 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 117 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 205 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 206 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_23
# 207 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_22:
# 208 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 209 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 210 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_2:
# 211 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 83 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 212 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
# 213 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_1
# 214 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 215 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_5:
# 216 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 88 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 217 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 218 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_4
# 219 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 220 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_8:
# 221 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 93 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 222 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
# 223 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_7
# 224 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 225 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_11:
# 226 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 98 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 227 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 228 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_10
# 229 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 230 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_14:
# 231 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 103 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 232 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 233 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_13
# 234 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 235 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_17:
# 236 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 108 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 237 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 238 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_16
# 239 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 240 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_20:
# 241 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 113 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 242 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 243 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_19
# 244 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 245 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_23:
# 246 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 118 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 247 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 248 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_22
# 249 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 250 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 251 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer::
# 252 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 124 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 253 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, ShouldHideFanClubInterviewer
# 254 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 125 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 255 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 256 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer_2
# 257 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer_1:
# 258 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 128 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 259 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
# 260 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 129 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 261 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	clearflag FLAG_FAN_CLUB_STRENGTH_SHARED
# 262 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 263 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 264 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer_2:
# 265 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 126 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 266 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_HideInterviewer
# 267 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer_1
# 268 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 269 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 270 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideInterviewer::
# 271 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 134 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 272 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
# 273 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 274 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 275 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 276 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow::
# 277 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 139 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 278 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8005, NUM_TRAINER_FAN_CLUB_MEMBERS
# 279 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 140 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 280 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 281 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 141 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 282 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 283 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 142 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 284 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 285 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_2
# 286 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_1:
# 287 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 145 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 288 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 289 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 146 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 290 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 291 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 147 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 292 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 293 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_5
# 294 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_4:
# 295 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 150 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 296 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 297 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 151 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 298 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 299 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 152 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 300 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 301 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_8
# 302 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_7:
# 303 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 155 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 304 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 305 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 156 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 306 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 307 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 157 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 308 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 309 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_11
# 310 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_10:
# 311 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 160 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 312 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 313 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 161 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 314 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 315 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 162 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 316 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 317 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_14
# 318 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_13:
# 319 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 165 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 320 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 321 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 166 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 322 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 323 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 167 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 324 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 325 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_17
# 326 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_16:
# 327 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 170 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 328 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 329 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 171 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 330 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 331 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 172 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 332 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 333 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_20
# 334 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_19:
# 335 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 175 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 336 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 337 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 176 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 338 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 339 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 177 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 340 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 341 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_23
# 342 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_22:
# 343 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 180 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 344 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_0x8005, 5
# 345 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_ge LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_26
# 346 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_25:
# 347 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 348 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 349 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_2:
# 350 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 143 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 351 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 352 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_1
# 353 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 354 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_5:
# 355 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 148 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 356 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 357 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_4
# 358 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 359 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_8:
# 360 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 153 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 361 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 362 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_7
# 363 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 364 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_11:
# 365 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 158 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 366 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 367 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_10
# 368 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 369 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_14:
# 370 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 163 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 371 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 372 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_13
# 373 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 374 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_17:
# 375 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 168 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 376 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 377 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_16
# 378 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 379 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_20:
# 380 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 173 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 381 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 382 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_19
# 383 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 384 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_23:
# 385 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 178 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 386 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 387 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_22
# 388 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 389 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_26:
# 390 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 181 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 391 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_TrySetUpTVShow
# 392 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow_25
# 393 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 394 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 395 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan::
# 396 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 187 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 397 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	subvar VAR_0x8005, 1
# 398 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 399 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 400 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 401 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_TrySetUpTVShow::
# 402 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 192 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 403 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special TryPutTrainerFanClubOnAir
# 404 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 405 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 406 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 407 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
# 408 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 197 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 409 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LASS, 7, 5
# 410 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 411 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 412 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 413 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
# 414 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 202 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 415 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_POKEFAN_M, 3, 4
# 416 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 417 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 418 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 419 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
# 420 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 207 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 421 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 7, 2
# 422 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 423 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 424 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 425 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 426 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 212 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 427 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_NINJA_BOY, 5, 5
# 428 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 429 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 430 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 431 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 432 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 217 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 433 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BOY, 5, 2
# 434 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 435 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 436 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 437 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 438 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 222 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 439 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_MAN, 8, 4
# 440 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 441 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 442 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 443 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 444 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 227 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 445 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 3, 3
# 446 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 447 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 448 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 449 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 450 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 232 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 451 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_EXPERT_F, 8, 3
# 452 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 453 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 454 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 455 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_SetFanMemberPositionsForFirstFanMeeting::
# 456 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 237 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 457 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow
# 458 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 238 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 459 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 460 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 239 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 461 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 462 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 240 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 463 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 464 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 241 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 465 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 466 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 242 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 467 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 468 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 469 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 470 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 471 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Man::
# 472 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 247 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 473 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 474 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 248 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 475 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 476 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 249 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 477 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 478 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 250 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 479 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 480 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 251 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 481 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_LILYCOVE_FAN_CLUB_STATE, 0
# 482 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_Man_2
# 483 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Man_1:
# 484 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 254 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 485 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 486 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 255 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 487 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 488 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_Man_5
# 489 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Man_4:
# 490 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 258 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 491 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 492 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 259 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 493 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyNonFan
# 494 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 260 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 495 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary, MSGBOX_DEFAULT
# 496 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 261 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 497 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 498 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 499 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 500 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Man_2:
# 501 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 252 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 502 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayerNotChampion
# 503 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Man_1
# 504 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 505 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Man_5:
# 506 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 256 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 507 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan
# 508 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Man_4
# 509 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 510 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 511 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan::
# 512 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 266 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 513 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 514 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 267 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 515 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 1
# 516 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan_2
# 517 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan_1:
# 518 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 270 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 519 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin, MSGBOX_DEFAULT
# 520 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 271 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 521 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 522 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 523 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 524 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan_2:
# 525 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 268 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 526 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyFan
# 527 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan_1
# 528 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 529 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 530 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyFan::
# 531 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 276 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 532 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest, MSGBOX_DEFAULT
# 533 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 277 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 534 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 535 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 536 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 537 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 538 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyNonFan::
# 539 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 282 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 540 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen, MSGBOX_DEFAULT
# 541 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 283 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 542 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 543 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 544 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 545 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 546 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayerNotChampion::
# 547 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 288 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 548 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer, MSGBOX_DEFAULT
# 549 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 289 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 550 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 551 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 552 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 553 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 554 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Lass::
# 555 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 294 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 556 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 557 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 295 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 558 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 559 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 296 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 560 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 561 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 297 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 562 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 563 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 298 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 564 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_LILYCOVE_FAN_CLUB_STATE, 0
# 565 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_Lass_2
# 566 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Lass_1:
# 567 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 301 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 568 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 569 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 302 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 570 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 571 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_Lass_5
# 572 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Lass_4:
# 573 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 305 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 574 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 575 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 306 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 576 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyNonFan
# 577 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 307 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 578 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly, MSGBOX_DEFAULT
# 579 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 308 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 580 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 581 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 582 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 583 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Lass_2:
# 584 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 299 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 585 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayerNotChampion
# 586 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Lass_1
# 587 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 588 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Lass_5:
# 589 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 303 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 590 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan
# 591 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Lass_4
# 592 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 593 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 594 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan::
# 595 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 313 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 596 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 597 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 314 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 598 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 1
# 599 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan_2
# 600 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan_1:
# 601 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 317 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 602 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou, MSGBOX_DEFAULT
# 603 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 318 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 604 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 605 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 606 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 607 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan_2:
# 608 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 315 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 609 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyFan
# 610 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan_1
# 611 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 612 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 613 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyFan::
# 614 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 323 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 615 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan, MSGBOX_DEFAULT
# 616 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 324 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 617 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 618 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 619 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 620 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 621 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyNonFan::
# 622 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 329 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 623 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly, MSGBOX_DEFAULT
# 624 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 330 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 625 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 626 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 627 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 628 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 629 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayerNotChampion::
# 630 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 335 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 631 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly, MSGBOX_DEFAULT
# 632 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 336 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 633 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 634 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 635 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 636 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 637 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM::
# 638 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 341 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 639 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 640 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 342 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 641 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 642 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 343 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 643 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 644 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 344 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 645 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 646 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 345 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 647 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_LILYCOVE_FAN_CLUB_STATE, 0
# 648 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM_2
# 649 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM_1:
# 650 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 348 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 651 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 652 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 349 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 653 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 654 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM_5
# 655 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM_4:
# 656 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 352 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 657 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 658 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 353 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 659 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyNonFan
# 660 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 354 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 661 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman, MSGBOX_DEFAULT
# 662 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 355 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 663 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 664 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 665 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 666 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM_2:
# 667 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 346 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 668 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayerNotChampion
# 669 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM_1
# 670 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 671 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM_5:
# 672 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 350 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 673 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan
# 674 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM_4
# 675 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 676 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 677 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan::
# 678 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 360 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 679 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 680 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 361 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 681 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 1
# 682 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan_2
# 683 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan_1:
# 684 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 364 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 685 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather, MSGBOX_DEFAULT
# 686 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 365 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 687 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 688 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 689 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 690 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan_2:
# 691 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 362 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 692 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyFan
# 693 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan_1
# 694 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 695 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 696 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyFan::
# 697 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 370 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 698 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling, MSGBOX_DEFAULT
# 699 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 371 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 700 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 701 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 702 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 703 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 704 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyNonFan::
# 705 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 376 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 706 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent, MSGBOX_DEFAULT
# 707 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 377 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 708 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 709 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 710 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 711 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 712 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayerNotChampion::
# 713 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 382 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 714 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers, MSGBOX_DEFAULT
# 715 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 383 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 716 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 717 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 718 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 719 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 720 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 721 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 388 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 722 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 723 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 389 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 724 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 725 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 390 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 726 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 727 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 391 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 728 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 729 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 392 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 730 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_LILYCOVE_FAN_CLUB_STATE, 0
# 731 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl_2
# 732 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl_1:
# 733 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 395 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 734 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 735 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 396 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 736 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 737 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl_5
# 738 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl_4:
# 739 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 399 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 740 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 741 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 400 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 742 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
# 743 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 401 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 744 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool, MSGBOX_DEFAULT
# 745 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 402 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 746 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 747 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 748 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 749 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl_2:
# 750 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 393 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 751 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
# 752 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl_1
# 753 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 754 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl_5:
# 755 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 397 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 756 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
# 757 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl_4
# 758 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 759 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 760 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
# 761 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 407 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 762 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 763 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 408 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 764 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 1
# 765 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_2
# 766 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_1:
# 767 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 411 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 768 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer, MSGBOX_DEFAULT
# 769 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 412 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 770 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 771 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 772 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 773 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_2:
# 774 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 409 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 775 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
# 776 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan_1
# 777 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 778 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 779 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
# 780 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 417 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 781 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou, MSGBOX_DEFAULT
# 782 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 418 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 783 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 784 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 785 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 786 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 787 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
# 788 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 423 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 789 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe, MSGBOX_DEFAULT
# 790 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 424 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 791 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 792 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 793 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 794 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 795 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
# 796 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 429 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 797 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat, MSGBOX_DEFAULT
# 798 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 430 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 799 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 800 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 801 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 802 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 803 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoy::
# 804 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 435 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 805 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 806 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 436 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 807 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 808 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 437 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 809 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 810 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 438 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 811 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 812 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 439 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 813 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 814 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 440 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 815 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 816 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoy_2
# 817 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoy_1:
# 818 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 443 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 819 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 820 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 444 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 821 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyNonFan
# 822 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 445 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 823 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool, MSGBOX_DEFAULT
# 824 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 446 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 825 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 826 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 827 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 828 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoy_2:
# 829 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 441 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 830 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan
# 831 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoy_1
# 832 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 833 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 834 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan::
# 835 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 451 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 836 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 837 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 452 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 838 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 1
# 839 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan_2
# 840 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan_1:
# 841 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 455 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 842 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou, MSGBOX_DEFAULT
# 843 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 456 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 844 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 845 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 846 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 847 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan_2:
# 848 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 453 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 849 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyFan
# 850 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan_1
# 851 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 852 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 853 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyFan::
# 854 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 461 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 855 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou, MSGBOX_DEFAULT
# 856 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 462 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 857 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 858 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 859 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 860 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 861 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyNonFan::
# 862 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 467 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 863 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan, MSGBOX_DEFAULT
# 864 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 468 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 865 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 866 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 867 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 868 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 869 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Boy::
# 870 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 473 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 871 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 872 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 474 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 873 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 874 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 475 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 875 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 876 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 476 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 877 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 878 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 477 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 879 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 880 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 478 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 881 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 882 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_Boy_2
# 883 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Boy_1:
# 884 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 481 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 885 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 886 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 482 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 887 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyNonFan
# 888 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 483 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 889 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne, MSGBOX_DEFAULT
# 890 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 484 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 891 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 892 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 893 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 894 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Boy_2:
# 895 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 479 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 896 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan
# 897 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Boy_1
# 898 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 899 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 900 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan::
# 901 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 489 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 902 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 903 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 490 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 904 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 1
# 905 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan_2
# 906 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan_1:
# 907 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 493 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 908 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll, MSGBOX_DEFAULT
# 909 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 494 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 910 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 911 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 912 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 913 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan_2:
# 914 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 491 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 915 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyFan
# 916 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan_1
# 917 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 918 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 919 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyFan::
# 920 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 499 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 921 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner, MSGBOX_DEFAULT
# 922 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 500 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 923 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 924 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 925 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 926 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 927 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyNonFan::
# 928 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 505 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 929 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer, MSGBOX_DEFAULT
# 930 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 506 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 931 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 932 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 933 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 934 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 935 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Woman::
# 936 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 511 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 937 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 938 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 512 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 939 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 940 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 513 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 941 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 942 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 514 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 943 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 944 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 515 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 945 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 946 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 516 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 947 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 948 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_Woman_2
# 949 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Woman_1:
# 950 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 519 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 951 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 952 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 520 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 953 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
# 954 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 521 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 955 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout, MSGBOX_DEFAULT
# 956 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 522 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 957 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 958 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 959 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 960 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Woman_2:
# 961 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 517 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 962 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
# 963 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Woman_1
# 964 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 965 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 966 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
# 967 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 527 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 968 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 969 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 528 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 970 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 1
# 971 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_2
# 972 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_1:
# 973 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 531 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 974 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind, MSGBOX_DEFAULT
# 975 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 532 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 976 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 977 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 978 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 979 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_2:
# 980 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 529 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 981 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
# 982 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan_1
# 983 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 984 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 985 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
# 986 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 537 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 987 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation, MSGBOX_DEFAULT
# 988 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 538 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 989 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 990 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 991 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 992 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 993 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
# 994 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 543 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 995 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger, MSGBOX_DEFAULT
# 996 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 544 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 997 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 998 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 999 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1000 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1001 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertF::
# 1002 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 549 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1003 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 1004 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 550 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1005 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 1006 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 551 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1007 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 1008 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 552 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1009 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 1010 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 553 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1011 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 1012 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 554 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1013 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 1014 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertF_2
# 1015 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertF_1:
# 1016 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 557 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1017 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 1018 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 558 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1019 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyNonFan
# 1020 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 559 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1021 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential, MSGBOX_DEFAULT
# 1022 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 560 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1023 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 1024 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1025 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1026 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertF_2:
# 1027 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 555 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1028 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan
# 1029 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertF_1
# 1030 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1031 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1032 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan::
# 1033 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 565 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1034 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 1035 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 566 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1036 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 1
# 1037 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan_2
# 1038 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan_1:
# 1039 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 569 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1040 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive, MSGBOX_DEFAULT
# 1041 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 570 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1042 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 1043 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1044 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1045 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan_2:
# 1046 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 567 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1047 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyFan
# 1048 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan_1
# 1049 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1050 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1051 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyFan::
# 1052 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 575 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1053 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth, MSGBOX_DEFAULT
# 1054 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 576 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1055 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 1056 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1057 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1058 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1059 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyNonFan::
# 1060 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 581 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1061 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength, MSGBOX_DEFAULT
# 1062 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 582 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1063 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 1064 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1065 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1066 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1067 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer::
# 1068 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 587 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1069 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 1070 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 588 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1071 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 1072 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 589 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1073 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_set FLAG_FAN_CLUB_STRENGTH_SHARED, LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer_2
# 1074 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer_1:
# 1075 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 592 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1076 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_unset FLAG_FAN_CLUB_STRENGTH_SHARED, LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer_5
# 1077 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer_4:
# 1078 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1079 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1080 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer_2:
# 1081 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 590 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1082 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed
# 1083 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer_1
# 1084 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1085 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer_5:
# 1086 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 593 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1087 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Interview
# 1088 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer_4
# 1089 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1090 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1091 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interview::
# 1092 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 599 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1093 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8005, TVSHOW_FAN_CLUB_SPECIAL
# 1094 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 600 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1095 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special InterviewBefore
# 1096 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 601 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1097 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 1098 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_2
# 1099 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_1:
# 1100 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 604 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1101 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8006
# 1102 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 605 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1103 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 1104 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 606 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1105 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 1106 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 607 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1107 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer, MSGBOX_DEFAULT
# 1108 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 608 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1109 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_FAN_QUESTION
# 1110 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 609 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1111 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 1112 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 610 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1113 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call Common_ShowEasyChatScreen
# 1114 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 611 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1115 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 1116 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 612 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1117 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 1118 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 613 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1119 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 1
# 1120 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_5
# 1121 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_4:
# 1122 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 616 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1123 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 0
# 1124 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_8
# 1125 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_7:
# 1126 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1127 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1128 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_2:
# 1129 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 602 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1130 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed2
# 1131 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_1
# 1132 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1133 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_5:
# 1134 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 614 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1135 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion
# 1136 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_4
# 1137 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1138 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_8:
# 1139 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 617 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1140 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion
# 1141 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_Interview_7
# 1142 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1143 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1144 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion::
# 1145 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 623 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1146 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink, MSGBOX_DEFAULT
# 1147 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 624 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1148 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer
# 1149 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1150 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1151 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1152 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion::
# 1153 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 629 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1154 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 1155 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 630 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1156 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 1157 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 631 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1158 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer, MSGBOX_YESNO
# 1159 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 632 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1160 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, YES
# 1161 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion_2
# 1162 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion_1:
# 1163 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 635 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1164 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, NO
# 1165 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion_5
# 1166 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion_4:
# 1167 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1168 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1169 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion_2:
# 1170 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 633 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1171 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer
# 1172 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion_1
# 1173 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1174 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion_5:
# 1175 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 636 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1176 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion
# 1177 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion_4
# 1178 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1179 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1180 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion::
# 1181 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 642 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1182 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 1183 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 643 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1184 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 1185 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 644 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1186 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2, MSGBOX_DEFAULT
# 1187 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 645 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1188 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_FAN_QUESTION
# 1189 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 646 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1190 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 1191 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 647 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1192 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call Common_ShowEasyChatScreen
# 1193 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 648 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1194 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 1195 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 649 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1196 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 1197 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 650 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1198 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 1
# 1199 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion_2
# 1200 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion_1:
# 1201 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 653 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1202 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, 0
# 1203 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion_5
# 1204 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion_4:
# 1205 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1206 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1207 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion_2:
# 1208 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 651 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1209 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion
# 1210 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion_1
# 1211 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1212 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion_5:
# 1213 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 654 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1214 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion
# 1215 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion_4
# 1216 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1217 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1218 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer::
# 1219 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 660 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1220 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 1221 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 661 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1222 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 1223 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 662 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1224 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	message LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer
# 1225 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 663 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1226 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmessage
# 1227 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 664 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1228 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_POKEMON_FAN_CLUB_RATER
# 1229 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 665 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1230 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special ShowScrollableMultichoice
# 1231 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 666 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1232 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitstate
# 1233 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 667 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1234 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 1235 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 668 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1236 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	switch VAR_RESULT
# 1237 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 669 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1238 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	case 11, LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer_3
# 1239 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 671 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1240 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer_4
# 1241 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer_1:
# 1242 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 674 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1243 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 1244 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 675 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1245 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 1246 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 676 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1247 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8006, VAR_0x800A
# 1248 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 677 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1249 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 1250 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 678 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1251 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special PutFanClubSpecialOnTheAir
# 1252 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 679 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1253 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CompleteInterview
# 1254 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1255 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1256 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer_3:
# 1257 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 670 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1258 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer
# 1259 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer_1
# 1260 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1261 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer_4:
# 1262 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 672 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1263 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer
# 1264 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer_1
# 1265 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1266 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1267 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer::
# 1268 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 684 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1269 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 1270 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 685 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1271 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 1272 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 686 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1273 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer2, MSGBOX_YESNO
# 1274 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 687 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1275 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, YES
# 1276 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer_2
# 1277 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer_1:
# 1278 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 690 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1279 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	compare VAR_RESULT, NO
# 1280 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer_5
# 1281 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer_4:
# 1282 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1283 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1284 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer_2:
# 1285 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 688 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1286 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer
# 1287 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer_1
# 1288 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1289 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer_5:
# 1290 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 691 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1291 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer
# 1292 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer_4
# 1293 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1294 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1295 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer::
# 1296 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 697 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1297 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 1298 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 698 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1299 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 1300 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 699 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1301 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer, MSGBOX_DEFAULT
# 1302 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 700 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1303 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 1304 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1305 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1306 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1307 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CompleteInterview::
# 1308 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 705 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1309 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 1310 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 706 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1311 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 1312 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 707 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1313 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo, MSGBOX_DEFAULT
# 1314 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 708 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1315 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setflag FLAG_FAN_CLUB_STRENGTH_SHARED
# 1316 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 709 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1317 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 1318 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1319 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1320 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1321 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed::
# 1322 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 714 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1323 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 1324 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 715 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1325 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 1326 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 716 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1327 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial, MSGBOX_DEFAULT
# 1328 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 717 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1329 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 1330 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1331 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1332 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1333 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed2::
# 1334 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 1335 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1336 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1337 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer::
# 1338 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 725 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1339 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh, wow!\n"
# 1340 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "It's {PLAYER}!$"
# 1341 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1342 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan::
# 1343 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 730 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1344 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I've heard the news!\n"
# 1345 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're really strong, aren't you?\p"
# 1346 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "We always argue about who is the\n"
# 1347 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "strongest of all TRAINERS here.\p"
# 1348 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "So when I heard about you, I decided\n"
# 1349 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "to be your fan!\p"
# 1350 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I hope you'll keep on battling other\n"
# 1351 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "tough TRAINERS.\p"
# 1352 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That way, we'll be able to see more\n"
# 1353 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "of your hot, hot battles.\p"
# 1354 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That will make the others here see\n"
# 1355 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "exactly how great you are.\p"
# 1356 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Remember, I'm cheering for you,\n"
# 1357 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}!$"
# 1358 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1359 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin::
# 1360 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 747 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1361 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Yo, {PLAYER}!\n"
# 1362 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're the one we want to win!$"
# 1363 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1364 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest::
# 1365 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 752 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1366 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "The others, they don't know that\n"
# 1367 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "you're the best of the best!\p"
# 1368 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Isn't that right, {PLAYER}?\n"
# 1369 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Show them you've got guts!$"
# 1370 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1371 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary::
# 1372 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 759 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1373 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I hate to say this, but the TRAINER\n"
# 1374 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "everybody's talking about is\l"
# 1375 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}, no question about it!\p"
# 1376 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That TRAINER's power…\n"
# 1377 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "It's out of the ordinary.$"
# 1378 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1379 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen::
# 1380 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 767 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1381 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Darn it… I've been telling people\n"
# 1382 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "that {STR_VAR_1} is the best now…\p"
# 1383 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But no one wants to listen…$"
# 1384 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1385 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer::
# 1386 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 773 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1387 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I've been hearing things about\n"
# 1388 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "a tough new TRAINER.\p"
# 1389 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "This TRAINER's supposed to be beating\n"
# 1390 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "GYM LEADERS, even.\p"
# 1391 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Do you know anything about this\n"
# 1392 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "new TRAINER?$"
# 1393 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1394 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou::
# 1395 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 782 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1396 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh!\n"
# 1397 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}!\p"
# 1398 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Go for it!\n"
# 1399 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm pulling for you!$"
# 1400 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1401 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan::
# 1402 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 789 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1403 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Sigh…\n"
# 1404 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "BRAWLY…\p"
# 1405 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh, no! Wait!\n"
# 1406 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That's not right! No, no, no!\p"
# 1407 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm your fan through and through!\p"
# 1408 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "So make me proud!\n"
# 1409 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Go for it!$"
# 1410 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1411 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly::
# 1412 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 799 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1413 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I can't help it, I can only get to\n"
# 1414 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "like BRAWLY…$"
# 1415 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1416 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly::
# 1417 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 804 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1418 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Nobody understands the charm of\n"
# 1419 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "BRAWLY…\p"
# 1420 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I don't care!\p"
# 1421 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even if I'm the only one, I'm going\n"
# 1422 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "to keep cheering for BRAWLY!$"
# 1423 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1424 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly::
# 1425 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 812 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1426 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Whatever anyone says, my favorite\n"
# 1427 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "TRAINER is DEWFORD's GYM LEADER\l"
# 1428 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "BRAWLY!$"
# 1429 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1430 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather::
# 1431 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 818 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1432 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You've surpassed your own father in\n"
# 1433 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "every regard!\p"
# 1434 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm telling you, so there's no question\n"
# 1435 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "about it at all!$"
# 1436 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1437 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling::
# 1438 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 825 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1439 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even when things turned bleak,\n"
# 1440 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "your father never gave up.\p"
# 1441 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "This I know to be true.\p"
# 1442 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You never give up even if you lose!\n"
# 1443 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "So keep on battling!$"
# 1444 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1445 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman::
# 1446 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 833 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1447 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "NORMAN battled with more power,\n"
# 1448 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "charisma, and showmanship than you.\p"
# 1449 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even though people may say that\n"
# 1450 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "you're strong…\p"
# 1451 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You've still got a long way to go\n"
# 1452 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "compared to your father.$"
# 1453 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1454 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent::
# 1455 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 842 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1456 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're beginning to get the same\n"
# 1457 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "air of awe NORMAN exudes.\p"
# 1458 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But there's something conclusively\n"
# 1459 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "different between you and NORMAN.\p"
# 1460 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I can't tell you what that is.\n"
# 1461 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You'll have to find it yourself.$"
# 1462 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1463 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers::
# 1464 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 851 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1465 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Everyone here, we're all huge fans\n"
# 1466 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "of POKéMON battles.\p"
# 1467 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "We discuss who we consider to be\n"
# 1468 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "the strongest of all TRAINERS.\p"
# 1469 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "If you were to become famous,\n"
# 1470 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "we might even become your fans!$"
# 1471 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1472 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer::
# 1473 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 860 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1474 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh, woweee! It's {PLAYER}!\n"
# 1475 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "For real, too!\p"
# 1476 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Please, shake my hand, shake my hand!$"
# 1477 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1478 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou::
# 1479 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 866 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1480 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'll always cheer for you, {PLAYER}!\n"
# 1481 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Always, always!\p"
# 1482 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I don't want to see you lose ever,\n"
# 1483 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}.\p"
# 1484 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Because I know you're really,\n"
# 1485 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "really strong, {PLAYER}!$"
# 1486 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1487 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool::
# 1488 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 875 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1489 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} is really cool…\p"
# 1490 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Everyone thinks so, right, right?$"
# 1491 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1492 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe::
# 1493 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 880 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1494 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} really is cool, don't\n"
# 1495 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "you think so?\p"
# 1496 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even if it's just me, I'm going to keep\n"
# 1497 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "cheering my favorite TRAINER.$"
# 1498 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1499 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat::
# 1500 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 887 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1501 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "My favorite TRAINER is…\p"
# 1502 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Cool…\p"
# 1503 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Strong…\p"
# 1504 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "And really nice…\p"
# 1505 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I wish there was a TRAINER like that…$"
# 1506 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1507 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou::
# 1508 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 895 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1509 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Whoa! It's {PLAYER}!\n"
# 1510 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wicked!\p"
# 1511 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "When I grow up, I want to be strong\n"
# 1512 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "like you, {PLAYER}!$"
# 1513 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1514 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou::
# 1515 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 902 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1516 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even if I'm the only one…\p"
# 1517 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You'll always be the only one\n"
# 1518 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I cheer for, {PLAYER}!\p"
# 1519 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Because I believe in you, {PLAYER}!$"
# 1520 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1521 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool::
# 1522 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 909 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1523 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} is so wickedly cool…\n"
# 1524 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I want to shake hands with my hero.$"
# 1525 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1526 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan::
# 1527 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 914 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1528 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even if I'm the only one…\p"
# 1529 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm never going to stop being\n"
# 1530 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}'s fan!\p"
# 1531 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Because I've heard, {STR_VAR_1}\n"
# 1532 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "never loses!$"
# 1533 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1534 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll::
# 1535 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 922 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1536 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}!\n"
# 1537 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You are amazing after all!\p"
# 1538 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ever since I set eyes on you,\n"
# 1539 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I knew that you were great.\p"
# 1540 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "It looks like my eyes didn't deceive me.$"
# 1541 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1542 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner::
# 1543 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 930 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1544 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Who cares about the others.\n"
# 1545 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm in your corner!\p"
# 1546 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You don't need to worry. Just get\n"
# 1547 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "out there and battle like always.$"
# 1548 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1549 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne::
# 1550 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 937 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1551 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're a pretty decent TRAINER,\n"
# 1552 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I think.\p"
# 1553 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But I also think that {STR_VAR_1}\n"
# 1554 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "is number one right now.\p"
# 1555 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That's just my opinion.\n"
# 1556 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Don't worry about it too much.$"
# 1557 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1558 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer::
# 1559 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 946 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1560 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wow, you really are strong.\n"
# 1561 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Maybe even stronger than {STR_VAR_1}.\p"
# 1562 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But {STR_VAR_1} needs me.\p"
# 1563 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "If I don't cheer for {STR_VAR_1},\n"
# 1564 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "who will?$"
# 1565 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1566 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind::
# 1567 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 954 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1568 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You've changed my mind!\n"
# 1569 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You are strong, aren't you?\p"
# 1570 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'd like you to tell me how you managed\n"
# 1571 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "to get so strong!$"
# 1572 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1573 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation::
# 1574 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 961 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1575 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "The tougher the situation, the more\n"
# 1576 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "attractively you battle.\p"
# 1577 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I can't wait for your next battle!$"
# 1578 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1579 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout::
# 1580 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 967 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1581 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Among the recently hot TRAINERS,\n"
# 1582 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} is the standout.\p"
# 1583 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That toughness, it's simply not normal.\p"
# 1584 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're doing okay, but you're not in\n"
# 1585 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "the same class as {STR_VAR_1}.$"
# 1586 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1587 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger::
# 1588 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 975 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1589 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You are really popular…\p"
# 1590 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're strong, and you're caring to\n"
# 1591 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "POKéMON. No one can knock you.\p"
# 1592 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But, you know, I believe in {STR_VAR_1}.\p"
# 1593 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} is definitely stronger!\n"
# 1594 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm positive!$"
# 1595 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1596 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive::
# 1597 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 984 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1598 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You…\p"
# 1599 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Impressive!$"
# 1600 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1601 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth::
# 1602 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 989 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1603 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Your true worth, it is fine if only\n"
# 1604 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I recognized it.\p"
# 1605 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "The others I doubt will understand\n"
# 1606 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "the hidden power that beats within.$"
# 1607 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1608 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential::
# 1609 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 996 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1610 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Yes, I see strength in your eyes.\p"
# 1611 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But!\p"
# 1612 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You still haven't realized your\n"
# 1613 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "potential.$"
# 1614 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 1615 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength::
# 1616 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1003 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
# 1617 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "It is true that you are tremendously\n"
# 1618 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "powerful.\p"
# 1619 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But!\n"
# 1620 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I can tell…\p"
# 1621 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That strength cannot be considered\n"
# 1622 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "true strength yet!\p"
# 1623 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "True strength is…!\n"
# 1624 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "… …\p"
# 1625 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Actually, I have no idea, either.$"
