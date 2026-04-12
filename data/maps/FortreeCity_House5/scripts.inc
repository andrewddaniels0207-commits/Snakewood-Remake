# 1 "data/maps/FortreeCity_House5/scripts.pory"

# 2 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_MapScripts::
# 3 "data/maps/FortreeCity_House5/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House5/scripts.pory"

# 5 "data/maps/FortreeCity_House5/scripts.pory"

# 6 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_PokefanF::
# 7 "data/maps/FortreeCity_House5/scripts.pory"
# 4 "data/maps/FortreeCity_House5/scripts.pory"
# 8 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_Text_TreeHousesAreGreat, MSGBOX_NPC
# 9 "data/maps/FortreeCity_House5/scripts.pory"
	end
# 10 "data/maps/FortreeCity_House5/scripts.pory"

# 11 "data/maps/FortreeCity_House5/scripts.pory"

# 12 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_Man::
# 13 "data/maps/FortreeCity_House5/scripts.pory"
# 9 "data/maps/FortreeCity_House5/scripts.pory"
# 14 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_Text_AdaptedToNature, MSGBOX_NPC
# 15 "data/maps/FortreeCity_House5/scripts.pory"
	end
# 16 "data/maps/FortreeCity_House5/scripts.pory"

# 17 "data/maps/FortreeCity_House5/scripts.pory"

# 18 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_Zigzagoon::
# 19 "data/maps/FortreeCity_House5/scripts.pory"
# 14 "data/maps/FortreeCity_House5/scripts.pory"
# 20 "data/maps/FortreeCity_House5/scripts.pory"
	lock
# 21 "data/maps/FortreeCity_House5/scripts.pory"
# 15 "data/maps/FortreeCity_House5/scripts.pory"
# 22 "data/maps/FortreeCity_House5/scripts.pory"
	faceplayer
# 23 "data/maps/FortreeCity_House5/scripts.pory"
# 16 "data/maps/FortreeCity_House5/scripts.pory"
# 24 "data/maps/FortreeCity_House5/scripts.pory"
	waitse
# 25 "data/maps/FortreeCity_House5/scripts.pory"
# 17 "data/maps/FortreeCity_House5/scripts.pory"
# 26 "data/maps/FortreeCity_House5/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 27 "data/maps/FortreeCity_House5/scripts.pory"
# 18 "data/maps/FortreeCity_House5/scripts.pory"
# 28 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_Text_Zigzagoon, MSGBOX_DEFAULT
# 29 "data/maps/FortreeCity_House5/scripts.pory"
# 19 "data/maps/FortreeCity_House5/scripts.pory"
# 30 "data/maps/FortreeCity_House5/scripts.pory"
	waitmoncry
# 31 "data/maps/FortreeCity_House5/scripts.pory"
# 20 "data/maps/FortreeCity_House5/scripts.pory"
# 32 "data/maps/FortreeCity_House5/scripts.pory"
	release
# 33 "data/maps/FortreeCity_House5/scripts.pory"
	end
# 34 "data/maps/FortreeCity_House5/scripts.pory"

# 35 "data/maps/FortreeCity_House5/scripts.pory"

# 36 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_Text_TreeHousesAreGreat::
# 37 "data/maps/FortreeCity_House5/scripts.pory"
# 24 "data/maps/FortreeCity_House5/scripts.pory"
# 38 "data/maps/FortreeCity_House5/scripts.pory"
	.string "The tree houses of FORTREE are great!\p"
# 39 "data/maps/FortreeCity_House5/scripts.pory"
	.string "I think it's the number one town for\n"
# 40 "data/maps/FortreeCity_House5/scripts.pory"
	.string "living together with POKéMON.$"
# 41 "data/maps/FortreeCity_House5/scripts.pory"

# 42 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_Text_AdaptedToNature::
# 43 "data/maps/FortreeCity_House5/scripts.pory"
# 30 "data/maps/FortreeCity_House5/scripts.pory"
# 44 "data/maps/FortreeCity_House5/scripts.pory"
	.string "POKéMON and people have adapted to\n"
# 45 "data/maps/FortreeCity_House5/scripts.pory"
	.string "nature for survival.\p"
# 46 "data/maps/FortreeCity_House5/scripts.pory"
	.string "There's no need to make nature\n"
# 47 "data/maps/FortreeCity_House5/scripts.pory"
	.string "conform to the way we want to live.$"
# 48 "data/maps/FortreeCity_House5/scripts.pory"

# 49 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_Text_Zigzagoon::
# 50 "data/maps/FortreeCity_House5/scripts.pory"
# 37 "data/maps/FortreeCity_House5/scripts.pory"
# 51 "data/maps/FortreeCity_House5/scripts.pory"
	.string "ZIGZAGOON: Bufuu!$"
