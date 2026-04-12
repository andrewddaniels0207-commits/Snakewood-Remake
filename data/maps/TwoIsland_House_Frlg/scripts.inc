# 1 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 2 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Frlg_MapScripts::
# 3 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 5 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 6 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_MoveManiac::
# 7 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 4 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 8 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	lock
# 9 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 5 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 10 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 6 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 12 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_BIG_MUSHROOM
# 13 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 7 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 14 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_TINY_MUSHROOMS
# 15 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 8 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 16 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_BOTH_MUSHROOMS
# 17 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 9 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 18 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set CHECKED_MUSHROOMS, TwoIsland_House_EventScript_MoveManiac_2
# 19 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_MoveManiac_1:
# 20 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 12 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 21 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TeachMonMoveForMushroom
# 22 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 13 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 23 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag CHECKED_MUSHROOMS
# 24 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 14 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 25 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms
# 26 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 27 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 28 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_MoveManiac_2:
# 29 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 10 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 30 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms
# 31 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_MoveManiac_1
# 32 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 33 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 34 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms::
# 35 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 19 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 36 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 37 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 20 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 38 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 39 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq TwoIsland_House_EventScript_CheckPlayerHasMushrooms_2
# 40 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_1:
# 41 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 23 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 42 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM, 2
# 43 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 24 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 44 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 45 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq TwoIsland_House_EventScript_CheckPlayerHasMushrooms_5
# 46 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_4:
# 47 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 27 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 48 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_CheckPlayerHasMushrooms_8
# 49 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_7:
# 50 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 30 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 51 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_CheckPlayerHasMushrooms_11
# 52 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_10:
# 53 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 33 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 54 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 55 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 56 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 57 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_2:
# 58 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 21 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 59 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call TwoIsland_House_EventScript_SetHasBigMushroom
# 60 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms_1
# 61 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 62 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_5:
# 63 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 25 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 64 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call TwoIsland_House_EventScript_SetHasTinyMushrooms
# 65 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms_4
# 66 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 67 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_8:
# 68 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 28 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 69 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms
# 70 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms_7
# 71 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 72 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms_11:
# 73 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 31 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 74 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckAlsoHasBigMushroom
# 75 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms_10
# 76 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 77 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 78 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms::
# 79 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 38 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 80 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms_2
# 81 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms_1:
# 82 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 41 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 83 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
# 84 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 85 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 86 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms_2:
# 87 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 39 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 88 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call TwoIsland_House_EventScript_SetHasBothMushrooms
# 89 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms_1
# 90 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 91 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 92 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasBigMushroom::
# 93 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 46 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 94 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_CheckAlsoHasBigMushroom_2
# 95 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasBigMushroom_1:
# 96 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 49 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 97 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
# 98 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 99 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 100 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasBigMushroom_2:
# 101 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 47 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 102 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call TwoIsland_House_EventScript_SetHasBothMushrooms
# 103 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckAlsoHasBigMushroom_1
# 104 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 105 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 106 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_AskTutorMon::
# 107 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 54 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 108 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_WantMeToTeachMove, MSGBOX_YESNO
# 109 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 55 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 110 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 111 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq TwoIsland_House_EventScript_AskTutorMon_2
# 112 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_AskTutorMon_1:
# 113 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 58 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 114 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 115 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 116 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 117 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_AskTutorMon_2:
# 118 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 56 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 119 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 120 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon_1
# 121 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 122 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 123 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMonToTutor::
# 124 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 63 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 125 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TutorWhichMon
# 126 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 64 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 127 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special ChooseMonForMoveRelearner
# 128 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 65 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 129 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	waitstate
# 130 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 66 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 131 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 132 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_ge TwoIsland_House_EventScript_ChooseMonToTutor_2
# 133 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMonToTutor_1:
# 134 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 69 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 135 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special IsSelectedMonEgg
# 136 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 70 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 137 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 138 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq TwoIsland_House_EventScript_ChooseMonToTutor_5
# 139 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMonToTutor_4:
# 140 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 73 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 141 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_0x8005, 0
# 142 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq TwoIsland_House_EventScript_ChooseMonToTutor_8
# 143 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMonToTutor_7:
# 144 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 76 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 145 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMoveToTeach
# 146 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 147 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 148 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMonToTutor_2:
# 149 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 67 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 150 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 151 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor_1
# 152 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 153 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMonToTutor_5:
# 154 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 71 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 155 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CantTutorEgg
# 156 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor_4
# 157 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 158 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMonToTutor_8:
# 159 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 74 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 160 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_NoMoveToTutorMon
# 161 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor_7
# 162 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 163 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 164 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach::
# 165 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 81 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 166 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TeachWhichMove
# 167 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 82 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 168 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special TeachMoveRelearnerMove
# 169 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 83 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 170 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	waitstate
# 171 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 84 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 172 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_0x8004, 0
# 173 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq TwoIsland_House_EventScript_ChooseMoveToTeach_2
# 174 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach_1:
# 175 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 87 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 176 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BOTH_MUSHROOMS, TwoIsland_House_EventScript_ChooseMoveToTeach_5
# 177 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach_4:
# 178 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 90 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 179 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_ChooseMoveToTeach_8
# 180 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach_7:
# 181 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 93 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 182 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_ChooseMoveToTeach_11
# 183 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach_10:
# 184 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 185 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 186 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach_2:
# 187 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 85 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 188 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 189 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMoveToTeach_1
# 190 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 191 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach_5:
# 192 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 88 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 193 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMushroom
# 194 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMoveToTeach_4
# 195 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 196 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach_8:
# 197 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 91 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 198 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_GiveBigMushroom
# 199 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMoveToTeach_7
# 200 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 201 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach_11:
# 202 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 94 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 203 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_GiveTinyMushrooms
# 204 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMoveToTeach_10
# 205 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 206 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 207 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_GiveBigMushroom::
# 208 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 100 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 209 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 210 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 101 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 211 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 212 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 102 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 213 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverOneBigMushroom
# 214 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 103 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 215 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 216 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 104 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 217 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 218 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 219 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 220 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 221 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_GiveTinyMushrooms::
# 222 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 109 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 223 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 2
# 224 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 110 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 225 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 226 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 111 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 227 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverTwoTinyMushrooms
# 228 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 112 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 229 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 230 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 113 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 231 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 232 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 233 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 234 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 235 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMushroom::
# 236 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 118 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 237 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	message TwoIsland_House_Text_IllNeedMushroomOrTwo
# 238 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 119 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 239 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	waitmessage
# 240 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 120 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 241 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_MUSHROOMS, TRUE
# 242 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 121 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 243 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	switch VAR_RESULT
# 244 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 122 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 245 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 0, TwoIsland_House_EventScript_ChooseMushroom_3
# 246 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 124 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 247 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 1, TwoIsland_House_EventScript_ChooseMushroom_4
# 248 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMushroom_1:
# 249 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 250 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 251 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMushroom_3:
# 252 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 123 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 253 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_GiveTinyMushrooms
# 254 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMushroom_1
# 255 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 256 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMushroom_4:
# 257 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 125 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 258 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_GiveBigMushroom
# 259 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMushroom_1
# 260 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 261 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 262 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_NoMoveToTutorMon::
# 263 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 131 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 264 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_NoMoveICanTeachThatMon
# 265 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 132 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 266 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 267 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 268 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 269 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 270 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CantTutorEgg::
# 271 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 137 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 272 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_CantTeachAnEgg
# 273 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 138 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 274 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 275 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 276 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 277 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 278 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_EndTutorMove::
# 279 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 143 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 280 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove
# 281 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 144 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 282 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	release
# 283 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 284 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 285 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 286 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_SetHasBigMushroom::
# 287 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 149 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 288 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_BIG_MUSHROOM
# 289 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	return
# 290 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 291 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 292 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_SetHasTinyMushrooms::
# 293 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 154 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 294 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_TINY_MUSHROOMS
# 295 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	return
# 296 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 297 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 298 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_SetHasBothMushrooms::
# 299 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 159 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 300 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_BOTH_MUSHROOMS
# 301 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	return
# 302 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 303 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 304 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_TeachMonMoveForMushroom::
# 305 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 163 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 306 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "I'm the POKéMON MOVE MANIAC.\p"
# 307 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "I know every single move that\n"
# 308 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "POKéMON learn growing up.\p"
# 309 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "I'm also a mushroom maniac.\p"
# 310 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Bring me two TINYMUSHROOMS,\n"
# 311 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "or one BIG MUSHROOM.\p"
# 312 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "If you do that for me, I'll teach\n"
# 313 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "a move to one POKéMON.$"
# 314 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 315 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_WantMeToTeachMove::
# 316 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 174 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 317 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Sniff, sniff…\n"
# 318 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Hm! You smell of MUSHROOMS!\p"
# 319 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Do you want me to teach a move\n"
# 320 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "to a POKéMON of yours?$"
# 321 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 322 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_TutorWhichMon::
# 323 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 181 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 324 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Which POKéMON needs tutoring?$"
# 325 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 326 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_TeachWhichMove::
# 327 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 185 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 328 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Which move should I teach?$"
# 329 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 330 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_NoMoveICanTeachThatMon::
# 331 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 189 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 332 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Sorry…\p"
# 333 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "It doesn't appear as if I have a\n"
# 334 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "move I can teach that POKéMON.$"
# 335 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 336 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_IllNeedMushroomOrTwo::
# 337 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 195 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 338 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Then, I'll need a MUSHROOM or two.\n"
# 339 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "What are you going to give me?$"
# 340 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 341 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_HandedOverTwoTinyMushrooms::
# 342 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 200 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 343 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "{PLAYER} handed over two\n"
# 344 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "TINYMUSHROOMS in exchange.$"
# 345 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 346 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_HandedOverOneBigMushroom::
# 347 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 205 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 348 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "{PLAYER} handed over one\n"
# 349 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "BIG MUSHROOM in exchange.$"
# 350 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 351 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove::
# 352 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 210 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 353 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "If your POKéMON need to learn a\n"
# 354 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "move, I need a MUSHROOM or two.$"
# 355 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 356 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_CantTeachAnEgg::
# 357 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 215 "data/maps/TwoIsland_House_Frlg/scripts.pory"
# 358 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Hunh? There isn't a single move\n"
# 359 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "that I can teach an EGG.$"
