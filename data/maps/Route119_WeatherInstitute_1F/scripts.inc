# 1 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_MapScripts::
# 3 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 4 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
# 5 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.byte 0
# 6 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 7 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 8 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_OnTransition::
# 9 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 6 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 10 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 0
# 11 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_1F_OnTransition_2
# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_OnTransition_1:
# 13 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 14 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 15 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_OnTransition_2:
# 16 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 7 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 17 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos
# 18 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_OnTransition_1
# 19 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 20 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 21 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos::
# 22 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 13 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_LITTLE_BOY, 0, 5
# 24 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 14 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 25 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_LITTLE_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 27 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 28 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 29 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoy::
# 30 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 19 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 20 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 33 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 34 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 21 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 35 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 36 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 22 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 37 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 0
# 38 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_LittleBoy_2
# 39 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoy_1:
# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 25 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 41 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
# 42 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 43 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 44 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 45 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 46 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoy_2:
# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 48 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere
# 49 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_LittleBoy_1
# 50 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 51 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 52 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere::
# 53 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 54 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
# 55 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 56 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 57 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 58 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 59 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 60 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
# 61 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 37 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 62 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 63 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 38 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 64 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 65 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 39 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 66 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_2
# 67 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_1:
# 68 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 42 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 69 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 70 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 43 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 71 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_5
# 72 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_4:
# 73 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 46 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 74 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_8
# 75 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_7:
# 76 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 49 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 77 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_0x8004, 2
# 78 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_11
# 79 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_10:
# 80 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 52 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 81 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
# 82 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 53 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 86 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_2:
# 87 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 88 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_StudyingRain
# 89 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_1
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 91 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_5:
# 92 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 44 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 93 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 94 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_4
# 95 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 96 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_8:
# 97 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 98 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 99 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_7
# 100 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 101 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_11:
# 102 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 50 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 103 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_StudyingRain
# 104 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_10
# 105 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 106 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 107 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated::
# 108 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 58 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 109 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
# 110 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 111 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 112 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 113 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_StudyingRain::
# 114 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 63 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 115 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
# 116 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 64 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 117 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 118 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 119 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 120 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 121 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker2::
# 122 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 69 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 123 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
# 124 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 125 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 126 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 127 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Bed::
# 128 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 74 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 129 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lockall
# 130 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 75 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 131 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
# 132 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 76 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 133 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 134 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 77 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 135 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 136 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 78 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 137 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
# 138 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 139 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 140 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 141 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt1::
# 142 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 143 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
# 144 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 145 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 147 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 148 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 149 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt4::
# 150 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 89 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 151 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
# 152 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 153 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 154 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 155 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 156 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 157 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Intro::
# 158 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 94 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 159 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The BOSS got interested in\n"
# 160 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "the research they have going here,\l"
# 161 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "so he sent us out.\p"
# 162 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "You quit meddling!$"
# 163 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 164 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Defeat::
# 165 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 101 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 166 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blast it…\n"
# 167 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blasted by a kid…$"
# 168 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 169 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1PostBattle::
# 170 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 106 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 171 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Our BOSS knows everything.\p"
# 172 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "But I'm just a GRUNT. What would I know\n"
# 173 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "about what he's thinking?$"
# 174 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 175 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Intro::
# 176 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 112 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 177 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
# 178 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "What's a kid doing here?$"
# 179 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 180 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Defeat::
# 181 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 117 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 182 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
# 183 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I lost?!$"
# 184 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 185 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4PostBattle::
# 186 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 122 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 187 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh, no…\n"
# 188 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I'll catch an earful for losing to a kid…\p"
# 189 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I should just take a nap in the bed…$"
# 190 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 191 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs::
# 192 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 128 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 193 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "While I was sleeping, everyone went\n"
# 194 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "upstairs!$"
# 195 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 196 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WowYoureStrong::
# 197 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 133 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 198 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wow, you're really strong!\p"
# 199 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I wish I could be a POKéMON TRAINER\n"
# 200 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "like you!$"
# 201 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 202 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_ProfStudyingRain::
# 203 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 139 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 204 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The PROFESSOR loves rain.\n"
# 205 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "That's a fact.\p"
# 206 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "But if it keeps raining, people will be in\n"
# 207 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "trouble. That's another fact.\p"
# 208 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "And thus, the PROFESSOR is studying\n"
# 209 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "if the rain can be put to good use.$"
# 210 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 211 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather::
# 212 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 148 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 213 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "On the 2nd floor of the INSTITUTE,\n"
# 214 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "we study the weather patterns over\l"
# 215 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "the HOENN region.\p"
# 216 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "We've been noticing temporary and\n"
# 217 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "isolated cases of droughts and\l"
# 218 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "heavy rain lately…$"
# 219 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 220 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo::
# 221 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 157 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 222 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Hello!\n"
# 223 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "We've been saved by your actions!\p"
# 224 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "What I don't understand is what on\n"
# 225 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "earth the AQUAS were up to.$"
# 226 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 227 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_TakeRestInBed::
# 228 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 164 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
# 229 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "There's a bed…\n"
# 230 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Let's take a rest.$"
