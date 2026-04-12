# 1 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 2 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_2F_OnLoad
# 5 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 7 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 8 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_OnLoad::
# 9 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_2F_DOOR_1, SilphCo_2F_OnLoad_2
# 11 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_OnLoad_1:
# 12 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 9 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_2F_DOOR_2, SilphCo_2F_OnLoad_5
# 14 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_OnLoad_4:
# 15 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 16 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 17 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_OnLoad_2:
# 18 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 7 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	call EventScript_Close2FDoor1
# 20 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto SilphCo_2F_OnLoad_1
# 21 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 22 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_OnLoad_5:
# 23 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	call EventScript_Close2FDoor2
# 25 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto SilphCo_2F_OnLoad_4
# 26 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 27 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 28 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_ThunderWaveTutor::
# 29 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto EventScript_ThunderWaveTutor
# 31 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 32 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 33 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 34 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_FloorSign::
# 35 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 21 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 36 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_FloorSign, MSGBOX_SIGN
# 37 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 38 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 39 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 40 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_Connor::
# 41 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 26 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 42 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_CONNOR, SilphCo_2F_Text_ConnorIntro, SilphCo_2F_Text_ConnorDefeat
# 43 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 27 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 44 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_ConnorPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 46 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 47 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 48 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_Jerry::
# 49 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 32 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 50 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JERRY, SilphCo_2F_Text_JerryIntro, SilphCo_2F_Text_JerryDefeat
# 51 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 33 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 52 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 54 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 55 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 56 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_Grunt1::
# 57 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 38 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 58 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_23, SilphCo_2F_Text_Grunt1Intro, SilphCo_2F_Text_Grunt1Defeat
# 59 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 39 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 60 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 62 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 63 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 64 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_Grunt2::
# 65 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 44 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 66 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_24, SilphCo_2F_Text_Grunt2Intro, SilphCo_2F_Text_Grunt2Defeat
# 67 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 45 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 68 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 70 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 71 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 72 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_ConnorIntro::
# 73 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 49 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 74 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Help!\n"
# 75 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I'm a SILPH employee.$"
# 76 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 77 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_ConnorDefeat::
# 78 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 54 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 79 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "How did you know\n"
# 80 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I was a ROCKET?$"
# 81 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 82 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_ConnorPostBattle::
# 83 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 84 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I work for both SILPH and TEAM\n"
# 85 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "ROCKET.$"
# 86 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 87 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_JerryIntro::
# 88 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 64 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 89 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "It's off-limits here!\n"
# 90 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Go home!$"
# 91 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 92 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_JerryDefeat::
# 93 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 69 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 94 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "You're good.$"
# 95 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 96 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_JerryPostBattle::
# 97 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 98 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Can you solve the maze in here?\n"
# 99 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "It's not easy, I tell you!$"
# 100 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 101 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt1Intro::
# 102 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 78 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 103 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "No kids are allowed in here!$"
# 104 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 105 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt1Defeat::
# 106 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 82 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 107 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Tough!$"
# 108 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 109 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt1PostBattle::
# 110 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 86 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 111 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Diamond-shaped tiles are teleport\n"
# 112 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "blocks.\p"
# 113 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "They're transporters for this\n"
# 114 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "high-tech building.$"
# 115 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 116 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt2Intro::
# 117 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 93 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 118 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Hey, kid!\n"
# 119 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "What are you wandering here for?$"
# 120 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 121 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt2Defeat::
# 122 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 98 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 123 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I goofed!$"
# 124 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 125 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt2PostBattle::
# 126 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 102 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 127 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "SILPH CO. will be associated with\n"
# 128 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "TEAM ROCKET!$"
# 129 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 130 "data/maps/SilphCo_2F_Frlg/scripts.pory"
Text_ThunderWaveTeach::
# 131 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 107 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 132 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Eeek!\n"
# 133 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "No! Stop! Help!\p"
# 134 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Oh, you're not with TEAM ROCKET.\n"
# 135 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I'm sorry, I thought…\p"
# 136 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Will you forgive me if I teach\n"
# 137 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "you the THUNDER WAVE technique?$"
# 138 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 139 "data/maps/SilphCo_2F_Frlg/scripts.pory"
Text_ThunderWaveDeclined::
# 140 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 116 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 141 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Oh…\n"
# 142 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "But THUNDER WAVE is convenient…$"
# 143 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 144 "data/maps/SilphCo_2F_Frlg/scripts.pory"
Text_ThunderWaveWhichMon::
# 145 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 121 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 146 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Which POKéMON should I teach\n"
# 147 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "THUNDER WAVE?$"
# 148 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 149 "data/maps/SilphCo_2F_Frlg/scripts.pory"
Text_ThunderWaveTaught::
# 150 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 126 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 151 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "THUNDER WAVE causes paralysis in\n"
# 152 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "the target POKéMON.\p"
# 153 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "A paralyzed POKéMON may be unable\n"
# 154 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "to move in battle.\p"
# 155 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "It's an ELECTRIC-type move, so it\n"
# 156 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "won't work on some POKéMON.$"
# 157 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 158 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_FloorSign::
# 159 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 135 "data/maps/SilphCo_2F_Frlg/scripts.pory"
# 160 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 161 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "2F$"
