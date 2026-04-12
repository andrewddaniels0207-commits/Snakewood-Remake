# 1 "data/maps/Route118/scripts.pory"

# 2 "data/maps/Route118/scripts.pory"
Route118_MapScripts::
# 3 "data/maps/Route118/scripts.pory"
# 2 "data/maps/Route118/scripts.pory"
# 4 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
# 5 "data/maps/Route118/scripts.pory"
# 3 "data/maps/Route118/scripts.pory"
# 6 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
# 7 "data/maps/Route118/scripts.pory"
# 4 "data/maps/Route118/scripts.pory"
# 8 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Route118/scripts.pory"
	.byte 0
# 10 "data/maps/Route118/scripts.pory"

# 11 "data/maps/Route118/scripts.pory"
Route118_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Route118/scripts.pory"
# 5 "data/maps/Route118/scripts.pory"
# 13 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 14 "data/maps/Route118/scripts.pory"
	.2byte 0
# 15 "data/maps/Route118/scripts.pory"

# 16 "data/maps/Route118/scripts.pory"

# 17 "data/maps/Route118/scripts.pory"
Route118_OnTransition::
# 18 "data/maps/Route118/scripts.pory"
# 10 "data/maps/Route118/scripts.pory"
# 19 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 20 "data/maps/Route118/scripts.pory"
# 11 "data/maps/Route118/scripts.pory"
# 21 "data/maps/Route118/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 22 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_OnTransition_2
# 23 "data/maps/Route118/scripts.pory"
Route118_OnTransition_1:
# 24 "data/maps/Route118/scripts.pory"
# 14 "data/maps/Route118/scripts.pory"
# 25 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST
# 26 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_OnTransition_5
# 27 "data/maps/Route118/scripts.pory"
Route118_OnTransition_4:
# 28 "data/maps/Route118/scripts.pory"
# 17 "data/maps/Route118/scripts.pory"
# 29 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST
# 30 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_OnTransition_8
# 31 "data/maps/Route118/scripts.pory"
Route118_OnTransition_7:
# 32 "data/maps/Route118/scripts.pory"
	end
# 33 "data/maps/Route118/scripts.pory"

# 34 "data/maps/Route118/scripts.pory"
Route118_OnTransition_2:
# 35 "data/maps/Route118/scripts.pory"
# 12 "data/maps/Route118/scripts.pory"
# 36 "data/maps/Route118/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
# 37 "data/maps/Route118/scripts.pory"
	goto Route118_OnTransition_1
# 38 "data/maps/Route118/scripts.pory"

# 39 "data/maps/Route118/scripts.pory"
Route118_OnTransition_5:
# 40 "data/maps/Route118/scripts.pory"
# 15 "data/maps/Route118/scripts.pory"
# 41 "data/maps/Route118/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
# 42 "data/maps/Route118/scripts.pory"
	goto Route118_OnTransition_4
# 43 "data/maps/Route118/scripts.pory"

# 44 "data/maps/Route118/scripts.pory"
Route118_OnTransition_8:
# 45 "data/maps/Route118/scripts.pory"
# 18 "data/maps/Route118/scripts.pory"
# 46 "data/maps/Route118/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
# 47 "data/maps/Route118/scripts.pory"
	goto Route118_OnTransition_7
# 48 "data/maps/Route118/scripts.pory"

# 49 "data/maps/Route118/scripts.pory"

# 50 "data/maps/Route118/scripts.pory"
Route118_OnLoad::
# 51 "data/maps/Route118/scripts.pory"
# 24 "data/maps/Route118/scripts.pory"
# 52 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST
# 53 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_OnLoad_2
# 54 "data/maps/Route118/scripts.pory"
Route118_OnLoad_1:
# 55 "data/maps/Route118/scripts.pory"
# 27 "data/maps/Route118/scripts.pory"
# 56 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST
# 57 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_OnLoad_5
# 58 "data/maps/Route118/scripts.pory"
Route118_OnLoad_4:
# 59 "data/maps/Route118/scripts.pory"
	end
# 60 "data/maps/Route118/scripts.pory"

# 61 "data/maps/Route118/scripts.pory"
Route118_OnLoad_2:
# 62 "data/maps/Route118/scripts.pory"
# 25 "data/maps/Route118/scripts.pory"
# 63 "data/maps/Route118/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute118East
# 64 "data/maps/Route118/scripts.pory"
	goto Route118_OnLoad_1
# 65 "data/maps/Route118/scripts.pory"

# 66 "data/maps/Route118/scripts.pory"
Route118_OnLoad_5:
# 67 "data/maps/Route118/scripts.pory"
# 28 "data/maps/Route118/scripts.pory"
# 68 "data/maps/Route118/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute118West
# 69 "data/maps/Route118/scripts.pory"
	goto Route118_OnLoad_4
# 70 "data/maps/Route118/scripts.pory"

# 71 "data/maps/Route118/scripts.pory"

# 72 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman::
# 73 "data/maps/Route118/scripts.pory"
# 34 "data/maps/Route118/scripts.pory"
# 74 "data/maps/Route118/scripts.pory"
	lock
# 75 "data/maps/Route118/scripts.pory"
# 35 "data/maps/Route118/scripts.pory"
# 76 "data/maps/Route118/scripts.pory"
	faceplayer
# 77 "data/maps/Route118/scripts.pory"
# 36 "data/maps/Route118/scripts.pory"
# 78 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route118_EventScript_GoodRodFisherman_2
# 79 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman_1:
# 80 "data/maps/Route118/scripts.pory"
# 39 "data/maps/Route118/scripts.pory"
# 81 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
# 82 "data/maps/Route118/scripts.pory"
# 40 "data/maps/Route118/scripts.pory"
# 83 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, YES
# 84 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_GoodRodFisherman_5
# 85 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman_4:
# 86 "data/maps/Route118/scripts.pory"
# 43 "data/maps/Route118/scripts.pory"
# 87 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, NO
# 88 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_GoodRodFisherman_8
# 89 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman_7:
# 90 "data/maps/Route118/scripts.pory"
	end
# 91 "data/maps/Route118/scripts.pory"

# 92 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman_2:
# 93 "data/maps/Route118/scripts.pory"
# 37 "data/maps/Route118/scripts.pory"
# 94 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_ReceivedGoodRod
# 95 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_GoodRodFisherman_1
# 96 "data/maps/Route118/scripts.pory"

# 97 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman_5:
# 98 "data/maps/Route118/scripts.pory"
# 41 "data/maps/Route118/scripts.pory"
# 99 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_ReceiveGoodRod
# 100 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_GoodRodFisherman_4
# 101 "data/maps/Route118/scripts.pory"

# 102 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman_8:
# 103 "data/maps/Route118/scripts.pory"
# 44 "data/maps/Route118/scripts.pory"
# 104 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_DeclineGoodRod
# 105 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_GoodRodFisherman_7
# 106 "data/maps/Route118/scripts.pory"

# 107 "data/maps/Route118/scripts.pory"

# 108 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceiveGoodRod::
# 109 "data/maps/Route118/scripts.pory"
# 50 "data/maps/Route118/scripts.pory"
# 110 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
# 111 "data/maps/Route118/scripts.pory"
# 51 "data/maps/Route118/scripts.pory"
# 112 "data/maps/Route118/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 113 "data/maps/Route118/scripts.pory"
# 52 "data/maps/Route118/scripts.pory"
# 114 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, FALSE
# 115 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_ReceiveGoodRod_2
# 116 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceiveGoodRod_1:
# 117 "data/maps/Route118/scripts.pory"
# 55 "data/maps/Route118/scripts.pory"
# 118 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 119 "data/maps/Route118/scripts.pory"
# 56 "data/maps/Route118/scripts.pory"
# 120 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
# 121 "data/maps/Route118/scripts.pory"
# 57 "data/maps/Route118/scripts.pory"
# 122 "data/maps/Route118/scripts.pory"
	release
# 123 "data/maps/Route118/scripts.pory"
	end
# 124 "data/maps/Route118/scripts.pory"

# 125 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceiveGoodRod_2:
# 126 "data/maps/Route118/scripts.pory"
# 53 "data/maps/Route118/scripts.pory"
# 127 "data/maps/Route118/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 128 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_ReceiveGoodRod_1
# 129 "data/maps/Route118/scripts.pory"

# 130 "data/maps/Route118/scripts.pory"

# 131 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeclineGoodRod::
# 132 "data/maps/Route118/scripts.pory"
# 62 "data/maps/Route118/scripts.pory"
# 133 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 134 "data/maps/Route118/scripts.pory"
# 63 "data/maps/Route118/scripts.pory"
# 135 "data/maps/Route118/scripts.pory"
	release
# 136 "data/maps/Route118/scripts.pory"
	end
# 137 "data/maps/Route118/scripts.pory"

# 138 "data/maps/Route118/scripts.pory"

# 139 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceivedGoodRod::
# 140 "data/maps/Route118/scripts.pory"
# 68 "data/maps/Route118/scripts.pory"
# 141 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
# 142 "data/maps/Route118/scripts.pory"
# 69 "data/maps/Route118/scripts.pory"
# 143 "data/maps/Route118/scripts.pory"
	release
# 144 "data/maps/Route118/scripts.pory"
	end
# 145 "data/maps/Route118/scripts.pory"

# 146 "data/maps/Route118/scripts.pory"

# 147 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 148 "data/maps/Route118/scripts.pory"
# 74 "data/maps/Route118/scripts.pory"
# 149 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 150 "data/maps/Route118/scripts.pory"
	end
# 151 "data/maps/Route118/scripts.pory"

# 152 "data/maps/Route118/scripts.pory"

# 153 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 154 "data/maps/Route118/scripts.pory"
# 79 "data/maps/Route118/scripts.pory"
# 155 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 156 "data/maps/Route118/scripts.pory"
	end
# 157 "data/maps/Route118/scripts.pory"

# 158 "data/maps/Route118/scripts.pory"

# 159 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 160 "data/maps/Route118/scripts.pory"
# 84 "data/maps/Route118/scripts.pory"
# 161 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 162 "data/maps/Route118/scripts.pory"
	end
# 163 "data/maps/Route118/scripts.pory"

# 164 "data/maps/Route118/scripts.pory"

# 165 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0::
# 166 "data/maps/Route118/scripts.pory"
# 89 "data/maps/Route118/scripts.pory"
# 167 "data/maps/Route118/scripts.pory"
	lockall
# 168 "data/maps/Route118/scripts.pory"
# 90 "data/maps/Route118/scripts.pory"
# 169 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 170 "data/maps/Route118/scripts.pory"
# 91 "data/maps/Route118/scripts.pory"
# 171 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 172 "data/maps/Route118/scripts.pory"
# 92 "data/maps/Route118/scripts.pory"
# 173 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route118/scripts.pory"
# 93 "data/maps/Route118/scripts.pory"
# 175 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Route118_Movement_StevenApproachLedge0
# 176 "data/maps/Route118/scripts.pory"
# 94 "data/maps/Route118/scripts.pory"
# 177 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 178 "data/maps/Route118/scripts.pory"
# 95 "data/maps/Route118/scripts.pory"
# 179 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 180 "data/maps/Route118/scripts.pory"
	end
# 181 "data/maps/Route118/scripts.pory"

# 182 "data/maps/Route118/scripts.pory"

# 183 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1::
# 184 "data/maps/Route118/scripts.pory"
# 100 "data/maps/Route118/scripts.pory"
# 185 "data/maps/Route118/scripts.pory"
	lockall
# 186 "data/maps/Route118/scripts.pory"
# 101 "data/maps/Route118/scripts.pory"
# 187 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 188 "data/maps/Route118/scripts.pory"
# 102 "data/maps/Route118/scripts.pory"
# 189 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 190 "data/maps/Route118/scripts.pory"
# 103 "data/maps/Route118/scripts.pory"
# 191 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route118/scripts.pory"
# 104 "data/maps/Route118/scripts.pory"
# 193 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 194 "data/maps/Route118/scripts.pory"
	end
# 195 "data/maps/Route118/scripts.pory"

# 196 "data/maps/Route118/scripts.pory"

# 197 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2::
# 198 "data/maps/Route118/scripts.pory"
# 109 "data/maps/Route118/scripts.pory"
# 199 "data/maps/Route118/scripts.pory"
	lockall
# 200 "data/maps/Route118/scripts.pory"
# 110 "data/maps/Route118/scripts.pory"
# 201 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 202 "data/maps/Route118/scripts.pory"
# 111 "data/maps/Route118/scripts.pory"
# 203 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 204 "data/maps/Route118/scripts.pory"
# 112 "data/maps/Route118/scripts.pory"
# 205 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 206 "data/maps/Route118/scripts.pory"
# 113 "data/maps/Route118/scripts.pory"
# 207 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Route118_Movement_StevenApproachLedge2
# 208 "data/maps/Route118/scripts.pory"
# 114 "data/maps/Route118/scripts.pory"
# 209 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route118/scripts.pory"
# 115 "data/maps/Route118/scripts.pory"
# 211 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 212 "data/maps/Route118/scripts.pory"
	end
# 213 "data/maps/Route118/scripts.pory"

# 214 "data/maps/Route118/scripts.pory"

# 215 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger::
# 216 "data/maps/Route118/scripts.pory"
# 120 "data/maps/Route118/scripts.pory"
# 217 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 218 "data/maps/Route118/scripts.pory"
# 121 "data/maps/Route118/scripts.pory"
# 219 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Route118_Movement_StevenJumpLedge
# 220 "data/maps/Route118/scripts.pory"
# 122 "data/maps/Route118/scripts.pory"
# 221 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 222 "data/maps/Route118/scripts.pory"
# 123 "data/maps/Route118/scripts.pory"
# 223 "data/maps/Route118/scripts.pory"
	delay 30
# 224 "data/maps/Route118/scripts.pory"
# 124 "data/maps/Route118/scripts.pory"
# 225 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 226 "data/maps/Route118/scripts.pory"
# 125 "data/maps/Route118/scripts.pory"
# 227 "data/maps/Route118/scripts.pory"
	closemessage
# 228 "data/maps/Route118/scripts.pory"
# 126 "data/maps/Route118/scripts.pory"
# 229 "data/maps/Route118/scripts.pory"
	compare VAR_0x8008, 0
# 230 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_StevenTrigger_2
# 231 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger_1:
# 232 "data/maps/Route118/scripts.pory"
# 129 "data/maps/Route118/scripts.pory"
# 233 "data/maps/Route118/scripts.pory"
	compare VAR_0x8008, 1
# 234 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_StevenTrigger_5
# 235 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger_4:
# 236 "data/maps/Route118/scripts.pory"
# 132 "data/maps/Route118/scripts.pory"
# 237 "data/maps/Route118/scripts.pory"
	compare VAR_0x8008, 2
# 238 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_StevenTrigger_8
# 239 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger_7:
# 240 "data/maps/Route118/scripts.pory"
# 135 "data/maps/Route118/scripts.pory"
# 241 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 242 "data/maps/Route118/scripts.pory"
# 136 "data/maps/Route118/scripts.pory"
# 243 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_ROUTE118_STEVEN
# 244 "data/maps/Route118/scripts.pory"
# 137 "data/maps/Route118/scripts.pory"
# 245 "data/maps/Route118/scripts.pory"
	releaseall
# 246 "data/maps/Route118/scripts.pory"
	end
# 247 "data/maps/Route118/scripts.pory"

# 248 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger_2:
# 249 "data/maps/Route118/scripts.pory"
# 127 "data/maps/Route118/scripts.pory"
# 250 "data/maps/Route118/scripts.pory"
	call Route118_EventScript_StevenExit0
# 251 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger_1
# 252 "data/maps/Route118/scripts.pory"

# 253 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger_5:
# 254 "data/maps/Route118/scripts.pory"
# 130 "data/maps/Route118/scripts.pory"
# 255 "data/maps/Route118/scripts.pory"
	call Route118_EventScript_StevenExit1
# 256 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger_4
# 257 "data/maps/Route118/scripts.pory"

# 258 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger_8:
# 259 "data/maps/Route118/scripts.pory"
# 133 "data/maps/Route118/scripts.pory"
# 260 "data/maps/Route118/scripts.pory"
	call Route118_EventScript_StevenExit2
# 261 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger_7
# 262 "data/maps/Route118/scripts.pory"

# 263 "data/maps/Route118/scripts.pory"

# 264 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 265 "data/maps/Route118/scripts.pory"
# 142 "data/maps/Route118/scripts.pory"
# 266 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 267 "data/maps/Route118/scripts.pory"
# 143 "data/maps/Route118/scripts.pory"
# 268 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Route118_Movement_StevenExit0
# 269 "data/maps/Route118/scripts.pory"
# 144 "data/maps/Route118/scripts.pory"
# 270 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route118/scripts.pory"
	return
# 272 "data/maps/Route118/scripts.pory"

# 273 "data/maps/Route118/scripts.pory"

# 274 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 275 "data/maps/Route118/scripts.pory"
# 149 "data/maps/Route118/scripts.pory"
# 276 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 277 "data/maps/Route118/scripts.pory"
# 150 "data/maps/Route118/scripts.pory"
# 278 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Route118_Movement_StevenExit1
# 279 "data/maps/Route118/scripts.pory"
# 151 "data/maps/Route118/scripts.pory"
# 280 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 281 "data/maps/Route118/scripts.pory"
	return
# 282 "data/maps/Route118/scripts.pory"

# 283 "data/maps/Route118/scripts.pory"

# 284 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 285 "data/maps/Route118/scripts.pory"
# 156 "data/maps/Route118/scripts.pory"
# 286 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 287 "data/maps/Route118/scripts.pory"
# 157 "data/maps/Route118/scripts.pory"
# 288 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Route118_Movement_StevenExit2
# 289 "data/maps/Route118/scripts.pory"
# 158 "data/maps/Route118/scripts.pory"
# 290 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route118/scripts.pory"
	return
# 292 "data/maps/Route118/scripts.pory"

# 293 "data/maps/Route118/scripts.pory"

# 294 "data/maps/Route118/scripts.pory"
# 162 "data/maps/Route118/scripts.pory"
# 295 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 296 "data/maps/Route118/scripts.pory"
# 163 "data/maps/Route118/scripts.pory"
# 297 "data/maps/Route118/scripts.pory"
	delay_16
# 298 "data/maps/Route118/scripts.pory"
# 164 "data/maps/Route118/scripts.pory"
# 299 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 300 "data/maps/Route118/scripts.pory"
# 165 "data/maps/Route118/scripts.pory"
# 301 "data/maps/Route118/scripts.pory"
	step_end
# 302 "data/maps/Route118/scripts.pory"

# 303 "data/maps/Route118/scripts.pory"
# 168 "data/maps/Route118/scripts.pory"
# 304 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge0:
# 305 "data/maps/Route118/scripts.pory"
# 169 "data/maps/Route118/scripts.pory"
# 306 "data/maps/Route118/scripts.pory"
	walk_left
# 307 "data/maps/Route118/scripts.pory"
# 170 "data/maps/Route118/scripts.pory"
# 308 "data/maps/Route118/scripts.pory"
	step_end
# 309 "data/maps/Route118/scripts.pory"

# 310 "data/maps/Route118/scripts.pory"
# 173 "data/maps/Route118/scripts.pory"
# 311 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge2:
# 312 "data/maps/Route118/scripts.pory"
# 174 "data/maps/Route118/scripts.pory"
# 313 "data/maps/Route118/scripts.pory"
	walk_right
# 314 "data/maps/Route118/scripts.pory"
# 175 "data/maps/Route118/scripts.pory"
# 315 "data/maps/Route118/scripts.pory"
	step_end
# 316 "data/maps/Route118/scripts.pory"

# 317 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge::
# 318 "data/maps/Route118/scripts.pory"
# 179 "data/maps/Route118/scripts.pory"
# 319 "data/maps/Route118/scripts.pory"
	jump_2_down
# 320 "data/maps/Route118/scripts.pory"
# 180 "data/maps/Route118/scripts.pory"
# 321 "data/maps/Route118/scripts.pory"
	delay_16
# 322 "data/maps/Route118/scripts.pory"
# 181 "data/maps/Route118/scripts.pory"
# 323 "data/maps/Route118/scripts.pory"
	walk_down
# 324 "data/maps/Route118/scripts.pory"
# 182 "data/maps/Route118/scripts.pory"
# 325 "data/maps/Route118/scripts.pory"
	step_end
# 326 "data/maps/Route118/scripts.pory"
	return
# 327 "data/maps/Route118/scripts.pory"

# 328 "data/maps/Route118/scripts.pory"

# 329 "data/maps/Route118/scripts.pory"
# 185 "data/maps/Route118/scripts.pory"
# 330 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit0:
# 331 "data/maps/Route118/scripts.pory"
# 186 "data/maps/Route118/scripts.pory"
# 332 "data/maps/Route118/scripts.pory"
	walk_right
# 333 "data/maps/Route118/scripts.pory"
# 187 "data/maps/Route118/scripts.pory"
# 334 "data/maps/Route118/scripts.pory"
	walk_right
# 335 "data/maps/Route118/scripts.pory"
# 188 "data/maps/Route118/scripts.pory"
# 336 "data/maps/Route118/scripts.pory"
	walk_right
# 337 "data/maps/Route118/scripts.pory"
# 189 "data/maps/Route118/scripts.pory"
# 338 "data/maps/Route118/scripts.pory"
	walk_right
# 339 "data/maps/Route118/scripts.pory"
# 190 "data/maps/Route118/scripts.pory"
# 340 "data/maps/Route118/scripts.pory"
	walk_right
# 341 "data/maps/Route118/scripts.pory"
# 191 "data/maps/Route118/scripts.pory"
# 342 "data/maps/Route118/scripts.pory"
	walk_right
# 343 "data/maps/Route118/scripts.pory"
# 192 "data/maps/Route118/scripts.pory"
# 344 "data/maps/Route118/scripts.pory"
	walk_right
# 345 "data/maps/Route118/scripts.pory"
# 193 "data/maps/Route118/scripts.pory"
# 346 "data/maps/Route118/scripts.pory"
	walk_right
# 347 "data/maps/Route118/scripts.pory"
# 194 "data/maps/Route118/scripts.pory"
# 348 "data/maps/Route118/scripts.pory"
	walk_right
# 349 "data/maps/Route118/scripts.pory"
# 195 "data/maps/Route118/scripts.pory"
# 350 "data/maps/Route118/scripts.pory"
	walk_right
# 351 "data/maps/Route118/scripts.pory"
# 196 "data/maps/Route118/scripts.pory"
# 352 "data/maps/Route118/scripts.pory"
	step_end
# 353 "data/maps/Route118/scripts.pory"

# 354 "data/maps/Route118/scripts.pory"
# 199 "data/maps/Route118/scripts.pory"
# 355 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit1:
# 356 "data/maps/Route118/scripts.pory"
# 200 "data/maps/Route118/scripts.pory"
# 357 "data/maps/Route118/scripts.pory"
	walk_right
# 358 "data/maps/Route118/scripts.pory"
# 201 "data/maps/Route118/scripts.pory"
# 359 "data/maps/Route118/scripts.pory"
	walk_right
# 360 "data/maps/Route118/scripts.pory"
# 202 "data/maps/Route118/scripts.pory"
# 361 "data/maps/Route118/scripts.pory"
	walk_right
# 362 "data/maps/Route118/scripts.pory"
# 203 "data/maps/Route118/scripts.pory"
# 363 "data/maps/Route118/scripts.pory"
	walk_right
# 364 "data/maps/Route118/scripts.pory"
# 204 "data/maps/Route118/scripts.pory"
# 365 "data/maps/Route118/scripts.pory"
	walk_right
# 366 "data/maps/Route118/scripts.pory"
# 205 "data/maps/Route118/scripts.pory"
# 367 "data/maps/Route118/scripts.pory"
	walk_right
# 368 "data/maps/Route118/scripts.pory"
# 206 "data/maps/Route118/scripts.pory"
# 369 "data/maps/Route118/scripts.pory"
	walk_right
# 370 "data/maps/Route118/scripts.pory"
# 207 "data/maps/Route118/scripts.pory"
# 371 "data/maps/Route118/scripts.pory"
	walk_right
# 372 "data/maps/Route118/scripts.pory"
# 208 "data/maps/Route118/scripts.pory"
# 373 "data/maps/Route118/scripts.pory"
	walk_right
# 374 "data/maps/Route118/scripts.pory"
# 209 "data/maps/Route118/scripts.pory"
# 375 "data/maps/Route118/scripts.pory"
	step_end
# 376 "data/maps/Route118/scripts.pory"

# 377 "data/maps/Route118/scripts.pory"
# 212 "data/maps/Route118/scripts.pory"
# 378 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit2:
# 379 "data/maps/Route118/scripts.pory"
# 213 "data/maps/Route118/scripts.pory"
# 380 "data/maps/Route118/scripts.pory"
	walk_right
# 381 "data/maps/Route118/scripts.pory"
# 214 "data/maps/Route118/scripts.pory"
# 382 "data/maps/Route118/scripts.pory"
	walk_right
# 383 "data/maps/Route118/scripts.pory"
# 215 "data/maps/Route118/scripts.pory"
# 384 "data/maps/Route118/scripts.pory"
	walk_right
# 385 "data/maps/Route118/scripts.pory"
# 216 "data/maps/Route118/scripts.pory"
# 386 "data/maps/Route118/scripts.pory"
	walk_right
# 387 "data/maps/Route118/scripts.pory"
# 217 "data/maps/Route118/scripts.pory"
# 388 "data/maps/Route118/scripts.pory"
	walk_right
# 389 "data/maps/Route118/scripts.pory"
# 218 "data/maps/Route118/scripts.pory"
# 390 "data/maps/Route118/scripts.pory"
	walk_right
# 391 "data/maps/Route118/scripts.pory"
# 219 "data/maps/Route118/scripts.pory"
# 392 "data/maps/Route118/scripts.pory"
	walk_right
# 393 "data/maps/Route118/scripts.pory"
# 220 "data/maps/Route118/scripts.pory"
# 394 "data/maps/Route118/scripts.pory"
	walk_right
# 395 "data/maps/Route118/scripts.pory"
# 221 "data/maps/Route118/scripts.pory"
# 396 "data/maps/Route118/scripts.pory"
	step_end
# 397 "data/maps/Route118/scripts.pory"

# 398 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 399 "data/maps/Route118/scripts.pory"
# 225 "data/maps/Route118/scripts.pory"
# 400 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 401 "data/maps/Route118/scripts.pory"
# 226 "data/maps/Route118/scripts.pory"
# 402 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 403 "data/maps/Route118/scripts.pory"
# 227 "data/maps/Route118/scripts.pory"
# 404 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, TRUE
# 405 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_Rose_2
# 406 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose_1:
# 407 "data/maps/Route118/scripts.pory"
# 230 "data/maps/Route118/scripts.pory"
# 408 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 409 "data/maps/Route118/scripts.pory"
# 231 "data/maps/Route118/scripts.pory"
# 410 "data/maps/Route118/scripts.pory"
	release
# 411 "data/maps/Route118/scripts.pory"
	end
# 412 "data/maps/Route118/scripts.pory"

# 413 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose_2:
# 414 "data/maps/Route118/scripts.pory"
# 228 "data/maps/Route118/scripts.pory"
# 415 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_RematchRose
# 416 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_Rose_1
# 417 "data/maps/Route118/scripts.pory"

# 418 "data/maps/Route118/scripts.pory"

# 419 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 420 "data/maps/Route118/scripts.pory"
# 236 "data/maps/Route118/scripts.pory"
# 421 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 422 "data/maps/Route118/scripts.pory"
# 237 "data/maps/Route118/scripts.pory"
# 423 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route118/scripts.pory"
# 238 "data/maps/Route118/scripts.pory"
# 425 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 426 "data/maps/Route118/scripts.pory"
# 239 "data/maps/Route118/scripts.pory"
# 427 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 428 "data/maps/Route118/scripts.pory"
# 240 "data/maps/Route118/scripts.pory"
# 429 "data/maps/Route118/scripts.pory"
	release
# 430 "data/maps/Route118/scripts.pory"
	end
# 431 "data/maps/Route118/scripts.pory"

# 432 "data/maps/Route118/scripts.pory"

# 433 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 434 "data/maps/Route118/scripts.pory"
# 245 "data/maps/Route118/scripts.pory"
# 435 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 436 "data/maps/Route118/scripts.pory"
# 246 "data/maps/Route118/scripts.pory"
# 437 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 438 "data/maps/Route118/scripts.pory"
	end
# 439 "data/maps/Route118/scripts.pory"

# 440 "data/maps/Route118/scripts.pory"

# 441 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 442 "data/maps/Route118/scripts.pory"
# 251 "data/maps/Route118/scripts.pory"
# 443 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 444 "data/maps/Route118/scripts.pory"
# 252 "data/maps/Route118/scripts.pory"
# 445 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 446 "data/maps/Route118/scripts.pory"
	end
# 447 "data/maps/Route118/scripts.pory"

# 448 "data/maps/Route118/scripts.pory"

# 449 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 450 "data/maps/Route118/scripts.pory"
# 257 "data/maps/Route118/scripts.pory"
# 451 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 452 "data/maps/Route118/scripts.pory"
# 258 "data/maps/Route118/scripts.pory"
# 453 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 454 "data/maps/Route118/scripts.pory"
	end
# 455 "data/maps/Route118/scripts.pory"

# 456 "data/maps/Route118/scripts.pory"

# 457 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 458 "data/maps/Route118/scripts.pory"
# 263 "data/maps/Route118/scripts.pory"
# 459 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 460 "data/maps/Route118/scripts.pory"
# 264 "data/maps/Route118/scripts.pory"
# 461 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 462 "data/maps/Route118/scripts.pory"
# 265 "data/maps/Route118/scripts.pory"
# 463 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, TRUE
# 464 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_Dalton_2
# 465 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton_1:
# 466 "data/maps/Route118/scripts.pory"
# 268 "data/maps/Route118/scripts.pory"
# 467 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 468 "data/maps/Route118/scripts.pory"
# 269 "data/maps/Route118/scripts.pory"
# 469 "data/maps/Route118/scripts.pory"
	release
# 470 "data/maps/Route118/scripts.pory"
	end
# 471 "data/maps/Route118/scripts.pory"

# 472 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton_2:
# 473 "data/maps/Route118/scripts.pory"
# 266 "data/maps/Route118/scripts.pory"
# 474 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_RematchDalton
# 475 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_Dalton_1
# 476 "data/maps/Route118/scripts.pory"

# 477 "data/maps/Route118/scripts.pory"

# 478 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 479 "data/maps/Route118/scripts.pory"
# 274 "data/maps/Route118/scripts.pory"
# 480 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 481 "data/maps/Route118/scripts.pory"
# 275 "data/maps/Route118/scripts.pory"
# 482 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 483 "data/maps/Route118/scripts.pory"
# 276 "data/maps/Route118/scripts.pory"
# 484 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 485 "data/maps/Route118/scripts.pory"
# 277 "data/maps/Route118/scripts.pory"
# 486 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 487 "data/maps/Route118/scripts.pory"
# 278 "data/maps/Route118/scripts.pory"
# 488 "data/maps/Route118/scripts.pory"
	release
# 489 "data/maps/Route118/scripts.pory"
	end
# 490 "data/maps/Route118/scripts.pory"

# 491 "data/maps/Route118/scripts.pory"

# 492 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 493 "data/maps/Route118/scripts.pory"
# 283 "data/maps/Route118/scripts.pory"
# 494 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 495 "data/maps/Route118/scripts.pory"
# 284 "data/maps/Route118/scripts.pory"
# 496 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 497 "data/maps/Route118/scripts.pory"
	end
# 498 "data/maps/Route118/scripts.pory"

# 499 "data/maps/Route118/scripts.pory"

# 500 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 501 "data/maps/Route118/scripts.pory"
# 289 "data/maps/Route118/scripts.pory"
# 502 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 503 "data/maps/Route118/scripts.pory"
# 290 "data/maps/Route118/scripts.pory"
# 504 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 505 "data/maps/Route118/scripts.pory"
	end
# 506 "data/maps/Route118/scripts.pory"

# 507 "data/maps/Route118/scripts.pory"

# 508 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 509 "data/maps/Route118/scripts.pory"
# 295 "data/maps/Route118/scripts.pory"
# 510 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 511 "data/maps/Route118/scripts.pory"
# 296 "data/maps/Route118/scripts.pory"
# 512 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route118/scripts.pory"
	end
# 514 "data/maps/Route118/scripts.pory"

# 515 "data/maps/Route118/scripts.pory"

# 516 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 517 "data/maps/Route118/scripts.pory"
# 301 "data/maps/Route118/scripts.pory"
# 518 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 519 "data/maps/Route118/scripts.pory"
# 302 "data/maps/Route118/scripts.pory"
# 520 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 521 "data/maps/Route118/scripts.pory"
	end
# 522 "data/maps/Route118/scripts.pory"

# 523 "data/maps/Route118/scripts.pory"

# 524 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions::
# 525 "data/maps/Route118/scripts.pory"
# 306 "data/maps/Route118/scripts.pory"
# 526 "data/maps/Route118/scripts.pory"
	.string "STEVEN: Hi, {PLAYER}{KUN}!\p"
# 527 "data/maps/Route118/scripts.pory"
	.string "It's me, STEVEN!\n"
# 528 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near DEWFORD.\p"
# 529 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of POKéMON\n"
# 530 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 531 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of POKéMON\n"
# 532 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 533 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 534 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 535 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 536 "data/maps/Route118/scripts.pory"
	.string "all sorts of POKéMON.\p"
# 537 "data/maps/Route118/scripts.pory"
	.string "As a TRAINER of POKéMON,\n"
# 538 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 539 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 540 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 541 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 542 "data/maps/Route118/scripts.pory"

# 543 "data/maps/Route118/scripts.pory"
Route118_Text_YouAgreeGoodRodIsGood::
# 544 "data/maps/Route118/scripts.pory"
# 325 "data/maps/Route118/scripts.pory"
# 545 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 546 "data/maps/Route118/scripts.pory"
	.string "A GOOD ROD is really good!\p"
# 547 "data/maps/Route118/scripts.pory"
	.string "Wouldn't you agree?$"
# 548 "data/maps/Route118/scripts.pory"

# 549 "data/maps/Route118/scripts.pory"
Route118_Text_IdenticalMindsTakeThis::
# 550 "data/maps/Route118/scripts.pory"
# 331 "data/maps/Route118/scripts.pory"
# 551 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 552 "data/maps/Route118/scripts.pory"
	.string "We're of identical minds!\p"
# 553 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 554 "data/maps/Route118/scripts.pory"
	.string "Take this GOOD ROD!$"
# 555 "data/maps/Route118/scripts.pory"

# 556 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing::
# 557 "data/maps/Route118/scripts.pory"
# 338 "data/maps/Route118/scripts.pory"
# 558 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 559 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 560 "data/maps/Route118/scripts.pory"

# 561 "data/maps/Route118/scripts.pory"
Route118_Text_DontYouLikeToFish::
# 562 "data/maps/Route118/scripts.pory"
# 343 "data/maps/Route118/scripts.pory"
# 563 "data/maps/Route118/scripts.pory"
	.string "Don't you like to fish?$"
# 564 "data/maps/Route118/scripts.pory"

# 565 "data/maps/Route118/scripts.pory"
Route118_Text_TryCatchingMonWithGoodRod::
# 566 "data/maps/Route118/scripts.pory"
# 347 "data/maps/Route118/scripts.pory"
# 567 "data/maps/Route118/scripts.pory"
	.string "Try catching all sorts of POKéMON\n"
# 568 "data/maps/Route118/scripts.pory"
	.string "with your GOOD ROD.$"
# 569 "data/maps/Route118/scripts.pory"

# 570 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf::
# 571 "data/maps/Route118/scripts.pory"
# 352 "data/maps/Route118/scripts.pory"
# 572 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 573 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 574 "data/maps/Route118/scripts.pory"
	.string "a POKéMON that knows SURF.\p"
# 575 "data/maps/Route118/scripts.pory"
	.string "POKéMON can be counted on to do so\n"
# 576 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 577 "data/maps/Route118/scripts.pory"

# 578 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville::
# 579 "data/maps/Route118/scripts.pory"
# 360 "data/maps/Route118/scripts.pory"
# 580 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 581 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} MAUVILLE CITY$"
# 582 "data/maps/Route118/scripts.pory"

# 583 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119::
# 584 "data/maps/Route118/scripts.pory"
# 365 "data/maps/Route118/scripts.pory"
# 585 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 586 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} ROUTE 119$"
