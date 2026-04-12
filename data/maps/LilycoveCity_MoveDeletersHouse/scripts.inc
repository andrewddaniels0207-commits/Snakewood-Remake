# 1 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 2 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_MapScripts::
# 3 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 5 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 6 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter::
# 7 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 4 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 8 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	lockall
# 9 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 5 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 10 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
# 11 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 6 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 12 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitmovement 0
# 13 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 7 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 14 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
# 15 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 8 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 16 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 9 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 18 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_3
# 19 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 11 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 20 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_4
# 21 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_1:
# 22 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 14 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 23 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 24 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 25 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 26 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_3:
# 27 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 10 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 28 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 29 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_1
# 30 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 31 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_4:
# 32 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 12 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 33 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 34 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_1
# 35 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 36 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 37 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
# 38 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 19 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 39 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
# 40 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 20 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 41 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_DELETER
# 42 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 21 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 43 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitstate
# 44 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 22 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 45 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
# 46 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_2
# 47 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_1:
# 48 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 25 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 49 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsSelectedMonEgg
# 50 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 26 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 51 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 52 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_5
# 53 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_4:
# 54 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 29 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 55 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special GetNumMovesSelectedMonHas
# 56 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 30 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 57 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, 1
# 58 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_8
# 59 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_7:
# 60 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 33 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 61 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
# 62 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 34 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 63 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 64 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 35 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 65 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 66 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 36 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 67 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 37 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 69 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_0x8005, MAX_MON_MOVES
# 70 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_11
# 71 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_10:
# 72 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 40 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 73 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 74 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 41 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 75 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 76 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 42 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 77 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 78 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 43 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 79 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_15
# 80 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 45 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 81 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_16
# 82 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_13:
# 83 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 48 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 84 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 85 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 86 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 87 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_2:
# 88 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 23 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 89 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 90 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_1
# 91 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 92 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_5:
# 93 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 27 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 94 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
# 95 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_4
# 96 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 97 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_8:
# 98 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 31 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 99 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
# 100 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_7
# 101 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 102 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_11:
# 103 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 38 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 104 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 105 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_10
# 106 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 107 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_15:
# 108 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 44 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 109 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove
# 110 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_13
# 111 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 112 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_16:
# 113 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 46 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 114 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 115 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_13
# 116 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 117 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 118 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove::
# 119 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 53 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 120 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsLastMonThatKnowsSurf
# 121 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 54 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 122 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 123 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove_2
# 124 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove_1:
# 125 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 57 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 126 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterForgetMove
# 127 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 58 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 128 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 129 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 59 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 130 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 131 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 60 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 132 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
# 133 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 61 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 134 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 135 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 136 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 137 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove_2:
# 138 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 55 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 139 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf
# 140 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove_1
# 141 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 142 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 143 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove::
# 144 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 66 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 145 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 146 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 67 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 147 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
# 148 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 68 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 149 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 150 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 151 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 152 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 153 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves::
# 154 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 73 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 155 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
# 156 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 74 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 157 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 158 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 159 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 160 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 161 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain::
# 162 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 79 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 163 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
# 164 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 80 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 165 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 166 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 167 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 168 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 169 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf::
# 170 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 85 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 171 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 172 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 86 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 173 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf, MSGBOX_DEFAULT
# 174 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 87 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 175 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 176 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 177 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 178 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 179 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove::
# 180 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 91 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 181 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Uh…\n"
# 182 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Oh, yes, I'm the MOVE DELETER.\p"
# 183 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I can make POKéMON forget their moves.\p"
# 184 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Would you like me to do that?$"
# 185 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 186 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget::
# 187 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 98 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 188 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Which POKéMON should forget a move?$"
# 189 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 190 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten::
# 191 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 102 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 192 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Which move should be forgotten?$"
# 193 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 194 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove::
# 195 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 106 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 196 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} knows only one move\n"
# 197 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "so it can't be forgotten…$"
# 198 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 199 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten::
# 200 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 111 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 201 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
# 202 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "That move should be forgotten?$"
# 203 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 204 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove::
# 205 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 116 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 206 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "It worked to perfection!\p"
# 207 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} has forgotten\n"
# 208 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_2} completely.$"
# 209 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 210 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ComeAgain::
# 211 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 122 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 212 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Come again if there are moves that\n"
# 213 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "need to be forgotten.$"
# 214 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 215 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves::
# 216 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 127 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 217 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "What?\n"
# 218 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "No EGG should know any moves.$"
# 219 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 220 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf::
# 221 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 132 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
# 222 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm!\p"
# 223 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Your {STR_VAR_1} doesn't seem willing\n"
# 224 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "to forget SURF.$"
