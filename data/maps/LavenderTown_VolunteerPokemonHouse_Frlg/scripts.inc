# 1 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 5 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 6 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji::
# 7 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 4 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 8 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock
# 9 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 5 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 10 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 6 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 12 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POKE_FLUTE, LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_2
# 13 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_1:
# 14 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 9 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 15 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis
# 16 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 10 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 17 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	checkitemspace ITEM_POKE_FLUTE
# 18 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 11 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 19 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 20 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto_if_eq LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_5
# 21 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_4:
# 22 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 14 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 23 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_POKE_FLUTE
# 24 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 15 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 25 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	giveitem_msg LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji, ITEM_POKE_FLUTE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 26 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 16 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 27 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute
# 28 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 17 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 29 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 30 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 31 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 32 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_2:
# 33 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 7 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 34 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute
# 35 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_1
# 36 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 37 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_5:
# 38 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 12 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 39 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute
# 40 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_4
# 41 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 42 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 43 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute::
# 44 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 22 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 45 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
# 46 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 23 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 47 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 48 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 49 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 50 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 51 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute::
# 52 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 28 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 53 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
# 54 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 29 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 55 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 56 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 57 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 58 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 59 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
# 60 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 34 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 61 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock
# 62 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 35 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 63 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	faceplayer
# 64 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 36 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 65 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 0
# 66 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 37 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 67 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
# 68 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 38 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 69 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 70 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 71 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 72 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 73 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
# 74 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 43 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 75 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
# 76 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 77 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 78 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 79 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
# 80 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 48 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 81 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock
# 82 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 49 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 83 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	faceplayer
# 84 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 50 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 85 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_Youngster_2
# 86 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Youngster_1:
# 87 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 53 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 88 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
# 89 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 54 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 90 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 91 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 92 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 93 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Youngster_2:
# 94 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 51 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 95 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack
# 96 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto LavenderTown_VolunteerPokemonHouse_EventScript_Youngster_1
# 97 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 98 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 99 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack::
# 100 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 59 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 101 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
# 102 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 60 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 103 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 104 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 105 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 106 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 107 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
# 108 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 65 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 109 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock
# 110 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 66 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 111 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	faceplayer
# 112 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 67 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 113 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitse
# 114 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 68 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 115 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
# 116 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 69 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 117 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
# 118 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 70 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 119 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitmoncry
# 120 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 71 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 121 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 122 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 123 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 124 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 125 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
# 126 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 76 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 127 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock
# 128 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 77 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 129 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	faceplayer
# 130 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 78 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 131 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitse
# 132 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 79 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 133 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 134 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 80 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 135 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
# 136 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 81 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 137 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitmoncry
# 138 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 82 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 139 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 140 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 141 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 142 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 143 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
# 144 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 87 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 145 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lockall
# 146 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 88 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 147 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 2
# 148 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 89 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 149 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
# 150 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 90 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 151 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	releaseall
# 152 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 153 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 154 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 155 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
# 156 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 95 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 157 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
# 158 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 159 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 160 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 161 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_Text_HearMrFujiNotFromAroundHere::
# 162 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 99 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 163 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "I recently moved to this town.\p"
# 164 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "I hear that MR. FUJI's not from\n"
# 165 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "these parts originally, either.$"
# 166 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 167 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo::
# 168 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 105 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 169 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "That's odd, MR. FUJI isn't here.\n"
# 170 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Where'd he go?$"
# 171 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 172 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother::
# 173 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 110 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 174 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "MR. FUJI had been praying alone\n"
# 175 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "for CUBONE's mother.$"
# 176 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 177 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons::
# 178 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 115 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 179 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "This is really MR. FUJI's house.\p"
# 180 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "He's really kind.\p"
# 181 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "He looks after abandoned and\n"
# 182 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "orphaned POKéMON.$"
# 183 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 184 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug::
# 185 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 122 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 186 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "It's so warm!\n"
# 187 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON are so nice to hug.$"
# 188 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 189 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_Nidorino::
# 190 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 127 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 191 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "NIDORINO: Gaoo!$"
# 192 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 193 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_Psyduck::
# 194 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 131 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 195 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "PSYDUCK: Gwappa!$"
# 196 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 197 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis::
# 198 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 135 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 199 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "MR. FUJI: {PLAYER}…\p"
# 200 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Your POKéDEX quest is one that\n"
# 201 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "requires strong dedication.\p"
# 202 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Without deep love for POKéMON,\n"
# 203 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "your quest may fail.\p"
# 204 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "I'm not sure if this will help you,\n"
# 205 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "but I'd like you to have it.$"
# 206 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 207 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji::
# 208 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 145 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 209 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "{PLAYER} received a POKé FLUTE\n"
# 210 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "from MR. FUJI.$"
# 211 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 212 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute::
# 213 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 150 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 214 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Upon hearing the POKé FLUTE,\n"
# 215 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "sleeping POKéMON will spring awake.\p"
# 216 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Try using it on POKéMON that are\n"
# 217 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "sleeping obstacles.$"
# 218 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 219 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis::
# 220 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 157 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 221 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "You must make room for this!$"
# 222 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 223 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou::
# 224 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 161 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 225 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "MR. FUJI: Has my POKé FLUTE\n"
# 226 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "helped you?$"
# 227 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 228 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped::
# 229 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 166 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 230 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON FAN MAGAZINE\n"
# 231 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Monthly Grand Prize Drawing!\p"
# 232 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "The application form is…\p"
# 233 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Gone! It's been clipped out.\n"
# 234 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Someone must have applied already.$"
# 235 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 236 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf::
# 237 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 174 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
# 238 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON magazines line the shelf.\p"
# 239 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON INSIDER…\p"
# 240 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON FAN…$"
