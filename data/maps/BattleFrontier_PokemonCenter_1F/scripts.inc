# 1 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_MapScripts::
# 3 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_PokemonCenter_1F_OnTransition
# 5 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_OnTransition::
# 11 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST
# 13 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 18 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FRONTIER_NURSE
# 19 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 21 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 25 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	release
# 27 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_EventScript_SchoolKid::
# 31 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 21 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon, MSGBOX_NPC
# 33 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_EventScript_Man::
# 37 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 38 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena, MSGBOX_NPC
# 39 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_EventScript_Picnicker::
# 43 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 31 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 44 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge, MSGBOX_NPC
# 45 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 46 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_EventScript_Skitty::
# 49 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 36 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	lock
# 51 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 37 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 52 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	faceplayer
# 53 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 38 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 54 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitse
# 55 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 39 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 56 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 57 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 58 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_Skitty, MSGBOX_DEFAULT
# 59 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 41 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 60 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 61 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 42 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 62 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	release
# 63 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 64 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 65 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon::
# 67 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 68 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "There was someone here using a \n"
# 69 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "POKéMON I've never seen before.\p"
# 70 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "I never learned about it at\n"
# 71 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "TRAINER'S SCHOOL at least.\p"
# 72 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "I wonder where you can catch POKéMON\n"
# 73 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "like that.$"
# 74 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 75 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena::
# 76 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 55 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 77 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "Okay! Next stop, the BATTLE ARENA!\n"
# 78 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "I'd better get the right POKéMON from\l"
# 79 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "the PC Storage System.$"
# 80 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 81 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge::
# 82 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 61 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 83 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "Giggle… I'm going to go through every\n"
# 84 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "challenge with just this baby!$"
# 85 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 86 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_Text_Skitty::
# 87 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 66 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
# 88 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "SKITTY: Mya myaaah!$"
