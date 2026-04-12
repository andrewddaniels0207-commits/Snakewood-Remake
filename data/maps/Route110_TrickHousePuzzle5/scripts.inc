# 1 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 4 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle5_OnTransition
# 5 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.byte 0
# 6 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 7 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 8 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_OnTransition::
# 9 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 6 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 10 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 7 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 12 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_2, 0
# 13 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 8 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 14 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_3, 0
# 15 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 9 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 16 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_4, 0
# 17 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 10 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 18 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_5, 0
# 19 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 11 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 20 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, 0
# 21 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 22 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 23 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 24 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Scroll::
# 25 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 16 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 26 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 27 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 17 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 28 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_5_STATE, 0
# 29 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Scroll_2
# 30 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Scroll_1:
# 31 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 20 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 32 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 33 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 34 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 35 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Scroll_2:
# 36 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 18 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 37 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_FoundScroll
# 38 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Scroll_1
# 39 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 40 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 41 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_FoundScroll::
# 42 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 25 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 43 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_5_STATE, 1
# 44 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 26 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 45 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 46 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 47 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 48 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 49 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1::
# 50 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 31 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 51 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 52 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 32 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 53 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Common_Movement_FacePlayer
# 54 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 33 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 55 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 34 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 57 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_1, 1
# 58 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll1_2
# 59 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1_1:
# 60 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 37 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 61 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 62 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 38 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 63 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 64 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 65 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 66 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1_2:
# 67 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 35 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 68 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 69 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1_1
# 70 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 71 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 72 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2::
# 73 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 43 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 74 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 75 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 44 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 76 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Common_Movement_FacePlayer
# 77 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 45 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 78 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 46 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 80 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_2, 1
# 81 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll2_2
# 82 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2_1:
# 83 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 49 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 84 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 85 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 50 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 86 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 87 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 88 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 89 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2_2:
# 90 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 47 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 91 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 92 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2_1
# 93 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 94 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 95 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3::
# 96 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 55 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 97 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 98 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 56 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 99 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Common_Movement_FacePlayer
# 100 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 57 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 101 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 58 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 103 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_3, 1
# 104 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll3_2
# 105 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3_1:
# 106 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 61 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 107 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 108 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 62 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 109 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 110 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 111 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 112 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3_2:
# 113 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 59 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 114 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 115 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3_1
# 116 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 117 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 118 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4::
# 119 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 67 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 120 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 121 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 68 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 122 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Common_Movement_FacePlayer
# 123 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 69 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 124 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 70 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 126 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_4, 1
# 127 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll4_2
# 128 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4_1:
# 129 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 73 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 130 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 131 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 74 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 132 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 133 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 134 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 135 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4_2:
# 136 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 71 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 137 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 138 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4_1
# 139 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 140 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 141 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5::
# 142 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 79 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 143 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 144 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 80 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 145 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Common_Movement_FacePlayer
# 146 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 81 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 147 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 82 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 149 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_5, 1
# 150 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll5_2
# 151 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5_1:
# 152 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 85 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 153 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 154 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 86 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 155 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate
# 156 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 157 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 158 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5_2:
# 159 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 83 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 160 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 161 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5_1
# 162 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 163 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 164 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger0::
# 165 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 91 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 166 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 167 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 92 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 168 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 169 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 93 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 170 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 171 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 172 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 173 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 174 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger1::
# 175 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 98 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 176 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 177 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 99 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 178 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 179 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 100 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 180 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 181 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 182 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 183 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 184 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger2::
# 185 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 105 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 186 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 187 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 106 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 188 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 189 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 107 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 190 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 191 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 192 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 193 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 194 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger3::
# 195 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 112 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 196 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 197 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 113 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 198 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 199 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 114 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 200 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 201 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 202 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 203 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 204 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger4::
# 205 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 119 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 206 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 207 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 120 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 208 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 209 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 121 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 210 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 211 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 212 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 213 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 214 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger0::
# 215 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 126 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 216 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 217 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 127 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 218 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 219 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 128 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 220 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 221 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 222 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 223 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 224 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger1::
# 225 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 133 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 226 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 227 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 134 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 228 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 229 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 135 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 230 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 231 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 232 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 233 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 234 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger2::
# 235 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 140 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 236 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 237 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 141 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 238 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 239 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 142 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 240 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 241 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 242 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 243 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 244 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger3::
# 245 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 147 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 246 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 247 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 148 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 248 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 249 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 149 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 250 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 251 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 252 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 253 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 254 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger4::
# 255 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 154 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 256 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 257 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 155 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 258 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 259 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 156 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 260 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 261 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 262 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 263 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 264 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger5::
# 265 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 161 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 266 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 267 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 162 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 268 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 5
# 269 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 163 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 270 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 271 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 272 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 273 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 274 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger0::
# 275 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 168 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 276 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 277 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 169 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 278 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 279 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 170 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 280 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 281 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 282 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 283 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 284 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger1::
# 285 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 175 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 286 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 287 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 176 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 288 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 289 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 177 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 290 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 291 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 292 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 293 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 294 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger2::
# 295 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 182 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 296 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 297 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 183 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 298 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 299 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 184 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 300 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 301 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 302 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 303 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 304 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger3::
# 305 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 189 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 306 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 307 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 190 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 308 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 309 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 191 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 310 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 311 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 312 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 313 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 314 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger4::
# 315 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 196 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 316 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 317 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 197 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 318 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 319 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 198 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 320 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 321 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 322 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 323 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 324 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger0::
# 325 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 203 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 326 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 327 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 204 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 328 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 329 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 205 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 330 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 331 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 332 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 333 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 334 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger1::
# 335 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 210 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 336 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 337 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 211 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 338 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 339 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 212 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 340 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 341 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 342 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 343 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 344 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger2::
# 345 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 217 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 346 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 347 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 218 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 348 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 349 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 219 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 350 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 351 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 352 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 353 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 354 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger3::
# 355 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 224 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 356 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 357 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 225 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 358 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 359 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 226 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 360 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 361 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 362 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 363 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 364 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger4::
# 365 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 231 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 366 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 367 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 232 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 368 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 369 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 233 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 370 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 371 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 372 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 373 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 374 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger5::
# 375 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 238 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 376 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 377 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 239 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 378 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 5
# 379 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 240 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 380 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 381 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 382 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 383 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 384 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Trigger0::
# 385 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 245 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 386 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 387 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 246 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 388 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 389 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 247 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 390 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate
# 391 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 392 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 393 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 394 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate::
# 395 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 252 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 396 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_1, 1
# 397 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 253 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 398 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_1
# 399 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 254 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 400 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 401 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 255 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 402 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Common_Movement_ExclamationMark
# 403 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 256 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 404 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 405 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 257 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 406 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Common_Movement_Delay48
# 407 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 258 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 408 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 409 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 259 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 410 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 1
# 411 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_2
# 412 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_1:
# 413 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 262 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 414 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 2
# 415 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_5
# 416 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_4:
# 417 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 265 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 418 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 3
# 419 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_8
# 420 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_7:
# 421 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 268 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 422 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 4
# 423 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_11
# 424 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_10:
# 425 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 271 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 426 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Intro, MSGBOX_DEFAULT
# 427 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 272 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 428 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 429 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 273 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 430 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 431 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 274 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 432 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_15
# 433 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 276 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 434 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_16
# 435 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 278 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 436 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_17
# 437 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_13:
# 438 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 439 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 440 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_2:
# 441 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 260 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 442 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
# 443 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_1
# 444 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 445 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_5:
# 446 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 263 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 447 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
# 448 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_4
# 449 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 450 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_8:
# 451 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 266 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 452 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
# 453 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_7
# 454 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 455 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_11:
# 456 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 269 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 457 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
# 458 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_10
# 459 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 460 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_15:
# 461 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 275 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 462 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1
# 463 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_13
# 464 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 465 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_16:
# 466 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 277 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 467 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2
# 468 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_13
# 469 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 470 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_17:
# 471 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 279 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 472 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3
# 473 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_13
# 474 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 475 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 476 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate::
# 477 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 285 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 478 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_2, 1
# 479 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 286 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 480 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_2
# 481 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 287 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 482 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 483 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 288 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 484 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Common_Movement_ExclamationMark
# 485 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 289 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 486 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 487 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 290 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 488 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Common_Movement_Delay48
# 489 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 291 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 490 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 491 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 292 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 492 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 1
# 493 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_2
# 494 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_1:
# 495 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 295 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 496 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 2
# 497 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_5
# 498 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_4:
# 499 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 298 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 500 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 3
# 501 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_8
# 502 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_7:
# 503 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 301 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 504 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 4
# 505 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_11
# 506 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_10:
# 507 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 304 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 508 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 5
# 509 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_14
# 510 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_13:
# 511 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 307 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 512 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Intro, MSGBOX_DEFAULT
# 513 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 308 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 514 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 515 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 309 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 516 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 517 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 310 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 518 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_18
# 519 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 312 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 520 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_19
# 521 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 314 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 522 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_20
# 523 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_16:
# 524 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 525 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 526 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_2:
# 527 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 293 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 528 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1
# 529 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_1
# 530 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 531 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_5:
# 532 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 296 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 533 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2
# 534 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_4
# 535 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 536 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_8:
# 537 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 299 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 538 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3
# 539 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_7
# 540 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 541 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_11:
# 542 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 302 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 543 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4
# 544 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_10
# 545 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 546 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_14:
# 547 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 305 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 548 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5
# 549 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_13
# 550 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 551 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_18:
# 552 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 311 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 553 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1
# 554 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_16
# 555 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 556 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_19:
# 557 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 313 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 558 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2
# 559 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_16
# 560 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 561 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_20:
# 562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 315 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 563 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3
# 564 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_16
# 565 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 566 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 567 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate::
# 568 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 321 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 569 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_3, 1
# 570 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 322 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 571 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_3
# 572 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 323 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 573 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 574 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 324 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 575 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Common_Movement_ExclamationMark
# 576 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 325 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 577 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 578 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 326 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 579 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Common_Movement_Delay48
# 580 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 327 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 581 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 582 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 328 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 583 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 1
# 584 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_2
# 585 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_1:
# 586 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 331 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 587 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 2
# 588 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_5
# 589 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_4:
# 590 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 334 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 591 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 3
# 592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_8
# 593 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_7:
# 594 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 337 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 595 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 4
# 596 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_11
# 597 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_10:
# 598 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 340 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 599 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Intro, MSGBOX_DEFAULT
# 600 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 341 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 601 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 602 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 342 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 603 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 604 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 343 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 605 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_15
# 606 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 345 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 607 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_16
# 608 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 347 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 609 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_17
# 610 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_13:
# 611 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 612 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 613 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_2:
# 614 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 329 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 615 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
# 616 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_1
# 617 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 618 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_5:
# 619 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 332 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 620 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
# 621 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_4
# 622 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 623 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_8:
# 624 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 335 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 625 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
# 626 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_7
# 627 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 628 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_11:
# 629 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 338 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 630 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
# 631 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_10
# 632 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 633 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_15:
# 634 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 344 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 635 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1
# 636 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_13
# 637 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 638 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_16:
# 639 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 346 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 640 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2
# 641 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_13
# 642 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 643 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_17:
# 644 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 348 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 645 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3
# 646 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_13
# 647 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 648 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 649 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate::
# 650 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 354 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 651 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_4, 1
# 652 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 355 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 653 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_4
# 654 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 356 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 655 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 656 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 357 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 657 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Common_Movement_ExclamationMark
# 658 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 358 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 659 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 660 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 359 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 661 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Common_Movement_Delay48
# 662 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 360 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 663 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 664 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 361 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 665 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 1
# 666 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_2
# 667 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_1:
# 668 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 364 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 669 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 2
# 670 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_5
# 671 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_4:
# 672 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 367 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 673 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 3
# 674 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_8
# 675 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_7:
# 676 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 370 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 677 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_9, 4
# 678 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_11
# 679 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_10:
# 680 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 373 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 681 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Intro, MSGBOX_DEFAULT
# 682 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 374 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 683 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 684 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 375 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 685 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 686 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 376 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 687 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_15
# 688 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 378 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 689 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_16
# 690 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 380 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 691 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_17
# 692 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_13:
# 693 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 694 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 695 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_2:
# 696 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 362 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 697 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
# 698 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_1
# 699 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 700 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_5:
# 701 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 365 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 702 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
# 703 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_4
# 704 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 705 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_8:
# 706 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 368 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 707 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
# 708 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_7
# 709 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 710 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_11:
# 711 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 371 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 712 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
# 713 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_10
# 714 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 715 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_15:
# 716 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 377 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 717 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1
# 718 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_13
# 719 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 720 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_16:
# 721 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 379 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 722 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2
# 723 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_13
# 724 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 725 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_17:
# 726 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 381 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 727 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3
# 728 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_13
# 729 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 730 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 731 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate::
# 732 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 387 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 733 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_5, 1
# 734 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 388 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 735 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_5
# 736 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 389 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 737 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 738 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 390 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 739 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Common_Movement_ExclamationMark
# 740 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 391 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 741 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 742 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 392 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 743 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Common_Movement_Delay48
# 744 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 393 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 745 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 746 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 394 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 747 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Intro, MSGBOX_DEFAULT
# 748 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 395 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 749 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 750 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 396 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 751 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 752 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 397 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 753 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_3
# 754 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 399 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 755 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_4
# 756 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 401 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 757 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_5
# 758 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_1:
# 759 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 760 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 761 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_3:
# 762 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 398 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 763 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1
# 764 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_1
# 765 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 766 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_4:
# 767 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 400 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 768 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2
# 769 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_1
# 770 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 771 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_5:
# 772 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 402 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 773 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3
# 774 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_1
# 775 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 776 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 777 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1::
# 778 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 408 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 779 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1, MSGBOX_DEFAULT
# 780 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 409 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 781 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q1, TRUE
# 782 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 410 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 783 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 784 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 411 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 785 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1_3
# 786 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1_1:
# 787 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 414 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 788 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 789 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 790 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 791 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1_3:
# 792 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 412 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 793 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 794 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1_1
# 795 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 796 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 797 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2::
# 798 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 419 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 799 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2, MSGBOX_DEFAULT
# 800 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 420 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 801 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q2, TRUE
# 802 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 421 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 803 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 804 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 422 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 805 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2_3
# 806 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2_1:
# 807 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 425 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 808 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 809 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 810 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 811 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2_3:
# 812 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 423 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 813 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 814 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2_1
# 815 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 816 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 817 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3::
# 818 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 430 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 819 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3, MSGBOX_DEFAULT
# 820 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 431 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 821 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q3, TRUE
# 822 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 432 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 823 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 824 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 433 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 825 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3_3
# 826 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3_1:
# 827 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 436 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 828 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 829 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 830 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 831 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3_3:
# 832 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 434 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 833 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 834 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3_1
# 835 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 836 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 837 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1::
# 838 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 441 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 839 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1, MSGBOX_DEFAULT
# 840 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 442 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 841 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q1, TRUE
# 842 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 443 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 843 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 844 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 444 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 845 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1_3
# 846 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1_1:
# 847 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 447 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 848 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 849 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 850 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 851 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1_3:
# 852 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 445 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 853 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 854 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1_1
# 855 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 856 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 857 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2::
# 858 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 452 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 859 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2, MSGBOX_DEFAULT
# 860 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 453 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 861 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q2, TRUE
# 862 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 454 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 863 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 864 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 455 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 865 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2_3
# 866 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2_1:
# 867 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 458 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 868 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 869 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 870 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 871 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2_3:
# 872 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 456 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 873 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 874 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2_1
# 875 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 876 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 877 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3::
# 878 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 463 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 879 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3, MSGBOX_DEFAULT
# 880 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 464 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 881 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q3, TRUE
# 882 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 465 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 883 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 884 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 466 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 885 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3_3
# 886 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3_1:
# 887 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 469 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 888 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 889 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 890 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 891 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3_3:
# 892 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 467 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 893 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 894 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3_1
# 895 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 896 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 897 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1::
# 898 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 474 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 899 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1, MSGBOX_DEFAULT
# 900 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 475 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 901 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q1, TRUE
# 902 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 476 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 903 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 904 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 477 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 905 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1_3
# 906 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1_1:
# 907 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 480 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 908 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 909 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 910 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 911 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1_3:
# 912 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 478 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 913 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 914 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1_1
# 915 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 916 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 917 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2::
# 918 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 485 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 919 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2, MSGBOX_DEFAULT
# 920 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 486 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 921 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q2, TRUE
# 922 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 487 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 923 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 924 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 488 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 925 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2_3
# 926 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2_1:
# 927 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 491 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 928 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 929 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 930 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 931 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2_3:
# 932 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 489 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 933 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 934 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2_1
# 935 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 936 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 937 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3::
# 938 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 496 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 939 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3, MSGBOX_DEFAULT
# 940 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 497 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 941 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q3, TRUE
# 942 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 498 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 943 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 944 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 499 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 945 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3_3
# 946 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3_1:
# 947 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 502 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 948 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 949 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 950 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 951 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3_3:
# 952 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 500 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 953 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 954 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3_1
# 955 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 956 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 957 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1::
# 958 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 507 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 959 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1, MSGBOX_DEFAULT
# 960 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 508 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 961 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q1, TRUE
# 962 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 509 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 963 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 964 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 510 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 965 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1_3
# 966 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1_1:
# 967 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 513 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 968 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 969 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 970 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 971 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1_3:
# 972 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 511 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 973 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 974 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1_1
# 975 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 976 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 977 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2::
# 978 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 518 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 979 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2, MSGBOX_DEFAULT
# 980 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 519 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 981 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q2, TRUE
# 982 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 520 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 983 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 984 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 521 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 985 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2_3
# 986 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2_1:
# 987 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 524 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 988 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 989 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 990 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 991 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2_3:
# 992 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 522 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 993 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 994 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2_1
# 995 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 996 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 997 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3::
# 998 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 529 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 999 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3, MSGBOX_DEFAULT
# 1000 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 530 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1001 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q3, TRUE
# 1002 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 531 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1003 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 1004 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 532 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1005 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3_3
# 1006 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3_1:
# 1007 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 535 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1008 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 1009 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 1010 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1011 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3_3:
# 1012 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 533 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1013 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 1014 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3_1
# 1015 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1016 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1017 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1::
# 1018 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 540 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1019 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1, MSGBOX_DEFAULT
# 1020 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 541 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1021 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q1, TRUE
# 1022 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 542 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1023 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 1024 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 543 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1025 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1_3
# 1026 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1_1:
# 1027 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 546 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1028 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 1029 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 1030 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1031 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1_3:
# 1032 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 544 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1033 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 1034 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1_1
# 1035 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1036 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1037 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2::
# 1038 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 551 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1039 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2, MSGBOX_DEFAULT
# 1040 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 552 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1041 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q2, TRUE
# 1042 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 553 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1043 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 1044 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 554 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1045 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2_3
# 1046 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2_1:
# 1047 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 557 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1048 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 1049 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 1050 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1051 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2_3:
# 1052 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 555 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1053 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 1054 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2_1
# 1055 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1056 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1057 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3::
# 1058 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1059 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3, MSGBOX_DEFAULT
# 1060 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 563 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1061 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q3, TRUE
# 1062 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 564 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1063 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 1064 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 565 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1065 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3_3
# 1066 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3_1:
# 1067 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 568 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1068 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 1069 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 1070 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1071 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3_3:
# 1072 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 566 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1073 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 1074 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3_1
# 1075 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1076 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1077 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer::
# 1078 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 573 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1079 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitse
# 1080 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 574 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1081 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_FAILURE
# 1082 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 575 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1083 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_DisappointmentError, MSGBOX_DEFAULT
# 1084 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 576 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1085 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 1086 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 577 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1087 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 1088 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 578 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1089 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 1090 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 579 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1091 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 1092 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 580 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1093 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 1094 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 581 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1095 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Wahahahaha, MSGBOX_DEFAULT
# 1096 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 582 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1097 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1098 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 583 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1099 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_WaitForNextChallenge, MSGBOX_DEFAULT
# 1100 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 584 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1101 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	closemessage
# 1102 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 585 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1103 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE5, 0, 21
# 1104 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 586 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1105 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitstate
# 1106 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 587 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1107 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	releaseall
# 1108 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 1109 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1110 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1111 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_CorrectAnswer::
# 1112 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1113 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitse
# 1114 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 593 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1115 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_SUCCESS
# 1116 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 594 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1117 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 1118 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 1119 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1120 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1121 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough::
# 1122 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 599 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1123 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_CorrectGoThrough, MSGBOX_DEFAULT
# 1124 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 600 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1125 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	releaseall
# 1126 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 1127 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1128 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1129 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1::
# 1130 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 605 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1131 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_1
# 1132 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_2
# 1133 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_1:
# 1134 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 608 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1135 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_2
# 1136 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_5
# 1137 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_4:
# 1138 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 611 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1139 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_3
# 1140 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_8
# 1141 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_7:
# 1142 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 614 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1143 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_4
# 1144 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_11
# 1145 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_10:
# 1146 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 617 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1147 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_5
# 1148 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_14
# 1149 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_13:
# 1150 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1151 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1152 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_2:
# 1153 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 606 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1154 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft1
# 1155 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_1
# 1156 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1157 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_5:
# 1158 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 609 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1159 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft1
# 1160 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_4
# 1161 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1162 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_8:
# 1163 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 612 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1164 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft1
# 1165 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_7
# 1166 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1167 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_11:
# 1168 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 615 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1169 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft1
# 1170 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_10
# 1171 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1172 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_14:
# 1173 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 618 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1174 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft1
# 1175 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1_13
# 1176 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1177 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1178 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2::
# 1179 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 624 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1180 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_1
# 1181 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_2
# 1182 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_1:
# 1183 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 627 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1184 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_2
# 1185 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_5
# 1186 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_4:
# 1187 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 630 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1188 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_3
# 1189 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_8
# 1190 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_7:
# 1191 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 633 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1192 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_4
# 1193 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_11
# 1194 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_10:
# 1195 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 636 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1196 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_5
# 1197 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_14
# 1198 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_13:
# 1199 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1200 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1201 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_2:
# 1202 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 625 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1203 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft2
# 1204 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_1
# 1205 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1206 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_5:
# 1207 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 628 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1208 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft2
# 1209 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_4
# 1210 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1211 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_8:
# 1212 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 631 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1213 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft2
# 1214 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_7
# 1215 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1216 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_11:
# 1217 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 634 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1218 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft2
# 1219 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_10
# 1220 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1221 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_14:
# 1222 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 637 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1223 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft2
# 1224 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_13
# 1225 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1226 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1227 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3::
# 1228 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 643 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1229 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_1
# 1230 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_2
# 1231 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_1:
# 1232 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 646 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1233 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_2
# 1234 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_5
# 1235 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_4:
# 1236 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 649 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1237 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_3
# 1238 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_8
# 1239 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_7:
# 1240 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 652 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1241 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_4
# 1242 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_11
# 1243 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_10:
# 1244 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 655 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1245 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_5
# 1246 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_14
# 1247 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_13:
# 1248 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1249 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1250 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_2:
# 1251 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 644 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1252 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft3
# 1253 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_1
# 1254 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1255 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_5:
# 1256 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 647 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1257 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft3
# 1258 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_4
# 1259 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1260 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_8:
# 1261 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 650 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1262 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft3
# 1263 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_7
# 1264 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1265 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_11:
# 1266 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 653 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1267 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft3
# 1268 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_10
# 1269 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1270 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_14:
# 1271 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 656 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1272 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft3
# 1273 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_13
# 1274 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1275 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1276 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4::
# 1277 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 662 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1278 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_1
# 1279 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_2
# 1280 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_1:
# 1281 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 665 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1282 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_2
# 1283 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_5
# 1284 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_4:
# 1285 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 668 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1286 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_3
# 1287 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_8
# 1288 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_7:
# 1289 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 671 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1290 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_4
# 1291 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_11
# 1292 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_10:
# 1293 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 674 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1294 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_5
# 1295 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_14
# 1296 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_13:
# 1297 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1298 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1299 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_2:
# 1300 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 663 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1301 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft4
# 1302 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_1
# 1303 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1304 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_5:
# 1305 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 666 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1306 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft4
# 1307 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_4
# 1308 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1309 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_8:
# 1310 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 669 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1311 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft4
# 1312 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_7
# 1313 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1314 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_11:
# 1315 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 672 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1316 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft4
# 1317 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_10
# 1318 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1319 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_14:
# 1320 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 675 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1321 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft4
# 1322 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_13
# 1323 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1324 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1325 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5::
# 1326 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 681 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1327 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_1
# 1328 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_2
# 1329 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_1:
# 1330 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 684 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1331 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_2
# 1332 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_5
# 1333 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_4:
# 1334 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 687 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1335 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_3
# 1336 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_8
# 1337 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_7:
# 1338 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 690 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1339 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_4
# 1340 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_11
# 1341 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_10:
# 1342 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 693 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1343 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_5
# 1344 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_14
# 1345 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_13:
# 1346 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1347 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1348 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_2:
# 1349 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 682 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1350 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft5
# 1351 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_1
# 1352 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1353 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_5:
# 1354 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 685 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1355 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft5
# 1356 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_4
# 1357 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1358 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_8:
# 1359 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 688 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1360 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft5
# 1361 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_7
# 1362 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1363 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_11:
# 1364 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 691 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1365 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft5
# 1366 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_10
# 1367 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1368 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_14:
# 1369 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 694 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1370 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft5
# 1371 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_13
# 1372 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1373 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1374 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1::
# 1375 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 700 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1376 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_1
# 1377 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_2
# 1378 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_1:
# 1379 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 703 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1380 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_2
# 1381 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_5
# 1382 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_4:
# 1383 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 706 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1384 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_3
# 1385 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_8
# 1386 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_7:
# 1387 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 709 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1388 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_4
# 1389 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_11
# 1390 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_10:
# 1391 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 712 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1392 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_5
# 1393 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_14
# 1394 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_13:
# 1395 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1396 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1397 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_2:
# 1398 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 701 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1399 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight1
# 1400 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_1
# 1401 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1402 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_5:
# 1403 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 704 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1404 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight1
# 1405 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_4
# 1406 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1407 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_8:
# 1408 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 707 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1409 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight1
# 1410 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_7
# 1411 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1412 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_11:
# 1413 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 710 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1414 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight1
# 1415 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_10
# 1416 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1417 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_14:
# 1418 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 713 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1419 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight1
# 1420 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1_13
# 1421 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1422 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1423 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2::
# 1424 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 719 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1425 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_1
# 1426 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_2
# 1427 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_1:
# 1428 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 722 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1429 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_2
# 1430 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_5
# 1431 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_4:
# 1432 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 725 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1433 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_3
# 1434 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_8
# 1435 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_7:
# 1436 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 728 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1437 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_4
# 1438 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_11
# 1439 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_10:
# 1440 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 731 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1441 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_5
# 1442 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_14
# 1443 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_13:
# 1444 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1445 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1446 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_2:
# 1447 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 720 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1448 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight2
# 1449 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_1
# 1450 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1451 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_5:
# 1452 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 723 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1453 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight2
# 1454 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_4
# 1455 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1456 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_8:
# 1457 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 726 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1458 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight2
# 1459 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_7
# 1460 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1461 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_11:
# 1462 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 729 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1463 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight2
# 1464 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_10
# 1465 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1466 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_14:
# 1467 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 732 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1468 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight2
# 1469 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_13
# 1470 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1471 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1472 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3::
# 1473 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 738 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1474 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_1
# 1475 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_2
# 1476 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_1:
# 1477 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 741 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1478 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_2
# 1479 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_5
# 1480 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_4:
# 1481 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 744 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1482 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_3
# 1483 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_8
# 1484 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_7:
# 1485 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 747 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1486 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_4
# 1487 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_11
# 1488 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_10:
# 1489 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 750 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1490 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_5
# 1491 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_14
# 1492 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_13:
# 1493 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1494 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1495 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_2:
# 1496 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 739 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1497 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight3
# 1498 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_1
# 1499 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1500 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_5:
# 1501 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 742 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1502 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight3
# 1503 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_4
# 1504 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1505 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_8:
# 1506 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 745 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1507 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight3
# 1508 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_7
# 1509 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1510 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_11:
# 1511 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 748 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1512 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight3
# 1513 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_10
# 1514 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1515 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_14:
# 1516 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 751 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1517 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight3
# 1518 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_13
# 1519 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1520 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1521 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4::
# 1522 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 757 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1523 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_1
# 1524 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_2
# 1525 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_1:
# 1526 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 760 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1527 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_2
# 1528 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_5
# 1529 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_4:
# 1530 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 763 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1531 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_3
# 1532 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_8
# 1533 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_7:
# 1534 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 766 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1535 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_4
# 1536 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_11
# 1537 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_10:
# 1538 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 769 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1539 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_5
# 1540 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_14
# 1541 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_13:
# 1542 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1543 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1544 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_2:
# 1545 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 758 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1546 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight4
# 1547 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_1
# 1548 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1549 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_5:
# 1550 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 761 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1551 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight4
# 1552 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_4
# 1553 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1554 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_8:
# 1555 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 764 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1556 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight4
# 1557 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_7
# 1558 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1559 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_11:
# 1560 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 767 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1561 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight4
# 1562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_10
# 1563 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1564 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_14:
# 1565 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 770 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1566 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight4
# 1567 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_13
# 1568 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1569 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1570 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5::
# 1571 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 776 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1572 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_1
# 1573 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_2
# 1574 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_1:
# 1575 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 779 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1576 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_2
# 1577 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_5
# 1578 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_4:
# 1579 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 782 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1580 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_3
# 1581 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_8
# 1582 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_7:
# 1583 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 785 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1584 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_4
# 1585 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_11
# 1586 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_10:
# 1587 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 788 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1588 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_8, LOCALID_MECHADOLL_5
# 1589 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_14
# 1590 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_13:
# 1591 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1593 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_2:
# 1594 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 777 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1595 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight5
# 1596 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_1
# 1597 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1598 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_5:
# 1599 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 780 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1600 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight5
# 1601 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_4
# 1602 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1603 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_8:
# 1604 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 783 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1605 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight5
# 1606 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_7
# 1607 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1608 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_11:
# 1609 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 786 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1610 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight5
# 1611 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_10
# 1612 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1613 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_14:
# 1614 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 789 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1615 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight5
# 1616 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_13
# 1617 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1618 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1619 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft1::
# 1620 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 795 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1621 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 1622 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 796 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1623 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1624 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1625 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1626 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1627 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft1::
# 1628 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 801 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1629 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 1630 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 802 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1631 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1632 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1633 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1634 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1635 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft1::
# 1636 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 807 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1637 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 1638 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 808 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1639 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1640 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1641 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1642 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1643 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft1::
# 1644 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 813 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1645 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 1646 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 814 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1647 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1648 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1649 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1650 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1651 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft1::
# 1652 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 819 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1653 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 1654 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 820 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1655 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1656 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1657 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1658 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1659 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft2::
# 1660 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 825 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1661 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 1662 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 826 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1663 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1664 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1665 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1666 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1667 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft2::
# 1668 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 831 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1669 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 1670 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 832 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1671 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1672 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1673 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1674 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1675 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft2::
# 1676 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 837 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1677 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 1678 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 838 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1679 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1680 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1681 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1682 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1683 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft2::
# 1684 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 843 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1685 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 1686 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 844 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1687 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1688 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1689 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1690 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1691 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft2::
# 1692 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 849 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1693 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 1694 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 850 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1695 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1696 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1697 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1698 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1699 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft3::
# 1700 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 855 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1701 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 1702 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 856 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1703 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1704 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1705 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1706 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1707 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft3::
# 1708 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 861 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1709 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 1710 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 862 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1711 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1712 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1713 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1714 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1715 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft3::
# 1716 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 867 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1717 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 1718 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 868 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1719 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1720 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1721 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1722 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1723 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft3::
# 1724 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 873 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1725 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 1726 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 874 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1727 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1728 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1729 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1730 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1731 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft3::
# 1732 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 879 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1733 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 1734 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 880 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1735 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1736 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1737 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1738 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1739 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft4::
# 1740 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 885 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1741 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 1742 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 886 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1743 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1744 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1745 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1746 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1747 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft4::
# 1748 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 891 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1749 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 1750 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 892 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1751 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1752 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1753 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1754 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1755 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft4::
# 1756 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 897 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1757 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 1758 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 898 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1759 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1760 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1761 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1762 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1763 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft4::
# 1764 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 903 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1765 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 1766 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 904 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1767 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1768 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1769 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1770 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1771 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft4::
# 1772 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 909 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1773 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 1774 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 910 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1775 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1776 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1777 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1778 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1779 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft5::
# 1780 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 915 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1781 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 1782 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 916 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1783 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1784 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1785 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1786 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1787 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft5::
# 1788 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 921 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1789 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 1790 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 922 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1791 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1792 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1793 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1794 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1795 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft5::
# 1796 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 927 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1797 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 1798 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 928 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1799 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1800 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1801 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1802 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1803 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft5::
# 1804 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 933 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1805 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 1806 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 934 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1807 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1808 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1809 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1810 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1811 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft5::
# 1812 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 939 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1813 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 1814 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 940 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1815 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1816 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1817 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1818 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1819 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight1::
# 1820 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 945 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1821 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 1822 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 946 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1823 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1824 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1825 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1826 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1827 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight1::
# 1828 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 951 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1829 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 1830 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 952 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1831 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1832 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1833 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1834 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1835 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight1::
# 1836 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 957 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1837 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 1838 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 958 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1839 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1840 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1841 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1842 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1843 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight1::
# 1844 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 963 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1845 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 1846 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 964 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1847 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1848 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1849 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1850 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1851 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight1::
# 1852 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 969 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1853 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 1854 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 970 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1855 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1856 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1857 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1858 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1859 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight2::
# 1860 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 975 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1861 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 1862 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 976 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1863 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1864 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1865 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1866 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1867 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight2::
# 1868 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 981 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1869 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 1870 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 982 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1871 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1872 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1873 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1874 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1875 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight2::
# 1876 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 987 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1877 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 1878 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 988 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1879 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1880 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1881 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1882 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1883 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight2::
# 1884 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 993 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1885 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 1886 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 994 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1887 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1888 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1889 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1890 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1891 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight2::
# 1892 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 999 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1893 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 1894 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1000 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1895 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1896 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1897 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1898 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1899 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight3::
# 1900 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1005 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1901 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 1902 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1006 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1903 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1904 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1905 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1906 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1907 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight3::
# 1908 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1011 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1909 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 1910 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1012 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1911 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1912 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1913 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1914 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1915 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight3::
# 1916 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1017 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1917 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 1918 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1018 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1919 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1920 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1921 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1922 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1923 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight3::
# 1924 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1023 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1925 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 1926 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1024 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1927 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1928 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1929 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1930 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1931 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight3::
# 1932 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1029 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1933 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 1934 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1030 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1935 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1936 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1937 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1938 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1939 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight4::
# 1940 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1035 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1941 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 1942 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1036 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1943 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1944 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1945 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1946 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1947 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight4::
# 1948 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1041 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1949 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 1950 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1042 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1951 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1952 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1953 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1954 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1955 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight4::
# 1956 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1047 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1957 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 1958 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1048 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1959 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1960 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1961 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1962 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1963 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight4::
# 1964 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1053 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1965 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 1966 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1054 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1967 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1968 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1969 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1970 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1971 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight4::
# 1972 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1059 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1973 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 1974 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1060 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1975 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1976 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1977 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1978 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1979 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight5::
# 1980 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1065 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1981 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 1982 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1066 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1983 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1984 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1985 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1986 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1987 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight5::
# 1988 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1071 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1989 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 1990 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1072 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1991 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 1992 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 1993 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1994 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1995 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight5::
# 1996 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1077 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1997 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 1998 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1078 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1999 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 2000 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 2001 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2002 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2003 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight5::
# 2004 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1083 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2005 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 2006 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1084 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2007 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 2008 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 2009 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2010 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2011 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight5::
# 2012 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1089 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2013 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 2014 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1090 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2015 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 2016 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 2017 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2018 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2019 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1094 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2020 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft1:
# 2021 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1095 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2022 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2023 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1096 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2024 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 2025 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2026 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1099 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2027 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft2:
# 2028 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1100 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2029 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2030 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1101 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2031 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2032 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1102 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2033 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 2034 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2035 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1105 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2036 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft3:
# 2037 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1106 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2038 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2039 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1107 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2040 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2041 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1108 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2042 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2043 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1109 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2044 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 2045 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2046 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1112 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2047 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft4:
# 2048 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1113 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2049 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2050 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1114 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2051 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2052 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1115 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2053 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2054 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1116 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2055 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2056 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1117 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2057 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 2058 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2059 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1120 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2060 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft5:
# 2061 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1121 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2062 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2063 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1122 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2064 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2065 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1123 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2066 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2067 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1124 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2068 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2069 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1125 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2070 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 2071 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1126 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2072 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 2073 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2074 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1129 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2075 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight1:
# 2076 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1130 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2077 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2078 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1131 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2079 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 2080 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2081 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1134 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2082 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight2:
# 2083 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1135 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2084 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2085 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1136 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2086 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2087 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1137 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2088 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 2089 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2090 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1140 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2091 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight3:
# 2092 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1141 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2093 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2094 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1142 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2095 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2096 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1143 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2097 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2098 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1144 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2099 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 2100 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2101 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1147 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2102 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight4:
# 2103 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1148 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2104 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2105 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1149 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2106 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2107 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1150 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2108 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2109 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1151 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2110 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2111 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1152 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2112 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 2113 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2114 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1155 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2115 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight5:
# 2116 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1156 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2117 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2118 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1157 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2119 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2120 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1158 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2121 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2122 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1159 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2123 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2124 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1160 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2125 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 2126 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1161 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2127 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 2128 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2129 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1164 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2130 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_MechadollShake:
# 2131 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1165 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2132 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 2133 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1166 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2134 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2135 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1167 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2136 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 2137 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1168 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2138 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2139 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1169 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2140 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 2141 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1170 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2142 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2143 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1171 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2144 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 2145 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1172 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2146 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2147 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1173 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2148 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 2149 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1174 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2150 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2151 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1175 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2152 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 2153 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1176 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2154 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2155 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1177 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2156 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 2157 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1178 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2158 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2159 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1179 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2160 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 2161 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1180 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2162 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2163 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1181 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2164 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 2165 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1182 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2166 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2167 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1183 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2168 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 2169 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1184 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2170 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2171 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1185 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2172 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 2173 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1186 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2174 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2175 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1187 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2176 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 2177 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1188 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2178 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2179 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1189 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2180 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 2181 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1190 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2182 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2183 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1191 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2184 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 2185 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1192 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2186 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2187 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1193 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2188 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 2189 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1194 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2190 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2191 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1195 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2192 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 2193 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1196 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2194 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2195 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1197 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2196 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 2197 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1198 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2198 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2199 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1199 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2200 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 2201 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1200 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2202 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2203 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1201 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2204 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 2205 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1202 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2206 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2207 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1203 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2208 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 2209 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1204 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2210 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2211 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1205 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2212 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 2213 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1206 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2214 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2215 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1207 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2216 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 2217 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1208 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2218 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 2219 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1209 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2220 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_down
# 2221 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1210 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2222 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 2223 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2224 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened::
# 2225 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1213 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2226 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 2227 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "on the door.\p"
# 2228 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "“TRICK MASTER is a genius.”\n"
# 2229 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "… … … … … … … …\p"
# 2230 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "The lock clicked open!$"
# 2231 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2232 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Intro::
# 2233 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1221 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2234 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 2235 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 AM I!\p"
# 2236 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "IF YOU ANSWER QUIZZES CORRECTLY,\n"
# 2237 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "THEN YOU WILL GO TO MECHADOLL 5.\l"
# 2238 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "THEN YOU CAN OBTAIN THE SECRET CODE.$"
# 2239 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2240 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1::
# 2241 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1229 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2242 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
# 2243 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "One of these POKéMON is not found\n"
# 2244 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "on ROUTE 110. Which one is it?$"
# 2245 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2246 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2::
# 2247 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1235 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2248 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
# 2249 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "One of these POKéMON is not of the\n"
# 2250 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "WATER type. Which one is it?$"
# 2251 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2252 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3::
# 2253 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1241 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2254 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
# 2255 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "One of these POKéMON does not use\n"
# 2256 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "LEECH LIFE. Which one is it?$"
# 2257 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2258 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_CorrectGoThrough::
# 2259 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1247 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2260 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CONGRATULATIONS. CORRECT YOU ARE.\n"
# 2261 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "GO THROUGH. PLEASE.$"
# 2262 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2263 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_DisappointmentError::
# 2264 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1252 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2265 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "BZZZT. DISAPPOINTMENT.\n"
# 2266 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "ERROR.$"
# 2267 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2268 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Wahahahaha::
# 2269 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1257 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2270 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "WAHAHAHAHA! WAHAHAHAHA!\n"
# 2271 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK!$"
# 2272 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2273 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_WaitForNextChallenge::
# 2274 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1262 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2275 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "YOUR NEXT CHALLENGE WE WAIT FOR.$"
# 2276 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2277 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Intro::
# 2278 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1266 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2279 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 2280 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 AM I!\p"
# 2281 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1'S QUIZ DIFFICULTY LEVEL\n"
# 2282 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "IS SET TOO LOW.$"
# 2283 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2284 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1::
# 2285 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1273 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2286 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
# 2287 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which of these POKéMON did WALLY\n"
# 2288 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "borrow from your father?$"
# 2289 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2290 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2::
# 2291 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1279 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2292 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
# 2293 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which of these POKéMON was chasing\n"
# 2294 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "PROF. BIRCH?$"
# 2295 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2296 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3::
# 2297 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1285 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2298 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
# 2299 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which of these POKéMON did TEAM AQUA\n"
# 2300 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "use in PETALBURG FOREST?$"
# 2301 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2302 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Intro::
# 2303 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1291 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2304 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 2305 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 AM I!\p"
# 2306 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MATTERS OF MONEY ARE MY SOLE FOCUS.$"
# 2307 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2308 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1::
# 2309 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1297 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2310 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
# 2311 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which costs more?\n"
# 2312 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Three HARBOR MAILS or one BURN HEAL?$"
# 2313 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2314 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2::
# 2315 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1303 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2316 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
# 2317 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Sell one GREAT BALL and buy\n"
# 2318 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "one POTION. How much money remains?$"
# 2319 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2320 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3::
# 2321 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1309 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2322 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
# 2323 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Do one REPEL and SODA POP cost\n"
# 2324 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "more than one SUPER POTION?$"
# 2325 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2326 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Intro::
# 2327 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1315 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2328 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 2329 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 THAT IS ME!\p"
# 2330 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MY QUIZ IS AN OBJECT OF BEAUTY.$"
# 2331 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2332 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1::
# 2333 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1321 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2334 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
# 2335 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In SEASHORE HOUSE, were there more men\n"
# 2336 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "or women?$"
# 2337 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2338 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2::
# 2339 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1327 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2340 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
# 2341 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In LAVARIDGE TOWN, were there more\n"
# 2342 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "elderly men or elderly women?$"
# 2343 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2344 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3::
# 2345 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1333 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2346 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
# 2347 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In the TRAINER'S SCHOOL, how many\n"
# 2348 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "girl students were there?$"
# 2349 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2350 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Intro::
# 2351 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1339 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2352 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 2353 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 AM I!\p"
# 2354 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "THE MASTER'S BEST AND PROUDEST\n"
# 2355 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "ACHIEVEMENT AM I.$"
# 2356 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2357 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1::
# 2358 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1346 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2359 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
# 2360 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In SLATEPORT's POKéMON FAN CLUB,\n"
# 2361 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "how many POKéMON were there?$"
# 2362 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2363 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2::
# 2364 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1352 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2365 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
# 2366 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In FORTREE CITY, how many\n"
# 2367 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "tree houses were there?$"
# 2368 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2369 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3::
# 2370 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 1358 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
# 2371 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
# 2372 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "On the CYCLING ROAD, how many\n"
# 2373 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "TRIATHLETES were there?$"
