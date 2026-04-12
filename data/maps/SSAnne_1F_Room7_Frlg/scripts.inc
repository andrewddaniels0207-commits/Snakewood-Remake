SSAnne_1F_Room7_Frlg_MapScripts::
	.byte 0


SSAnne_1F_Room7_EventScript_Thomas::
# 4 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_THOMAS, SSAnne_1F_Room7_Text_ThomasIntro, SSAnne_1F_Room7_Text_ThomasDefeat
# 5 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room7_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_1F_Room7_Text_ThomasIntro::
# 9 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	.string "I am but a solitary traveler…\p"
	.string "My sole companions and friends are\n"
	.string "POKéMON I caught on my journeys…$"

SSAnne_1F_Room7_Text_ThomasDefeat::
# 15 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	.string "My, my friends…$"

SSAnne_1F_Room7_Text_ThomasPostBattle::
# 19 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	.string "You should be nice to friends!$"
