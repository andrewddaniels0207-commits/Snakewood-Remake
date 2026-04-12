# 1 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 2 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Frlg_MapScripts::
# 3 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 5 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 6 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_LeftBinoculars::
# 7 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 4 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 8 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	lockall
# 9 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 5 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 10 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_LargeShiningBird
# 11 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 6 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 12 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	showmonpic SPECIES_ARTICUNO, 10, 3
# 13 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 7 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 14 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	delay 20
# 15 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 8 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 16 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	waitbuttonpress
# 17 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 9 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 18 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	hidemonpic
# 19 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 10 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 20 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 21 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 11 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 22 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	special SetSeenMon
# 23 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 12 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 24 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	releaseall
# 25 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	end
# 26 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 27 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 28 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_RightBinoculars::
# 29 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 17 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 30 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_SmallIslandOnHorizon, MSGBOX_SIGN
# 31 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	end
# 32 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 33 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 34 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide::
# 35 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 22 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 36 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	lock
# 37 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 23 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 38 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	faceplayer
# 39 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 24 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 40 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
# 41 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 25 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 42 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE, Route15_WestEntrance_2F_EventScript_Aide_2
# 43 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide_1:
# 44 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 28 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 45 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough, MSGBOX_YESNO
# 46 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 29 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 47 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 48 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto_if_eq Route15_WestEntrance_2F_EventScript_Aide_5
# 49 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide_4:
# 50 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 32 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 51 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 52 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 33 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 53 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 54 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 34 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 55 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 56 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 35 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 57 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
# 58 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 36 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 59 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	compare VAR_0x8006, REQUIRED_CAUGHT_MONS
# 60 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto_if_lt Route15_WestEntrance_2F_EventScript_Aide_8
# 61 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide_7:
# 62 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 39 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 63 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_GreatHereYouGo
# 64 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 40 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 65 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	checkitemspace ITEM_EXP_SHARE
# 66 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 41 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 67 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 68 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto_if_eq Route15_WestEntrance_2F_EventScript_Aide_11
# 69 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide_10:
# 70 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 44 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 71 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route15_WestEntrance_2F_Text_ReceivedItemFromAide, ITEM_EXP_SHARE
# 72 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 45 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 73 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE
# 74 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 46 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 75 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
# 76 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 47 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 77 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	release
# 78 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	end
# 79 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 80 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide_2:
# 81 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 26 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 82 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare
# 83 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto Route15_WestEntrance_2F_EventScript_Aide_1
# 84 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 85 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide_5:
# 86 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 30 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 87 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_DeclineCheckMons
# 88 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto Route15_WestEntrance_2F_EventScript_Aide_4
# 89 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 90 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide_8:
# 91 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 37 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 92 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_HaventCaughtEnough
# 93 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto Route15_WestEntrance_2F_EventScript_Aide_7
# 94 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 95 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide_11:
# 96 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 42 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 97 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_NoRoomForItem
# 98 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto Route15_WestEntrance_2F_EventScript_Aide_10
# 99 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 100 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 101 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare::
# 102 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 52 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 103 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
# 104 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 53 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 105 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	release
# 106 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	end
# 107 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 108 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 109 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_GetAideRequestInfo::
# 110 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 58 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 111 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
# 112 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 59 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 113 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_EXP_SHARE
# 114 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	return
# 115 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 116 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 117 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough::
# 118 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 63 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 119 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
# 120 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "I'm one of PROF. OAK's AIDES.\p"
# 121 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "If your POKéDEX has complete data\n"
# 122 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "on {STR_VAR_1} species, I'm supposed to\l"
# 123 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "give you a reward.\p"
# 124 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "PROF. OAK entrusted me with the\n"
# 125 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "{STR_VAR_2} for you.\p"
# 126 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "So, {PLAYER}, let me ask you.\p"
# 127 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Have you gathered data on at least\n"
# 128 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "{STR_VAR_1} kinds of POKéMON?$"
# 129 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 130 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_GreatHereYouGo::
# 131 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 76 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 132 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
# 133 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
# 134 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Congratulations!\n"
# 135 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Here you go!$"
# 136 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 137 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_ReceivedItemFromAide::
# 138 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 83 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 139 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_2}\n"
# 140 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "from the AIDE.$"
# 141 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 142 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_ExplainExpShare::
# 143 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 88 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 144 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "EXP. SHARE is an item to be held\n"
# 145 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "by a POKéMON.\p"
# 146 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "The POKéMON will receive a share\n"
# 147 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "of the EXP. Points without having\l"
# 148 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "to battle.$"
# 149 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 150 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_LargeShiningBird::
# 151 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 96 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 152 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 153 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 154 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "A large, shining bird is flying\n"
# 155 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "toward the sea.$"
# 156 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 157 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_SmallIslandOnHorizon::
# 158 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 103 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
# 159 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 160 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 161 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "It looks like a small island on\n"
# 162 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "the horizon!$"
