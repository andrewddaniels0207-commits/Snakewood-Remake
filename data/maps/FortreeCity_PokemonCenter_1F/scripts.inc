# 1 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FORTREE_CITY
# 13 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 18 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FORTREE_NURSE
# 19 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 21 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 25 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
# 27 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Gentleman::
# 31 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 21 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
# 33 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Man::
# 37 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 38 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
# 39 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Boy::
# 43 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 31 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 44 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
# 45 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 46 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_GoToSafariZone::
# 49 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 35 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Listen, kid, are you working\n"
# 51 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "on a POKéDEX?\p"
# 52 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Hmm… Go to the SAFARI ZONE.\n"
# 53 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "That's my suggestion.$"
# 54 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat::
# 56 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 42 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 57 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Have you done anything at\n"
# 58 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "the RECORD CORNER?\p"
# 59 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It's pretty neat. It mixes and matches\n"
# 60 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "the records of TRAINERS.\p"
# 61 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know quite how it works,\n"
# 62 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "but it's cool. It's exciting, even!$"
# 63 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav::
# 65 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 51 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
# 66 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Oh, wow, you have a POKéNAV!\n"
# 67 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "And it's just like mine!\p"
# 68 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Do you know about POKéNAV's\n"
# 69 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "MATCH CALL system?\p"
# 70 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Access it, and you can chat with\n"
# 71 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "registered TRAINERS anytime.\p"
# 72 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It also shows you which TRAINERS\n"
# 73 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "want a rematch with you.\p"
# 74 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It's really nifty! Those DEVON guys\n"
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "sure know what they're doing!$"
