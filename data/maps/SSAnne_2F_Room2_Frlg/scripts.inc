SSAnne_2F_Room2_Frlg_MapScripts::
	.byte 0


SSAnne_2F_Room2_EventScript_Dale::
# 4 "data/maps/SSAnne_2F_Room2_Frlg/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_DALE, SSAnne_2F_Room2_Text_DaleIntro, SSAnne_2F_Room2_Text_DaleDefeat
# 5 "data/maps/SSAnne_2F_Room2_Frlg/scripts.pory"
	msgbox SSAnne_2F_Room2_Text_DalePostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_2F_Room2_EventScript_Brooks::
# 10 "data/maps/SSAnne_2F_Room2_Frlg/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_BROOKS, SSAnne_2F_Room2_Text_BrooksIntro, SSAnne_2F_Room2_Text_BrooksDefeat
# 11 "data/maps/SSAnne_2F_Room2_Frlg/scripts.pory"
	msgbox SSAnne_2F_Room2_Text_BrooksPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_2F_Room2_Text_BrooksIntro::
# 15 "data/maps/SSAnne_2F_Room2_Frlg/scripts.pory"
	.string "Competing against the young keeps\n"
	.string "me youthful.$"

SSAnne_2F_Room2_Text_BrooksDefeat::
# 20 "data/maps/SSAnne_2F_Room2_Frlg/scripts.pory"
	.string "Good match!\n"
	.string "Ah, I feel young again!$"

SSAnne_2F_Room2_Text_BrooksPostBattle::
# 25 "data/maps/SSAnne_2F_Room2_Frlg/scripts.pory"
	.string "Fifteen years ago, I would\n"
	.string "have won!$"

SSAnne_2F_Room2_Text_DaleIntro::
# 30 "data/maps/SSAnne_2F_Room2_Frlg/scripts.pory"
	.string "Check out what I fished up!$"

SSAnne_2F_Room2_Text_DaleDefeat::
# 34 "data/maps/SSAnne_2F_Room2_Frlg/scripts.pory"
	.string "I'm all out!$"

SSAnne_2F_Room2_Text_DalePostBattle::
# 38 "data/maps/SSAnne_2F_Room2_Frlg/scripts.pory"
	.string "Party?\p"
	.string "The cruise ship's party should be\n"
	.string "over by now.$"
