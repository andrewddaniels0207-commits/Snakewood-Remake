Route119_House_MapScripts::
	.byte 0


Route119_House_EventScript_Woman::
# 4 "data/maps/Route119_House/scripts.pory"
	msgbox Route119_House_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
	end


Route119_House_EventScript_Wingull::
# 9 "data/maps/Route119_House/scripts.pory"
	lock
# 10 "data/maps/Route119_House/scripts.pory"
	faceplayer
# 11 "data/maps/Route119_House/scripts.pory"
	waitse
# 12 "data/maps/Route119_House/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 13 "data/maps/Route119_House/scripts.pory"
	msgbox Route119_House_Text_Wingull, MSGBOX_DEFAULT
# 14 "data/maps/Route119_House/scripts.pory"
	waitmoncry
# 15 "data/maps/Route119_House/scripts.pory"
	release
	end


Route119_House_Text_RumorAboutCaveOfOrigin::
# 19 "data/maps/Route119_House/scripts.pory"
	.string "I heard about a cave called the CAVE\n"
	.string "OF ORIGIN.\p"
	.string "People rumor that the spirits of\n"
	.string "POKéMON are revived there. Could\l"
	.string "something like that really happen?$"

Route119_House_Text_Wingull::
# 27 "data/maps/Route119_House/scripts.pory"
	.string "WINGULL: Pihyoh!$"
