FourIsland_Mart_Frlg_MapScripts::
	.byte 0


FourIsland_Mart_EventScript_Clerk::
# 4 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	lock
# 5 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 8 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	pokemart FourIsland_Mart_Items
# 9 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	release
	end


FourIsland_Mart_Items::
# 15 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	release
	end


FourIsland_Mart_EventScript_Camper::
# 20 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	msgbox FourIsland_Mart_Text_IcefallCaveIsFrigid, MSGBOX_NPC
	end


FourIsland_Mart_Text_LoreleiGrewUpOnThisIsland::
# 24 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "We've had a great and powerful\n"
	.string "TRAINER grow up on this island.\p"
	.string "I bet even you'd know her.\n"
	.string "It's LORELEI of the ELITE FOUR!\p"
	.string "When LORELEI was just a tyke,\n"
	.string "I taught her about POKéMON.$"

FourIsland_Mart_Text_IcefallCaveIsFrigid::
# 33 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "The SEVII ISLANDS are in a warm\n"
	.string "region overall.\p"
	.string "But there is one exception you\n"
	.string "need to know about.\p"
	.string "The ICEFALL CAVE is frigid because\n"
	.string "of the POKéMON that live in it.$"
