SSAnne_CaptainsOffice_Frlg_MapScripts::
	.byte 0


SSAnne_CaptainsOffice_EventScript_Captain::
# 4 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	lock
# 5 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM01, SSAnne_CaptainsOffice_EventScript_Captain_2
SSAnne_CaptainsOffice_EventScript_Captain_1:
# 8 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick
# 9 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 10 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	message SSAnne_CaptainsOffice_Text_RubbedCaptainsBack
# 11 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmessage
# 12 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 13 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitfanfare
# 14 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 15 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	delay 50
# 16 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
# 17 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmovement 0
# 18 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut
# 19 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	giveitem_msg SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain, ITEM_HM01, 1, MUS_RG_OBTAIN_KEY_ITEM
# 20 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_ExplainCut
# 21 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	setflag FLAG_GOT_HM01
# 22 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 1
# 23 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	release
	end

SSAnne_CaptainsOffice_EventScript_Captain_2:
# 6 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	goto SSAnne_CaptainsOffice_EventScript_AlreadyGotCut
	goto SSAnne_CaptainsOffice_EventScript_Captain_1


SSAnne_CaptainsOffice_EventScript_NoRoomForCut::
# 28 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis
# 29 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	closemessage
# 30 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FaceOriginalDirection
# 31 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmovement 0
# 32 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	release
	end


SSAnne_CaptainsOffice_EventScript_AlreadyGotCut::
# 37 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
# 38 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon
# 40 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	release
	end


SSAnne_CaptainsOffice_EventScript_TrashCan::
# 45 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked, MSGBOX_SIGN
	end


SSAnne_CaptainsOffice_EventScript_Book::
# 50 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_HowToConquerSeasickness, MSGBOX_SIGN
	end


SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick::
# 54 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "CAPTAIN: Ooargh…\n"
	.string "I feel hideous…\l"
	.string "Urrp! Seasick…$"

SSAnne_CaptainsOffice_Text_RubbedCaptainsBack::
# 60 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "{PLAYER} rubbed the CAPTAIN's\n"
	.string "back!\p"
	.string "Rub-rub…\n"
	.string "Rub-rub…$"

SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut::
# 67 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "CAPTAIN: Whew! Thank you!\n"
	.string "I'm feeling much better now.\p"
	.string "You want to see my hidden CUT\n"
	.string "technique?\p"
	.string "I could show you my prized CUT\n"
	.string "technique if I weren't so ill…\p"
	.string "I know! You can have this!\n"
	.string "This HIDDEN MACHINE!\p"
	.string "Teach CUT to your POKéMON, and\n"
	.string "you can see it CUT anytime!$"

SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain::
# 80 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "{PLAYER} obtained HM01\n"
	.string "from the CAPTAIN!$"

SSAnne_CaptainsOffice_Text_ExplainCut::
# 85 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Using CUT, you can chop down\n"
	.string "small trees.\p"
	.string "Why not try it with the trees\n"
	.string "around VERMILION CITY?$"

SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon::
# 92 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "CAPTAIN: …Whew!\p"
	.string "Now that I'm not sick anymore,\n"
	.string "I guess it's time.\p"
	.string "The S.S. ANNE will set sail soon!\p"
	.string "Farewell, until our return to\n"
	.string "VERMILION CITY!$"

SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis::
# 101 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Oh, no!\n"
	.string "You have no room for this!$"

SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked::
# 106 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Yuck!\n"
	.string "Shouldn't have looked!$"

SSAnne_CaptainsOffice_Text_HowToConquerSeasickness::
# 111 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "How to Conquer Seasickness…\n"
	.string "The CAPTAIN's reading this!$"
