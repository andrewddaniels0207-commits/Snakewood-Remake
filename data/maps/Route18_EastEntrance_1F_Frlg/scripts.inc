# 1 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 2 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_Frlg_MapScripts::
# 3 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 2 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 4 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_EastEntrance_1F_OnTransition
# 5 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 7 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 8 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_OnTransition::
# 9 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 6 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 10 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	clearflag FLAG_SYS_ON_CYCLING_ROAD
# 11 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 7 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 12 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, Route18_EastEntrance_1F_OnTransition_2
# 13 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_OnTransition_1:
# 14 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	end
# 15 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 16 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_OnTransition_2:
# 17 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 8 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 18 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	call Route18_EastEntrance_1F_EventScript_DisableNeedBikeTrigger
# 19 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_OnTransition_1
# 20 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 21 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 22 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_DisableNeedBikeTrigger::
# 23 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 14 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 24 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	return
# 26 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 27 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 28 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_Guard::
# 29 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 19 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 30 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	msgbox Route18_EastEntrance_1F_Text_CyclingRoadAllUphillFromHere, MSGBOX_NPC
# 31 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 33 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 34 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTriggerTop::
# 35 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 24 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 36 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	lockall
# 37 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 25 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 38 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 0
# 39 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 26 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 40 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
# 41 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	end
# 42 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 43 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 44 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMidTop::
# 45 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 31 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 46 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	lockall
# 47 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 32 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 48 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 1
# 49 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 33 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 50 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
# 51 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	end
# 52 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 53 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 54 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMid::
# 55 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 38 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 56 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	lockall
# 57 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 39 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 58 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 2
# 59 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 40 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 60 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
# 61 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	end
# 62 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 63 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 64 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMidBottom::
# 65 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 45 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 66 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	lockall
# 67 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 46 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 68 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 3
# 69 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 47 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 70 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
# 71 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	end
# 72 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 73 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 74 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTriggerBottom::
# 75 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 52 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 76 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	lockall
# 77 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 53 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 78 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 4
# 79 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 54 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 80 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
# 81 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	end
# 82 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 83 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 84 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger::
# 85 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 59 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 86 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 87 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 60 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 88 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	msgbox Route18_EastEntrance_1F_Text_ExcuseMe
# 89 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 61 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 90 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	closemessage
# 91 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 62 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 92 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 93 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 63 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 94 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 64 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 96 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	delay 20
# 97 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 65 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 98 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	compare VAR_0x8008, 1
# 99 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto_if_eq Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_2
# 100 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_1:
# 101 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 68 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 102 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	compare VAR_0x8008, 2
# 103 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto_if_eq Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_5
# 104 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_4:
# 105 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 71 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 106 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	compare VAR_0x8008, 3
# 107 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto_if_eq Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_8
# 108 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_7:
# 109 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 74 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 110 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	compare VAR_0x8008, 4
# 111 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto_if_eq Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_11
# 112 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_10:
# 113 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 77 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 114 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	msgbox Route18_EastEntrance_1F_Text_NeedBicycleForCyclingRoad
# 115 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 78 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 116 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	closemessage
# 117 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 79 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 118 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_Movement_WalkRight
# 119 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 80 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 120 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 81 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 122 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	releaseall
# 123 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	end
# 124 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 125 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_2:
# 126 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 66 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 127 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	call Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMidTop
# 128 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_1
# 129 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 130 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_5:
# 131 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 69 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 132 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	call Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMid
# 133 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_4
# 134 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 135 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_8:
# 136 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 72 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 137 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	call Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMidBottom
# 138 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_7
# 139 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 140 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_11:
# 141 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 75 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 142 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	call Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterBottom
# 143 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_10
# 144 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 145 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 146 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMidTop::
# 147 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 86 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 148 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_Movement_WalkUp
# 149 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 87 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 150 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	return
# 152 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 153 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 154 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMid::
# 155 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 92 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 156 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_Movement_WalkUp2
# 157 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 93 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 158 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 159 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	return
# 160 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 161 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 162 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMidBottom::
# 163 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 98 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 164 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_Movement_WalkUp3
# 165 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 99 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 166 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	return
# 168 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 169 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 170 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterBottom::
# 171 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 104 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 172 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_Movement_WalkUp4
# 173 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 105 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 174 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	return
# 176 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 177 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 178 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 109 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 179 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_Movement_WalkUp:
# 180 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 110 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 181 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 182 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 111 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 183 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	step_end
# 184 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 185 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 114 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 186 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_Movement_WalkUp2:
# 187 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 115 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 188 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 189 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 116 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 190 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 191 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 117 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 192 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	step_end
# 193 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 194 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 120 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 195 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_Movement_WalkUp3:
# 196 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 121 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 197 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 198 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 122 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 199 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 200 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 123 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 201 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 202 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 124 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 203 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	step_end
# 204 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 205 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 127 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 206 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_Movement_WalkUp4:
# 207 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 128 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 208 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 209 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 129 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 210 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 211 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 130 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 212 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 213 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 131 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 214 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 215 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 132 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 216 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	step_end
# 217 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 218 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 135 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 219 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_Movement_WalkRight:
# 220 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 136 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 221 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_right
# 222 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 137 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 223 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	step_end
# 224 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 225 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_Text_NeedBicycleForCyclingRoad::
# 226 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 140 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 227 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	.string "You need a BICYCLE to go out on\n"
# 228 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	.string "CYCLING ROAD!$"
# 229 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 230 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_Text_CyclingRoadAllUphillFromHere::
# 231 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 145 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 232 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	.string "CYCLING ROAD is all uphill from\n"
# 233 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	.string "here.$"
# 234 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"

# 235 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_Text_ExcuseMe::
# 236 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 150 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
# 237 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	.string "Excuse me!$"
