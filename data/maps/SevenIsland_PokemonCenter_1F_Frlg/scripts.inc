SevenIsland_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SevenIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
	end


SevenIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


SevenIsland_PokemonCenter_1F_EventScript_OldMan::
# 20 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections, MSGBOX_NPC
	end


SevenIsland_PokemonCenter_1F_EventScript_Sailor::
# 25 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere, MSGBOX_NPC
	end


SevenIsland_PokemonCenter_1F_EventScript_Beauty::
# 30 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower, MSGBOX_NPC
	end


SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections::
# 34 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "On this island, different events\n"
	.string "occur depending on connections.\p"
	.string "What are those connections?\p"
	.string "They are for you to discover on\n"
	.string "your own.$"

SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere::
# 42 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Did you ride a SEAGALLOP ferry\n"
	.string "to get here?\p"
	.string "There are at least ten of those\n"
	.string "high-speed ships.\p"
	.string "I don't know where they all go,\n"
	.string "though.$"

SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower::
# 51 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you're confident, you should\n"
	.string "check out TRAINER TOWER.$"
