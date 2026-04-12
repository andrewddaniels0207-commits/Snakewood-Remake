# 1 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 6 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_LeftMoveTutor::
# 7 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 4 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 8 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 5 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	faceplayer
# 11 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 6 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 12 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 13 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 7 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 14 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_LeftMoveTutor_2
# 15 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_LeftMoveTutor_1:
# 16 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 17 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro, MSGBOX_DEFAULT
# 18 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 11 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 19 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
# 20 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 12 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 21 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
# 22 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 23 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 24 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_LeftMoveTutor_2:
# 25 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 8 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 26 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor
# 27 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor_1
# 28 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 29 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 30 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor::
# 31 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 17 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 32 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 18 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 34 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
# 35 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 36 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 37 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 38 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove::
# 39 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 23 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 40 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 41 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 24 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 42 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 43 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 25 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 44 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 45 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 26 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 46 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 47 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 27 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 48 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 49 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 28 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 50 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
# 51 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 29 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 52 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 53 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 30 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 54 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 55 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 31 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 56 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 57 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 32 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 58 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 33 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 60 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_3
# 61 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 35 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 62 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_4
# 63 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 37 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 64 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_5
# 65 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 39 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 66 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_6
# 67 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 41 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 68 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_7
# 69 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 43 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 70 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_8
# 71 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 45 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 72 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_9
# 73 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 47 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 74 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_10
# 75 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 49 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 76 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_11
# 77 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 51 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 78 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_12
# 79 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 53 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 80 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_13
# 81 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 55 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 82 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_14
# 83 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1:
# 84 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 85 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 86 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_3:
# 87 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 34 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 88 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Softboiled
# 89 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 90 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 91 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_4:
# 92 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 36 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 93 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_SeismicToss
# 94 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 95 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 96 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_5:
# 97 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 38 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 98 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_DreamEater
# 99 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 100 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 101 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_6:
# 102 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 40 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 103 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MegaPunch
# 104 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 105 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 106 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_7:
# 107 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 42 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 108 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MegaKick
# 109 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 110 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 111 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_8:
# 112 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 44 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 113 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_BodySlam
# 114 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 115 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 116 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_9:
# 117 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 46 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 118 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_RockSlide
# 119 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 120 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 121 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_10:
# 122 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 48 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 123 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Counter
# 124 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 125 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 126 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_11:
# 127 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 50 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 128 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ThunderWave
# 129 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 130 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 131 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_12:
# 132 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 52 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 133 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_SwordsDance
# 134 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 135 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 136 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_13:
# 137 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 54 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 138 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 139 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 140 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 141 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_14:
# 142 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 56 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 143 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 144 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_1
# 145 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 146 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 147 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove::
# 148 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 62 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 149 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 150 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 63 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 151 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 152 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 64 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 153 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 154 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 65 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 155 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 156 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 66 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 157 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 158 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 67 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 159 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 160 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 68 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 161 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 162 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 69 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 163 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 164 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 70 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 165 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 166 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 71 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 167 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_3
# 168 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 73 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 169 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_4
# 170 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 75 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 171 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_5
# 172 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 77 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 173 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_6
# 174 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 79 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 175 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_7
# 176 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 81 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 177 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_8
# 178 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 83 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 179 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_9
# 180 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 85 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 181 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_10
# 182 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 87 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 183 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_11
# 184 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 89 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 185 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_12
# 186 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 91 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 187 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_13
# 188 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 93 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 189 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_14
# 190 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1:
# 191 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 192 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 193 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_3:
# 194 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 72 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 195 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Softboiled
# 196 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 197 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 198 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_4:
# 199 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 74 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 200 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_SeismicToss
# 201 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 202 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 203 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_5:
# 204 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 76 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 205 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_DreamEater
# 206 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 207 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 208 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_6:
# 209 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 78 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 210 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MegaPunch
# 211 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 212 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 213 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_7:
# 214 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 80 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 215 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MegaKick
# 216 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 217 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 218 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_8:
# 219 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 82 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 220 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_BodySlam
# 221 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 222 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 223 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_9:
# 224 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 84 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 225 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_RockSlide
# 226 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 227 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 228 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_10:
# 229 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 86 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 230 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Counter
# 231 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 232 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 233 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_11:
# 234 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 88 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 235 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ThunderWave
# 236 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 237 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 238 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_12:
# 239 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 90 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 240 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_SwordsDance
# 241 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 242 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 243 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_13:
# 244 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 92 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 245 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 246 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 247 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 248 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_14:
# 249 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 94 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 250 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 251 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_1
# 252 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 253 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 254 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Softboiled::
# 255 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 100 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 256 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 16
# 257 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 101 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 258 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SOFT_BOILED
# 259 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 102 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 260 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 261 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 262 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 263 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 264 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_SeismicToss::
# 265 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 107 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 266 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 267 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 108 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 268 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
# 269 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 109 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 270 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 271 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 272 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 273 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 274 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_DreamEater::
# 275 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 114 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 276 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 277 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 115 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 278 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_DREAM_EATER
# 279 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 116 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 280 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 281 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 282 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 283 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 284 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MegaPunch::
# 285 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 121 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 286 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 287 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 122 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 288 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
# 289 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 123 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 290 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 291 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 292 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 293 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 294 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MegaKick::
# 295 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 128 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 296 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 297 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 129 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 298 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
# 299 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 130 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 300 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 301 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 302 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 303 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 304 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_BodySlam::
# 305 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 135 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 306 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 307 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 136 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 308 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 309 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 137 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 310 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 311 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 312 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 313 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 314 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_RockSlide::
# 315 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 142 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 316 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 317 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 143 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 318 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
# 319 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 144 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 320 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 321 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 322 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 323 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 324 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Counter::
# 325 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 149 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 326 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 327 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 150 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 328 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_COUNTER
# 329 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 151 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 330 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 331 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 332 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 333 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 334 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ThunderWave::
# 335 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 156 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 336 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 337 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 157 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 338 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
# 339 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 158 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 340 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 341 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 342 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 343 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 344 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_SwordsDance::
# 345 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 163 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 346 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 347 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 164 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 348 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
# 349 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 165 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 350 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 351 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 352 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 353 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 354 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_RightMoveTutor::
# 355 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 170 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 356 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock
# 357 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 171 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 358 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	faceplayer
# 359 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 172 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 360 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 361 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 173 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 362 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_RightMoveTutor_2
# 363 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_RightMoveTutor_1:
# 364 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 176 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 365 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorIntro, MSGBOX_DEFAULT
# 366 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 177 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 367 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
# 368 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 178 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 369 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
# 370 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 371 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 372 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_RightMoveTutor_2:
# 373 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 174 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 374 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor
# 375 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor_1
# 376 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 377 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 378 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor::
# 379 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 183 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 380 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
# 381 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 184 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 382 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
# 383 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 384 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 385 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 386 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove::
# 387 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 189 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 388 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 389 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 190 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 390 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 391 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 191 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 392 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 393 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 192 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 394 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 395 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 193 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 396 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 397 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 194 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 398 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
# 399 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 195 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 400 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 401 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 196 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 402 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 403 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 197 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 404 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 405 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 198 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 406 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 407 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 199 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 408 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_3
# 409 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 201 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 410 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_4
# 411 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 203 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 412 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_5
# 413 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 205 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 414 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_6
# 415 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 207 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 416 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_7
# 417 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 209 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 418 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_8
# 419 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 211 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 420 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_9
# 421 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 213 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 422 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_10
# 423 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 215 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 424 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_11
# 425 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 217 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 426 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_12
# 427 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 219 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 428 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_13
# 429 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 221 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 430 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_14
# 431 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1:
# 432 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 433 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 434 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_3:
# 435 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 200 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 436 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_DefenseCurl
# 437 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 438 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 439 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_4:
# 440 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 202 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 441 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Snore
# 442 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 443 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 444 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_5:
# 445 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 204 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 446 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MudSlap
# 447 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 448 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 449 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_6:
# 450 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 206 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 451 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Swift
# 452 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 453 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 454 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_7:
# 455 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 208 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 456 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_IcyWind
# 457 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 458 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 459 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_8:
# 460 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 210 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 461 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Endure
# 462 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 463 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 464 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_9:
# 465 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 212 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 466 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_PsychUp
# 467 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 468 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 469 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_10:
# 470 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 214 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 471 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_IcePunch
# 472 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 473 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 474 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_11:
# 475 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 216 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 476 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ThunderPunch
# 477 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 478 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 479 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_12:
# 480 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 218 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 481 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_FirePunch
# 482 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 483 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 484 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_13:
# 485 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 220 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 486 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 487 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 488 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 489 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_14:
# 490 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 222 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 491 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 492 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_1
# 493 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 494 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 495 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove::
# 496 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 228 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 497 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 498 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 229 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 499 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 500 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 230 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 501 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 502 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 231 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 503 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 504 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 232 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 505 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 506 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 233 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 507 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 508 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 234 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 509 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 510 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 235 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 511 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 512 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 236 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 513 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 514 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 237 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 515 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_3
# 516 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 239 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 517 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_4
# 518 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 241 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 519 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_5
# 520 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 243 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 521 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_6
# 522 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 245 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 523 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_7
# 524 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 247 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 525 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_8
# 526 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 249 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 527 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_9
# 528 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 251 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 529 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_10
# 530 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 253 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 531 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_11
# 532 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 255 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 533 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_12
# 534 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 257 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 535 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_13
# 536 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 259 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 537 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_14
# 538 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1:
# 539 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 540 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 541 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_3:
# 542 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 238 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 543 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_DefenseCurl
# 544 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 545 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 546 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_4:
# 547 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 240 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 548 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Snore
# 549 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 550 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 551 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_5:
# 552 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 242 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 553 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_MudSlap
# 554 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 555 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 556 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_6:
# 557 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 244 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 558 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Swift
# 559 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 560 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 561 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_7:
# 562 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 246 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 563 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_IcyWind
# 564 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 565 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 566 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_8:
# 567 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 248 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 568 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_Endure
# 569 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 570 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 571 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_9:
# 572 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 250 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 573 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_PsychUp
# 574 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 575 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 576 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_10:
# 577 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 252 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 578 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_IcePunch
# 579 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 580 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 581 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_11:
# 582 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 254 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 583 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ThunderPunch
# 584 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 585 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 586 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_12:
# 587 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 256 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 588 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_FirePunch
# 589 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 590 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 591 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_13:
# 592 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 258 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 593 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 594 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 595 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 596 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_14:
# 597 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 260 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 598 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 599 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_1
# 600 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 601 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 602 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_DefenseCurl::
# 603 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 266 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 604 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 16
# 605 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 267 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 606 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_DEFENSE_CURL
# 607 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 268 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 608 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 609 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 610 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 611 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 612 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Snore::
# 613 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 273 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 614 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 615 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 274 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 616 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SNORE
# 617 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 275 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 618 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 619 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 620 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 621 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 622 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MudSlap::
# 623 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 280 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 624 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 625 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 281 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 626 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SLAP
# 627 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 282 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 628 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 629 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 630 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 631 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 632 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Swift::
# 633 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 287 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 634 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 635 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 288 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 636 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SWIFT
# 637 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 289 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 638 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 639 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 640 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 641 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 642 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_IcyWind::
# 643 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 294 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 644 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 645 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 295 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 646 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 647 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 296 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 648 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 649 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 650 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 651 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 652 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Endure::
# 653 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 301 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 654 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 655 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 302 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 656 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ENDURE
# 657 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 303 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 658 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 659 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 660 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 661 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 662 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_PsychUp::
# 663 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 308 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 664 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 665 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 309 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 666 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCH_UP
# 667 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 310 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 668 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 669 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 670 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 671 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 672 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_IcePunch::
# 673 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 315 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 674 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 675 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 316 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 676 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
# 677 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 317 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 678 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 679 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 680 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 681 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 682 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ThunderPunch::
# 683 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 322 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 684 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 685 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 323 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 686 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
# 687 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 324 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 688 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 689 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 690 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 691 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 692 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_FirePunch::
# 693 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 329 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 694 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 695 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 330 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 696 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
# 697 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 331 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 698 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 699 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 700 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 701 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 702 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect::
# 703 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 336 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 704 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 705 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 337 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 706 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 707 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 338 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 708 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
# 709 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 339 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 710 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 711 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 712 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 713 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 714 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_CancelChooseMon::
# 715 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 344 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 716 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
# 717 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 345 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 718 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 719 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 720 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 721 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 722 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection::
# 723 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 350 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 724 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 725 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 351 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 726 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8008
# 727 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 352 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 728 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
# 729 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 353 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 730 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_RESULT, NO
# 731 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_2
# 732 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_1:
# 733 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 356 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 734 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 735 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 357 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 736 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_TEMP_1, VAR_0x8008
# 737 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_ge BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_5
# 738 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_4:
# 739 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 360 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 740 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
# 741 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 361 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 742 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
# 743 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 744 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 745 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_2:
# 746 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 354 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 747 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
# 748 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_1
# 749 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 750 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_5:
# 751 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 358 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 752 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_TeachTutorMove
# 753 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_4
# 754 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 755 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 756 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_TeachTutorMove::
# 757 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 366 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 758 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
# 759 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 367 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 760 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 761 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 368 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 762 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 763 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 369 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 764 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 765 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 370 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 766 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 767 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 371 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 768 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 769 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 372 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 770 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_RESULT, FALSE
# 771 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq BattleFrontier_Lounge7_EventScript_TeachTutorMove_2
# 772 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_TeachTutorMove_1:
# 773 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 375 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 774 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
# 775 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 376 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 776 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 777 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 377 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 778 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special TakeFrontierBattlePoints
# 779 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 378 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 780 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 781 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 782 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 783 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_TeachTutorMove_2:
# 784 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 373 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 785 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_CancelChooseMon
# 786 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_TeachTutorMove_1
# 787 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 788 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 789 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewMove::
# 790 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 383 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 791 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 792 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq BattleFrontier_Lounge7_EventScript_ChooseNewMove_2
# 793 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewMove_1:
# 794 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 386 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 795 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove
# 796 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 797 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 798 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewMove_2:
# 799 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 384 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 800 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove
# 801 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove_1
# 802 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 803 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 804 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Sailor::
# 805 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 391 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 806 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong, MSGBOX_NPC
# 807 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 808 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 809 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 810 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Gentleman::
# 811 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 396 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 812 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful, MSGBOX_NPC
# 813 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 814 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 815 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 816 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LeftTutorIntro::
# 817 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 400 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 818 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Buhahaha!\p"
# 819 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "You couldn't tell it from looking now,\n"
# 820 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "but I used to be one tough TRAINER.\p"
# 821 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "I had a reputation as the toughest\n"
# 822 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "BEAUTY around, I tell you!\p"
# 823 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "… … … … … …\p"
# 824 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "What is it now?\n"
# 825 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "You don't believe me.\p"
# 826 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "I'm not like that blowhard woman over\n"
# 827 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "there. I'm actually talented!\p"
# 828 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Let me prove it to you.\n"
# 829 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "I can teach your POKéMON special and\l"
# 830 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "yet cute moves.\p"
# 831 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "But my lessons don't come free.\n"
# 832 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "How about paying for the moves I teach\l"
# 833 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "with a wee bit of Battle Points?$"
# 834 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 835 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack::
# 836 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 419 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 837 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Buhahaha!\p"
# 838 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Are you back to learn special and\n"
# 839 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "yet cute POKéMON moves?$"
# 840 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 841 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_TeachWhichMove::
# 842 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 425 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 843 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Fine, fine, look here!\n"
# 844 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Which move should I teach?$"
# 845 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 846 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints::
# 847 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 430 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 848 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "The move {STR_VAR_1}, is it?\n"
# 849 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"
# 850 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 851 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_TeachMoveToWhichMon::
# 852 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 435 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 853 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Fine, fine, now pick the POKéMON\n"
# 854 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "I should teach the move to.$"
# 855 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 856 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_HaventGotEnoughPoints::
# 857 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 440 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 858 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "What the…\n"
# 859 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "You haven't got enough Battle Points!$"
# 860 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 861 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IllTakeBattlePoints::
# 862 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 445 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 863 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Do you see how skilled I am now?\n"
# 864 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "I'll take your Battle Points, thanks!$"
# 865 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 866 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_YouDontWantTo::
# 867 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 450 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 868 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "What's that?\n"
# 869 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "You don't want to…\p"
# 870 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "If you want to see how skilled I am,\n"
# 871 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "you come see me anytime!$"
# 872 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 873 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RightTutorIntro::
# 874 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 457 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 875 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ihihihi!\p"
# 876 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "I know it's hard to see now, but I used\n"
# 877 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "to be one fantastic TRAINER.\p"
# 878 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "I had a reputation as the most\n"
# 879 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "invincible SWIMMER around, I tell you!\p"
# 880 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "… … … … … …\p"
# 881 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "What's wrong?\n"
# 882 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "You don't believe me.\p"
# 883 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "I'm not like that buffoonish woman over\n"
# 884 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "there. I'm actually experienced!\p"
# 885 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "I can prove it to you.\n"
# 886 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "I can teach your POKéMON hard and\l"
# 887 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "yet pretty moves.\p"
# 888 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "But my lessons don't come free.\n"
# 889 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "How about paying for the moves I teach\l"
# 890 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "with a wee bit of Battle Points?$"
# 891 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 892 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RightTutorWelcomeBack::
# 893 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 476 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 894 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ihihihi!\p"
# 895 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Have you come to learn hard and\n"
# 896 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "yet pretty POKéMON moves?$"
# 897 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 898 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong::
# 899 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 482 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 900 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Those ladies, the way they bad-mouth\n"
# 901 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "each other, you probably think that\l"
# 902 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "they don't get along.\p"
# 903 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "But if that were true, they wouldn't\n"
# 904 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "stay out here together, would they?$"
# 905 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 906 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful::
# 907 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 490 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 908 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "When I was just a wee YOUNGSTER,\n"
# 909 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "those ladies were strong and beautiful.\p"
# 910 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "They were idols among us TRAINERS.\p"
# 911 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Even now, age hasn't dulled their\n"
# 912 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "abilities.\p"
# 913 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "In fact, their POKéMON moves have\n"
# 914 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "grown even more polished.\p"
# 915 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "But… For some reason, I can't help\n"
# 916 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "but feel this…\p"
# 917 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Time is so cruel…$"
# 918 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 919 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SoftboiledDesc::
# 920 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 503 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 921 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Recovers up to\n"
# 922 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "half the user's\n"
# 923 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "maximum HP.$"
# 924 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 925 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SeismicTossDesc::
# 926 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 509 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 927 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Inflicts damage\n"
# 928 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "identical to the\n"
# 929 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "user's level.$"
# 930 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 931 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_DreamEaterDesc::
# 932 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 515 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 933 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Recovers half the\n"
# 934 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "damage inflicted\n"
# 935 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "on a sleeping foe.$"
# 936 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 937 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MegaPunchDesc::
# 938 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 521 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 939 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A strong punch\n"
# 940 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "thrown with\n"
# 941 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "incredible power.$"
# 942 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 943 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MegaKickDesc::
# 944 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 527 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 945 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An extremely\n"
# 946 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "powerful kick with\n"
# 947 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "intense force.$"
# 948 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 949 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_BodySlamDesc::
# 950 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 533 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 951 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A full-body slam\n"
# 952 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "that may cause\n"
# 953 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "paralysis.$"
# 954 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 955 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RockSlideDesc::
# 956 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 539 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 957 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Large boulders\n"
# 958 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "are hurled. May\n"
# 959 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "cause flinching.$"
# 960 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 961 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_CounterDesc::
# 962 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 545 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 963 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Retaliates any\n"
# 964 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "physical hit with\n"
# 965 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "double the power.$"
# 966 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 967 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThunderWaveDesc::
# 968 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 551 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 969 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A weak jolt of\n"
# 970 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "electricity that\n"
# 971 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "paralyzes the foe.$"
# 972 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 973 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SwordsDanceDesc::
# 974 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 557 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 975 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A fighting dance\n"
# 976 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "that sharply\n"
# 977 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "raises ATTACK.$"
# 978 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 979 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_DefenseCurlDesc::
# 980 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 563 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 981 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Curls up to con-\n"
# 982 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "ceal weak spots\n"
# 983 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "and raise DEFENSE.$"
# 984 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 985 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SnoreDesc::
# 986 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 569 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 987 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A loud attack\n"
# 988 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "that can be used\n"
# 989 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "only while asleep.$"
# 990 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 991 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MudSlapDesc::
# 992 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 575 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 993 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Hurls mud in the\n"
# 994 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "foe's face to re-\n"
# 995 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "duce its accuracy.$"
# 996 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 997 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SwiftDesc::
# 998 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 581 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 999 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Sprays star-\n"
# 1000 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "shaped rays\n"
# 1001 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "that never miss.$"
# 1002 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 1003 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IcyWindDesc::
# 1004 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 587 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 1005 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A chilling attack\n"
# 1006 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "that lowers the\n"
# 1007 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "foe's SPEED.$"
# 1008 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 1009 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_EndureDesc::
# 1010 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 593 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 1011 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Endures any at-\n"
# 1012 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "tack for 1 turn,\n"
# 1013 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "leaving 1HP.$"
# 1014 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 1015 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_PsychUpDesc::
# 1016 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 599 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 1017 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Copies the foe's\n"
# 1018 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "effect(s) and\n"
# 1019 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "gives to the user.$"
# 1020 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 1021 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IcePunchDesc::
# 1022 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 605 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 1023 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An icy punch\n"
# 1024 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "that may\n"
# 1025 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "freeze the foe.$"
# 1026 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 1027 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThunderPunchDesc::
# 1028 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 611 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 1029 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An electrified\n"
# 1030 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "punch that may\n"
# 1031 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "paralyze the foe.$"
# 1032 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 1033 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_FirePunchDesc::
# 1034 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 617 "data/maps/BattleFrontier_Lounge7/scripts.pory"
# 1035 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A fiery punch\n"
# 1036 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "that may burn\n"
# 1037 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "the foe.$"
