BattleFrontier_Lounge7_MapScripts::
	.byte 0


BattleFrontier_Lounge7_EventScript_LeftMoveTutor::
# 4 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock
# 5 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	faceplayer
# 6 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 7 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_LeftMoveTutor_2
BattleFrontier_Lounge7_EventScript_LeftMoveTutor_1:
# 10 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro, MSGBOX_DEFAULT
# 11 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
# 12 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
	end

BattleFrontier_Lounge7_EventScript_LeftMoveTutor_2:
# 8 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor_1


BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor::
# 17 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
# 18 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
	end


BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove::
# 23 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 24 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 25 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 26 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 27 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 28 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
# 29 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 30 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 31 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 32 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 33 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_3
# 35 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_4
# 37 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_5
# 39 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_6
# 41 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_7
# 43 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_8
# 45 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_9
# 47 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_10
# 49 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_11
# 51 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_12
# 53 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_13
# 55 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_14
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1:
	end

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_3:
# 34 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Softboiled
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_4:
# 36 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_SeismicToss
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_5:
# 38 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_DreamEater
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_6:
# 40 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MegaPunch
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_7:
# 42 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MegaKick
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_8:
# 44 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_BodySlam
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_9:
# 46 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_RockSlide
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_10:
# 48 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Counter
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_11:
# 50 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ThunderWave
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_12:
# 52 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_SwordsDance
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_13:
# 54 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_14:
# 56 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1


BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove::
# 62 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 63 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 64 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 65 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 66 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 67 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 68 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 69 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 70 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_3
# 73 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_4
# 75 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_5
# 77 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_6
# 79 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_7
# 81 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_8
# 83 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_9
# 85 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_10
# 87 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_11
# 89 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_12
# 91 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_13
# 93 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_14
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1:
	end

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_3:
# 72 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Softboiled
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_4:
# 74 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_SeismicToss
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_5:
# 76 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_DreamEater
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_6:
# 78 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MegaPunch
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_7:
# 80 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MegaKick
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_8:
# 82 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_BodySlam
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_9:
# 84 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_RockSlide
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_10:
# 86 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Counter
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_11:
# 88 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ThunderWave
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_12:
# 90 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_SwordsDance
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_13:
# 92 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_14:
# 94 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1


BattleFrontier_Lounge7_EventScript_Softboiled::
# 100 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 16
# 101 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SOFT_BOILED
# 102 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_SeismicToss::
# 107 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 108 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
# 109 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_DreamEater::
# 114 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 115 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_DREAM_EATER
# 116 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_MegaPunch::
# 121 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 122 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
# 123 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_MegaKick::
# 128 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 129 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
# 130 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_BodySlam::
# 135 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 136 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 137 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_RockSlide::
# 142 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 143 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
# 144 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_Counter::
# 149 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 150 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_COUNTER
# 151 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_ThunderWave::
# 156 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 157 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
# 158 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_SwordsDance::
# 163 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 164 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
# 165 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_RightMoveTutor::
# 170 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock
# 171 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	faceplayer
# 172 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 173 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_RightMoveTutor_2
BattleFrontier_Lounge7_EventScript_RightMoveTutor_1:
# 176 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorIntro, MSGBOX_DEFAULT
# 177 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
# 178 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
	end

BattleFrontier_Lounge7_EventScript_RightMoveTutor_2:
# 174 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor_1


BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor::
# 183 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
	end


BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove::
# 189 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 190 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 191 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 192 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 193 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 194 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
# 195 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 196 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 197 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 198 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 199 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_3
# 201 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_4
# 203 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_5
# 205 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_6
# 207 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_7
# 209 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_8
# 211 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_9
# 213 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_10
# 215 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_11
# 217 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_12
# 219 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_13
# 221 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_14
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1:
	end

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_3:
# 200 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_DefenseCurl
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_4:
# 202 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Snore
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_5:
# 204 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MudSlap
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_6:
# 206 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Swift
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_7:
# 208 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_IcyWind
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_8:
# 210 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Endure
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_9:
# 212 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_PsychUp
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_10:
# 214 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_IcePunch
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_11:
# 216 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ThunderPunch
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_12:
# 218 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_FirePunch
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_13:
# 220 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_14:
# 222 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1


BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove::
# 228 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 229 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 230 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 231 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 232 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 233 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 234 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 235 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 236 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 237 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_3
# 239 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_4
# 241 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_5
# 243 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_6
# 245 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_7
# 247 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_8
# 249 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_9
# 251 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_10
# 253 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_11
# 255 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_12
# 257 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_13
# 259 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_14
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1:
	end

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_3:
# 238 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_DefenseCurl
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_4:
# 240 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Snore
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_5:
# 242 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MudSlap
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_6:
# 244 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Swift
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_7:
# 246 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_IcyWind
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_8:
# 248 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Endure
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_9:
# 250 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_PsychUp
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_10:
# 252 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_IcePunch
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_11:
# 254 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ThunderPunch
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_12:
# 256 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_FirePunch
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_13:
# 258 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_14:
# 260 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1


BattleFrontier_Lounge7_EventScript_DefenseCurl::
# 266 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 16
# 267 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_DEFENSE_CURL
# 268 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_Snore::
# 273 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 274 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SNORE
# 275 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_MudSlap::
# 280 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 281 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SLAP
# 282 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_Swift::
# 287 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 288 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SWIFT
# 289 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_IcyWind::
# 294 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 295 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 296 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_Endure::
# 301 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 302 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ENDURE
# 303 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_PsychUp::
# 308 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 309 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCH_UP
# 310 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_IcePunch::
# 315 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 316 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
# 317 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_ThunderPunch::
# 322 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 323 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
# 324 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_FirePunch::
# 329 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 330 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
# 331 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end


BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect::
# 336 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 337 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 338 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
# 339 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
	end


BattleFrontier_Lounge7_EventScript_CancelChooseMon::
# 344 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
# 345 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
	end


BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection::
# 350 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 351 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8008
# 352 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
# 353 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_2
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_1:
# 356 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 357 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_TEMP_1, VAR_0x8008
	goto_if_ge BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_5
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_4:
# 360 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
# 361 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
	end

BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_2:
# 354 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_1

BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_5:
# 358 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_TeachTutorMove
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_4


BattleFrontier_Lounge7_EventScript_TeachTutorMove::
# 366 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
# 367 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 368 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 369 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 370 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 371 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 372 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge7_EventScript_TeachTutorMove_2
BattleFrontier_Lounge7_EventScript_TeachTutorMove_1:
# 375 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
# 376 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 377 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special TakeFrontierBattlePoints
# 378 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
	end

BattleFrontier_Lounge7_EventScript_TeachTutorMove_2:
# 373 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_CancelChooseMon
	goto BattleFrontier_Lounge7_EventScript_TeachTutorMove_1


BattleFrontier_Lounge7_EventScript_ChooseNewMove::
# 383 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_TEMP_FRONTIER_TUTOR_ID, 0
	goto_if_eq BattleFrontier_Lounge7_EventScript_ChooseNewMove_2
BattleFrontier_Lounge7_EventScript_ChooseNewMove_1:
# 386 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove
	end

BattleFrontier_Lounge7_EventScript_ChooseNewMove_2:
# 384 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove_1


BattleFrontier_Lounge7_EventScript_Sailor::
# 391 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong, MSGBOX_NPC
	end


BattleFrontier_Lounge7_EventScript_Gentleman::
# 396 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful, MSGBOX_NPC
	end


BattleFrontier_Lounge7_Text_LeftTutorIntro::
# 400 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Buhahaha!\p"
	.string "You couldn't tell it from looking now,\n"
	.string "but I used to be one tough TRAINER.\p"
	.string "I had a reputation as the toughest\n"
	.string "BEAUTY around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What is it now?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that blowhard woman over\n"
	.string "there. I'm actually talented!\p"
	.string "Let me prove it to you.\n"
	.string "I can teach your POKéMON special and\l"
	.string "yet cute moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"

BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack::
# 419 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Buhahaha!\p"
	.string "Are you back to learn special and\n"
	.string "yet cute POKéMON moves?$"

BattleFrontier_Lounge7_Text_TeachWhichMove::
# 425 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Fine, fine, look here!\n"
	.string "Which move should I teach?$"

BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints::
# 430 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"

BattleFrontier_Lounge7_Text_TeachMoveToWhichMon::
# 435 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Fine, fine, now pick the POKéMON\n"
	.string "I should teach the move to.$"

BattleFrontier_Lounge7_Text_HaventGotEnoughPoints::
# 440 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"

BattleFrontier_Lounge7_Text_IllTakeBattlePoints::
# 445 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"

BattleFrontier_Lounge7_Text_YouDontWantTo::
# 450 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

BattleFrontier_Lounge7_Text_RightTutorIntro::
# 457 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ihihihi!\p"
	.string "I know it's hard to see now, but I used\n"
	.string "to be one fantastic TRAINER.\p"
	.string "I had a reputation as the most\n"
	.string "invincible SWIMMER around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What's wrong?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that buffoonish woman over\n"
	.string "there. I'm actually experienced!\p"
	.string "I can prove it to you.\n"
	.string "I can teach your POKéMON hard and\l"
	.string "yet pretty moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"

BattleFrontier_Lounge7_Text_RightTutorWelcomeBack::
# 476 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ihihihi!\p"
	.string "Have you come to learn hard and\n"
	.string "yet pretty POKéMON moves?$"

BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong::
# 482 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Those ladies, the way they bad-mouth\n"
	.string "each other, you probably think that\l"
	.string "they don't get along.\p"
	.string "But if that were true, they wouldn't\n"
	.string "stay out here together, would they?$"

BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful::
# 490 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "When I was just a wee YOUNGSTER,\n"
	.string "those ladies were strong and beautiful.\p"
	.string "They were idols among us TRAINERS.\p"
	.string "Even now, age hasn't dulled their\n"
	.string "abilities.\p"
	.string "In fact, their POKéMON moves have\n"
	.string "grown even more polished.\p"
	.string "But… For some reason, I can't help\n"
	.string "but feel this…\p"
	.string "Time is so cruel…$"

BattleFrontier_Lounge7_Text_SoftboiledDesc::
# 503 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Recovers up to\n"
	.string "half the user's\n"
	.string "maximum HP.$"

BattleFrontier_Lounge7_Text_SeismicTossDesc::
# 509 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Inflicts damage\n"
	.string "identical to the\n"
	.string "user's level.$"

BattleFrontier_Lounge7_Text_DreamEaterDesc::
# 515 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Recovers half the\n"
	.string "damage inflicted\n"
	.string "on a sleeping foe.$"

BattleFrontier_Lounge7_Text_MegaPunchDesc::
# 521 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A strong punch\n"
	.string "thrown with\n"
	.string "incredible power.$"

BattleFrontier_Lounge7_Text_MegaKickDesc::
# 527 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An extremely\n"
	.string "powerful kick with\n"
	.string "intense force.$"

BattleFrontier_Lounge7_Text_BodySlamDesc::
# 533 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A full-body slam\n"
	.string "that may cause\n"
	.string "paralysis.$"

BattleFrontier_Lounge7_Text_RockSlideDesc::
# 539 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Large boulders\n"
	.string "are hurled. May\n"
	.string "cause flinching.$"

BattleFrontier_Lounge7_Text_CounterDesc::
# 545 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Retaliates any\n"
	.string "physical hit with\n"
	.string "double the power.$"

BattleFrontier_Lounge7_Text_ThunderWaveDesc::
# 551 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A weak jolt of\n"
	.string "electricity that\n"
	.string "paralyzes the foe.$"

BattleFrontier_Lounge7_Text_SwordsDanceDesc::
# 557 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A fighting dance\n"
	.string "that sharply\n"
	.string "raises ATTACK.$"

BattleFrontier_Lounge7_Text_DefenseCurlDesc::
# 563 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Curls up to con-\n"
	.string "ceal weak spots\n"
	.string "and raise DEFENSE.$"

BattleFrontier_Lounge7_Text_SnoreDesc::
# 569 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A loud attack\n"
	.string "that can be used\n"
	.string "only while asleep.$"

BattleFrontier_Lounge7_Text_MudSlapDesc::
# 575 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Hurls mud in the\n"
	.string "foe's face to re-\n"
	.string "duce its accuracy.$"

BattleFrontier_Lounge7_Text_SwiftDesc::
# 581 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Sprays star-\n"
	.string "shaped rays\n"
	.string "that never miss.$"

BattleFrontier_Lounge7_Text_IcyWindDesc::
# 587 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A chilling attack\n"
	.string "that lowers the\n"
	.string "foe's SPEED.$"

BattleFrontier_Lounge7_Text_EndureDesc::
# 593 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Endures any at-\n"
	.string "tack for 1 turn,\n"
	.string "leaving 1HP.$"

BattleFrontier_Lounge7_Text_PsychUpDesc::
# 599 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Copies the foe's\n"
	.string "effect(s) and\n"
	.string "gives to the user.$"

BattleFrontier_Lounge7_Text_IcePunchDesc::
# 605 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An icy punch\n"
	.string "that may\n"
	.string "freeze the foe.$"

BattleFrontier_Lounge7_Text_ThunderPunchDesc::
# 611 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An electrified\n"
	.string "punch that may\n"
	.string "paralyze the foe.$"

BattleFrontier_Lounge7_Text_FirePunchDesc::
# 617 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A fiery punch\n"
	.string "that may burn\n"
	.string "the foe.$"
