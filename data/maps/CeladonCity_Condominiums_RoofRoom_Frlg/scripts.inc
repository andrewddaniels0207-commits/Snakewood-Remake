CeladonCity_Condominiums_RoofRoom_Frlg_MapScripts::
	.byte 0


CeladonCity_Condominiums_RoofRoom_EventScript_BlackBelt::
# 4 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow, MSGBOX_NPC
	end


CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall::
# 9 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	lock
# 10 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_EEVEE
# 12 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	givemon SPECIES_EEVEE, 25
# 13 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_2
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_1:
# 16 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_5
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_4:
# 19 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_8
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_7:
# 22 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	release
	end

CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_2:
# 14 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty
	goto CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_1

CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_5:
# 17 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC
	goto CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_4

CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_8:
# 20 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_7


CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty::
# 27 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	removeobject LOCALID_EEVEE_POKEBALL
# 28 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 29 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
# 30 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 31 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitfanfare
# 32 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 33 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 34 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty_2
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty_1:
# 37 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 38 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 39 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
	end

CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty_2:
# 35 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
	goto CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty_1


CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC::
# 44 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	removeobject LOCALID_EEVEE_POKEBALL
# 45 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 46 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
# 47 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 48 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitfanfare
# 49 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 50 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 51 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC_2
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC_1:
# 54 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 55 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
	end

CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC_2:
# 52 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
	goto CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC_1


CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC::
# 60 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 61 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
	end


CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee::
# 66 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setflag FLAG_GOT_EEVEE
# 67 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	release
	end


CeladonCity_Condominiums_RoofRoom_EventScript_TMsPamphlet::
# 72 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs, MSGBOX_SIGN
	end


CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard::
# 77 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	lockall
# 78 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture
# 79 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
# 80 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 81 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 82 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_LINKED_DIRECT_UNION, FALSE
# 83 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 84 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 0, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_3
# 86 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 1, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_4
# 88 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 2, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_5
# 90 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 3, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_6
# 92 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 127, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_7
CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1:
	end

CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_3:
# 85 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
	goto CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1

CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_4:
# 87 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
	goto CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1

CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_5:
# 89 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
	goto CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1

CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_6:
# 91 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
	goto CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1

CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_7:
# 93 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
	goto CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1


CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading::
# 99 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
# 100 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 101 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_LINKED_DIRECT_UNION, FALSE
# 102 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 103 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 0, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_3
# 105 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 1, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_4
# 107 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 2, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_5
# 109 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 3, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_6
# 111 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 127, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_7
CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1:
	end

CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_3:
# 104 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1

CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_4:
# 106 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1

CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_5:
# 108 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1

CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_6:
# 110 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1

CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_7:
# 112 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1


CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub::
# 118 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub
# 119 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
	end


CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner::
# 124 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner
# 125 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
	end


CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom::
# 130 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom
# 131 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
	end


CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard::
# 136 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	releaseall
	end


CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow::
# 140 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "There is nothing that I don't know,\n"
	.string "like I wrote on the blackboard.\p"
	.string "I know about the world of POKéMON\n"
	.string "in your GAME BOY ADVANCE!\p"
	.string "Get together with your friends and\n"
	.string "enjoy trading POKéMON!$"

CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee::
# 149 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "{PLAYER} obtained an EEVEE!$"

CeladonCity_Condominiums_RoofRoom_Text_BoxIsFull::
# 153 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "ポケモンが　いっぱいだ\n"
	.string "ボックスを　かえて　きなさい$"

CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture::
# 158 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "POKéMON Lecture\p"
	.string "Playing with the Wireless Adapter$"

CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading::
# 163 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Which heading do you want to read?$"

CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub::
# 167 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "The POKéMON WIRELESS CLUB is\n"
	.string "upstairs at any POKéMON CENTER.\p"
	.string "Visit one to link up with friend(s)\n"
	.string "using your Wireless Adapter.$"

CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner::
# 174 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "To link only with a friend, go to\n"
	.string "the DIRECT CORNER.\p"
	.string "It is the right counter at the\n"
	.string "POKéMON WIRELESS CLUB.\p"
	.string "Go into the TRADE CORNER or the\n"
	.string "COLOSSEUM with your friend.$"

CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom::
# 183 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "To link and communicate with\n"
	.string "anyone, go to the UNION ROOM.\p"
	.string "It is the left counter at the\n"
	.string "POKéMON WIRELESS CLUB.\p"
	.string "Go to the UNION ROOM and enjoy\n"
	.string "meeting other TRAINERS.$"

CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs::
# 192 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "It's a pamphlet on TMs.\p"
	.string "… …\p"
	.string "There are fifty TMs in all.\p"
	.string "There are also seven HMs that\n"
	.string "can be used repeatedly.\p"
	.string "SILPH CO.$"
