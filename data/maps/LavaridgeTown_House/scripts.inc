LavaridgeTown_House_MapScripts::
	.byte 0


LavaridgeTown_House_EventScript_OldMan::
# 4 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
	end


LavaridgeTown_House_EventScript_Zigzagoon::
# 9 "data/maps/LavaridgeTown_House/scripts.pory"
	lock
# 10 "data/maps/LavaridgeTown_House/scripts.pory"
	faceplayer
# 11 "data/maps/LavaridgeTown_House/scripts.pory"
	waitse
# 12 "data/maps/LavaridgeTown_House/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 13 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_Zigzagoon, MSGBOX_DEFAULT
# 14 "data/maps/LavaridgeTown_House/scripts.pory"
	waitmoncry
# 15 "data/maps/LavaridgeTown_House/scripts.pory"
	release
	end


LavaridgeTown_House_Text_WifeWarmingEggInHotSprings::
# 19 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "My wife's warming an EGG in the hot\n"
	.string "springs. This is what she told me.\p"
	.string "She left two POKéMON with the DAY CARE.\n"
	.string "And they discovered that EGG!$"

LavaridgeTown_House_Text_Zigzagoon::
# 26 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "ZIGZAGOON: Pshoo!$"
