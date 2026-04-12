# 1 "data/maps/Route125/scripts.pory"

# 2 "data/maps/Route125/scripts.pory"
Route125_MapScripts::
# 3 "data/maps/Route125/scripts.pory"
# 2 "data/maps/Route125/scripts.pory"
# 4 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route125_OnTransition
# 5 "data/maps/Route125/scripts.pory"
# 3 "data/maps/Route125/scripts.pory"
# 6 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route125_OnLoad
# 7 "data/maps/Route125/scripts.pory"
# 4 "data/maps/Route125/scripts.pory"
# 8 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route125_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Route125/scripts.pory"
	.byte 0
# 10 "data/maps/Route125/scripts.pory"

# 11 "data/maps/Route125/scripts.pory"
Route125_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Route125/scripts.pory"
# 5 "data/maps/Route125/scripts.pory"
# 13 "data/maps/Route125/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 14 "data/maps/Route125/scripts.pory"
	.2byte 0
# 15 "data/maps/Route125/scripts.pory"

# 16 "data/maps/Route125/scripts.pory"

# 17 "data/maps/Route125/scripts.pory"
Route125_OnTransition::
# 18 "data/maps/Route125/scripts.pory"
# 10 "data/maps/Route125/scripts.pory"
# 19 "data/maps/Route125/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route125_OnTransition_2
# 20 "data/maps/Route125/scripts.pory"
Route125_OnTransition_1:
# 21 "data/maps/Route125/scripts.pory"
# 13 "data/maps/Route125/scripts.pory"
# 22 "data/maps/Route125/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 23 "data/maps/Route125/scripts.pory"
	goto_if_eq Route125_OnTransition_5
# 24 "data/maps/Route125/scripts.pory"
Route125_OnTransition_4:
# 25 "data/maps/Route125/scripts.pory"
# 16 "data/maps/Route125/scripts.pory"
# 26 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST
# 27 "data/maps/Route125/scripts.pory"
	goto_if_eq Route125_OnTransition_8
# 28 "data/maps/Route125/scripts.pory"
Route125_OnTransition_7:
# 29 "data/maps/Route125/scripts.pory"
# 19 "data/maps/Route125/scripts.pory"
# 30 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST
# 31 "data/maps/Route125/scripts.pory"
	goto_if_eq Route125_OnTransition_11
# 32 "data/maps/Route125/scripts.pory"
Route125_OnTransition_10:
# 33 "data/maps/Route125/scripts.pory"
	end
# 34 "data/maps/Route125/scripts.pory"

# 35 "data/maps/Route125/scripts.pory"
Route125_OnTransition_2:
# 36 "data/maps/Route125/scripts.pory"
# 11 "data/maps/Route125/scripts.pory"
# 37 "data/maps/Route125/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 38 "data/maps/Route125/scripts.pory"
	goto Route125_OnTransition_1
# 39 "data/maps/Route125/scripts.pory"

# 40 "data/maps/Route125/scripts.pory"
Route125_OnTransition_5:
# 41 "data/maps/Route125/scripts.pory"
# 14 "data/maps/Route125/scripts.pory"
# 42 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
# 43 "data/maps/Route125/scripts.pory"
	goto Route125_OnTransition_4
# 44 "data/maps/Route125/scripts.pory"

# 45 "data/maps/Route125/scripts.pory"
Route125_OnTransition_8:
# 46 "data/maps/Route125/scripts.pory"
# 17 "data/maps/Route125/scripts.pory"
# 47 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
# 48 "data/maps/Route125/scripts.pory"
	goto Route125_OnTransition_7
# 49 "data/maps/Route125/scripts.pory"

# 50 "data/maps/Route125/scripts.pory"
Route125_OnTransition_11:
# 51 "data/maps/Route125/scripts.pory"
# 20 "data/maps/Route125/scripts.pory"
# 52 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
# 53 "data/maps/Route125/scripts.pory"
	goto Route125_OnTransition_10
# 54 "data/maps/Route125/scripts.pory"

# 55 "data/maps/Route125/scripts.pory"

# 56 "data/maps/Route125/scripts.pory"
Route125_OnLoad::
# 57 "data/maps/Route125/scripts.pory"
# 26 "data/maps/Route125/scripts.pory"
# 58 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST
# 59 "data/maps/Route125/scripts.pory"
	goto_if_eq Route125_OnLoad_2
# 60 "data/maps/Route125/scripts.pory"
Route125_OnLoad_1:
# 61 "data/maps/Route125/scripts.pory"
# 29 "data/maps/Route125/scripts.pory"
# 62 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST
# 63 "data/maps/Route125/scripts.pory"
	goto_if_eq Route125_OnLoad_5
# 64 "data/maps/Route125/scripts.pory"
Route125_OnLoad_4:
# 65 "data/maps/Route125/scripts.pory"
	end
# 66 "data/maps/Route125/scripts.pory"

# 67 "data/maps/Route125/scripts.pory"
Route125_OnLoad_2:
# 68 "data/maps/Route125/scripts.pory"
# 27 "data/maps/Route125/scripts.pory"
# 69 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute125West
# 70 "data/maps/Route125/scripts.pory"
	goto Route125_OnLoad_1
# 71 "data/maps/Route125/scripts.pory"

# 72 "data/maps/Route125/scripts.pory"
Route125_OnLoad_5:
# 73 "data/maps/Route125/scripts.pory"
# 30 "data/maps/Route125/scripts.pory"
# 74 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute125East
# 75 "data/maps/Route125/scripts.pory"
	goto Route125_OnLoad_4
# 76 "data/maps/Route125/scripts.pory"

# 77 "data/maps/Route125/scripts.pory"

# 78 "data/maps/Route125/scripts.pory"
Route125_EventScript_Nolen::
# 79 "data/maps/Route125/scripts.pory"
# 36 "data/maps/Route125/scripts.pory"
# 80 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_NOLEN, Route125_Text_NolenIntro, Route125_Text_NolenDefeat
# 81 "data/maps/Route125/scripts.pory"
# 37 "data/maps/Route125/scripts.pory"
# 82 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_NolenPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route125/scripts.pory"
	end
# 84 "data/maps/Route125/scripts.pory"

# 85 "data/maps/Route125/scripts.pory"

# 86 "data/maps/Route125/scripts.pory"
Route125_EventScript_Stan::
# 87 "data/maps/Route125/scripts.pory"
# 42 "data/maps/Route125/scripts.pory"
# 88 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_STAN, Route125_Text_StanIntro, Route125_Text_StanDefeat
# 89 "data/maps/Route125/scripts.pory"
# 43 "data/maps/Route125/scripts.pory"
# 90 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_StanPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route125/scripts.pory"
	end
# 92 "data/maps/Route125/scripts.pory"

# 93 "data/maps/Route125/scripts.pory"

# 94 "data/maps/Route125/scripts.pory"
Route125_EventScript_Tanya::
# 95 "data/maps/Route125/scripts.pory"
# 48 "data/maps/Route125/scripts.pory"
# 96 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_TANYA, Route125_Text_TanyaIntro, Route125_Text_TanyaDefeat
# 97 "data/maps/Route125/scripts.pory"
# 49 "data/maps/Route125/scripts.pory"
# 98 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route125/scripts.pory"
	end
# 100 "data/maps/Route125/scripts.pory"

# 101 "data/maps/Route125/scripts.pory"

# 102 "data/maps/Route125/scripts.pory"
Route125_EventScript_Sharon::
# 103 "data/maps/Route125/scripts.pory"
# 54 "data/maps/Route125/scripts.pory"
# 104 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_SHARON, Route125_Text_SharonIntro, Route125_Text_SharonDefeat
# 105 "data/maps/Route125/scripts.pory"
# 55 "data/maps/Route125/scripts.pory"
# 106 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route125/scripts.pory"
	end
# 108 "data/maps/Route125/scripts.pory"

# 109 "data/maps/Route125/scripts.pory"

# 110 "data/maps/Route125/scripts.pory"
Route125_EventScript_Ernest::
# 111 "data/maps/Route125/scripts.pory"
# 60 "data/maps/Route125/scripts.pory"
# 112 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_ERNEST_1, Route125_Text_ErnestIntro, Route125_Text_ErnestDefeat, Route125_EventScript_RegisterErnest
# 113 "data/maps/Route125/scripts.pory"
# 61 "data/maps/Route125/scripts.pory"
# 114 "data/maps/Route125/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 115 "data/maps/Route125/scripts.pory"
# 62 "data/maps/Route125/scripts.pory"
# 116 "data/maps/Route125/scripts.pory"
	compare VAR_RESULT, TRUE
# 117 "data/maps/Route125/scripts.pory"
	goto_if_eq Route125_EventScript_Ernest_2
# 118 "data/maps/Route125/scripts.pory"
Route125_EventScript_Ernest_1:
# 119 "data/maps/Route125/scripts.pory"
# 65 "data/maps/Route125/scripts.pory"
# 120 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestPostBattle, MSGBOX_DEFAULT
# 121 "data/maps/Route125/scripts.pory"
# 66 "data/maps/Route125/scripts.pory"
# 122 "data/maps/Route125/scripts.pory"
	release
# 123 "data/maps/Route125/scripts.pory"
	end
# 124 "data/maps/Route125/scripts.pory"

# 125 "data/maps/Route125/scripts.pory"
Route125_EventScript_Ernest_2:
# 126 "data/maps/Route125/scripts.pory"
# 63 "data/maps/Route125/scripts.pory"
# 127 "data/maps/Route125/scripts.pory"
	goto Route125_EventScript_RematchErnest
# 128 "data/maps/Route125/scripts.pory"
	goto Route125_EventScript_Ernest_1
# 129 "data/maps/Route125/scripts.pory"

# 130 "data/maps/Route125/scripts.pory"

# 131 "data/maps/Route125/scripts.pory"
Route125_EventScript_RegisterErnest::
# 132 "data/maps/Route125/scripts.pory"
# 71 "data/maps/Route125/scripts.pory"
# 133 "data/maps/Route125/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 134 "data/maps/Route125/scripts.pory"
# 72 "data/maps/Route125/scripts.pory"
# 135 "data/maps/Route125/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route125/scripts.pory"
# 73 "data/maps/Route125/scripts.pory"
# 137 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRegister, MSGBOX_DEFAULT
# 138 "data/maps/Route125/scripts.pory"
# 74 "data/maps/Route125/scripts.pory"
# 139 "data/maps/Route125/scripts.pory"
	register_matchcall TRAINER_ERNEST_1
# 140 "data/maps/Route125/scripts.pory"
# 75 "data/maps/Route125/scripts.pory"
# 141 "data/maps/Route125/scripts.pory"
	release
# 142 "data/maps/Route125/scripts.pory"
	end
# 143 "data/maps/Route125/scripts.pory"

# 144 "data/maps/Route125/scripts.pory"

# 145 "data/maps/Route125/scripts.pory"
Route125_EventScript_RematchErnest::
# 146 "data/maps/Route125/scripts.pory"
# 80 "data/maps/Route125/scripts.pory"
# 147 "data/maps/Route125/scripts.pory"
	trainerbattle_rematch TRAINER_ERNEST_1, Route125_Text_ErnestRematchIntro, Route125_Text_ErnestRematchDefeat
# 148 "data/maps/Route125/scripts.pory"
# 81 "data/maps/Route125/scripts.pory"
# 149 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRematchPostBattle, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route125/scripts.pory"
	end
# 151 "data/maps/Route125/scripts.pory"

# 152 "data/maps/Route125/scripts.pory"

# 153 "data/maps/Route125/scripts.pory"
Route125_EventScript_Kim::
# 154 "data/maps/Route125/scripts.pory"
# 86 "data/maps/Route125/scripts.pory"
# 155 "data/maps/Route125/scripts.pory"
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_KimIntro, Route125_Text_KimDefeat, Route125_Text_KimNotEnoughMons
# 156 "data/maps/Route125/scripts.pory"
# 87 "data/maps/Route125/scripts.pory"
# 157 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_KimPostBattle, MSGBOX_AUTOCLOSE
# 158 "data/maps/Route125/scripts.pory"
	end
# 159 "data/maps/Route125/scripts.pory"

# 160 "data/maps/Route125/scripts.pory"

# 161 "data/maps/Route125/scripts.pory"
Route125_EventScript_Iris::
# 162 "data/maps/Route125/scripts.pory"
# 92 "data/maps/Route125/scripts.pory"
# 163 "data/maps/Route125/scripts.pory"
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_IrisIntro, Route125_Text_IrisDefeat, Route125_Text_IrisNotEnoughMons
# 164 "data/maps/Route125/scripts.pory"
# 93 "data/maps/Route125/scripts.pory"
# 165 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route125/scripts.pory"
	end
# 167 "data/maps/Route125/scripts.pory"

# 168 "data/maps/Route125/scripts.pory"

# 169 "data/maps/Route125/scripts.pory"
Route125_EventScript_Presley::
# 170 "data/maps/Route125/scripts.pory"
# 98 "data/maps/Route125/scripts.pory"
# 171 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_PRESLEY, Route125_Text_PresleyIntro, Route125_Text_PresleyDefeat
# 172 "data/maps/Route125/scripts.pory"
# 99 "data/maps/Route125/scripts.pory"
# 173 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_PresleyPostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route125/scripts.pory"
	end
# 175 "data/maps/Route125/scripts.pory"

# 176 "data/maps/Route125/scripts.pory"

# 177 "data/maps/Route125/scripts.pory"
Route125_EventScript_Auron::
# 178 "data/maps/Route125/scripts.pory"
# 104 "data/maps/Route125/scripts.pory"
# 179 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_AURON, Route125_Text_AuronIntro, Route125_Text_AuronDefeat
# 180 "data/maps/Route125/scripts.pory"
# 105 "data/maps/Route125/scripts.pory"
# 181 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_AuronPostBattle, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route125/scripts.pory"
	end
