Route119_WeatherInstitute_2F_MapScripts::
# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
	.byte 0


Route119_WeatherInstitute_2F_OnTransition::
# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 0
	goto_if_eq Route119_WeatherInstitute_2F_OnTransition_2
Route119_WeatherInstitute_2F_OnTransition_1:
# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 1
	goto_if_eq Route119_WeatherInstitute_2F_OnTransition_5
Route119_WeatherInstitute_2F_OnTransition_4:
# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_OnTransition_8
Route119_WeatherInstitute_2F_OnTransition_7:
	end

Route119_WeatherInstitute_2F_OnTransition_2:
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
	goto Route119_WeatherInstitute_2F_OnTransition_1

Route119_WeatherInstitute_2F_OnTransition_5:
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
	goto Route119_WeatherInstitute_2F_OnTransition_4

Route119_WeatherInstitute_2F_OnTransition_8:
# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
	goto Route119_WeatherInstitute_2F_OnTransition_7


Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 1, 6
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	return


Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 4, 6
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	return


Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 2, 2
# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_UP
	return


Route119_WeatherInstitute_2F_EventScript_Grunt5::
# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end


Route119_WeatherInstitute_2F_EventScript_Grunt2::
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


Route119_WeatherInstitute_2F_EventScript_Grunt3::
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


Route119_WeatherInstitute_2F_EventScript_Shelly::
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntApproachShelly
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_ExclamationMark
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_Delay48
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1
# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_SHELLY
# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_4
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
	end


Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM_NORMAL
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM_NORMAL, 25, ITEM_MYSTIC_WATER
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_2
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_1:
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_5
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_4:
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_2:
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_1

Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_5:
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_4


Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty_2
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty_1:
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty_2:
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty_1


Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC_2
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC_1:
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC_2:
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC_1


Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	end


Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM_NORMAL
	return


Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	end


Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather_2
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather_1:
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	end

Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather_2:
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
	goto Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather_1


Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_2
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_1:
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_5
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_4:
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_0x8004, 2
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_8
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_7:
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_11
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_10:
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_14
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_13:
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	end

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_2:
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_1

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_5:
# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_4

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_8:
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_7

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_11:
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_10

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_14:
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_KyogreWeather
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_13


Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	end


Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
	return


Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
	return


Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	end


# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end

Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay::
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
	return


# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end

# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end

Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_2
Route119_WeatherInstitute_2F_EventScript_WeatherScientist_1:
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
	end

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_2:
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_1


Route119_WeatherInstitute_2F_Text_Grunt2Intro::
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The INSTITUTE created a type of\n"
	.string "POKéMON that has something to do with\l"
	.string "the weather. We're here to take them!$"

Route119_WeatherInstitute_2F_Text_Grunt2Defeat::
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Our plan's being spoiled by a kid?$"

Route119_WeatherInstitute_2F_Text_Grunt2PostBattle::
# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "If the POKéMON they made here can\n"
	.string "control the weather freely, then we of\l"
	.string "TEAM AQUA definitely need it!$"

Route119_WeatherInstitute_2F_Text_Grunt3Intro::
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're TEAM AQUA!\n"
	.string "We appear wherever anything rare is\l"
	.string "found!$"

Route119_WeatherInstitute_2F_Text_Grunt3Defeat::
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You got me!$"

Route119_WeatherInstitute_2F_Text_Grunt3PostBattle::
# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what we of\n"
	.string "TEAM AQUA are working towards!\l"
	.string "You stay out of our way!$"

Route119_WeatherInstitute_2F_Text_Grunt5Intro::
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Don't tell me you're looking for that\n"
	.string "weather POKéMON, too?\p"
	.string "That's a no-no!\n"
	.string "We were here to get it first!$"

Route119_WeatherInstitute_2F_Text_Grunt5Defeat::
# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, will you look at my POKéMON?$"

Route119_WeatherInstitute_2F_Text_Grunt5PostBattle::
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Humph, so what?\n"
	.string "What we want…\p"
	.string "What we really want isn't here…\n"
	.string "Ihihihihi…$"

Route119_WeatherInstitute_2F_Text_ShellyIntro::
# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\p"
	.string "You're going to meddle in TEAM AQUA's\n"
	.string "affairs?\p"
	.string "You're either absolutely fearless,\n"
	.string "simply ignorant, or both!\p"
	.string "You're so cute, you're disgusting!\n"
	.string "I'll put you down, kiddy!$"

Route119_WeatherInstitute_2F_Text_ShellyDefeat::
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
	.string "You're disgustingly strong!$"

Route119_WeatherInstitute_2F_Text_ShellyPostBattle::
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It's bad enough to have TEAM MAGMA\n"
	.string "blunder about, but now there's you!\p"
	.string "What makes you want to sniff around\n"
	.string "in our business, anyway?$"

Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy::
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have a situation here!\p"
	.string "A TEAM MAGMA mob just passed\n"
	.string "the WEATHER INSTITUTE.\p"
	.string "They appear to be headed for\n"
	.string "MT. PYRE!$"

Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre::
# 340 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What?!\p"
	.string "We can't waste any more time here!\n"
	.string "We have to hurry to MT. PYRE, too!\p"
	.string "Ahahahaha!\n"
	.string "TEAM MAGMA, just you wait!$"

Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon::
# 348 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks!\n"
	.string "Thanks to you, we're safe!\p"
	.string "It might be an odd way of thanking you,\n"
	.string "but take this POKéMON.$"

Route119_WeatherInstitute_2F_Text_NoRoomForPokemon::
# 355 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don't seem to have any room\n"
	.string "for this POKéMON.$"

Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform::
# 360 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received CASTFORM!$"

Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather::
# 364 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That POKéMON changes shape according\n"
	.string "to the weather conditions.\p"
	.string "There're plenty of them in the\n"
	.string "INSTITUTE--go ahead and take it.$"

Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous::
# 371 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching rain for many\n"
	.string "years, but it's ridiculous to think that\l"
	.string "humans can freely change the weather.$"

Route119_WeatherInstitute_2F_Text_GroudonWeather::
# 377 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
	.string "the HOENN region.\p"
	.string "Presently, a drought has been recorded\n"
	.string "in {STR_VAR_1}.\p"
	.string "Could that mean, somewhere near\n"
	.string "{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_Text_KyogreWeather::
# 386 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
	.string "the HOENN region.\p"
	.string "Presently, heavy rainfall has been\n"
	.string "recorded over {STR_VAR_1}.\p"
	.string "Could that mean, somewhere near\n"
	.string "{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_Text_NoAbnormalWeather::
# 395 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are\n"
	.string "no longer being reported.\p"
	.string "The occasional rainfall is a blessing,\n"
	.string "really.$"
