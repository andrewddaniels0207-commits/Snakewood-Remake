# 1 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 6 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_BlackBelt::
# 7 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 8 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow, MSGBOX_NPC
# 9 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 10 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 11 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 12 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall::
# 13 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 9 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	lock
# 15 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 10 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	faceplayer
# 17 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 11 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 18 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_EEVEE
# 19 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 12 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	givemon SPECIES_EEVEE, 25
# 21 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 13 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 23 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_2
# 24 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_1:
# 25 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 26 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 27 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_5
# 28 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_4:
# 29 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 19 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 30 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 31 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_8
# 32 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_7:
# 33 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 34 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	release
# 35 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 36 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 37 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_2:
# 38 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 39 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty
# 40 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_1
# 41 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 42 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_5:
# 43 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 17 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 44 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC
# 45 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_4
# 46 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 47 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_8:
# 48 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 49 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 50 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_7
# 51 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 52 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 53 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty::
# 54 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 27 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 55 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	removeobject LOCALID_EEVEE_POKEBALL
# 56 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 28 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 57 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 58 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 29 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 59 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
# 60 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 30 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 61 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 62 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 63 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitfanfare
# 64 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 32 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 65 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 66 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 33 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 67 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 68 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 34 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 69 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 70 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty_2
# 71 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty_1:
# 72 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 37 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 73 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 74 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 75 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 76 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 39 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 77 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
# 78 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 79 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 80 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty_2:
# 81 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 35 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 82 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
# 83 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty_1
# 84 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 85 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 86 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC::
# 87 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 44 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 88 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	removeobject LOCALID_EEVEE_POKEBALL
# 89 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 45 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 90 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 91 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 46 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 92 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
# 93 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 47 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 94 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 95 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 48 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 96 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitfanfare
# 97 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 49 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 98 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 99 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 50 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 100 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 101 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 51 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 102 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 103 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC_2
# 104 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC_1:
# 105 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 54 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 106 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 107 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 55 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 108 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
# 109 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 110 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 111 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC_2:
# 112 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 52 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 113 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
# 114 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC_1
# 115 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 116 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 117 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC::
# 118 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 60 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 119 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 120 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 61 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 121 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
# 122 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 123 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 124 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 125 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee::
# 126 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 66 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 127 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setflag FLAG_GOT_EEVEE
# 128 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 67 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 129 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	release
# 130 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 131 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 132 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 133 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_TMsPamphlet::
# 134 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 72 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 135 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs, MSGBOX_SIGN
# 136 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 137 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 138 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 139 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard::
# 140 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 77 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 141 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	lockall
# 142 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 78 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 143 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture
# 144 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 79 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 145 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
# 146 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 80 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 147 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 148 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 81 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 149 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 150 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 82 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 151 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_LINKED_DIRECT_UNION, FALSE
# 152 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 83 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 153 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 154 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 84 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 155 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 0, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_3
# 156 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 86 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 157 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 1, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_4
# 158 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 88 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 159 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 2, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_5
# 160 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 90 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 161 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 3, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_6
# 162 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 92 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 163 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 127, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_7
# 164 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1:
# 165 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 166 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 167 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_3:
# 168 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 85 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 169 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
# 170 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1
# 171 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 172 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_4:
# 173 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 87 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 174 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
# 175 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1
# 176 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 177 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_5:
# 178 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 89 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 179 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
# 180 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1
# 181 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 182 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_6:
# 183 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 91 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 184 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 185 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1
# 186 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 187 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_7:
# 188 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 93 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 189 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 190 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard_1
# 191 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 192 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 193 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading::
# 194 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 99 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 195 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
# 196 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 100 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 197 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 198 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 101 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 199 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_LINKED_DIRECT_UNION, FALSE
# 200 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 102 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 201 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 202 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 103 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 203 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 0, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_3
# 204 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 105 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 205 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 1, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_4
# 206 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 107 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 207 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 2, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_5
# 208 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 109 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 209 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 3, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_6
# 210 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 111 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 211 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 127, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_7
# 212 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1:
# 213 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 214 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 215 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_3:
# 216 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 104 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 217 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
# 218 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1
# 219 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 220 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_4:
# 221 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 106 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 222 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
# 223 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1
# 224 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 225 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_5:
# 226 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 108 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 227 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
# 228 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1
# 229 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 230 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_6:
# 231 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 110 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 232 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 233 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1
# 234 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 235 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_7:
# 236 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 112 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 237 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 238 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1
# 239 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 240 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 241 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub::
# 242 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 118 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 243 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub
# 244 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 119 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 245 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
# 246 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 247 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 248 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 249 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner::
# 250 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 124 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 251 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner
# 252 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 125 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 253 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
# 254 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 255 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 256 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 257 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom::
# 258 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 130 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 259 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom
# 260 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 131 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 261 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
# 262 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 263 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 264 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 265 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard::
# 266 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 136 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 267 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	releaseall
# 268 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 269 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 270 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 271 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow::
# 272 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 140 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 273 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "There is nothing that I don't know,\n"
# 274 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "like I wrote on the blackboard.\p"
# 275 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "I know about the world of POKéMON\n"
# 276 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "in your GAME BOY ADVANCE!\p"
# 277 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Get together with your friends and\n"
# 278 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "enjoy trading POKéMON!$"
# 279 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 280 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee::
# 281 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 149 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 282 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "{PLAYER} obtained an EEVEE!$"
# 283 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 284 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_BoxIsFull::
# 285 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 153 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 286 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "ポケモンが　いっぱいだ\n"
# 287 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "ボックスを　かえて　きなさい$"
# 288 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 289 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture::
# 290 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 158 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 291 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "POKéMON Lecture\p"
# 292 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Playing with the Wireless Adapter$"
# 293 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 294 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading::
# 295 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 163 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 296 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Which heading do you want to read?$"
# 297 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 298 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub::
# 299 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 167 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 300 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "The POKéMON WIRELESS CLUB is\n"
# 301 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "upstairs at any POKéMON CENTER.\p"
# 302 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Visit one to link up with friend(s)\n"
# 303 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "using your Wireless Adapter.$"
# 304 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 305 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner::
# 306 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 174 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 307 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "To link only with a friend, go to\n"
# 308 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "the DIRECT CORNER.\p"
# 309 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "It is the right counter at the\n"
# 310 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "POKéMON WIRELESS CLUB.\p"
# 311 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Go into the TRADE CORNER or the\n"
# 312 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "COLOSSEUM with your friend.$"
# 313 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 314 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom::
# 315 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 183 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 316 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "To link and communicate with\n"
# 317 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "anyone, go to the UNION ROOM.\p"
# 318 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "It is the left counter at the\n"
# 319 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "POKéMON WIRELESS CLUB.\p"
# 320 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Go to the UNION ROOM and enjoy\n"
# 321 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "meeting other TRAINERS.$"
# 322 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 323 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs::
# 324 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 192 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
# 325 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "It's a pamphlet on TMs.\p"
# 326 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "… …\p"
# 327 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "There are fifty TMs in all.\p"
# 328 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "There are also seven HMs that\n"
# 329 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "can be used repeatedly.\p"
# 330 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "SILPH CO.$"
