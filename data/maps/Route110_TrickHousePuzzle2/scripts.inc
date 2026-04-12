# 1 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 2 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 4 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHousePuzzle2_OnResume
# 5 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 3 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 6 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle2_OnTransition
# 7 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.byte 0
# 8 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 9 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 10 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnResume::
# 11 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 7 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 12 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	compare VAR_TEMP_1, 1
# 13 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle2_OnResume_2
# 14 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnResume_1:
# 15 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 10 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 16 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	compare VAR_TEMP_2, 1
# 17 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle2_OnResume_5
# 18 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnResume_4:
# 19 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 13 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 20 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	compare VAR_TEMP_3, 1
# 21 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle2_OnResume_8
# 22 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnResume_7:
# 23 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 16 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 24 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	compare VAR_TEMP_4, 1
# 25 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle2_OnResume_11
# 26 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnResume_10:
# 27 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 28 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 29 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnResume_2:
# 30 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 8 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 31 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton1
# 32 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle2_OnResume_1
# 33 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 34 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnResume_5:
# 35 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 11 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 36 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton2
# 37 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle2_OnResume_4
# 38 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 39 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnResume_8:
# 40 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 14 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 41 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton3
# 42 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle2_OnResume_7
# 43 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 44 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnResume_11:
# 45 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 17 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 46 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton4
# 47 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle2_OnResume_10
# 48 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 49 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 50 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnTransition::
# 51 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 23 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 52 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_1, 0
# 53 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 24 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 54 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_2, 0
# 55 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 25 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 56 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_3, 0
# 57 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 26 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 58 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_4, 0
# 59 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 60 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 61 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 62 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Scroll::
# 63 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 31 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 64 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 65 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 32 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 66 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_2_STATE, 0
# 67 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle2_EventScript_Scroll_2
# 68 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Scroll_1:
# 69 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 35 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 70 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 71 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 72 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 73 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Scroll_2:
# 74 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 33 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 75 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle2_EventScript_FoundScroll
# 76 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle2_EventScript_Scroll_1
# 77 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 78 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 79 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_FoundScroll::
# 80 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 40 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 81 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_2_STATE, 1
# 82 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 41 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 83 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 84 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 85 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 86 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 87 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Button1::
# 88 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 46 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 89 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 90 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 47 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 91 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 92 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 48 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 93 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 94 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 49 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 95 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton1
# 96 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 50 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 97 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 98 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 51 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 99 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
# 100 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 101 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 102 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 103 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Button2::
# 104 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 56 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 105 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 106 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 57 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 107 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_2, 1
# 108 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 58 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 109 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 110 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 59 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 111 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton2
# 112 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 60 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 113 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 114 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 61 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 115 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
# 116 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 117 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 118 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 119 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Button3::
# 120 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 66 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 121 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 122 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 67 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 123 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_3, 1
# 124 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 68 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 125 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 126 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 69 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 127 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton3
# 128 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 70 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 129 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 130 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 71 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 131 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
# 132 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 133 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 134 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 135 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Button4::
# 136 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 76 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 137 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 138 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 77 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 139 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 140 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 78 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 141 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 142 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 79 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 143 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton4
# 144 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 80 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 145 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 146 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 81 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 147 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
# 148 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 149 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 150 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 151 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_PressButton1::
# 152 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 86 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 153 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 11, 12, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 154 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 87 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 155 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 1, 13, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 156 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	return
# 157 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 158 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 159 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_PressButton2::
# 160 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 92 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 161 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 0, 4, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 162 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 93 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 163 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 5, 6, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 164 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	return
# 165 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 166 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 167 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_PressButton3::
# 168 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 98 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 169 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 14, 5, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 170 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 99 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 171 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 7, 15, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 172 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	return
# 173 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 174 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 175 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_PressButton4::
# 176 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 104 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 177 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 7, 11, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 178 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 105 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 179 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 14, 12, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 180 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	return
# 181 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 182 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 183 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Ted::
# 184 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 110 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 185 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	trainerbattle_single TRAINER_TED, Route110_TrickHousePuzzle2_Text_TedIntro, Route110_TrickHousePuzzle2_Text_TedDefeat
# 186 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 111 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 187 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_TedPostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 189 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 190 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 191 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Paul::
# 192 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 116 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 193 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	trainerbattle_single TRAINER_PAUL, Route110_TrickHousePuzzle2_Text_PaulIntro, Route110_TrickHousePuzzle2_Text_PaulDefeat
# 194 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 117 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 195 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 196 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 197 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 198 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 199 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Georgia::
# 200 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 122 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 201 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	trainerbattle_single TRAINER_GEORGIA, Route110_TrickHousePuzzle2_Text_GeorgiaIntro, Route110_TrickHousePuzzle2_Text_GeorgiaDefeat
# 202 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 123 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 203 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_GeorgiaPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 205 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 206 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 207 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened::
# 208 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 127 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 209 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 210 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "on the door.\p"
# 211 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "“TRICK MASTER is smart.”\n"
# 212 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "… … … … … … … …\p"
# 213 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "The lock clicked open!$"
# 214 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 215 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_TedIntro::
# 216 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 135 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 217 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Which switch closes which hole?$"
# 218 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 219 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_TedDefeat::
# 220 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 139 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 221 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "After that battle, I'm even more\n"
# 222 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "confused!$"
# 223 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 224 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_TedPostBattle::
# 225 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 144 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 226 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Can I get you to push all the buttons\n"
# 227 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "for me?$"
# 228 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 229 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_PaulIntro::
# 230 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 149 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 231 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Oh! You're on your second TRICK HOUSE\n"
# 232 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "challenge!$"
# 233 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 234 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_PaulDefeat::
# 235 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 154 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 236 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "You're good at battling too?$"
# 237 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 238 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_PaulPostBattle::
# 239 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 158 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 240 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "The TRICK MASTER rigged all the tricks\n"
# 241 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "in this house all by himself.$"
# 242 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 243 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_GeorgiaIntro::
# 244 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 163 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 245 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "I want to make my own GYM one day.\n"
# 246 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "So, I'm studying how to set traps.$"
# 247 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 248 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_GeorgiaDefeat::
# 249 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 168 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 250 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "I didn't study battling enough!$"
# 251 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 252 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_GeorgiaPostBattle::
# 253 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 172 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
# 254 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "You're strong, aren't you?\n"
# 255 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Maybe even enough to be a GYM LEADER!$"
