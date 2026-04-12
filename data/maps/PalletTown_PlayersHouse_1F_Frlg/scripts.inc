# 1 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Frlg_MapScripts::
# 3 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 5 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 6 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom::
# 7 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 4 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 8 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 9 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 5 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 10 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 6 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 12 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_Mom_2
# 13 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom_1:
# 14 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 9 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 15 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	checkplayergender
# 16 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 10 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 17 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 18 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_eq PalletTown_PlayersHouse_1F_EventScript_Mom_5
# 19 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom_4:
# 20 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 13 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 21 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
# 22 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_eq PalletTown_PlayersHouse_1F_EventScript_Mom_8
# 23 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom_7:
# 24 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 16 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 25 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 26 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 17 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 27 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_FaceOriginalDirection
# 28 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 18 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 29 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 19 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 31 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
# 32 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 33 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 34 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom_2:
# 35 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 7 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 36 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto PalletTown_PlayersHouse_1F_EventScript_MomHeal
# 37 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto PalletTown_PlayersHouse_1F_EventScript_Mom_1
# 38 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 39 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom_5:
# 40 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 11 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 41 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
# 42 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto PalletTown_PlayersHouse_1F_EventScript_Mom_4
# 43 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 44 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom_8:
# 45 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 14 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 46 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
# 47 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto PalletTown_PlayersHouse_1F_EventScript_Mom_7
# 48 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 49 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 50 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 51 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 24 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 52 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
# 53 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 54 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 55 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 56 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 57 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 29 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 58 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
# 59 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 60 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 61 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 62 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomHeal::
# 63 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 34 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 64 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 65 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 35 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 66 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 67 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 36 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 68 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 69 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 37 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 70 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
# 71 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 38 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 72 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
# 73 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 74 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 75 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 76 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV::
# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 43 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 79 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 44 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 80 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 81 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_eq PalletTown_PlayersHouse_1F_EventScript_TV_2
# 82 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV_1:
# 83 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 47 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 84 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 85 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 48 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 86 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
# 87 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 88 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 89 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV_2:
# 90 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 45 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 91 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 92 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto PalletTown_PlayersHouse_1F_EventScript_TV_1
# 93 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 94 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 95 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 96 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 53 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 97 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	checkplayergender
# 98 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 54 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 99 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 100 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_eq PalletTown_PlayersHouse_1F_EventScript_TVScreen_2
# 101 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen_1:
# 102 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 57 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 103 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
# 104 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_eq PalletTown_PlayersHouse_1F_EventScript_TVScreen_5
# 105 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen_4:
# 106 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 60 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 107 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
# 108 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 109 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 110 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen_2:
# 111 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 55 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 112 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 113 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto PalletTown_PlayersHouse_1F_EventScript_TVScreen_1
# 114 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 115 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen_5:
# 116 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 58 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 117 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 118 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto PalletTown_PlayersHouse_1F_EventScript_TVScreen_4
# 119 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 120 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 122 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 65 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 123 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
# 124 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 125 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 126 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 127 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 128 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 70 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 129 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
# 130 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 131 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 132 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 133 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou::
# 134 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 74 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 135 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: …Right.\n"
# 136 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "All boys leave home someday.\l"
# 137 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "It said so on TV.\p"
# 138 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oh, yes. PROF. OAK, next door, was\n"
# 139 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "looking for you.$"
# 140 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 141 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou::
# 142 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 82 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 143 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: …Right.\n"
# 144 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "All girls dream of traveling.\l"
# 145 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "It said so on TV.\p"
# 146 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oh, yes. PROF. OAK, next door, was\n"
# 147 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "looking for you.$"
# 148 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 149 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest::
# 150 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 90 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 151 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: {PLAYER}!\n"
# 152 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "You should take a quick rest.$"
# 153 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 154 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare::
# 155 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 95 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 156 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: Oh, good! You and your\n"
# 157 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "POKéMON are looking great.\l"
# 158 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Take care now!$"
# 159 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 160 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad::
# 161 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 101 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 162 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
# 163 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Four boys are walking on railroad\l"
# 164 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "tracks.\p"
# 165 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "…I better go, too.$"
# 166 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 167 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad::
# 168 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 108 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 169 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
# 170 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "A girl with her hair in pigtails is\l"
# 171 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "walking up a brick road.\p"
# 172 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "…I better go, too.$"
# 173 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 174 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_OopsWrongSide::
# 175 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 115 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
# 176 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oops, wrong side…$"
