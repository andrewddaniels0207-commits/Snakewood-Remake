# 1 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_Frlg_MapScripts::
# 3 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 6 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_EventScript_Woman::
# 7 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 4 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 8 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	lock
# 9 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 5 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 10 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 6 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 12 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	checkplayergender
# 13 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 7 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 14 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 15 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	goto_if_eq SSAnne_1F_Room4_EventScript_Woman_2
# 16 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_EventScript_Woman_1:
# 17 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 10 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 18 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room4_Text_WaitressCherryPiePlease
# 19 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 11 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 20 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	release
# 21 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	end
# 22 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 23 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_EventScript_Woman_2:
# 24 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 8 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 25 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	goto SSAnne_1F_Room4_EventScript_WomanPlayerMale
# 26 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	goto SSAnne_1F_Room4_EventScript_Woman_1
# 27 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 28 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 29 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_EventScript_WomanPlayerMale::
# 30 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 16 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 31 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room4_Text_WaiterCherryPiePlease
# 32 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 17 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 33 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	release
# 34 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	end
# 35 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 36 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 37 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_Text_WaiterCherryPiePlease::
# 38 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 21 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 39 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.string "Waiter, I would like a cherry pie,\n"
# 40 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.string "please!$"
# 41 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 42 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_Text_WaitressCherryPiePlease::
# 43 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 26 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
# 44 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.string "Waitress, I would like a cherry\n"
# 45 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.string "pie, please!$"
