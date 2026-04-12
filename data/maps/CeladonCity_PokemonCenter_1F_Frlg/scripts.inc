# 1 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CELADON_CITY
# 13 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_Gentleman::
# 29 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_PokeFluteAwakensSleepingMons, MSGBOX_NPC
# 31 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_CooltrainerF::
# 35 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_RodeHereFromFuchsia, MSGBOX_NPC
# 37 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_Youngster::
# 41 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_GoToCyclingRoadIfIHadBike, MSGBOX_NPC
# 43 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 44 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 46 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_Text_PokeFluteAwakensSleepingMons::
# 47 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 34 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "A POKé FLUTE awakens sleeping\n"
# 49 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON. You know that.\p"
# 50 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It does so with a sound that only\n"
# 51 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "they can hear.$"
# 52 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 53 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_Text_RodeHereFromFuchsia::
# 54 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 41 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 55 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I rode here from FUCHSIA.\p"
# 56 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's an uphill ride on CYCLING\n"
# 57 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "ROAD, so I'm exhausted.$"
# 58 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 59 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_Text_GoToCyclingRoadIfIHadBike::
# 60 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 47 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
# 61 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If I had a BIKE, I would go to\n"
# 62 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CYCLING ROAD!$"
