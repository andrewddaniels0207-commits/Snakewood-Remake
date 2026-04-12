SSAnne_B1F_Room4_Frlg_MapScripts::
	.byte 0


SSAnne_B1F_Room4_EventScript_Leonard::
# 4 "data/maps/SSAnne_B1F_Room4_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_LEONARD, SSAnne_B1F_Room4_Text_LeonardIntro, SSAnne_B1F_Room4_Text_LeonardDefeat
# 5 "data/maps/SSAnne_B1F_Room4_Frlg/scripts.pory"
	msgbox SSAnne_B1F_Room4_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_B1F_Room4_EventScript_Duncan::
# 10 "data/maps/SSAnne_B1F_Room4_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DUNCAN, SSAnne_B1F_Room4_Text_DuncanIntro, SSAnne_B1F_Room4_Text_DuncanDefeat
# 11 "data/maps/SSAnne_B1F_Room4_Frlg/scripts.pory"
	msgbox SSAnne_B1F_Room4_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_B1F_Room4_Text_LeonardIntro::
# 15 "data/maps/SSAnne_B1F_Room4_Frlg/scripts.pory"
	.string "You know what they say about\n"
	.string "sailors and battling!$"

SSAnne_B1F_Room4_Text_LeonardDefeat::
# 20 "data/maps/SSAnne_B1F_Room4_Frlg/scripts.pory"
	.string "Right!\n"
	.string "Good battle, mate!$"

SSAnne_B1F_Room4_Text_LeonardPostBattle::
# 25 "data/maps/SSAnne_B1F_Room4_Frlg/scripts.pory"
	.string "Hahaha!\n"
	.string "Want to be a sailor, mate?$"

SSAnne_B1F_Room4_Text_DuncanIntro::
# 30 "data/maps/SSAnne_B1F_Room4_Frlg/scripts.pory"
	.string "Come on, then!\n"
	.string "My sailor's pride is at stake!$"

SSAnne_B1F_Room4_Text_DuncanDefeat::
# 35 "data/maps/SSAnne_B1F_Room4_Frlg/scripts.pory"
	.string "Your spirit sank me!$"

SSAnne_B1F_Room4_Text_DuncanPostBattle::
# 39 "data/maps/SSAnne_B1F_Room4_Frlg/scripts.pory"
	.string "Did you see the FISHING GURU in\n"
	.string "VERMILION CITY?$"
