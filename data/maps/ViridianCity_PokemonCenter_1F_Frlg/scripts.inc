# 1 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
# 13 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Boy::
# 29 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown, MSGBOX_NPC
# 31 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Gentleman::
# 35 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC, MSGBOX_NPC
# 37 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Youngster::
# 41 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons, MSGBOX_NPC
# 43 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 44 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 46 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC::
# 47 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 34 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Please feel free to use that PC in\n"
# 49 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "the corner.\p"
# 50 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The receptionist told me so.\n"
# 51 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's so kind of her!$"
# 52 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 53 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown::
# 54 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 41 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 55 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's a POKéMON CENTER in every\n"
# 56 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "town ahead.\p"
# 57 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "They charge no money, so don't\n"
# 58 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "be shy about healing POKéMON.$"
# 59 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 60 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons::
# 61 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
# 62 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON CENTERS heal your tired,\n"
# 63 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "hurt, or fainted POKéMON.\p"
# 64 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "They make all POKéMON completely\n"
# 65 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "healthy.$"
