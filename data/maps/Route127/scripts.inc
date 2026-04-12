# 1 "data/maps/Route127/scripts.pory"

# 2 "data/maps/Route127/scripts.pory"
Route127_MapScripts::
# 3 "data/maps/Route127/scripts.pory"
# 2 "data/maps/Route127/scripts.pory"
# 4 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route127_OnTransition
# 5 "data/maps/Route127/scripts.pory"
# 3 "data/maps/Route127/scripts.pory"
# 6 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route127_OnLoad
# 7 "data/maps/Route127/scripts.pory"
# 4 "data/maps/Route127/scripts.pory"
# 8 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route127_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Route127/scripts.pory"
	.byte 0
# 10 "data/maps/Route127/scripts.pory"

# 11 "data/maps/Route127/scripts.pory"
Route127_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Route127/scripts.pory"
# 5 "data/maps/Route127/scripts.pory"
# 13 "data/maps/Route127/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 14 "data/maps/Route127/scripts.pory"
	.2byte 0
# 15 "data/maps/Route127/scripts.pory"

# 16 "data/maps/Route127/scripts.pory"

# 17 "data/maps/Route127/scripts.pory"
Route127_OnTransition::
# 18 "data/maps/Route127/scripts.pory"
# 10 "data/maps/Route127/scripts.pory"
# 19 "data/maps/Route127/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route127_OnTransition_2
# 20 "data/maps/Route127/scripts.pory"
Route127_OnTransition_1:
# 21 "data/maps/Route127/scripts.pory"
# 13 "data/maps/Route127/scripts.pory"
# 22 "data/maps/Route127/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 23 "data/maps/Route127/scripts.pory"
	goto_if_eq Route127_OnTransition_5
# 24 "data/maps/Route127/scripts.pory"
Route127_OnTransition_4:
# 25 "data/maps/Route127/scripts.pory"
# 16 "data/maps/Route127/scripts.pory"
# 26 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH
# 27 "data/maps/Route127/scripts.pory"
	goto_if_eq Route127_OnTransition_8
# 28 "data/maps/Route127/scripts.pory"
Route127_OnTransition_7:
# 29 "data/maps/Route127/scripts.pory"
# 19 "data/maps/Route127/scripts.pory"
# 30 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH
# 31 "data/maps/Route127/scripts.pory"
	goto_if_eq Route127_OnTransition_11
# 32 "data/maps/Route127/scripts.pory"
Route127_OnTransition_10:
# 33 "data/maps/Route127/scripts.pory"
	end
# 34 "data/maps/Route127/scripts.pory"

# 35 "data/maps/Route127/scripts.pory"
Route127_OnTransition_2:
# 36 "data/maps/Route127/scripts.pory"
# 11 "data/maps/Route127/scripts.pory"
# 37 "data/maps/Route127/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 38 "data/maps/Route127/scripts.pory"
	goto Route127_OnTransition_1
# 39 "data/maps/Route127/scripts.pory"

# 40 "data/maps/Route127/scripts.pory"
Route127_OnTransition_5:
# 41 "data/maps/Route127/scripts.pory"
# 14 "data/maps/Route127/scripts.pory"
# 42 "data/maps/Route127/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
# 43 "data/maps/Route127/scripts.pory"
	goto Route127_OnTransition_4
# 44 "data/maps/Route127/scripts.pory"

# 45 "data/maps/Route127/scripts.pory"
Route127_OnTransition_8:
# 46 "data/maps/Route127/scripts.pory"
# 17 "data/maps/Route127/scripts.pory"
# 47 "data/maps/Route127/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
# 48 "data/maps/Route127/scripts.pory"
	goto Route127_OnTransition_7
# 49 "data/maps/Route127/scripts.pory"

# 50 "data/maps/Route127/scripts.pory"
Route127_OnTransition_11:
# 51 "data/maps/Route127/scripts.pory"
# 20 "data/maps/Route127/scripts.pory"
# 52 "data/maps/Route127/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
# 53 "data/maps/Route127/scripts.pory"
	goto Route127_OnTransition_10
# 54 "data/maps/Route127/scripts.pory"

# 55 "data/maps/Route127/scripts.pory"

# 56 "data/maps/Route127/scripts.pory"
Route127_OnLoad::
# 57 "data/maps/Route127/scripts.pory"
# 26 "data/maps/Route127/scripts.pory"
# 58 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH
# 59 "data/maps/Route127/scripts.pory"
	goto_if_eq Route127_OnLoad_2
# 60 "data/maps/Route127/scripts.pory"
Route127_OnLoad_1:
# 61 "data/maps/Route127/scripts.pory"
# 29 "data/maps/Route127/scripts.pory"
# 62 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH
# 63 "data/maps/Route127/scripts.pory"
	goto_if_eq Route127_OnLoad_5
# 64 "data/maps/Route127/scripts.pory"
Route127_OnLoad_4:
# 65 "data/maps/Route127/scripts.pory"
	end
# 66 "data/maps/Route127/scripts.pory"

# 67 "data/maps/Route127/scripts.pory"
Route127_OnLoad_2:
# 68 "data/maps/Route127/scripts.pory"
# 27 "data/maps/Route127/scripts.pory"
# 69 "data/maps/Route127/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute127North
# 70 "data/maps/Route127/scripts.pory"
	goto Route127_OnLoad_1
# 71 "data/maps/Route127/scripts.pory"

# 72 "data/maps/Route127/scripts.pory"
Route127_OnLoad_5:
# 73 "data/maps/Route127/scripts.pory"
# 30 "data/maps/Route127/scripts.pory"
# 74 "data/maps/Route127/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute127South
# 75 "data/maps/Route127/scripts.pory"
	goto Route127_OnLoad_4
# 76 "data/maps/Route127/scripts.pory"

# 77 "data/maps/Route127/scripts.pory"

# 78 "data/maps/Route127/scripts.pory"
Route127_EventScript_Camden::
# 79 "data/maps/Route127/scripts.pory"
# 36 "data/maps/Route127/scripts.pory"
# 80 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_CAMDEN, Route127_Text_CamdenIntro, Route127_Text_CamdenDefeat
# 81 "data/maps/Route127/scripts.pory"
# 37 "data/maps/Route127/scripts.pory"
# 82 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_CamdenPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route127/scripts.pory"
	end
# 84 "data/maps/Route127/scripts.pory"

# 85 "data/maps/Route127/scripts.pory"

# 86 "data/maps/Route127/scripts.pory"
Route127_EventScript_Donny::
# 87 "data/maps/Route127/scripts.pory"
# 42 "data/maps/Route127/scripts.pory"
# 88 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_DONNY, Route127_Text_DonnyIntro, Route127_Text_DonnyDefeat
# 89 "data/maps/Route127/scripts.pory"
# 43 "data/maps/Route127/scripts.pory"
# 90 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_DonnyPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route127/scripts.pory"
	end
# 92 "data/maps/Route127/scripts.pory"

# 93 "data/maps/Route127/scripts.pory"

# 94 "data/maps/Route127/scripts.pory"
Route127_EventScript_Jonah::
# 95 "data/maps/Route127/scripts.pory"
# 48 "data/maps/Route127/scripts.pory"
# 96 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_JONAH, Route127_Text_JonahIntro, Route127_Text_JonahDefeat
# 97 "data/maps/Route127/scripts.pory"
# 49 "data/maps/Route127/scripts.pory"
# 98 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route127/scripts.pory"
	end
# 100 "data/maps/Route127/scripts.pory"

# 101 "data/maps/Route127/scripts.pory"

# 102 "data/maps/Route127/scripts.pory"
Route127_EventScript_Henry::
# 103 "data/maps/Route127/scripts.pory"
# 54 "data/maps/Route127/scripts.pory"
# 104 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_HENRY, Route127_Text_HenryIntro, Route127_Text_HenryDefeat
# 105 "data/maps/Route127/scripts.pory"
# 55 "data/maps/Route127/scripts.pory"
# 106 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route127/scripts.pory"
	end
# 108 "data/maps/Route127/scripts.pory"

# 109 "data/maps/Route127/scripts.pory"

# 110 "data/maps/Route127/scripts.pory"
Route127_EventScript_Roger::
# 111 "data/maps/Route127/scripts.pory"
# 60 "data/maps/Route127/scripts.pory"
# 112 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ROGER, Route127_Text_RogerIntro, Route127_Text_RogerDefeat
# 113 "data/maps/Route127/scripts.pory"
# 61 "data/maps/Route127/scripts.pory"
# 114 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route127/scripts.pory"
	end
# 116 "data/maps/Route127/scripts.pory"

# 117 "data/maps/Route127/scripts.pory"

# 118 "data/maps/Route127/scripts.pory"
Route127_EventScript_Aidan::
# 119 "data/maps/Route127/scripts.pory"
# 66 "data/maps/Route127/scripts.pory"
# 120 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_AIDAN, Route127_Text_AidanIntro, Route127_Text_AidanDefeat
# 121 "data/maps/Route127/scripts.pory"
# 67 "data/maps/Route127/scripts.pory"
# 122 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route127/scripts.pory"
	end
# 124 "data/maps/Route127/scripts.pory"

# 125 "data/maps/Route127/scripts.pory"

# 126 "data/maps/Route127/scripts.pory"
Route127_EventScript_Athena::
# 127 "data/maps/Route127/scripts.pory"
# 72 "data/maps/Route127/scripts.pory"
# 128 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ATHENA, Route127_Text_AthenaIntro, Route127_Text_AthenaDefeat
# 129 "data/maps/Route127/scripts.pory"
# 73 "data/maps/Route127/scripts.pory"
# 130 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AthenaPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route127/scripts.pory"
	end
# 132 "data/maps/Route127/scripts.pory"

# 133 "data/maps/Route127/scripts.pory"

# 134 "data/maps/Route127/scripts.pory"
Route127_EventScript_Koji::
# 135 "data/maps/Route127/scripts.pory"
# 78 "data/maps/Route127/scripts.pory"
# 136 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_KOJI_1, Route127_Text_KojiIntro, Route127_Text_KojiDefeat, Route127_EventScript_RegisterKoji
# 137 "data/maps/Route127/scripts.pory"
# 79 "data/maps/Route127/scripts.pory"
# 138 "data/maps/Route127/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 139 "data/maps/Route127/scripts.pory"
# 80 "data/maps/Route127/scripts.pory"
# 140 "data/maps/Route127/scripts.pory"
	compare VAR_RESULT, TRUE
# 141 "data/maps/Route127/scripts.pory"
	goto_if_eq Route127_EventScript_Koji_2
# 142 "data/maps/Route127/scripts.pory"
Route127_EventScript_Koji_1:
# 143 "data/maps/Route127/scripts.pory"
# 83 "data/maps/Route127/scripts.pory"
# 144 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostBattle, MSGBOX_DEFAULT
# 145 "data/maps/Route127/scripts.pory"
# 84 "data/maps/Route127/scripts.pory"
# 146 "data/maps/Route127/scripts.pory"
	release
# 147 "data/maps/Route127/scripts.pory"
	end
# 148 "data/maps/Route127/scripts.pory"

# 149 "data/maps/Route127/scripts.pory"
Route127_EventScript_Koji_2:
# 150 "data/maps/Route127/scripts.pory"
# 81 "data/maps/Route127/scripts.pory"
# 151 "data/maps/Route127/scripts.pory"
	goto Route127_EventScript_RematchKoji
# 152 "data/maps/Route127/scripts.pory"
	goto Route127_EventScript_Koji_1
# 153 "data/maps/Route127/scripts.pory"

# 154 "data/maps/Route127/scripts.pory"

# 155 "data/maps/Route127/scripts.pory"
Route127_EventScript_RegisterKoji::
# 156 "data/maps/Route127/scripts.pory"
# 89 "data/maps/Route127/scripts.pory"
# 157 "data/maps/Route127/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 158 "data/maps/Route127/scripts.pory"
# 90 "data/maps/Route127/scripts.pory"
# 159 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route127/scripts.pory"
# 91 "data/maps/Route127/scripts.pory"
# 161 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiRegister, MSGBOX_DEFAULT
# 162 "data/maps/Route127/scripts.pory"
# 92 "data/maps/Route127/scripts.pory"
# 163 "data/maps/Route127/scripts.pory"
	register_matchcall TRAINER_KOJI_1
# 164 "data/maps/Route127/scripts.pory"
# 93 "data/maps/Route127/scripts.pory"
# 165 "data/maps/Route127/scripts.pory"
	release
# 166 "data/maps/Route127/scripts.pory"
	end
# 167 "data/maps/Route127/scripts.pory"

# 168 "data/maps/Route127/scripts.pory"

# 169 "data/maps/Route127/scripts.pory"
Route127_EventScript_RematchKoji::
# 170 "data/maps/Route127/scripts.pory"
# 98 "data/maps/Route127/scripts.pory"
# 171 "data/maps/Route127/scripts.pory"
	trainerbattle_rematch TRAINER_KOJI_1, Route127_Text_KojiRematchIntro, Route127_Text_KojiRematchDefeat
# 172 "data/maps/Route127/scripts.pory"
# 99 "data/maps/Route127/scripts.pory"
# 173 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostRematch, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route127/scripts.pory"
	end
