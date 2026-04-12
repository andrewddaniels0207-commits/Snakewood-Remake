# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition::
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_Girl_2
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl_1:
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl_2:
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_EventScript_Girl_1
# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 63 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 65 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 66 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC::
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any POKéMON TRAINER to use.\p"
# 76 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 77 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat::
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 81 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS are great!\p"
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 83 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 85 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable::
# 87 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 88 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 92 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 93 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub::
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 96 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded POKéMON right away.$"
