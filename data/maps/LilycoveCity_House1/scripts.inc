# 1 "data/maps/LilycoveCity_House1/scripts.pory"

# 2 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_MapScripts::
# 3 "data/maps/LilycoveCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_House1/scripts.pory"

# 5 "data/maps/LilycoveCity_House1/scripts.pory"

# 6 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_EventScript_ExpertM::
# 7 "data/maps/LilycoveCity_House1/scripts.pory"
# 4 "data/maps/LilycoveCity_House1/scripts.pory"
# 8 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_PokemonPartnersNotTools, MSGBOX_NPC
# 9 "data/maps/LilycoveCity_House1/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_House1/scripts.pory"

# 11 "data/maps/LilycoveCity_House1/scripts.pory"

# 12 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_EventScript_Kecleon::
# 13 "data/maps/LilycoveCity_House1/scripts.pory"
# 9 "data/maps/LilycoveCity_House1/scripts.pory"
# 14 "data/maps/LilycoveCity_House1/scripts.pory"
	lock
# 15 "data/maps/LilycoveCity_House1/scripts.pory"
# 10 "data/maps/LilycoveCity_House1/scripts.pory"
# 16 "data/maps/LilycoveCity_House1/scripts.pory"
	faceplayer
# 17 "data/maps/LilycoveCity_House1/scripts.pory"
# 11 "data/maps/LilycoveCity_House1/scripts.pory"
# 18 "data/maps/LilycoveCity_House1/scripts.pory"
	waitse
# 19 "data/maps/LilycoveCity_House1/scripts.pory"
# 12 "data/maps/LilycoveCity_House1/scripts.pory"
# 20 "data/maps/LilycoveCity_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 21 "data/maps/LilycoveCity_House1/scripts.pory"
# 13 "data/maps/LilycoveCity_House1/scripts.pory"
# 22 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_Kecleon, MSGBOX_DEFAULT
# 23 "data/maps/LilycoveCity_House1/scripts.pory"
# 14 "data/maps/LilycoveCity_House1/scripts.pory"
# 24 "data/maps/LilycoveCity_House1/scripts.pory"
	waitmoncry
# 25 "data/maps/LilycoveCity_House1/scripts.pory"
# 15 "data/maps/LilycoveCity_House1/scripts.pory"
# 26 "data/maps/LilycoveCity_House1/scripts.pory"
	release
# 27 "data/maps/LilycoveCity_House1/scripts.pory"
	end
# 28 "data/maps/LilycoveCity_House1/scripts.pory"

# 29 "data/maps/LilycoveCity_House1/scripts.pory"

# 30 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_Text_PokemonPartnersNotTools::
# 31 "data/maps/LilycoveCity_House1/scripts.pory"
# 19 "data/maps/LilycoveCity_House1/scripts.pory"
# 32 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "POKéMON are partners to people.\n"
# 33 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "They aren't our tools.\p"
# 34 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "Unfortunately, there are some people\n"
# 35 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "who fail to understand that…$"
# 36 "data/maps/LilycoveCity_House1/scripts.pory"

# 37 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_Text_Kecleon::
# 38 "data/maps/LilycoveCity_House1/scripts.pory"
# 26 "data/maps/LilycoveCity_House1/scripts.pory"
# 39 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "KECLEON: Ruroro?$"
