# 1 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_Frlg_MapScripts::
# 3 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 5 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 6 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_EventScript_Clerk::
# 7 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 4 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 8 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	lock
# 9 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 5 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 10 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 6 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 12 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 7 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 14 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 15 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 8 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 16 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	pokemart FourIsland_Mart_Items
# 17 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 9 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 18 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 19 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 10 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 20 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	release
# 21 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	end
# 22 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 23 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 24 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_Items::
# 25 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 15 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 26 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	release
# 27 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	end
# 28 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 29 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 30 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_EventScript_Camper::
# 31 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 20 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 32 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	msgbox FourIsland_Mart_Text_IcefallCaveIsFrigid, MSGBOX_NPC
# 33 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 35 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 36 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_Text_LoreleiGrewUpOnThisIsland::
# 37 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 24 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 38 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "We've had a great and powerful\n"
# 39 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "TRAINER grow up on this island.\p"
# 40 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "I bet even you'd know her.\n"
# 41 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "It's LORELEI of the ELITE FOUR!\p"
# 42 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "When LORELEI was just a tyke,\n"
# 43 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "I taught her about POKéMON.$"
# 44 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 45 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_Text_IcefallCaveIsFrigid::
# 46 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 33 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
# 47 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "The SEVII ISLANDS are in a warm\n"
# 48 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "region overall.\p"
# 49 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "But there is one exception you\n"
# 50 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "need to know about.\p"
# 51 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "The ICEFALL CAVE is frigid because\n"
# 52 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "of the POKéMON that live in it.$"
