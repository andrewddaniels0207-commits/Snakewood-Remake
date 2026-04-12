SSAnne_1F_Room3_Frlg_MapScripts::
	.byte 0


SSAnne_1F_Room3_EventScript_LittleGirl::
# 4 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room3_Text_AlwaysTravelWithWigglytuff, MSGBOX_NPC
	end


SSAnne_1F_Room3_EventScript_BaldingMan::
# 9 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room3_Text_CruiseIsElegantAndCozy, MSGBOX_NPC
	end


SSAnne_1F_Room3_EventScript_Wigglytuff::
# 14 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	lock
# 15 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	waitse
# 17 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	playmoncry SPECIES_WIGGLYTUFF, CRY_MODE_NORMAL
# 18 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room3_Text_Wigglytuff
# 19 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	waitmoncry
# 20 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	release
	end


SSAnne_1F_Room3_Text_CruiseIsElegantAndCozy::
# 24 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	.string "A world cruise is so elegant yet\n"
	.string "cozy!$"

SSAnne_1F_Room3_Text_AlwaysTravelWithWigglytuff::
# 29 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	.string "I always travel with WIGGLYTUFF.\n"
	.string "I never leave home without it.$"

SSAnne_1F_Room3_Text_Wigglytuff::
# 34 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	.string "WIGGLYTUFF: Puup pupuu!$"
