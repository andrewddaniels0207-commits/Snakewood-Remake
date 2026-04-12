# 1 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 5 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 6 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_EventScript_CooltrainerF::
# 7 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 4 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 8 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	lock
# 9 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 5 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 10 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 6 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 12 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_House1_EventScript_CooltrainerF_2
# 13 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_EventScript_CooltrainerF_1:
# 14 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 9 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 15 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_RocketsKilledCubonesMother
# 16 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 10 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 17 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	release
# 18 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	end
# 19 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 20 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_EventScript_CooltrainerF_2:
# 21 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 7 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 22 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	goto LavenderTown_House1_EventScript_CooltrainerFGhostGone
# 23 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	goto LavenderTown_House1_EventScript_CooltrainerF_1
# 24 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 25 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 26 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_EventScript_CooltrainerFGhostGone::
# 27 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 15 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 28 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_GhostOfPokemonTowerIsGone
# 29 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 16 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 30 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	release
# 31 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	end
# 32 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 33 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 34 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_EventScript_Cubone::
# 35 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 21 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 36 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	lock
# 37 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 22 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 38 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	faceplayer
# 39 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 23 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 40 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	waitse
# 41 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 24 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 42 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 43 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 25 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 44 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_Cubone
# 45 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 26 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 46 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	waitmoncry
# 47 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 27 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 48 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	release
# 49 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	end
# 50 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 51 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 52 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_Text_Cubone::
# 53 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 31 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 54 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "CUBONE: Kyarugoo!$"
# 55 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 56 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_Text_RocketsKilledCubonesMother::
# 57 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 35 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 58 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "Those horrible ROCKETS!\n"
# 59 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "They deserve no mercy!\p"
# 60 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "That poor CUBONE's mother…\p"
# 61 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "It was killed trying to escape from\n"
# 62 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "TEAM ROCKET.$"
# 63 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 64 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_Text_GhostOfPokemonTowerIsGone::
# 65 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 43 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
# 66 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "The ghost of POKéMON TOWER is\n"
# 67 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "gone!\p"
# 68 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "Someone must have soothed its\n"
# 69 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "restless spirit!$"
