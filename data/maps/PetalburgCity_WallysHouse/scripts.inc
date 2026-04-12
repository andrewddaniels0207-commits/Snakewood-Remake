# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts::
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHMSurf
# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp:
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_HOUSE_WALLYS_DAD, DIR_WEST
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_GiveHMSurf::
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_HM_SURF
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_WallysDad_2
# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad_1:
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_WallysDad_5
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad_4:
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_WallysDad_8
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad_7:
# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad_2:
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto PetalburgCity_WallysHouse_EventScript_WallysDad_1
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad_5:
# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto PetalburgCity_WallysHouse_EventScript_WallysDad_4
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad_8:
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto PetalburgCity_WallysHouse_EventScript_PlayedWithWally
# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto PetalburgCity_WallysHouse_EventScript_WallysDad_7
# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf::
# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 96 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 97 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 98 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 101 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 103 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 104 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 107 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 108 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 109 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 110 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 111 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 112 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 113 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 115 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 116 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 117 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 118 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_WallysMom_2
# 119 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom_1:
# 120 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 121 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 122 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 123 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 124 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 125 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 126 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom_2:
# 127 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 128 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf
# 129 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto PetalburgCity_WallysHouse_EventScript_WallysMom_1
# 130 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 131 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 132 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
# 133 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 134 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 135 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 136 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 137 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 138 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 139 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 140 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally::
# 141 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 142 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You're…\n"
# 143 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ah, you must be {PLAYER}{KUN}, right?\p"
# 144 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Thank you for playing with WALLY a\n"
# 145 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "little while ago.\p"
# 146 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's been frail and sickly ever\n"
# 147 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "since he was a baby.\p"
# 148 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "We've sent him to stay with my relatives\n"
# 149 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "in VERDANTURF TOWN for a while.\p"
# 150 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "The air is a lot cleaner there\n"
# 151 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "than it is here.\p"
# 152 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "What's that? Where's WALLY?\n"
# 153 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's already left, our WALLY.\p"
# 154 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder where he could have\n"
# 155 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "gotten by now?$"
# 156 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 157 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing::
# 158 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 159 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder how our WALLY is doing?$"
# 160 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 161 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_PleaseExcuseUs::
# 162 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 163 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}{KUN}! Please excuse us for\n"
# 164 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "dragging you here this way.\p"
# 165 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our WALLY's become very healthy\n"
# 166 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "since he went to VERDANTURF TOWN.\p"
# 167 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "We owe it all to you!\p"
# 168 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "When WALLY left town, you helped\n"
# 169 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "him catch a POKéMON, right?\p"
# 170 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I think that made WALLY really\n"
# 171 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "happy.\p"
# 172 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Actually, not just WALLY.\n"
# 173 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It made me, his father, happy too.\p"
# 174 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Happy that he's gained such a great\n"
# 175 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "friend as you.\p"
# 176 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "This isn't a bribe or anything, but\n"
# 177 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'd really like you to have this.$"
# 178 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 179 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces::
# 180 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 124 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 181 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "If your POKéMON can SURF, you'll be\n"
# 182 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "able to go to all sorts of places.$"
# 183 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 184 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon::
# 185 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 129 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 186 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "WALLY's coming home soon.\n"
# 187 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm looking forward to that.$"
# 188 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 189 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity::
# 190 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 134 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 191 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh? You met WALLY in\n"
# 192 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "EVER GRANDE CITY?\p"
# 193 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh, {PLAYER}{KUN}, don't be silly.\p"
# 194 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He may have gotten healthy, but he\n"
# 195 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "can't go somewhere far away like\l"
# 196 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "that all by himself.$"
# 197 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 198 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy::
# 199 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 143 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 200 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "WALLY was really happy when he told\n"
# 201 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "us that he caught a POKéMON.\p"
# 202 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It's been ages since I've seen him\n"
# 203 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "smile like that.$"
# 204 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 205 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling::
# 206 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 150 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
# 207 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I want you to keep this a secret\n"
# 208 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "from my husband…\p"
# 209 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our WALLY left VERDANTURF TOWN\n"
# 210 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "without telling anyone.\p"
# 211 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You know, WALLY is frail, but\n"
# 212 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "he's surprisingly strong-willed.\p"
# 213 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm sure that he'll come back safe\n"
# 214 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "and sound one day!$"
