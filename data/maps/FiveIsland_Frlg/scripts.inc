# 1 "data/maps/FiveIsland_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_Frlg/scripts.pory"
# 2 "data/maps/FiveIsland_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_OnTransition
# 5 "data/maps/FiveIsland_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FiveIsland_Frlg/scripts.pory"

# 7 "data/maps/FiveIsland_Frlg/scripts.pory"

# 8 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_OnTransition::
# 9 "data/maps/FiveIsland_Frlg/scripts.pory"
# 6 "data/maps/FiveIsland_Frlg/scripts.pory"
# 10 "data/maps/FiveIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND
# 11 "data/maps/FiveIsland_Frlg/scripts.pory"
	end
# 12 "data/maps/FiveIsland_Frlg/scripts.pory"

# 13 "data/maps/FiveIsland_Frlg/scripts.pory"

# 14 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_EventScript_IslandSign::
# 15 "data/maps/FiveIsland_Frlg/scripts.pory"
# 11 "data/maps/FiveIsland_Frlg/scripts.pory"
# 16 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_IslandSign, MSGBOX_SIGN
# 17 "data/maps/FiveIsland_Frlg/scripts.pory"
	end
# 18 "data/maps/FiveIsland_Frlg/scripts.pory"

# 19 "data/maps/FiveIsland_Frlg/scripts.pory"

# 20 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_EventScript_BugCatcher::
# 21 "data/maps/FiveIsland_Frlg/scripts.pory"
# 16 "data/maps/FiveIsland_Frlg/scripts.pory"
# 22 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_WeirdBuildingInMeadow, MSGBOX_NPC
# 23 "data/maps/FiveIsland_Frlg/scripts.pory"
	end
# 24 "data/maps/FiveIsland_Frlg/scripts.pory"

# 25 "data/maps/FiveIsland_Frlg/scripts.pory"

# 26 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_EventScript_Fisher::
# 27 "data/maps/FiveIsland_Frlg/scripts.pory"
# 21 "data/maps/FiveIsland_Frlg/scripts.pory"
# 28 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_BeenGettingBusierAroundHere, MSGBOX_NPC
# 29 "data/maps/FiveIsland_Frlg/scripts.pory"
	end
# 30 "data/maps/FiveIsland_Frlg/scripts.pory"

# 31 "data/maps/FiveIsland_Frlg/scripts.pory"

# 32 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_Text_IslandSign::
# 33 "data/maps/FiveIsland_Frlg/scripts.pory"
# 25 "data/maps/FiveIsland_Frlg/scripts.pory"
# 34 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "FIVE ISLAND\n"
# 35 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "Chrono Island: Where Time Goes$"
# 36 "data/maps/FiveIsland_Frlg/scripts.pory"

# 37 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_Text_WeirdBuildingInMeadow::
# 38 "data/maps/FiveIsland_Frlg/scripts.pory"
# 30 "data/maps/FiveIsland_Frlg/scripts.pory"
# 39 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "Oh, this stinks. I wanted to play in\n"
# 40 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "the MEADOW.\p"
# 41 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "But they put up a weird building\n"
# 42 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "on it, so I can't play there.$"
# 43 "data/maps/FiveIsland_Frlg/scripts.pory"

# 44 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_Text_BeenGettingBusierAroundHere::
# 45 "data/maps/FiveIsland_Frlg/scripts.pory"
# 37 "data/maps/FiveIsland_Frlg/scripts.pory"
# 46 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "It's been getting busier around\n"
# 47 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "these parts lately.\p"
# 48 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "I haven't been catching many good\n"
# 49 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "fish lately, either.$"
