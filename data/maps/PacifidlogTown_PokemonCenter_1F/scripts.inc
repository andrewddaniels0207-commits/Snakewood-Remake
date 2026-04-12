# 1 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
# 5 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_OnTransition::
# 11 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
# 13 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 18 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PACIFIDLOG_NURSE
# 19 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 21 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 25 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
# 27 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Girl::
# 31 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 21 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
# 33 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Woman::
# 37 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 38 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
# 39 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_OldMan::
# 43 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 31 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 44 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats, MSGBOX_NPC
# 45 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 46 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard::
# 49 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 35 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "What color is your TRAINER CARD?\n"
# 51 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Mine's copper!$"
# 52 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola::
# 54 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 55 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "PACIFIDLOG TOWN floats on top of\n"
# 56 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "a colony of CORSOLA.\p"
# 57 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "If I told you that, would you believe\n"
# 58 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "me?$"
# 59 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats::
# 61 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 47 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
# 62 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "The ancestors of the people in\n"
# 63 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "PACIFIDLOG were said to have been\l"
# 64 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "born on boats and then lived and died \l"
# 65 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "aboard them.\p"
# 66 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "I understand that they lived that way\n"
# 67 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "because they were searching for\l"
# 68 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "something.$"
