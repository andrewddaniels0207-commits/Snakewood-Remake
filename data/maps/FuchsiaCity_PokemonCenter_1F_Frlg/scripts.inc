# 1 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_FUCHSIA_CITY
# 13 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_EventScript_Man::
# 29 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon, MSGBOX_NPC
# 31 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_EventScript_CooltrainerF::
# 35 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian, MSGBOX_NPC
# 37 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_EventScript_Youngster::
# 41 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex, MSGBOX_NPC
# 43 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 44 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 46 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon::
# 47 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 34 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You can't become a good TRAINER\n"
# 49 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "with just one strong POKéMON.\p"
# 50 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "But raising many POKéMON evenly\n"
# 51 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "is no easy task, either.$"
# 52 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 53 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian::
# 54 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 41 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 55 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's a narrow trail west of\n"
# 56 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "VIRIDIAN CITY.\p"
# 57 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It goes to the POKéMON LEAGUE HQ.\n"
# 58 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The HQ governs all TRAINERS.$"
# 59 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 60 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex::
# 61 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
# 62 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you're working on a POKéDEX,\n"
# 63 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "visit the SAFARI ZONE.\p"
# 64 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "All sorts of rare POKéMON breed\n"
# 65 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "there.$"
