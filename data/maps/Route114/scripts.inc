# 1 "data/maps/Route114/scripts.pory"

# 2 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 3 "data/maps/Route114/scripts.pory"
# 2 "data/maps/Route114/scripts.pory"
# 4 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 5 "data/maps/Route114/scripts.pory"
# 3 "data/maps/Route114/scripts.pory"
# 6 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 7 "data/maps/Route114/scripts.pory"
# 4 "data/maps/Route114/scripts.pory"
# 8 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Route114/scripts.pory"
	.byte 0
# 10 "data/maps/Route114/scripts.pory"

# 11 "data/maps/Route114/scripts.pory"
Route114_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Route114/scripts.pory"
# 5 "data/maps/Route114/scripts.pory"
# 13 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 14 "data/maps/Route114/scripts.pory"
	.2byte 0
# 15 "data/maps/Route114/scripts.pory"

# 16 "data/maps/Route114/scripts.pory"

# 17 "data/maps/Route114/scripts.pory"
Route114_OnTransition::
# 18 "data/maps/Route114/scripts.pory"
# 10 "data/maps/Route114/scripts.pory"
# 19 "data/maps/Route114/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 20 "data/maps/Route114/scripts.pory"
	goto_if_eq Route114_OnTransition_2
# 21 "data/maps/Route114/scripts.pory"
Route114_OnTransition_1:
# 22 "data/maps/Route114/scripts.pory"
# 13 "data/maps/Route114/scripts.pory"
# 23 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH
# 24 "data/maps/Route114/scripts.pory"
	goto_if_eq Route114_OnTransition_5
# 25 "data/maps/Route114/scripts.pory"
Route114_OnTransition_4:
# 26 "data/maps/Route114/scripts.pory"
# 16 "data/maps/Route114/scripts.pory"
# 27 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH
# 28 "data/maps/Route114/scripts.pory"
	goto_if_eq Route114_OnTransition_8
# 29 "data/maps/Route114/scripts.pory"
Route114_OnTransition_7:
# 30 "data/maps/Route114/scripts.pory"
	end
# 31 "data/maps/Route114/scripts.pory"

# 32 "data/maps/Route114/scripts.pory"
Route114_OnTransition_2:
# 33 "data/maps/Route114/scripts.pory"
# 11 "data/maps/Route114/scripts.pory"
# 34 "data/maps/Route114/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
# 35 "data/maps/Route114/scripts.pory"
	goto Route114_OnTransition_1
# 36 "data/maps/Route114/scripts.pory"

# 37 "data/maps/Route114/scripts.pory"
Route114_OnTransition_5:
# 38 "data/maps/Route114/scripts.pory"
# 14 "data/maps/Route114/scripts.pory"
# 39 "data/maps/Route114/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
# 40 "data/maps/Route114/scripts.pory"
	goto Route114_OnTransition_4
# 41 "data/maps/Route114/scripts.pory"

# 42 "data/maps/Route114/scripts.pory"
Route114_OnTransition_8:
# 43 "data/maps/Route114/scripts.pory"
# 17 "data/maps/Route114/scripts.pory"
# 44 "data/maps/Route114/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
# 45 "data/maps/Route114/scripts.pory"
	goto Route114_OnTransition_7
# 46 "data/maps/Route114/scripts.pory"

# 47 "data/maps/Route114/scripts.pory"

# 48 "data/maps/Route114/scripts.pory"
Route114_OnLoad::
# 49 "data/maps/Route114/scripts.pory"
# 23 "data/maps/Route114/scripts.pory"
# 50 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH
# 51 "data/maps/Route114/scripts.pory"
	goto_if_eq Route114_OnLoad_2
# 52 "data/maps/Route114/scripts.pory"
Route114_OnLoad_1:
# 53 "data/maps/Route114/scripts.pory"
# 26 "data/maps/Route114/scripts.pory"
# 54 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH
# 55 "data/maps/Route114/scripts.pory"
	goto_if_eq Route114_OnLoad_5
# 56 "data/maps/Route114/scripts.pory"
Route114_OnLoad_4:
# 57 "data/maps/Route114/scripts.pory"
	end
# 58 "data/maps/Route114/scripts.pory"

# 59 "data/maps/Route114/scripts.pory"
Route114_OnLoad_2:
# 60 "data/maps/Route114/scripts.pory"
# 24 "data/maps/Route114/scripts.pory"
# 61 "data/maps/Route114/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute114North
# 62 "data/maps/Route114/scripts.pory"
	goto Route114_OnLoad_1
# 63 "data/maps/Route114/scripts.pory"

# 64 "data/maps/Route114/scripts.pory"
Route114_OnLoad_5:
# 65 "data/maps/Route114/scripts.pory"
# 27 "data/maps/Route114/scripts.pory"
# 66 "data/maps/Route114/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute114South
# 67 "data/maps/Route114/scripts.pory"
	goto Route114_OnLoad_4
# 68 "data/maps/Route114/scripts.pory"

# 69 "data/maps/Route114/scripts.pory"

# 70 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 71 "data/maps/Route114/scripts.pory"
# 33 "data/maps/Route114/scripts.pory"
# 72 "data/maps/Route114/scripts.pory"
	lock
# 73 "data/maps/Route114/scripts.pory"
# 34 "data/maps/Route114/scripts.pory"
# 74 "data/maps/Route114/scripts.pory"
	faceplayer
# 75 "data/maps/Route114/scripts.pory"
# 35 "data/maps/Route114/scripts.pory"
# 76 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 77 "data/maps/Route114/scripts.pory"
# 36 "data/maps/Route114/scripts.pory"
# 78 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_Man_2
# 79 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man_1:
# 80 "data/maps/Route114/scripts.pory"
# 39 "data/maps/Route114/scripts.pory"
# 81 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 82 "data/maps/Route114/scripts.pory"
# 40 "data/maps/Route114/scripts.pory"
# 83 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 84 "data/maps/Route114/scripts.pory"
# 41 "data/maps/Route114/scripts.pory"
# 85 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 86 "data/maps/Route114/scripts.pory"
# 42 "data/maps/Route114/scripts.pory"
# 87 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 88 "data/maps/Route114/scripts.pory"
# 43 "data/maps/Route114/scripts.pory"
# 89 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 90 "data/maps/Route114/scripts.pory"
# 44 "data/maps/Route114/scripts.pory"
# 91 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, FALSE
# 92 "data/maps/Route114/scripts.pory"
	goto_if_eq Route114_EventScript_Man_5
# 93 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man_4:
# 94 "data/maps/Route114/scripts.pory"
# 47 "data/maps/Route114/scripts.pory"
# 95 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 96 "data/maps/Route114/scripts.pory"
# 48 "data/maps/Route114/scripts.pory"
# 97 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 98 "data/maps/Route114/scripts.pory"
# 49 "data/maps/Route114/scripts.pory"
# 99 "data/maps/Route114/scripts.pory"
	release
# 100 "data/maps/Route114/scripts.pory"
	end
# 101 "data/maps/Route114/scripts.pory"

# 102 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man_2:
# 103 "data/maps/Route114/scripts.pory"
# 37 "data/maps/Route114/scripts.pory"
# 104 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_ReceivedBerry
# 105 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_Man_1
# 106 "data/maps/Route114/scripts.pory"

# 107 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man_5:
# 108 "data/maps/Route114/scripts.pory"
# 45 "data/maps/Route114/scripts.pory"
# 109 "data/maps/Route114/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 110 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_Man_4
# 111 "data/maps/Route114/scripts.pory"

# 112 "data/maps/Route114/scripts.pory"

# 113 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 114 "data/maps/Route114/scripts.pory"
# 54 "data/maps/Route114/scripts.pory"
# 115 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 116 "data/maps/Route114/scripts.pory"
# 55 "data/maps/Route114/scripts.pory"
# 117 "data/maps/Route114/scripts.pory"
	release
# 118 "data/maps/Route114/scripts.pory"
	end
# 119 "data/maps/Route114/scripts.pory"

# 120 "data/maps/Route114/scripts.pory"

# 121 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 122 "data/maps/Route114/scripts.pory"
# 60 "data/maps/Route114/scripts.pory"
# 123 "data/maps/Route114/scripts.pory"
	lock
# 124 "data/maps/Route114/scripts.pory"
# 61 "data/maps/Route114/scripts.pory"
# 125 "data/maps/Route114/scripts.pory"
	faceplayer
# 126 "data/maps/Route114/scripts.pory"
# 62 "data/maps/Route114/scripts.pory"
# 127 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_RoarGentleman_2
# 128 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman_1:
# 129 "data/maps/Route114/scripts.pory"
# 65 "data/maps/Route114/scripts.pory"
# 130 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 131 "data/maps/Route114/scripts.pory"
# 66 "data/maps/Route114/scripts.pory"
# 132 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 133 "data/maps/Route114/scripts.pory"
# 67 "data/maps/Route114/scripts.pory"
# 134 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, FALSE
# 135 "data/maps/Route114/scripts.pory"
	goto_if_eq Route114_EventScript_RoarGentleman_5
# 136 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman_4:
# 137 "data/maps/Route114/scripts.pory"
# 70 "data/maps/Route114/scripts.pory"
# 138 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 139 "data/maps/Route114/scripts.pory"
# 71 "data/maps/Route114/scripts.pory"
# 140 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 141 "data/maps/Route114/scripts.pory"
# 72 "data/maps/Route114/scripts.pory"
# 142 "data/maps/Route114/scripts.pory"
	release
# 143 "data/maps/Route114/scripts.pory"
	end
# 144 "data/maps/Route114/scripts.pory"

# 145 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman_2:
# 146 "data/maps/Route114/scripts.pory"
# 63 "data/maps/Route114/scripts.pory"
# 147 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_ReceivedRoar
# 148 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_RoarGentleman_1
# 149 "data/maps/Route114/scripts.pory"

# 150 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman_5:
# 151 "data/maps/Route114/scripts.pory"
# 68 "data/maps/Route114/scripts.pory"
# 152 "data/maps/Route114/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 153 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_RoarGentleman_4
# 154 "data/maps/Route114/scripts.pory"

# 155 "data/maps/Route114/scripts.pory"

# 156 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 157 "data/maps/Route114/scripts.pory"
# 77 "data/maps/Route114/scripts.pory"
# 158 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 159 "data/maps/Route114/scripts.pory"
# 78 "data/maps/Route114/scripts.pory"
# 160 "data/maps/Route114/scripts.pory"
	release
# 161 "data/maps/Route114/scripts.pory"
	end
# 162 "data/maps/Route114/scripts.pory"

# 163 "data/maps/Route114/scripts.pory"

# 164 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 165 "data/maps/Route114/scripts.pory"
# 83 "data/maps/Route114/scripts.pory"
# 166 "data/maps/Route114/scripts.pory"
	lock
# 167 "data/maps/Route114/scripts.pory"
# 84 "data/maps/Route114/scripts.pory"
# 168 "data/maps/Route114/scripts.pory"
	faceplayer
# 169 "data/maps/Route114/scripts.pory"
# 85 "data/maps/Route114/scripts.pory"
# 170 "data/maps/Route114/scripts.pory"
	waitse
# 171 "data/maps/Route114/scripts.pory"
# 86 "data/maps/Route114/scripts.pory"
# 172 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 173 "data/maps/Route114/scripts.pory"
# 87 "data/maps/Route114/scripts.pory"
# 174 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 175 "data/maps/Route114/scripts.pory"
# 88 "data/maps/Route114/scripts.pory"
# 176 "data/maps/Route114/scripts.pory"
	waitmoncry
# 177 "data/maps/Route114/scripts.pory"
# 89 "data/maps/Route114/scripts.pory"
# 178 "data/maps/Route114/scripts.pory"
	release
# 179 "data/maps/Route114/scripts.pory"
	end
# 180 "data/maps/Route114/scripts.pory"

# 181 "data/maps/Route114/scripts.pory"

# 182 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 183 "data/maps/Route114/scripts.pory"
# 94 "data/maps/Route114/scripts.pory"
# 184 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 185 "data/maps/Route114/scripts.pory"
	end
# 186 "data/maps/Route114/scripts.pory"

# 187 "data/maps/Route114/scripts.pory"

# 188 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 189 "data/maps/Route114/scripts.pory"
# 99 "data/maps/Route114/scripts.pory"
# 190 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 191 "data/maps/Route114/scripts.pory"
	end
# 192 "data/maps/Route114/scripts.pory"

# 193 "data/maps/Route114/scripts.pory"

# 194 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 195 "data/maps/Route114/scripts.pory"
# 104 "data/maps/Route114/scripts.pory"
# 196 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 197 "data/maps/Route114/scripts.pory"
	end
# 198 "data/maps/Route114/scripts.pory"

# 199 "data/maps/Route114/scripts.pory"

# 200 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 201 "data/maps/Route114/scripts.pory"
# 109 "data/maps/Route114/scripts.pory"
# 202 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 203 "data/maps/Route114/scripts.pory"
# 110 "data/maps/Route114/scripts.pory"
# 204 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route114/scripts.pory"
	end
# 206 "data/maps/Route114/scripts.pory"

# 207 "data/maps/Route114/scripts.pory"

# 208 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 209 "data/maps/Route114/scripts.pory"
# 115 "data/maps/Route114/scripts.pory"
# 210 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 211 "data/maps/Route114/scripts.pory"
# 116 "data/maps/Route114/scripts.pory"
# 212 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route114/scripts.pory"
	end
# 214 "data/maps/Route114/scripts.pory"

# 215 "data/maps/Route114/scripts.pory"

# 216 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 217 "data/maps/Route114/scripts.pory"
# 121 "data/maps/Route114/scripts.pory"
# 218 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 219 "data/maps/Route114/scripts.pory"
# 122 "data/maps/Route114/scripts.pory"
# 220 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route114/scripts.pory"
	end
# 222 "data/maps/Route114/scripts.pory"

# 223 "data/maps/Route114/scripts.pory"

# 224 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 225 "data/maps/Route114/scripts.pory"
# 127 "data/maps/Route114/scripts.pory"
# 226 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 227 "data/maps/Route114/scripts.pory"
# 128 "data/maps/Route114/scripts.pory"
# 228 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/Route114/scripts.pory"
	end
# 230 "data/maps/Route114/scripts.pory"

# 231 "data/maps/Route114/scripts.pory"

# 232 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 233 "data/maps/Route114/scripts.pory"
# 133 "data/maps/Route114/scripts.pory"
# 234 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 235 "data/maps/Route114/scripts.pory"
# 134 "data/maps/Route114/scripts.pory"
# 236 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 237 "data/maps/Route114/scripts.pory"
# 135 "data/maps/Route114/scripts.pory"
# 238 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
# 239 "data/maps/Route114/scripts.pory"
	goto_if_eq Route114_EventScript_Steve_2
# 240 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve_1:
# 241 "data/maps/Route114/scripts.pory"
# 138 "data/maps/Route114/scripts.pory"
# 242 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 243 "data/maps/Route114/scripts.pory"
# 139 "data/maps/Route114/scripts.pory"
# 244 "data/maps/Route114/scripts.pory"
	release
# 245 "data/maps/Route114/scripts.pory"
	end
# 246 "data/maps/Route114/scripts.pory"

# 247 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve_2:
# 248 "data/maps/Route114/scripts.pory"
# 136 "data/maps/Route114/scripts.pory"
# 249 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_RematchSteve
# 250 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_Steve_1
# 251 "data/maps/Route114/scripts.pory"

# 252 "data/maps/Route114/scripts.pory"

# 253 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 254 "data/maps/Route114/scripts.pory"
# 144 "data/maps/Route114/scripts.pory"
# 255 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 256 "data/maps/Route114/scripts.pory"
# 145 "data/maps/Route114/scripts.pory"
# 257 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 258 "data/maps/Route114/scripts.pory"
# 146 "data/maps/Route114/scripts.pory"
# 259 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 260 "data/maps/Route114/scripts.pory"
# 147 "data/maps/Route114/scripts.pory"
# 261 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 262 "data/maps/Route114/scripts.pory"
# 148 "data/maps/Route114/scripts.pory"
# 263 "data/maps/Route114/scripts.pory"
	release
# 264 "data/maps/Route114/scripts.pory"
	end
# 265 "data/maps/Route114/scripts.pory"

# 266 "data/maps/Route114/scripts.pory"

# 267 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 268 "data/maps/Route114/scripts.pory"
# 153 "data/maps/Route114/scripts.pory"
# 269 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 270 "data/maps/Route114/scripts.pory"
# 154 "data/maps/Route114/scripts.pory"
# 271 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 272 "data/maps/Route114/scripts.pory"
	end
# 273 "data/maps/Route114/scripts.pory"

# 274 "data/maps/Route114/scripts.pory"

# 275 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 276 "data/maps/Route114/scripts.pory"
# 159 "data/maps/Route114/scripts.pory"
# 277 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 278 "data/maps/Route114/scripts.pory"
# 160 "data/maps/Route114/scripts.pory"
# 279 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 280 "data/maps/Route114/scripts.pory"
# 161 "data/maps/Route114/scripts.pory"
# 281 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
# 282 "data/maps/Route114/scripts.pory"
	goto_if_eq Route114_EventScript_Bernie_2
# 283 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie_1:
# 284 "data/maps/Route114/scripts.pory"
# 164 "data/maps/Route114/scripts.pory"
# 285 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 286 "data/maps/Route114/scripts.pory"
# 165 "data/maps/Route114/scripts.pory"
# 287 "data/maps/Route114/scripts.pory"
	release
# 288 "data/maps/Route114/scripts.pory"
	end
# 289 "data/maps/Route114/scripts.pory"

# 290 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie_2:
# 291 "data/maps/Route114/scripts.pory"
# 162 "data/maps/Route114/scripts.pory"
# 292 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_RematchBernie
# 293 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_Bernie_1
# 294 "data/maps/Route114/scripts.pory"

# 295 "data/maps/Route114/scripts.pory"

# 296 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 297 "data/maps/Route114/scripts.pory"
# 170 "data/maps/Route114/scripts.pory"
# 298 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 299 "data/maps/Route114/scripts.pory"
# 171 "data/maps/Route114/scripts.pory"
# 300 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 301 "data/maps/Route114/scripts.pory"
# 172 "data/maps/Route114/scripts.pory"
# 302 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 303 "data/maps/Route114/scripts.pory"
# 173 "data/maps/Route114/scripts.pory"
# 304 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 305 "data/maps/Route114/scripts.pory"
# 174 "data/maps/Route114/scripts.pory"
# 306 "data/maps/Route114/scripts.pory"
	release
# 307 "data/maps/Route114/scripts.pory"
	end
# 308 "data/maps/Route114/scripts.pory"

# 309 "data/maps/Route114/scripts.pory"

# 310 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 311 "data/maps/Route114/scripts.pory"
# 179 "data/maps/Route114/scripts.pory"
# 312 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 313 "data/maps/Route114/scripts.pory"
# 180 "data/maps/Route114/scripts.pory"
# 314 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 315 "data/maps/Route114/scripts.pory"
	end
# 316 "data/maps/Route114/scripts.pory"

# 317 "data/maps/Route114/scripts.pory"

# 318 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 319 "data/maps/Route114/scripts.pory"
# 185 "data/maps/Route114/scripts.pory"
# 320 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 321 "data/maps/Route114/scripts.pory"
# 186 "data/maps/Route114/scripts.pory"
# 322 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route114/scripts.pory"
	end
# 324 "data/maps/Route114/scripts.pory"

# 325 "data/maps/Route114/scripts.pory"

# 326 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 327 "data/maps/Route114/scripts.pory"
# 191 "data/maps/Route114/scripts.pory"
# 328 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 329 "data/maps/Route114/scripts.pory"
# 192 "data/maps/Route114/scripts.pory"
# 330 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/Route114/scripts.pory"
	end
# 332 "data/maps/Route114/scripts.pory"

# 333 "data/maps/Route114/scripts.pory"

# 334 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 335 "data/maps/Route114/scripts.pory"
# 197 "data/maps/Route114/scripts.pory"
# 336 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 337 "data/maps/Route114/scripts.pory"
# 198 "data/maps/Route114/scripts.pory"
# 338 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 339 "data/maps/Route114/scripts.pory"
	end
# 340 "data/maps/Route114/scripts.pory"

# 341 "data/maps/Route114/scripts.pory"

# 342 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 343 "data/maps/Route114/scripts.pory"
# 203 "data/maps/Route114/scripts.pory"
# 344 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 345 "data/maps/Route114/scripts.pory"
# 204 "data/maps/Route114/scripts.pory"
# 346 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 347 "data/maps/Route114/scripts.pory"
	end
# 348 "data/maps/Route114/scripts.pory"

# 349 "data/maps/Route114/scripts.pory"

# 350 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 351 "data/maps/Route114/scripts.pory"
# 209 "data/maps/Route114/scripts.pory"
# 352 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 353 "data/maps/Route114/scripts.pory"
# 210 "data/maps/Route114/scripts.pory"
# 354 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 355 "data/maps/Route114/scripts.pory"
	end
# 356 "data/maps/Route114/scripts.pory"

# 357 "data/maps/Route114/scripts.pory"

# 358 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 359 "data/maps/Route114/scripts.pory"
# 215 "data/maps/Route114/scripts.pory"
# 360 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 361 "data/maps/Route114/scripts.pory"
# 216 "data/maps/Route114/scripts.pory"
# 362 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 363 "data/maps/Route114/scripts.pory"
	end
# 364 "data/maps/Route114/scripts.pory"

# 365 "data/maps/Route114/scripts.pory"

# 366 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 367 "data/maps/Route114/scripts.pory"
# 221 "data/maps/Route114/scripts.pory"
# 368 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 369 "data/maps/Route114/scripts.pory"
# 222 "data/maps/Route114/scripts.pory"
# 370 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route114/scripts.pory"
	end
# 372 "data/maps/Route114/scripts.pory"

# 373 "data/maps/Route114/scripts.pory"

# 374 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis::
# 375 "data/maps/Route114/scripts.pory"
# 226 "data/maps/Route114/scripts.pory"
# 376 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 377 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 378 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 379 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 380 "data/maps/Route114/scripts.pory"

# 381 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar::
# 382 "data/maps/Route114/scripts.pory"
# 233 "data/maps/Route114/scripts.pory"
# 383 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 384 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 385 "data/maps/Route114/scripts.pory"

# 386 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena::
# 387 "data/maps/Route114/scripts.pory"
# 238 "data/maps/Route114/scripts.pory"
# 388 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 389 "data/maps/Route114/scripts.pory"

# 390 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign::
# 391 "data/maps/Route114/scripts.pory"
# 242 "data/maps/Route114/scripts.pory"
# 392 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 393 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 394 "data/maps/Route114/scripts.pory"

# 395 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign::
# 396 "data/maps/Route114/scripts.pory"
# 247 "data/maps/Route114/scripts.pory"
# 397 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 398 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 399 "data/maps/Route114/scripts.pory"

# 400 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse::
# 401 "data/maps/Route114/scripts.pory"
# 252 "data/maps/Route114/scripts.pory"
# 402 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"
