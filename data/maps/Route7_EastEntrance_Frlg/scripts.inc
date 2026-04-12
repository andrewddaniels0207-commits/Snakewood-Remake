# 1 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 2 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Frlg_MapScripts::
# 3 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 5 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 6 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_Guard::
# 7 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 4 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 8 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_HiHowsItGoing, MSGBOX_NPC
# 9 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	end
# 10 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 11 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 12 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardTriggerTop::
# 13 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 9 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 14 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	lockall
# 15 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 10 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 16 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 17 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 11 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 18 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
# 19 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	end
# 20 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 21 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 22 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardTriggerMid::
# 23 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 16 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 24 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	lockall
# 25 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 17 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 26 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 18 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 28 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
# 29 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	end
# 30 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 31 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 32 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardTriggerBottom::
# 33 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 23 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 34 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	lockall
# 35 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 24 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 36 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 37 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 25 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 38 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
# 39 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	end
# 40 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 41 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 42 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardTrigger::
# 43 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 30 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 44 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 45 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 31 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 46 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 32 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 48 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 33 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 50 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route7_EastEntrance_EventScript_GuardTrigger_2
# 51 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardTrigger_1:
# 52 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 36 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 53 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThirstyOnGuardDuty
# 54 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 37 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 55 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	closemessage
# 56 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 38 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 57 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_BlockPlayerEntry
# 58 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 39 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 59 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 40 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 61 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	releaseall
# 62 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	end
# 63 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 64 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardTrigger_2:
# 65 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 34 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 66 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GiveTea
# 67 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger_1
# 68 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 69 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 70 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GiveTea::
# 71 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 45 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 72 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	removeitem ITEM_TEA
# 73 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 46 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 74 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardDrinkTea
# 75 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	end
# 76 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 77 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 78 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardDrinkTea::
# 79 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 51 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 80 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThatTeaLooksTasty
# 81 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 52 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 82 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	closemessage
# 83 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 53 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 84 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 85 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto_if_eq Route7_EastEntrance_EventScript_GuardDrinkTea_2
# 86 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardDrinkTea_1:
# 87 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 56 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 88 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 89 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto_if_eq Route7_EastEntrance_EventScript_GuardDrinkTea_5
# 90 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardDrinkTea_4:
# 91 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 59 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 92 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 93 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto_if_eq Route7_EastEntrance_EventScript_GuardDrinkTea_8
# 94 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardDrinkTea_7:
# 95 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 62 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 96 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThanksIllShareTeaWithGuards
# 97 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 63 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 98 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 99 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 64 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 100 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	releaseall
# 101 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	end
# 102 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 103 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardDrinkTea_2:
# 104 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 54 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 105 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	call Route7_EastEntrance_WalkToGuardTop
# 106 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardDrinkTea_1
# 107 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 108 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardDrinkTea_5:
# 109 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 57 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 110 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	call Route7_EastEntrance_WalkToGuardMid
# 111 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardDrinkTea_4
# 112 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 113 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardDrinkTea_8:
# 114 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 60 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 115 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	call Route7_EastEntrance_WalkToGuardBottom
# 116 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardDrinkTea_7
# 117 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 118 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 119 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_WalkToGuardTop::
# 120 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 69 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 121 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardTop
# 122 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 70 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 123 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	return
# 125 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 126 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 127 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_WalkToGuardMid::
# 128 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 75 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 129 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardMid
# 130 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 76 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 131 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	return
# 133 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 134 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 135 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_WalkToGuardBottom::
# 136 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 81 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 137 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardBottom
# 138 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 82 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 139 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	return
# 141 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 142 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 143 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 86 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 144 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Movement_WalkToGuardMid:
# 145 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 87 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 146 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_up
# 147 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 88 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 148 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	step_end
# 149 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 150 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 91 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 151 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Movement_WalkToGuardBottom:
# 152 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 92 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 153 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_up
# 154 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 93 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 155 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_up
# 156 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 94 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 157 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	step_end
# 158 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 159 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 97 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 160 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Movement_WalkToGuardTop:
# 161 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 98 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 162 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_in_place_up
# 163 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 99 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 164 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	step_end
# 165 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 166 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 102 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 167 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Movement_BlockPlayerEntry:
# 168 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 103 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 169 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_left
# 170 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 104 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 171 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	step_end
# 172 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 173 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Text_ThirstyOnGuardDuty::
# 174 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 107 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 175 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "I'm on guard duty.\n"
# 176 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Gee, I'm thirsty, though!\p"
# 177 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Oh, wait there, the road's closed.$"
# 178 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 179 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Text_ThatTeaLooksTasty::
# 180 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 113 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 181 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Oh, that TEA…\n"
# 182 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "It looks awfully tasty…$"
# 183 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 184 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Text_ThanksIllShareTeaWithGuards::
# 185 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 118 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 186 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Huh? I can have this drink?\n"
# 187 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Gee, thanks!\l"
# 188 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "… …\l"
# 189 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Glug, glug…\l"
# 190 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "… …\l"
# 191 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Gulp…\l"
# 192 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "If you want to go to SAFFRON\l"
# 193 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "CITY…\l"
# 194 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "… …\l"
# 195 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "You can go on through.\p"
# 196 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "I'll share this TEA with the other\n"
# 197 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "guards!$"
# 198 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"

# 199 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Text_HiHowsItGoing::
# 200 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 133 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
# 201 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Hi, how's it going?$"
