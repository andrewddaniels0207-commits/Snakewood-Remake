# 1 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 5 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 6 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_EventScript_Lass::
# 7 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 4 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 8 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_DontLookAtMyLetter, MSGBOX_NPC
# 9 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	end
# 10 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 11 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 12 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_EventScript_Youngster::
# 13 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 9 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 14 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_GettingCopycatPokeDoll, MSGBOX_NPC
# 15 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	end
# 16 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 17 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 18 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_EventScript_Pidgey::
# 19 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 14 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 20 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	lock
# 21 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 15 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 22 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 16 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 24 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	waitse
# 25 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 17 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 26 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
# 27 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 18 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 28 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_Pidgey
# 29 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 19 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 30 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	waitmoncry
# 31 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 20 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 32 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	release
# 33 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	end
# 34 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 35 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 36 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_EventScript_Letter::
# 37 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 25 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 38 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_ExplainPPUp, MSGBOX_SIGN
# 39 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	end
# 40 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 41 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 42 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_Text_DontLookAtMyLetter::
# 43 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 29 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 44 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "…Thank you for writing.\n"
# 45 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "I hope to see you soon!\p"
# 46 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "…Hey!\n"
# 47 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "Don't look at my letter!$"
# 48 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 49 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_Text_Pidgey::
# 50 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 36 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 51 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "PIDGEY: Kurukkoo!$"
# 52 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 53 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_Text_GettingCopycatPokeDoll::
# 54 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 40 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 55 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "The COPYCAT is cute!\n"
# 56 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "I'm getting her a POKé DOLL.$"
# 57 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 58 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_Text_ExplainPPUp::
# 59 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 45 "data/maps/SaffronCity_House_Frlg/scripts.pory"
# 60 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "I was given a PP UP as a gift.\p"
# 61 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "It's used to increase the PP of\n"
# 62 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "a POKéMON's move.\p"
# 63 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "I should use it on a powerful move\n"
# 64 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "with only a few PP.$"
