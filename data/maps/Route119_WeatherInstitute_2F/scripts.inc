# 1 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_MapScripts::
# 3 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
# 5 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.byte 0
# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 8 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition::
# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 0
# 11 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_OnTransition_2
# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition_1:
# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 14 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 1
# 15 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_OnTransition_5
# 16 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition_4:
# 17 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 18 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_OnTransition_8
# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition_7:
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 22 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition_2:
# 23 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 24 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_OnTransition_1
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition_5:
# 28 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 29 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
# 30 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_OnTransition_4
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition_8:
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 34 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
# 35 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_OnTransition_7
# 36 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 40 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 1, 6
# 41 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 42 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 4, 6
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 2, 2
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_UP
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt5::
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt2::
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt3::
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly::
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntApproachShelly
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_ExclamationMark
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_Delay48
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 122 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_SHELLY
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_4
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM_NORMAL
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM_NORMAL, 25, ITEM_MYSTIC_WATER
# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 172 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_2
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_1:
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_5
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_4:
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 182 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_2:
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 185 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_1
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_5:
# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_4
# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, NO
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty_2
# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty_1:
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty_2:
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty_1
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, NO
# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC_2
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC_1:
# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC_2:
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC_1
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM_NORMAL
# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 268 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 269 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
# 271 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather_2
# 273 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather_1:
# 274 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 275 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 277 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 278 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 279 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 280 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather_2:
# 281 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
# 283 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather_1
# 284 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 285 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 287 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 289 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 290 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_2
# 291 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_1:
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 293 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_5
# 294 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_4:
# 295 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_0x8004, 2
# 297 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_8
# 298 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_7:
# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 300 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_11
# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_10:
# 302 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 305 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, 1
# 306 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_14
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_13:
# 308 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 309 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 313 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 314 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_2:
# 315 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 316 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 317 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_1
# 318 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 319 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_5:
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 321 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 322 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_4
# 323 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 324 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_8:
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 326 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather
# 327 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_7
# 328 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 329 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_11:
# 330 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 331 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_10
# 333 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 334 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_14:
# 335 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 336 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_KyogreWeather
# 337 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_13
# 338 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 339 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 340 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
# 341 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 342 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 343 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 344 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 345 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 346 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 347 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 348 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
# 349 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 350 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 351 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 352 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 353 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 354 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 355 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 356 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
# 357 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 358 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
# 359 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 360 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 361 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 362 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
# 363 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 364 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 365 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 366 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 367 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 368 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 369 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 370 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 371 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
# 372 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 373 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 374 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 375 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 376 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 377 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 378 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 379 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 380 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 381 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 382 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 383 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 384 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 385 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 386 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 387 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 388 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 389 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 390 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 391 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 392 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 393 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 394 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 395 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 396 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 397 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay::
# 398 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 399 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 400 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 401 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 402 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 403 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 404 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 405 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 406 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 407 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 408 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 409 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 410 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 411 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 412 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 413 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 414 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 415 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 416 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 417 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 418 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 419 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 420 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 421 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 422 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 423 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 424 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 425 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 426 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 427 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 428 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 429 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 430 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 431 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 432 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 433 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 434 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 435 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 436 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 437 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 438 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 439 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 440 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 441 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 442 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 443 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_2
# 444 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist_1:
# 445 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 446 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 447 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 448 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 449 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist_2:
# 450 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 451 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
# 452 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_1
# 453 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 454 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 455 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Intro::
# 456 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 457 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The INSTITUTE created a type of\n"
# 458 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "POKéMON that has something to do with\l"
# 459 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the weather. We're here to take them!$"
# 460 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 461 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Defeat::
# 462 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 463 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Our plan's being spoiled by a kid?$"
# 464 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 465 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2PostBattle::
# 466 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 467 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "If the POKéMON they made here can\n"
# 468 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "control the weather freely, then we of\l"
# 469 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM AQUA definitely need it!$"
# 470 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 471 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Intro::
# 472 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 473 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're TEAM AQUA!\n"
# 474 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We appear wherever anything rare is\l"
# 475 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "found!$"
# 476 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 477 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat::
# 478 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 479 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You got me!$"
# 480 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 481 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3PostBattle::
# 482 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 483 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what we of\n"
# 484 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM AQUA are working towards!\l"
# 485 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You stay out of our way!$"
# 486 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 487 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Intro::
# 488 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 489 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Don't tell me you're looking for that\n"
# 490 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "weather POKéMON, too?\p"
# 491 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That's a no-no!\n"
# 492 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We were here to get it first!$"
# 493 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 494 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat::
# 495 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 496 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, will you look at my POKéMON?$"
# 497 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 498 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5PostBattle::
# 499 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 500 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Humph, so what?\n"
# 501 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we want…\p"
# 502 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we really want isn't here…\n"
# 503 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ihihihihi…$"
# 504 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 505 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyIntro::
# 506 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 507 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\p"
# 508 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're going to meddle in TEAM AQUA's\n"
# 509 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "affairs?\p"
# 510 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're either absolutely fearless,\n"
# 511 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "simply ignorant, or both!\p"
# 512 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're so cute, you're disgusting!\n"
# 513 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I'll put you down, kiddy!$"
# 514 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 515 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyDefeat::
# 516 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 517 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 518 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're disgustingly strong!$"
# 519 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 520 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyPostBattle::
# 521 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 522 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It's bad enough to have TEAM MAGMA\n"
# 523 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "blunder about, but now there's you!\p"
# 524 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What makes you want to sniff around\n"
# 525 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in our business, anyway?$"
# 526 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 527 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy::
# 528 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 529 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have a situation here!\p"
# 530 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "A TEAM MAGMA mob just passed\n"
# 531 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the WEATHER INSTITUTE.\p"
# 532 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "They appear to be headed for\n"
# 533 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "MT. PYRE!$"
# 534 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 535 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre::
# 536 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 340 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 537 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What?!\p"
# 538 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We can't waste any more time here!\n"
# 539 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have to hurry to MT. PYRE, too!\p"
# 540 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 541 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM MAGMA, just you wait!$"
# 542 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 543 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon::
# 544 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 348 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 545 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks!\n"
# 546 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks to you, we're safe!\p"
# 547 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It might be an odd way of thanking you,\n"
# 548 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "but take this POKéMON.$"
# 549 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 550 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon::
# 551 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 355 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 552 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don't seem to have any room\n"
# 553 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "for this POKéMON.$"
# 554 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 555 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform::
# 556 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 360 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 557 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received CASTFORM!$"
# 558 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 559 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather::
# 560 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 364 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 561 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That POKéMON changes shape according\n"
# 562 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "to the weather conditions.\p"
# 563 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "There're plenty of them in the\n"
# 564 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "INSTITUTE--go ahead and take it.$"
# 565 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 566 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous::
# 567 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 371 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 568 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching rain for many\n"
# 569 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "years, but it's ridiculous to think that\l"
# 570 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "humans can freely change the weather.$"
# 571 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 572 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_GroudonWeather::
# 573 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 377 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 574 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 575 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 576 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, a drought has been recorded\n"
# 577 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in {STR_VAR_1}.\p"
# 578 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 579 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 580 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 581 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_KyogreWeather::
# 582 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 386 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 583 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 584 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 585 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, heavy rainfall has been\n"
# 586 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "recorded over {STR_VAR_1}.\p"
# 587 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 588 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 589 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 590 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoAbnormalWeather::
# 591 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 395 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
# 592 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are\n"
# 593 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "no longer being reported.\p"
# 594 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The occasional rainfall is a blessing,\n"
# 595 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "really.$"
