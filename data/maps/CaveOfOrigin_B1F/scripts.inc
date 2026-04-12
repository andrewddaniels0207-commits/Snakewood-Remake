# 1 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 2 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_MapScripts::
# 3 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 5 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 6 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_Wallace::
# 7 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 4 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 8 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 9 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 5 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 10 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	faceplayer
# 11 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 6 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 12 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
# 13 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 7 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 14 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 15 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 8 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 16 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 17 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 9 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 18 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 10 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 20 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 60
# 21 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 11 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 22 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_PIN
# 23 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 12 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 24 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_ExclamationMark
# 25 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 13 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 26 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 14 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 28 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_Delay48
# 29 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 15 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 30 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 16 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 32 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 30
# 33 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 17 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 34 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_FacePlayer
# 35 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 18 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 36 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 37 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 19 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 38 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
# 39 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 20 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 40 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 41 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 21 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 42 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 43 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 44 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 45 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 46 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza::
# 47 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 25 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 48 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
# 49 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 26 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 50 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 27 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 52 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 0, CaveOfOrigin_B1F_EventScript_WheresRayquaza_3
# 53 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 29 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 54 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 1, CaveOfOrigin_B1F_EventScript_WheresRayquaza_4
# 55 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 31 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 56 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 2, CaveOfOrigin_B1F_EventScript_WheresRayquaza_5
# 57 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 33 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 58 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 3, CaveOfOrigin_B1F_EventScript_WheresRayquaza_6
# 59 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza_1:
# 60 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 36 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 61 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_DontRemember
# 62 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 63 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 64 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza_3:
# 65 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 28 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 66 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
# 67 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza_1
# 68 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 69 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza_4:
# 70 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 30 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 71 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_AtMtPyre
# 72 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza_1
# 73 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 74 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza_5:
# 75 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 32 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 76 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_AtSkyPillar
# 77 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza_1
# 78 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 79 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza_6:
# 80 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 34 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 81 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_DontRemember
# 82 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza_1
# 83 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 84 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 85 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
# 86 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 41 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 87 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
# 88 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 42 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 89 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 90 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 43 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 91 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 92 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 93 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 94 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 95 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtMtPyre::
# 96 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 47 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 97 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
# 98 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 48 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 99 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 100 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 49 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 101 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 102 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 103 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 104 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 105 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_DontRemember::
# 106 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 53 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 107 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
# 108 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 54 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 109 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 110 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 55 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 111 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 112 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 113 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 114 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 115 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtSkyPillar::
# 116 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 59 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 117 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
# 118 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 60 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 119 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 120 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 61 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 121 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 122 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 62 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 123 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 124 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 63 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 125 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 126 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 64 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 127 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 128 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 65 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 129 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject LOCALID_CAVE_OF_ORIGIN_WALLACE
# 130 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 66 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 131 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 132 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 67 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 133 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 134 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 68 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 135 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
# 136 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 137 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 138 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 139 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WallaceStory::
# 140 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 72 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 141 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}?\n"
# 142 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I've heard tales of your exploits.\p"
# 143 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "My name is WALLACE.\p"
# 144 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I was once the GYM LEADER of\n"
# 145 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "SOOTOPOLIS, but something came up.\p"
# 146 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "So now, I've entrusted my mentor JUAN\n"
# 147 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "with the GYM's operation.\p"
# 148 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\n"
# 149 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\p"
# 150 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "GROUDON and KYOGRE, the two POKéMON\n"
# 151 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "wreaking havoc here, are considered\l"
# 152 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "to be super-ancient POKéMON.\p"
# 153 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But there aren't just two super-\n"
# 154 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient POKéMON.\p"
# 155 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "There is one more somewhere.\p"
# 156 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Somewhere, there is a super-\n"
# 157 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient POKéMON named RAYQUAZA.\p"
# 158 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It's said that it was RAYQUAZA that\n"
# 159 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "becalmed the two combatants in\l"
# 160 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "the distant past.\p"
# 161 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But even I have no clue as to\n"
# 162 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "RAYQUAZA's whereabouts…$"
# 163 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 164 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WhereIsRayquaza::
# 165 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 97 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 166 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}, do you perhaps\n"
# 167 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "know where RAYQUAZA is now?\p"
# 168 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "If you do, please tell me.$"
# 169 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 170 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin::
# 171 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 103 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 172 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The CAVE OF ORIGIN?\p"
# 173 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But that's right here!\n"
# 174 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I need you to do better than that!\p"
# 175 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Please, I need you to think about\n"
# 176 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "where RAYQUAZA might be right now.$"
# 177 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 178 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat::
# 179 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 111 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 180 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: MT. PYRE?\p"
# 181 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But when I met the old lady there\n"
# 182 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "earlier, she made no mention of it.\p"
# 183 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I very much doubt that the old lady\n"
# 184 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "would try to hide something from me…\p"
# 185 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, could you think about this\n"
# 186 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "more carefully for me?$"
# 187 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 188 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_CantYouRememberSomehow::
# 189 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 121 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 190 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: Huh? You don't remember?\n"
# 191 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Hmm… That's a problem…\p"
# 192 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Can't you remember somehow?$"
# 193 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 194 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar::
# 195 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 127 "data/maps/CaveOfOrigin_B1F/scripts.pory"
# 196 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The SKY PILLAR?\p"
# 197 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "That's it!\n"
# 198 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It must be the SKY PILLAR!\p"
# 199 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, there's not a moment to lose!\n"
# 200 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "We'll head to the SKY PILLAR right away!$"
