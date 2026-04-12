SSAnne_2F_Room4_Frlg_MapScripts::
	.byte 0


SSAnne_2F_Room4_EventScript_Lamar::
# 4 "data/maps/SSAnne_2F_Room4_Frlg/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_LAMAR, SSAnne_2F_Room4_Text_LamarIntro, SSAnne_2F_Room4_Text_LamarDefeat
# 5 "data/maps/SSAnne_2F_Room4_Frlg/scripts.pory"
	msgbox SSAnne_2F_Room4_Text_LamarPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_2F_Room4_EventScript_Dawn::
# 10 "data/maps/SSAnne_2F_Room4_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_DAWN, SSAnne_2F_Room4_Text_DawnIntro, SSAnne_2F_Room4_Text_DawnDefeat
# 11 "data/maps/SSAnne_2F_Room4_Frlg/scripts.pory"
	msgbox SSAnne_2F_Room4_Text_DawnPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_2F_Room4_Text_LamarIntro::
# 15 "data/maps/SSAnne_2F_Room4_Frlg/scripts.pory"
	.string "Which do you find more worthy,\n"
	.string "a strong or a rare POKéMON?$"

SSAnne_2F_Room4_Text_LamarDefeat::
# 20 "data/maps/SSAnne_2F_Room4_Frlg/scripts.pory"
	.string "I must salute you!$"

SSAnne_2F_Room4_Text_LamarPostBattle::
# 24 "data/maps/SSAnne_2F_Room4_Frlg/scripts.pory"
	.string "Personally, I prefer strong and\n"
	.string "rare POKéMON.$"

SSAnne_2F_Room4_Text_DawnIntro::
# 29 "data/maps/SSAnne_2F_Room4_Frlg/scripts.pory"
	.string "I don't believe I saw you at the\n"
	.string "party?$"

SSAnne_2F_Room4_Text_DawnDefeat::
# 34 "data/maps/SSAnne_2F_Room4_Frlg/scripts.pory"
	.string "Take it easy!$"

SSAnne_2F_Room4_Text_DawnPostBattle::
# 38 "data/maps/SSAnne_2F_Room4_Frlg/scripts.pory"
	.string "Oh, I adore your strong POKéMON!\n"
	.string "Oh, how I envy you for them!$"
