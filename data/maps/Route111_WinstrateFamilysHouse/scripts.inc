# 1 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 2 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_MapScripts::
# 3 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.byte 0
# 4 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 5 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 6 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victor::
# 7 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 4 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 8 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 9 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 5 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 10 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 11 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 6 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 12 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICTOR
# 13 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 7 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 14 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 8 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 18 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 13 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 14 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICTORIA
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_Victoria_2
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria_1:
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_eq Route111_WinstrateFamilysHouse_EventScript_Victoria_5
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria_4:
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MACHO_BRACE
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria_2:
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_Victoria_1
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria_5:
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_Victoria_4
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VIVI
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICKY
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_Vicky_2
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky_1:
# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 90 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky_2:
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_Vicky_1
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 108 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 109 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 110 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 111 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 112 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 113 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 114 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 115 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 117 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 118 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 119 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 120 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 121 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou::
# 122 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 123 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first TRAINER I've seen who\n"
# 124 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "deploys POKéMON so masterfully.\p"
# 125 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But, I should tell you--my son is\n"
# 126 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "stronger than you.\p"
# 127 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He even took the POKéMON LEAGUE\n"
# 128 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "challenge, I'll have you know.$"
# 129 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 130 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace::
# 131 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 132 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We use this MACHO BRACE to more\n"
# 133 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "effectively strengthen our POKéMON\l"
# 134 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "in training.\p"
# 135 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Since you've beaten all of us here,\n"
# 136 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I don't know if you need it, but we\l"
# 137 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "would like you to have our MACHO BRACE.$"
# 138 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 139 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles::
# 140 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 141 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to POKéMON battles,\n"
# 142 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "we tend to be pretty passionate.$"
# 143 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 144 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers::
# 145 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 146 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mommy is stronger than Daddy.\p"
# 147 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm stronger than Mommy.\p"
# 148 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "And Grandma's stronger than me!\p"
# 149 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But my big brother is even stronger\n"
# 150 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "than Grandma.$"
# 151 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 152 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong::
# 153 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 154 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There's no question that you're strong.\p"
# 155 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But if you were to battle my grandson,\n"
# 156 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you'd end up crying in frustration.\p"
# 157 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He's much stronger than any TRAINER\n"
# 158 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "our family knows.\p"
# 159 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He must be challenging the POKéMON\n"
# 160 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "LEAGUE CHAMPION by now.\p"
# 161 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 162 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
# 163 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 164 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort::
# 165 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 114 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
# 166 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\n"
# 167 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "POKéMON LEAGUE CHAMPION by now.\p"
# 168 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 169 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
