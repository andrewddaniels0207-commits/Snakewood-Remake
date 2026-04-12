CeladonCity_DepartmentStore_5F_Frlg_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_5F_EventScript_Gentleman::
# 4 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_ExplainStatEnhancers, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_5F_EventScript_Sailor::
# 9 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_HereForStatEnhancers, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_5F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_Drugstore, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_5F_EventScript_ClerkXItems::
# 19 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	lock
# 20 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 22 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	waitmessage
# 23 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_5F_XItems
# 24 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 25 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_5F_XItems::
# 30 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_5F_EventScript_ClerkVitamins::
# 35 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	lock
# 36 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	faceplayer
# 37 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 38 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	waitmessage
# 39 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_5F_Vitamins
# 40 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 41 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_5F_Vitamins::
# 46 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_5F_Text_ExplainStatEnhancers::
# 50 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "POKéMON stat enhancers can be\n"
	.string "bought only here.\p"
	.string "HP UP increases the base HP of a\n"
	.string "POKéMON.\p"
	.string "CALCIUM raises the base SP. ATK\n"
	.string "stat of one POKéMON.\p"
	.string "ZINC boosts the base SP. DEF stat\n"
	.string "of one POKéMON.\p"
	.string "CARBOS enhances the base SPEED\n"
	.string "stat.$"

CeladonCity_DepartmentStore_5F_Text_HereForStatEnhancers::
# 63 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "I'm here for POKéMON stat\n"
	.string "enhancers.\p"
	.string "PROTEIN increases the base ATTACK\n"
	.string "power.\p"
	.string "IRON increases the base DEFENSE\n"
	.string "stat.$"

CeladonCity_DepartmentStore_5F_Text_Drugstore::
# 72 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "5F: DRUGSTORE$"
