# 1 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 5 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 6 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Lass::
# 7 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 4 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 8 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lock
# 9 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 5 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 10 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 6 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 12 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TryingToMemorizeNotes
# 13 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 7 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 14 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	closemessage
# 15 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 8 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 16 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 17 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 9 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 18 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmovement 0
# 19 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 10 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 20 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	release
# 21 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 22 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 23 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 24 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Woman::
# 25 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 15 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 26 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lock
# 27 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 16 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 28 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 17 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 30 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ReadBlackboardCarefully
# 31 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 18 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 32 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	closemessage
# 33 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 19 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 34 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	applymovement LOCALID_SCHOOL_WOMAN, Common_Movement_FaceOriginalDirection
# 35 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 20 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 36 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmovement 0
# 37 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 21 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 38 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	release
# 39 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 40 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 41 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 42 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Notebook::
# 43 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 26 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 44 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lockall
# 45 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 27 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 46 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFirstPage
# 47 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 28 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 48 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 49 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 29 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 50 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 51 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto_if_eq ViridianCity_School_EventScript_Notebook_2
# 52 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Notebook_1:
# 53 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 32 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 54 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookSecondPage
# 55 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 33 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 56 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 57 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 34 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 58 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 59 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto_if_eq ViridianCity_School_EventScript_Notebook_5
# 60 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Notebook_4:
# 61 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 37 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 62 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookThirdPage
# 63 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 38 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 64 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 65 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 39 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 66 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 67 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto_if_eq ViridianCity_School_EventScript_Notebook_8
# 68 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Notebook_7:
# 69 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 42 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 70 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFourthPage
# 71 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 43 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 72 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 73 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 44 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 74 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmovement 0
# 75 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 45 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 76 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 77 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 46 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 78 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_HeyDontLookAtMyNotes
# 79 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 47 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 80 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	releaseall
# 81 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 82 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 83 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Notebook_2:
# 84 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 30 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 85 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_StopReadingNotebook
# 86 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_Notebook_1
# 87 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 88 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Notebook_5:
# 89 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 35 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 90 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_StopReadingNotebook
# 91 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_Notebook_4
# 92 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 93 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Notebook_8:
# 94 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 40 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 95 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_StopReadingNotebook
# 96 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_Notebook_7
# 97 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 98 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 99 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_StopReadingNotebook::
# 100 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 52 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 101 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	releaseall
# 102 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 103 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 104 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 105 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Blackboard::
# 106 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 57 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 107 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lockall
# 108 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 58 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 109 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_BlackboardListsStatusProblems
# 110 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 59 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 111 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 112 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 113 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 114 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 115 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic::
# 116 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 64 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 117 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	message ViridianCity_School_Text_ReadWhichTopic
# 118 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 65 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 119 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmessage
# 120 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 66 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 121 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	multichoicegrid 7, 1, MULTI_STATUS_INFO, 3, FALSE
# 122 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 67 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 123 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	switch VAR_RESULT
# 124 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 68 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 125 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 0, ViridianCity_School_EventScript_ChooseBlackboardTopic_3
# 126 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 70 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 127 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 1, ViridianCity_School_EventScript_ChooseBlackboardTopic_4
# 128 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 72 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 129 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 2, ViridianCity_School_EventScript_ChooseBlackboardTopic_5
# 130 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 74 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 131 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 3, ViridianCity_School_EventScript_ChooseBlackboardTopic_6
# 132 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 76 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 133 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 4, ViridianCity_School_EventScript_ChooseBlackboardTopic_7
# 134 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 78 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 135 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 5, ViridianCity_School_EventScript_ChooseBlackboardTopic_8
# 136 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 80 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 137 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 127, ViridianCity_School_EventScript_ChooseBlackboardTopic_9
# 138 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic_1:
# 139 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 140 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 141 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic_3:
# 142 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 69 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 143 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ReadSleep
# 144 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1
# 145 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 146 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic_4:
# 147 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 71 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 148 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ReadPoison
# 149 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1
# 150 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 151 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic_5:
# 152 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 73 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 153 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ReadParalysis
# 154 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1
# 155 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 156 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic_6:
# 157 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 75 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 158 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ReadBurn
# 159 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1
# 160 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 161 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic_7:
# 162 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 77 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 163 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ReadFreeze
# 164 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1
# 165 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 166 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic_8:
# 167 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 79 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 168 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ExitBlackboard
# 169 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1
# 170 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 171 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic_9:
# 172 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 81 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 173 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ExitBlackboard
# 174 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1
# 175 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 176 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 177 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ReadSleep::
# 178 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 87 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 179 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainSleep
# 180 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 88 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 181 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 182 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 183 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 184 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 185 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ReadBurn::
# 186 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 93 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 187 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainBurn
# 188 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 94 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 189 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 190 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 191 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 192 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 193 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ReadPoison::
# 194 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 99 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 195 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainPoison
# 196 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 100 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 197 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 198 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 199 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 200 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 201 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ReadFreeze::
# 202 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 105 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 203 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainFreeze
# 204 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 106 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 205 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 206 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 207 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 208 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 209 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ReadParalysis::
# 210 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 111 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 211 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainParalysis
# 212 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 112 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 213 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 214 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 215 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 216 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 217 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ExitBlackboard::
# 218 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 117 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 219 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	releaseall
# 220 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 221 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 222 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 223 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_TryingToMemorizeNotes::
# 224 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 121 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 225 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Whew! I'm trying to memorize all my\n"
# 226 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "notes.$"
# 227 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 228 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ReadBlackboardCarefully::
# 229 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 126 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 230 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Okay!\p"
# 231 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Be sure to read what's on the\n"
# 232 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "blackboard carefully!$"
# 233 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 234 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_NotebookFirstPage::
# 235 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 132 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 236 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Let's check out the notebook.\p"
# 237 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "First page…\p"
# 238 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKé BALLS are used to catch\n"
# 239 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 240 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Up to six POKéMON can be carried\n"
# 241 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "in your party.\p"
# 242 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "People who raise and battle\n"
# 243 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "with POKéMON are called TRAINERS.$"
# 244 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 245 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_NotebookSecondPage::
# 246 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 143 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 247 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Second page…\p"
# 248 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A healthy POKéMON may be hard to\n"
# 249 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "catch, so weaken it first.\p"
# 250 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Poison, burn, or cause another\n"
# 251 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "status problem to weaken it.$"
# 252 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 253 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_NotebookThirdPage::
# 254 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 151 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 255 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Third page…\p"
# 256 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKéMON TRAINERS seek others to\n"
# 257 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "engage in POKéMON battles.\p"
# 258 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "To TRAINERS, the taste of victory\n"
# 259 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "is sweet, indeed.\p"
# 260 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Battles are constantly waged at\n"
# 261 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKéMON GYMS everywhere.$"
# 262 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 263 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_NotebookFourthPage::
# 264 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 161 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 265 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Fourth page…\p"
# 266 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "The ultimate goal for all POKéMON\n"
# 267 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "TRAINERS is simple.\p"
# 268 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "It is to defeat the top eight\n"
# 269 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKéMON GYM LEADERS.\p"
# 270 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Do so to earn the right to face…\p"
# 271 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "The ELITE FOUR of the POKéMON\n"
# 272 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "LEAGUE!$"
# 273 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 274 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_TurnThePage::
# 275 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 172 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 276 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Turn the page?$"
# 277 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 278 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_HeyDontLookAtMyNotes::
# 279 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 176 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 280 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "GIRL: Hey!\n"
# 281 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Don't look at my notes!$"
# 282 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 283 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_BlackboardListsStatusProblems::
# 284 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 181 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 285 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "The blackboard lists POKéMON\n"
# 286 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "STATUS problems during battles.$"
# 287 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 288 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ReadWhichTopic::
# 289 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 186 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 290 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Which topic do you want to read?$"
# 291 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 292 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ExplainSleep::
# 293 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 190 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 294 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A POKéMON can't attack if it's\n"
# 295 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "asleep.\p"
# 296 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKéMON will stay asleep even\n"
# 297 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "after battles.\p"
# 298 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Use AWAKENING to awaken one\n"
# 299 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "from sleep.$"
# 300 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 301 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ExplainBurn::
# 302 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 199 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 303 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A burn reduces ATTACK power.\n"
# 304 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "It also causes ongoing HP loss.\p"
# 305 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A burn remains after a battle.\n"
# 306 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Use BURN HEAL to cure a burn.$"
# 307 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 308 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ExplainPoison::
# 309 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 206 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 310 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "When poisoned, a POKéMON's health\n"
# 311 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "steadily drops.\p"
# 312 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Poison lingers after battles.\n"
# 313 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Use an ANTIDOTE to cure poison!$"
# 314 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 315 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ExplainFreeze::
# 316 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 213 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 317 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A frozen POKéMON becomes\n"
# 318 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "helplessly immobile.\p"
# 319 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "It stays frozen even after the\n"
# 320 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "battle ends.\p"
# 321 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Use ICE HEAL to thaw out the\n"
# 322 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "suffering POKéMON.$"
# 323 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 324 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ExplainParalysis::
# 325 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 222 "data/maps/ViridianCity_School_Frlg/scripts.pory"
# 326 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Paralysis reduces SPEED and may\n"
# 327 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "prevent the POKéMON from moving.\p"
# 328 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Paralysis remains after battles.\n"
# 329 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Use PARLYZ HEAL for treatment.$"
