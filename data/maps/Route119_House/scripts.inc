# 1 "data/maps/Route119_House/scripts.pory"

# 2 "data/maps/Route119_House/scripts.pory"
Route119_House_MapScripts::
# 3 "data/maps/Route119_House/scripts.pory"
	.byte 0
# 4 "data/maps/Route119_House/scripts.pory"

# 5 "data/maps/Route119_House/scripts.pory"

# 6 "data/maps/Route119_House/scripts.pory"
Route119_House_EventScript_Woman::
# 7 "data/maps/Route119_House/scripts.pory"
# 4 "data/maps/Route119_House/scripts.pory"
# 8 "data/maps/Route119_House/scripts.pory"
	msgbox Route119_House_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
# 9 "data/maps/Route119_House/scripts.pory"
	end
# 10 "data/maps/Route119_House/scripts.pory"

# 11 "data/maps/Route119_House/scripts.pory"

# 12 "data/maps/Route119_House/scripts.pory"
Route119_House_EventScript_Wingull::
# 13 "data/maps/Route119_House/scripts.pory"
# 9 "data/maps/Route119_House/scripts.pory"
# 14 "data/maps/Route119_House/scripts.pory"
	lock
# 15 "data/maps/Route119_House/scripts.pory"
# 10 "data/maps/Route119_House/scripts.pory"
# 16 "data/maps/Route119_House/scripts.pory"
	faceplayer
# 17 "data/maps/Route119_House/scripts.pory"
# 11 "data/maps/Route119_House/scripts.pory"
# 18 "data/maps/Route119_House/scripts.pory"
	waitse
# 19 "data/maps/Route119_House/scripts.pory"
# 12 "data/maps/Route119_House/scripts.pory"
# 20 "data/maps/Route119_House/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 21 "data/maps/Route119_House/scripts.pory"
# 13 "data/maps/Route119_House/scripts.pory"
# 22 "data/maps/Route119_House/scripts.pory"
	msgbox Route119_House_Text_Wingull, MSGBOX_DEFAULT
# 23 "data/maps/Route119_House/scripts.pory"
# 14 "data/maps/Route119_House/scripts.pory"
# 24 "data/maps/Route119_House/scripts.pory"
	waitmoncry
# 25 "data/maps/Route119_House/scripts.pory"
# 15 "data/maps/Route119_House/scripts.pory"
# 26 "data/maps/Route119_House/scripts.pory"
	release
# 27 "data/maps/Route119_House/scripts.pory"
	end
# 28 "data/maps/Route119_House/scripts.pory"

# 29 "data/maps/Route119_House/scripts.pory"

# 30 "data/maps/Route119_House/scripts.pory"
Route119_House_Text_RumorAboutCaveOfOrigin::
# 31 "data/maps/Route119_House/scripts.pory"
# 19 "data/maps/Route119_House/scripts.pory"
# 32 "data/maps/Route119_House/scripts.pory"
	.string "I heard about a cave called the CAVE\n"
# 33 "data/maps/Route119_House/scripts.pory"
	.string "OF ORIGIN.\p"
# 34 "data/maps/Route119_House/scripts.pory"
	.string "People rumor that the spirits of\n"
# 35 "data/maps/Route119_House/scripts.pory"
	.string "POKéMON are revived there. Could\l"
# 36 "data/maps/Route119_House/scripts.pory"
	.string "something like that really happen?$"
# 37 "data/maps/Route119_House/scripts.pory"

# 38 "data/maps/Route119_House/scripts.pory"
Route119_House_Text_Wingull::
# 39 "data/maps/Route119_House/scripts.pory"
# 27 "data/maps/Route119_House/scripts.pory"
# 40 "data/maps/Route119_House/scripts.pory"
	.string "WINGULL: Pihyoh!$"
