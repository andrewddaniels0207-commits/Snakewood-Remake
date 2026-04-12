# 1 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 5 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 6 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Selphy::
# 7 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 8 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	lock
# 9 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 5 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 10 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 6 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 12 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_set SHOWN_REQUESTED_MON, FiveIsland_ResortGorgeous_House_EventScript_Selphy_2
# 13 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Selphy_1:
# 14 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 9 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 15 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_RESORT_GORGEOUS_REQUESTED_MON, 0xFFFF
# 16 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_eq FiveIsland_ResortGorgeous_House_EventScript_Selphy_5
# 17 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Selphy_4:
# 18 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 12 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 19 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
# 20 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_ne FiveIsland_ResortGorgeous_House_EventScript_Selphy_8
# 21 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Selphy_7:
# 22 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 15 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 23 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish
# 24 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 16 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 25 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
# 26 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 27 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 28 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Selphy_2:
# 29 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 7 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 30 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest
# 31 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_Selphy_1
# 32 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 33 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Selphy_5:
# 34 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 10 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 35 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong
# 36 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_Selphy_4
# 37 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 38 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Selphy_8:
# 39 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 13 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 40 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon
# 41 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_Selphy_7
# 42 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 43 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 44 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_RequestMon::
# 45 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 21 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 46 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	special SampleResortGorgeousMonAndReward
# 47 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 22 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 48 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease
# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 23 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 50 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	release
# 51 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 52 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 53 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 54 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong::
# 55 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 28 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 56 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting
# 57 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 29 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 58 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
# 59 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 60 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 61 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 62 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon::
# 63 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 34 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 64 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESORT_GORGEOUS_REQUESTED_MON
# 65 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 35 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 66 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 67 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 36 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 68 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 69 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_eq FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon_2
# 70 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon_1:
# 71 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 39 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 72 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
# 73 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 74 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 75 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon_2:
# 76 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 37 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 77 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon
# 78 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon_1
# 79 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 80 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 81 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon::
# 82 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 44 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 83 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	special SampleResortGorgeousMonAndReward
# 84 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 45 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 85 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou
# 86 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 46 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 87 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	addobject LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
# 88 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 47 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 89 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerEnter
# 90 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 48 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 91 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 92 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 93 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 94 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 50 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 95 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady
# 96 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 51 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 97 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterUp
# 98 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 52 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 99 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 100 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 53 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 101 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 102 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 54 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 103 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation
# 104 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 55 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 105 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 106 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 56 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 107 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid
# 108 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 57 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 109 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	closemessage
# 110 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 58 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 111 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 112 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_eq FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_2
# 113 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_1:
# 114 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 61 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 115 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 116 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_eq FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_5
# 117 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_4:
# 118 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 64 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 119 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 120 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_eq FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_8
# 121 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_7:
# 122 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 67 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 123 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 124 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_eq FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_11
# 125 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_10:
# 126 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 70 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 127 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
# 128 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 71 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 129 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks
# 130 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 72 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 131 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	giveitem VAR_RESORT_GORGEOUS_REWARD
# 132 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 73 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 133 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 134 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_eq FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_14
# 135 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_13:
# 136 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 76 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 137 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setflag SHOWN_REQUESTED_MON
# 138 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 77 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 139 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
# 140 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 78 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 141 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	release
# 142 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 143 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 144 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_2:
# 145 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 59 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 146 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	call FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth
# 147 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_1
# 148 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 149 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_5:
# 150 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 62 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 151 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	call FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth
# 152 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_4
# 153 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 154 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_8:
# 155 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 65 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 156 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	call FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast
# 157 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_7
# 158 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 159 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_11:
# 160 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 68 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 161 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	call FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest
# 162 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_10
# 163 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 164 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_14:
# 165 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 74 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 166 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward
# 167 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_13
# 168 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 169 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 170 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth::
# 171 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 83 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 172 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterDown
# 173 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 84 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 174 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth
# 175 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 85 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 176 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 177 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 86 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 178 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 179 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 87 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 180 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 181 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	return
# 182 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 183 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 184 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth::
# 185 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 92 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 186 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth
# 187 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 93 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 188 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 189 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 94 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 190 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 191 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 95 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 192 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 193 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	return
# 194 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 195 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 196 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast::
# 197 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 100 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 198 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterLeft
# 199 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 101 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 200 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast
# 201 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 102 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 202 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 203 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 103 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 204 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 205 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 104 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 206 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 207 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	return
# 208 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 209 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 210 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest::
# 211 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 109 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 212 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest
# 213 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 110 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 214 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 215 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	return
# 216 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 217 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 218 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward::
# 219 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 115 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 220 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 221 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 116 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 222 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull
# 223 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 117 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 224 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 225 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 118 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 226 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing
# 227 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 119 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 228 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setflag SHOWN_REQUESTED_MON
# 229 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 120 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 230 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
# 231 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 121 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 232 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	release
# 233 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 234 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 235 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 236 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest::
# 237 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 126 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 238 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck
# 239 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 127 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 240 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	release
# 241 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 242 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 243 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 244 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 131 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 245 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth:
# 246 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 132 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 247 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 248 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 133 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 249 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 250 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 134 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 251 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 252 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 135 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 253 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
# 254 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 136 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 255 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
# 256 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 137 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 257 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
# 258 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 138 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 259 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_in_place_faster_right
# 260 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 139 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 261 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_end
# 262 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 263 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 142 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 264 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth:
# 265 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 143 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 266 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 267 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 144 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 268 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 269 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 145 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 270 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_in_place_faster_down
# 271 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 146 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 272 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_end
# 273 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 274 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 149 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 275 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast:
# 276 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 150 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 277 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 278 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 151 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 279 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 280 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 152 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 281 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 282 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 153 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 283 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
# 284 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 154 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 285 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_end
# 286 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 287 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 157 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 288 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest:
# 289 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 158 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 290 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_up
# 291 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 159 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 292 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_end
# 293 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 294 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 162 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 295 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerEnter:
# 296 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 163 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 297 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_in_place_down
# 298 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 164 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 299 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_end
# 300 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 301 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Butler::
# 302 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 168 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 303 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun, MSGBOX_NPC
# 304 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 305 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 306 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 307 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish::
# 308 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 172 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 309 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: Oh?\n"
# 310 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Do I know you from somewhere?\p"
# 311 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Oh, but that doesn't matter.\p"
# 312 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I am exquisitely bored.\n"
# 313 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Please, hear my wish.$"
# 314 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 315 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease::
# 316 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 180 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 317 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I wish to see a POKéMON.\n"
# 318 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "A darling {STR_VAR_1}.\p"
# 319 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I want to see one right away.\n"
# 320 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Please, make my wish come true.$"
# 321 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 322 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting::
# 323 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 187 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 324 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: Oh, I'm tired of this.\n"
# 325 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I'm tired of waiting for you.\p"
# 326 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I'll forgive you this time, but\n"
# 327 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "please don't fail me next time.$"
# 328 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 329 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou::
# 330 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 194 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 331 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: Oh, hello, there.\p"
# 332 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Oh, my gracious. That must be the\n"
# 333 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "{STR_VAR_1} you caught for me.\p"
# 334 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Giggle…\n"
# 335 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I see a resemblance to you.\p"
# 336 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Thank you so kindly.\p"
# 337 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "… …  … …  … …\n"
# 338 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Is something the matter?\p"
# 339 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "You may leave.\p"
# 340 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "… …  … …  … …\n"
# 341 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Oh, fine. I understand now.\p"
# 342 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SEBASTIAN!\n"
# 343 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I need you here this instant!$"
# 344 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 345 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady::
# 346 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 210 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 347 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: Yes, my lady.$"
# 348 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 349 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation::
# 350 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 214 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 351 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: See to it that this person\n"
# 352 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "is given a token of appreciation.$"
# 353 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 354 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid::
# 355 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 219 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 356 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: I shall do as you bid,\n"
# 357 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "my lady.$"
# 358 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 359 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks::
# 360 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 224 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 361 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: I sincerely thank you for\n"
# 362 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "pleasing Lady SELPHY.\p"
# 363 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Please accept this as her thanks…$"
# 364 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 365 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull::
# 366 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 230 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 367 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: Your BAG appears to be\n"
# 368 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "unfortunately full.$"
# 369 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 370 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing::
# 371 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 235 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 372 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Oh…\n"
# 373 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "How disappointing.$"
# 374 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 375 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck::
# 376 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 240 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 377 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: I wish you the best of\n"
# 378 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "luck.$"
# 379 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 380 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun::
# 381 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 245 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
# 382 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: The smile of Lady SELPHY\n"
# 383 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "has the brilliance of the sun.\p"
# 384 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Please, I beg you to bring joy\n"
# 385 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "to Lady SELPHY.$"
