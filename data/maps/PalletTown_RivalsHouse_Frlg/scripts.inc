PalletTown_RivalsHouse_Frlg_MapScripts::
# 2 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_OnTransition
	.byte 0


PalletTown_RivalsHouse_OnTransition::
# 6 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	goto_if_lt PalletTown_RivalsHouse_OnTransition_2
PalletTown_RivalsHouse_OnTransition_1:
# 9 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	goto_if_ge PalletTown_RivalsHouse_OnTransition_5
PalletTown_RivalsHouse_OnTransition_4:
	end

PalletTown_RivalsHouse_OnTransition_2:
# 7 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	call PalletTown_RivalsHouse_EventScript_MoveDaisyToTable
	goto PalletTown_RivalsHouse_OnTransition_1

PalletTown_RivalsHouse_OnTransition_5:
# 10 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	call PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap
	goto PalletTown_RivalsHouse_OnTransition_4


PalletTown_RivalsHouse_EventScript_MoveDaisyToTable::
# 16 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_DAISY, MOVEMENT_TYPE_FACE_RIGHT
# 17 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setobjectxyperm LOCALID_DAISY, 5, 4
	return


PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap::
# 22 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setvar RECEIVED_TOWN_MAP, TRUE
	return


PalletTown_RivalsHouse_EventScript_Daisy::
# 27 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	lock
# 28 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 30 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_RivalsHouse_EventScript_Daisy_2
PalletTown_RivalsHouse_EventScript_Daisy_1:
# 33 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare RECEIVED_TOWN_MAP, TRUE
	goto_if_eq PalletTown_RivalsHouse_EventScript_Daisy_5
PalletTown_RivalsHouse_EventScript_Daisy_4:
# 36 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	goto_if_eq PalletTown_RivalsHouse_EventScript_Daisy_8
PalletTown_RivalsHouse_EventScript_Daisy_7:
# 39 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
	goto_if_eq PalletTown_RivalsHouse_EventScript_Daisy_11
PalletTown_RivalsHouse_EventScript_Daisy_10:
# 42 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
	goto_if_ge PalletTown_RivalsHouse_EventScript_Daisy_14
PalletTown_RivalsHouse_EventScript_Daisy_13:
# 45 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HiBrothersAtLab
# 46 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
# 47 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FaceOriginalDirection
# 48 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
# 49 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end

PalletTown_RivalsHouse_EventScript_Daisy_2:
# 31 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_GroomMon
	goto PalletTown_RivalsHouse_EventScript_Daisy_1

PalletTown_RivalsHouse_EventScript_Daisy_5:
# 34 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest
	goto PalletTown_RivalsHouse_EventScript_Daisy_4

PalletTown_RivalsHouse_EventScript_Daisy_8:
# 37 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_ExplainTownMap
	goto PalletTown_RivalsHouse_EventScript_Daisy_7

PalletTown_RivalsHouse_EventScript_Daisy_11:
# 40 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_GiveTownMap
	goto PalletTown_RivalsHouse_EventScript_Daisy_10

PalletTown_RivalsHouse_EventScript_Daisy_14:
# 43 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_HeardBattledRival
	goto PalletTown_RivalsHouse_EventScript_Daisy_13


PalletTown_RivalsHouse_EventScript_HeardBattledRival::
# 54 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HeardYouBattledRival
# 55 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_GroomMon::
# 60 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MASSAGE_COOLDOWN_STEP_COUNTER, 500
	goto_if_lt PalletTown_RivalsHouse_EventScript_GroomMon_2
PalletTown_RivalsHouse_EventScript_GroomMon_1:
# 63 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LikeMeToGroomMon, MSGBOX_YESNO
# 64 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PalletTown_RivalsHouse_EventScript_GroomMon_5
PalletTown_RivalsHouse_EventScript_GroomMon_4:
# 67 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_GroomWhichOne
# 68 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special ChoosePartyMon
# 69 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitstate
# 70 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	lock
# 71 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	faceplayer
# 72 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge PalletTown_RivalsHouse_EventScript_GroomMon_8
PalletTown_RivalsHouse_EventScript_GroomMon_7:
# 75 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 76 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq PalletTown_RivalsHouse_EventScript_GroomMon_11
PalletTown_RivalsHouse_EventScript_GroomMon_10:
# 79 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LookingNiceInNoTime
# 80 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
# 81 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 83 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitfanfare
# 84 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special DaisyMassageServices
# 85 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 86 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special BufferMonNickname
# 87 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDone
# 88 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end

PalletTown_RivalsHouse_EventScript_GroomMon_2:
# 61 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship
	goto PalletTown_RivalsHouse_EventScript_GroomMon_1

PalletTown_RivalsHouse_EventScript_GroomMon_5:
# 65 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_DeclineGrooming
	goto PalletTown_RivalsHouse_EventScript_GroomMon_4

PalletTown_RivalsHouse_EventScript_GroomMon_8:
# 73 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_DeclineGrooming
	goto PalletTown_RivalsHouse_EventScript_GroomMon_7

PalletTown_RivalsHouse_EventScript_GroomMon_11:
# 77 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_CantGroomEgg
	goto PalletTown_RivalsHouse_EventScript_GroomMon_10


PalletTown_RivalsHouse_EventScript_CantGroomEgg::
# 93 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CantGroomAnEgg
# 94 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_DeclineGrooming::
# 99 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontNeedAnyGrooming
# 100 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_RateMonFriendship::
# 105 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_MayISeeFirstMon
# 106 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 107 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 0, PalletTown_RivalsHouse_EventScript_RateMonFriendship_3
# 110 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 1, PalletTown_RivalsHouse_EventScript_RateMonFriendship_4
# 112 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 2, PalletTown_RivalsHouse_EventScript_RateMonFriendship_5
# 114 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 3, PalletTown_RivalsHouse_EventScript_RateMonFriendship_6
# 116 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 4, PalletTown_RivalsHouse_EventScript_RateMonFriendship_7
# 118 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 5, PalletTown_RivalsHouse_EventScript_RateMonFriendship_8
# 120 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 6, PalletTown_RivalsHouse_EventScript_RateMonFriendship_9
PalletTown_RivalsHouse_EventScript_RateMonFriendship_1:
	end

PalletTown_RivalsHouse_EventScript_RateMonFriendship_3:
# 109 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLowest
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_4:
# 111 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLower
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_5:
# 113 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLow
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_6:
# 115 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipMid
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_7:
# 117 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHigh
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_8:
# 119 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHigher
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_9:
# 121 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHighest
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1


PalletTown_RivalsHouse_EventScript_MonFriendshipLowest::
# 127 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch
# 128 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipLower::
# 133 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou
# 134 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipLow::
# 139 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet
# 140 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipMid::
# 145 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsWarmingUpToYou
# 146 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHigh::
# 151 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsQuiteFriendly
# 152 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHigher::
# 157 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItLooksVeryHappy
# 158 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHighest::
# 163 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CouldntLoveYouMore
# 164 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest::
# 169 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_PleaseGiveMonsRest
# 170 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_GiveTownMap::
# 175 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp
# 176 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
# 177 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	checkitemspace ITEM_TOWN_MAP
# 178 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PalletTown_RivalsHouse_EventScript_GiveTownMap_2
PalletTown_RivalsHouse_EventScript_GiveTownMap_1:
# 181 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_WalkInPlaceFasterRight
# 182 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
# 183 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	removeobject LOCALID_TOWN_MAP
# 184 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 185 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	delay 15
# 186 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FacePlayer
# 187 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
# 188 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	delay 12
# 189 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	giveitem_msg PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
# 190 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end

PalletTown_RivalsHouse_EventScript_GiveTownMap_2:
# 179 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_NoRoomForTownMap
	goto PalletTown_RivalsHouse_EventScript_GiveTownMap_1


PalletTown_RivalsHouse_EventScript_NoRoomForTownMap::
# 195 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontHaveSpaceForThis
# 196 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_ExplainTownMap::
# 201 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ExplainTownMap
# 202 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_TownMap::
# 207 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsBigMapOfKanto, MSGBOX_NPC
	end


PalletTown_RivalsHouse_EventScript_Bookshelf::
# 212 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks, MSGBOX_SIGN
	end


PalletTown_RivalsHouse_EventScript_Picture::
# 217 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy, MSGBOX_SIGN
	end


PalletTown_RivalsHouse_Text_HiBrothersAtLab::
# 221 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\p"
	.string "My brother, {RIVAL}, is out at\n"
	.string "Grandpa's LAB.$"

PalletTown_RivalsHouse_Text_HeardYouBattledRival::
# 227 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: {PLAYER}, I heard you had\n"
	.string "a battle against {RIVAL}.\p"
	.string "I wish I'd seen that!$"

PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp::
# 233 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Grandpa asked you to run an\n"
	.string "errand?\p"
	.string "Gee, that's lazy of him.\n"
	.string "Here, this will help you.$"

PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy::
# 240 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{PLAYER} received a TOWN MAP\n"
	.string "from DAISY.$"

PalletTown_RivalsHouse_Text_DontHaveSpaceForThis::
# 245 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You don't have space for this in\n"
	.string "your BAG.$"

PalletTown_RivalsHouse_Text_ExplainTownMap::
# 250 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You can use the TOWN MAP to find\n"
	.string "out where you are, or check the\l"
	.string "names of places.$"

PalletTown_RivalsHouse_Text_PleaseGiveMonsRest::
# 256 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Just like people, POKéMON\n"
	.string "are living things.\p"
	.string "When they get tired, please give\n"
	.string "them a rest.$"

PalletTown_RivalsHouse_Text_ItsBigMapOfKanto::
# 263 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's a big map of the KANTO region.\n"
	.string "Now this would be useful!$"

PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks::
# 268 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "The shelves are crammed full of\n"
	.string "books on POKéMON.$"

PalletTown_RivalsHouse_Text_LikeMeToGroomMon::
# 273 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\n"
	.string "Good timing.\p"
	.string "I'm about to have some tea.\n"
	.string "Would you like to join me?\p"
	.string "Oh, but look.\n"
	.string "Your POKéMON are a little dirty.\p"
	.string "Would you like me to groom one?$"

PalletTown_RivalsHouse_Text_DontNeedAnyGrooming::
# 283 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You don't need any grooming done?\n"
	.string "Okay, we'll just have tea.$"

PalletTown_RivalsHouse_Text_GroomWhichOne::
# 288 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Which one should I groom?$"

PalletTown_RivalsHouse_Text_LookingNiceInNoTime::
# 292 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Okay, I'll get it looking\n"
	.string "nice in no time.$"

PalletTown_RivalsHouse_Text_ThereYouGoAllDone::
# 297 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{COLOR DARK_GRAY}{STR_VAR_1} looks dreamily content…\p"
	.string "{COLOR RED}DAISY: There you go! All done.\n"
	.string "{FONT_NORMAL}{STR_VAR_1} looks dreamily content…\p"
	.string "{FONT_FEMALE}DAISY: There you go! All done.\n"
	.string "See? Doesn't it look nice?\p"
	.string "Giggle…\n"
	.string "It's such a cute POKéMON.$"

PalletTown_RivalsHouse_Text_CantGroomAnEgg::
# 307 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Oh, sorry. I honestly can't\n"
	.string "groom an EGG.$"

PalletTown_RivalsHouse_Text_MayISeeFirstMon::
# 312 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Your POKéMON grow to love\n"
	.string "you if you raise them with love.\p"
	.string "For example, {PLAYER}, may I see\n"
	.string "your first POKéMON?$"

PalletTown_RivalsHouse_Text_CouldntLoveYouMore::
# 319 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It couldn't possibly love you\n"
	.string "any more than it does now.\p"
	.string "Your POKéMON is happy beyond\n"
	.string "words.$"

PalletTown_RivalsHouse_Text_ItLooksVeryHappy::
# 326 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It looks very happy.\p"
	.string "I wish {RIVAL} could see this and\n"
	.string "learn something from it.$"

PalletTown_RivalsHouse_Text_ItsQuiteFriendly::
# 332 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's quite friendly with you.\n"
	.string "Keep being good to it!$"

PalletTown_RivalsHouse_Text_ItsWarmingUpToYou::
# 337 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's warming up to you.\n"
	.string "Trust must be growing between you.$"

PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet::
# 342 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's not quite familiar with you\n"
	.string "yet.\p"
	.string "POKéMON are all quite wary when\n"
	.string "you first get them.$"

PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou::
# 349 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{PLAYER}, I don't like the way it\n"
	.string "glares at you.\p"
	.string "Could you try being a little nicer\n"
	.string "to it?$"

PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch::
# 356 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "…Um, it's not easy for me to say\n"
	.string "this, but…\p"
	.string "Is there some reason why your\n"
	.string "POKéMON would hate you so much?$"

PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy::
# 363 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "“The lovely and sweet\n"
	.string "CLEFAIRY”$"
