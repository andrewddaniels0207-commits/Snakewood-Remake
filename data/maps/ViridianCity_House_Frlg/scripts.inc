ViridianCity_House_Frlg_MapScripts::
	.byte 0


ViridianCity_House_EventScript_BaldingMan::
# 4 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	msgbox ViridianCity_House_Text_NicknamingIsFun, MSGBOX_NPC
	end


ViridianCity_House_EventScript_LittleGirl::
# 9 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	msgbox ViridianCity_House_Text_MyDaddyLovesMonsToo, MSGBOX_NPC
	end


ViridianCity_House_EventScript_Speary::
# 14 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	lock
# 15 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	waitse
# 17 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
# 18 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	msgbox ViridianCity_House_Text_Speary
# 19 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	waitmoncry
# 20 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	release
	end


ViridianCity_House_EventScript_NicknameSign::
# 25 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	msgbox ViridianCity_House_Text_SpearowNameSpeary, MSGBOX_SIGN
	end


ViridianCity_House_Text_NicknamingIsFun::
# 29 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "Coming up with nicknames is fun,\n"
	.string "but it's not so easy to do.\p"
	.string "Clever names are nice, but simple\n"
	.string "names are easier to remember.$"

ViridianCity_House_Text_MyDaddyLovesMonsToo::
# 36 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "My daddy loves POKéMON, too.$"

ViridianCity_House_Text_Speary::
# 40 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "SPEARY: Tetweet!$"

ViridianCity_House_Text_SpearowNameSpeary::
# 44 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "SPEAROW\n"
	.string "Name: SPEARY$"
