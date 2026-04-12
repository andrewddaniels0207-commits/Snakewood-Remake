# 1 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_Frlg_MapScripts::
# 3 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 5 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 6 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_EventScript_Clerk::
# 7 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 4 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 8 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	lock
# 9 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 5 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 10 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 6 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 12 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 7 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 14 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 15 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 8 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 16 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	pokemart SixIsland_Mart_Items
# 17 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 9 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 18 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 19 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 10 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 20 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	release
# 21 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	end
# 22 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 23 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 24 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_Items::
# 25 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 15 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 26 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	release
# 27 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	end
# 28 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 29 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 30 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_EventScript_Picnicker::
# 31 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 20 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 32 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	msgbox SixIsland_Mart_Text_ShouldBuyMailAndWriteLetter, MSGBOX_NPC
# 33 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 35 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 36 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_Text_AgathaOldestEverEliteFourMember::
# 37 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 24 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 38 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "Play with POKéMON lots and live\n"
# 39 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "a long life!\p"
# 40 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "Take AGATHA, for example.\p"
# 41 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "She set a record for being the\n"
# 42 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "oldest-ever ELITE FOUR member.\p"
# 43 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "She spurs me to do bigger things.$"
# 44 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 45 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_Text_ShouldBuyMailAndWriteLetter::
# 46 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 33 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
# 47 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "I should buy some MAIL and write\n"
# 48 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "him a letter…$"
