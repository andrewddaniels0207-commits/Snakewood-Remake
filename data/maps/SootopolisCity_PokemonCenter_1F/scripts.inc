# 1 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 13 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 18 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SOOTOPOLIS_NURSE
# 19 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 21 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 25 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 27 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Gentleman::
# 31 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 21 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 33 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 35 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 23 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 36 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 37 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge SootopolisCity_PokemonCenter_1F_EventScript_Gentleman_2
# 38 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Gentleman_1:
# 39 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_Gentleman_5
# 41 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Gentleman_4:
# 42 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 29 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 43 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge, MSGBOX_DEFAULT
# 44 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 30 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 45 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 46 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 47 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Gentleman_2:
# 49 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 51 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EventScript_Gentleman_1
# 52 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Gentleman_5:
# 54 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 27 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 55 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 56 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EventScript_Gentleman_4
# 57 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 59 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries::
# 60 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 35 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 61 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn, MSGBOX_DEFAULT
# 62 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 36 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 63 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 64 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 65 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Woman::
# 68 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 41 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 69 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 70 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 42 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 71 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 72 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 43 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 73 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 74 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge SootopolisCity_PokemonCenter_1F_EventScript_Woman_2
# 75 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Woman_1:
# 76 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 77 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_Woman_5
# 78 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Woman_4:
# 79 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 49 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 80 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends, MSGBOX_DEFAULT
# 81 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 82 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 83 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 84 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 85 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Woman_2:
# 86 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 44 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 87 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 88 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EventScript_Woman_1
# 89 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 90 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Woman_5:
# 91 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 47 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 92 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 93 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EventScript_Woman_4
# 94 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 95 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 96 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries::
# 97 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 55 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 98 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon, MSGBOX_DEFAULT
# 99 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 56 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 100 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 101 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 102 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 103 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 104 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn::
# 105 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 60 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 106 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "WALLACE is rumored to be the toughest\n"
# 107 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "TRAINER in the whole HOENN region.\p"
# 108 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "This town's GYM is led by the TRAINER\n"
# 109 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "who taught WALLACE.\p"
# 110 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "But the ELITE FOUR… They're said to be\n"
# 111 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "even stronger than WALLACE's mentor.\p"
# 112 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "How strong could they be?$"
# 113 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 114 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge::
# 115 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 70 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 116 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Everyone in town has taken refuge\n"
# 117 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "and won't come out of their homes.\p"
# 118 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Even I would rather not venture\n"
# 119 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "outside.$"
# 120 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 121 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon::
# 122 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 77 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 123 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Whenever, wherever, and whatever\n"
# 124 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "happens, I will always be friends with\l"
# 125 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.\p"
# 126 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Because it's fun to be with POKéMON!$"
# 127 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 128 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends::
# 129 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 84 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
# 130 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Aren't POKéMON our friends?\p"
# 131 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Why are they going wild this way?$"
