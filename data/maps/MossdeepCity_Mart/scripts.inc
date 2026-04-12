# 1 "data/maps/MossdeepCity_Mart/scripts.pory"

# 2 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_MapScripts::
# 3 "data/maps/MossdeepCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_Mart/scripts.pory"

# 5 "data/maps/MossdeepCity_Mart/scripts.pory"

# 6 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Clerk::
# 7 "data/maps/MossdeepCity_Mart/scripts.pory"
# 4 "data/maps/MossdeepCity_Mart/scripts.pory"
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock
# 9 "data/maps/MossdeepCity_Mart/scripts.pory"
# 5 "data/maps/MossdeepCity_Mart/scripts.pory"
# 10 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/MossdeepCity_Mart/scripts.pory"
# 6 "data/maps/MossdeepCity_Mart/scripts.pory"
# 12 "data/maps/MossdeepCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/MossdeepCity_Mart/scripts.pory"
# 7 "data/maps/MossdeepCity_Mart/scripts.pory"
# 14 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/MossdeepCity_Mart/scripts.pory"
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
# 16 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCity_Mart_Pokemart
# 17 "data/maps/MossdeepCity_Mart/scripts.pory"
# 9 "data/maps/MossdeepCity_Mart/scripts.pory"
# 18 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/MossdeepCity_Mart/scripts.pory"
# 10 "data/maps/MossdeepCity_Mart/scripts.pory"
# 20 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 21 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_Mart/scripts.pory"

# 23 "data/maps/MossdeepCity_Mart/scripts.pory"

# 24 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Pokemart::
# 25 "data/maps/MossdeepCity_Mart/scripts.pory"
# 15 "data/maps/MossdeepCity_Mart/scripts.pory"
# 26 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/MossdeepCity_Mart/scripts.pory"
	return
# 28 "data/maps/MossdeepCity_Mart/scripts.pory"

# 29 "data/maps/MossdeepCity_Mart/scripts.pory"

# 30 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Woman::
# 31 "data/maps/MossdeepCity_Mart/scripts.pory"
# 19 "data/maps/MossdeepCity_Mart/scripts.pory"
# 32 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
# 33 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 34 "data/maps/MossdeepCity_Mart/scripts.pory"

# 35 "data/maps/MossdeepCity_Mart/scripts.pory"

# 36 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Boy::
# 37 "data/maps/MossdeepCity_Mart/scripts.pory"
# 24 "data/maps/MossdeepCity_Mart/scripts.pory"
# 38 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
# 39 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 40 "data/maps/MossdeepCity_Mart/scripts.pory"

# 41 "data/maps/MossdeepCity_Mart/scripts.pory"

# 42 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Sailor::
# 43 "data/maps/MossdeepCity_Mart/scripts.pory"
# 29 "data/maps/MossdeepCity_Mart/scripts.pory"
# 44 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
# 45 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 46 "data/maps/MossdeepCity_Mart/scripts.pory"

# 47 "data/maps/MossdeepCity_Mart/scripts.pory"

# 48 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_ReviveIsFantastic::
# 49 "data/maps/MossdeepCity_Mart/scripts.pory"
# 33 "data/maps/MossdeepCity_Mart/scripts.pory"
# 50 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "REVIVE is fantastic!\p"
# 51 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Give it to a fainted POKéMON,\n"
# 52 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "and the POKéMON will arise.\p"
# 53 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "But be careful, REVIVE doesn't restore\n"
# 54 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "the used-up PP of moves.$"
# 55 "data/maps/MossdeepCity_Mart/scripts.pory"

# 56 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_MaxRepelLastsLongest::
# 57 "data/maps/MossdeepCity_Mart/scripts.pory"
# 41 "data/maps/MossdeepCity_Mart/scripts.pory"
# 58 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "MAX REPEL keeps all weak POKéMON away.\p"
# 59 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Out of all the REPEL sprays, it lasts\n"
# 60 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "the longest.$"
# 61 "data/maps/MossdeepCity_Mart/scripts.pory"

# 62 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_NetAndDiveBallsRare::
# 63 "data/maps/MossdeepCity_Mart/scripts.pory"
# 47 "data/maps/MossdeepCity_Mart/scripts.pory"
# 64 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "The NET and DIVE BALLS are rare POKé\n"
# 65 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "BALLS that are only made in MOSSDEEP.\p"
# 66 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "A NET BALL is effective against\n"
# 67 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "BUG-type and WATER-type POKéMON.\p"
# 68 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "A DIVE BALL works best on POKéMON\n"
# 69 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "at the bottom of the sea.$"
