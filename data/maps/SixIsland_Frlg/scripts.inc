# 1 "data/maps/SixIsland_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_Frlg_MapScripts::
# 3 "data/maps/SixIsland_Frlg/scripts.pory"
# 2 "data/maps/SixIsland_Frlg/scripts.pory"
# 4 "data/maps/SixIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_OnTransition
# 5 "data/maps/SixIsland_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SixIsland_Frlg/scripts.pory"

# 7 "data/maps/SixIsland_Frlg/scripts.pory"

# 8 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_OnTransition::
# 9 "data/maps/SixIsland_Frlg/scripts.pory"
# 6 "data/maps/SixIsland_Frlg/scripts.pory"
# 10 "data/maps/SixIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND
# 11 "data/maps/SixIsland_Frlg/scripts.pory"
	end
# 12 "data/maps/SixIsland_Frlg/scripts.pory"

# 13 "data/maps/SixIsland_Frlg/scripts.pory"

# 14 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_EventScript_Hiker::
# 15 "data/maps/SixIsland_Frlg/scripts.pory"
# 11 "data/maps/SixIsland_Frlg/scripts.pory"
# 16 "data/maps/SixIsland_Frlg/scripts.pory"
	msgbox SixIsland_Text_ThatWayToWaterPathRuinValley, MSGBOX_NPC
# 17 "data/maps/SixIsland_Frlg/scripts.pory"
	end
# 18 "data/maps/SixIsland_Frlg/scripts.pory"

# 19 "data/maps/SixIsland_Frlg/scripts.pory"

# 20 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_EventScript_Boy::
# 21 "data/maps/SixIsland_Frlg/scripts.pory"
# 16 "data/maps/SixIsland_Frlg/scripts.pory"
# 22 "data/maps/SixIsland_Frlg/scripts.pory"
	msgbox SixIsland_Text_SkyAtNightIsFantastic, MSGBOX_NPC
# 23 "data/maps/SixIsland_Frlg/scripts.pory"
	end
# 24 "data/maps/SixIsland_Frlg/scripts.pory"

# 25 "data/maps/SixIsland_Frlg/scripts.pory"

# 26 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_EventScript_IslandSign::
# 27 "data/maps/SixIsland_Frlg/scripts.pory"
# 21 "data/maps/SixIsland_Frlg/scripts.pory"
# 28 "data/maps/SixIsland_Frlg/scripts.pory"
	msgbox SixIsland_Text_IslandSign, MSGBOX_SIGN
# 29 "data/maps/SixIsland_Frlg/scripts.pory"
	end
# 30 "data/maps/SixIsland_Frlg/scripts.pory"

# 31 "data/maps/SixIsland_Frlg/scripts.pory"

# 32 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_Text_IslandSign::
# 33 "data/maps/SixIsland_Frlg/scripts.pory"
# 25 "data/maps/SixIsland_Frlg/scripts.pory"
# 34 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "SIX ISLAND\n"
# 35 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "Fortune Island of Aged Wisdom$"
# 36 "data/maps/SixIsland_Frlg/scripts.pory"

# 37 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_Text_ThatWayToWaterPathRuinValley::
# 38 "data/maps/SixIsland_Frlg/scripts.pory"
# 30 "data/maps/SixIsland_Frlg/scripts.pory"
# 39 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "Keep going this way and you'll get\n"
# 40 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "to the WATER PATH.\p"
# 41 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "Stay on that and you'll get to\n"
# 42 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "the RUIN VALLEY.$"
# 43 "data/maps/SixIsland_Frlg/scripts.pory"

# 44 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_Text_SkyAtNightIsFantastic::
# 45 "data/maps/SixIsland_Frlg/scripts.pory"
# 37 "data/maps/SixIsland_Frlg/scripts.pory"
# 46 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "When you're this far away from the\n"
# 47 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "city, the sky at night is fantastic.$"
