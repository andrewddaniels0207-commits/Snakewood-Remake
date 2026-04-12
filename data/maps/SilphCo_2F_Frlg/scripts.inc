SilphCo_2F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_2F_OnLoad
	.byte 0


SilphCo_2F_OnLoad::
# 6 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_2F_DOOR_1, SilphCo_2F_OnLoad_2
SilphCo_2F_OnLoad_1:
# 9 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_2F_DOOR_2, SilphCo_2F_OnLoad_5
SilphCo_2F_OnLoad_4:
	end

SilphCo_2F_OnLoad_2:
# 7 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	call EventScript_Close2FDoor1
	goto SilphCo_2F_OnLoad_1

SilphCo_2F_OnLoad_5:
# 10 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	call EventScript_Close2FDoor2
	goto SilphCo_2F_OnLoad_4


SilphCo_2F_EventScript_ThunderWaveTutor::
# 16 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto EventScript_ThunderWaveTutor
	end


SilphCo_2F_EventScript_FloorSign::
# 21 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_2F_EventScript_Connor::
# 26 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_CONNOR, SilphCo_2F_Text_ConnorIntro, SilphCo_2F_Text_ConnorDefeat
# 27 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_ConnorPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_2F_EventScript_Jerry::
# 32 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JERRY, SilphCo_2F_Text_JerryIntro, SilphCo_2F_Text_JerryDefeat
# 33 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_2F_EventScript_Grunt1::
# 38 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_23, SilphCo_2F_Text_Grunt1Intro, SilphCo_2F_Text_Grunt1Defeat
# 39 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_2F_EventScript_Grunt2::
# 44 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_24, SilphCo_2F_Text_Grunt2Intro, SilphCo_2F_Text_Grunt2Defeat
# 45 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_2F_Text_ConnorIntro::
# 49 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Help!\n"
	.string "I'm a SILPH employee.$"

SilphCo_2F_Text_ConnorDefeat::
# 54 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "How did you know\n"
	.string "I was a ROCKET?$"

SilphCo_2F_Text_ConnorPostBattle::
# 59 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I work for both SILPH and TEAM\n"
	.string "ROCKET.$"

SilphCo_2F_Text_JerryIntro::
# 64 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "It's off-limits here!\n"
	.string "Go home!$"

SilphCo_2F_Text_JerryDefeat::
# 69 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "You're good.$"

SilphCo_2F_Text_JerryPostBattle::
# 73 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Can you solve the maze in here?\n"
	.string "It's not easy, I tell you!$"

SilphCo_2F_Text_Grunt1Intro::
# 78 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "No kids are allowed in here!$"

SilphCo_2F_Text_Grunt1Defeat::
# 82 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Tough!$"

SilphCo_2F_Text_Grunt1PostBattle::
# 86 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Diamond-shaped tiles are teleport\n"
	.string "blocks.\p"
	.string "They're transporters for this\n"
	.string "high-tech building.$"

SilphCo_2F_Text_Grunt2Intro::
# 93 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Hey, kid!\n"
	.string "What are you wandering here for?$"

SilphCo_2F_Text_Grunt2Defeat::
# 98 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I goofed!$"

SilphCo_2F_Text_Grunt2PostBattle::
# 102 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "SILPH CO. will be associated with\n"
	.string "TEAM ROCKET!$"

Text_ThunderWaveTeach::
# 107 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Eeek!\n"
	.string "No! Stop! Help!\p"
	.string "Oh, you're not with TEAM ROCKET.\n"
	.string "I'm sorry, I thought…\p"
	.string "Will you forgive me if I teach\n"
	.string "you the THUNDER WAVE technique?$"

Text_ThunderWaveDeclined::
# 116 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Oh…\n"
	.string "But THUNDER WAVE is convenient…$"

Text_ThunderWaveWhichMon::
# 121 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Which POKéMON should I teach\n"
	.string "THUNDER WAVE?$"

Text_ThunderWaveTaught::
# 126 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "THUNDER WAVE causes paralysis in\n"
	.string "the target POKéMON.\p"
	.string "A paralyzed POKéMON may be unable\n"
	.string "to move in battle.\p"
	.string "It's an ELECTRIC-type move, so it\n"
	.string "won't work on some POKéMON.$"

SilphCo_2F_Text_FloorSign::
# 135 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "2F$"
