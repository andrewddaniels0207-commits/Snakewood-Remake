# 1 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 2 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_MapScripts::
# 3 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 2 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 4 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_SeafloorCavern_OnResume
# 5 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 3 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 6 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Underwater_SeafloorCavern_OnTransition
# 7 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 4 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 8 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Underwater_SeafloorCavern_OnLoad
# 9 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.byte 0
# 10 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 11 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 12 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_OnTransition::
# 13 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 8 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 14 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setflag FLAG_LANDMARK_SEAFLOOR_CAVERN
# 15 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 9 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 16 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, Underwater_SeafloorCavern_OnTransition_2
# 17 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_OnTransition_1:
# 18 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	end
# 19 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 20 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_OnTransition_2:
# 21 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 10 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 22 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	goto Underwater_SeafloorCavern_EventScript_HideSubmarine
# 23 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	goto Underwater_SeafloorCavern_OnTransition_1
# 24 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 25 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 26 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_EventScript_HideSubmarine::
# 27 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 16 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 28 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setflag FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE
# 29 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	end
# 30 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 31 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 32 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_OnLoad::
# 33 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 21 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 34 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, Underwater_SeafloorCavern_OnLoad_2
# 35 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_OnLoad_1:
# 36 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	end
# 37 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 38 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_OnLoad_2:
# 39 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 22 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 40 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	call Underwater_SeafloorCavern_EventScript_SetSubmarineGoneMetatiles
# 41 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	goto Underwater_SeafloorCavern_OnLoad_1
# 42 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 43 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 44 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_EventScript_SetSubmarineGoneMetatiles::
# 45 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 28 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 46 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 3, METATILE_Underwater_RockWall, TRUE
# 47 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 29 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 48 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 3, METATILE_Underwater_RockWall, TRUE
# 49 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 30 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 50 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 3, METATILE_Underwater_RockWall, TRUE
# 51 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 31 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 52 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 3, METATILE_Underwater_RockWall, TRUE
# 53 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 32 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 54 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 4, METATILE_Underwater_FloorShadow, FALSE
# 55 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 33 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 56 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 4, METATILE_Underwater_FloorShadow, FALSE
# 57 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 34 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 58 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 4, METATILE_Underwater_FloorShadow, FALSE
# 59 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 35 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 60 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 4, METATILE_Underwater_FloorShadow, FALSE
# 61 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 36 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 62 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 5, METATILE_Underwater_FloorShadow, FALSE
# 63 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 37 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 64 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 5, METATILE_Underwater_FloorShadow, FALSE
# 65 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 38 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 66 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 5, METATILE_Underwater_FloorShadow, FALSE
# 67 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 39 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 68 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 5, METATILE_Underwater_FloorShadow, FALSE
# 69 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	return
# 70 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 71 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 72 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_OnResume::
# 73 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 44 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 74 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setdivewarp MAP_SEAFLOOR_CAVERN_ENTRANCE, 10, 17
# 75 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	end
# 76 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 77 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 78 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_EventScript_CheckStolenSub::
# 79 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 49 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 80 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	msgbox Underwater_SeafloorCavern_Text_SubExplorer1, MSGBOX_SIGN
# 81 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	end
# 82 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 83 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 84 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_Text_SubExplorer1::
# 85 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 53 "data/maps/Underwater_SeafloorCavern/scripts.pory"
# 86 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "“SUBMARINE EXPLORER 1” is painted\n"
# 87 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "on the hull.\p"
# 88 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "This is the submarine TEAM AQUA\n"
# 89 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "stole in SLATEPORT!\p"
# 90 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "TEAM AQUA must have gone\n"
# 91 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "ashore here.$"
