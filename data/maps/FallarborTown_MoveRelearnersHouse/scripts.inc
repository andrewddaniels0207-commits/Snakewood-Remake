# 1 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 2 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_MapScripts::
# 3 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_2
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_1:
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_2:
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_1
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_2
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_1:
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_6
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_4:
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_2:
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_1
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_6:
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_4
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_2
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_1:
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_5
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_4:
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special HasMovesToRelearn
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_8
# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_7:
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 86 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_2:
# 89 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_1
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 93 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_5:
# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 95 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_4
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 98 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_8:
# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 100 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 101 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_7
# 102 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 103 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 105 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 106 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 107 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 108 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 109 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 110 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 111 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 112 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_0x8004, 0
# 113 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_2
# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_1:
# 115 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 116 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 117 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 119 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 120 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 121 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 122 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 123 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_2:
# 124 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 125 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_1
# 127 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 128 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 129 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 130 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 131 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 132 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 133 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 134 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 135 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 136 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 137 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 138 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 139 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 140 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 141 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 142 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 143 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 144 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 145 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 146 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 147 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 148 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 149 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 150 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 151 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 152 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 153 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor::
# 154 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 155 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the MOVE TUTOR.\p"
# 156 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I know all the moves that POKéMON\n"
# 157 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "learn--every one of them--and I can\l"
# 158 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach POKéMON those moves.\p"
# 159 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach a move to a POKéMON\n"
# 160 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "of yours if you'd like.\p"
# 161 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'll do it for a HEART SCALE.\n"
# 162 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm collecting those now.$"
# 163 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 164 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove::
# 165 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 166 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
# 167 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "goodness HEART SCALE!\p"
# 168 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Let me guess, you want me to teach\n"
# 169 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "a move?$"
# 170 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 171 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon::
# 172 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 173 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which POKéMON needs tutoring?$"
# 174 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 175 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove::
# 176 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 103 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 177 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"
# 178 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 179 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon::
# 180 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 107 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 181 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
# 182 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't appear as if I have any move\n"
# 183 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach that POKéMON.$"
# 184 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 185 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale::
# 186 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 113 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 187 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\n"
# 188 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "in exchange.$"
# 189 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 190 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale::
# 191 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 192 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "If your POKéMON need to learn a move,\n"
# 193 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "come back with a HEART SCALE.$"
# 194 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 195 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg::
# 196 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 123 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
# 197 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
# 198 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach an EGG.$"
