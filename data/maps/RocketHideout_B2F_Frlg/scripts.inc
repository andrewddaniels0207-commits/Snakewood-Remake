RocketHideout_B2F_Frlg_MapScripts::
	.byte 0


RocketHideout_B2F_EventScript_Grunt::
# 4 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_13, RocketHideout_B2F_Text_GruntIntro, RocketHideout_B2F_Text_GruntDefeat
# 5 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	msgbox RocketHideout_B2F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B2F_Text_GruntIntro::
# 9 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	.string "BOSS said you can see ghosts with\n"
	.string "the SILPH SCOPE.$"

RocketHideout_B2F_Text_GruntDefeat::
# 14 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	.string "I surrender!$"

RocketHideout_B2F_Text_GruntPostBattle::
# 18 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	.string "The TEAM ROCKET HQ has four\n"
	.string "underground floors.\p"
	.string "Think you can reach the BOSS?$"
