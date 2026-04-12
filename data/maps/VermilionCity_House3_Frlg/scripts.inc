# 1 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 5 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 6 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_EventScript_Boy::
# 7 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 4 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 8 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_PidgeyFlyLetterToSaffron, MSGBOX_NPC
# 9 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	end
# 10 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 11 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 12 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_EventScript_Lass::
# 13 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 9 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 14 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_SendMyPidgeyToUnionRoom, MSGBOX_NPC
# 15 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	end
# 16 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 17 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 18 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_EventScript_Pidgey::
# 19 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 14 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 20 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	lock
# 21 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 15 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 22 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 16 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 24 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	waitse
# 25 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 17 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 26 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
# 27 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 18 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 28 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_Pidgey
# 29 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 19 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 30 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	waitmoncry
# 31 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 20 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 32 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	release
# 33 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	end
# 34 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 35 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 36 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_EventScript_Letter::
# 37 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 25 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 38 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_DearPippiLetter, MSGBOX_SIGN
# 39 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	end
# 40 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 41 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 42 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_Text_PidgeyFlyLetterToSaffron::
# 43 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 29 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 44 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I'm getting my PIDGEY to fly a\n"
# 45 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "letter to SAFFRON in the north.$"
# 46 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 47 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_Text_Pidgey::
# 48 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 34 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 49 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "PIDGEY: Kurukkoo!$"
# 50 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 51 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_Text_DearPippiLetter::
# 52 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 38 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 53 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "Dear PIPPI,\n"
# 54 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I hope to see you soon.\p"
# 55 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I heard SAFFRON has problems with\n"
# 56 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "TEAM ROCKET.\p"
# 57 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "VERMILION appears to be safe.$"
# 58 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 59 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_Text_SendMyPidgeyToUnionRoom::
# 60 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 46 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
# 61 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I want to exchange MAIL with all\n"
# 62 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "sorts of people.\p"
# 63 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I send my PIDGEY to a UNION ROOM\n"
# 64 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "to exchange MAIL for me.$"
