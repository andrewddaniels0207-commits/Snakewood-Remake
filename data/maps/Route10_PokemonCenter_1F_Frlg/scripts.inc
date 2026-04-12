# 1 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_PokemonCenter_1F_OnTransition
# 5 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_OnTransition::
# 11 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
# 13 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 8 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE10
# 15 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 16 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 17 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 21 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 25 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 16 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 26 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 27 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 28 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 29 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 30 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_FatMan::
# 31 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 21 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 32 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000, MSGBOX_NPC
# 33 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 34 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 35 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 36 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Gentleman::
# 37 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 26 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 38 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers, MSGBOX_NPC
# 39 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 40 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 41 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 42 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Youngster::
# 43 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 31 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 44 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender, MSGBOX_NPC
# 45 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 46 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 47 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 48 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide::
# 49 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 50 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 51 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 37 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 52 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 53 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 38 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 54 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 55 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 39 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 56 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE, Route10_PokemonCenter_1F_EventScript_Aide_2
# 57 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide_1:
# 58 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 59 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons, MSGBOX_YESNO
# 60 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 43 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 61 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 62 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq Route10_PokemonCenter_1F_EventScript_Aide_5
# 63 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide_4:
# 64 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 46 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 65 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 66 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 47 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 67 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 68 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 69 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 70 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 49 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 71 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 72 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 50 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 73 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_0x8006, REQUIRED_OWNED_MONS
# 74 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_lt Route10_PokemonCenter_1F_EventScript_Aide_8
# 75 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide_7:
# 76 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 53 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 77 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GreatHereYouGo
# 78 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 54 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 79 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	checkitemspace ITEM_EVERSTONE
# 80 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 55 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 81 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 82 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq Route10_PokemonCenter_1F_EventScript_Aide_11
# 83 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide_10:
# 84 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 58 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 85 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem_msg Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide, ITEM_EVERSTONE
# 86 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 59 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 87 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE
# 88 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 60 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 89 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
# 90 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 61 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 91 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 92 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 93 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 94 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide_2:
# 95 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 40 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 96 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone
# 97 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route10_PokemonCenter_1F_EventScript_Aide_1
# 98 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 99 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide_5:
# 100 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 44 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 101 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto Aide_EventScript_DeclineCheckMons
# 102 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route10_PokemonCenter_1F_EventScript_Aide_4
# 103 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 104 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide_8:
# 105 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 51 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 106 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto Aide_EventScript_HaventCaughtEnough
# 107 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route10_PokemonCenter_1F_EventScript_Aide_7
# 108 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 109 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide_11:
# 110 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 56 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 111 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto Aide_EventScript_NoRoomForItem
# 112 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route10_PokemonCenter_1F_EventScript_Aide_10
# 113 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 114 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 115 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone::
# 116 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 66 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 117 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
# 118 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 67 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 119 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 120 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 121 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 122 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 123 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo::
# 124 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 72 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 125 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_OWNED_MONS
# 126 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 73 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 127 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_EVERSTONE
# 128 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 129 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 130 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 131 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers::
# 132 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 77 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 133 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The types of POKéMON match up\n"
# 134 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "differently with each other.\p"
# 135 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Every type is stronger than some\n"
# 136 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "types and weaker than others.$"
# 137 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 138 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000::
# 139 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 84 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 140 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "A NUGGET is totally useless.\n"
# 141 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So I sold it for ¥5000.$"
# 142 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 143 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender::
# 144 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 89 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 145 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I heard that ghosts haunt\n"
# 146 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "LAVENDER TOWN.$"
# 147 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 148 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons::
# 149 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 94 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 150 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh… {PLAYER}!\n"
# 151 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I've been looking for you!\p"
# 152 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's me, one of the ever-present\n"
# 153 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "AIDES to PROF. OAK.\p"
# 154 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If your POKéDEX has complete data\n"
# 155 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "on twenty species, I'm supposed to\l"
# 156 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "give you a reward from PROF. OAK.\p"
# 157 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "He entrusted me with this\n"
# 158 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "EVERSTONE.\p"
# 159 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, {PLAYER}, let me ask you.\p"
# 160 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have you gathered data on at least\n"
# 161 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "twenty kinds of POKéMON?$"
# 162 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 163 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_GreatHereYouGo::
# 164 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 109 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 165 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
# 166 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
# 167 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Congratulations!\n"
# 168 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Here you go!$"
# 169 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 170 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide::
# 171 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 116 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 172 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} received the EVERSTONE\n"
# 173 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "from the AIDE.$"
# 174 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 175 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_ExplainEverstone::
# 176 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 121 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
# 177 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Making POKéMON evolve certainly\n"
# 178 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "can add to the POKéDEX.\p"
# 179 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "However, at times, you may not\n"
# 180 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "want a certain POKéMON to evolve.\p"
# 181 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "In that case, give the EVERSTONE\n"
# 182 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to that POKéMON.\p"
# 183 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It will prevent evolution according\n"
# 184 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to the PROFESSOR.$"
