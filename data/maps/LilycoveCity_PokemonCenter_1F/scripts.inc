# 1 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 13 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 8 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx
# 15 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx::
# 19 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	special SetLilycoveLadyGfx
# 21 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 23 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx_2
# 24 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx_1:
# 25 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 17 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 27 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx_5
# 28 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx_4:
# 29 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx_2:
# 32 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 33 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto LilycoveCity_PokemonCenter_1F_EventScript_HideContestLadyMon
# 34 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx_1
# 35 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx_5:
# 37 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 18 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 38 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto LilycoveCity_PokemonCenter_1F_EventScript_ShowContestLadyMon
# 39 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx_4
# 40 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_HideContestLadyMon::
# 43 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 44 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
# 45 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 46 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_ShowContestLadyMon::
# 49 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 29 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
# 51 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 52 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Nurse::
# 55 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 56 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LILYCOVE_NURSE
# 57 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 35 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 58 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 59 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 36 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 60 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 61 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 37 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 62 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 63 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 38 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 64 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 65 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 66 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 68 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Boy::
# 69 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 43 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 70 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon, MSGBOX_NPC
# 71 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 72 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 73 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 74 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Maniac::
# 75 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 48 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 76 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	lock
# 77 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 49 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 78 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 79 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 80 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_PokemonCenter_1F_EventScript_Maniac_2
# 81 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Maniac_1:
# 82 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 53 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 83 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels, MSGBOX_DEFAULT
# 84 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 54 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 85 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 86 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 87 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 88 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Maniac_2:
# 89 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 51 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 90 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto LilycoveCity_PokemonCenter_1F_EventScript_ManiacBadTeamGone
# 91 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto LilycoveCity_PokemonCenter_1F_EventScript_Maniac_1
# 92 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 93 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 94 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_ManiacBadTeamGone::
# 95 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 59 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 96 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels, MSGBOX_DEFAULT
# 97 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 60 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 98 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 99 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 101 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 102 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon::
# 103 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 64 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 104 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I wonder how many kinds of POKéMON\n"
# 105 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "there are in the world.\p"
# 106 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "It'd be great to cross seas and\n"
# 107 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "trade POKéMON with people far away.$"
# 108 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 109 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels::
# 110 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 71 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 111 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I've been hearing about some rotten\n"
# 112 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "scoundrels who steal POKéMON and rip\l"
# 113 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "off METEORITES.$"
# 114 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 115 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels::
# 116 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 77 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
# 117 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "Those rotten scoundrels who steal\n"
# 118 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON and rip off METEORITES…\p"
# 119 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I haven't seen them around recently.$"
