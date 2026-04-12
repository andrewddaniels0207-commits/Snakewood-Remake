# 1 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 5 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 6 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_EventScript_Clerk::
# 7 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 4 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 8 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	lock
# 9 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 5 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 10 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 6 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 12 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 7 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 14 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 15 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 8 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 16 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	pokemart SevenIsland_Mart_Items
# 17 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 9 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 18 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 19 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 10 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 20 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	release
# 21 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	end
# 22 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 23 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 24 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_Items::
# 25 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 15 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 26 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	release
# 27 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	end
# 28 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 29 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 30 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_EventScript_Lass::
# 31 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 20 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 32 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox SevenIsland_Mart_Text_MonHavePersonalitiesOfTheirOwn, MSGBOX_NPC
# 33 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 35 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 36 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_EventScript_Hiker::
# 37 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 25 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 38 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox SevenIsland_Mart_Text_PreparationsCompleteForRuins, MSGBOX_NPC
# 39 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	end
# 40 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 41 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 42 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_EventScript_Fisher::
# 43 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 30 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 44 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox SevenIsland_Mart_Text_NeedToFishOnSevenIsland, MSGBOX_NPC
# 45 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	end
# 46 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 47 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 48 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_Text_MonHavePersonalitiesOfTheirOwn::
# 49 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 34 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 50 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "POKéMON have personalities of their\n"
# 51 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "own, just like people.\p"
# 52 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "My PIKACHU has a HASTY nature,\n"
# 53 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "so it grew to be a speedy POKéMON.$"
# 54 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 55 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_Text_PreparationsCompleteForRuins::
# 56 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 41 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 57 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "Okay, preparations are complete\n"
# 58 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "for me to explore the RUINS.$"
# 59 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 60 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_Text_NeedToFishOnSevenIsland::
# 61 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 46 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
# 62 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "I need to fish on SEVEN ISLAND.\p"
# 63 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "That will complete my fishing tour\n"
# 64 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "of the SEVII ISLANDS.\p"
# 65 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "I'd better stock up on some\n"
# 66 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "POKé BALLS first, though.$"
