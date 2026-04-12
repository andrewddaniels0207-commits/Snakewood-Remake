TwoIsland_House_Frlg_MapScripts::
	.byte 0


TwoIsland_House_EventScript_MoveManiac::
# 4 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	lock
# 5 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_BIG_MUSHROOM
# 7 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_TINY_MUSHROOMS
# 8 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_BOTH_MUSHROOMS
# 9 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set CHECKED_MUSHROOMS, TwoIsland_House_EventScript_MoveManiac_2
TwoIsland_House_EventScript_MoveManiac_1:
# 12 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TeachMonMoveForMushroom
# 13 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag CHECKED_MUSHROOMS
# 14 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms
	end

TwoIsland_House_EventScript_MoveManiac_2:
# 10 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms
	goto TwoIsland_House_EventScript_MoveManiac_1


TwoIsland_House_EventScript_CheckPlayerHasMushrooms::
# 19 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 20 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TwoIsland_House_EventScript_CheckPlayerHasMushrooms_2
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_1:
# 23 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM, 2
# 24 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TwoIsland_House_EventScript_CheckPlayerHasMushrooms_5
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_4:
# 27 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_CheckPlayerHasMushrooms_8
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_7:
# 30 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_CheckPlayerHasMushrooms_11
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_10:
# 33 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	end

TwoIsland_House_EventScript_CheckPlayerHasMushrooms_2:
# 21 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call TwoIsland_House_EventScript_SetHasBigMushroom
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms_1

TwoIsland_House_EventScript_CheckPlayerHasMushrooms_5:
# 25 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call TwoIsland_House_EventScript_SetHasTinyMushrooms
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms_4

TwoIsland_House_EventScript_CheckPlayerHasMushrooms_8:
# 28 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms_7

TwoIsland_House_EventScript_CheckPlayerHasMushrooms_11:
# 31 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckAlsoHasBigMushroom
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms_10


TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms::
# 38 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms_2
TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms_1:
# 41 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
	end

TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms_2:
# 39 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call TwoIsland_House_EventScript_SetHasBothMushrooms
	goto TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms_1


TwoIsland_House_EventScript_CheckAlsoHasBigMushroom::
# 46 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_CheckAlsoHasBigMushroom_2
TwoIsland_House_EventScript_CheckAlsoHasBigMushroom_1:
# 49 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
	end

TwoIsland_House_EventScript_CheckAlsoHasBigMushroom_2:
# 47 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call TwoIsland_House_EventScript_SetHasBothMushrooms
	goto TwoIsland_House_EventScript_CheckAlsoHasBigMushroom_1


TwoIsland_House_EventScript_AskTutorMon::
# 54 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_WantMeToTeachMove, MSGBOX_YESNO
# 55 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TwoIsland_House_EventScript_AskTutorMon_2
TwoIsland_House_EventScript_AskTutorMon_1:
# 58 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	end

TwoIsland_House_EventScript_AskTutorMon_2:
# 56 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	goto TwoIsland_House_EventScript_AskTutorMon_1


TwoIsland_House_EventScript_ChooseMonToTutor::
# 63 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TutorWhichMon
# 64 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special ChooseMonForMoveRelearner
# 65 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	waitstate
# 66 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge TwoIsland_House_EventScript_ChooseMonToTutor_2
TwoIsland_House_EventScript_ChooseMonToTutor_1:
# 69 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special IsSelectedMonEgg
# 70 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TwoIsland_House_EventScript_ChooseMonToTutor_5
TwoIsland_House_EventScript_ChooseMonToTutor_4:
# 73 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq TwoIsland_House_EventScript_ChooseMonToTutor_8
TwoIsland_House_EventScript_ChooseMonToTutor_7:
# 76 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMoveToTeach
	end

TwoIsland_House_EventScript_ChooseMonToTutor_2:
# 67 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	goto TwoIsland_House_EventScript_ChooseMonToTutor_1

TwoIsland_House_EventScript_ChooseMonToTutor_5:
# 71 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CantTutorEgg
	goto TwoIsland_House_EventScript_ChooseMonToTutor_4

TwoIsland_House_EventScript_ChooseMonToTutor_8:
# 74 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_NoMoveToTutorMon
	goto TwoIsland_House_EventScript_ChooseMonToTutor_7


TwoIsland_House_EventScript_ChooseMoveToTeach::
# 81 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TeachWhichMove
# 82 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special TeachMoveRelearnerMove
# 83 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	waitstate
# 84 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq TwoIsland_House_EventScript_ChooseMoveToTeach_2
TwoIsland_House_EventScript_ChooseMoveToTeach_1:
# 87 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BOTH_MUSHROOMS, TwoIsland_House_EventScript_ChooseMoveToTeach_5
TwoIsland_House_EventScript_ChooseMoveToTeach_4:
# 90 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_ChooseMoveToTeach_8
TwoIsland_House_EventScript_ChooseMoveToTeach_7:
# 93 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_ChooseMoveToTeach_11
TwoIsland_House_EventScript_ChooseMoveToTeach_10:
	end

TwoIsland_House_EventScript_ChooseMoveToTeach_2:
# 85 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	goto TwoIsland_House_EventScript_ChooseMoveToTeach_1

TwoIsland_House_EventScript_ChooseMoveToTeach_5:
# 88 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMushroom
	goto TwoIsland_House_EventScript_ChooseMoveToTeach_4

TwoIsland_House_EventScript_ChooseMoveToTeach_8:
# 91 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_GiveBigMushroom
	goto TwoIsland_House_EventScript_ChooseMoveToTeach_7

TwoIsland_House_EventScript_ChooseMoveToTeach_11:
# 94 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_GiveTinyMushrooms
	goto TwoIsland_House_EventScript_ChooseMoveToTeach_10


TwoIsland_House_EventScript_GiveBigMushroom::
# 100 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 101 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 102 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverOneBigMushroom
# 103 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 104 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	end


TwoIsland_House_EventScript_GiveTinyMushrooms::
# 109 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 2
# 110 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 111 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverTwoTinyMushrooms
# 112 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 113 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	end


TwoIsland_House_EventScript_ChooseMushroom::
# 118 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	message TwoIsland_House_Text_IllNeedMushroomOrTwo
# 119 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	waitmessage
# 120 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_MUSHROOMS, TRUE
# 121 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 0, TwoIsland_House_EventScript_ChooseMushroom_3
# 124 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 1, TwoIsland_House_EventScript_ChooseMushroom_4
TwoIsland_House_EventScript_ChooseMushroom_1:
	end

TwoIsland_House_EventScript_ChooseMushroom_3:
# 123 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_GiveTinyMushrooms
	goto TwoIsland_House_EventScript_ChooseMushroom_1

TwoIsland_House_EventScript_ChooseMushroom_4:
# 125 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_GiveBigMushroom
	goto TwoIsland_House_EventScript_ChooseMushroom_1


TwoIsland_House_EventScript_NoMoveToTutorMon::
# 131 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_NoMoveICanTeachThatMon
# 132 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	end


TwoIsland_House_EventScript_CantTutorEgg::
# 137 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_CantTeachAnEgg
# 138 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	end


TwoIsland_House_EventScript_EndTutorMove::
# 143 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove
# 144 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	release
	end


TwoIsland_House_EventScript_SetHasBigMushroom::
# 149 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_BIG_MUSHROOM
	return


TwoIsland_House_EventScript_SetHasTinyMushrooms::
# 154 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_TINY_MUSHROOMS
	return


TwoIsland_House_EventScript_SetHasBothMushrooms::
# 159 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_BOTH_MUSHROOMS
	return


TwoIsland_House_Text_TeachMonMoveForMushroom::
# 163 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "I'm the POKéMON MOVE MANIAC.\p"
	.string "I know every single move that\n"
	.string "POKéMON learn growing up.\p"
	.string "I'm also a mushroom maniac.\p"
	.string "Bring me two TINYMUSHROOMS,\n"
	.string "or one BIG MUSHROOM.\p"
	.string "If you do that for me, I'll teach\n"
	.string "a move to one POKéMON.$"

TwoIsland_House_Text_WantMeToTeachMove::
# 174 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Sniff, sniff…\n"
	.string "Hm! You smell of MUSHROOMS!\p"
	.string "Do you want me to teach a move\n"
	.string "to a POKéMON of yours?$"

TwoIsland_House_Text_TutorWhichMon::
# 181 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Which POKéMON needs tutoring?$"

TwoIsland_House_Text_TeachWhichMove::
# 185 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Which move should I teach?$"

TwoIsland_House_Text_NoMoveICanTeachThatMon::
# 189 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Sorry…\p"
	.string "It doesn't appear as if I have a\n"
	.string "move I can teach that POKéMON.$"

TwoIsland_House_Text_IllNeedMushroomOrTwo::
# 195 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Then, I'll need a MUSHROOM or two.\n"
	.string "What are you going to give me?$"

TwoIsland_House_Text_HandedOverTwoTinyMushrooms::
# 200 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "{PLAYER} handed over two\n"
	.string "TINYMUSHROOMS in exchange.$"

TwoIsland_House_Text_HandedOverOneBigMushroom::
# 205 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "{PLAYER} handed over one\n"
	.string "BIG MUSHROOM in exchange.$"

TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove::
# 210 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "If your POKéMON need to learn a\n"
	.string "move, I need a MUSHROOM or two.$"

TwoIsland_House_Text_CantTeachAnEgg::
# 215 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Hunh? There isn't a single move\n"
	.string "that I can teach an EGG.$"
