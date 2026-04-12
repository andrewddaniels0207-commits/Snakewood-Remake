SSAnne_1F_Room5_Frlg_MapScripts::
	.byte 0


SSAnne_1F_Room5_EventScript_Arthur::
# 4 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_ARTHUR, SSAnne_1F_Room5_Text_ArthurIntro, SSAnne_1F_Room5_Text_ArthurDefeat
# 5 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room5_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_1F_Room5_Text_ArthurIntro::
# 9 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	.string "You insolent pup!\n"
	.string "How dare you barge in!$"

SSAnne_1F_Room5_Text_ArthurDefeat::
# 14 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	.string "Humph! You rude child!\n"
	.string "You have no sense of courtesy!$"

SSAnne_1F_Room5_Text_ArthurPostBattle::
# 19 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	.string "I wish to be left alone!\n"
	.string "Get out!$"
