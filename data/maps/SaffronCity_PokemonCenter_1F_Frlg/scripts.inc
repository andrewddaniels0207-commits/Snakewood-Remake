SaffronCity_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SaffronCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SAFFRON_CITY
	end


SaffronCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame, MSGBOX_NPC
	end


SaffronCity_PokemonCenter_1F_EventScript_Woman::
# 25 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies, MSGBOX_NPC
	end


SaffronCity_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 31 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 32 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_eq SaffronCity_PokemonCenter_1F_EventScript_Youngster_2
SaffronCity_PokemonCenter_1F_EventScript_Youngster_1:
# 35 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets
# 36 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end

SaffronCity_PokemonCenter_1F_EventScript_Youngster_2:
# 33 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone
	goto SaffronCity_PokemonCenter_1F_EventScript_Youngster_1


SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone::
# 41 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff
# 42 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies::
# 46 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON growth rates differ from\n"
	.string "species to species.$"

SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame::
# 51 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "SILPH CO. is widely known to all.\p"
	.string "It's a victim of its own fame - it\n"
	.string "attracted TEAM ROCKET.$"

SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets::
# 57 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Sigh…\n"
	.string "Wouldn't this be great?\p"
	.string "If the ELITE FOUR came and\n"
	.string "stomped TEAM ROCKET?$"

SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff::
# 64 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET took off!\n"
	.string "We can go out safely again!\l"
	.string "That's great!$"
