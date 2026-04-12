# 1 "data/maps/Route116/scripts.pory"

# 2 "data/maps/Route116/scripts.pory"
Route116_MapScripts::
# 3 "data/maps/Route116/scripts.pory"
# 2 "data/maps/Route116/scripts.pory"
# 4 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 5 "data/maps/Route116/scripts.pory"
# 3 "data/maps/Route116/scripts.pory"
# 6 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 7 "data/maps/Route116/scripts.pory"
# 4 "data/maps/Route116/scripts.pory"
# 8 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Route116/scripts.pory"
	.byte 0
# 10 "data/maps/Route116/scripts.pory"

# 11 "data/maps/Route116/scripts.pory"
Route116_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Route116/scripts.pory"
# 5 "data/maps/Route116/scripts.pory"
# 13 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 14 "data/maps/Route116/scripts.pory"
	.2byte 0
# 15 "data/maps/Route116/scripts.pory"

# 16 "data/maps/Route116/scripts.pory"

# 17 "data/maps/Route116/scripts.pory"
Route116_OnTransition::
# 18 "data/maps/Route116/scripts.pory"
# 10 "data/maps/Route116/scripts.pory"
# 19 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_OnTransition_2
# 20 "data/maps/Route116/scripts.pory"
Route116_OnTransition_1:
# 21 "data/maps/Route116/scripts.pory"
# 13 "data/maps/Route116/scripts.pory"
# 22 "data/maps/Route116/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 23 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_OnTransition_5
# 24 "data/maps/Route116/scripts.pory"
Route116_OnTransition_4:
# 25 "data/maps/Route116/scripts.pory"
# 16 "data/maps/Route116/scripts.pory"
# 26 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH
# 27 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_OnTransition_8
# 28 "data/maps/Route116/scripts.pory"
Route116_OnTransition_7:
# 29 "data/maps/Route116/scripts.pory"
# 19 "data/maps/Route116/scripts.pory"
# 30 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH
# 31 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_OnTransition_11
# 32 "data/maps/Route116/scripts.pory"
Route116_OnTransition_10:
# 33 "data/maps/Route116/scripts.pory"
	end
# 34 "data/maps/Route116/scripts.pory"

# 35 "data/maps/Route116/scripts.pory"
Route116_OnTransition_2:
# 36 "data/maps/Route116/scripts.pory"
# 11 "data/maps/Route116/scripts.pory"
# 37 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_SetWandasBoyfriendPos
# 38 "data/maps/Route116/scripts.pory"
	goto Route116_OnTransition_1
# 39 "data/maps/Route116/scripts.pory"

# 40 "data/maps/Route116/scripts.pory"
Route116_OnTransition_5:
# 41 "data/maps/Route116/scripts.pory"
# 14 "data/maps/Route116/scripts.pory"
# 42 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
# 43 "data/maps/Route116/scripts.pory"
	goto Route116_OnTransition_4
# 44 "data/maps/Route116/scripts.pory"

# 45 "data/maps/Route116/scripts.pory"
Route116_OnTransition_8:
# 46 "data/maps/Route116/scripts.pory"
# 17 "data/maps/Route116/scripts.pory"
# 47 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
# 48 "data/maps/Route116/scripts.pory"
	goto Route116_OnTransition_7
# 49 "data/maps/Route116/scripts.pory"

# 50 "data/maps/Route116/scripts.pory"
Route116_OnTransition_11:
# 51 "data/maps/Route116/scripts.pory"
# 20 "data/maps/Route116/scripts.pory"
# 52 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
# 53 "data/maps/Route116/scripts.pory"
	goto Route116_OnTransition_10
# 54 "data/maps/Route116/scripts.pory"

# 55 "data/maps/Route116/scripts.pory"

# 56 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 57 "data/maps/Route116/scripts.pory"
# 26 "data/maps/Route116/scripts.pory"
# 58 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_ROUTE116_WANDAS_BF, 38, 10
# 59 "data/maps/Route116/scripts.pory"
	return
# 60 "data/maps/Route116/scripts.pory"

# 61 "data/maps/Route116/scripts.pory"

# 62 "data/maps/Route116/scripts.pory"
Route116_OnLoad::
# 63 "data/maps/Route116/scripts.pory"
# 31 "data/maps/Route116/scripts.pory"
# 64 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH
# 65 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_OnLoad_2
# 66 "data/maps/Route116/scripts.pory"
Route116_OnLoad_1:
# 67 "data/maps/Route116/scripts.pory"
# 34 "data/maps/Route116/scripts.pory"
# 68 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH
# 69 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_OnLoad_5
# 70 "data/maps/Route116/scripts.pory"
Route116_OnLoad_4:
# 71 "data/maps/Route116/scripts.pory"
	end
# 72 "data/maps/Route116/scripts.pory"

# 73 "data/maps/Route116/scripts.pory"
Route116_OnLoad_2:
# 74 "data/maps/Route116/scripts.pory"
# 32 "data/maps/Route116/scripts.pory"
# 75 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute116North
# 76 "data/maps/Route116/scripts.pory"
	goto Route116_OnLoad_1
# 77 "data/maps/Route116/scripts.pory"

# 78 "data/maps/Route116/scripts.pory"
Route116_OnLoad_5:
# 79 "data/maps/Route116/scripts.pory"
# 35 "data/maps/Route116/scripts.pory"
# 80 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute116South
# 81 "data/maps/Route116/scripts.pory"
	goto Route116_OnLoad_4
# 82 "data/maps/Route116/scripts.pory"

# 83 "data/maps/Route116/scripts.pory"

# 84 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 85 "data/maps/Route116/scripts.pory"
# 41 "data/maps/Route116/scripts.pory"
# 86 "data/maps/Route116/scripts.pory"
	lock
# 87 "data/maps/Route116/scripts.pory"
# 42 "data/maps/Route116/scripts.pory"
# 88 "data/maps/Route116/scripts.pory"
	faceplayer
# 89 "data/maps/Route116/scripts.pory"
# 43 "data/maps/Route116/scripts.pory"
# 90 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_WandasBoyfriend_2
# 91 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend_1:
# 92 "data/maps/Route116/scripts.pory"
# 46 "data/maps/Route116/scripts.pory"
# 93 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_WandasBoyfriend_5
# 94 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend_4:
# 95 "data/maps/Route116/scripts.pory"
# 49 "data/maps/Route116/scripts.pory"
# 96 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 97 "data/maps/Route116/scripts.pory"
# 50 "data/maps/Route116/scripts.pory"
# 98 "data/maps/Route116/scripts.pory"
	release
# 99 "data/maps/Route116/scripts.pory"
	end
# 100 "data/maps/Route116/scripts.pory"

# 101 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend_2:
# 102 "data/maps/Route116/scripts.pory"
# 44 "data/maps/Route116/scripts.pory"
# 103 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_BoyfriendGruntLeftTunnel
# 104 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_WandasBoyfriend_1
# 105 "data/maps/Route116/scripts.pory"

# 106 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend_5:
# 107 "data/maps/Route116/scripts.pory"
# 47 "data/maps/Route116/scripts.pory"
# 108 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_BoyfriendGruntInTunnel
# 109 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_WandasBoyfriend_4
# 110 "data/maps/Route116/scripts.pory"

# 111 "data/maps/Route116/scripts.pory"

# 112 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 113 "data/maps/Route116/scripts.pory"
# 55 "data/maps/Route116/scripts.pory"
# 114 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 115 "data/maps/Route116/scripts.pory"
# 56 "data/maps/Route116/scripts.pory"
# 116 "data/maps/Route116/scripts.pory"
	release
# 117 "data/maps/Route116/scripts.pory"
	end
# 118 "data/maps/Route116/scripts.pory"

# 119 "data/maps/Route116/scripts.pory"

# 120 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 121 "data/maps/Route116/scripts.pory"
# 61 "data/maps/Route116/scripts.pory"
# 122 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 123 "data/maps/Route116/scripts.pory"
# 62 "data/maps/Route116/scripts.pory"
# 124 "data/maps/Route116/scripts.pory"
	release
# 125 "data/maps/Route116/scripts.pory"
	end
# 126 "data/maps/Route116/scripts.pory"

# 127 "data/maps/Route116/scripts.pory"

# 128 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 129 "data/maps/Route116/scripts.pory"
# 67 "data/maps/Route116/scripts.pory"
# 130 "data/maps/Route116/scripts.pory"
	lock
# 131 "data/maps/Route116/scripts.pory"
# 68 "data/maps/Route116/scripts.pory"
# 132 "data/maps/Route116/scripts.pory"
	faceplayer
# 133 "data/maps/Route116/scripts.pory"
# 69 "data/maps/Route116/scripts.pory"
# 134 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_DevonEmployee_2
# 135 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee_1:
# 136 "data/maps/Route116/scripts.pory"
# 72 "data/maps/Route116/scripts.pory"
# 137 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 138 "data/maps/Route116/scripts.pory"
# 73 "data/maps/Route116/scripts.pory"
# 139 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 140 "data/maps/Route116/scripts.pory"
	end
# 141 "data/maps/Route116/scripts.pory"

# 142 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee_2:
# 143 "data/maps/Route116/scripts.pory"
# 70 "data/maps/Route116/scripts.pory"
# 144 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_TryGiveRepeatBallAgain
# 145 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_DevonEmployee_1
# 146 "data/maps/Route116/scripts.pory"

# 147 "data/maps/Route116/scripts.pory"

# 148 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 149 "data/maps/Route116/scripts.pory"
# 78 "data/maps/Route116/scripts.pory"
# 150 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 151 "data/maps/Route116/scripts.pory"
# 79 "data/maps/Route116/scripts.pory"
# 152 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 153 "data/maps/Route116/scripts.pory"
# 80 "data/maps/Route116/scripts.pory"
# 154 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
# 155 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_GiveRepeatBall_2
# 156 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_1:
# 157 "data/maps/Route116/scripts.pory"
# 83 "data/maps/Route116/scripts.pory"
# 158 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 159 "data/maps/Route116/scripts.pory"
# 84 "data/maps/Route116/scripts.pory"
# 160 "data/maps/Route116/scripts.pory"
	closemessage
# 161 "data/maps/Route116/scripts.pory"
# 85 "data/maps/Route116/scripts.pory"
# 162 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 163 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_GiveRepeatBall_5
# 164 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_4:
# 165 "data/maps/Route116/scripts.pory"
# 88 "data/maps/Route116/scripts.pory"
# 166 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 167 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_GiveRepeatBall_8
# 168 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_7:
# 169 "data/maps/Route116/scripts.pory"
# 91 "data/maps/Route116/scripts.pory"
# 170 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 171 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_GiveRepeatBall_11
# 172 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_10:
# 173 "data/maps/Route116/scripts.pory"
# 94 "data/maps/Route116/scripts.pory"
# 174 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 175 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_GiveRepeatBall_14
# 176 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_13:
# 177 "data/maps/Route116/scripts.pory"
# 97 "data/maps/Route116/scripts.pory"
# 178 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 179 "data/maps/Route116/scripts.pory"
# 98 "data/maps/Route116/scripts.pory"
# 180 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 181 "data/maps/Route116/scripts.pory"
# 99 "data/maps/Route116/scripts.pory"
# 182 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 183 "data/maps/Route116/scripts.pory"
# 100 "data/maps/Route116/scripts.pory"
# 184 "data/maps/Route116/scripts.pory"
	release
# 185 "data/maps/Route116/scripts.pory"
	end
# 186 "data/maps/Route116/scripts.pory"

# 187 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_2:
# 188 "data/maps/Route116/scripts.pory"
# 81 "data/maps/Route116/scripts.pory"
# 189 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_NoRoomForRepeatBall
# 190 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall_1
# 191 "data/maps/Route116/scripts.pory"

# 192 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_5:
# 193 "data/maps/Route116/scripts.pory"
# 86 "data/maps/Route116/scripts.pory"
# 194 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_DevonEmployeeExit
# 195 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall_4
# 196 "data/maps/Route116/scripts.pory"

# 197 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_8:
# 198 "data/maps/Route116/scripts.pory"
# 89 "data/maps/Route116/scripts.pory"
# 199 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_DevonEmployeeExit
# 200 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall_7
# 201 "data/maps/Route116/scripts.pory"

# 202 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_11:
# 203 "data/maps/Route116/scripts.pory"
# 92 "data/maps/Route116/scripts.pory"
# 204 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_DevonEmployeeExit
# 205 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall_10
# 206 "data/maps/Route116/scripts.pory"

# 207 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_14:
# 208 "data/maps/Route116/scripts.pory"
# 95 "data/maps/Route116/scripts.pory"
# 209 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_DevonEmployeeExitEast
# 210 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall_13
# 211 "data/maps/Route116/scripts.pory"

# 212 "data/maps/Route116/scripts.pory"

# 213 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 214 "data/maps/Route116/scripts.pory"
# 105 "data/maps/Route116/scripts.pory"
# 215 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 216 "data/maps/Route116/scripts.pory"
# 106 "data/maps/Route116/scripts.pory"
# 217 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route116/scripts.pory"
	return
# 219 "data/maps/Route116/scripts.pory"

# 220 "data/maps/Route116/scripts.pory"

# 221 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 222 "data/maps/Route116/scripts.pory"
# 111 "data/maps/Route116/scripts.pory"
# 223 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 224 "data/maps/Route116/scripts.pory"
# 112 "data/maps/Route116/scripts.pory"
# 225 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route116/scripts.pory"
	return
# 227 "data/maps/Route116/scripts.pory"

# 228 "data/maps/Route116/scripts.pory"

# 229 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 230 "data/maps/Route116/scripts.pory"
# 117 "data/maps/Route116/scripts.pory"
# 231 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 232 "data/maps/Route116/scripts.pory"
# 118 "data/maps/Route116/scripts.pory"
# 233 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 234 "data/maps/Route116/scripts.pory"
	end
# 235 "data/maps/Route116/scripts.pory"

# 236 "data/maps/Route116/scripts.pory"

# 237 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 238 "data/maps/Route116/scripts.pory"
# 123 "data/maps/Route116/scripts.pory"
# 239 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 240 "data/maps/Route116/scripts.pory"
# 124 "data/maps/Route116/scripts.pory"
# 241 "data/maps/Route116/scripts.pory"
	release
# 242 "data/maps/Route116/scripts.pory"
	end
# 243 "data/maps/Route116/scripts.pory"

# 244 "data/maps/Route116/scripts.pory"

# 245 "data/maps/Route116/scripts.pory"
# 128 "data/maps/Route116/scripts.pory"
# 246 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
# 247 "data/maps/Route116/scripts.pory"
# 129 "data/maps/Route116/scripts.pory"
# 248 "data/maps/Route116/scripts.pory"
	walk_left
# 249 "data/maps/Route116/scripts.pory"
# 130 "data/maps/Route116/scripts.pory"
# 250 "data/maps/Route116/scripts.pory"
	walk_left
# 251 "data/maps/Route116/scripts.pory"
# 131 "data/maps/Route116/scripts.pory"
# 252 "data/maps/Route116/scripts.pory"
	walk_left
# 253 "data/maps/Route116/scripts.pory"
# 132 "data/maps/Route116/scripts.pory"
# 254 "data/maps/Route116/scripts.pory"
	walk_left
# 255 "data/maps/Route116/scripts.pory"
# 133 "data/maps/Route116/scripts.pory"
# 256 "data/maps/Route116/scripts.pory"
	walk_left
# 257 "data/maps/Route116/scripts.pory"
# 134 "data/maps/Route116/scripts.pory"
# 258 "data/maps/Route116/scripts.pory"
	walk_left
# 259 "data/maps/Route116/scripts.pory"
# 135 "data/maps/Route116/scripts.pory"
# 260 "data/maps/Route116/scripts.pory"
	walk_left
# 261 "data/maps/Route116/scripts.pory"
# 136 "data/maps/Route116/scripts.pory"
# 262 "data/maps/Route116/scripts.pory"
	walk_left
# 263 "data/maps/Route116/scripts.pory"
# 137 "data/maps/Route116/scripts.pory"
# 264 "data/maps/Route116/scripts.pory"
	step_end
# 265 "data/maps/Route116/scripts.pory"

# 266 "data/maps/Route116/scripts.pory"
# 140 "data/maps/Route116/scripts.pory"
# 267 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 268 "data/maps/Route116/scripts.pory"
# 141 "data/maps/Route116/scripts.pory"
# 269 "data/maps/Route116/scripts.pory"
	walk_down
# 270 "data/maps/Route116/scripts.pory"
# 142 "data/maps/Route116/scripts.pory"
# 271 "data/maps/Route116/scripts.pory"
	walk_left
# 272 "data/maps/Route116/scripts.pory"
# 143 "data/maps/Route116/scripts.pory"
# 273 "data/maps/Route116/scripts.pory"
	walk_left
# 274 "data/maps/Route116/scripts.pory"
# 144 "data/maps/Route116/scripts.pory"
# 275 "data/maps/Route116/scripts.pory"
	walk_left
# 276 "data/maps/Route116/scripts.pory"
# 145 "data/maps/Route116/scripts.pory"
# 277 "data/maps/Route116/scripts.pory"
	walk_left
# 278 "data/maps/Route116/scripts.pory"
# 146 "data/maps/Route116/scripts.pory"
# 279 "data/maps/Route116/scripts.pory"
	walk_left
# 280 "data/maps/Route116/scripts.pory"
# 147 "data/maps/Route116/scripts.pory"
# 281 "data/maps/Route116/scripts.pory"
	walk_left
# 282 "data/maps/Route116/scripts.pory"
# 148 "data/maps/Route116/scripts.pory"
# 283 "data/maps/Route116/scripts.pory"
	walk_left
# 284 "data/maps/Route116/scripts.pory"
# 149 "data/maps/Route116/scripts.pory"
# 285 "data/maps/Route116/scripts.pory"
	walk_left
# 286 "data/maps/Route116/scripts.pory"
# 150 "data/maps/Route116/scripts.pory"
# 287 "data/maps/Route116/scripts.pory"
	walk_left
# 288 "data/maps/Route116/scripts.pory"
# 151 "data/maps/Route116/scripts.pory"
# 289 "data/maps/Route116/scripts.pory"
	step_end
# 290 "data/maps/Route116/scripts.pory"

# 291 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 292 "data/maps/Route116/scripts.pory"
# 155 "data/maps/Route116/scripts.pory"
# 293 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 294 "data/maps/Route116/scripts.pory"
	end
# 295 "data/maps/Route116/scripts.pory"

# 296 "data/maps/Route116/scripts.pory"

# 297 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 298 "data/maps/Route116/scripts.pory"
# 160 "data/maps/Route116/scripts.pory"
# 299 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 300 "data/maps/Route116/scripts.pory"
	end
# 301 "data/maps/Route116/scripts.pory"

# 302 "data/maps/Route116/scripts.pory"

# 303 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 304 "data/maps/Route116/scripts.pory"
# 165 "data/maps/Route116/scripts.pory"
# 305 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 306 "data/maps/Route116/scripts.pory"
	end
# 307 "data/maps/Route116/scripts.pory"

# 308 "data/maps/Route116/scripts.pory"

# 309 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 310 "data/maps/Route116/scripts.pory"
# 170 "data/maps/Route116/scripts.pory"
# 311 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 312 "data/maps/Route116/scripts.pory"
	end
# 313 "data/maps/Route116/scripts.pory"

# 314 "data/maps/Route116/scripts.pory"

# 315 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 316 "data/maps/Route116/scripts.pory"
# 175 "data/maps/Route116/scripts.pory"
# 317 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 318 "data/maps/Route116/scripts.pory"
	end
# 319 "data/maps/Route116/scripts.pory"

# 320 "data/maps/Route116/scripts.pory"

# 321 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 322 "data/maps/Route116/scripts.pory"
# 180 "data/maps/Route116/scripts.pory"
# 323 "data/maps/Route116/scripts.pory"
	lock
# 324 "data/maps/Route116/scripts.pory"
# 181 "data/maps/Route116/scripts.pory"
# 325 "data/maps/Route116/scripts.pory"
	faceplayer
# 326 "data/maps/Route116/scripts.pory"
# 182 "data/maps/Route116/scripts.pory"
# 327 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 328 "data/maps/Route116/scripts.pory"
# 183 "data/maps/Route116/scripts.pory"
# 329 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 330 "data/maps/Route116/scripts.pory"
# 184 "data/maps/Route116/scripts.pory"
# 331 "data/maps/Route116/scripts.pory"
	release
# 332 "data/maps/Route116/scripts.pory"
	end
# 333 "data/maps/Route116/scripts.pory"

# 334 "data/maps/Route116/scripts.pory"

# 335 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 336 "data/maps/Route116/scripts.pory"
# 189 "data/maps/Route116/scripts.pory"
# 337 "data/maps/Route116/scripts.pory"
	lockall
# 338 "data/maps/Route116/scripts.pory"
# 190 "data/maps/Route116/scripts.pory"
# 339 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_ROUTE116_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 340 "data/maps/Route116/scripts.pory"
# 191 "data/maps/Route116/scripts.pory"
# 341 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 342 "data/maps/Route116/scripts.pory"
# 192 "data/maps/Route116/scripts.pory"
# 343 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route116/scripts.pory"
# 193 "data/maps/Route116/scripts.pory"
# 345 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 346 "data/maps/Route116/scripts.pory"
# 194 "data/maps/Route116/scripts.pory"
# 347 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 348 "data/maps/Route116/scripts.pory"
# 195 "data/maps/Route116/scripts.pory"
# 349 "data/maps/Route116/scripts.pory"
	releaseall
# 350 "data/maps/Route116/scripts.pory"
	end
# 351 "data/maps/Route116/scripts.pory"

# 352 "data/maps/Route116/scripts.pory"

# 353 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 354 "data/maps/Route116/scripts.pory"
# 200 "data/maps/Route116/scripts.pory"
# 355 "data/maps/Route116/scripts.pory"
	lock
# 356 "data/maps/Route116/scripts.pory"
# 201 "data/maps/Route116/scripts.pory"
# 357 "data/maps/Route116/scripts.pory"
	faceplayer
# 358 "data/maps/Route116/scripts.pory"
# 202 "data/maps/Route116/scripts.pory"
# 359 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 360 "data/maps/Route116/scripts.pory"
# 203 "data/maps/Route116/scripts.pory"
# 361 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
# 362 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_GlassesMan_2
# 363 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan_1:
# 364 "data/maps/Route116/scripts.pory"
# 206 "data/maps/Route116/scripts.pory"
# 365 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 366 "data/maps/Route116/scripts.pory"
# 207 "data/maps/Route116/scripts.pory"
# 367 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
# 368 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_GlassesMan_5
# 369 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan_4:
# 370 "data/maps/Route116/scripts.pory"
# 210 "data/maps/Route116/scripts.pory"
# 371 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 372 "data/maps/Route116/scripts.pory"
# 211 "data/maps/Route116/scripts.pory"
# 373 "data/maps/Route116/scripts.pory"
	release
# 374 "data/maps/Route116/scripts.pory"
	end
# 375 "data/maps/Route116/scripts.pory"

# 376 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan_2:
# 377 "data/maps/Route116/scripts.pory"
# 204 "data/maps/Route116/scripts.pory"
# 378 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_PlayerHasGlasses
# 379 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesMan_1
# 380 "data/maps/Route116/scripts.pory"

# 381 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan_5:
# 382 "data/maps/Route116/scripts.pory"
# 208 "data/maps/Route116/scripts.pory"
# 383 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_FoundGlassesNotOnPlayer
# 384 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesMan_4
# 385 "data/maps/Route116/scripts.pory"

# 386 "data/maps/Route116/scripts.pory"

# 387 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 388 "data/maps/Route116/scripts.pory"
# 216 "data/maps/Route116/scripts.pory"
# 389 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 390 "data/maps/Route116/scripts.pory"
# 217 "data/maps/Route116/scripts.pory"
# 391 "data/maps/Route116/scripts.pory"
	closemessage
# 392 "data/maps/Route116/scripts.pory"
# 218 "data/maps/Route116/scripts.pory"
# 393 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 394 "data/maps/Route116/scripts.pory"
	end
# 395 "data/maps/Route116/scripts.pory"

# 396 "data/maps/Route116/scripts.pory"

# 397 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 398 "data/maps/Route116/scripts.pory"
# 223 "data/maps/Route116/scripts.pory"
# 399 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 400 "data/maps/Route116/scripts.pory"
# 224 "data/maps/Route116/scripts.pory"
# 401 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 402 "data/maps/Route116/scripts.pory"
# 225 "data/maps/Route116/scripts.pory"
# 403 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 404 "data/maps/Route116/scripts.pory"
# 226 "data/maps/Route116/scripts.pory"
# 405 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
# 406 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_PlayerHasGlasses_2
# 407 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses_1:
# 408 "data/maps/Route116/scripts.pory"
# 229 "data/maps/Route116/scripts.pory"
# 409 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 410 "data/maps/Route116/scripts.pory"
# 230 "data/maps/Route116/scripts.pory"
# 411 "data/maps/Route116/scripts.pory"
	release
# 412 "data/maps/Route116/scripts.pory"
	end
# 413 "data/maps/Route116/scripts.pory"

# 414 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses_2:
# 415 "data/maps/Route116/scripts.pory"
# 227 "data/maps/Route116/scripts.pory"
# 416 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_FoundGlassesOnPlayer
# 417 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_PlayerHasGlasses_1
# 418 "data/maps/Route116/scripts.pory"

# 419 "data/maps/Route116/scripts.pory"

# 420 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 421 "data/maps/Route116/scripts.pory"
# 235 "data/maps/Route116/scripts.pory"
# 422 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 423 "data/maps/Route116/scripts.pory"
# 236 "data/maps/Route116/scripts.pory"
# 424 "data/maps/Route116/scripts.pory"
	closemessage
# 425 "data/maps/Route116/scripts.pory"
# 237 "data/maps/Route116/scripts.pory"
# 426 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 427 "data/maps/Route116/scripts.pory"
	end
# 428 "data/maps/Route116/scripts.pory"

# 429 "data/maps/Route116/scripts.pory"

# 430 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 431 "data/maps/Route116/scripts.pory"
# 242 "data/maps/Route116/scripts.pory"
# 432 "data/maps/Route116/scripts.pory"
	delay 20
# 433 "data/maps/Route116/scripts.pory"
# 243 "data/maps/Route116/scripts.pory"
# 434 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 435 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_GlassesManExit_2
# 436 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit_1:
# 437 "data/maps/Route116/scripts.pory"
# 246 "data/maps/Route116/scripts.pory"
# 438 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 439 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_GlassesManExit_5
# 440 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit_4:
# 441 "data/maps/Route116/scripts.pory"
# 249 "data/maps/Route116/scripts.pory"
# 442 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 443 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_GlassesManExit_8
# 444 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit_7:
# 445 "data/maps/Route116/scripts.pory"
# 252 "data/maps/Route116/scripts.pory"
# 446 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 447 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_GlassesManExit_11
# 448 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit_10:
# 449 "data/maps/Route116/scripts.pory"
# 255 "data/maps/Route116/scripts.pory"
# 450 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 451 "data/maps/Route116/scripts.pory"
# 256 "data/maps/Route116/scripts.pory"
# 452 "data/maps/Route116/scripts.pory"
	release
# 453 "data/maps/Route116/scripts.pory"
	end
# 454 "data/maps/Route116/scripts.pory"

# 455 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit_2:
# 456 "data/maps/Route116/scripts.pory"
# 244 "data/maps/Route116/scripts.pory"
# 457 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_GlassesManExitNormal
# 458 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit_1
# 459 "data/maps/Route116/scripts.pory"

# 460 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit_5:
# 461 "data/maps/Route116/scripts.pory"
# 247 "data/maps/Route116/scripts.pory"
# 462 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_GlassesManExitNormal
# 463 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit_4
# 464 "data/maps/Route116/scripts.pory"

# 465 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit_8:
# 466 "data/maps/Route116/scripts.pory"
# 250 "data/maps/Route116/scripts.pory"
# 467 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_GlassesManExitNormal
# 468 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit_7
# 469 "data/maps/Route116/scripts.pory"

# 470 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit_11:
# 471 "data/maps/Route116/scripts.pory"
# 253 "data/maps/Route116/scripts.pory"
# 472 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_GlassesManExitEast
# 473 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit_10
# 474 "data/maps/Route116/scripts.pory"

# 475 "data/maps/Route116/scripts.pory"

# 476 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 477 "data/maps/Route116/scripts.pory"
# 261 "data/maps/Route116/scripts.pory"
# 478 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 479 "data/maps/Route116/scripts.pory"
# 262 "data/maps/Route116/scripts.pory"
# 480 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 481 "data/maps/Route116/scripts.pory"
	return
# 482 "data/maps/Route116/scripts.pory"

# 483 "data/maps/Route116/scripts.pory"

# 484 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 485 "data/maps/Route116/scripts.pory"
# 267 "data/maps/Route116/scripts.pory"
# 486 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 487 "data/maps/Route116/scripts.pory"
# 268 "data/maps/Route116/scripts.pory"
# 488 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 489 "data/maps/Route116/scripts.pory"
	return
# 490 "data/maps/Route116/scripts.pory"

# 491 "data/maps/Route116/scripts.pory"

# 492 "data/maps/Route116/scripts.pory"
# 272 "data/maps/Route116/scripts.pory"
# 493 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
# 494 "data/maps/Route116/scripts.pory"
# 273 "data/maps/Route116/scripts.pory"
# 495 "data/maps/Route116/scripts.pory"
	walk_left
# 496 "data/maps/Route116/scripts.pory"
# 274 "data/maps/Route116/scripts.pory"
# 497 "data/maps/Route116/scripts.pory"
	walk_left
# 498 "data/maps/Route116/scripts.pory"
# 275 "data/maps/Route116/scripts.pory"
# 499 "data/maps/Route116/scripts.pory"
	walk_left
# 500 "data/maps/Route116/scripts.pory"
# 276 "data/maps/Route116/scripts.pory"
# 501 "data/maps/Route116/scripts.pory"
	walk_left
# 502 "data/maps/Route116/scripts.pory"
# 277 "data/maps/Route116/scripts.pory"
# 503 "data/maps/Route116/scripts.pory"
	walk_left
# 504 "data/maps/Route116/scripts.pory"
# 278 "data/maps/Route116/scripts.pory"
# 505 "data/maps/Route116/scripts.pory"
	walk_left
# 506 "data/maps/Route116/scripts.pory"
# 279 "data/maps/Route116/scripts.pory"
# 507 "data/maps/Route116/scripts.pory"
	walk_left
# 508 "data/maps/Route116/scripts.pory"
# 280 "data/maps/Route116/scripts.pory"
# 509 "data/maps/Route116/scripts.pory"
	walk_left
# 510 "data/maps/Route116/scripts.pory"
# 281 "data/maps/Route116/scripts.pory"
# 511 "data/maps/Route116/scripts.pory"
	walk_left
# 512 "data/maps/Route116/scripts.pory"
# 282 "data/maps/Route116/scripts.pory"
# 513 "data/maps/Route116/scripts.pory"
	step_end
# 514 "data/maps/Route116/scripts.pory"

# 515 "data/maps/Route116/scripts.pory"
# 285 "data/maps/Route116/scripts.pory"
# 516 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 517 "data/maps/Route116/scripts.pory"
# 286 "data/maps/Route116/scripts.pory"
# 518 "data/maps/Route116/scripts.pory"
	walk_up
# 519 "data/maps/Route116/scripts.pory"
# 287 "data/maps/Route116/scripts.pory"
# 520 "data/maps/Route116/scripts.pory"
	walk_left
# 521 "data/maps/Route116/scripts.pory"
# 288 "data/maps/Route116/scripts.pory"
# 522 "data/maps/Route116/scripts.pory"
	walk_left
# 523 "data/maps/Route116/scripts.pory"
# 289 "data/maps/Route116/scripts.pory"
# 524 "data/maps/Route116/scripts.pory"
	walk_left
# 525 "data/maps/Route116/scripts.pory"
# 290 "data/maps/Route116/scripts.pory"
# 526 "data/maps/Route116/scripts.pory"
	walk_left
# 527 "data/maps/Route116/scripts.pory"
# 291 "data/maps/Route116/scripts.pory"
# 528 "data/maps/Route116/scripts.pory"
	walk_left
# 529 "data/maps/Route116/scripts.pory"
# 292 "data/maps/Route116/scripts.pory"
# 530 "data/maps/Route116/scripts.pory"
	walk_left
# 531 "data/maps/Route116/scripts.pory"
# 293 "data/maps/Route116/scripts.pory"
# 532 "data/maps/Route116/scripts.pory"
	walk_left
# 533 "data/maps/Route116/scripts.pory"
# 294 "data/maps/Route116/scripts.pory"
# 534 "data/maps/Route116/scripts.pory"
	walk_left
# 535 "data/maps/Route116/scripts.pory"
# 295 "data/maps/Route116/scripts.pory"
# 536 "data/maps/Route116/scripts.pory"
	walk_left
# 537 "data/maps/Route116/scripts.pory"
# 296 "data/maps/Route116/scripts.pory"
# 538 "data/maps/Route116/scripts.pory"
	step_end
# 539 "data/maps/Route116/scripts.pory"

# 540 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 541 "data/maps/Route116/scripts.pory"
# 300 "data/maps/Route116/scripts.pory"
# 542 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 543 "data/maps/Route116/scripts.pory"
# 301 "data/maps/Route116/scripts.pory"
# 544 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 545 "data/maps/Route116/scripts.pory"
	end
# 546 "data/maps/Route116/scripts.pory"

# 547 "data/maps/Route116/scripts.pory"

# 548 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 549 "data/maps/Route116/scripts.pory"
# 306 "data/maps/Route116/scripts.pory"
# 550 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 551 "data/maps/Route116/scripts.pory"
# 307 "data/maps/Route116/scripts.pory"
# 552 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 553 "data/maps/Route116/scripts.pory"
	end
# 554 "data/maps/Route116/scripts.pory"

# 555 "data/maps/Route116/scripts.pory"

# 556 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 557 "data/maps/Route116/scripts.pory"
# 312 "data/maps/Route116/scripts.pory"
# 558 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 559 "data/maps/Route116/scripts.pory"
# 313 "data/maps/Route116/scripts.pory"
# 560 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 561 "data/maps/Route116/scripts.pory"
# 314 "data/maps/Route116/scripts.pory"
# 562 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
# 563 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_Jerry_2
# 564 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry_1:
# 565 "data/maps/Route116/scripts.pory"
# 317 "data/maps/Route116/scripts.pory"
# 566 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 567 "data/maps/Route116/scripts.pory"
# 318 "data/maps/Route116/scripts.pory"
# 568 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 569 "data/maps/Route116/scripts.pory"
# 319 "data/maps/Route116/scripts.pory"
# 570 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
# 571 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_Jerry_5
# 572 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry_4:
# 573 "data/maps/Route116/scripts.pory"
# 322 "data/maps/Route116/scripts.pory"
# 574 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 575 "data/maps/Route116/scripts.pory"
# 323 "data/maps/Route116/scripts.pory"
# 576 "data/maps/Route116/scripts.pory"
	release
# 577 "data/maps/Route116/scripts.pory"
	end
# 578 "data/maps/Route116/scripts.pory"

# 579 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry_2:
# 580 "data/maps/Route116/scripts.pory"
# 315 "data/maps/Route116/scripts.pory"
# 581 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RematchJerry
# 582 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_Jerry_1
# 583 "data/maps/Route116/scripts.pory"

# 584 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry_5:
# 585 "data/maps/Route116/scripts.pory"
# 320 "data/maps/Route116/scripts.pory"
# 586 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_TryRegisterJerry
# 587 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_Jerry_4
# 588 "data/maps/Route116/scripts.pory"

# 589 "data/maps/Route116/scripts.pory"

# 590 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 591 "data/maps/Route116/scripts.pory"
# 328 "data/maps/Route116/scripts.pory"
# 592 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterJerryAfterBattle_2
# 593 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle_1:
# 594 "data/maps/Route116/scripts.pory"
# 331 "data/maps/Route116/scripts.pory"
# 595 "data/maps/Route116/scripts.pory"
	release
# 596 "data/maps/Route116/scripts.pory"
	end
# 597 "data/maps/Route116/scripts.pory"

# 598 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle_2:
# 599 "data/maps/Route116/scripts.pory"
# 329 "data/maps/Route116/scripts.pory"
# 600 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RegisterJerryAfterBattle
# 601 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_TryRegisterJerryAfterBattle_1
# 602 "data/maps/Route116/scripts.pory"

# 603 "data/maps/Route116/scripts.pory"

# 604 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 605 "data/maps/Route116/scripts.pory"
# 336 "data/maps/Route116/scripts.pory"
# 606 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 607 "data/maps/Route116/scripts.pory"
# 337 "data/maps/Route116/scripts.pory"
# 608 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 609 "data/maps/Route116/scripts.pory"
# 338 "data/maps/Route116/scripts.pory"
# 610 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 611 "data/maps/Route116/scripts.pory"
# 339 "data/maps/Route116/scripts.pory"
# 612 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 613 "data/maps/Route116/scripts.pory"
# 340 "data/maps/Route116/scripts.pory"
# 614 "data/maps/Route116/scripts.pory"
	release
# 615 "data/maps/Route116/scripts.pory"
	end
# 616 "data/maps/Route116/scripts.pory"

# 617 "data/maps/Route116/scripts.pory"

# 618 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 619 "data/maps/Route116/scripts.pory"
# 345 "data/maps/Route116/scripts.pory"
# 620 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterJerry_2
# 621 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry_1:
# 622 "data/maps/Route116/scripts.pory"
# 348 "data/maps/Route116/scripts.pory"
# 623 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 624 "data/maps/Route116/scripts.pory"
# 349 "data/maps/Route116/scripts.pory"
# 625 "data/maps/Route116/scripts.pory"
	release
# 626 "data/maps/Route116/scripts.pory"
	end
# 627 "data/maps/Route116/scripts.pory"

# 628 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry_2:
# 629 "data/maps/Route116/scripts.pory"
# 346 "data/maps/Route116/scripts.pory"
# 630 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RegisterJerry
# 631 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_TryRegisterJerry_1
# 632 "data/maps/Route116/scripts.pory"

# 633 "data/maps/Route116/scripts.pory"

# 634 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 635 "data/maps/Route116/scripts.pory"
# 354 "data/maps/Route116/scripts.pory"
# 636 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 637 "data/maps/Route116/scripts.pory"
# 355 "data/maps/Route116/scripts.pory"
# 638 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 639 "data/maps/Route116/scripts.pory"
# 356 "data/maps/Route116/scripts.pory"
# 640 "data/maps/Route116/scripts.pory"
	release
# 641 "data/maps/Route116/scripts.pory"
	end
# 642 "data/maps/Route116/scripts.pory"

# 643 "data/maps/Route116/scripts.pory"

# 644 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 645 "data/maps/Route116/scripts.pory"
# 361 "data/maps/Route116/scripts.pory"
# 646 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 647 "data/maps/Route116/scripts.pory"
# 362 "data/maps/Route116/scripts.pory"
# 648 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 649 "data/maps/Route116/scripts.pory"
	end
# 650 "data/maps/Route116/scripts.pory"

# 651 "data/maps/Route116/scripts.pory"

# 652 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 653 "data/maps/Route116/scripts.pory"
# 367 "data/maps/Route116/scripts.pory"
# 654 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 655 "data/maps/Route116/scripts.pory"
# 368 "data/maps/Route116/scripts.pory"
# 656 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 657 "data/maps/Route116/scripts.pory"
	end
# 658 "data/maps/Route116/scripts.pory"

# 659 "data/maps/Route116/scripts.pory"

# 660 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 661 "data/maps/Route116/scripts.pory"
# 373 "data/maps/Route116/scripts.pory"
# 662 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 663 "data/maps/Route116/scripts.pory"
# 374 "data/maps/Route116/scripts.pory"
# 664 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 665 "data/maps/Route116/scripts.pory"
	end
# 666 "data/maps/Route116/scripts.pory"

# 667 "data/maps/Route116/scripts.pory"

# 668 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 669 "data/maps/Route116/scripts.pory"
# 379 "data/maps/Route116/scripts.pory"
# 670 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 671 "data/maps/Route116/scripts.pory"
# 380 "data/maps/Route116/scripts.pory"
# 672 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 673 "data/maps/Route116/scripts.pory"
# 381 "data/maps/Route116/scripts.pory"
# 674 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
# 675 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_Karen_2
# 676 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen_1:
# 677 "data/maps/Route116/scripts.pory"
# 384 "data/maps/Route116/scripts.pory"
# 678 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 679 "data/maps/Route116/scripts.pory"
# 385 "data/maps/Route116/scripts.pory"
# 680 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 681 "data/maps/Route116/scripts.pory"
# 386 "data/maps/Route116/scripts.pory"
# 682 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
# 683 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_Karen_5
# 684 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen_4:
# 685 "data/maps/Route116/scripts.pory"
# 389 "data/maps/Route116/scripts.pory"
# 686 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 687 "data/maps/Route116/scripts.pory"
# 390 "data/maps/Route116/scripts.pory"
# 688 "data/maps/Route116/scripts.pory"
	release
# 689 "data/maps/Route116/scripts.pory"
	end
# 690 "data/maps/Route116/scripts.pory"

# 691 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen_2:
# 692 "data/maps/Route116/scripts.pory"
# 382 "data/maps/Route116/scripts.pory"
# 693 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RematchKaren
# 694 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_Karen_1
# 695 "data/maps/Route116/scripts.pory"

# 696 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen_5:
# 697 "data/maps/Route116/scripts.pory"
# 387 "data/maps/Route116/scripts.pory"
# 698 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_TryRegisterKaren
# 699 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_Karen_4
# 700 "data/maps/Route116/scripts.pory"

# 701 "data/maps/Route116/scripts.pory"

# 702 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 703 "data/maps/Route116/scripts.pory"
# 395 "data/maps/Route116/scripts.pory"
# 704 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterKarenAfterBattle_2
# 705 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle_1:
# 706 "data/maps/Route116/scripts.pory"
# 398 "data/maps/Route116/scripts.pory"
# 707 "data/maps/Route116/scripts.pory"
	release
# 708 "data/maps/Route116/scripts.pory"
	end
# 709 "data/maps/Route116/scripts.pory"

# 710 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle_2:
# 711 "data/maps/Route116/scripts.pory"
# 396 "data/maps/Route116/scripts.pory"
# 712 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RegisterKarenAfterBattle
# 713 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_TryRegisterKarenAfterBattle_1
# 714 "data/maps/Route116/scripts.pory"

# 715 "data/maps/Route116/scripts.pory"

# 716 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 717 "data/maps/Route116/scripts.pory"
# 403 "data/maps/Route116/scripts.pory"
# 718 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 719 "data/maps/Route116/scripts.pory"
# 404 "data/maps/Route116/scripts.pory"
# 720 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 721 "data/maps/Route116/scripts.pory"
# 405 "data/maps/Route116/scripts.pory"
# 722 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 723 "data/maps/Route116/scripts.pory"
# 406 "data/maps/Route116/scripts.pory"
# 724 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 725 "data/maps/Route116/scripts.pory"
# 407 "data/maps/Route116/scripts.pory"
# 726 "data/maps/Route116/scripts.pory"
	release
# 727 "data/maps/Route116/scripts.pory"
	end
# 728 "data/maps/Route116/scripts.pory"

# 729 "data/maps/Route116/scripts.pory"

# 730 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 731 "data/maps/Route116/scripts.pory"
# 412 "data/maps/Route116/scripts.pory"
# 732 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterKaren_2
# 733 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren_1:
# 734 "data/maps/Route116/scripts.pory"
# 415 "data/maps/Route116/scripts.pory"
# 735 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 736 "data/maps/Route116/scripts.pory"
# 416 "data/maps/Route116/scripts.pory"
# 737 "data/maps/Route116/scripts.pory"
	release
# 738 "data/maps/Route116/scripts.pory"
	end
# 739 "data/maps/Route116/scripts.pory"

# 740 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren_2:
# 741 "data/maps/Route116/scripts.pory"
# 413 "data/maps/Route116/scripts.pory"
# 742 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RegisterKaren
# 743 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_TryRegisterKaren_1
# 744 "data/maps/Route116/scripts.pory"

# 745 "data/maps/Route116/scripts.pory"

# 746 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 747 "data/maps/Route116/scripts.pory"
# 421 "data/maps/Route116/scripts.pory"
# 748 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 749 "data/maps/Route116/scripts.pory"
# 422 "data/maps/Route116/scripts.pory"
# 750 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 751 "data/maps/Route116/scripts.pory"
# 423 "data/maps/Route116/scripts.pory"
# 752 "data/maps/Route116/scripts.pory"
	release
# 753 "data/maps/Route116/scripts.pory"
	end
# 754 "data/maps/Route116/scripts.pory"

# 755 "data/maps/Route116/scripts.pory"

# 756 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 757 "data/maps/Route116/scripts.pory"
# 428 "data/maps/Route116/scripts.pory"
# 758 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 759 "data/maps/Route116/scripts.pory"
# 429 "data/maps/Route116/scripts.pory"
# 760 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 761 "data/maps/Route116/scripts.pory"
	end
# 762 "data/maps/Route116/scripts.pory"

# 763 "data/maps/Route116/scripts.pory"

# 764 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 765 "data/maps/Route116/scripts.pory"
# 434 "data/maps/Route116/scripts.pory"
# 766 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 767 "data/maps/Route116/scripts.pory"
# 435 "data/maps/Route116/scripts.pory"
# 768 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 769 "data/maps/Route116/scripts.pory"
	end
# 770 "data/maps/Route116/scripts.pory"

# 771 "data/maps/Route116/scripts.pory"

# 772 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 773 "data/maps/Route116/scripts.pory"
# 440 "data/maps/Route116/scripts.pory"
# 774 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 775 "data/maps/Route116/scripts.pory"
# 441 "data/maps/Route116/scripts.pory"
# 776 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 777 "data/maps/Route116/scripts.pory"
	end
# 778 "data/maps/Route116/scripts.pory"

# 779 "data/maps/Route116/scripts.pory"

# 780 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 781 "data/maps/Route116/scripts.pory"
# 446 "data/maps/Route116/scripts.pory"
# 782 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 783 "data/maps/Route116/scripts.pory"
# 447 "data/maps/Route116/scripts.pory"
# 784 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 785 "data/maps/Route116/scripts.pory"
	end
# 786 "data/maps/Route116/scripts.pory"

# 787 "data/maps/Route116/scripts.pory"

# 788 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 789 "data/maps/Route116/scripts.pory"
# 452 "data/maps/Route116/scripts.pory"
# 790 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 791 "data/maps/Route116/scripts.pory"
# 453 "data/maps/Route116/scripts.pory"
# 792 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 793 "data/maps/Route116/scripts.pory"
	end
# 794 "data/maps/Route116/scripts.pory"

# 795 "data/maps/Route116/scripts.pory"

# 796 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko::
# 797 "data/maps/Route116/scripts.pory"
# 457 "data/maps/Route116/scripts.pory"
# 798 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
# 799 "data/maps/Route116/scripts.pory"
	.string "We were on our walk, PEEKO and I, when\n"
# 800 "data/maps/Route116/scripts.pory"
	.string "we were jumped by an odd thug…\p"
# 801 "data/maps/Route116/scripts.pory"
	.string "The scoundrel made off with my\n"
# 802 "data/maps/Route116/scripts.pory"
	.string "darling PEEKO!\p"
# 803 "data/maps/Route116/scripts.pory"
	.string "Wrrrooooooaaaar! PEEKO!$"
# 804 "data/maps/Route116/scripts.pory"

# 805 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel::
# 806 "data/maps/Route116/scripts.pory"
# 466 "data/maps/Route116/scripts.pory"
# 807 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 808 "data/maps/Route116/scripts.pory"
	.string "I want to dig that tunnel!$"
# 809 "data/maps/Route116/scripts.pory"

# 810 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut::
# 811 "data/maps/Route116/scripts.pory"
# 471 "data/maps/Route116/scripts.pory"
# 812 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
# 813 "data/maps/Route116/scripts.pory"
	.string "What's going on?\p"
# 814 "data/maps/Route116/scripts.pory"
	.string "I was digging the tunnel without any\n"
# 815 "data/maps/Route116/scripts.pory"
	.string "tools when some goon ordered me out!\p"
# 816 "data/maps/Route116/scripts.pory"
	.string "That tunnel's filled with POKéMON\n"
# 817 "data/maps/Route116/scripts.pory"
	.string "that react badly to loud noises.\l"
# 818 "data/maps/Route116/scripts.pory"
	.string "They could cause an uproar.\p"
# 819 "data/maps/Route116/scripts.pory"
	.string "That's why we stopped using heavy\n"
# 820 "data/maps/Route116/scripts.pory"
	.string "equipment for tunneling…\p"
# 821 "data/maps/Route116/scripts.pory"
	.string "I'm worried that the goon will do\n"
# 822 "data/maps/Route116/scripts.pory"
	.string "something stupid and startle the\l"
# 823 "data/maps/Route116/scripts.pory"
	.string "POKéMON into an uproar.$"
# 824 "data/maps/Route116/scripts.pory"

# 825 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel::
# 826 "data/maps/Route116/scripts.pory"
# 486 "data/maps/Route116/scripts.pory"
# 827 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 828 "data/maps/Route116/scripts.pory"
	.string "That goofy goon hightailed it out of\n"
# 829 "data/maps/Route116/scripts.pory"
	.string "the tunnel! I can go back to digging!$"
# 830 "data/maps/Route116/scripts.pory"

# 831 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation::
# 832 "data/maps/Route116/scripts.pory"
# 492 "data/maps/Route116/scripts.pory"
# 833 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
# 834 "data/maps/Route116/scripts.pory"
	.string "You're that person who not only helped\n"
# 835 "data/maps/Route116/scripts.pory"
	.string "me in PETALBURG WOODS, but also got\l"
# 836 "data/maps/Route116/scripts.pory"
	.string "back my stolen package and then even\l"
# 837 "data/maps/Route116/scripts.pory"
	.string "graciously delivered it to SLATEPORT!\p"
# 838 "data/maps/Route116/scripts.pory"
	.string "CAPT. STERN informed us that the\n"
# 839 "data/maps/Route116/scripts.pory"
	.string "package arrived, too!\p"
# 840 "data/maps/Route116/scripts.pory"
	.string "I thank you very, very much!\p"
# 841 "data/maps/Route116/scripts.pory"
	.string "Why, if I were a rain cloud, I would\n"
# 842 "data/maps/Route116/scripts.pory"
	.string "shower you with gratitude and hail\l"
# 843 "data/maps/Route116/scripts.pory"
	.string "you as a hero!\p"
# 844 "data/maps/Route116/scripts.pory"
	.string "For you, the most wonderful TRAINER,\n"
# 845 "data/maps/Route116/scripts.pory"
	.string "I bear good news!\p"
# 846 "data/maps/Route116/scripts.pory"
	.string "Recently, our company developed\n"
# 847 "data/maps/Route116/scripts.pory"
	.string "a new kind of POKé BALL.\p"
# 848 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation, this\n"
# 849 "data/maps/Route116/scripts.pory"
	.string "is our gift to our wonderful TRAINER!$"
# 850 "data/maps/Route116/scripts.pory"

# 851 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart::
# 852 "data/maps/Route116/scripts.pory"
# 512 "data/maps/Route116/scripts.pory"
# 853 "data/maps/Route116/scripts.pory"
	.string "Our new POKé BALL will be available\n"
# 854 "data/maps/Route116/scripts.pory"
	.string "at the POKéMON MART in RUSTBORO.\p"
# 855 "data/maps/Route116/scripts.pory"
	.string "Please do try it out!\n"
# 856 "data/maps/Route116/scripts.pory"
	.string "Thank you and bye-bye!$"
# 857 "data/maps/Route116/scripts.pory"

# 858 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked::
# 859 "data/maps/Route116/scripts.pory"
# 519 "data/maps/Route116/scripts.pory"
# 860 "data/maps/Route116/scripts.pory"
	.string "Your BAG is jam-packed.\n"
# 861 "data/maps/Route116/scripts.pory"
	.string "I can't give you this REPEAT BALL.$"
# 862 "data/maps/Route116/scripts.pory"

# 863 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation::
# 864 "data/maps/Route116/scripts.pory"
# 524 "data/maps/Route116/scripts.pory"
# 865 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
# 866 "data/maps/Route116/scripts.pory"
	.string "your delivering our package, I have\l"
# 867 "data/maps/Route116/scripts.pory"
	.string "a gift of a new kind of POKé BALL\l"
# 868 "data/maps/Route116/scripts.pory"
	.string "for our most wonderful TRAINER!$"
# 869 "data/maps/Route116/scripts.pory"

# 870 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses::
# 871 "data/maps/Route116/scripts.pory"
# 531 "data/maps/Route116/scripts.pory"
# 872 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
# 873 "data/maps/Route116/scripts.pory"
	.string "Can you help me find them?$"
# 874 "data/maps/Route116/scripts.pory"

# 875 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses::
# 876 "data/maps/Route116/scripts.pory"
# 536 "data/maps/Route116/scripts.pory"
# 877 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
# 878 "data/maps/Route116/scripts.pory"
	.string "May I see them for a second?$"
# 879 "data/maps/Route116/scripts.pory"

# 880 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere::
# 881 "data/maps/Route116/scripts.pory"
# 541 "data/maps/Route116/scripts.pory"
# 882 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 883 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 884 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…\p"
# 885 "data/maps/Route116/scripts.pory"
	.string "Maybe my glasses aren't around\n"
# 886 "data/maps/Route116/scripts.pory"
	.string "here…$"
# 887 "data/maps/Route116/scripts.pory"

# 888 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere::
# 889 "data/maps/Route116/scripts.pory"
# 549 "data/maps/Route116/scripts.pory"
# 890 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 891 "data/maps/Route116/scripts.pory"
	.string "I can't find my glasses anywhere…\l"
# 892 "data/maps/Route116/scripts.pory"
	.string "Maybe they're not around here…$"
# 893 "data/maps/Route116/scripts.pory"

# 894 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor::
# 895 "data/maps/Route116/scripts.pory"
# 555 "data/maps/Route116/scripts.pory"
# 896 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 897 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 898 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…$"
# 899 "data/maps/Route116/scripts.pory"

# 900 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro::
# 901 "data/maps/Route116/scripts.pory"
# 561 "data/maps/Route116/scripts.pory"
# 902 "data/maps/Route116/scripts.pory"
	.string "ROUTE 116\n"
# 903 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} RUSTBORO CITY$"
# 904 "data/maps/Route116/scripts.pory"

# 905 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign::
# 906 "data/maps/Route116/scripts.pory"
# 566 "data/maps/Route116/scripts.pory"
# 907 "data/maps/Route116/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 908 "data/maps/Route116/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 909 "data/maps/Route116/scripts.pory"
	.string "“The tunnel project has been\n"
# 910 "data/maps/Route116/scripts.pory"
	.string "canceled.”$"
# 911 "data/maps/Route116/scripts.pory"

# 912 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse::
# 913 "data/maps/Route116/scripts.pory"
# 573 "data/maps/Route116/scripts.pory"
# 914 "data/maps/Route116/scripts.pory"
	.string "TUNNELER'S REST HOUSE$"
# 915 "data/maps/Route116/scripts.pory"

# 916 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution::
# 917 "data/maps/Route116/scripts.pory"
# 577 "data/maps/Route116/scripts.pory"
# 918 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 919 "data/maps/Route116/scripts.pory"
	.string "If you want to stop a POKéMON from\n"
# 920 "data/maps/Route116/scripts.pory"
	.string "evolving, press the B Button while it\l"
# 921 "data/maps/Route116/scripts.pory"
	.string "is trying to evolve.\l"
# 922 "data/maps/Route116/scripts.pory"
	.string "The startled POKéMON will stop.\p"
# 923 "data/maps/Route116/scripts.pory"
	.string "This is called an evolution cancel.$"
# 924 "data/maps/Route116/scripts.pory"

# 925 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets::
# 926 "data/maps/Route116/scripts.pory"
# 586 "data/maps/Route116/scripts.pory"
# 927 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 928 "data/maps/Route116/scripts.pory"
	.string "Your BAG has several POCKETS.\p"
# 929 "data/maps/Route116/scripts.pory"
	.string "Items you obtain are automatically\n"
# 930 "data/maps/Route116/scripts.pory"
	.string "placed in the appropriate POCKETS.\p"
# 931 "data/maps/Route116/scripts.pory"
	.string "No TRAINER can afford to be without\n"
# 932 "data/maps/Route116/scripts.pory"
	.string "a BAG of their own.$"
