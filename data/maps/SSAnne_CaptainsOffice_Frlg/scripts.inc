# 1 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Frlg_MapScripts::
# 3 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 6 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_Captain::
# 7 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 4 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 8 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	lock
# 9 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 5 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 10 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM01, SSAnne_CaptainsOffice_EventScript_Captain_2
# 11 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_Captain_1:
# 12 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 8 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 13 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick
# 14 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 9 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 15 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 16 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 10 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 17 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	message SSAnne_CaptainsOffice_Text_RubbedCaptainsBack
# 18 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 11 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 19 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmessage
# 20 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 12 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 21 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 22 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 13 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 23 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitfanfare
# 24 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 14 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 25 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 26 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 15 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 27 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	delay 50
# 28 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 16 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 29 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
# 30 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 17 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 31 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmovement 0
# 32 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 18 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 33 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut
# 34 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 19 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 35 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	giveitem_msg SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain, ITEM_HM01, 1, MUS_RG_OBTAIN_KEY_ITEM
# 36 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 20 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 37 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_ExplainCut
# 38 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 21 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 39 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	setflag FLAG_GOT_HM01
# 40 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 22 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 41 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 1
# 42 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 23 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 43 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	release
# 44 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	end
# 45 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 46 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_Captain_2:
# 47 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 6 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 48 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	goto SSAnne_CaptainsOffice_EventScript_AlreadyGotCut
# 49 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	goto SSAnne_CaptainsOffice_EventScript_Captain_1
# 50 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 51 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 52 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_NoRoomForCut::
# 53 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 28 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 54 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis
# 55 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 29 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 56 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	closemessage
# 57 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 30 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 58 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FaceOriginalDirection
# 59 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 31 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 60 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmovement 0
# 61 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 32 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 62 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	release
# 63 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	end
# 64 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 65 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 66 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_AlreadyGotCut::
# 67 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 37 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 68 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
# 69 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 38 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 70 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmovement 0
# 71 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 39 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 72 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon
# 73 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 40 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 74 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	release
# 75 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	end
# 76 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 77 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 78 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_TrashCan::
# 79 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 45 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 80 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked, MSGBOX_SIGN
# 81 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	end
# 82 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 83 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 84 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_Book::
# 85 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 50 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 86 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_HowToConquerSeasickness, MSGBOX_SIGN
# 87 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	end
# 88 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 89 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 90 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick::
# 91 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 54 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 92 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "CAPTAIN: Ooargh…\n"
# 93 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "I feel hideous…\l"
# 94 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Urrp! Seasick…$"
# 95 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 96 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_RubbedCaptainsBack::
# 97 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 60 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 98 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "{PLAYER} rubbed the CAPTAIN's\n"
# 99 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "back!\p"
# 100 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Rub-rub…\n"
# 101 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Rub-rub…$"
# 102 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 103 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut::
# 104 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 67 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 105 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "CAPTAIN: Whew! Thank you!\n"
# 106 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "I'm feeling much better now.\p"
# 107 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "You want to see my hidden CUT\n"
# 108 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "technique?\p"
# 109 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "I could show you my prized CUT\n"
# 110 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "technique if I weren't so ill…\p"
# 111 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "I know! You can have this!\n"
# 112 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "This HIDDEN MACHINE!\p"
# 113 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Teach CUT to your POKéMON, and\n"
# 114 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "you can see it CUT anytime!$"
# 115 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 116 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain::
# 117 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 80 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 118 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "{PLAYER} obtained HM01\n"
# 119 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "from the CAPTAIN!$"
# 120 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 121 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_ExplainCut::
# 122 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 85 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 123 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Using CUT, you can chop down\n"
# 124 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "small trees.\p"
# 125 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Why not try it with the trees\n"
# 126 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "around VERMILION CITY?$"
# 127 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 128 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon::
# 129 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 92 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 130 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "CAPTAIN: …Whew!\p"
# 131 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Now that I'm not sick anymore,\n"
# 132 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "I guess it's time.\p"
# 133 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "The S.S. ANNE will set sail soon!\p"
# 134 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Farewell, until our return to\n"
# 135 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "VERMILION CITY!$"
# 136 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 137 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis::
# 138 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 101 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 139 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Oh, no!\n"
# 140 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "You have no room for this!$"
# 141 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 142 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked::
# 143 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 106 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 144 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Yuck!\n"
# 145 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Shouldn't have looked!$"
# 146 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 147 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_HowToConquerSeasickness::
# 148 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 111 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
# 149 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "How to Conquer Seasickness…\n"
# 150 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "The CAPTAIN's reading this!$"
