# 1 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 2 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Frlg_MapScripts::
# 3 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 5 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 6 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Aide::
# 7 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 4 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 8 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	lock
# 9 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 5 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 10 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 6 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 12 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
# 13 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 7 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 14 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM05, Route2_EastBuilding_EventScript_Aide_2
# 15 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Aide_1:
# 16 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 10 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 17 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_GiveHM05IfSeen10Mons, MSGBOX_YESNO
# 18 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 11 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 19 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 20 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto_if_eq Route2_EastBuilding_EventScript_Aide_5
# 21 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Aide_4:
# 22 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 14 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 23 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 24 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 15 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 25 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 26 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 16 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 27 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 28 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 17 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 29 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
# 30 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 18 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 31 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	compare VAR_0x8006, REQUIRED_SEEN_MONS
# 32 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto_if_lt Route2_EastBuilding_EventScript_Aide_8
# 33 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Aide_7:
# 34 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 21 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 35 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_GreatHereYouGo
# 36 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 22 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 37 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	checkitemspace ITEM_HM05
# 38 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 23 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 39 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 40 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto_if_eq Route2_EastBuilding_EventScript_Aide_11
# 41 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Aide_10:
# 42 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 26 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 43 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	giveitem_msg Route2_EastBuilding_Text_ReceivedHM05FromAide, ITEM_HM05
# 44 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 27 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 45 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	setflag FLAG_GOT_HM05
# 46 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 28 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 47 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_ExplainHM05
# 48 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 29 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 49 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	release
# 50 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	end
# 51 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 52 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Aide_2:
# 53 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 8 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 54 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Route2_EastBuilding_EventScript_AlreadyGotHM05
# 55 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Route2_EastBuilding_EventScript_Aide_1
# 56 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 57 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Aide_5:
# 58 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 12 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 59 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Aide_EventScript_DeclineCheckMons
# 60 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Route2_EastBuilding_EventScript_Aide_4
# 61 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 62 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Aide_8:
# 63 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 19 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 64 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Aide_EventScript_HaventCaughtEnough
# 65 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Route2_EastBuilding_EventScript_Aide_7
# 66 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 67 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Aide_11:
# 68 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 24 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 69 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Aide_EventScript_NoRoomForItem
# 70 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Route2_EastBuilding_EventScript_Aide_10
# 71 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 72 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 73 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_AlreadyGotHM05::
# 74 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 34 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 75 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_ExplainHM05
# 76 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 35 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 77 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	release
# 78 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	end
# 79 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 80 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 81 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_GetAideRequestInfo::
# 82 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 40 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 83 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_SEEN_MONS
# 84 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 41 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 85 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HM05
# 86 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	return
# 87 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 88 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 89 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Rocker::
# 90 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 46 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 91 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_CanGetThroughRockTunnel, MSGBOX_NPC
# 92 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	end
# 93 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 94 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 95 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Text_GiveHM05IfSeen10Mons::
# 96 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 50 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 97 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
# 98 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "I'm one of PROF. OAK's AIDES.\p"
# 99 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "If your POKéDEX has complete data\n"
# 100 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "on ten species, I'm supposed to\l"
# 101 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "give you a reward.\p"
# 102 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "PROF. OAK entrusted me with\n"
# 103 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "HM05 for you.\p"
# 104 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "So, {PLAYER}, let me ask you.\p"
# 105 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Have you gathered data on at least\n"
# 106 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "ten kinds of POKéMON?$"
# 107 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 108 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Text_GreatHereYouGo::
# 109 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 63 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 110 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
# 111 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
# 112 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Congratulations!\n"
# 113 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Here you go!$"
# 114 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 115 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Text_ReceivedHM05FromAide::
# 116 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 70 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 117 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "{PLAYER} received HM05\n"
# 118 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "from the AIDE.$"
# 119 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 120 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Text_ExplainHM05::
# 121 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 75 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 122 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "HM05 contains the hidden move\n"
# 123 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "FLASH.\p"
# 124 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "FLASH lights up even the darkest\n"
# 125 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "of caves and dungeons.$"
# 126 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 127 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Text_CanGetThroughRockTunnel::
# 128 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 82 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
# 129 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Once a POKéMON learns FLASH, you\n"
# 130 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "can get through ROCK TUNNEL.$"
