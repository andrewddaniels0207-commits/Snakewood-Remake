# 1 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 6 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_EventScript_Hiker::
# 7 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 4 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 8 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	lock
# 9 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 5 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 6 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM28_FROM_ROCKET, CeruleanCity_House2_EventScript_Hiker_2
# 13 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_EventScript_Hiker_1:
# 14 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 9 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_RocketsStoleTMForDig
# 16 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 17 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	release
# 18 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	end
# 19 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 20 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_EventScript_Hiker_2:
# 21 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 7 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	goto CeruleanCity_House2_EventScript_HikerGotTM28
# 23 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	goto CeruleanCity_House2_EventScript_Hiker_1
# 24 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 25 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 26 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_EventScript_HikerGotTM28::
# 27 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeachDiglettDigWithoutTM
# 29 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 16 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	release
# 31 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	end
# 32 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 33 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 34 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_EventScript_Lass::
# 35 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 21 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood, MSGBOX_NPC
# 37 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	end
# 38 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 39 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 40 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_EventScript_WallHole::
# 41 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 42 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeamRocketLeftWayOut, MSGBOX_SIGN
# 43 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	end
# 44 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 45 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 46 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_Text_RocketsStoleTMForDig::
# 47 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 48 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "Those miserable ROCKETS!\p"
# 49 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "Look what they've done to my\n"
# 50 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "house!\p"
# 51 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "They stole a TM for teaching\n"
# 52 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "POKéMON how to DIG holes!\p"
# 53 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "I was going to use it on a\n"
# 54 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "MANKEY or a SANDSHREW…\p"
# 55 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "That cost me a bundle, it did!$"
# 56 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 57 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_Text_TeachDiglettDigWithoutTM::
# 58 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 41 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 59 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "I figure what's lost is lost.\p"
# 60 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "I decided to teach DIGLETT how to\n"
# 61 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "DIG without a TM.$"
# 62 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 63 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood::
# 64 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 47 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 65 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "TEAM ROCKET must be trying to DIG\n"
# 66 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "their way into no good!$"
# 67 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 68 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_Text_TeamRocketLeftWayOut::
# 69 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 52 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
# 70 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "TEAM ROCKET left a way out!$"
