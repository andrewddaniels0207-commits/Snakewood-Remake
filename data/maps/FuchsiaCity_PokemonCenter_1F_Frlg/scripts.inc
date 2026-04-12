FuchsiaCity_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


FuchsiaCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_FUCHSIA_CITY
	end


FuchsiaCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


FuchsiaCity_PokemonCenter_1F_EventScript_Man::
# 20 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon, MSGBOX_NPC
	end


FuchsiaCity_PokemonCenter_1F_EventScript_CooltrainerF::
# 25 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian, MSGBOX_NPC
	end


FuchsiaCity_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex, MSGBOX_NPC
	end


FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon::
# 34 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You can't become a good TRAINER\n"
	.string "with just one strong POKéMON.\p"
	.string "But raising many POKéMON evenly\n"
	.string "is no easy task, either.$"

FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian::
# 41 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's a narrow trail west of\n"
	.string "VIRIDIAN CITY.\p"
	.string "It goes to the POKéMON LEAGUE HQ.\n"
	.string "The HQ governs all TRAINERS.$"

FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex::
# 48 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you're working on a POKéDEX,\n"
	.string "visit the SAFARI ZONE.\p"
	.string "All sorts of rare POKéMON breed\n"
	.string "there.$"
