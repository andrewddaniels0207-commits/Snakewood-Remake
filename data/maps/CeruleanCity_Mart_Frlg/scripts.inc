# 1 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 6 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_EventScript_Youngster::
# 7 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 4 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 8 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox CeruleanCity_Mart_Text_RepelWorksOnWeakMons, MSGBOX_NPC
# 9 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	end
# 10 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 11 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 12 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_EventScript_Woman::
# 13 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 9 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy, MSGBOX_NPC
# 15 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	end
# 16 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 17 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 18 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_EventScript_Clerk::
# 19 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	lock
# 21 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 16 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 24 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 25 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 17 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	waitmessage
# 27 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	pokemart CeruleanCity_Mart_Items
# 29 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 19 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 31 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 32 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	release
# 33 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 35 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 36 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_Items::
# 37 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 25 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 38 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	release
# 39 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	end
# 40 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 41 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 42 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_Text_RepelWorksOnWeakMons::
# 43 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 29 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "REPEL not only keeps bugs away,\n"
# 45 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "it also works on weak POKéMON.\p"
# 46 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "Put your strongest POKéMON at the\n"
# 47 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "left of the POKéMON LIST.\p"
# 48 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "If your first POKéMON is strong,\n"
# 49 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "REPEL's effect is boosted.$"
# 50 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 51 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy::
# 52 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 38 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
# 53 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "Do you know about RARE CANDY?\n"
# 54 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "They don't sell it in shops.\p"
# 55 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "I think it makes POKéMON grow\n"
# 56 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "very quickly all of a sudden.$"
