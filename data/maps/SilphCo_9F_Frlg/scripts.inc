# 1 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 2 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_9F_OnLoad
# 5 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 7 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 8 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_OnLoad::
# 9 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_9F_DOOR_1, SilphCo_9F_OnLoad_2
# 11 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_OnLoad_1:
# 12 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 9 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_9F_DOOR_2, SilphCo_9F_OnLoad_5
# 14 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_OnLoad_4:
# 15 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 12 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_9F_DOOR_3, SilphCo_9F_OnLoad_8
# 17 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_OnLoad_7:
# 18 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 15 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_9F_DOOR_4, SilphCo_9F_OnLoad_11
# 20 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_OnLoad_10:
# 21 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 22 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 23 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_OnLoad_2:
# 24 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 7 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 25 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call EventScript_Close9FDoor1
# 26 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto SilphCo_9F_OnLoad_1
# 27 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 28 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_OnLoad_5:
# 29 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call EventScript_Close9FDoor2
# 31 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto SilphCo_9F_OnLoad_4
# 32 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 33 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_OnLoad_8:
# 34 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 35 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call EventScript_Close9FDoor3
# 36 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto SilphCo_9F_OnLoad_7
# 37 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 38 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_OnLoad_11:
# 39 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 40 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call EventScript_Close9FDoor4
# 41 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto SilphCo_9F_OnLoad_10
# 42 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 43 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 44 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_HealWoman::
# 45 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 46 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	lock
# 47 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 23 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 48 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	faceplayer
# 49 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 50 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 51 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto_if_ge SilphCo_9F_EventScript_HealWoman_2
# 52 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_HealWoman_1:
# 53 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 27 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 54 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_YouShouldTakeQuickNap
# 55 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 28 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 56 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	closemessage
# 57 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 29 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 58 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 59 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 60 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_DontGiveUp
# 61 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 31 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 62 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	release
# 63 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 64 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 65 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_HealWoman_2:
# 66 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 25 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 67 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto SilphCo_9F_EventScript_HealWomanRocketsGone
# 68 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto SilphCo_9F_EventScript_HealWoman_1
# 69 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 70 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 71 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_HealWomanRocketsGone::
# 72 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 36 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_ThankYouSoMuch
# 74 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 37 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 75 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	release
# 76 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 77 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 78 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 79 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_FloorSign::
# 80 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 42 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 81 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_FloorSign, MSGBOX_SIGN
# 82 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 83 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 84 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 85 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_Ed::
# 86 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 47 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 87 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_ED, SilphCo_9F_Text_EdIntro, SilphCo_9F_Text_EdDefeat
# 88 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 48 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 89 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 91 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 92 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 93 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_Grunt1::
# 94 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 53 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 95 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_37, SilphCo_9F_Text_Grunt1Intro, SilphCo_9F_Text_Grunt1Defeat
# 96 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 54 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 97 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 99 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 100 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 101 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_Grunt2::
# 102 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 103 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_38, SilphCo_9F_Text_Grunt2Intro, SilphCo_9F_Text_Grunt2Defeat
# 104 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 60 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 105 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 107 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 108 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 109 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_YouShouldTakeQuickNap::
# 110 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 64 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 111 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "You look tired.\n"
# 112 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "You should take a quick nap.$"
# 113 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 114 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_DontGiveUp::
# 115 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 69 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 116 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Don't give up!$"
# 117 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 118 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_ThankYouSoMuch::
# 119 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 120 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Thank you so much.$"
# 121 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 122 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt1Intro::
# 123 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 77 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 124 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Your POKéMON seem to adore you,\n"
# 125 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "kid!$"
# 126 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 127 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt1Defeat::
# 128 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 82 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 129 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Ghaaah!$"
# 130 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 131 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt1PostBattle::
# 132 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 86 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 133 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "If I had started as a TRAINER at\n"
# 134 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "your age…$"
# 135 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 136 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_EdIntro::
# 137 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 91 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 138 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Your POKéMON have weak points!\n"
# 139 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "I can nail them!$"
# 140 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 141 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_EdDefeat::
# 142 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 96 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 143 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "You hammered me!$"
# 144 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 145 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_EdPostBattle::
# 146 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 100 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 147 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Exploiting weak spots does work.\n"
# 148 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Think about type advantages.$"
# 149 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 150 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt2Intro::
# 151 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 105 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 152 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
# 153 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "BROTHERS!$"
# 154 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 155 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt2Defeat::
# 156 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 110 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 157 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Warg!\n"
# 158 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Brothers, I lost!$"
# 159 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 160 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt2PostBattle::
# 161 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 115 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 162 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "My brothers will avenge me!$"
# 163 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 164 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_FloorSign::
# 165 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 119 "data/maps/SilphCo_9F_Frlg/scripts.pory"
# 166 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 167 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "9F$"
