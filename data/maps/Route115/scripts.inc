# 1 "data/maps/Route115/scripts.pory"

# 2 "data/maps/Route115/scripts.pory"
Route115_MapScripts::
# 3 "data/maps/Route115/scripts.pory"
# 2 "data/maps/Route115/scripts.pory"
# 4 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route115_OnLoad
# 5 "data/maps/Route115/scripts.pory"
# 3 "data/maps/Route115/scripts.pory"
# 6 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route115_OnTransition
# 7 "data/maps/Route115/scripts.pory"
# 4 "data/maps/Route115/scripts.pory"
# 8 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route115_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Route115/scripts.pory"
	.byte 0
# 10 "data/maps/Route115/scripts.pory"

# 11 "data/maps/Route115/scripts.pory"
Route115_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Route115/scripts.pory"
# 5 "data/maps/Route115/scripts.pory"
# 13 "data/maps/Route115/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 14 "data/maps/Route115/scripts.pory"
	.2byte 0
# 15 "data/maps/Route115/scripts.pory"

# 16 "data/maps/Route115/scripts.pory"

# 17 "data/maps/Route115/scripts.pory"
Route115_OnLoad::
# 18 "data/maps/Route115/scripts.pory"
# 10 "data/maps/Route115/scripts.pory"
# 19 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST
# 20 "data/maps/Route115/scripts.pory"
	goto_if_eq Route115_OnLoad_2
# 21 "data/maps/Route115/scripts.pory"
Route115_OnLoad_1:
# 22 "data/maps/Route115/scripts.pory"
# 13 "data/maps/Route115/scripts.pory"
# 23 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST
# 24 "data/maps/Route115/scripts.pory"
	goto_if_eq Route115_OnLoad_5
# 25 "data/maps/Route115/scripts.pory"
Route115_OnLoad_4:
# 26 "data/maps/Route115/scripts.pory"
	end
# 27 "data/maps/Route115/scripts.pory"

# 28 "data/maps/Route115/scripts.pory"
Route115_OnLoad_2:
# 29 "data/maps/Route115/scripts.pory"
# 11 "data/maps/Route115/scripts.pory"
# 30 "data/maps/Route115/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute115West
# 31 "data/maps/Route115/scripts.pory"
	goto Route115_OnLoad_1
# 32 "data/maps/Route115/scripts.pory"

# 33 "data/maps/Route115/scripts.pory"
Route115_OnLoad_5:
# 34 "data/maps/Route115/scripts.pory"
# 14 "data/maps/Route115/scripts.pory"
# 35 "data/maps/Route115/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute115East
# 36 "data/maps/Route115/scripts.pory"
	goto Route115_OnLoad_4
# 37 "data/maps/Route115/scripts.pory"

# 38 "data/maps/Route115/scripts.pory"

# 39 "data/maps/Route115/scripts.pory"
Route115_OnTransition::
# 40 "data/maps/Route115/scripts.pory"
# 20 "data/maps/Route115/scripts.pory"
# 41 "data/maps/Route115/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 42 "data/maps/Route115/scripts.pory"
	goto_if_eq Route115_OnTransition_2
# 43 "data/maps/Route115/scripts.pory"
Route115_OnTransition_1:
# 44 "data/maps/Route115/scripts.pory"
# 23 "data/maps/Route115/scripts.pory"
# 45 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST
# 46 "data/maps/Route115/scripts.pory"
	goto_if_eq Route115_OnTransition_5
# 47 "data/maps/Route115/scripts.pory"
Route115_OnTransition_4:
# 48 "data/maps/Route115/scripts.pory"
# 26 "data/maps/Route115/scripts.pory"
# 49 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST
# 50 "data/maps/Route115/scripts.pory"
	goto_if_eq Route115_OnTransition_8
# 51 "data/maps/Route115/scripts.pory"
Route115_OnTransition_7:
# 52 "data/maps/Route115/scripts.pory"
	end
# 53 "data/maps/Route115/scripts.pory"

# 54 "data/maps/Route115/scripts.pory"
Route115_OnTransition_2:
# 55 "data/maps/Route115/scripts.pory"
# 21 "data/maps/Route115/scripts.pory"
# 56 "data/maps/Route115/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
# 57 "data/maps/Route115/scripts.pory"
	goto Route115_OnTransition_1
# 58 "data/maps/Route115/scripts.pory"

# 59 "data/maps/Route115/scripts.pory"
Route115_OnTransition_5:
# 60 "data/maps/Route115/scripts.pory"
# 24 "data/maps/Route115/scripts.pory"
# 61 "data/maps/Route115/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
# 62 "data/maps/Route115/scripts.pory"
	goto Route115_OnTransition_4
# 63 "data/maps/Route115/scripts.pory"

# 64 "data/maps/Route115/scripts.pory"
Route115_OnTransition_8:
# 65 "data/maps/Route115/scripts.pory"
# 27 "data/maps/Route115/scripts.pory"
# 66 "data/maps/Route115/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
# 67 "data/maps/Route115/scripts.pory"
	goto Route115_OnTransition_7
# 68 "data/maps/Route115/scripts.pory"

# 69 "data/maps/Route115/scripts.pory"

# 70 "data/maps/Route115/scripts.pory"
Route115_EventScript_Woman::
# 71 "data/maps/Route115/scripts.pory"
# 33 "data/maps/Route115/scripts.pory"
# 72 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
# 73 "data/maps/Route115/scripts.pory"
	end
# 74 "data/maps/Route115/scripts.pory"

# 75 "data/maps/Route115/scripts.pory"

# 76 "data/maps/Route115/scripts.pory"
Route115_EventScript_RouteSignRustboro::
# 77 "data/maps/Route115/scripts.pory"
# 38 "data/maps/Route115/scripts.pory"
# 78 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
# 79 "data/maps/Route115/scripts.pory"
	end
# 80 "data/maps/Route115/scripts.pory"

# 81 "data/maps/Route115/scripts.pory"

# 82 "data/maps/Route115/scripts.pory"
Route115_EventScript_MeteorFallsSign::
# 83 "data/maps/Route115/scripts.pory"
# 43 "data/maps/Route115/scripts.pory"
# 84 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
# 85 "data/maps/Route115/scripts.pory"
	end
# 86 "data/maps/Route115/scripts.pory"

# 87 "data/maps/Route115/scripts.pory"

# 88 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy::
# 89 "data/maps/Route115/scripts.pory"
# 48 "data/maps/Route115/scripts.pory"
# 90 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
# 91 "data/maps/Route115/scripts.pory"
# 49 "data/maps/Route115/scripts.pory"
# 92 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 93 "data/maps/Route115/scripts.pory"
# 50 "data/maps/Route115/scripts.pory"
# 94 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
# 95 "data/maps/Route115/scripts.pory"
	goto_if_eq Route115_EventScript_Timothy_2
# 96 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy_1:
# 97 "data/maps/Route115/scripts.pory"
# 53 "data/maps/Route115/scripts.pory"
# 98 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
# 99 "data/maps/Route115/scripts.pory"
# 54 "data/maps/Route115/scripts.pory"
# 100 "data/maps/Route115/scripts.pory"
	release
# 101 "data/maps/Route115/scripts.pory"
	end
# 102 "data/maps/Route115/scripts.pory"

# 103 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy_2:
# 104 "data/maps/Route115/scripts.pory"
# 51 "data/maps/Route115/scripts.pory"
# 105 "data/maps/Route115/scripts.pory"
	goto Route115_EventScript_RematchTimothy
# 106 "data/maps/Route115/scripts.pory"
	goto Route115_EventScript_Timothy_1
# 107 "data/maps/Route115/scripts.pory"

# 108 "data/maps/Route115/scripts.pory"

# 109 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterTimothy::
# 110 "data/maps/Route115/scripts.pory"
# 59 "data/maps/Route115/scripts.pory"
# 111 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 112 "data/maps/Route115/scripts.pory"
# 60 "data/maps/Route115/scripts.pory"
# 113 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route115/scripts.pory"
# 61 "data/maps/Route115/scripts.pory"
# 115 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 116 "data/maps/Route115/scripts.pory"
# 62 "data/maps/Route115/scripts.pory"
# 117 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
# 118 "data/maps/Route115/scripts.pory"
# 63 "data/maps/Route115/scripts.pory"
# 119 "data/maps/Route115/scripts.pory"
	release
# 120 "data/maps/Route115/scripts.pory"
	end
# 121 "data/maps/Route115/scripts.pory"

# 122 "data/maps/Route115/scripts.pory"

# 123 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchTimothy::
# 124 "data/maps/Route115/scripts.pory"
# 68 "data/maps/Route115/scripts.pory"
# 125 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 126 "data/maps/Route115/scripts.pory"
# 69 "data/maps/Route115/scripts.pory"
# 127 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route115/scripts.pory"
	end
# 129 "data/maps/Route115/scripts.pory"

# 130 "data/maps/Route115/scripts.pory"

# 131 "data/maps/Route115/scripts.pory"
Route115_EventScript_Koichi::
# 132 "data/maps/Route115/scripts.pory"
# 74 "data/maps/Route115/scripts.pory"
# 133 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 134 "data/maps/Route115/scripts.pory"
# 75 "data/maps/Route115/scripts.pory"
# 135 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route115/scripts.pory"
	end
# 137 "data/maps/Route115/scripts.pory"

# 138 "data/maps/Route115/scripts.pory"

# 139 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob::
# 140 "data/maps/Route115/scripts.pory"
# 80 "data/maps/Route115/scripts.pory"
# 141 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_NOB_1, Route115_Text_NobIntro, Route115_Text_NobDefeat, Route115_EventScript_RegisterNob
# 142 "data/maps/Route115/scripts.pory"
# 81 "data/maps/Route115/scripts.pory"
# 143 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 144 "data/maps/Route115/scripts.pory"
# 82 "data/maps/Route115/scripts.pory"
# 145 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
# 146 "data/maps/Route115/scripts.pory"
	goto_if_eq Route115_EventScript_Nob_2
# 147 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob_1:
# 148 "data/maps/Route115/scripts.pory"
# 85 "data/maps/Route115/scripts.pory"
# 149 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 150 "data/maps/Route115/scripts.pory"
# 86 "data/maps/Route115/scripts.pory"
# 151 "data/maps/Route115/scripts.pory"
	release
# 152 "data/maps/Route115/scripts.pory"
	end
# 153 "data/maps/Route115/scripts.pory"

# 154 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob_2:
# 155 "data/maps/Route115/scripts.pory"
# 83 "data/maps/Route115/scripts.pory"
# 156 "data/maps/Route115/scripts.pory"
	goto Route115_EventScript_RematchNob
# 157 "data/maps/Route115/scripts.pory"
	goto Route115_EventScript_Nob_1
# 158 "data/maps/Route115/scripts.pory"

# 159 "data/maps/Route115/scripts.pory"

# 160 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob::
# 161 "data/maps/Route115/scripts.pory"
# 91 "data/maps/Route115/scripts.pory"
# 162 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 163 "data/maps/Route115/scripts.pory"
# 92 "data/maps/Route115/scripts.pory"
# 164 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route115/scripts.pory"
# 93 "data/maps/Route115/scripts.pory"
# 166 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 167 "data/maps/Route115/scripts.pory"
# 94 "data/maps/Route115/scripts.pory"
# 168 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 169 "data/maps/Route115/scripts.pory"
# 95 "data/maps/Route115/scripts.pory"
# 170 "data/maps/Route115/scripts.pory"
	release
# 171 "data/maps/Route115/scripts.pory"
	end
# 172 "data/maps/Route115/scripts.pory"

# 173 "data/maps/Route115/scripts.pory"

# 174 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob::
# 175 "data/maps/Route115/scripts.pory"
# 100 "data/maps/Route115/scripts.pory"
# 176 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 177 "data/maps/Route115/scripts.pory"
# 101 "data/maps/Route115/scripts.pory"
# 178 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route115/scripts.pory"
	end
# 180 "data/maps/Route115/scripts.pory"

# 181 "data/maps/Route115/scripts.pory"

# 182 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy::
# 183 "data/maps/Route115/scripts.pory"
# 106 "data/maps/Route115/scripts.pory"
# 184 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
# 185 "data/maps/Route115/scripts.pory"
# 107 "data/maps/Route115/scripts.pory"
# 186 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 187 "data/maps/Route115/scripts.pory"
# 108 "data/maps/Route115/scripts.pory"
# 188 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
# 189 "data/maps/Route115/scripts.pory"
	goto_if_eq Route115_EventScript_Cyndy_2
# 190 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy_1:
# 191 "data/maps/Route115/scripts.pory"
# 111 "data/maps/Route115/scripts.pory"
# 192 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 193 "data/maps/Route115/scripts.pory"
# 112 "data/maps/Route115/scripts.pory"
# 194 "data/maps/Route115/scripts.pory"
	release
# 195 "data/maps/Route115/scripts.pory"
	end
# 196 "data/maps/Route115/scripts.pory"

# 197 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy_2:
# 198 "data/maps/Route115/scripts.pory"
# 109 "data/maps/Route115/scripts.pory"
# 199 "data/maps/Route115/scripts.pory"
	goto Route115_EventScript_RematchCyndy
# 200 "data/maps/Route115/scripts.pory"
	goto Route115_EventScript_Cyndy_1
# 201 "data/maps/Route115/scripts.pory"

# 202 "data/maps/Route115/scripts.pory"

# 203 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy::
# 204 "data/maps/Route115/scripts.pory"
# 117 "data/maps/Route115/scripts.pory"
# 205 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 206 "data/maps/Route115/scripts.pory"
# 118 "data/maps/Route115/scripts.pory"
# 207 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 208 "data/maps/Route115/scripts.pory"
# 119 "data/maps/Route115/scripts.pory"
# 209 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 210 "data/maps/Route115/scripts.pory"
# 120 "data/maps/Route115/scripts.pory"
# 211 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 212 "data/maps/Route115/scripts.pory"
# 121 "data/maps/Route115/scripts.pory"
# 213 "data/maps/Route115/scripts.pory"
	release
# 214 "data/maps/Route115/scripts.pory"
	end
# 215 "data/maps/Route115/scripts.pory"

# 216 "data/maps/Route115/scripts.pory"

# 217 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy::
# 218 "data/maps/Route115/scripts.pory"
# 126 "data/maps/Route115/scripts.pory"
# 219 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 220 "data/maps/Route115/scripts.pory"
# 127 "data/maps/Route115/scripts.pory"
# 221 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 222 "data/maps/Route115/scripts.pory"
	end
# 223 "data/maps/Route115/scripts.pory"

# 224 "data/maps/Route115/scripts.pory"

# 225 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector::
# 226 "data/maps/Route115/scripts.pory"
# 132 "data/maps/Route115/scripts.pory"
# 227 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
# 228 "data/maps/Route115/scripts.pory"
# 133 "data/maps/Route115/scripts.pory"
# 229 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route115/scripts.pory"
	end
# 231 "data/maps/Route115/scripts.pory"

# 232 "data/maps/Route115/scripts.pory"

# 233 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra::
# 234 "data/maps/Route115/scripts.pory"
# 138 "data/maps/Route115/scripts.pory"
# 235 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 236 "data/maps/Route115/scripts.pory"
# 139 "data/maps/Route115/scripts.pory"
# 237 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route115/scripts.pory"
	end
# 239 "data/maps/Route115/scripts.pory"

# 240 "data/maps/Route115/scripts.pory"

# 241 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden::
# 242 "data/maps/Route115/scripts.pory"
# 144 "data/maps/Route115/scripts.pory"
# 243 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 244 "data/maps/Route115/scripts.pory"
# 145 "data/maps/Route115/scripts.pory"
# 245 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route115/scripts.pory"
	end
# 247 "data/maps/Route115/scripts.pory"

# 248 "data/maps/Route115/scripts.pory"

# 249 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix::
# 250 "data/maps/Route115/scripts.pory"
# 150 "data/maps/Route115/scripts.pory"
# 251 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_ALIX, Route115_Text_AlixIntro, Route115_Text_AlixDefeat
# 252 "data/maps/Route115/scripts.pory"
# 151 "data/maps/Route115/scripts.pory"
# 253 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route115/scripts.pory"
	end
# 255 "data/maps/Route115/scripts.pory"

# 256 "data/maps/Route115/scripts.pory"

# 257 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene::
# 258 "data/maps/Route115/scripts.pory"
# 156 "data/maps/Route115/scripts.pory"
# 259 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 260 "data/maps/Route115/scripts.pory"
# 157 "data/maps/Route115/scripts.pory"
# 261 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 262 "data/maps/Route115/scripts.pory"
	end
# 263 "data/maps/Route115/scripts.pory"

# 264 "data/maps/Route115/scripts.pory"

# 265 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene::
# 266 "data/maps/Route115/scripts.pory"
# 162 "data/maps/Route115/scripts.pory"
# 267 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, Route115_Text_MarleneIntro, Route115_Text_MarleneDefeat
# 268 "data/maps/Route115/scripts.pory"
# 163 "data/maps/Route115/scripts.pory"
# 269 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 270 "data/maps/Route115/scripts.pory"
	end
# 271 "data/maps/Route115/scripts.pory"

# 272 "data/maps/Route115/scripts.pory"

# 273 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear::
# 274 "data/maps/Route115/scripts.pory"
# 167 "data/maps/Route115/scripts.pory"
# 275 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 276 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 277 "data/maps/Route115/scripts.pory"
	.string "You never know when wild POKéMON will\n"
# 278 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 279 "data/maps/Route115/scripts.pory"

# 280 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro::
# 281 "data/maps/Route115/scripts.pory"
# 174 "data/maps/Route115/scripts.pory"
# 282 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
# 283 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} RUSTBORO CITY$"
# 284 "data/maps/Route115/scripts.pory"

# 285 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign::
# 286 "data/maps/Route115/scripts.pory"
# 179 "data/maps/Route115/scripts.pory"
# 287 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
# 288 "data/maps/Route115/scripts.pory"
	.string "FALLARBOR TOWN THROUGH HERE$"
