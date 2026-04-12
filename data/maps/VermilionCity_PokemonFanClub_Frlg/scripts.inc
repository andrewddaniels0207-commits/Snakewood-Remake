# 1 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 5 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 6 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Chairman::
# 7 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 4 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 8 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 9 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 5 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 10 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 6 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 12 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BIKE_VOUCHER, VermilionCity_PokemonFanClub_EventScript_Chairman_2
# 13 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Chairman_1:
# 14 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 9 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 15 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons, MSGBOX_YESNO
# 16 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 10 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 17 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 18 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_eq VermilionCity_PokemonFanClub_EventScript_Chairman_5
# 19 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Chairman_4:
# 20 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 13 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 21 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ComeBackToHearStory
# 22 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 14 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 23 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 24 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 25 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 26 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Chairman_2:
# 27 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 7 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 28 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory
# 29 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_Chairman_1
# 30 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 31 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Chairman_5:
# 32 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 11 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 33 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_ChairmanStory
# 34 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_Chairman_4
# 35 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 36 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 37 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory::
# 38 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 19 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 39 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain
# 40 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 20 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 41 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 42 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 43 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 44 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 45 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_ChairmanStory::
# 46 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 25 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 47 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmansStory
# 48 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 26 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 49 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	checkitemspace ITEM_BIKE_VOUCHER
# 50 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 27 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 51 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 52 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_eq VermilionCity_PokemonFanClub_EventScript_ChairmanStory_2
# 53 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_ChairmanStory_1:
# 54 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 30 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 55 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	setflag FLAG_GOT_BIKE_VOUCHER
# 56 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 31 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 57 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	giveitem_msg VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman, ITEM_BIKE_VOUCHER, 1, MUS_RG_OBTAIN_KEY_ITEM
# 58 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 32 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 59 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher
# 60 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 33 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 61 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 62 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 63 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 64 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_ChairmanStory_2:
# 65 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 28 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 66 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher
# 67 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_ChairmanStory_1
# 68 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 69 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 70 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher::
# 71 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 38 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 72 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_MakeRoomForThis
# 73 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 39 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 74 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 75 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 76 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 77 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 78 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_WorkerF::
# 79 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 44 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 80 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 81 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 45 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 82 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 83 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 46 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 84 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, VermilionCity_PokemonFanClub_EventScript_WorkerF_2
# 85 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_WorkerF_1:
# 86 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 49 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 87 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon
# 88 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 50 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 89 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 90 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 91 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 92 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_WorkerF_2:
# 93 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 47 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 94 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear
# 95 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_WorkerF_1
# 96 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 97 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 98 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear::
# 99 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 55 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 100 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 1
# 101 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 56 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 102 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons
# 103 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 57 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 104 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 105 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 106 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 107 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 108 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Woman::
# 109 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 62 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 110 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 111 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 63 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 112 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 113 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 64 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 114 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set SPOKE_TO_FAT_MAN_LAST, VermilionCity_PokemonFanClub_EventScript_Woman_2
# 115 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Woman_1:
# 116 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 67 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 117 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_AdoreMySeel
# 118 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 68 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 119 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 120 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 69 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 121 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
# 122 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 70 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 123 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 124 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 71 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 125 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	setflag SPOKE_TO_WOMAN_LAST
# 126 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 72 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 127 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 128 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 129 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 130 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Woman_2:
# 131 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 65 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 132 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan
# 133 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_Woman_1
# 134 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 135 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 136 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan::
# 137 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 77 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 138 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive
# 139 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 78 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 140 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 141 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 79 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 142 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
# 143 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 80 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 144 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 145 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 81 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 146 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	clearflag SPOKE_TO_FAT_MAN_LAST
# 147 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 82 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 148 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 149 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 150 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 151 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 152 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_FatMan::
# 153 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 87 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 154 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 155 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 88 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 156 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 157 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 89 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 158 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set SPOKE_TO_WOMAN_LAST, VermilionCity_PokemonFanClub_EventScript_FatMan_2
# 159 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_FatMan_1:
# 160 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 92 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 161 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_AdmirePikachusTail
# 162 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 93 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 163 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 164 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 94 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 165 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
# 166 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 95 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 167 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 168 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 96 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 169 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	setflag SPOKE_TO_FAT_MAN_LAST
# 170 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 97 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 171 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 172 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 173 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 174 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_FatMan_2:
# 175 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 90 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 176 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman
# 177 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto VermilionCity_PokemonFanClub_EventScript_FatMan_1
# 178 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 179 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 180 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman::
# 181 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 102 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 182 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute
# 183 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 103 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 184 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 185 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 104 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 186 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
# 187 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 105 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 188 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 189 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 106 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 190 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	clearflag SPOKE_TO_WOMAN_LAST
# 191 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 107 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 192 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 193 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 194 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 195 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 196 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Pikachu::
# 197 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 112 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 198 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 199 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 113 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 200 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 201 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 114 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 202 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitse
# 203 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 115 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 204 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 205 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 116 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 206 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_Pikachu
# 207 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 117 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 208 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmoncry
# 209 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 118 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 210 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 211 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 212 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 213 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 214 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Seel::
# 215 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 123 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 216 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 217 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 124 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 218 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 219 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 125 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 220 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitse
# 221 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 126 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 222 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	playmoncry SPECIES_SEEL, CRY_MODE_NORMAL
# 223 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 127 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 224 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_Seel
# 225 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 128 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 226 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmoncry
# 227 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 129 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 228 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 229 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 230 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 231 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 232 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_RulesSign1::
# 233 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 134 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 234 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers, MSGBOX_SIGN
# 235 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 236 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 237 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 238 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_RulesSign2::
# 239 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 139 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 240 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack, MSGBOX_SIGN
# 241 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 242 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 243 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 244 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_AdmirePikachusTail::
# 245 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 143 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 246 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Won't you admire my PIKACHU's\n"
# 247 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "adorable tail?$"
# 248 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 249 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute::
# 250 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 148 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 251 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Humph!\p"
# 252 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "My PIKACHU is twice as cute as\n"
# 253 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "that one!$"
# 254 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 255 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_AdoreMySeel::
# 256 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 154 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 257 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I just adore my SEEL!\n"
# 258 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "It's so lovable!\p"
# 259 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "It squeals, “Kyuuuh,” when I\n"
# 260 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "hug it!$"
# 261 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 262 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive::
# 263 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 161 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 264 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Oh, dear!\p"
# 265 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "My SEEL is far more attractive.\n"
# 266 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "By double, I would say.$"
# 267 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 268 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_Pikachu::
# 269 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 167 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 270 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "PIKACHU: Chu! Pikachu!$"
# 271 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 272 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_Seel::
# 273 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 171 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 274 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "SEEL: Kyuoo!$"
# 275 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 276 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons::
# 277 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 175 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 278 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I chair the POKéMON Fan Club!\p"
# 279 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I raise more than a hundred\n"
# 280 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON!\p"
# 281 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I'm very fussy when it comes to\n"
# 282 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON! I surely am!\p"
# 283 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "So…\p"
# 284 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Did you come visit to hear about\n"
# 285 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "my POKéMON?$"
# 286 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 287 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ChairmansStory::
# 288 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 186 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 289 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Good!\n"
# 290 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Then listen up!\p"
# 291 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "My favorite RAPIDASH…\p"
# 292 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "It's…cute…lovely…smart… \n"
# 293 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "plus…amazing…you think so?…\l"
# 294 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "oh yes…it's…stunning…\l"
# 295 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "kindly…love it!\p"
# 296 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Hug it…when…sleeping…warm\n"
# 297 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "and cuddly…spectacular…\l"
# 298 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "ravishing…\l"
# 299 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "…Oops! Look at the time!\l"
# 300 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I kept you too long!\p"
# 301 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Thanks for hearing me out!\n"
# 302 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I want you to have this!$"
# 303 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 304 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman::
# 305 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 203 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 306 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "{PLAYER} received a BIKE VOUCHER\n"
# 307 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "from the CHAIRMAN.$"
# 308 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 309 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher::
# 310 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 208 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 311 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Take that BIKE VOUCHER to the\n"
# 312 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "BIKE SHOP in CERULEAN CITY.\p"
# 313 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Exchange that for a BICYCLE\n"
# 314 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "free of charge!\p"
# 315 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Don't worry, my favorite FEAROW\n"
# 316 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "will FLY me anywhere I need to go.\p"
# 317 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "So, I have no need for a BICYCLE.\p"
# 318 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I hope you like cycling!$"
# 319 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 320 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ComeBackToHearStory::
# 321 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 219 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 322 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Oh. Come back when you want to\n"
# 323 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "hear my story!$"
# 324 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 325 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain::
# 326 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 224 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 327 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Hello, {PLAYER}!\p"
# 328 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Did you come see me about my\n"
# 329 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON again?\p"
# 330 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "No?\n"
# 331 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Too bad!$"
# 332 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 333 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_MakeRoomForThis::
# 334 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 232 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 335 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Make room for this!$"
# 336 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 337 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon::
# 338 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 236 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 339 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Our CHAIRMAN is very vocal about\n"
# 340 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON.$"
# 341 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 342 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers::
# 343 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 241 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 344 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Let's all listen politely to other\n"
# 345 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "TRAINERS!$"
# 346 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 347 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack::
# 348 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 246 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 349 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "If someone brags, brag right back!$"
# 350 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 351 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons::
# 352 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 250 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
# 353 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Our CHAIRMAN really does adore his\n"
# 354 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 355 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "But the person who is most liked by\n"
# 356 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON is DAISY, I think.$"
