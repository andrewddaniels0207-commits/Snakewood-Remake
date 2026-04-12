SeafloorCavern_Room4_MapScripts::
	.byte 0


SeafloorCavern_Room4_EventScript_Grunt3::
# 4 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, SeafloorCavern_Room4_Text_Grunt3Intro, SeafloorCavern_Room4_Text_Grunt3Defeat
# 5 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


SeafloorCavern_Room4_EventScript_Grunt4::
# 10 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
# 11 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


SeafloorCavern_Room4_Text_Grunt3Intro::
# 15 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Who are you?\n"
	.string "Where did you come in from?$"

SeafloorCavern_Room4_Text_Grunt3Defeat::
# 20 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Lost it…$"

SeafloorCavern_Room4_Text_Grunt3PostBattle::
# 24 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I can't find the way out!\p"
	.string "I'm not afraid. Don't get me wrong!$"

SeafloorCavern_Room4_Text_Grunt4Intro::
# 29 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Who are you?\n"
	.string "Where do you think you're going?$"

SeafloorCavern_Room4_Text_Grunt4Defeat::
# 34 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I failed to win!$"

SeafloorCavern_Room4_Text_Grunt4PostBattle::
# 38 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "My partner forgot the map in that\n"
	.string "submarine!\p"
	.string "How's that for being useless?$"
