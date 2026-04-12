FiveIsland_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


FiveIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_FIVE_ISLAND
	end


FiveIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


FiveIsland_PokemonCenter_1F_EventScript_Chef::
# 20 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal, MSGBOX_NPC
	end


FiveIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 25 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon, MSGBOX_NPC
	end


FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal::
# 29 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm on my way to prepare a meal\n"
	.string "for a certain high-society person.$"

FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon::
# 34 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You're on a quest to catch every\n"
	.string "single kind of POKéMON?\p"
	.string "…How incredible. Please tell me if\n"
	.string "you catch a strong one!$"
