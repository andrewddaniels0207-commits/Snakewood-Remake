SSAnne_B1F_Room2_Frlg_MapScripts::
	.byte 0


SSAnne_B1F_Room2_EventScript_Huey::
# 4 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_HUEY, SSAnne_B1F_Room2_Text_HueyIntro, SSAnne_B1F_Room2_Text_HueyDefeat
# 5 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	msgbox SSAnne_B1F_Room2_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_B1F_Room2_Text_HueyIntro::
# 9 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	.string "Even us sailors have POKéMON, too!$"

SSAnne_B1F_Room2_Text_HueyDefeat::
# 13 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	.string "Okay, you're not bad.$"

SSAnne_B1F_Room2_Text_HueyPostBattle::
# 17 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	.string "We caught all our POKéMON while\n"
	.string "we were out at sea.$"
