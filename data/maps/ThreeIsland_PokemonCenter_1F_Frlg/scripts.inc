# 1 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_PokemonCenter_1F_OnTransition
# 5 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_OnTransition::
# 11 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_THREE_ISLAND
# 13 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Sailor::
# 29 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands, MSGBOX_NPC
# 31 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Lass::
# 35 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest, MSGBOX_NPC
# 37 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Rocker::
# 41 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto, MSGBOX_NPC
# 43 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 44 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 46 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto::
# 47 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 34 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Hey, did you hear the news?\p"
# 49 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The PC network here can now link\n"
# 50 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "with PCs in KANTO.\p"
# 51 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I don't know how that came about,\n"
# 52 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "but it's fantastic!$"
# 53 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 54 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands::
# 55 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 56 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's impossible to SURF between the\n"
# 57 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "islands around these parts.\p"
# 58 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The tides are too fast and\n"
# 59 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "treacherous.$"
# 60 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 61 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest::
# 62 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 49 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 63 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Let's crush BERRIES!\n"
# 64 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…That'd be wasting BERRIES?\p"
# 65 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You can always find some BERRIES\n"
# 66 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "on the ground in BERRY FOREST.$"
