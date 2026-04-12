# 1 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 8 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 15 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SLATEPORT_NURSE
# 21 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 23 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 25 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 27 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 17 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 28 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 29 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Sailor::
# 33 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
# 35 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Woman::
# 39 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 27 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
# 41 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon::
# 45 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 31 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Want a tip for battling?\p"
# 47 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I'd say it's raising different kinds\n"
# 48 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "of POKéMON in a balanced manner.\p"
# 49 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "It's no good to make just one\n"
# 50 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON strong.\p"
# 51 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If it has a type disadvantage,\n"
# 52 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "it might not stand a chance.$"
# 53 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend::
# 55 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 41 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
# 56 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I trade POKéMON with my friends.\p"
# 57 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If a traded POKéMON is holding an\n"
# 58 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "item, it makes me twice as happy!$"
