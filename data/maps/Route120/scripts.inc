# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 3 "data/maps/Route120/scripts.pory"
# 2 "data/maps/Route120/scripts.pory"
# 4 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 5 "data/maps/Route120/scripts.pory"
# 3 "data/maps/Route120/scripts.pory"
# 6 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 7 "data/maps/Route120/scripts.pory"
# 4 "data/maps/Route120/scripts.pory"
# 8 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 9 "data/maps/Route120/scripts.pory"
	.byte 0
# 10 "data/maps/Route120/scripts.pory"

# 11 "data/maps/Route120/scripts.pory"

# 12 "data/maps/Route120/scripts.pory"
Route120_OnResume::
# 13 "data/maps/Route120/scripts.pory"
# 8 "data/maps/Route120/scripts.pory"
# 14 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_OnResume_2
# 15 "data/maps/Route120/scripts.pory"
Route120_OnResume_1:
# 16 "data/maps/Route120/scripts.pory"
	end
# 17 "data/maps/Route120/scripts.pory"

# 18 "data/maps/Route120/scripts.pory"
Route120_OnResume_2:
# 19 "data/maps/Route120/scripts.pory"
# 9 "data/maps/Route120/scripts.pory"
# 20 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_RemoveKecleonObject
# 21 "data/maps/Route120/scripts.pory"
	goto Route120_OnResume_1
# 22 "data/maps/Route120/scripts.pory"

# 23 "data/maps/Route120/scripts.pory"

# 24 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 25 "data/maps/Route120/scripts.pory"
# 15 "data/maps/Route120/scripts.pory"
# 26 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 0
# 27 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_RemoveKecleonObject_2
# 28 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_1:
# 29 "data/maps/Route120/scripts.pory"
# 18 "data/maps/Route120/scripts.pory"
# 30 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 1
# 31 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_RemoveKecleonObject_5
# 32 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_4:
# 33 "data/maps/Route120/scripts.pory"
# 21 "data/maps/Route120/scripts.pory"
# 34 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 2
# 35 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_RemoveKecleonObject_8
# 36 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_7:
# 37 "data/maps/Route120/scripts.pory"
# 24 "data/maps/Route120/scripts.pory"
# 38 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 3
# 39 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_RemoveKecleonObject_11
# 40 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_10:
# 41 "data/maps/Route120/scripts.pory"
# 27 "data/maps/Route120/scripts.pory"
# 42 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 4
# 43 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_RemoveKecleonObject_14
# 44 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_13:
# 45 "data/maps/Route120/scripts.pory"
# 30 "data/maps/Route120/scripts.pory"
# 46 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 5
# 47 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_RemoveKecleonObject_17
# 48 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_16:
# 49 "data/maps/Route120/scripts.pory"
	return
# 50 "data/maps/Route120/scripts.pory"

# 51 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_2:
# 52 "data/maps/Route120/scripts.pory"
# 16 "data/maps/Route120/scripts.pory"
# 53 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_RemoveBridgeKecleon
# 54 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RemoveKecleonObject_1
# 55 "data/maps/Route120/scripts.pory"

# 56 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_5:
# 57 "data/maps/Route120/scripts.pory"
# 19 "data/maps/Route120/scripts.pory"
# 58 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_RemoveKecleon
# 59 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RemoveKecleonObject_4
# 60 "data/maps/Route120/scripts.pory"

# 61 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_8:
# 62 "data/maps/Route120/scripts.pory"
# 22 "data/maps/Route120/scripts.pory"
# 63 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_RemoveKecleon
# 64 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RemoveKecleonObject_7
# 65 "data/maps/Route120/scripts.pory"

# 66 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_11:
# 67 "data/maps/Route120/scripts.pory"
# 25 "data/maps/Route120/scripts.pory"
# 68 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_RemoveKecleon
# 69 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RemoveKecleonObject_10
# 70 "data/maps/Route120/scripts.pory"

# 71 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_14:
# 72 "data/maps/Route120/scripts.pory"
# 28 "data/maps/Route120/scripts.pory"
# 73 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_RemoveKecleon
# 74 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RemoveKecleonObject_13
# 75 "data/maps/Route120/scripts.pory"

# 76 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject_17:
# 77 "data/maps/Route120/scripts.pory"
# 31 "data/maps/Route120/scripts.pory"
# 78 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_RemoveKecleon
# 79 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RemoveKecleonObject_16
# 80 "data/maps/Route120/scripts.pory"

# 81 "data/maps/Route120/scripts.pory"

# 82 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 83 "data/maps/Route120/scripts.pory"
# 37 "data/maps/Route120/scripts.pory"
# 84 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 85 "data/maps/Route120/scripts.pory"
# 38 "data/maps/Route120/scripts.pory"
# 86 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 87 "data/maps/Route120/scripts.pory"
	goto_if_ne Route120_EventScript_RemoveBridgeKecleon_2
# 88 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon_1:
# 89 "data/maps/Route120/scripts.pory"
# 41 "data/maps/Route120/scripts.pory"
# 90 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 91 "data/maps/Route120/scripts.pory"
# 42 "data/maps/Route120/scripts.pory"
# 92 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 93 "data/maps/Route120/scripts.pory"
	return
# 94 "data/maps/Route120/scripts.pory"

# 95 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon_2:
# 96 "data/maps/Route120/scripts.pory"
# 39 "data/maps/Route120/scripts.pory"
# 97 "data/maps/Route120/scripts.pory"
	goto Common_EventScript_NopReturn
# 98 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RemoveBridgeKecleon_1
# 99 "data/maps/Route120/scripts.pory"

# 100 "data/maps/Route120/scripts.pory"

# 101 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 102 "data/maps/Route120/scripts.pory"
# 47 "data/maps/Route120/scripts.pory"
# 103 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 104 "data/maps/Route120/scripts.pory"
# 48 "data/maps/Route120/scripts.pory"
# 105 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 106 "data/maps/Route120/scripts.pory"
	goto_if_ne Route120_EventScript_RemoveKecleon_2
# 107 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon_1:
# 108 "data/maps/Route120/scripts.pory"
# 51 "data/maps/Route120/scripts.pory"
# 109 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 110 "data/maps/Route120/scripts.pory"
	return
# 111 "data/maps/Route120/scripts.pory"

# 112 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon_2:
# 113 "data/maps/Route120/scripts.pory"
# 49 "data/maps/Route120/scripts.pory"
# 114 "data/maps/Route120/scripts.pory"
	goto Common_EventScript_NopReturn
# 115 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RemoveKecleon_1
# 116 "data/maps/Route120/scripts.pory"

# 117 "data/maps/Route120/scripts.pory"

# 118 "data/maps/Route120/scripts.pory"
Route120_OnLoad::
# 119 "data/maps/Route120/scripts.pory"
# 56 "data/maps/Route120/scripts.pory"
# 120 "data/maps/Route120/scripts.pory"
	goto_if_unset FLAG_REGI_DOORS_OPENED, Route120_OnLoad_2
# 121 "data/maps/Route120/scripts.pory"
Route120_OnLoad_1:
# 122 "data/maps/Route120/scripts.pory"
# 59 "data/maps/Route120/scripts.pory"
# 123 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_OnLoad_5
# 124 "data/maps/Route120/scripts.pory"
Route120_OnLoad_4:
# 125 "data/maps/Route120/scripts.pory"
# 62 "data/maps/Route120/scripts.pory"
# 126 "data/maps/Route120/scripts.pory"
	goto_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_OnLoad_8
# 127 "data/maps/Route120/scripts.pory"
Route120_OnLoad_7:
# 128 "data/maps/Route120/scripts.pory"
	end
# 129 "data/maps/Route120/scripts.pory"

# 130 "data/maps/Route120/scripts.pory"
Route120_OnLoad_2:
# 131 "data/maps/Route120/scripts.pory"
# 57 "data/maps/Route120/scripts.pory"
# 132 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_CloseAncientTomb
# 133 "data/maps/Route120/scripts.pory"
	goto Route120_OnLoad_1
# 134 "data/maps/Route120/scripts.pory"

# 135 "data/maps/Route120/scripts.pory"
Route120_OnLoad_5:
# 136 "data/maps/Route120/scripts.pory"
# 60 "data/maps/Route120/scripts.pory"
# 137 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetBridgeClearMetatiles
# 138 "data/maps/Route120/scripts.pory"
	goto Route120_OnLoad_4
# 139 "data/maps/Route120/scripts.pory"

# 140 "data/maps/Route120/scripts.pory"
Route120_OnLoad_8:
# 141 "data/maps/Route120/scripts.pory"
# 63 "data/maps/Route120/scripts.pory"
# 142 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetBridgeKecleonMovement
# 143 "data/maps/Route120/scripts.pory"
	goto Route120_OnLoad_7
# 144 "data/maps/Route120/scripts.pory"

# 145 "data/maps/Route120/scripts.pory"

# 146 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 147 "data/maps/Route120/scripts.pory"
# 69 "data/maps/Route120/scripts.pory"
# 148 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 149 "data/maps/Route120/scripts.pory"
# 70 "data/maps/Route120/scripts.pory"
# 150 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 151 "data/maps/Route120/scripts.pory"
	return
# 152 "data/maps/Route120/scripts.pory"

# 153 "data/maps/Route120/scripts.pory"

# 154 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 155 "data/maps/Route120/scripts.pory"
# 75 "data/maps/Route120/scripts.pory"
# 156 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 157 "data/maps/Route120/scripts.pory"
# 76 "data/maps/Route120/scripts.pory"
# 158 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 159 "data/maps/Route120/scripts.pory"
# 77 "data/maps/Route120/scripts.pory"
# 160 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 161 "data/maps/Route120/scripts.pory"
# 78 "data/maps/Route120/scripts.pory"
# 162 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 163 "data/maps/Route120/scripts.pory"
	return
# 164 "data/maps/Route120/scripts.pory"

# 165 "data/maps/Route120/scripts.pory"

# 166 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 167 "data/maps/Route120/scripts.pory"
# 83 "data/maps/Route120/scripts.pory"
# 168 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 169 "data/maps/Route120/scripts.pory"
	return
# 170 "data/maps/Route120/scripts.pory"

# 171 "data/maps/Route120/scripts.pory"

# 172 "data/maps/Route120/scripts.pory"
Route120_OnTransition::
# 173 "data/maps/Route120/scripts.pory"
# 88 "data/maps/Route120/scripts.pory"
# 174 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 175 "data/maps/Route120/scripts.pory"
# 89 "data/maps/Route120/scripts.pory"
# 176 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 177 "data/maps/Route120/scripts.pory"
	end
# 178 "data/maps/Route120/scripts.pory"

# 179 "data/maps/Route120/scripts.pory"

# 180 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 181 "data/maps/Route120/scripts.pory"
# 94 "data/maps/Route120/scripts.pory"
# 182 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 183 "data/maps/Route120/scripts.pory"
# 95 "data/maps/Route120/scripts.pory"
# 184 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_1, 14
# 185 "data/maps/Route120/scripts.pory"
	goto_if_le Route120_EventScript_SetWeather_2
# 186 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather_1:
# 187 "data/maps/Route120/scripts.pory"
# 98 "data/maps/Route120/scripts.pory"
# 188 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_1, 60
# 189 "data/maps/Route120/scripts.pory"
	goto_if_le Route120_EventScript_SetWeather_5
# 190 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather_4:
# 191 "data/maps/Route120/scripts.pory"
# 101 "data/maps/Route120/scripts.pory"
# 192 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_1, 61
# 193 "data/maps/Route120/scripts.pory"
	goto_if_ge Route120_EventScript_SetWeather_8
# 194 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather_7:
# 195 "data/maps/Route120/scripts.pory"
	return
# 196 "data/maps/Route120/scripts.pory"

# 197 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather_2:
# 198 "data/maps/Route120/scripts.pory"
# 96 "data/maps/Route120/scripts.pory"
# 199 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetSunnyWeather
# 200 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetWeather_1
# 201 "data/maps/Route120/scripts.pory"

# 202 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather_5:
# 203 "data/maps/Route120/scripts.pory"
# 99 "data/maps/Route120/scripts.pory"
# 204 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_TrySetRainyWeather
# 205 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetWeather_4
# 206 "data/maps/Route120/scripts.pory"

# 207 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather_8:
# 208 "data/maps/Route120/scripts.pory"
# 102 "data/maps/Route120/scripts.pory"
# 209 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetCloudyWeather
# 210 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetWeather_7
# 211 "data/maps/Route120/scripts.pory"

# 212 "data/maps/Route120/scripts.pory"

# 213 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 214 "data/maps/Route120/scripts.pory"
# 108 "data/maps/Route120/scripts.pory"
# 215 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 216 "data/maps/Route120/scripts.pory"
	return
# 217 "data/maps/Route120/scripts.pory"

# 218 "data/maps/Route120/scripts.pory"

# 219 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 220 "data/maps/Route120/scripts.pory"
# 113 "data/maps/Route120/scripts.pory"
# 221 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 222 "data/maps/Route120/scripts.pory"
	return
# 223 "data/maps/Route120/scripts.pory"

# 224 "data/maps/Route120/scripts.pory"

# 225 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 226 "data/maps/Route120/scripts.pory"
# 118 "data/maps/Route120/scripts.pory"
# 227 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_0, 7
# 228 "data/maps/Route120/scripts.pory"
	goto_if_le Route120_EventScript_TrySetRainyWeather_2
# 229 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather_1:
# 230 "data/maps/Route120/scripts.pory"
# 121 "data/maps/Route120/scripts.pory"
# 231 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_0, 19
# 232 "data/maps/Route120/scripts.pory"
	goto_if_le Route120_EventScript_TrySetRainyWeather_5
# 233 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather_4:
# 234 "data/maps/Route120/scripts.pory"
# 124 "data/maps/Route120/scripts.pory"
# 235 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 236 "data/maps/Route120/scripts.pory"
	end
# 237 "data/maps/Route120/scripts.pory"

# 238 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather_2:
# 239 "data/maps/Route120/scripts.pory"
# 119 "data/maps/Route120/scripts.pory"
# 240 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 241 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_TrySetRainyWeather_1
# 242 "data/maps/Route120/scripts.pory"

# 243 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather_5:
# 244 "data/maps/Route120/scripts.pory"
# 122 "data/maps/Route120/scripts.pory"
# 245 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetSunnyWeather
# 246 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_TrySetRainyWeather_4
# 247 "data/maps/Route120/scripts.pory"

# 248 "data/maps/Route120/scripts.pory"

# 249 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 250 "data/maps/Route120/scripts.pory"
# 129 "data/maps/Route120/scripts.pory"
# 251 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 252 "data/maps/Route120/scripts.pory"
	return
# 253 "data/maps/Route120/scripts.pory"

# 254 "data/maps/Route120/scripts.pory"

# 255 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 256 "data/maps/Route120/scripts.pory"
# 134 "data/maps/Route120/scripts.pory"
# 257 "data/maps/Route120/scripts.pory"
	lock
# 258 "data/maps/Route120/scripts.pory"
# 135 "data/maps/Route120/scripts.pory"
# 259 "data/maps/Route120/scripts.pory"
	faceplayer
# 260 "data/maps/Route120/scripts.pory"
# 136 "data/maps/Route120/scripts.pory"
# 261 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 262 "data/maps/Route120/scripts.pory"
# 137 "data/maps/Route120/scripts.pory"
# 263 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_BerryBeauty_2
# 264 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_1:
# 265 "data/maps/Route120/scripts.pory"
# 140 "data/maps/Route120/scripts.pory"
# 266 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 267 "data/maps/Route120/scripts.pory"
# 141 "data/maps/Route120/scripts.pory"
# 268 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, YES
# 269 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_BerryBeauty_5
# 270 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_4:
# 271 "data/maps/Route120/scripts.pory"
# 144 "data/maps/Route120/scripts.pory"
# 272 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, NO
# 273 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_BerryBeauty_8
# 274 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_7:
# 275 "data/maps/Route120/scripts.pory"
# 147 "data/maps/Route120/scripts.pory"
# 276 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 277 "data/maps/Route120/scripts.pory"
# 148 "data/maps/Route120/scripts.pory"
# 278 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 279 "data/maps/Route120/scripts.pory"
# 149 "data/maps/Route120/scripts.pory"
# 280 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_BerryBeauty_12
# 281 "data/maps/Route120/scripts.pory"
# 151 "data/maps/Route120/scripts.pory"
# 282 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_BerryBeauty_13
# 283 "data/maps/Route120/scripts.pory"
# 153 "data/maps/Route120/scripts.pory"
# 284 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_BerryBeauty_14
# 285 "data/maps/Route120/scripts.pory"
# 155 "data/maps/Route120/scripts.pory"
# 286 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_BerryBeauty_15
# 287 "data/maps/Route120/scripts.pory"
# 157 "data/maps/Route120/scripts.pory"
# 288 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_BerryBeauty_16
# 289 "data/maps/Route120/scripts.pory"
# 159 "data/maps/Route120/scripts.pory"
# 290 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_BerryBeauty_17
# 291 "data/maps/Route120/scripts.pory"
# 161 "data/maps/Route120/scripts.pory"
# 292 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_BerryBeauty_18
# 293 "data/maps/Route120/scripts.pory"
# 163 "data/maps/Route120/scripts.pory"
# 294 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_BerryBeauty_19
# 295 "data/maps/Route120/scripts.pory"
# 165 "data/maps/Route120/scripts.pory"
# 296 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_BerryBeauty_20
# 297 "data/maps/Route120/scripts.pory"
# 167 "data/maps/Route120/scripts.pory"
# 298 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_BerryBeauty_21
# 299 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_10:
# 300 "data/maps/Route120/scripts.pory"
	end
# 301 "data/maps/Route120/scripts.pory"

# 302 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_2:
# 303 "data/maps/Route120/scripts.pory"
# 138 "data/maps/Route120/scripts.pory"
# 304 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_ReceivedBerry
# 305 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_1
# 306 "data/maps/Route120/scripts.pory"

# 307 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_5:
# 308 "data/maps/Route120/scripts.pory"
# 142 "data/maps/Route120/scripts.pory"
# 309 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_BerryLove
# 310 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_4
# 311 "data/maps/Route120/scripts.pory"

# 312 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_8:
# 313 "data/maps/Route120/scripts.pory"
# 145 "data/maps/Route120/scripts.pory"
# 314 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_BerryNotLove
# 315 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_7
# 316 "data/maps/Route120/scripts.pory"

# 317 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_12:
# 318 "data/maps/Route120/scripts.pory"
# 150 "data/maps/Route120/scripts.pory"
# 319 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveFigyBerry
# 320 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_10
# 321 "data/maps/Route120/scripts.pory"

# 322 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_13:
# 323 "data/maps/Route120/scripts.pory"
# 152 "data/maps/Route120/scripts.pory"
# 324 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveFigyBerry
# 325 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_10
# 326 "data/maps/Route120/scripts.pory"

# 327 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_14:
# 328 "data/maps/Route120/scripts.pory"
# 154 "data/maps/Route120/scripts.pory"
# 329 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveWikiBerry
# 330 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_10
# 331 "data/maps/Route120/scripts.pory"

# 332 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_15:
# 333 "data/maps/Route120/scripts.pory"
# 156 "data/maps/Route120/scripts.pory"
# 334 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveWikiBerry
# 335 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_10
# 336 "data/maps/Route120/scripts.pory"

# 337 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_16:
# 338 "data/maps/Route120/scripts.pory"
# 158 "data/maps/Route120/scripts.pory"
# 339 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveMagoBerry
# 340 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_10
# 341 "data/maps/Route120/scripts.pory"

# 342 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_17:
# 343 "data/maps/Route120/scripts.pory"
# 160 "data/maps/Route120/scripts.pory"
# 344 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveMagoBerry
# 345 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_10
# 346 "data/maps/Route120/scripts.pory"

# 347 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_18:
# 348 "data/maps/Route120/scripts.pory"
# 162 "data/maps/Route120/scripts.pory"
# 349 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveAguavBerry
# 350 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_10
# 351 "data/maps/Route120/scripts.pory"

# 352 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_19:
# 353 "data/maps/Route120/scripts.pory"
# 164 "data/maps/Route120/scripts.pory"
# 354 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveAguavBerry
# 355 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_10
# 356 "data/maps/Route120/scripts.pory"

# 357 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_20:
# 358 "data/maps/Route120/scripts.pory"
# 166 "data/maps/Route120/scripts.pory"
# 359 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveIapapaBerry
# 360 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_10
# 361 "data/maps/Route120/scripts.pory"

# 362 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty_21:
# 363 "data/maps/Route120/scripts.pory"
# 168 "data/maps/Route120/scripts.pory"
# 364 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveIapapaBerry
# 365 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_BerryBeauty_10
# 366 "data/maps/Route120/scripts.pory"

# 367 "data/maps/Route120/scripts.pory"

# 368 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 369 "data/maps/Route120/scripts.pory"
# 174 "data/maps/Route120/scripts.pory"
# 370 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 371 "data/maps/Route120/scripts.pory"
# 175 "data/maps/Route120/scripts.pory"
# 372 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 373 "data/maps/Route120/scripts.pory"
	end
# 374 "data/maps/Route120/scripts.pory"

# 375 "data/maps/Route120/scripts.pory"

# 376 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 377 "data/maps/Route120/scripts.pory"
# 180 "data/maps/Route120/scripts.pory"
# 378 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 379 "data/maps/Route120/scripts.pory"
# 181 "data/maps/Route120/scripts.pory"
# 380 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 381 "data/maps/Route120/scripts.pory"
	end
# 382 "data/maps/Route120/scripts.pory"

# 383 "data/maps/Route120/scripts.pory"

# 384 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 385 "data/maps/Route120/scripts.pory"
# 186 "data/maps/Route120/scripts.pory"
# 386 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 387 "data/maps/Route120/scripts.pory"
# 187 "data/maps/Route120/scripts.pory"
# 388 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 389 "data/maps/Route120/scripts.pory"
	end
# 390 "data/maps/Route120/scripts.pory"

# 391 "data/maps/Route120/scripts.pory"

# 392 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 393 "data/maps/Route120/scripts.pory"
# 192 "data/maps/Route120/scripts.pory"
# 394 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 395 "data/maps/Route120/scripts.pory"
# 193 "data/maps/Route120/scripts.pory"
# 396 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 397 "data/maps/Route120/scripts.pory"
	end
# 398 "data/maps/Route120/scripts.pory"

# 399 "data/maps/Route120/scripts.pory"

# 400 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 401 "data/maps/Route120/scripts.pory"
# 198 "data/maps/Route120/scripts.pory"
# 402 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 403 "data/maps/Route120/scripts.pory"
# 199 "data/maps/Route120/scripts.pory"
# 404 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 405 "data/maps/Route120/scripts.pory"
	end
# 406 "data/maps/Route120/scripts.pory"

# 407 "data/maps/Route120/scripts.pory"

# 408 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 409 "data/maps/Route120/scripts.pory"
# 204 "data/maps/Route120/scripts.pory"
# 410 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 411 "data/maps/Route120/scripts.pory"
# 205 "data/maps/Route120/scripts.pory"
# 412 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, FALSE
# 413 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_GiveBerry_2
# 414 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry_1:
# 415 "data/maps/Route120/scripts.pory"
# 208 "data/maps/Route120/scripts.pory"
# 416 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 417 "data/maps/Route120/scripts.pory"
# 209 "data/maps/Route120/scripts.pory"
# 418 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 419 "data/maps/Route120/scripts.pory"
# 210 "data/maps/Route120/scripts.pory"
# 420 "data/maps/Route120/scripts.pory"
	release
# 421 "data/maps/Route120/scripts.pory"
	end
# 422 "data/maps/Route120/scripts.pory"

# 423 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry_2:
# 424 "data/maps/Route120/scripts.pory"
# 206 "data/maps/Route120/scripts.pory"
# 425 "data/maps/Route120/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 426 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry_1
# 427 "data/maps/Route120/scripts.pory"

# 428 "data/maps/Route120/scripts.pory"

# 429 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 430 "data/maps/Route120/scripts.pory"
# 215 "data/maps/Route120/scripts.pory"
# 431 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 432 "data/maps/Route120/scripts.pory"
# 216 "data/maps/Route120/scripts.pory"
# 433 "data/maps/Route120/scripts.pory"
	release
# 434 "data/maps/Route120/scripts.pory"
	end
# 435 "data/maps/Route120/scripts.pory"

# 436 "data/maps/Route120/scripts.pory"

# 437 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 438 "data/maps/Route120/scripts.pory"
# 221 "data/maps/Route120/scripts.pory"
# 439 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 440 "data/maps/Route120/scripts.pory"
	return
# 441 "data/maps/Route120/scripts.pory"

# 442 "data/maps/Route120/scripts.pory"

# 443 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 444 "data/maps/Route120/scripts.pory"
# 226 "data/maps/Route120/scripts.pory"
# 445 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 446 "data/maps/Route120/scripts.pory"
	return
# 447 "data/maps/Route120/scripts.pory"

# 448 "data/maps/Route120/scripts.pory"

# 449 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 450 "data/maps/Route120/scripts.pory"
# 231 "data/maps/Route120/scripts.pory"
# 451 "data/maps/Route120/scripts.pory"
	lock
# 452 "data/maps/Route120/scripts.pory"
# 232 "data/maps/Route120/scripts.pory"
# 453 "data/maps/Route120/scripts.pory"
	faceplayer
# 454 "data/maps/Route120/scripts.pory"
# 233 "data/maps/Route120/scripts.pory"
# 455 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_Steven_2
# 456 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven_1:
# 457 "data/maps/Route120/scripts.pory"
# 236 "data/maps/Route120/scripts.pory"
# 458 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 459 "data/maps/Route120/scripts.pory"
# 237 "data/maps/Route120/scripts.pory"
# 460 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, NO
# 461 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_Steven_5
# 462 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven_4:
# 463 "data/maps/Route120/scripts.pory"
# 240 "data/maps/Route120/scripts.pory"
# 464 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 465 "data/maps/Route120/scripts.pory"
	end
# 466 "data/maps/Route120/scripts.pory"

# 467 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven_2:
# 468 "data/maps/Route120/scripts.pory"
# 234 "data/maps/Route120/scripts.pory"
# 469 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenAskReadyForBattle
# 470 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_Steven_1
# 471 "data/maps/Route120/scripts.pory"

# 472 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven_5:
# 473 "data/maps/Route120/scripts.pory"
# 238 "data/maps/Route120/scripts.pory"
# 474 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenNotReady
# 475 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_Steven_4
# 476 "data/maps/Route120/scripts.pory"

# 477 "data/maps/Route120/scripts.pory"

# 478 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 479 "data/maps/Route120/scripts.pory"
# 245 "data/maps/Route120/scripts.pory"
# 480 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 481 "data/maps/Route120/scripts.pory"
# 246 "data/maps/Route120/scripts.pory"
# 482 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 483 "data/maps/Route120/scripts.pory"
# 247 "data/maps/Route120/scripts.pory"
# 484 "data/maps/Route120/scripts.pory"
	release
# 485 "data/maps/Route120/scripts.pory"
	end
# 486 "data/maps/Route120/scripts.pory"

# 487 "data/maps/Route120/scripts.pory"

# 488 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 489 "data/maps/Route120/scripts.pory"
# 252 "data/maps/Route120/scripts.pory"
# 490 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 491 "data/maps/Route120/scripts.pory"
# 253 "data/maps/Route120/scripts.pory"
# 492 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, NO
# 493 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_StevenAskReadyForBattle_2
# 494 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle_1:
# 495 "data/maps/Route120/scripts.pory"
# 256 "data/maps/Route120/scripts.pory"
# 496 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 497 "data/maps/Route120/scripts.pory"
	end
# 498 "data/maps/Route120/scripts.pory"

# 499 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle_2:
# 500 "data/maps/Route120/scripts.pory"
# 254 "data/maps/Route120/scripts.pory"
# 501 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenNotReady
# 502 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenAskReadyForBattle_1
# 503 "data/maps/Route120/scripts.pory"

# 504 "data/maps/Route120/scripts.pory"

# 505 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 506 "data/maps/Route120/scripts.pory"
# 261 "data/maps/Route120/scripts.pory"
# 507 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 508 "data/maps/Route120/scripts.pory"
# 262 "data/maps/Route120/scripts.pory"
# 509 "data/maps/Route120/scripts.pory"
	closemessage
# 510 "data/maps/Route120/scripts.pory"
# 263 "data/maps/Route120/scripts.pory"
# 511 "data/maps/Route120/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 512 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_StevenBattleKecleon_2
# 513 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon_1:
# 514 "data/maps/Route120/scripts.pory"
# 266 "data/maps/Route120/scripts.pory"
# 515 "data/maps/Route120/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 516 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_StevenBattleKecleon_5
# 517 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon_4:
# 518 "data/maps/Route120/scripts.pory"
# 269 "data/maps/Route120/scripts.pory"
# 519 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 520 "data/maps/Route120/scripts.pory"
# 270 "data/maps/Route120/scripts.pory"
# 521 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 522 "data/maps/Route120/scripts.pory"
# 271 "data/maps/Route120/scripts.pory"
# 523 "data/maps/Route120/scripts.pory"
	delay 20
# 524 "data/maps/Route120/scripts.pory"
# 272 "data/maps/Route120/scripts.pory"
# 525 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 526 "data/maps/Route120/scripts.pory"
# 273 "data/maps/Route120/scripts.pory"
# 527 "data/maps/Route120/scripts.pory"
	closemessage
# 528 "data/maps/Route120/scripts.pory"
# 274 "data/maps/Route120/scripts.pory"
# 529 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 530 "data/maps/Route120/scripts.pory"
# 275 "data/maps/Route120/scripts.pory"
# 531 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 532 "data/maps/Route120/scripts.pory"
# 276 "data/maps/Route120/scripts.pory"
# 533 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 534 "data/maps/Route120/scripts.pory"
# 277 "data/maps/Route120/scripts.pory"
# 535 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 536 "data/maps/Route120/scripts.pory"
# 278 "data/maps/Route120/scripts.pory"
# 537 "data/maps/Route120/scripts.pory"
	waitse
# 538 "data/maps/Route120/scripts.pory"
# 279 "data/maps/Route120/scripts.pory"
# 539 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 540 "data/maps/Route120/scripts.pory"
# 280 "data/maps/Route120/scripts.pory"
# 541 "data/maps/Route120/scripts.pory"
	delay 40
# 542 "data/maps/Route120/scripts.pory"
# 281 "data/maps/Route120/scripts.pory"
# 543 "data/maps/Route120/scripts.pory"
	waitmoncry
# 544 "data/maps/Route120/scripts.pory"
# 282 "data/maps/Route120/scripts.pory"
# 545 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 546 "data/maps/Route120/scripts.pory"
# 283 "data/maps/Route120/scripts.pory"
# 547 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 548 "data/maps/Route120/scripts.pory"
# 284 "data/maps/Route120/scripts.pory"
# 549 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 550 "data/maps/Route120/scripts.pory"
# 285 "data/maps/Route120/scripts.pory"
# 551 "data/maps/Route120/scripts.pory"
	dowildbattle
# 552 "data/maps/Route120/scripts.pory"
# 286 "data/maps/Route120/scripts.pory"
# 553 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 554 "data/maps/Route120/scripts.pory"
# 287 "data/maps/Route120/scripts.pory"
# 555 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 556 "data/maps/Route120/scripts.pory"
# 288 "data/maps/Route120/scripts.pory"
# 557 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 558 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_StevenBattleKecleon_8
# 559 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon_7:
# 560 "data/maps/Route120/scripts.pory"
# 291 "data/maps/Route120/scripts.pory"
# 561 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 562 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_StevenBattleKecleon_11
# 563 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon_10:
# 564 "data/maps/Route120/scripts.pory"
# 294 "data/maps/Route120/scripts.pory"
# 565 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 566 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_StevenBattleKecleon_14
# 567 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon_13:
# 568 "data/maps/Route120/scripts.pory"
# 297 "data/maps/Route120/scripts.pory"
# 569 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 570 "data/maps/Route120/scripts.pory"
	end
# 571 "data/maps/Route120/scripts.pory"

# 572 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon_2:
# 573 "data/maps/Route120/scripts.pory"
# 264 "data/maps/Route120/scripts.pory"
# 574 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_PlayerApproachKecleonNorth
# 575 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon_1
# 576 "data/maps/Route120/scripts.pory"

# 577 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon_5:
# 578 "data/maps/Route120/scripts.pory"
# 267 "data/maps/Route120/scripts.pory"
# 579 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_PlayerApproachKecleonWest
# 580 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon_4
# 581 "data/maps/Route120/scripts.pory"

# 582 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon_8:
# 583 "data/maps/Route120/scripts.pory"
# 289 "data/maps/Route120/scripts.pory"
# 584 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RemoveBridgeKecleonPostBattle
# 585 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon_7
# 586 "data/maps/Route120/scripts.pory"

# 587 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon_11:
# 588 "data/maps/Route120/scripts.pory"
# 292 "data/maps/Route120/scripts.pory"
# 589 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RemoveBridgeKecleonPostBattle
# 590 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon_10
# 591 "data/maps/Route120/scripts.pory"

# 592 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon_14:
# 593 "data/maps/Route120/scripts.pory"
# 295 "data/maps/Route120/scripts.pory"
# 594 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RemoveBridgeKecleonPostBattle
# 595 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon_13
# 596 "data/maps/Route120/scripts.pory"

# 597 "data/maps/Route120/scripts.pory"

# 598 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 599 "data/maps/Route120/scripts.pory"
# 302 "data/maps/Route120/scripts.pory"
# 600 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 601 "data/maps/Route120/scripts.pory"
# 303 "data/maps/Route120/scripts.pory"
# 602 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 603 "data/maps/Route120/scripts.pory"
# 304 "data/maps/Route120/scripts.pory"
# 604 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 605 "data/maps/Route120/scripts.pory"
# 305 "data/maps/Route120/scripts.pory"
# 606 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 607 "data/maps/Route120/scripts.pory"
# 306 "data/maps/Route120/scripts.pory"
# 608 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 609 "data/maps/Route120/scripts.pory"
	end
# 610 "data/maps/Route120/scripts.pory"

# 611 "data/maps/Route120/scripts.pory"

# 612 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 613 "data/maps/Route120/scripts.pory"
# 311 "data/maps/Route120/scripts.pory"
# 614 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 615 "data/maps/Route120/scripts.pory"
# 312 "data/maps/Route120/scripts.pory"
# 616 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 617 "data/maps/Route120/scripts.pory"
# 313 "data/maps/Route120/scripts.pory"
# 618 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 619 "data/maps/Route120/scripts.pory"
# 314 "data/maps/Route120/scripts.pory"
# 620 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 621 "data/maps/Route120/scripts.pory"
# 315 "data/maps/Route120/scripts.pory"
# 622 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 623 "data/maps/Route120/scripts.pory"
# 316 "data/maps/Route120/scripts.pory"
# 624 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 625 "data/maps/Route120/scripts.pory"
# 317 "data/maps/Route120/scripts.pory"
# 626 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 627 "data/maps/Route120/scripts.pory"
# 318 "data/maps/Route120/scripts.pory"
# 628 "data/maps/Route120/scripts.pory"
	closemessage
# 629 "data/maps/Route120/scripts.pory"
# 319 "data/maps/Route120/scripts.pory"
# 630 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 631 "data/maps/Route120/scripts.pory"
# 320 "data/maps/Route120/scripts.pory"
# 632 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 633 "data/maps/Route120/scripts.pory"
# 321 "data/maps/Route120/scripts.pory"
# 634 "data/maps/Route120/scripts.pory"
	delay 50
# 635 "data/maps/Route120/scripts.pory"
# 322 "data/maps/Route120/scripts.pory"
# 636 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 637 "data/maps/Route120/scripts.pory"
# 323 "data/maps/Route120/scripts.pory"
# 638 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 639 "data/maps/Route120/scripts.pory"
# 324 "data/maps/Route120/scripts.pory"
# 640 "data/maps/Route120/scripts.pory"
	delay 15
# 641 "data/maps/Route120/scripts.pory"
# 325 "data/maps/Route120/scripts.pory"
# 642 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_ROUTE120_STEVEN
# 643 "data/maps/Route120/scripts.pory"
# 326 "data/maps/Route120/scripts.pory"
# 644 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 645 "data/maps/Route120/scripts.pory"
# 327 "data/maps/Route120/scripts.pory"
# 646 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 647 "data/maps/Route120/scripts.pory"
# 328 "data/maps/Route120/scripts.pory"
# 648 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 649 "data/maps/Route120/scripts.pory"
# 329 "data/maps/Route120/scripts.pory"
# 650 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 651 "data/maps/Route120/scripts.pory"
# 330 "data/maps/Route120/scripts.pory"
# 652 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 653 "data/maps/Route120/scripts.pory"
# 331 "data/maps/Route120/scripts.pory"
# 654 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 655 "data/maps/Route120/scripts.pory"
# 332 "data/maps/Route120/scripts.pory"
# 656 "data/maps/Route120/scripts.pory"
	release
# 657 "data/maps/Route120/scripts.pory"
	end
# 658 "data/maps/Route120/scripts.pory"

# 659 "data/maps/Route120/scripts.pory"

# 660 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 661 "data/maps/Route120/scripts.pory"
# 337 "data/maps/Route120/scripts.pory"
# 662 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 663 "data/maps/Route120/scripts.pory"
# 338 "data/maps/Route120/scripts.pory"
# 664 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 665 "data/maps/Route120/scripts.pory"
	return
# 666 "data/maps/Route120/scripts.pory"

# 667 "data/maps/Route120/scripts.pory"

# 668 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 669 "data/maps/Route120/scripts.pory"
# 343 "data/maps/Route120/scripts.pory"
# 670 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Route120_Movement_ApproachKecleonWest
# 671 "data/maps/Route120/scripts.pory"
# 344 "data/maps/Route120/scripts.pory"
# 672 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 673 "data/maps/Route120/scripts.pory"
	return
# 674 "data/maps/Route120/scripts.pory"

# 675 "data/maps/Route120/scripts.pory"

# 676 "data/maps/Route120/scripts.pory"
# 348 "data/maps/Route120/scripts.pory"
# 677 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 678 "data/maps/Route120/scripts.pory"
# 349 "data/maps/Route120/scripts.pory"
# 679 "data/maps/Route120/scripts.pory"
	walk_down
# 680 "data/maps/Route120/scripts.pory"
# 350 "data/maps/Route120/scripts.pory"
# 681 "data/maps/Route120/scripts.pory"
	walk_left
# 682 "data/maps/Route120/scripts.pory"
# 351 "data/maps/Route120/scripts.pory"
# 683 "data/maps/Route120/scripts.pory"
	step_end
# 684 "data/maps/Route120/scripts.pory"

# 685 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 686 "data/maps/Route120/scripts.pory"
# 355 "data/maps/Route120/scripts.pory"
# 687 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 688 "data/maps/Route120/scripts.pory"
	end
# 689 "data/maps/Route120/scripts.pory"

# 690 "data/maps/Route120/scripts.pory"

# 691 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 692 "data/maps/Route120/scripts.pory"
# 360 "data/maps/Route120/scripts.pory"
# 693 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 694 "data/maps/Route120/scripts.pory"
	end
# 695 "data/maps/Route120/scripts.pory"

# 696 "data/maps/Route120/scripts.pory"

# 697 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 698 "data/maps/Route120/scripts.pory"
# 365 "data/maps/Route120/scripts.pory"
# 699 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 700 "data/maps/Route120/scripts.pory"
	end
# 701 "data/maps/Route120/scripts.pory"

# 702 "data/maps/Route120/scripts.pory"

# 703 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 704 "data/maps/Route120/scripts.pory"
# 370 "data/maps/Route120/scripts.pory"
# 705 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 706 "data/maps/Route120/scripts.pory"
# 371 "data/maps/Route120/scripts.pory"
# 707 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 708 "data/maps/Route120/scripts.pory"
	end
# 709 "data/maps/Route120/scripts.pory"

# 710 "data/maps/Route120/scripts.pory"

# 711 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 712 "data/maps/Route120/scripts.pory"
# 376 "data/maps/Route120/scripts.pory"
# 713 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 714 "data/maps/Route120/scripts.pory"
# 377 "data/maps/Route120/scripts.pory"
# 715 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 716 "data/maps/Route120/scripts.pory"
# 378 "data/maps/Route120/scripts.pory"
# 717 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, TRUE
# 718 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_Robert_2
# 719 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert_1:
# 720 "data/maps/Route120/scripts.pory"
# 381 "data/maps/Route120/scripts.pory"
# 721 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 722 "data/maps/Route120/scripts.pory"
# 382 "data/maps/Route120/scripts.pory"
# 723 "data/maps/Route120/scripts.pory"
	release
# 724 "data/maps/Route120/scripts.pory"
	end
# 725 "data/maps/Route120/scripts.pory"

# 726 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert_2:
# 727 "data/maps/Route120/scripts.pory"
# 379 "data/maps/Route120/scripts.pory"
# 728 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RematchRobert
# 729 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_Robert_1
# 730 "data/maps/Route120/scripts.pory"

# 731 "data/maps/Route120/scripts.pory"

# 732 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 733 "data/maps/Route120/scripts.pory"
# 387 "data/maps/Route120/scripts.pory"
# 734 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 735 "data/maps/Route120/scripts.pory"
# 388 "data/maps/Route120/scripts.pory"
# 736 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 737 "data/maps/Route120/scripts.pory"
# 389 "data/maps/Route120/scripts.pory"
# 738 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 739 "data/maps/Route120/scripts.pory"
# 390 "data/maps/Route120/scripts.pory"
# 740 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 741 "data/maps/Route120/scripts.pory"
# 391 "data/maps/Route120/scripts.pory"
# 742 "data/maps/Route120/scripts.pory"
	release
# 743 "data/maps/Route120/scripts.pory"
	end
# 744 "data/maps/Route120/scripts.pory"

# 745 "data/maps/Route120/scripts.pory"

# 746 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 747 "data/maps/Route120/scripts.pory"
# 396 "data/maps/Route120/scripts.pory"
# 748 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 749 "data/maps/Route120/scripts.pory"
# 397 "data/maps/Route120/scripts.pory"
# 750 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 751 "data/maps/Route120/scripts.pory"
	end
# 752 "data/maps/Route120/scripts.pory"

# 753 "data/maps/Route120/scripts.pory"

# 754 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 755 "data/maps/Route120/scripts.pory"
# 402 "data/maps/Route120/scripts.pory"
# 756 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 757 "data/maps/Route120/scripts.pory"
# 403 "data/maps/Route120/scripts.pory"
# 758 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 759 "data/maps/Route120/scripts.pory"
	end
# 760 "data/maps/Route120/scripts.pory"

# 761 "data/maps/Route120/scripts.pory"

# 762 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 763 "data/maps/Route120/scripts.pory"
# 408 "data/maps/Route120/scripts.pory"
# 764 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 765 "data/maps/Route120/scripts.pory"
# 409 "data/maps/Route120/scripts.pory"
# 766 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 767 "data/maps/Route120/scripts.pory"
	end
# 768 "data/maps/Route120/scripts.pory"

# 769 "data/maps/Route120/scripts.pory"

# 770 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 771 "data/maps/Route120/scripts.pory"
# 414 "data/maps/Route120/scripts.pory"
# 772 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 773 "data/maps/Route120/scripts.pory"
# 415 "data/maps/Route120/scripts.pory"
# 774 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 775 "data/maps/Route120/scripts.pory"
# 416 "data/maps/Route120/scripts.pory"
# 776 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, TRUE
# 777 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_Jeffrey_2
# 778 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey_1:
# 779 "data/maps/Route120/scripts.pory"
# 419 "data/maps/Route120/scripts.pory"
# 780 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 781 "data/maps/Route120/scripts.pory"
# 420 "data/maps/Route120/scripts.pory"
# 782 "data/maps/Route120/scripts.pory"
	release
# 783 "data/maps/Route120/scripts.pory"
	end
# 784 "data/maps/Route120/scripts.pory"

# 785 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey_2:
# 786 "data/maps/Route120/scripts.pory"
# 417 "data/maps/Route120/scripts.pory"
# 787 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_RematchJeffrey
# 788 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_Jeffrey_1
# 789 "data/maps/Route120/scripts.pory"

# 790 "data/maps/Route120/scripts.pory"

# 791 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 792 "data/maps/Route120/scripts.pory"
# 425 "data/maps/Route120/scripts.pory"
# 793 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 794 "data/maps/Route120/scripts.pory"
# 426 "data/maps/Route120/scripts.pory"
# 795 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 796 "data/maps/Route120/scripts.pory"
# 427 "data/maps/Route120/scripts.pory"
# 797 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 798 "data/maps/Route120/scripts.pory"
# 428 "data/maps/Route120/scripts.pory"
# 799 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 800 "data/maps/Route120/scripts.pory"
# 429 "data/maps/Route120/scripts.pory"
# 801 "data/maps/Route120/scripts.pory"
	release
# 802 "data/maps/Route120/scripts.pory"
	end
# 803 "data/maps/Route120/scripts.pory"

# 804 "data/maps/Route120/scripts.pory"

# 805 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 806 "data/maps/Route120/scripts.pory"
# 434 "data/maps/Route120/scripts.pory"
# 807 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 808 "data/maps/Route120/scripts.pory"
# 435 "data/maps/Route120/scripts.pory"
# 809 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 810 "data/maps/Route120/scripts.pory"
	end
# 811 "data/maps/Route120/scripts.pory"

# 812 "data/maps/Route120/scripts.pory"

# 813 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 814 "data/maps/Route120/scripts.pory"
# 440 "data/maps/Route120/scripts.pory"
# 815 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 816 "data/maps/Route120/scripts.pory"
# 441 "data/maps/Route120/scripts.pory"
# 817 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 818 "data/maps/Route120/scripts.pory"
	end
# 819 "data/maps/Route120/scripts.pory"

# 820 "data/maps/Route120/scripts.pory"

# 821 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 822 "data/maps/Route120/scripts.pory"
# 446 "data/maps/Route120/scripts.pory"
# 823 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 824 "data/maps/Route120/scripts.pory"
# 447 "data/maps/Route120/scripts.pory"
# 825 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 826 "data/maps/Route120/scripts.pory"
	end
# 827 "data/maps/Route120/scripts.pory"

# 828 "data/maps/Route120/scripts.pory"

# 829 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 830 "data/maps/Route120/scripts.pory"
# 452 "data/maps/Route120/scripts.pory"
# 831 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 832 "data/maps/Route120/scripts.pory"
# 453 "data/maps/Route120/scripts.pory"
# 833 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 834 "data/maps/Route120/scripts.pory"
	end
# 835 "data/maps/Route120/scripts.pory"

# 836 "data/maps/Route120/scripts.pory"

# 837 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 838 "data/maps/Route120/scripts.pory"
# 458 "data/maps/Route120/scripts.pory"
# 839 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 840 "data/maps/Route120/scripts.pory"
# 459 "data/maps/Route120/scripts.pory"
# 841 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 842 "data/maps/Route120/scripts.pory"
	end
# 843 "data/maps/Route120/scripts.pory"

# 844 "data/maps/Route120/scripts.pory"

# 845 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 846 "data/maps/Route120/scripts.pory"
# 464 "data/maps/Route120/scripts.pory"
# 847 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 848 "data/maps/Route120/scripts.pory"
# 465 "data/maps/Route120/scripts.pory"
# 849 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 850 "data/maps/Route120/scripts.pory"
	end
# 851 "data/maps/Route120/scripts.pory"

# 852 "data/maps/Route120/scripts.pory"

# 853 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 854 "data/maps/Route120/scripts.pory"
# 470 "data/maps/Route120/scripts.pory"
# 855 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 856 "data/maps/Route120/scripts.pory"
# 471 "data/maps/Route120/scripts.pory"
# 857 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 858 "data/maps/Route120/scripts.pory"
	end
# 859 "data/maps/Route120/scripts.pory"

# 860 "data/maps/Route120/scripts.pory"

# 861 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 862 "data/maps/Route120/scripts.pory"
# 476 "data/maps/Route120/scripts.pory"
# 863 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 864 "data/maps/Route120/scripts.pory"
# 477 "data/maps/Route120/scripts.pory"
# 865 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 866 "data/maps/Route120/scripts.pory"
	end
# 867 "data/maps/Route120/scripts.pory"

# 868 "data/maps/Route120/scripts.pory"

# 869 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 870 "data/maps/Route120/scripts.pory"
# 482 "data/maps/Route120/scripts.pory"
# 871 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 872 "data/maps/Route120/scripts.pory"
# 483 "data/maps/Route120/scripts.pory"
# 873 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 874 "data/maps/Route120/scripts.pory"
	end
# 875 "data/maps/Route120/scripts.pory"

# 876 "data/maps/Route120/scripts.pory"

# 877 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting::
# 878 "data/maps/Route120/scripts.pory"
# 487 "data/maps/Route120/scripts.pory"
# 879 "data/maps/Route120/scripts.pory"
	.string "STEVEN: Hm? {PLAYER}{KUN}, hi.\n"
# 880 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 881 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 882 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 883 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 884 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 885 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 886 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 887 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 888 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your POKéMON ready for\n"
# 889 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 890 "data/maps/Route120/scripts.pory"

# 891 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere::
# 892 "data/maps/Route120/scripts.pory"
# 501 "data/maps/Route120/scripts.pory"
# 893 "data/maps/Route120/scripts.pory"
	.string "STEVEN: No?\p"
# 894 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 895 "data/maps/Route120/scripts.pory"

# 896 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle::
# 897 "data/maps/Route120/scripts.pory"
# 506 "data/maps/Route120/scripts.pory"
# 898 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, are your POKéMON\n"
# 899 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 900 "data/maps/Route120/scripts.pory"

# 901 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower::
# 902 "data/maps/Route120/scripts.pory"
# 511 "data/maps/Route120/scripts.pory"
# 903 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, show me your true\n"
# 904 "data/maps/Route120/scripts.pory"
	.string "power as a TRAINER!$"
# 905 "data/maps/Route120/scripts.pory"

# 906 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope::
# 907 "data/maps/Route120/scripts.pory"
# 516 "data/maps/Route120/scripts.pory"
# 908 "data/maps/Route120/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\p"
# 909 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 910 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 911 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 912 "data/maps/Route120/scripts.pory"

# 913 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope::
# 914 "data/maps/Route120/scripts.pory"
# 523 "data/maps/Route120/scripts.pory"
# 915 "data/maps/Route120/scripts.pory"
	.string "STEVEN: I see…\n"
# 916 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 917 "data/maps/Route120/scripts.pory"
	.string "Your POKéMON have obviously grown\n"
# 918 "data/maps/Route120/scripts.pory"
	.string "since I first met you in DEWFORD.\p"
# 919 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 920 "data/maps/Route120/scripts.pory"
	.string "DEVON SCOPE.\p"
# 921 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 922 "data/maps/Route120/scripts.pory"
	.string "concealed POKéMON.$"
# 923 "data/maps/Route120/scripts.pory"

# 924 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye::
# 925 "data/maps/Route120/scripts.pory"
# 534 "data/maps/Route120/scripts.pory"
# 926 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}.\p"
# 927 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing POKéMON and TRAINERS\n"
# 928 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 929 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 930 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 931 "data/maps/Route120/scripts.pory"

# 932 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable::
# 933 "data/maps/Route120/scripts.pory"
# 542 "data/maps/Route120/scripts.pory"
# 934 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 935 "data/maps/Route120/scripts.pory"

# 936 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope::
# 937 "data/maps/Route120/scripts.pory"
# 546 "data/maps/Route120/scripts.pory"
# 938 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 939 "data/maps/Route120/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 940 "data/maps/Route120/scripts.pory"

# 941 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked::
# 942 "data/maps/Route120/scripts.pory"
# 551 "data/maps/Route120/scripts.pory"
# 943 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 944 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 945 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 946 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 947 "data/maps/Route120/scripts.pory"

# 948 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree::
# 949 "data/maps/Route120/scripts.pory"
# 558 "data/maps/Route120/scripts.pory"
# 950 "data/maps/Route120/scripts.pory"
	.string "ROUTE 120\n"
# 951 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} FORTREE CITY$"
# 952 "data/maps/Route120/scripts.pory"

# 953 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121::
# 954 "data/maps/Route120/scripts.pory"
# 563 "data/maps/Route120/scripts.pory"
# 955 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 121\n"
# 956 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 120$"
