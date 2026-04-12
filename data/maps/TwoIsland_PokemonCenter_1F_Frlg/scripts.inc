TwoIsland_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


TwoIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_TWO_ISLAND
	end


TwoIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


TwoIsland_PokemonCenter_1F_EventScript_GBAKid::
# 20 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner, MSGBOX_NPC
	end


TwoIsland_PokemonCenter_1F_EventScript_BugCatcher::
# 25 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape, MSGBOX_NPC
	end


TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner::
# 29 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have you visited the GAME CORNER\n"
	.string "already?\p"
	.string "It's no good to go alone.\n"
	.string "You have to take a friend along.$"

TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape::
# 36 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Not many people live on\n"
	.string "TWO ISLAND.\p"
	.string "There is this old lady who lives\n"
	.string "out on the cape.\p"
	.string "She's been there since I don't know\n"
	.string "when.$"
