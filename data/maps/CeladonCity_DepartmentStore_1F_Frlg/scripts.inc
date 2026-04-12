CeladonCity_DepartmentStore_1F_Frlg_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_1F_EventScript_Receptionist::
# 4 "data/maps/CeladonCity_DepartmentStore_1F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_1F_EventScript_LayoutSign::
# 9 "data/maps/CeladonCity_DepartmentStore_1F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_1F_Text_FloorDescriptions, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_1F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_1F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_1F_Text_ServiceCounter, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_1F_Text_WelcomeToDeptStore::
# 18 "data/maps/CeladonCity_DepartmentStore_1F_Frlg/scripts.pory"
	.string "Hello!\n"
	.string "Welcome to CELADON DEPT. STORE.\p"
	.string "The board on the right describes\n"
	.string "the store layout.$"

CeladonCity_DepartmentStore_1F_Text_FloorDescriptions::
# 25 "data/maps/CeladonCity_DepartmentStore_1F_Frlg/scripts.pory"
	.string "1F: SERVICE COUNTER\p"
	.string "2F: TRAINER'S MARKET\p"
	.string "3F: TV GAME SHOP\p"
	.string "4F: WISE MAN GIFTS\p"
	.string "5F: DRUGSTORE\p"
	.string "ROOFTOP SQUARE: VENDING MACHINES$"

CeladonCity_DepartmentStore_1F_Text_ServiceCounter::
# 34 "data/maps/CeladonCity_DepartmentStore_1F_Frlg/scripts.pory"
	.string "1F: SERVICE COUNTER$"
