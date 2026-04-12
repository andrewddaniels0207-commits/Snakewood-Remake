CeladonCity_DepartmentStore_2F_Frlg_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_2F_EventScript_UnusedNPC::
# 4 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_2F_EventScript_Lass::
# 9 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_2F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_FloorSign, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_2F_EventScript_ClerkItems::
# 19 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	lock
# 20 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 22 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	waitmessage
# 23 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_2F_Items
# 24 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 25 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_2F_Items::
# 30 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_2F_EventScript_ClerkTMs::
# 35 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	lock
# 36 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	faceplayer
# 37 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 38 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	waitmessage
# 39 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_2F_TMs
# 40 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 41 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_2F_TMs::
# 46 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel::
# 50 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "SUPER REPEL keeps weak POKéMON at\n"
	.string "bay…\p"
	.string "Hmm, it's a more powerful REPEL.$"

CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings::
# 56 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "For long outings, you should buy\n"
	.string "REVIVE.$"

CeladonCity_DepartmentStore_2F_Text_FloorSign::
# 61 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "Top-Grade Items for TRAINERS!\p"
	.string "2F: TRAINER'S MARKET$"

CeladonCity_DepartmentStore_2F_Text_LanceComesToBuyCapes::
# 66 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "We have a customer, LANCE, who\n"
	.string "occasionally comes.\p"
	.string "He always buys capes.\p"
	.string "I wonder… Does he have many\n"
	.string "identical capes at home?$"
