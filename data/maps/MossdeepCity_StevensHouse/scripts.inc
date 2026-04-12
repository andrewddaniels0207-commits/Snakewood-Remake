MossdeepCity_StevensHouse_MapScripts::
# 2 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_StevensHouse_OnLoad
# 3 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_StevensHouse_OnTransition
# 4 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script_2 VAR_STEVENS_HOUSE_STATE, 1, MossdeepCity_StevensHouse_EventScript_StevenGivesDive
	.2byte 0


MossdeepCity_StevensHouse_OnLoad::
# 10 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_StevensHouse_OnLoad_2
MossdeepCity_StevensHouse_OnLoad_1:
	end

MossdeepCity_StevensHouse_OnLoad_2:
# 11 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_HideStevensNote
	goto MossdeepCity_StevensHouse_OnLoad_1


MossdeepCity_StevensHouse_EventScript_HideStevensNote::
# 17 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setmetatile 6, 4, METATILE_GenericBuilding_TableEdge, TRUE
	return


MossdeepCity_StevensHouse_OnTransition::
# 22 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_STEVENS_HOUSE_STATE, 2
	goto_if_eq MossdeepCity_StevensHouse_OnTransition_2
MossdeepCity_StevensHouse_OnTransition_1:
	end

MossdeepCity_StevensHouse_OnTransition_2:
# 23 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_SetStevenPos
	goto MossdeepCity_StevensHouse_OnTransition_1


MossdeepCity_StevensHouse_EventScript_SetStevenPos::
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectxyperm LOCALID_STEVENS_HOUSE_STEVEN, 6, 5
# 30 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectmovementtype LOCALID_STEVENS_HOUSE_STEVEN, MOVEMENT_TYPE_FACE_UP
	return


MossdeepCity_StevensHouse_EventScript_StevenGivesDive::
# 35 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 36 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 37 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playse SE_PIN
# 39 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_ExclamationMark
# 40 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 41 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_Delay48
# 42 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 43 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, MossdeepCity_StevensHouse_Movement_StevenApproachPlayer
# 44 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 45 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_YouveEarnedHMDive, MSGBOX_DEFAULT
# 46 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	giveitem ITEM_HM_DIVE
# 47 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 48 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 49 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_ExplainDive, MSGBOX_DEFAULT
# 50 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	closemessage
# 51 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	delay 20
# 52 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, MossdeepCity_StevensHouse_Movement_StevenReturn
# 53 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 54 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 55 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
# 56 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 57 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
	end


# 61 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenApproachPlayer:
# 62 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 63 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 64 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 65 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 66 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 67 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 68 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_down
# 69 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end

# 72 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenReturn:
# 73 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_up
# 74 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 75 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 76 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 77 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_up
# 78 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end

MossdeepCity_StevensHouse_EventScript_BeldumPokeball::
# 82 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 83 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum, MSGBOX_YESNO
# 84 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_StevensHouse_EventScript_BeldumPokeball_2
MossdeepCity_StevensHouse_EventScript_BeldumPokeball_1:
# 87 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum
	end

MossdeepCity_StevensHouse_EventScript_BeldumPokeball_2:
# 85 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_LeaveBeldum
	goto MossdeepCity_StevensHouse_EventScript_BeldumPokeball_1


MossdeepCity_StevensHouse_EventScript_LeaveBeldum::
# 92 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
# 93 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
	end


MossdeepCity_StevensHouse_EventScript_GiveBeldum::
# 98 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BELDUM
# 99 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	givemon SPECIES_BELDUM, 5
# 100 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MossdeepCity_StevensHouse_EventScript_GiveBeldum_2
MossdeepCity_StevensHouse_EventScript_GiveBeldum_1:
# 103 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MossdeepCity_StevensHouse_EventScript_GiveBeldum_5
MossdeepCity_StevensHouse_EventScript_GiveBeldum_4:
# 106 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

MossdeepCity_StevensHouse_EventScript_GiveBeldum_2:
# 101 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_SendBeldumParty
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum_1

MossdeepCity_StevensHouse_EventScript_GiveBeldum_5:
# 104 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_SendBeldumPC
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum_4


MossdeepCity_StevensHouse_EventScript_SendBeldumParty::
# 111 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 112 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 113 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_StevensHouse_EventScript_SendBeldumParty_2
MossdeepCity_StevensHouse_EventScript_SendBeldumParty_1:
# 116 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 117 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 118 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
	end

MossdeepCity_StevensHouse_EventScript_SendBeldumParty_2:
# 114 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
	goto MossdeepCity_StevensHouse_EventScript_SendBeldumParty_1


MossdeepCity_StevensHouse_EventScript_SendBeldumPC::
# 123 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 124 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 125 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_StevensHouse_EventScript_SendBeldumPC_2
MossdeepCity_StevensHouse_EventScript_SendBeldumPC_1:
# 128 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 129 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
	end

MossdeepCity_StevensHouse_EventScript_SendBeldumPC_2:
# 126 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
	goto MossdeepCity_StevensHouse_EventScript_SendBeldumPC_1


MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC::
# 134 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 135 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
	end


MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare::
# 140 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BELDUM
# 141 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removeobject LOCALID_STEVENS_HOUSE_BALL
# 142 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 143 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	message MossdeepCity_StevensHouse_Text_ObtainedBeldum
# 144 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmessage
# 145 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitfanfare
# 146 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
	return


MossdeepCity_StevensHouse_EventScript_ReceivedBeldum::
# 151 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
# 152 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 153 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
	end


MossdeepCity_StevensHouse_EventScript_RockDisplay::
# 158 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_CollectionOfRareRocks, MSGBOX_SIGN
	end


MossdeepCity_StevensHouse_EventScript_Steven::
# 163 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis, MSGBOX_NPC
	end


MossdeepCity_StevensHouse_EventScript_Letter::
# 168 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 169 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LetterFromSteven, MSGBOX_DEFAULT
# 170 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
	end


MossdeepCity_StevensHouse_EventScript_DiveItemBall::
# 175 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	finditem ITEM_HM_DIVE
# 176 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
	end


MossdeepCity_StevensHouse_Text_YouveEarnedHMDive::
# 180 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
	.string "As you can see, there's not much here,\n"
	.string "but this is my home.\p"
	.string "Thank you for all that you've done.\p"
	.string "This is my token of appreciation.\n"
	.string "It's the HIDDEN MACHINE DIVE.\p"
	.string "No need to be shy--you've earned\n"
	.string "this HM.$"

MossdeepCity_StevensHouse_Text_ExplainDive::
# 191 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: While you're using SURF, you\n"
	.string "should notice dark patches of water.\p"
	.string "Use DIVE if you come to deep water\n"
	.string "like it. You'll drop to the seafloor.\p"
	.string "When you want to come back up, use\n"
	.string "DIVE again.\p"
	.string "In some places, it won't be possible\n"
	.string "for you to surface, though.$"

MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis::
# 202 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: Apparently, there's an\n"
	.string "underwater cavern between\l"
	.string "MOSSDEEP and SOOTOPOLIS.\p"
	.string "You know, the one that CAPT. STERN\n"
	.string "found in his submarine.$"

MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum::
# 210 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p"
	.string "It contained the POKéMON\n"
	.string "BELDUM.\p"
	.string "Take the POKé BALL?$"

MossdeepCity_StevensHouse_Text_ObtainedBeldum::
# 217 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} obtained a BELDUM.$"

MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon::
# 221 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "There is no space for another POKéMON.$"

MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas::
# 225 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} left the POKé BALL where\n"
	.string "it was.$"

MossdeepCity_StevensHouse_Text_LetterFromSteven::
# 230 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a letter.\p"
	.string "… … … … … …\p"
	.string "To {PLAYER}{KUN}…\p"
	.string "I've decided to do a little soul-\n"
	.string "searching and train on the road.\p"
	.string "I don't plan to return home for some\n"
	.string "time.\p"
	.string "I have a favor to ask of you.\p"
	.string "I want you to take the POKé BALL on\n"
	.string "the desk.\p"
	.string "Inside it is a BELDUM, my favorite\n"
	.string "POKéMON.\p"
	.string "I'm counting on you.\p"
	.string "May our paths cross someday.\p"
	.string "STEVEN STONE$"

MossdeepCity_StevensHouse_Text_CollectionOfRareRocks::
# 248 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a collection of rare rocks and\n"
	.string "stones assembled by STEVEN.$"
