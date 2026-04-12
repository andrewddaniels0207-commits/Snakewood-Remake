# 1 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
# 5 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_OnTransition::
# 11 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_TWO_ISLAND
# 13 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_EventScript_GBAKid::
# 29 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner, MSGBOX_NPC
# 31 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_EventScript_BugCatcher::
# 35 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape, MSGBOX_NPC
# 37 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner::
# 41 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 29 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have you visited the GAME CORNER\n"
# 43 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "already?\p"
# 44 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's no good to go alone.\n"
# 45 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You have to take a friend along.$"
# 46 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 47 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape::
# 48 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 49 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Not many people live on\n"
# 50 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TWO ISLAND.\p"
# 51 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There is this old lady who lives\n"
# 52 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "out on the cape.\p"
# 53 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "She's been there since I don't know\n"
# 54 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "when.$"
