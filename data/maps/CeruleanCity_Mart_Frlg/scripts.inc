CeruleanCity_Mart_Frlg_MapScripts::
	.byte 0


CeruleanCity_Mart_EventScript_Youngster::
# 4 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox CeruleanCity_Mart_Text_RepelWorksOnWeakMons, MSGBOX_NPC
	end


CeruleanCity_Mart_EventScript_Woman::
# 9 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy, MSGBOX_NPC
	end


CeruleanCity_Mart_EventScript_Clerk::
# 14 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	lock
# 15 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	waitmessage
# 18 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	pokemart CeruleanCity_Mart_Items
# 19 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 20 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	release
	end


CeruleanCity_Mart_Items::
# 25 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	release
	end


CeruleanCity_Mart_Text_RepelWorksOnWeakMons::
# 29 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "REPEL not only keeps bugs away,\n"
	.string "it also works on weak POKéMON.\p"
	.string "Put your strongest POKéMON at the\n"
	.string "left of the POKéMON LIST.\p"
	.string "If your first POKéMON is strong,\n"
	.string "REPEL's effect is boosted.$"

CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy::
# 38 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "Do you know about RARE CANDY?\n"
	.string "They don't sell it in shops.\p"
	.string "I think it makes POKéMON grow\n"
	.string "very quickly all of a sudden.$"
