# 1 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 2 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Frlg_MapScripts::
# 3 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 5 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 6 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_LittleBoy::
# 7 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 4 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 8 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend, MSGBOX_NPC
# 9 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 10 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 11 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 12 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_LittleGirl::
# 13 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 9 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 14 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes, MSGBOX_NPC
# 15 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 16 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 17 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 18 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_LeftBinoculars::
# 19 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 14 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 20 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore, MSGBOX_SIGN
# 21 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 22 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 23 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 24 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_RightBinoculars::
# 25 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 19 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 26 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_LongPathOverWater, MSGBOX_SIGN
# 27 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 28 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 29 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 30 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_Aide::
# 31 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 24 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 32 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	lock
# 33 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 25 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 34 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	faceplayer
# 35 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 26 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 36 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
# 37 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 27 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 38 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE, Route16_NorthEntrance_2F_EventScript_Aide_2
# 39 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_Aide_1:
# 40 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 30 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 41 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40, MSGBOX_YESNO
# 42 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 31 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 43 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 44 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_eq Route16_NorthEntrance_2F_EventScript_Aide_5
# 45 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_Aide_4:
# 46 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 34 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 47 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 48 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 35 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 49 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 50 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 36 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 51 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 52 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 37 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 53 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
# 54 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 38 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 55 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	compare VAR_0x8006, REQUIRED_CAUGHT_MONS
# 56 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_lt Route16_NorthEntrance_2F_EventScript_Aide_8
# 57 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_Aide_7:
# 58 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 41 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 59 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_GreatHereYouGo
# 60 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 42 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 61 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	checkitemspace ITEM_AMULET_COIN
# 62 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 43 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 63 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 64 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_eq Route16_NorthEntrance_2F_EventScript_Aide_11
# 65 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_Aide_10:
# 66 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 46 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 67 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route16_NorthEntrance_2F_Text_ReceivedAmuletCoinFromAide, ITEM_AMULET_COIN
# 68 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 47 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 69 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE
# 70 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 48 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 71 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
# 72 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 49 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 73 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	release
# 74 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 75 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 76 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_Aide_2:
# 77 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 28 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 78 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_2F_EventScript_AlreadyGotAmuletCoin
# 79 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_2F_EventScript_Aide_1
# 80 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 81 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_Aide_5:
# 82 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 32 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 83 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_DeclineCheckMons
# 84 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_2F_EventScript_Aide_4
# 85 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 86 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_Aide_8:
# 87 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 39 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 88 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_HaventCaughtEnough
# 89 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_2F_EventScript_Aide_7
# 90 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 91 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_Aide_11:
# 92 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 44 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 93 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_NoRoomForItem
# 94 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_2F_EventScript_Aide_10
# 95 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 96 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 97 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_AlreadyGotAmuletCoin::
# 98 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 54 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 99 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
# 100 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 55 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 101 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	release
# 102 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 103 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 104 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 105 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo::
# 106 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 60 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 107 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
# 108 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 61 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 109 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_AMULET_COIN
# 110 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	return
# 111 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 112 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 113 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend::
# 114 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 65 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 115 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "I'm on a relaxing ride on my new\n"
# 116 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "bike with my girlfriend.$"
# 117 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 118 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes::
# 119 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 70 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 120 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "We're going riding together on our\n"
# 121 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "new bikes.$"
# 122 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 123 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore::
# 124 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 75 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 125 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 126 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 127 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "It's the CELADON DEPT. STORE!$"
# 128 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 129 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_LongPathOverWater::
# 130 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 81 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 131 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 132 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 133 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "There's a long path over water far\n"
# 134 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "away.$"
# 135 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 136 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40::
# 137 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 88 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 138 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
# 139 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "I'm one of PROF. OAK's AIDES.\p"
# 140 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "If your POKéDEX has complete data\n"
# 141 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "on 40 species, I'm supposed to\l"
# 142 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "give you a reward.\p"
# 143 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "PROF. OAK entrusted me with an\n"
# 144 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "AMULET COIN for you.\p"
# 145 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "So, {PLAYER}, let me ask you.\p"
# 146 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Have you gathered data on at least\n"
# 147 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "40 kinds of POKéMON?$"
# 148 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 149 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_GreatHereYouGo::
# 150 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 101 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 151 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
# 152 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
# 153 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Congratulations!\n"
# 154 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Here you go!$"
# 155 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 156 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_ReceivedAmuletCoinFromAide::
# 157 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 108 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 158 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received the AMULET COIN\n"
# 159 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "from the AIDE.$"
# 160 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 161 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_ExplainAmuletCoin::
# 162 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 113 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
# 163 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "An AMULET COIN is an item to be\n"
# 164 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "held by a POKéMON.\p"
# 165 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "If the POKéMON appears in a winning\n"
# 166 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "battle, you will earn more money.$"
