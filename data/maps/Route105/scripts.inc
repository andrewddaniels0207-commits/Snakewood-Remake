# 1 "data/maps/Route105/scripts.pory"

# 2 "data/maps/Route105/scripts.pory"
Route105_MapScripts::
# 3 "data/maps/Route105/scripts.pory"
# 2 "data/maps/Route105/scripts.pory"
# 4 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route105_OnLoad
# 5 "data/maps/Route105/scripts.pory"
# 3 "data/maps/Route105/scripts.pory"
# 6 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_OnTransition
# 7 "data/maps/Route105/scripts.pory"
# 4 "data/maps/Route105/scripts.pory"
# 8 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route105_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Route105/scripts.pory"
	.byte 0
# 10 "data/maps/Route105/scripts.pory"

# 11 "data/maps/Route105/scripts.pory"
Route105_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Route105/scripts.pory"
# 5 "data/maps/Route105/scripts.pory"
# 13 "data/maps/Route105/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 14 "data/maps/Route105/scripts.pory"
	.2byte 0
# 15 "data/maps/Route105/scripts.pory"

# 16 "data/maps/Route105/scripts.pory"

# 17 "data/maps/Route105/scripts.pory"
Route105_OnLoad::
# 18 "data/maps/Route105/scripts.pory"
# 10 "data/maps/Route105/scripts.pory"
# 19 "data/maps/Route105/scripts.pory"
	goto_if_unset FLAG_REGI_DOORS_OPENED, Route105_OnLoad_2
# 20 "data/maps/Route105/scripts.pory"
Route105_OnLoad_1:
# 21 "data/maps/Route105/scripts.pory"
# 13 "data/maps/Route105/scripts.pory"
# 22 "data/maps/Route105/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH
# 23 "data/maps/Route105/scripts.pory"
	goto_if_eq Route105_OnLoad_5
# 24 "data/maps/Route105/scripts.pory"
Route105_OnLoad_4:
# 25 "data/maps/Route105/scripts.pory"
# 16 "data/maps/Route105/scripts.pory"
# 26 "data/maps/Route105/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH
# 27 "data/maps/Route105/scripts.pory"
	goto_if_eq Route105_OnLoad_8
# 28 "data/maps/Route105/scripts.pory"
Route105_OnLoad_7:
# 29 "data/maps/Route105/scripts.pory"
	end
# 30 "data/maps/Route105/scripts.pory"

# 31 "data/maps/Route105/scripts.pory"
Route105_OnLoad_2:
# 32 "data/maps/Route105/scripts.pory"
# 11 "data/maps/Route105/scripts.pory"
# 33 "data/maps/Route105/scripts.pory"
	call Route105_CloseRegiEntrance
# 34 "data/maps/Route105/scripts.pory"
	goto Route105_OnLoad_1
# 35 "data/maps/Route105/scripts.pory"

# 36 "data/maps/Route105/scripts.pory"
Route105_OnLoad_5:
# 37 "data/maps/Route105/scripts.pory"
# 14 "data/maps/Route105/scripts.pory"
# 38 "data/maps/Route105/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute105North
# 39 "data/maps/Route105/scripts.pory"
	goto Route105_OnLoad_4
# 40 "data/maps/Route105/scripts.pory"

# 41 "data/maps/Route105/scripts.pory"
Route105_OnLoad_8:
# 42 "data/maps/Route105/scripts.pory"
# 17 "data/maps/Route105/scripts.pory"
# 43 "data/maps/Route105/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute105South
# 44 "data/maps/Route105/scripts.pory"
	goto Route105_OnLoad_7
# 45 "data/maps/Route105/scripts.pory"

# 46 "data/maps/Route105/scripts.pory"

# 47 "data/maps/Route105/scripts.pory"
Route105_CloseRegiEntrance::
# 48 "data/maps/Route105/scripts.pory"
# 23 "data/maps/Route105/scripts.pory"
# 49 "data/maps/Route105/scripts.pory"
	setmetatile 9, 19, METATILE_General_RockWall_RockBase, TRUE
# 50 "data/maps/Route105/scripts.pory"
# 24 "data/maps/Route105/scripts.pory"
# 51 "data/maps/Route105/scripts.pory"
	setmetatile 9, 20, METATILE_General_RockWall_SandBase, TRUE
# 52 "data/maps/Route105/scripts.pory"
	return
# 53 "data/maps/Route105/scripts.pory"

# 54 "data/maps/Route105/scripts.pory"

# 55 "data/maps/Route105/scripts.pory"
Route105_OnTransition::
# 56 "data/maps/Route105/scripts.pory"
# 29 "data/maps/Route105/scripts.pory"
# 57 "data/maps/Route105/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 58 "data/maps/Route105/scripts.pory"
	goto_if_eq Route105_OnTransition_2
# 59 "data/maps/Route105/scripts.pory"
Route105_OnTransition_1:
# 60 "data/maps/Route105/scripts.pory"
# 32 "data/maps/Route105/scripts.pory"
# 61 "data/maps/Route105/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH
# 62 "data/maps/Route105/scripts.pory"
	goto_if_eq Route105_OnTransition_5
# 63 "data/maps/Route105/scripts.pory"
Route105_OnTransition_4:
# 64 "data/maps/Route105/scripts.pory"
# 35 "data/maps/Route105/scripts.pory"
# 65 "data/maps/Route105/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH
# 66 "data/maps/Route105/scripts.pory"
	goto_if_eq Route105_OnTransition_8
# 67 "data/maps/Route105/scripts.pory"
Route105_OnTransition_7:
# 68 "data/maps/Route105/scripts.pory"
	end
# 69 "data/maps/Route105/scripts.pory"

# 70 "data/maps/Route105/scripts.pory"
Route105_OnTransition_2:
# 71 "data/maps/Route105/scripts.pory"
# 30 "data/maps/Route105/scripts.pory"
# 72 "data/maps/Route105/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
# 73 "data/maps/Route105/scripts.pory"
	goto Route105_OnTransition_1
# 74 "data/maps/Route105/scripts.pory"

# 75 "data/maps/Route105/scripts.pory"
Route105_OnTransition_5:
# 76 "data/maps/Route105/scripts.pory"
# 33 "data/maps/Route105/scripts.pory"
# 77 "data/maps/Route105/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
# 78 "data/maps/Route105/scripts.pory"
	goto Route105_OnTransition_4
# 79 "data/maps/Route105/scripts.pory"

# 80 "data/maps/Route105/scripts.pory"
Route105_OnTransition_8:
# 81 "data/maps/Route105/scripts.pory"
# 36 "data/maps/Route105/scripts.pory"
# 82 "data/maps/Route105/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
# 83 "data/maps/Route105/scripts.pory"
	goto Route105_OnTransition_7
# 84 "data/maps/Route105/scripts.pory"

# 85 "data/maps/Route105/scripts.pory"

# 86 "data/maps/Route105/scripts.pory"
Route105_EventScript_Foster::
# 87 "data/maps/Route105/scripts.pory"
# 42 "data/maps/Route105/scripts.pory"
# 88 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, Route105_Text_FosterIntro, Route105_Text_FosterDefeated
# 89 "data/maps/Route105/scripts.pory"
# 43 "data/maps/Route105/scripts.pory"
# 90 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route105/scripts.pory"
	end
# 92 "data/maps/Route105/scripts.pory"

# 93 "data/maps/Route105/scripts.pory"

# 94 "data/maps/Route105/scripts.pory"
Route105_EventScript_Luis::
# 95 "data/maps/Route105/scripts.pory"
# 48 "data/maps/Route105/scripts.pory"
# 96 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_LUIS, Route105_Text_LuisIntro, Route105_Text_LuisDefeated
# 97 "data/maps/Route105/scripts.pory"
# 49 "data/maps/Route105/scripts.pory"
# 98 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route105/scripts.pory"
	end
# 100 "data/maps/Route105/scripts.pory"

# 101 "data/maps/Route105/scripts.pory"

# 102 "data/maps/Route105/scripts.pory"
Route105_EventScript_Dominik::
# 103 "data/maps/Route105/scripts.pory"
# 54 "data/maps/Route105/scripts.pory"
# 104 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated
# 105 "data/maps/Route105/scripts.pory"
# 55 "data/maps/Route105/scripts.pory"
# 106 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route105/scripts.pory"
	end
# 108 "data/maps/Route105/scripts.pory"

# 109 "data/maps/Route105/scripts.pory"

# 110 "data/maps/Route105/scripts.pory"
Route105_EventScript_Beverly::
# 111 "data/maps/Route105/scripts.pory"
# 60 "data/maps/Route105/scripts.pory"
# 112 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, Route105_Text_BeverlyIntro, Route105_Text_BeverlyDefeated
# 113 "data/maps/Route105/scripts.pory"
# 61 "data/maps/Route105/scripts.pory"
# 114 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_PostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route105/scripts.pory"
	end
# 116 "data/maps/Route105/scripts.pory"

# 117 "data/maps/Route105/scripts.pory"

# 118 "data/maps/Route105/scripts.pory"
Route105_EventScript_Imani::
# 119 "data/maps/Route105/scripts.pory"
# 66 "data/maps/Route105/scripts.pory"
# 120 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
# 121 "data/maps/Route105/scripts.pory"
# 67 "data/maps/Route105/scripts.pory"
# 122 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route105/scripts.pory"
	end
# 124 "data/maps/Route105/scripts.pory"

# 125 "data/maps/Route105/scripts.pory"

# 126 "data/maps/Route105/scripts.pory"
Route105_EventScript_Josue::
# 127 "data/maps/Route105/scripts.pory"
# 72 "data/maps/Route105/scripts.pory"
# 128 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_JOSUE, Route105_Text_JosueIntro, Route105_Text_JosueDefeated
# 129 "data/maps/Route105/scripts.pory"
# 73 "data/maps/Route105/scripts.pory"
# 130 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route105/scripts.pory"
	end
# 132 "data/maps/Route105/scripts.pory"

# 133 "data/maps/Route105/scripts.pory"

# 134 "data/maps/Route105/scripts.pory"
Route105_EventScript_Andres::
# 135 "data/maps/Route105/scripts.pory"
# 78 "data/maps/Route105/scripts.pory"
# 136 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_ANDRES_1, Route105_Text_AndresIntro, Route105_Text_AndresDefeated, Route105_EventScript_AndresRegisterMatchCallAfterBattle
# 137 "data/maps/Route105/scripts.pory"
# 79 "data/maps/Route105/scripts.pory"
# 138 "data/maps/Route105/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 139 "data/maps/Route105/scripts.pory"
# 80 "data/maps/Route105/scripts.pory"
# 140 "data/maps/Route105/scripts.pory"
	compare VAR_RESULT, TRUE
# 141 "data/maps/Route105/scripts.pory"
	goto_if_eq Route105_EventScript_Andres_2
# 142 "data/maps/Route105/scripts.pory"
Route105_EventScript_Andres_1:
# 143 "data/maps/Route105/scripts.pory"
# 83 "data/maps/Route105/scripts.pory"
# 144 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresPostBattle, MSGBOX_DEFAULT
# 145 "data/maps/Route105/scripts.pory"
# 84 "data/maps/Route105/scripts.pory"
# 146 "data/maps/Route105/scripts.pory"
	release
# 147 "data/maps/Route105/scripts.pory"
	end
# 148 "data/maps/Route105/scripts.pory"

# 149 "data/maps/Route105/scripts.pory"
Route105_EventScript_Andres_2:
# 150 "data/maps/Route105/scripts.pory"
# 81 "data/maps/Route105/scripts.pory"
# 151 "data/maps/Route105/scripts.pory"
	goto Route105_EventScript_AndresRematch
# 152 "data/maps/Route105/scripts.pory"
	goto Route105_EventScript_Andres_1
# 153 "data/maps/Route105/scripts.pory"

# 154 "data/maps/Route105/scripts.pory"

# 155 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRegisterMatchCallAfterBattle::
# 156 "data/maps/Route105/scripts.pory"
# 89 "data/maps/Route105/scripts.pory"
# 157 "data/maps/Route105/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 158 "data/maps/Route105/scripts.pory"
# 90 "data/maps/Route105/scripts.pory"
# 159 "data/maps/Route105/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route105/scripts.pory"
# 91 "data/maps/Route105/scripts.pory"
# 161 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRegister, MSGBOX_DEFAULT
# 162 "data/maps/Route105/scripts.pory"
# 92 "data/maps/Route105/scripts.pory"
# 163 "data/maps/Route105/scripts.pory"
	register_matchcall TRAINER_ANDRES_1
# 164 "data/maps/Route105/scripts.pory"
# 93 "data/maps/Route105/scripts.pory"
# 165 "data/maps/Route105/scripts.pory"
	release
# 166 "data/maps/Route105/scripts.pory"
	end
# 167 "data/maps/Route105/scripts.pory"

# 168 "data/maps/Route105/scripts.pory"

# 169 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRematch::
# 170 "data/maps/Route105/scripts.pory"
# 98 "data/maps/Route105/scripts.pory"
# 171 "data/maps/Route105/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Route105_Text_AndresRematchIntro, Route105_Text_AndresRematchDefeated
# 172 "data/maps/Route105/scripts.pory"
# 99 "data/maps/Route105/scripts.pory"
# 173 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRematchPostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route105/scripts.pory"
	end
# 175 "data/maps/Route105/scripts.pory"

# 176 "data/maps/Route105/scripts.pory"

# 177 "data/maps/Route105/scripts.pory"
Route104_Text_DadPokenavCall::
# 178 "data/maps/Route105/scripts.pory"
# 103 "data/maps/Route105/scripts.pory"
# 179 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 180 "data/maps/Route105/scripts.pory"
	.string "… … … … … Beep!\p"
# 181 "data/maps/Route105/scripts.pory"
	.string "DAD: Oh, {PLAYER}?\p"
# 182 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 183 "data/maps/Route105/scripts.pory"
	.string "Where are you now?\l"
# 184 "data/maps/Route105/scripts.pory"
	.string "It sounds windy wherever you are.\p"
# 185 "data/maps/Route105/scripts.pory"
	.string "I just heard from DEVON's MR. STONE\n"
# 186 "data/maps/Route105/scripts.pory"
	.string "about your POKéNAV, so I decided\l"
# 187 "data/maps/Route105/scripts.pory"
	.string "to give you a call.\p"
# 188 "data/maps/Route105/scripts.pory"
	.string "It sounds like you're doing fine,\n"
# 189 "data/maps/Route105/scripts.pory"
	.string "so that's fine with me.\p"
# 190 "data/maps/Route105/scripts.pory"
	.string "You take care now.\p"
# 191 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 192 "data/maps/Route105/scripts.pory"
	.string "… … … … … Click!$"
# 193 "data/maps/Route105/scripts.pory"

# 194 "data/maps/Route105/scripts.pory"
Route104_Text_RegisteredDadInPokenav::
# 195 "data/maps/Route105/scripts.pory"
# 120 "data/maps/Route105/scripts.pory"
# 196 "data/maps/Route105/scripts.pory"
	.string "Registered DAD NORMAN\n"
# 197 "data/maps/Route105/scripts.pory"
	.string "in the POKéNAV.$"
