# 1 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Frlg_MapScripts::
# 3 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 5 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 6 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1::
# 7 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 4 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 8 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lock
# 9 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 5 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 10 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 6 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 12 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 13 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq PewterCity_Museum_1F_EventScript_Scientist1_2
# 14 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1_1:
# 15 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 9 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 16 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 17 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq PewterCity_Museum_1F_EventScript_Scientist1_5
# 18 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1_4:
# 19 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 12 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 20 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 21 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq PewterCity_Museum_1F_EventScript_Scientist1_8
# 22 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1_7:
# 23 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 15 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 24 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PleaseEnjoyYourself
# 25 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 16 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 26 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 27 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 28 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 29 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1_2:
# 30 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 7 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 31 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 32 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_Scientist1_1
# 33 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 34 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1_5:
# 35 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 10 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 36 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 37 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_Scientist1_4
# 38 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 39 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1_8:
# 40 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 13 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 41 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 42 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_Scientist1_7
# 43 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 44 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 45 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1BehindCounter::
# 46 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 21 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 47 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs, MSGBOX_YESNO
# 48 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 22 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 49 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 50 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_2
# 51 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_1:
# 52 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 25 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 53 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 54 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_5
# 55 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_4:
# 56 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 57 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 58 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_2:
# 59 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 23 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 60 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter
# 61 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_1
# 62 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 63 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_5:
# 64 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 26 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 65 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_ExplainAmber
# 66 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_4
# 67 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 68 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter::
# 70 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 32 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 71 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberContainsGeneticMatter
# 72 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 33 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 73 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 74 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 34 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 75 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 76 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 35 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 77 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 78 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 79 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 80 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 81 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_ExplainAmber::
# 82 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 40 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 83 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberIsFossilizedSap
# 84 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 41 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 85 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 86 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 42 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 87 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 88 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 43 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 89 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 90 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 91 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 92 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 93 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTriggerLeft::
# 94 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 48 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 95 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 96 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 49 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 97 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 98 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 50 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 99 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 100 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 51 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 101 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 102 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 52 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 103 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
# 104 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 105 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 106 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 107 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTriggerMid::
# 108 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 57 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 109 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 110 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 58 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 111 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 112 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 59 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 113 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 114 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 60 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 115 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 116 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 61 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 117 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
# 118 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 119 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 120 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 121 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTriggerRight::
# 122 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 66 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 123 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 124 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 67 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 125 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 126 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 68 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 127 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 128 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 129 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 130 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 70 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 131 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
# 132 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 133 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 134 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 135 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTrigger::
# 136 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 75 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 137 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 138 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 76 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 139 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	showmoneybox 0, 0
# 140 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 77 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 141 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Its50YForChildsTicket, MSGBOX_YESNO
# 142 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 78 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 143 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 144 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq PewterCity_Museum_1F_EventScript_EntranceTrigger_2
# 145 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTrigger_1:
# 146 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 81 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 147 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ComeAgain
# 148 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 82 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 149 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 150 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 83 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 151 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
# 152 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 84 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 153 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 154 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 85 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 155 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 156 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 86 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 157 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 158 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 159 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 160 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTrigger_2:
# 161 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 79 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 162 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket
# 163 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger_1
# 164 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 165 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 166 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket::
# 167 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 91 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 168 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	checkmoney 50
# 169 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 92 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 170 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 171 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq PewterCity_Museum_1F_EventScript_TryPayForTicket_2
# 172 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket_1:
# 173 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 95 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 174 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 175 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 96 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 176 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 177 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq PewterCity_Museum_1F_EventScript_TryPayForTicket_5
# 178 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket_4:
# 179 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 99 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 180 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 181 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq PewterCity_Museum_1F_EventScript_TryPayForTicket_8
# 182 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket_7:
# 183 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 102 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 184 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 185 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq PewterCity_Museum_1F_EventScript_TryPayForTicket_11
# 186 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket_10:
# 187 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 105 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 188 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	playse SE_SHOP
# 189 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 106 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 190 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removemoney 50
# 191 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 107 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 192 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	updatemoneybox
# 193 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 108 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 194 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitse
# 195 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 109 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 196 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Right50YThankYou
# 197 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 110 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 198 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 1
# 199 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 111 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 200 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
# 201 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 112 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 202 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 203 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 204 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 205 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket_2:
# 206 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 93 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 207 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_NotEnoughMoney
# 208 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_1
# 209 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 210 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket_5:
# 211 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 97 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 212 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	call PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft
# 213 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_4
# 214 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 215 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket_8:
# 216 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 100 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 217 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	call PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid
# 218 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_7
# 219 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 220 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket_11:
# 221 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 103 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 222 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	call PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight
# 223 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_10
# 224 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 225 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 226 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft::
# 227 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 117 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 228 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterLeft
# 229 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 118 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 230 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 231 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	return
# 232 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 233 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 234 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid::
# 235 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 123 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 236 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterMid
# 237 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 124 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 238 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 239 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	return
# 240 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 241 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 242 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight::
# 243 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 129 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 244 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterRight
# 245 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 130 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 246 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 247 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	return
# 248 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 249 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 250 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_NotEnoughMoney::
# 251 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 135 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 252 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveEnoughMoney
# 253 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 136 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 254 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 255 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 137 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 256 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
# 257 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 138 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 258 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 259 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 139 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 260 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 261 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 140 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 262 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 263 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 264 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 265 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 266 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 144 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 267 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ForcePlayerExit:
# 268 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 145 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 269 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_down
# 270 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 146 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 271 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end
# 272 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 273 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 149 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 274 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterLeft:
# 275 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 150 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 276 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 277 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 151 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 278 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 279 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 152 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 280 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 281 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 153 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 282 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_in_place_right
# 283 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 154 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 284 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end
# 285 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 286 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 157 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 287 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterMid:
# 288 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 158 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 289 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 290 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 159 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 291 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 292 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 160 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 293 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_in_place_right
# 294 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 161 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 295 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end
# 296 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 297 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 164 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 298 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterRight:
# 299 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 165 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 300 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 301 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 166 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 302 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_in_place_right
# 303 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 167 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 304 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end
# 305 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 306 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist2::
# 307 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 171 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 308 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit, MSGBOX_NPC
# 309 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 310 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 311 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 312 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_OldMan::
# 313 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 176 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 314 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife, MSGBOX_NPC
# 315 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 316 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 317 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 318 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_OldAmberScientist::
# 319 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 181 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 320 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lock
# 321 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 182 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 322 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	faceplayer
# 323 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 183 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 324 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_OLD_AMBER, PewterCity_Museum_1F_EventScript_OldAmberScientist_2
# 325 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_OldAmberScientist_1:
# 326 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 186 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 327 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WantYouToGetAmberExamined
# 328 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 187 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 329 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	checkitemspace ITEM_OLD_AMBER
# 330 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 188 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 331 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 332 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq PewterCity_Museum_1F_EventScript_OldAmberScientist_5
# 333 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_OldAmberScientist_4:
# 334 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 191 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 335 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_OLD_AMBER
# 336 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 192 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 337 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removeobject LOCALID_OLD_AMBER
# 338 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 193 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 339 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	giveitem_msg PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan, ITEM_OLD_AMBER, 1, MUS_RG_OBTAIN_KEY_ITEM
# 340 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 194 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 341 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 342 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 343 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 344 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_OldAmberScientist_2:
# 345 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 184 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 346 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber
# 347 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_OldAmberScientist_1
# 348 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 349 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_OldAmberScientist_5:
# 350 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 189 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 351 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_NoRoomForOldAmber
# 352 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_OldAmberScientist_4
# 353 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 354 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 355 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_NoRoomForOldAmber::
# 356 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 199 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 357 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveSpaceForThis
# 358 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 200 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 359 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 360 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 361 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 362 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 363 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber::
# 364 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 205 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 365 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_GetOldAmberChecked
# 366 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 206 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 367 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 368 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 369 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 370 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 371 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_OldAmber::
# 372 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 211 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 373 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_BeautifulPieceOfAmber, MSGBOX_NPC
# 374 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 375 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 376 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 377 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_AerodactylFossil::
# 378 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 216 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 379 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 380 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 217 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 381 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_AERODACTYL
# 382 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 218 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 383 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8005, 10
# 384 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 219 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 385 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 386 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 220 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 387 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special OpenMuseumFossilPic
# 388 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 221 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 389 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AerodactylFossil
# 390 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 222 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 391 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special CloseMuseumFossilPic
# 392 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 223 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 393 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 394 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 395 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 396 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 397 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_KabutopsFossil::
# 398 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 228 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 399 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 400 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 229 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 401 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_KABUTOPS
# 402 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 230 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 403 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8005, 10
# 404 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 231 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 405 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 406 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 232 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 407 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special OpenMuseumFossilPic
# 408 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 233 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 409 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_KabutopsFossil
# 410 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 234 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 411 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special CloseMuseumFossilPic
# 412 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 235 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 413 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 414 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 415 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 416 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 417 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_Its50YForChildsTicket::
# 418 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 239 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 419 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Yes, yes.\n"
# 420 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "It's ¥50 for a child's ticket.\p"
# 421 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Would you like to come in?$"
# 422 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 423 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_ComeAgain::
# 424 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 245 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 425 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Come again!$"
# 426 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 427 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_Right50YThankYou::
# 428 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 249 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 429 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Right, ¥50!\n"
# 430 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Thank you!$"
# 431 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 432 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_DontHaveEnoughMoney::
# 433 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 254 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 434 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You don't have enough money.$"
# 435 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 436 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_PleaseEnjoyYourself::
# 437 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 258 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 438 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Please enjoy yourself.$"
# 439 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 440 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs::
# 441 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 262 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 442 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You can't sneak in the back way!\n"
# 443 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Nice try, kid, but no.\p"
# 444 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Oh, whatever!\n"
# 445 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Do you know what AMBER is?$"
# 446 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 447 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_AmberContainsGeneticMatter::
# 448 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 269 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 449 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AMBER contains the genetic matter\n"
# 450 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "of ancient POKéMON.\p"
# 451 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "There's a LAB somewhere trying to\n"
# 452 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "resurrect POKéMON from AMBER.$"
# 453 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 454 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_AmberIsFossilizedSap::
# 455 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 276 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 456 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AMBER is actually sap, that gooey\n"
# 457 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "stuff that oozes from trees.\p"
# 458 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "The ancient sap fossilized over\n"
# 459 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "time to become rock-hard AMBER.$"
# 460 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 461 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_PleaseGoAround::
# 462 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 283 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 463 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "あちらへ　おまわりください$"
# 464 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 465 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife::
# 466 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 287 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 467 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "I should be grateful for my long\n"
# 468 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "life.\p"
# 469 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Never did I think I would get to\n"
# 470 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "see the bones of a dragon!$"
# 471 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 472 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_WantYouToGetAmberExamined::
# 473 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 294 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 474 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Ssh! Listen, I need to share a\n"
# 475 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "secret with someone.\p"
# 476 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "I think that this chunk of AMBER\n"
# 477 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "contains POKéMON DNA!\p"
# 478 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "It would be a shattering scientific\n"
# 479 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "breakthrough if POKéMON could be\l"
# 480 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "resurrected from it.\p"
# 481 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "But, my colleagues just ignore\n"
# 482 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "what I have to say.\p"
# 483 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "So, I have a favor to ask!\p"
# 484 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "I want you to get this examined at\n"
# 485 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "a POKéMON LAB somewhere.$"
# 486 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 487 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan::
# 488 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 309 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 489 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "{PLAYER} received the OLD AMBER\n"
# 490 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "from the man.$"
# 491 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 492 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_GetOldAmberChecked::
# 493 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 314 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 494 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Ssh!\n"
# 495 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Get the OLD AMBER checked!$"
# 496 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 497 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_DontHaveSpaceForThis::
# 498 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 319 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 499 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You don't have space for this.$"
# 500 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 501 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit::
# 502 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 323 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 503 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "We have two fossils of rare,\n"
# 504 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "prehistoric POKéMON on exhibit.$"
# 505 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 506 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_BeautifulPieceOfAmber::
# 507 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 328 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 508 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "There is a beautiful piece of\n"
# 509 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AMBER in a clear gold color.$"
# 510 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 511 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_AerodactylFossil::
# 512 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 333 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 513 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AERODACTYL Fossil\n"
# 514 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "A primitive and rare POKéMON.$"
# 515 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 516 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_KabutopsFossil::
# 517 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 338 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
# 518 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "KABUTOPS Fossil\n"
# 519 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "A primitive and rare POKéMON.$"
