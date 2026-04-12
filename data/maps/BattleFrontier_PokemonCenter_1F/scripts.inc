BattleFrontier_PokemonCenter_1F_MapScripts::
# 2 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_PokemonCenter_1F_OnTransition
# 3 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


BattleFrontier_PokemonCenter_1F_OnTransition::
# 7 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST
	end


BattleFrontier_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FRONTIER_NURSE
# 13 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	release
	end


BattleFrontier_PokemonCenter_1F_EventScript_SchoolKid::
# 21 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon, MSGBOX_NPC
	end


BattleFrontier_PokemonCenter_1F_EventScript_Man::
# 26 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena, MSGBOX_NPC
	end


BattleFrontier_PokemonCenter_1F_EventScript_Picnicker::
# 31 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge, MSGBOX_NPC
	end


BattleFrontier_PokemonCenter_1F_EventScript_Skitty::
# 36 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	lock
# 37 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	faceplayer
# 38 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitse
# 39 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 40 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_Skitty, MSGBOX_DEFAULT
# 41 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 42 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	release
	end


BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon::
# 46 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "There was someone here using a \n"
	.string "POKéMON I've never seen before.\p"
	.string "I never learned about it at\n"
	.string "TRAINER'S SCHOOL at least.\p"
	.string "I wonder where you can catch POKéMON\n"
	.string "like that.$"

BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena::
# 55 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "Okay! Next stop, the BATTLE ARENA!\n"
	.string "I'd better get the right POKéMON from\l"
	.string "the PC Storage System.$"

BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge::
# 61 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "Giggle… I'm going to go through every\n"
	.string "challenge with just this baby!$"

BattleFrontier_PokemonCenter_1F_Text_Skitty::
# 66 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "SKITTY: Mya myaaah!$"
