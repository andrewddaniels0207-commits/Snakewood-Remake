# 1 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_MapScripts::
# 3 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 5 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 6 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner::
# 7 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 4 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 8 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 9 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 5 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 10 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_2
# 11 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_1:
# 12 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 8 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 13 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_5
# 14 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_4:
# 15 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 11 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 16 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot, MSGBOX_DEFAULT
# 17 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 12 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 18 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 19 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 13 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 20 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 14 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 22 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua, MSGBOX_DEFAULT
# 23 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 15 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 24 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 25 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 16 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 26 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 27 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 17 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 28 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 18 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 30 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 31 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 32 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 33 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_2:
# 34 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 6 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 35 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear
# 36 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_1
# 37 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 38 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_5:
# 39 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 9 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 40 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_4
# 42 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 43 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted::
# 45 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 23 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 46 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem, MSGBOX_DEFAULT
# 47 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 24 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 48 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 49 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 25 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 50 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 26 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 52 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted, MSGBOX_DEFAULT
# 53 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 27 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 54 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 55 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 28 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 56 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 57 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 29 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 58 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 30 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 60 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 61 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 62 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 63 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 64 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear::
# 65 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 35 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 66 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar, MSGBOX_DEFAULT
# 67 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 36 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 68 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 69 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 37 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 70 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 38 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 72 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner, MSGBOX_DEFAULT
# 73 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 39 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 74 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 75 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 40 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 76 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 77 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 78 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 42 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 80 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 81 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 82 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 83 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 84 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV::
# 85 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 47 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 86 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 87 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 48 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 88 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	playse SE_PIN
# 89 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 49 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 90 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_ExclamationMark
# 91 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 50 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 92 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 51 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 94 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_Delay48
# 95 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 52 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 96 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 53 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 98 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 99 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 54 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 100 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 55 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 102 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV, MSGBOX_DEFAULT
# 103 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 56 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 104 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 105 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 57 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 106 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV
# 107 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 58 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 108 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer
# 109 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 59 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 110 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 111 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 60 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 112 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn
# 113 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 61 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 114 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 115 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 62 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 116 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	release
# 117 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 118 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 119 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 120 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV::
# 121 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 67 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 122 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_right
# 123 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 68 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 124 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lock_facing_direction
# 125 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 69 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 126 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_left
# 127 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 70 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 128 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	unlock_facing_direction
# 129 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 71 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 130 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 131 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	return
# 132 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 133 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 134 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 74 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 135 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer:
# 136 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 75 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 137 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_up
# 138 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 76 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 139 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 140 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 141 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 79 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 142 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn:
# 143 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 80 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 144 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_down
# 145 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 81 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 146 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_down
# 147 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 82 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 148 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_up
# 149 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 83 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 150 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 151 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 152 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot::
# 153 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 86 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 154 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hm, so they doubled the guests by\n"
# 155 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "using POKéMON as attractions?\p"
# 156 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hm, well, maybe I should make a cute\n"
# 157 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON our inn's mascot.\p"
# 158 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I wonder if that will attract more\n"
# 159 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "guests to stay with us?$"
# 160 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 161 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua::
# 162 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 95 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 163 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
# 164 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I was too involved in watching TV!\p"
# 165 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Since that TEAM AQUA came to town,\n"
# 166 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "the tourists have been staying away.$"
# 167 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 168 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV::
# 169 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 102 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 170 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hey, down in front!\n"
# 171 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I can't see the TV!$"
# 172 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 173 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem::
# 174 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 107 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 175 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Amazing! You're telling me a POKéMON\n"
# 176 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "found someone's lost item?\p"
# 177 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "That's something. If we had some smart\n"
# 178 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON like that…\p"
# 179 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "We could recover anything that our\n"
# 180 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "guests mislaid…$"
# 181 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 182 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted::
# 183 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 116 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 184 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
# 185 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I was too involved in watching TV!\p"
# 186 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I heard that someone busted\n"
# 187 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "the TEAM AQUA HIDEOUT.\p"
# 188 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Thanks to that, we just booked\n"
# 189 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "a reservation from a big group.\p"
# 190 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "It was a company called… Uh…\n"
# 191 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "GAME something…$"
# 192 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 193 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar::
# 194 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 127 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 195 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Amazing! A house-sitting POKéMON\n"
# 196 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "caught a burglar?\p"
# 197 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "That's something. If we had a tough\n"
# 198 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON as a security guard…\p"
# 199 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "We would be able to provide our guests\n"
# 200 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "with greater safety.$"
# 201 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 202 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner::
# 203 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 136 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
# 204 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
# 205 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I was too involved in watching TV.\p"
# 206 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, yes. A big group of guests arrived\n"
# 207 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "a little while ago.\p"
# 208 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "They booked in as GAME FREAK,\n"
# 209 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "so I guess they must make games.\p"
# 210 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Uh-oh, I'd better get working on\n"
# 211 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "their dinner!$"
