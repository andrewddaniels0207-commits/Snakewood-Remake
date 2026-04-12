FiveIsland_Frlg_MapScripts::
# 2 "data/maps/FiveIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_OnTransition
	.byte 0


FiveIsland_OnTransition::
# 6 "data/maps/FiveIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND
	end


FiveIsland_EventScript_IslandSign::
# 11 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_IslandSign, MSGBOX_SIGN
	end


FiveIsland_EventScript_BugCatcher::
# 16 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_WeirdBuildingInMeadow, MSGBOX_NPC
	end


FiveIsland_EventScript_Fisher::
# 21 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_BeenGettingBusierAroundHere, MSGBOX_NPC
	end


FiveIsland_Text_IslandSign::
# 25 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "FIVE ISLAND\n"
	.string "Chrono Island: Where Time Goes$"

FiveIsland_Text_WeirdBuildingInMeadow::
# 30 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "Oh, this stinks. I wanted to play in\n"
	.string "the MEADOW.\p"
	.string "But they put up a weird building\n"
	.string "on it, so I can't play there.$"

FiveIsland_Text_BeenGettingBusierAroundHere::
# 37 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "It's been getting busier around\n"
	.string "these parts lately.\p"
	.string "I haven't been catching many good\n"
	.string "fish lately, either.$"
