# 1 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 6 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_MoveDeleter::
# 7 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 4 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 8 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	lock
# 9 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 5 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 10 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 6 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 12 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WouldYouLikeToForgetMove, MSGBOX_YESNO
# 13 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 7 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 14 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 15 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_House3_EventScript_MoveDeleter_2
# 16 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_MoveDeleter_1:
# 17 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 10 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 18 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
# 19 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 20 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 21 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_MoveDeleter_2:
# 22 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 8 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 23 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
# 24 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_MoveDeleter_1
# 25 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 26 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 27 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter::
# 28 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 15 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 29 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WhichMonShouldForgetMove
# 30 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 16 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 31 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special ChoosePartyMon
# 32 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 17 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 33 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	waitstate
# 34 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 18 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 35 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 36 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_ge FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_2
# 37 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_1:
# 38 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 21 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 39 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special IsSelectedMonEgg
# 40 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 22 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 41 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 42 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_5
# 43 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_4:
# 44 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 25 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 45 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special GetNumMovesSelectedMonHas
# 46 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 26 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 47 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 48 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_8
# 49 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_7:
# 50 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 29 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 51 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten
# 52 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 30 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 53 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 54 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 31 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 55 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 56 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 32 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 57 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 58 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 33 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 59 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_0x8005, MAX_MON_MOVES
# 60 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_11
# 61 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_10:
# 62 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 36 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 63 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 64 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 37 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 65 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 66 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 38 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 67 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 68 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_14
# 69 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_13:
# 70 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 41 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 71 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
# 72 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 73 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 74 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_2:
# 75 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 19 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 76 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
# 77 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_1
# 78 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 79 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_5:
# 80 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 23 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 81 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CantForgetMoveEgg
# 82 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_4
# 83 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 84 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_8:
# 85 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 27 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 86 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CantForgetOnlyMove
# 87 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_7
# 88 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 89 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_11:
# 90 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 34 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 91 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
# 92 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_10
# 93 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 94 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_14:
# 95 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 39 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 96 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_ForgetMove
# 97 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_13
# 98 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 99 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 100 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ForgetMove::
# 101 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 46 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 102 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special MoveDeleterForgetMove
# 103 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 47 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 104 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 105 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 48 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 106 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	waitfanfare
# 107 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 49 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 108 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely
# 109 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 50 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 110 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 111 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 112 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 113 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 114 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_CantForgetOnlyMove::
# 115 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 55 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 116 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 117 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 56 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 118 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonOnlyKnowsOneMove
# 119 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 57 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 120 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 121 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 122 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 123 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 124 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_CantForgetMoveEgg::
# 125 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 62 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 126 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_NoEggShouldKnowMoves
# 127 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 63 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 128 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 129 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 130 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 131 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 132 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_CancelForgetMove::
# 133 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 68 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 134 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves
# 135 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 69 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 136 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 137 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 138 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 139 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 140 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_WouldYouLikeToForgetMove::
# 141 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 73 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 142 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Uh…\n"
# 143 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Oh, yes, I'm the MOVE DELETER.\p"
# 144 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "I can make POKéMON forget their\n"
# 145 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "moves.\p"
# 146 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Would you like me to do that?$"
# 147 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 148 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_WhichMonShouldForgetMove::
# 149 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 81 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 150 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Which POKéMON should forget a\n"
# 151 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "move?$"
# 152 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 153 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten::
# 154 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 86 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 155 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Which move should be forgotten?$"
# 156 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 157 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_MonOnlyKnowsOneMove::
# 158 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 90 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 159 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "{STR_VAR_1} seems to know only one\n"
# 160 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "move…$"
# 161 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 162 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten::
# 163 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 95 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 164 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
# 165 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "That move should be forgotten?$"
# 166 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 167 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely::
# 168 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 100 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 169 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "It worked to perfection!\p"
# 170 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "{STR_VAR_1} has forgotten\n"
# 171 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "{STR_VAR_2} completely.$"
# 172 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 173 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves::
# 174 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 106 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 175 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Come again if there are other\n"
# 176 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "moves to be forgotten.$"
# 177 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 178 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_NoEggShouldKnowMoves::
# 179 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 111 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
# 180 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "What?\n"
# 181 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "No EGG should know any moves.$"
