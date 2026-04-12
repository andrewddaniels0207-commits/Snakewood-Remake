LavenderTown_House1_Frlg_MapScripts::
	.byte 0


LavenderTown_House1_EventScript_CooltrainerF::
# 4 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	lock
# 5 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_House1_EventScript_CooltrainerF_2
LavenderTown_House1_EventScript_CooltrainerF_1:
# 9 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_RocketsKilledCubonesMother
# 10 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	release
	end

LavenderTown_House1_EventScript_CooltrainerF_2:
# 7 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	goto LavenderTown_House1_EventScript_CooltrainerFGhostGone
	goto LavenderTown_House1_EventScript_CooltrainerF_1


LavenderTown_House1_EventScript_CooltrainerFGhostGone::
# 15 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_GhostOfPokemonTowerIsGone
# 16 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	release
	end


LavenderTown_House1_EventScript_Cubone::
# 21 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	lock
# 22 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	waitse
# 24 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 25 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_Cubone
# 26 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	waitmoncry
# 27 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	release
	end


LavenderTown_House1_Text_Cubone::
# 31 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "CUBONE: Kyarugoo!$"

LavenderTown_House1_Text_RocketsKilledCubonesMother::
# 35 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "Those horrible ROCKETS!\n"
	.string "They deserve no mercy!\p"
	.string "That poor CUBONE's mother…\p"
	.string "It was killed trying to escape from\n"
	.string "TEAM ROCKET.$"

LavenderTown_House1_Text_GhostOfPokemonTowerIsGone::
# 43 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "The ghost of POKéMON TOWER is\n"
	.string "gone!\p"
	.string "Someone must have soothed its\n"
	.string "restless spirit!$"
