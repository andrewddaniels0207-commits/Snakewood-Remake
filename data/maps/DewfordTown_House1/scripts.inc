# 1 "data/maps/DewfordTown_House1/scripts.pory"

# 2 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_MapScripts::
# 3 "data/maps/DewfordTown_House1/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_House1/scripts.pory"

# 5 "data/maps/DewfordTown_House1/scripts.pory"

# 6 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Man::
# 7 "data/maps/DewfordTown_House1/scripts.pory"
# 4 "data/maps/DewfordTown_House1/scripts.pory"
# 8 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
# 9 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 10 "data/maps/DewfordTown_House1/scripts.pory"

# 11 "data/maps/DewfordTown_House1/scripts.pory"

# 12 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Woman::
# 13 "data/maps/DewfordTown_House1/scripts.pory"
# 9 "data/maps/DewfordTown_House1/scripts.pory"
# 14 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
# 15 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 16 "data/maps/DewfordTown_House1/scripts.pory"

# 17 "data/maps/DewfordTown_House1/scripts.pory"

# 18 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Zigzagoon::
# 19 "data/maps/DewfordTown_House1/scripts.pory"
# 14 "data/maps/DewfordTown_House1/scripts.pory"
# 20 "data/maps/DewfordTown_House1/scripts.pory"
	lock
# 21 "data/maps/DewfordTown_House1/scripts.pory"
# 15 "data/maps/DewfordTown_House1/scripts.pory"
# 22 "data/maps/DewfordTown_House1/scripts.pory"
	faceplayer
# 23 "data/maps/DewfordTown_House1/scripts.pory"
# 16 "data/maps/DewfordTown_House1/scripts.pory"
# 24 "data/maps/DewfordTown_House1/scripts.pory"
	waitse
# 25 "data/maps/DewfordTown_House1/scripts.pory"
# 17 "data/maps/DewfordTown_House1/scripts.pory"
# 26 "data/maps/DewfordTown_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 27 "data/maps/DewfordTown_House1/scripts.pory"
# 18 "data/maps/DewfordTown_House1/scripts.pory"
# 28 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 29 "data/maps/DewfordTown_House1/scripts.pory"
# 19 "data/maps/DewfordTown_House1/scripts.pory"
# 30 "data/maps/DewfordTown_House1/scripts.pory"
	waitmoncry
# 31 "data/maps/DewfordTown_House1/scripts.pory"
# 20 "data/maps/DewfordTown_House1/scripts.pory"
# 32 "data/maps/DewfordTown_House1/scripts.pory"
	release
# 33 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 34 "data/maps/DewfordTown_House1/scripts.pory"

# 35 "data/maps/DewfordTown_House1/scripts.pory"

# 36 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland::
# 37 "data/maps/DewfordTown_House1/scripts.pory"
# 24 "data/maps/DewfordTown_House1/scripts.pory"
# 38 "data/maps/DewfordTown_House1/scripts.pory"
	.string "There's a lot to be said for living on\n"
# 39 "data/maps/DewfordTown_House1/scripts.pory"
	.string "a small island like this in harmony with\l"
# 40 "data/maps/DewfordTown_House1/scripts.pory"
	.string "POKéMON and the family.$"
# 41 "data/maps/DewfordTown_House1/scripts.pory"

# 42 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_LifeGoesSlowlyOnIsland::
# 43 "data/maps/DewfordTown_House1/scripts.pory"
# 30 "data/maps/DewfordTown_House1/scripts.pory"
# 44 "data/maps/DewfordTown_House1/scripts.pory"
	.string "I left the major port of SLATEPORT\n"
# 45 "data/maps/DewfordTown_House1/scripts.pory"
	.string "CITY when I married my husband here.\p"
# 46 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Life goes by slowly on this little\n"
# 47 "data/maps/DewfordTown_House1/scripts.pory"
	.string "island. But being surrounded by the\l"
# 48 "data/maps/DewfordTown_House1/scripts.pory"
	.string "beautiful sea--that's happiness, too.$"
# 49 "data/maps/DewfordTown_House1/scripts.pory"

# 50 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_Zigzagoon::
# 51 "data/maps/DewfordTown_House1/scripts.pory"
# 38 "data/maps/DewfordTown_House1/scripts.pory"
# 52 "data/maps/DewfordTown_House1/scripts.pory"
	.string "ZIGZAGOON: Guguuh!$"
