SSAnne_B1F_Room3_Frlg_MapScripts::
	.byte 0


SSAnne_B1F_Room3_EventScript_Dylan::
# 4 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DYLAN, SSAnne_B1F_Room3_Text_DylanIntro, SSAnne_B1F_Room3_Text_DylanDefeat
# 5 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	msgbox SSAnne_B1F_Room3_Text_DylanPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_B1F_Room3_Text_DylanIntro::
# 9 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	.string "I like feisty kids like you!$"

SSAnne_B1F_Room3_Text_DylanDefeat::
# 13 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	.string "Argh!\n"
	.string "Lost it!$"

SSAnne_B1F_Room3_Text_DylanPostBattle::
# 18 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	.string "Sea POKéMON live in deep water.\n"
	.string "You'll need a ROD to fish them up!$"
