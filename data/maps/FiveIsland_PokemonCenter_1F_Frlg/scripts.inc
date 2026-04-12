# 1 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_PokemonCenter_1F_OnTransition
# 5 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_OnTransition::
# 11 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_FIVE_ISLAND
# 13 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_Chef::
# 29 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal, MSGBOX_NPC
# 31 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 35 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon, MSGBOX_NPC
# 37 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal::
# 41 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 29 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm on my way to prepare a meal\n"
# 43 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "for a certain high-society person.$"
# 44 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon::
# 46 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 34 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 47 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You're on a quest to catch every\n"
# 48 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "single kind of POKéMON?\p"
# 49 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…How incredible. Please tell me if\n"
# 50 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "you catch a strong one!$"
