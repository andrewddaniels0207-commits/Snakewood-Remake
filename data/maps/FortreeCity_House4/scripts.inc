# 1 "data/maps/FortreeCity_House4/scripts.pory"

# 2 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_MapScripts::
# 3 "data/maps/FortreeCity_House4/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House4/scripts.pory"

# 5 "data/maps/FortreeCity_House4/scripts.pory"

# 6 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Woman::
# 7 "data/maps/FortreeCity_House4/scripts.pory"
# 4 "data/maps/FortreeCity_House4/scripts.pory"
# 8 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_BringsWorldCloserTogether, MSGBOX_NPC
# 9 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 10 "data/maps/FortreeCity_House4/scripts.pory"

# 11 "data/maps/FortreeCity_House4/scripts.pory"

# 12 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy::
# 13 "data/maps/FortreeCity_House4/scripts.pory"
# 9 "data/maps/FortreeCity_House4/scripts.pory"
# 14 "data/maps/FortreeCity_House4/scripts.pory"
	lockall
# 15 "data/maps/FortreeCity_House4/scripts.pory"
# 10 "data/maps/FortreeCity_House4/scripts.pory"
# 16 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_MENTAL_HERB, FortreeCity_House4_EventScript_Boy_2
# 17 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy_1:
# 18 "data/maps/FortreeCity_House4/scripts.pory"
# 13 "data/maps/FortreeCity_House4/scripts.pory"
# 19 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_DELIVERED_MAIL, FortreeCity_House4_EventScript_Boy_5
# 20 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy_4:
# 21 "data/maps/FortreeCity_House4/scripts.pory"
# 16 "data/maps/FortreeCity_House4/scripts.pory"
# 22 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_SENT_ON_ERRAND, FortreeCity_House4_EventScript_Boy_8
# 23 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy_7:
# 24 "data/maps/FortreeCity_House4/scripts.pory"
# 19 "data/maps/FortreeCity_House4/scripts.pory"
# 25 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_GoBirdPokemon, MSGBOX_DEFAULT
# 26 "data/maps/FortreeCity_House4/scripts.pory"
# 20 "data/maps/FortreeCity_House4/scripts.pory"
# 27 "data/maps/FortreeCity_House4/scripts.pory"
	closemessage
# 28 "data/maps/FortreeCity_House4/scripts.pory"
# 21 "data/maps/FortreeCity_House4/scripts.pory"
# 29 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_WINGULL_SENT_ON_ERRAND
# 30 "data/maps/FortreeCity_House4/scripts.pory"
# 22 "data/maps/FortreeCity_House4/scripts.pory"
# 31 "data/maps/FortreeCity_House4/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
# 32 "data/maps/FortreeCity_House4/scripts.pory"
# 23 "data/maps/FortreeCity_House4/scripts.pory"
# 33 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement LOCALID_FORTREE_HOUSE_WINGULL, FortreeCity_House4_Movement_WingullExit
# 34 "data/maps/FortreeCity_House4/scripts.pory"
# 24 "data/maps/FortreeCity_House4/scripts.pory"
# 35 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 36 "data/maps/FortreeCity_House4/scripts.pory"
# 25 "data/maps/FortreeCity_House4/scripts.pory"
# 37 "data/maps/FortreeCity_House4/scripts.pory"
	removeobject LOCALID_FORTREE_HOUSE_WINGULL
# 38 "data/maps/FortreeCity_House4/scripts.pory"
# 26 "data/maps/FortreeCity_House4/scripts.pory"
# 39 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 40 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 41 "data/maps/FortreeCity_House4/scripts.pory"

# 42 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy_2:
# 43 "data/maps/FortreeCity_House4/scripts.pory"
# 11 "data/maps/FortreeCity_House4/scripts.pory"
# 44 "data/maps/FortreeCity_House4/scripts.pory"
	goto FortreeCity_House4_EventScript_ReceivedMentalHerb
# 45 "data/maps/FortreeCity_House4/scripts.pory"
	goto FortreeCity_House4_EventScript_Boy_1
# 46 "data/maps/FortreeCity_House4/scripts.pory"

# 47 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy_5:
# 48 "data/maps/FortreeCity_House4/scripts.pory"
# 14 "data/maps/FortreeCity_House4/scripts.pory"
# 49 "data/maps/FortreeCity_House4/scripts.pory"
	goto FortreeCity_House4_EventScript_WingullReturned
# 50 "data/maps/FortreeCity_House4/scripts.pory"
	goto FortreeCity_House4_EventScript_Boy_4
# 51 "data/maps/FortreeCity_House4/scripts.pory"

# 52 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy_8:
# 53 "data/maps/FortreeCity_House4/scripts.pory"
# 17 "data/maps/FortreeCity_House4/scripts.pory"
# 54 "data/maps/FortreeCity_House4/scripts.pory"
	goto FortreeCity_House4_EventScript_WingullOnErrand
# 55 "data/maps/FortreeCity_House4/scripts.pory"
	goto FortreeCity_House4_EventScript_Boy_7
# 56 "data/maps/FortreeCity_House4/scripts.pory"

# 57 "data/maps/FortreeCity_House4/scripts.pory"

# 58 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullOnErrand::
# 59 "data/maps/FortreeCity_House4/scripts.pory"
# 31 "data/maps/FortreeCity_House4/scripts.pory"
# 60 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 61 "data/maps/FortreeCity_House4/scripts.pory"
# 32 "data/maps/FortreeCity_House4/scripts.pory"
# 62 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 63 "data/maps/FortreeCity_House4/scripts.pory"
# 33 "data/maps/FortreeCity_House4/scripts.pory"
# 64 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_AskedWingullToRunErrand, MSGBOX_DEFAULT
# 65 "data/maps/FortreeCity_House4/scripts.pory"
# 34 "data/maps/FortreeCity_House4/scripts.pory"
# 66 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 67 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 68 "data/maps/FortreeCity_House4/scripts.pory"

# 69 "data/maps/FortreeCity_House4/scripts.pory"

# 70 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullReturned::
# 71 "data/maps/FortreeCity_House4/scripts.pory"
# 39 "data/maps/FortreeCity_House4/scripts.pory"
# 72 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 73 "data/maps/FortreeCity_House4/scripts.pory"
# 40 "data/maps/FortreeCity_House4/scripts.pory"
# 74 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 75 "data/maps/FortreeCity_House4/scripts.pory"
# 41 "data/maps/FortreeCity_House4/scripts.pory"
# 76 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb, MSGBOX_DEFAULT
# 77 "data/maps/FortreeCity_House4/scripts.pory"
# 42 "data/maps/FortreeCity_House4/scripts.pory"
# 78 "data/maps/FortreeCity_House4/scripts.pory"
	giveitem ITEM_MENTAL_HERB
# 79 "data/maps/FortreeCity_House4/scripts.pory"
# 43 "data/maps/FortreeCity_House4/scripts.pory"
# 80 "data/maps/FortreeCity_House4/scripts.pory"
	compare VAR_RESULT, FALSE
# 81 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_eq FortreeCity_House4_EventScript_WingullReturned_2
# 82 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullReturned_1:
# 83 "data/maps/FortreeCity_House4/scripts.pory"
# 46 "data/maps/FortreeCity_House4/scripts.pory"
# 84 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_MENTAL_HERB
# 85 "data/maps/FortreeCity_House4/scripts.pory"
# 47 "data/maps/FortreeCity_House4/scripts.pory"
# 86 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 87 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 88 "data/maps/FortreeCity_House4/scripts.pory"

# 89 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullReturned_2:
# 90 "data/maps/FortreeCity_House4/scripts.pory"
# 44 "data/maps/FortreeCity_House4/scripts.pory"
# 91 "data/maps/FortreeCity_House4/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 92 "data/maps/FortreeCity_House4/scripts.pory"
	goto FortreeCity_House4_EventScript_WingullReturned_1
# 93 "data/maps/FortreeCity_House4/scripts.pory"

# 94 "data/maps/FortreeCity_House4/scripts.pory"

# 95 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_ReceivedMentalHerb::
# 96 "data/maps/FortreeCity_House4/scripts.pory"
# 52 "data/maps/FortreeCity_House4/scripts.pory"
# 97 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 98 "data/maps/FortreeCity_House4/scripts.pory"
# 53 "data/maps/FortreeCity_House4/scripts.pory"
# 99 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 100 "data/maps/FortreeCity_House4/scripts.pory"
# 54 "data/maps/FortreeCity_House4/scripts.pory"
# 101 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_FriendsFarAwayThanksToWingull, MSGBOX_DEFAULT
# 102 "data/maps/FortreeCity_House4/scripts.pory"
# 55 "data/maps/FortreeCity_House4/scripts.pory"
# 103 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 104 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 105 "data/maps/FortreeCity_House4/scripts.pory"

# 106 "data/maps/FortreeCity_House4/scripts.pory"

# 107 "data/maps/FortreeCity_House4/scripts.pory"
# 59 "data/maps/FortreeCity_House4/scripts.pory"
# 108 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Movement_WingullExit:
# 109 "data/maps/FortreeCity_House4/scripts.pory"
# 60 "data/maps/FortreeCity_House4/scripts.pory"
# 110 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_down
# 111 "data/maps/FortreeCity_House4/scripts.pory"
# 61 "data/maps/FortreeCity_House4/scripts.pory"
# 112 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_down
# 113 "data/maps/FortreeCity_House4/scripts.pory"
# 62 "data/maps/FortreeCity_House4/scripts.pory"
# 114 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_right
# 115 "data/maps/FortreeCity_House4/scripts.pory"
# 63 "data/maps/FortreeCity_House4/scripts.pory"
# 116 "data/maps/FortreeCity_House4/scripts.pory"
	walk_in_place_faster_down
# 117 "data/maps/FortreeCity_House4/scripts.pory"
# 64 "data/maps/FortreeCity_House4/scripts.pory"
# 118 "data/maps/FortreeCity_House4/scripts.pory"
	delay_8
# 119 "data/maps/FortreeCity_House4/scripts.pory"
# 65 "data/maps/FortreeCity_House4/scripts.pory"
# 120 "data/maps/FortreeCity_House4/scripts.pory"
	step_end
# 121 "data/maps/FortreeCity_House4/scripts.pory"

# 122 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Wingull::
# 123 "data/maps/FortreeCity_House4/scripts.pory"
# 69 "data/maps/FortreeCity_House4/scripts.pory"
# 124 "data/maps/FortreeCity_House4/scripts.pory"
	lock
# 125 "data/maps/FortreeCity_House4/scripts.pory"
# 70 "data/maps/FortreeCity_House4/scripts.pory"
# 126 "data/maps/FortreeCity_House4/scripts.pory"
	faceplayer
# 127 "data/maps/FortreeCity_House4/scripts.pory"
# 71 "data/maps/FortreeCity_House4/scripts.pory"
# 128 "data/maps/FortreeCity_House4/scripts.pory"
	waitse
# 129 "data/maps/FortreeCity_House4/scripts.pory"
# 72 "data/maps/FortreeCity_House4/scripts.pory"
# 130 "data/maps/FortreeCity_House4/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 131 "data/maps/FortreeCity_House4/scripts.pory"
# 73 "data/maps/FortreeCity_House4/scripts.pory"
# 132 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_Wingull, MSGBOX_DEFAULT
# 133 "data/maps/FortreeCity_House4/scripts.pory"
# 74 "data/maps/FortreeCity_House4/scripts.pory"
# 134 "data/maps/FortreeCity_House4/scripts.pory"
	waitmoncry
# 135 "data/maps/FortreeCity_House4/scripts.pory"
# 75 "data/maps/FortreeCity_House4/scripts.pory"
# 136 "data/maps/FortreeCity_House4/scripts.pory"
	release
# 137 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 138 "data/maps/FortreeCity_House4/scripts.pory"

# 139 "data/maps/FortreeCity_House4/scripts.pory"

# 140 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_BringsWorldCloserTogether::
# 141 "data/maps/FortreeCity_House4/scripts.pory"
# 79 "data/maps/FortreeCity_House4/scripts.pory"
# 142 "data/maps/FortreeCity_House4/scripts.pory"
	.string "By being together with POKéMON,\n"
# 143 "data/maps/FortreeCity_House4/scripts.pory"
	.string "people make more and more friends.\p"
# 144 "data/maps/FortreeCity_House4/scripts.pory"
	.string "And that brings the world closer\n"
# 145 "data/maps/FortreeCity_House4/scripts.pory"
	.string "together. I think it's wonderful!$"
# 146 "data/maps/FortreeCity_House4/scripts.pory"

# 147 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_GoBirdPokemon::
# 148 "data/maps/FortreeCity_House4/scripts.pory"
# 86 "data/maps/FortreeCity_House4/scripts.pory"
# 149 "data/maps/FortreeCity_House4/scripts.pory"
	.string "There!\n"
# 150 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Go, BIRD POKéMON!$"
# 151 "data/maps/FortreeCity_House4/scripts.pory"

# 152 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_AskedWingullToRunErrand::
# 153 "data/maps/FortreeCity_House4/scripts.pory"
# 91 "data/maps/FortreeCity_House4/scripts.pory"
# 154 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Heheh, I asked my WINGULL to run\n"
# 155 "data/maps/FortreeCity_House4/scripts.pory"
	.string "an errand for me.$"
# 156 "data/maps/FortreeCity_House4/scripts.pory"

# 157 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb::
# 158 "data/maps/FortreeCity_House4/scripts.pory"
# 96 "data/maps/FortreeCity_House4/scripts.pory"
# 159 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Good!\n"
# 160 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Welcome back, WINGULL!\p"
# 161 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Huh? What is this?\n"
# 162 "data/maps/FortreeCity_House4/scripts.pory"
	.string "What is it holding?\p"
# 163 "data/maps/FortreeCity_House4/scripts.pory"
	.string "A MENTAL HERB?\n"
# 164 "data/maps/FortreeCity_House4/scripts.pory"
	.string "It must have picked it up somewhere.\p"
# 165 "data/maps/FortreeCity_House4/scripts.pory"
	.string "But I'm not a TRAINER, so you can\n"
# 166 "data/maps/FortreeCity_House4/scripts.pory"
	.string "have it.$"
# 167 "data/maps/FortreeCity_House4/scripts.pory"

# 168 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_FriendsFarAwayThanksToWingull::
# 169 "data/maps/FortreeCity_House4/scripts.pory"
# 107 "data/maps/FortreeCity_House4/scripts.pory"
# 170 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Thanks to my WINGULL, I have friends\n"
# 171 "data/maps/FortreeCity_House4/scripts.pory"
	.string "who live far away.$"
# 172 "data/maps/FortreeCity_House4/scripts.pory"

# 173 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_Wingull::
# 174 "data/maps/FortreeCity_House4/scripts.pory"
# 112 "data/maps/FortreeCity_House4/scripts.pory"
# 175 "data/maps/FortreeCity_House4/scripts.pory"
	.string "WINGULL: Pihyoh!$"
