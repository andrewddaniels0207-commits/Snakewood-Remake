# 1 "data/maps/LavaridgeTown_House/scripts.pory"

# 2 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_MapScripts::
# 3 "data/maps/LavaridgeTown_House/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_House/scripts.pory"

# 5 "data/maps/LavaridgeTown_House/scripts.pory"

# 6 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_EventScript_OldMan::
# 7 "data/maps/LavaridgeTown_House/scripts.pory"
# 4 "data/maps/LavaridgeTown_House/scripts.pory"
# 8 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
# 9 "data/maps/LavaridgeTown_House/scripts.pory"
	end
# 10 "data/maps/LavaridgeTown_House/scripts.pory"

# 11 "data/maps/LavaridgeTown_House/scripts.pory"

# 12 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_EventScript_Zigzagoon::
# 13 "data/maps/LavaridgeTown_House/scripts.pory"
# 9 "data/maps/LavaridgeTown_House/scripts.pory"
# 14 "data/maps/LavaridgeTown_House/scripts.pory"
	lock
# 15 "data/maps/LavaridgeTown_House/scripts.pory"
# 10 "data/maps/LavaridgeTown_House/scripts.pory"
# 16 "data/maps/LavaridgeTown_House/scripts.pory"
	faceplayer
# 17 "data/maps/LavaridgeTown_House/scripts.pory"
# 11 "data/maps/LavaridgeTown_House/scripts.pory"
# 18 "data/maps/LavaridgeTown_House/scripts.pory"
	waitse
# 19 "data/maps/LavaridgeTown_House/scripts.pory"
# 12 "data/maps/LavaridgeTown_House/scripts.pory"
# 20 "data/maps/LavaridgeTown_House/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 21 "data/maps/LavaridgeTown_House/scripts.pory"
# 13 "data/maps/LavaridgeTown_House/scripts.pory"
# 22 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_Zigzagoon, MSGBOX_DEFAULT
# 23 "data/maps/LavaridgeTown_House/scripts.pory"
# 14 "data/maps/LavaridgeTown_House/scripts.pory"
# 24 "data/maps/LavaridgeTown_House/scripts.pory"
	waitmoncry
# 25 "data/maps/LavaridgeTown_House/scripts.pory"
# 15 "data/maps/LavaridgeTown_House/scripts.pory"
# 26 "data/maps/LavaridgeTown_House/scripts.pory"
	release
# 27 "data/maps/LavaridgeTown_House/scripts.pory"
	end
# 28 "data/maps/LavaridgeTown_House/scripts.pory"

# 29 "data/maps/LavaridgeTown_House/scripts.pory"

# 30 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_Text_WifeWarmingEggInHotSprings::
# 31 "data/maps/LavaridgeTown_House/scripts.pory"
# 19 "data/maps/LavaridgeTown_House/scripts.pory"
# 32 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "My wife's warming an EGG in the hot\n"
# 33 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "springs. This is what she told me.\p"
# 34 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "She left two POKéMON with the DAY CARE.\n"
# 35 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "And they discovered that EGG!$"
# 36 "data/maps/LavaridgeTown_House/scripts.pory"

# 37 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_Text_Zigzagoon::
# 38 "data/maps/LavaridgeTown_House/scripts.pory"
# 26 "data/maps/LavaridgeTown_House/scripts.pory"
# 39 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "ZIGZAGOON: Pshoo!$"
