SootopolisCity_House4_MapScripts::
	.byte 0


SootopolisCity_House4_EventScript_Man::
# 4 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_AncientTreasuresWaitingInSea, MSGBOX_NPC
	end


SootopolisCity_House4_EventScript_Woman::
# 9 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_StrollUnderwaterWithPokemon, MSGBOX_NPC
	end


SootopolisCity_House4_EventScript_Azumarill::
# 14 "data/maps/SootopolisCity_House4/scripts.pory"
	lock
# 15 "data/maps/SootopolisCity_House4/scripts.pory"
	faceplayer
# 16 "data/maps/SootopolisCity_House4/scripts.pory"
	waitse
# 17 "data/maps/SootopolisCity_House4/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 18 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_Azumarill, MSGBOX_DEFAULT
# 19 "data/maps/SootopolisCity_House4/scripts.pory"
	waitmoncry
# 20 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end


SootopolisCity_House4_Text_AncientTreasuresWaitingInSea::
# 24 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Listen up, and I'll tell you something\n"
	.string "good.\p"
	.string "There's supposed to be an ancient\n"
	.string "ruin in the sea around here.\p"
	.string "There could be treasures just waiting\n"
	.string "to be discovered down there.$"

SootopolisCity_House4_Text_StrollUnderwaterWithPokemon::
# 33 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Ancient treasures…\p"
	.string "It would be nice if they existed, but\n"
	.string "even if they didn't, it would be so\l"
	.string "beautiful to take an underwater\l"
	.string "stroll with my POKéMON.$"

SootopolisCity_House4_Text_Azumarill::
# 41 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "AZUMARILL: Marurii.$"
