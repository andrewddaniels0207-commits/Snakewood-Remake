SaffronCity_House_Frlg_MapScripts::
	.byte 0


SaffronCity_House_EventScript_Lass::
# 4 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_DontLookAtMyLetter, MSGBOX_NPC
	end


SaffronCity_House_EventScript_Youngster::
# 9 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_GettingCopycatPokeDoll, MSGBOX_NPC
	end


SaffronCity_House_EventScript_Pidgey::
# 14 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	lock
# 15 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	waitse
# 17 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
# 18 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_Pidgey
# 19 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	waitmoncry
# 20 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	release
	end


SaffronCity_House_EventScript_Letter::
# 25 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_ExplainPPUp, MSGBOX_SIGN
	end


SaffronCity_House_Text_DontLookAtMyLetter::
# 29 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "…Thank you for writing.\n"
	.string "I hope to see you soon!\p"
	.string "…Hey!\n"
	.string "Don't look at my letter!$"

SaffronCity_House_Text_Pidgey::
# 36 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "PIDGEY: Kurukkoo!$"

SaffronCity_House_Text_GettingCopycatPokeDoll::
# 40 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "The COPYCAT is cute!\n"
	.string "I'm getting her a POKé DOLL.$"

SaffronCity_House_Text_ExplainPPUp::
# 45 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "I was given a PP UP as a gift.\p"
	.string "It's used to increase the PP of\n"
	.string "a POKéMON's move.\p"
	.string "I should use it on a powerful move\n"
	.string "with only a few PP.$"
