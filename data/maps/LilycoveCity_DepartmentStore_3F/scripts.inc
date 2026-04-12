LilycoveCity_DepartmentStore_3F_MapScripts::
	.byte 0


LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
# 4 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 5 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 6 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 8 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
# 9 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins::
# 15 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemartlistend
	return


LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
# 19 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 20 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 21 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 22 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 23 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
# 24 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 25 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters::
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemartlistend
	return


LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
# 34 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
# 39 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_3F_EventScript_Woman::
# 44 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon::
# 48 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "For quickly toughening up POKéMON,\n"
	.string "items are the best.\p"
	.string "PROTEIN boosts ATTACK,\n"
	.string "and CALCIUM raises SP. ATK.$"

LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance::
# 55 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I want my POKéMON to have more\n"
	.string "endurance.\p"
	.string "I'm trying to decide whether to raise\n"
	.string "DEFENSE with IRON, or SP. DEF with ZINC.$"

LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon::
# 62 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I gave a CARBOS to my POKéMON,\n"
	.string "and its SPEED went up.$"
