# 1 "data/maps/Route113/scripts.pory"

# 2 "data/maps/Route113/scripts.pory"
Route113_MapScripts::
# 3 "data/maps/Route113/scripts.pory"
# 2 "data/maps/Route113/scripts.pory"
# 4 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
# 5 "data/maps/Route113/scripts.pory"
# 3 "data/maps/Route113/scripts.pory"
# 6 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
# 7 "data/maps/Route113/scripts.pory"
	.byte 0
# 8 "data/maps/Route113/scripts.pory"

# 9 "data/maps/Route113/scripts.pory"

# 10 "data/maps/Route113/scripts.pory"
Route113_OnResume::
# 11 "data/maps/Route113/scripts.pory"
# 7 "data/maps/Route113/scripts.pory"
# 12 "data/maps/Route113/scripts.pory"
	setstepcallback STEP_CB_ASH
# 13 "data/maps/Route113/scripts.pory"
	end
# 14 "data/maps/Route113/scripts.pory"

# 15 "data/maps/Route113/scripts.pory"

# 16 "data/maps/Route113/scripts.pory"
Route113_OnTransition::
# 17 "data/maps/Route113/scripts.pory"
# 12 "data/maps/Route113/scripts.pory"
# 18 "data/maps/Route113/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 19 "data/maps/Route113/scripts.pory"
# 13 "data/maps/Route113/scripts.pory"
# 20 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_CheckSetAshWeather
# 21 "data/maps/Route113/scripts.pory"
	end
# 22 "data/maps/Route113/scripts.pory"

# 23 "data/maps/Route113/scripts.pory"

# 24 "data/maps/Route113/scripts.pory"
Route113_EventScript_CheckSetAshWeather::
# 25 "data/maps/Route113/scripts.pory"
# 18 "data/maps/Route113/scripts.pory"
# 26 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 27 "data/maps/Route113/scripts.pory"
# 19 "data/maps/Route113/scripts.pory"
# 28 "data/maps/Route113/scripts.pory"
	compare VAR_TEMP_0, 19
# 29 "data/maps/Route113/scripts.pory"
	goto_if_lt Route113_EventScript_CheckSetAshWeather_2
# 30 "data/maps/Route113/scripts.pory"
Route113_EventScript_CheckSetAshWeather_1:
# 31 "data/maps/Route113/scripts.pory"
# 22 "data/maps/Route113/scripts.pory"
# 32 "data/maps/Route113/scripts.pory"
	compare VAR_TEMP_0, 84
# 33 "data/maps/Route113/scripts.pory"
	goto_if_gt Route113_EventScript_CheckSetAshWeather_5
# 34 "data/maps/Route113/scripts.pory"
Route113_EventScript_CheckSetAshWeather_4:
# 35 "data/maps/Route113/scripts.pory"
# 25 "data/maps/Route113/scripts.pory"
# 36 "data/maps/Route113/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 37 "data/maps/Route113/scripts.pory"
	return
# 38 "data/maps/Route113/scripts.pory"

# 39 "data/maps/Route113/scripts.pory"
Route113_EventScript_CheckSetAshWeather_2:
# 40 "data/maps/Route113/scripts.pory"
# 20 "data/maps/Route113/scripts.pory"
# 41 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_DontSetAshWeather
# 42 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_CheckSetAshWeather_1
# 43 "data/maps/Route113/scripts.pory"

# 44 "data/maps/Route113/scripts.pory"
Route113_EventScript_CheckSetAshWeather_5:
# 45 "data/maps/Route113/scripts.pory"
# 23 "data/maps/Route113/scripts.pory"
# 46 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_DontSetAshWeather
# 47 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_CheckSetAshWeather_4
# 48 "data/maps/Route113/scripts.pory"

# 49 "data/maps/Route113/scripts.pory"

# 50 "data/maps/Route113/scripts.pory"
Route113_EventScript_DontSetAshWeather::
# 51 "data/maps/Route113/scripts.pory"
	return
# 52 "data/maps/Route113/scripts.pory"

# 53 "data/maps/Route113/scripts.pory"

# 54 "data/maps/Route113/scripts.pory"
Route113_EventScript_Gentleman::
# 55 "data/maps/Route113/scripts.pory"
# 34 "data/maps/Route113/scripts.pory"
# 56 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
# 57 "data/maps/Route113/scripts.pory"
	end
# 58 "data/maps/Route113/scripts.pory"

# 59 "data/maps/Route113/scripts.pory"

# 60 "data/maps/Route113/scripts.pory"
Route113_EventScript_NinjaBoy::
# 61 "data/maps/Route113/scripts.pory"
# 39 "data/maps/Route113/scripts.pory"
# 62 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
# 63 "data/maps/Route113/scripts.pory"
	end
# 64 "data/maps/Route113/scripts.pory"

# 65 "data/maps/Route113/scripts.pory"

# 66 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSign111::
# 67 "data/maps/Route113/scripts.pory"
# 44 "data/maps/Route113/scripts.pory"
# 68 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
# 69 "data/maps/Route113/scripts.pory"
	end
# 70 "data/maps/Route113/scripts.pory"

# 71 "data/maps/Route113/scripts.pory"

# 72 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSignFallarbor::
# 73 "data/maps/Route113/scripts.pory"
# 49 "data/maps/Route113/scripts.pory"
# 74 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
# 75 "data/maps/Route113/scripts.pory"
	end
# 76 "data/maps/Route113/scripts.pory"

# 77 "data/maps/Route113/scripts.pory"

# 78 "data/maps/Route113/scripts.pory"
Route113_EventScript_GlassWorkshopSign::
# 79 "data/maps/Route113/scripts.pory"
# 54 "data/maps/Route113/scripts.pory"
# 80 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
# 81 "data/maps/Route113/scripts.pory"
	end
# 82 "data/maps/Route113/scripts.pory"

# 83 "data/maps/Route113/scripts.pory"

# 84 "data/maps/Route113/scripts.pory"
Route113_EventScript_TrainerTipsRegisterKeyItems::
# 85 "data/maps/Route113/scripts.pory"
# 59 "data/maps/Route113/scripts.pory"
# 86 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
# 87 "data/maps/Route113/scripts.pory"
	end
# 88 "data/maps/Route113/scripts.pory"

# 89 "data/maps/Route113/scripts.pory"

# 90 "data/maps/Route113/scripts.pory"
Route113_EventScript_Jaylen::
# 91 "data/maps/Route113/scripts.pory"
# 64 "data/maps/Route113/scripts.pory"
# 92 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
# 93 "data/maps/Route113/scripts.pory"
# 65 "data/maps/Route113/scripts.pory"
# 94 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route113/scripts.pory"
	end
# 96 "data/maps/Route113/scripts.pory"

# 97 "data/maps/Route113/scripts.pory"

# 98 "data/maps/Route113/scripts.pory"
Route113_EventScript_Dillon::
# 99 "data/maps/Route113/scripts.pory"
# 70 "data/maps/Route113/scripts.pory"
# 100 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
# 101 "data/maps/Route113/scripts.pory"
# 71 "data/maps/Route113/scripts.pory"
# 102 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route113/scripts.pory"
	end
# 104 "data/maps/Route113/scripts.pory"

# 105 "data/maps/Route113/scripts.pory"

# 106 "data/maps/Route113/scripts.pory"
Route113_EventScript_Madeline::
# 107 "data/maps/Route113/scripts.pory"
# 76 "data/maps/Route113/scripts.pory"
# 108 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
# 109 "data/maps/Route113/scripts.pory"
# 77 "data/maps/Route113/scripts.pory"
# 110 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 111 "data/maps/Route113/scripts.pory"
# 78 "data/maps/Route113/scripts.pory"
# 112 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, TRUE
# 113 "data/maps/Route113/scripts.pory"
	goto_if_eq Route113_EventScript_Madeline_2
# 114 "data/maps/Route113/scripts.pory"
Route113_EventScript_Madeline_1:
# 115 "data/maps/Route113/scripts.pory"
# 81 "data/maps/Route113/scripts.pory"
# 116 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
# 117 "data/maps/Route113/scripts.pory"
# 82 "data/maps/Route113/scripts.pory"
# 118 "data/maps/Route113/scripts.pory"
	release
# 119 "data/maps/Route113/scripts.pory"
	end
# 120 "data/maps/Route113/scripts.pory"

# 121 "data/maps/Route113/scripts.pory"
Route113_EventScript_Madeline_2:
# 122 "data/maps/Route113/scripts.pory"
# 79 "data/maps/Route113/scripts.pory"
# 123 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_RematchMadeline
# 124 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_Madeline_1
# 125 "data/maps/Route113/scripts.pory"

# 126 "data/maps/Route113/scripts.pory"

# 127 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterMadeline::
# 128 "data/maps/Route113/scripts.pory"
# 87 "data/maps/Route113/scripts.pory"
# 129 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 130 "data/maps/Route113/scripts.pory"
# 88 "data/maps/Route113/scripts.pory"
# 131 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route113/scripts.pory"
# 89 "data/maps/Route113/scripts.pory"
# 133 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
# 134 "data/maps/Route113/scripts.pory"
# 90 "data/maps/Route113/scripts.pory"
# 135 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_MADELINE_1
# 136 "data/maps/Route113/scripts.pory"
# 91 "data/maps/Route113/scripts.pory"
# 137 "data/maps/Route113/scripts.pory"
	release
# 138 "data/maps/Route113/scripts.pory"
	end
# 139 "data/maps/Route113/scripts.pory"

# 140 "data/maps/Route113/scripts.pory"

# 141 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchMadeline::
# 142 "data/maps/Route113/scripts.pory"
# 96 "data/maps/Route113/scripts.pory"
# 143 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
# 144 "data/maps/Route113/scripts.pory"
# 97 "data/maps/Route113/scripts.pory"
# 145 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route113/scripts.pory"
	end
# 147 "data/maps/Route113/scripts.pory"

# 148 "data/maps/Route113/scripts.pory"

# 149 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lao::
# 150 "data/maps/Route113/scripts.pory"
# 102 "data/maps/Route113/scripts.pory"
# 151 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
# 152 "data/maps/Route113/scripts.pory"
# 103 "data/maps/Route113/scripts.pory"
# 153 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 154 "data/maps/Route113/scripts.pory"
# 104 "data/maps/Route113/scripts.pory"
# 155 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, TRUE
# 156 "data/maps/Route113/scripts.pory"
	goto_if_eq Route113_EventScript_Lao_2
# 157 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lao_1:
# 158 "data/maps/Route113/scripts.pory"
# 107 "data/maps/Route113/scripts.pory"
# 159 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
# 160 "data/maps/Route113/scripts.pory"
# 108 "data/maps/Route113/scripts.pory"
# 161 "data/maps/Route113/scripts.pory"
	release
# 162 "data/maps/Route113/scripts.pory"
	end
# 163 "data/maps/Route113/scripts.pory"

# 164 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lao_2:
# 165 "data/maps/Route113/scripts.pory"
# 105 "data/maps/Route113/scripts.pory"
# 166 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_RematchLao
# 167 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_Lao_1
# 168 "data/maps/Route113/scripts.pory"

# 169 "data/maps/Route113/scripts.pory"

# 170 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterLao::
# 171 "data/maps/Route113/scripts.pory"
# 113 "data/maps/Route113/scripts.pory"
# 172 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 173 "data/maps/Route113/scripts.pory"
# 114 "data/maps/Route113/scripts.pory"
# 174 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route113/scripts.pory"
# 115 "data/maps/Route113/scripts.pory"
# 176 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
# 177 "data/maps/Route113/scripts.pory"
# 116 "data/maps/Route113/scripts.pory"
# 178 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_LAO_1
# 179 "data/maps/Route113/scripts.pory"
# 117 "data/maps/Route113/scripts.pory"
# 180 "data/maps/Route113/scripts.pory"
	release
# 181 "data/maps/Route113/scripts.pory"
	end
# 182 "data/maps/Route113/scripts.pory"

# 183 "data/maps/Route113/scripts.pory"

# 184 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchLao::
# 185 "data/maps/Route113/scripts.pory"
# 122 "data/maps/Route113/scripts.pory"
# 186 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
# 187 "data/maps/Route113/scripts.pory"
# 123 "data/maps/Route113/scripts.pory"
# 188 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route113/scripts.pory"
	end
# 190 "data/maps/Route113/scripts.pory"

# 191 "data/maps/Route113/scripts.pory"

# 192 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lung::
# 193 "data/maps/Route113/scripts.pory"
# 128 "data/maps/Route113/scripts.pory"
# 194 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
# 195 "data/maps/Route113/scripts.pory"
# 129 "data/maps/Route113/scripts.pory"
# 196 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route113/scripts.pory"
	end
# 198 "data/maps/Route113/scripts.pory"

# 199 "data/maps/Route113/scripts.pory"

# 200 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tori::
# 201 "data/maps/Route113/scripts.pory"
# 134 "data/maps/Route113/scripts.pory"
# 202 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat, Route113_Text_ToriNotEnoughMons
# 203 "data/maps/Route113/scripts.pory"
# 135 "data/maps/Route113/scripts.pory"
# 204 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route113/scripts.pory"
	end
# 206 "data/maps/Route113/scripts.pory"

# 207 "data/maps/Route113/scripts.pory"

# 208 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tia::
# 209 "data/maps/Route113/scripts.pory"
# 140 "data/maps/Route113/scripts.pory"
# 210 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat, Route113_Text_TiaNotEnoughMons
# 211 "data/maps/Route113/scripts.pory"
# 141 "data/maps/Route113/scripts.pory"
# 212 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route113/scripts.pory"
	end
# 214 "data/maps/Route113/scripts.pory"

# 215 "data/maps/Route113/scripts.pory"

# 216 "data/maps/Route113/scripts.pory"
Route113_EventScript_Sophie::
# 217 "data/maps/Route113/scripts.pory"
# 146 "data/maps/Route113/scripts.pory"
# 218 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
# 219 "data/maps/Route113/scripts.pory"
# 147 "data/maps/Route113/scripts.pory"
# 220 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route113/scripts.pory"
	end
# 222 "data/maps/Route113/scripts.pory"

# 223 "data/maps/Route113/scripts.pory"

# 224 "data/maps/Route113/scripts.pory"
Route113_EventScript_Coby::
# 225 "data/maps/Route113/scripts.pory"
# 152 "data/maps/Route113/scripts.pory"
# 226 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
# 227 "data/maps/Route113/scripts.pory"
# 153 "data/maps/Route113/scripts.pory"
# 228 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/Route113/scripts.pory"
	end
# 230 "data/maps/Route113/scripts.pory"

# 231 "data/maps/Route113/scripts.pory"

# 232 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lawrence::
# 233 "data/maps/Route113/scripts.pory"
# 158 "data/maps/Route113/scripts.pory"
# 234 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
# 235 "data/maps/Route113/scripts.pory"
# 159 "data/maps/Route113/scripts.pory"
# 236 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/Route113/scripts.pory"
	end
# 238 "data/maps/Route113/scripts.pory"

# 239 "data/maps/Route113/scripts.pory"

# 240 "data/maps/Route113/scripts.pory"
Route113_EventScript_Wyatt::
# 241 "data/maps/Route113/scripts.pory"
# 164 "data/maps/Route113/scripts.pory"
# 242 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
# 243 "data/maps/Route113/scripts.pory"
# 165 "data/maps/Route113/scripts.pory"
# 244 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/Route113/scripts.pory"
	end
# 246 "data/maps/Route113/scripts.pory"

# 247 "data/maps/Route113/scripts.pory"

# 248 "data/maps/Route113/scripts.pory"
Route113_Text_AshCanBeFashionedIntoGlass::
# 249 "data/maps/Route113/scripts.pory"
# 169 "data/maps/Route113/scripts.pory"
# 250 "data/maps/Route113/scripts.pory"
	.string "Wahahaha! Today's technology is a\n"
# 251 "data/maps/Route113/scripts.pory"
	.string "wondrous thing!\p"
# 252 "data/maps/Route113/scripts.pory"
	.string "Take this volcanic ash here.\n"
# 253 "data/maps/Route113/scripts.pory"
	.string "It can be fashioned into glass.$"
# 254 "data/maps/Route113/scripts.pory"

# 255 "data/maps/Route113/scripts.pory"
Route113_Text_FunWalkingThroughAsh::
# 256 "data/maps/Route113/scripts.pory"
# 176 "data/maps/Route113/scripts.pory"
# 257 "data/maps/Route113/scripts.pory"
	.string "It's fun walking through the volcano's\n"
# 258 "data/maps/Route113/scripts.pory"
	.string "ashes on the ground and grass.\p"
# 259 "data/maps/Route113/scripts.pory"
	.string "You can see where you walked--it's\n"
# 260 "data/maps/Route113/scripts.pory"
	.string "really neat!$"
# 261 "data/maps/Route113/scripts.pory"

# 262 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSign111::
# 263 "data/maps/Route113/scripts.pory"
# 183 "data/maps/Route113/scripts.pory"
# 264 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 265 "data/maps/Route113/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 111$"
# 266 "data/maps/Route113/scripts.pory"

# 267 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSignFallarbor::
# 268 "data/maps/Route113/scripts.pory"
# 188 "data/maps/Route113/scripts.pory"
# 269 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 270 "data/maps/Route113/scripts.pory"
	.string "{LEFT_ARROW} FALLARBOR TOWN$"
# 271 "data/maps/Route113/scripts.pory"

# 272 "data/maps/Route113/scripts.pory"
Route113_Text_TrainerTipsRegisterKeyItems::
# 273 "data/maps/Route113/scripts.pory"
# 193 "data/maps/Route113/scripts.pory"
# 274 "data/maps/Route113/scripts.pory"
	.string "TRAINER TIPS\p"
# 275 "data/maps/Route113/scripts.pory"
	.string "You may register one of the KEY ITEMS\n"
# 276 "data/maps/Route113/scripts.pory"
	.string "in your BAG as SELECT.\p"
# 277 "data/maps/Route113/scripts.pory"
	.string "Simply press SELECT to use\n"
# 278 "data/maps/Route113/scripts.pory"
	.string "the registered item conveniently.$"
# 279 "data/maps/Route113/scripts.pory"

# 280 "data/maps/Route113/scripts.pory"
Route113_Text_GlassWorkshopSign::
# 281 "data/maps/Route113/scripts.pory"
# 201 "data/maps/Route113/scripts.pory"
# 282 "data/maps/Route113/scripts.pory"
	.string "GLASS WORKSHOP\n"
# 283 "data/maps/Route113/scripts.pory"
	.string "“Turning Volcanic Ash into Glass Items”$"
