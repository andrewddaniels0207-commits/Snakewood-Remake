# 1 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 2 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_MapScripts::
# 3 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 5 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 6 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater::
# 7 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 4 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 8 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lock
# 9 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 5 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 10 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	faceplayer
# 11 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 6 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 12 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
# 13 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 7 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 14 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 15 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 8 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 16 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 9 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 18 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_NONE, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_3
# 19 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 11 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 20 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_1_TO_49, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_4
# 21 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 13 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 22 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_50_TO_99, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_5
# 23 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 15 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 24 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_100_TO_149, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_6
# 25 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 17 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 26 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_150_TO_199, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_7
# 27 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 19 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 28 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_200_TO_254, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_8
# 29 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 21 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 30 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_MAX, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_9
# 31 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1:
# 32 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 24 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 33 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 34 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 35 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 36 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_3:
# 37 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 10 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 38 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou
# 39 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1
# 40 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 41 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_4:
# 42 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 12 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 43 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary
# 44 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1
# 45 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 46 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_5:
# 47 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 14 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 48 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou
# 49 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1
# 50 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 51 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_6:
# 52 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 16 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 53 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou
# 54 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1
# 55 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 56 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_7:
# 57 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 18 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 58 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot
# 59 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1
# 60 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 61 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_8:
# 62 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 20 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 63 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy
# 64 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1
# 65 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 66 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_9:
# 67 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 22 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 68 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou
# 69 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1
# 70 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 71 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 72 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou::
# 73 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 29 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 74 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou, MSGBOX_DEFAULT
# 75 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 30 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 76 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 77 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 78 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 79 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 80 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary::
# 81 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 35 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 82 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryWary, MSGBOX_DEFAULT
# 83 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 36 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 84 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 85 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 86 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 87 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 88 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou::
# 89 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 41 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 90 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou, MSGBOX_DEFAULT
# 91 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 42 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 92 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 93 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 94 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 95 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 96 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou::
# 97 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 47 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 98 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou, MSGBOX_DEFAULT
# 99 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 48 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 100 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 101 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 102 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 103 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 104 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot::
# 105 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 53 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 106 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
# 107 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 54 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 108 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 109 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 110 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 111 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 112 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy::
# 113 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 59 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 114 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy, MSGBOX_DEFAULT
# 115 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 60 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 116 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 117 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 118 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 119 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 120 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou::
# 121 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 65 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 122 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou, MSGBOX_DEFAULT
# 123 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 66 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 124 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 125 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 126 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 127 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 128 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu::
# 129 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 71 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 130 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lock
# 131 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 72 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 132 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	faceplayer
# 133 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 73 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 134 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitse
# 135 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 74 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 136 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 137 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 75 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 138 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_Pikachu, MSGBOX_DEFAULT
# 139 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 76 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 140 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitmoncry
# 141 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 77 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 142 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 143 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 144 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 145 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 146 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou::
# 147 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 81 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 148 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Let me see your POKéMON.\n"
# 149 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "I'll check to see how much it likes you.\p"
# 150 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Oh.\n"
# 151 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Your POKéMON…$"
# 152 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 153 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou::
# 154 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 88 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 155 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It adores you.\n"
# 156 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It can't possibly love you any more.\l"
# 157 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "I even feel happy seeing it.$"
# 158 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 159 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy::
# 160 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 94 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 161 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It seems to be very happy.\n"
# 162 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It obviously likes you a whole lot.$"
# 163 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 164 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot::
# 165 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 99 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 166 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It likes you quite a lot.\n"
# 167 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It seems to want to be babied a little.$"
# 168 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 169 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou::
# 170 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 104 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 171 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's getting used to you.\n"
# 172 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It seems to believe in you.$"
# 173 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 174 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou::
# 175 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 109 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 176 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's not very used to you yet.\n"
# 177 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It neither loves nor hates you.$"
# 178 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 179 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_VeryWary::
# 180 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 114 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 181 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's very wary.\n"
# 182 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It has scary viciousness in its eyes.\l"
# 183 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It doesn't like you much at all.$"
# 184 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 185 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou::
# 186 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 120 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 187 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "This is a little hard for me to say…\p"
# 188 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Your POKéMON simply detests you.\n"
# 189 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Doesn't that make you uncomfortable?$"
# 190 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 191 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_Pikachu::
# 192 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 126 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
# 193 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "PIKACHU: Pika pika!$"
