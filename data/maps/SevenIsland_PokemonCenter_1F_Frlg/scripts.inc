# 1 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
# 5 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_OnTransition::
# 11 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
# 13 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_OldMan::
# 29 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections, MSGBOX_NPC
# 31 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_Sailor::
# 35 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere, MSGBOX_NPC
# 37 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_Beauty::
# 41 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower, MSGBOX_NPC
# 43 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 44 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 46 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections::
# 47 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 34 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "On this island, different events\n"
# 49 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "occur depending on connections.\p"
# 50 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "What are those connections?\p"
# 51 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "They are for you to discover on\n"
# 52 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "your own.$"
# 53 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 54 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere::
# 55 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 56 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Did you ride a SEAGALLOP ferry\n"
# 57 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to get here?\p"
# 58 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There are at least ten of those\n"
# 59 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "high-speed ships.\p"
# 60 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I don't know where they all go,\n"
# 61 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "though.$"
# 62 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 63 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower::
# 64 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 51 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 65 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you're confident, you should\n"
# 66 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "check out TRAINER TOWER.$"
