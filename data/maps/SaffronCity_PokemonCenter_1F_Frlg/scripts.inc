# 1 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SAFFRON_CITY
# 13 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Gentleman::
# 29 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame, MSGBOX_NPC
# 31 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Woman::
# 35 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies, MSGBOX_NPC
# 37 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Youngster::
# 41 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 43 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 31 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 44 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 45 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 32 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 46 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 47 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq SaffronCity_PokemonCenter_1F_EventScript_Youngster_2
# 48 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Youngster_1:
# 49 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 35 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 50 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets
# 51 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 52 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 53 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 54 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 55 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Youngster_2:
# 56 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 33 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 57 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone
# 58 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto SaffronCity_PokemonCenter_1F_EventScript_Youngster_1
# 59 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 60 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 61 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone::
# 62 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 41 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 63 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff
# 64 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 65 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 66 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 67 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 68 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 69 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies::
# 70 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 46 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 71 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON growth rates differ from\n"
# 72 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "species to species.$"
# 73 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 74 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame::
# 75 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 51 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 76 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "SILPH CO. is widely known to all.\p"
# 77 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's a victim of its own fame - it\n"
# 78 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "attracted TEAM ROCKET.$"
# 79 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 80 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets::
# 81 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 57 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 82 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Sigh…\n"
# 83 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Wouldn't this be great?\p"
# 84 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If the ELITE FOUR came and\n"
# 85 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "stomped TEAM ROCKET?$"
# 86 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 87 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff::
# 88 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 64 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
# 89 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET took off!\n"
# 90 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "We can go out safely again!\l"
# 91 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That's great!$"
