# 1 "data/maps/Route114_LanettesHouse/scripts.pory"

# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_MapScripts::
# 3 "data/maps/Route114_LanettesHouse/scripts.pory"
# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
# 4 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
# 5 "data/maps/Route114_LanettesHouse/scripts.pory"
	.byte 0
# 6 "data/maps/Route114_LanettesHouse/scripts.pory"

# 7 "data/maps/Route114_LanettesHouse/scripts.pory"

# 8 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_OnTransition::
# 9 "data/maps/Route114_LanettesHouse/scripts.pory"
# 6 "data/maps/Route114_LanettesHouse/scripts.pory"
# 10 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 12 "data/maps/Route114_LanettesHouse/scripts.pory"

# 13 "data/maps/Route114_LanettesHouse/scripts.pory"

# 14 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Lanette::
# 15 "data/maps/Route114_LanettesHouse/scripts.pory"
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"
# 12 "data/maps/Route114_LanettesHouse/scripts.pory"
# 18 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
# 13 "data/maps/Route114_LanettesHouse/scripts.pory"
# 20 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOLL_LANETTE, Route114_LanettesHouse_EventScript_Lanette_2
# 21 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Lanette_1:
# 22 "data/maps/Route114_LanettesHouse/scripts.pory"
# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
# 23 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EverythingClutteredKeepThis, MSGBOX_DEFAULT
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"
# 18 "data/maps/Route114_LanettesHouse/scripts.pory"
# 27 "data/maps/Route114_LanettesHouse/scripts.pory"
	givedecoration DECOR_LOTAD_DOLL
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 30 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq Route114_LanettesHouse_EventScript_Lanette_5
# 31 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Lanette_4:
# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
# 22 "data/maps/Route114_LanettesHouse/scripts.pory"
# 33 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_RECEIVED_DOLL_LANETTE
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"
# 23 "data/maps/Route114_LanettesHouse/scripts.pory"
# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 36 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 37 "data/maps/Route114_LanettesHouse/scripts.pory"

# 38 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Lanette_2:
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"
# 14 "data/maps/Route114_LanettesHouse/scripts.pory"
# 40 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto Route114_LanettesHouse_EventScript_OfferAdvice
# 41 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto Route114_LanettesHouse_EventScript_Lanette_1
# 42 "data/maps/Route114_LanettesHouse/scripts.pory"

# 43 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Lanette_5:
# 44 "data/maps/Route114_LanettesHouse/scripts.pory"
# 20 "data/maps/Route114_LanettesHouse/scripts.pory"
# 45 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto Common_EventScript_ShowNoRoomForDecor
# 46 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto Route114_LanettesHouse_EventScript_Lanette_4
# 47 "data/maps/Route114_LanettesHouse/scripts.pory"

# 48 "data/maps/Route114_LanettesHouse/scripts.pory"

# 49 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_OfferAdvice::
# 50 "data/maps/Route114_LanettesHouse/scripts.pory"
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
# 51 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_OrganizeYourBoxes, MSGBOX_DEFAULT
# 52 "data/maps/Route114_LanettesHouse/scripts.pory"
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
# 53 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 54 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 55 "data/maps/Route114_LanettesHouse/scripts.pory"

# 56 "data/maps/Route114_LanettesHouse/scripts.pory"

# 57 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Notebook::
# 58 "data/maps/Route114_LanettesHouse/scripts.pory"
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"
# 59 "data/maps/Route114_LanettesHouse/scripts.pory"
	lockall
# 60 "data/maps/Route114_LanettesHouse/scripts.pory"
# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
# 61 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage1, MSGBOX_YESNO
# 62 "data/maps/Route114_LanettesHouse/scripts.pory"
# 36 "data/maps/Route114_LanettesHouse/scripts.pory"
# 63 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, YES
# 64 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq Route114_LanettesHouse_EventScript_Notebook_2
# 65 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Notebook_1:
# 66 "data/maps/Route114_LanettesHouse/scripts.pory"
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"
# 67 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ClosedTheNotebook, MSGBOX_DEFAULT
# 68 "data/maps/Route114_LanettesHouse/scripts.pory"
# 40 "data/maps/Route114_LanettesHouse/scripts.pory"
# 69 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 70 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 71 "data/maps/Route114_LanettesHouse/scripts.pory"

# 72 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Notebook_2:
# 73 "data/maps/Route114_LanettesHouse/scripts.pory"
# 37 "data/maps/Route114_LanettesHouse/scripts.pory"
# 74 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto Route114_LanettesHouse_EventScript_NotebookPage2
# 75 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto Route114_LanettesHouse_EventScript_Notebook_1
# 76 "data/maps/Route114_LanettesHouse/scripts.pory"

# 77 "data/maps/Route114_LanettesHouse/scripts.pory"

# 78 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage2::
# 79 "data/maps/Route114_LanettesHouse/scripts.pory"
# 45 "data/maps/Route114_LanettesHouse/scripts.pory"
# 80 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage2, MSGBOX_YESNO
# 81 "data/maps/Route114_LanettesHouse/scripts.pory"
# 46 "data/maps/Route114_LanettesHouse/scripts.pory"
# 82 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, YES
# 83 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq Route114_LanettesHouse_EventScript_NotebookPage2_2
# 84 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage2_1:
# 85 "data/maps/Route114_LanettesHouse/scripts.pory"
# 49 "data/maps/Route114_LanettesHouse/scripts.pory"
# 86 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 87 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 88 "data/maps/Route114_LanettesHouse/scripts.pory"

# 89 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage2_2:
# 90 "data/maps/Route114_LanettesHouse/scripts.pory"
# 47 "data/maps/Route114_LanettesHouse/scripts.pory"
# 91 "data/maps/Route114_LanettesHouse/scripts.pory"
	call Route114_LanettesHouse_EventScript_NotebookPage3
# 92 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto Route114_LanettesHouse_EventScript_NotebookPage2_1
# 93 "data/maps/Route114_LanettesHouse/scripts.pory"

# 94 "data/maps/Route114_LanettesHouse/scripts.pory"

# 95 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage3::
# 96 "data/maps/Route114_LanettesHouse/scripts.pory"
# 54 "data/maps/Route114_LanettesHouse/scripts.pory"
# 97 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage3, MSGBOX_DEFAULT
# 98 "data/maps/Route114_LanettesHouse/scripts.pory"
	return
# 99 "data/maps/Route114_LanettesHouse/scripts.pory"

# 100 "data/maps/Route114_LanettesHouse/scripts.pory"

# 101 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_PC::
# 102 "data/maps/Route114_LanettesHouse/scripts.pory"
# 59 "data/maps/Route114_LanettesHouse/scripts.pory"
# 103 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
# 104 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 105 "data/maps/Route114_LanettesHouse/scripts.pory"

# 106 "data/maps/Route114_LanettesHouse/scripts.pory"

# 107 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EverythingClutteredKeepThis::
# 108 "data/maps/Route114_LanettesHouse/scripts.pory"
# 63 "data/maps/Route114_LanettesHouse/scripts.pory"
# 109 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "LANETTE: Oh! {PLAYER}{KUN}!\p"
# 110 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "I'm sorry everything is so cluttered…\n"
# 111 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "When I get engrossed in research,\l"
# 112 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "things end up this way…\p"
# 113 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "This is embarrassing… Please keep\n"
# 114 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "this a secret in exchange for this.$"
# 115 "data/maps/Route114_LanettesHouse/scripts.pory"

# 116 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_OrganizeYourBoxes::
# 117 "data/maps/Route114_LanettesHouse/scripts.pory"
# 72 "data/maps/Route114_LanettesHouse/scripts.pory"
# 118 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "May I offer advice about my POKéMON\n"
# 119 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Storage System?\p"
# 120 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "You should organize your BOXES so you\n"
# 121 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "can tell which POKéMON are in them.$"
# 122 "data/maps/Route114_LanettesHouse/scripts.pory"

# 123 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage1::
# 124 "data/maps/Route114_LanettesHouse/scripts.pory"
# 79 "data/maps/Route114_LanettesHouse/scripts.pory"
# 125 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "It's LANETTE's research notes.\n"
# 126 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's information about BOXES.\p"
# 127 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Design BOXES to hold 30 POKéMON each.\p"
# 128 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Each TRAINER should be able to store\n"
# 129 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "420 POKéMON on the PC system.\p"
# 130 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 131 "data/maps/Route114_LanettesHouse/scripts.pory"

# 132 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage2::
# 133 "data/maps/Route114_LanettesHouse/scripts.pory"
# 88 "data/maps/Route114_LanettesHouse/scripts.pory"
# 134 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "A marking system should be added to\n"
# 135 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "make POKéMON easier to organize.\p"
# 136 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The name and wallpaper design of each\n"
# 137 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "BOX will be made changeable to please\l"
# 138 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "the stored POKéMON.\p"
# 139 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 140 "data/maps/Route114_LanettesHouse/scripts.pory"

# 141 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage3::
# 142 "data/maps/Route114_LanettesHouse/scripts.pory"
# 97 "data/maps/Route114_LanettesHouse/scripts.pory"
# 143 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "When storing a POKéMON, it should be\n"
# 144 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "sent to the BOX inspected last.\p"
# 145 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "If that BOX is full, the received\n"
# 146 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "POKéMON is stored in the next BOX.\p"
# 147 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "In other words, when a BOX is examined,\n"
# 148 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "it is automatically selected as the BOX\l"
# 149 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "to which POKéMON are sent.$"
# 150 "data/maps/Route114_LanettesHouse/scripts.pory"

# 151 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ClosedTheNotebook::
# 152 "data/maps/Route114_LanettesHouse/scripts.pory"
# 107 "data/maps/Route114_LanettesHouse/scripts.pory"
# 153 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{PLAYER} closed the notebook.$"
# 154 "data/maps/Route114_LanettesHouse/scripts.pory"

# 155 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EmailFromBill::
# 156 "data/maps/Route114_LanettesHouse/scripts.pory"
# 111 "data/maps/Route114_LanettesHouse/scripts.pory"
# 157 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's an e-mail from someone on\n"
# 158 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "the PC.\p"
# 159 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“… … … … … … …\p"
# 160 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“Your Storage System offers more\n"
# 161 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "convenience than mine.\p"
# 162 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“It has a lot of user-friendly features\n"
# 163 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "that make it fun and useful, too.\p"
# 164 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“It makes me proud that I played\n"
# 165 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "a part in its development.\p"
# 166 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“Here's hoping that you'll continue\n"
# 167 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "research in Storage Systems.\p"
# 168 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“From BILL\n"
# 169 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "… … … … … … … …”$"
