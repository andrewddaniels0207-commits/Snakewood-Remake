# 1 "data/maps/Route128/scripts.pory"

# 2 "data/maps/Route128/scripts.pory"
Route128_MapScripts::
# 3 "data/maps/Route128/scripts.pory"
# 2 "data/maps/Route128/scripts.pory"
# 4 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
# 5 "data/maps/Route128/scripts.pory"
# 3 "data/maps/Route128/scripts.pory"
# 6 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/Route128/scripts.pory"
	.byte 0
# 8 "data/maps/Route128/scripts.pory"

# 9 "data/maps/Route128/scripts.pory"
Route128_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/Route128/scripts.pory"
# 4 "data/maps/Route128/scripts.pory"
# 11 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
# 12 "data/maps/Route128/scripts.pory"
	.2byte 0
# 13 "data/maps/Route128/scripts.pory"

# 14 "data/maps/Route128/scripts.pory"

# 15 "data/maps/Route128/scripts.pory"
Route128_OnTransition::
# 16 "data/maps/Route128/scripts.pory"
# 9 "data/maps/Route128/scripts.pory"
# 17 "data/maps/Route128/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route128_OnTransition_2
# 18 "data/maps/Route128/scripts.pory"
Route128_OnTransition_1:
# 19 "data/maps/Route128/scripts.pory"
	end
# 20 "data/maps/Route128/scripts.pory"

# 21 "data/maps/Route128/scripts.pory"
Route128_OnTransition_2:
# 22 "data/maps/Route128/scripts.pory"
# 10 "data/maps/Route128/scripts.pory"
# 23 "data/maps/Route128/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 24 "data/maps/Route128/scripts.pory"
	goto Route128_OnTransition_1
# 25 "data/maps/Route128/scripts.pory"

# 26 "data/maps/Route128/scripts.pory"

# 27 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene::
# 28 "data/maps/Route128/scripts.pory"
# 16 "data/maps/Route128/scripts.pory"
# 29 "data/maps/Route128/scripts.pory"
	lockall
# 30 "data/maps/Route128/scripts.pory"
# 17 "data/maps/Route128/scripts.pory"
# 31 "data/maps/Route128/scripts.pory"
	delay 20
# 32 "data/maps/Route128/scripts.pory"
# 18 "data/maps/Route128/scripts.pory"
# 33 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieLookAround
# 34 "data/maps/Route128/scripts.pory"
# 19 "data/maps/Route128/scripts.pory"
# 35 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route128/scripts.pory"
# 20 "data/maps/Route128/scripts.pory"
# 37 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
# 38 "data/maps/Route128/scripts.pory"
# 21 "data/maps/Route128/scripts.pory"
# 39 "data/maps/Route128/scripts.pory"
	closemessage
# 40 "data/maps/Route128/scripts.pory"
# 22 "data/maps/Route128/scripts.pory"
# 41 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieBackUp
# 42 "data/maps/Route128/scripts.pory"
# 23 "data/maps/Route128/scripts.pory"
# 43 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route128/scripts.pory"
# 24 "data/maps/Route128/scripts.pory"
# 45 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
# 46 "data/maps/Route128/scripts.pory"
# 25 "data/maps/Route128/scripts.pory"
# 47 "data/maps/Route128/scripts.pory"
	closemessage
# 48 "data/maps/Route128/scripts.pory"
# 26 "data/maps/Route128/scripts.pory"
# 49 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieApproachArchie
# 50 "data/maps/Route128/scripts.pory"
# 27 "data/maps/Route128/scripts.pory"
# 51 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route128/scripts.pory"
# 28 "data/maps/Route128/scripts.pory"
# 53 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 54 "data/maps/Route128/scripts.pory"
# 29 "data/maps/Route128/scripts.pory"
# 55 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route128/scripts.pory"
# 30 "data/maps/Route128/scripts.pory"
# 57 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
# 58 "data/maps/Route128/scripts.pory"
# 31 "data/maps/Route128/scripts.pory"
# 59 "data/maps/Route128/scripts.pory"
	closemessage
# 60 "data/maps/Route128/scripts.pory"
# 32 "data/maps/Route128/scripts.pory"
# 61 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieApproachPlayer
# 62 "data/maps/Route128/scripts.pory"
# 33 "data/maps/Route128/scripts.pory"
# 63 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route128/scripts.pory"
# 34 "data/maps/Route128/scripts.pory"
# 65 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 66 "data/maps/Route128/scripts.pory"
# 35 "data/maps/Route128/scripts.pory"
# 67 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route128/scripts.pory"
# 36 "data/maps/Route128/scripts.pory"
# 69 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
# 70 "data/maps/Route128/scripts.pory"
# 37 "data/maps/Route128/scripts.pory"
# 71 "data/maps/Route128/scripts.pory"
	closemessage
# 72 "data/maps/Route128/scripts.pory"
# 38 "data/maps/Route128/scripts.pory"
# 73 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieRunLeft
# 74 "data/maps/Route128/scripts.pory"
# 39 "data/maps/Route128/scripts.pory"
# 75 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 76 "data/maps/Route128/scripts.pory"
# 40 "data/maps/Route128/scripts.pory"
# 77 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieWalkLeft
# 78 "data/maps/Route128/scripts.pory"
# 41 "data/maps/Route128/scripts.pory"
# 79 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route128/scripts.pory"
# 42 "data/maps/Route128/scripts.pory"
# 81 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
# 82 "data/maps/Route128/scripts.pory"
# 43 "data/maps/Route128/scripts.pory"
# 83 "data/maps/Route128/scripts.pory"
	closemessage
# 84 "data/maps/Route128/scripts.pory"
# 44 "data/maps/Route128/scripts.pory"
# 85 "data/maps/Route128/scripts.pory"
	delay 40
# 86 "data/maps/Route128/scripts.pory"
# 45 "data/maps/Route128/scripts.pory"
# 87 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieExit
# 88 "data/maps/Route128/scripts.pory"
# 46 "data/maps/Route128/scripts.pory"
# 89 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieExit
# 90 "data/maps/Route128/scripts.pory"
# 47 "data/maps/Route128/scripts.pory"
# 91 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route128/scripts.pory"
# 48 "data/maps/Route128/scripts.pory"
# 93 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_MAXIE
# 94 "data/maps/Route128/scripts.pory"
# 49 "data/maps/Route128/scripts.pory"
# 95 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_ARCHIE
# 96 "data/maps/Route128/scripts.pory"
# 50 "data/maps/Route128/scripts.pory"
# 97 "data/maps/Route128/scripts.pory"
	delay 100
# 98 "data/maps/Route128/scripts.pory"
# 51 "data/maps/Route128/scripts.pory"
# 99 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 100 "data/maps/Route128/scripts.pory"
# 52 "data/maps/Route128/scripts.pory"
# 101 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 102 "data/maps/Route128/scripts.pory"
# 53 "data/maps/Route128/scripts.pory"
# 103 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 104 "data/maps/Route128/scripts.pory"
# 54 "data/maps/Route128/scripts.pory"
# 105 "data/maps/Route128/scripts.pory"
	addobject LOCALID_ROUTE128_STEVEN
# 106 "data/maps/Route128/scripts.pory"
# 55 "data/maps/Route128/scripts.pory"
# 107 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Route128_Movement_StevenApproachPlayer
# 108 "data/maps/Route128/scripts.pory"
# 56 "data/maps/Route128/scripts.pory"
# 109 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route128/scripts.pory"
# 57 "data/maps/Route128/scripts.pory"
# 111 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 112 "data/maps/Route128/scripts.pory"
# 58 "data/maps/Route128/scripts.pory"
# 113 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route128/scripts.pory"
# 59 "data/maps/Route128/scripts.pory"
# 115 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWhatIsHappening, MSGBOX_DEFAULT
# 116 "data/maps/Route128/scripts.pory"
# 60 "data/maps/Route128/scripts.pory"
# 117 "data/maps/Route128/scripts.pory"
	closemessage
# 118 "data/maps/Route128/scripts.pory"
# 61 "data/maps/Route128/scripts.pory"
# 119 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Route128_Movement_StevenWalkUp
# 120 "data/maps/Route128/scripts.pory"
# 62 "data/maps/Route128/scripts.pory"
# 121 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 122 "data/maps/Route128/scripts.pory"
# 63 "data/maps/Route128/scripts.pory"
# 123 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route128/scripts.pory"
# 64 "data/maps/Route128/scripts.pory"
# 125 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWholeWorldWillDrown, MSGBOX_DEFAULT
# 126 "data/maps/Route128/scripts.pory"
# 65 "data/maps/Route128/scripts.pory"
# 127 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 128 "data/maps/Route128/scripts.pory"
# 66 "data/maps/Route128/scripts.pory"
# 129 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route128/scripts.pory"
# 67 "data/maps/Route128/scripts.pory"
# 131 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenImGoingToSootopolis, MSGBOX_DEFAULT
# 132 "data/maps/Route128/scripts.pory"
# 68 "data/maps/Route128/scripts.pory"
# 133 "data/maps/Route128/scripts.pory"
	closemessage
# 134 "data/maps/Route128/scripts.pory"
# 69 "data/maps/Route128/scripts.pory"
# 135 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 136 "data/maps/Route128/scripts.pory"
# 70 "data/maps/Route128/scripts.pory"
# 137 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route128/scripts.pory"
# 71 "data/maps/Route128/scripts.pory"
# 139 "data/maps/Route128/scripts.pory"
	delay 50
# 140 "data/maps/Route128/scripts.pory"
# 72 "data/maps/Route128/scripts.pory"
# 141 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 142 "data/maps/Route128/scripts.pory"
# 73 "data/maps/Route128/scripts.pory"
# 143 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 144 "data/maps/Route128/scripts.pory"
# 74 "data/maps/Route128/scripts.pory"
# 145 "data/maps/Route128/scripts.pory"
	delay 15
# 146 "data/maps/Route128/scripts.pory"
# 75 "data/maps/Route128/scripts.pory"
# 147 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_STEVEN
# 148 "data/maps/Route128/scripts.pory"
# 76 "data/maps/Route128/scripts.pory"
# 149 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 150 "data/maps/Route128/scripts.pory"
# 77 "data/maps/Route128/scripts.pory"
# 151 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 152 "data/maps/Route128/scripts.pory"
# 78 "data/maps/Route128/scripts.pory"
# 153 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 154 "data/maps/Route128/scripts.pory"
# 79 "data/maps/Route128/scripts.pory"
# 155 "data/maps/Route128/scripts.pory"
	releaseall
# 156 "data/maps/Route128/scripts.pory"
	end
# 157 "data/maps/Route128/scripts.pory"

# 158 "data/maps/Route128/scripts.pory"

# 159 "data/maps/Route128/scripts.pory"
# 83 "data/maps/Route128/scripts.pory"
# 160 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused1:
# 161 "data/maps/Route128/scripts.pory"
# 84 "data/maps/Route128/scripts.pory"
# 162 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 163 "data/maps/Route128/scripts.pory"
# 85 "data/maps/Route128/scripts.pory"
# 164 "data/maps/Route128/scripts.pory"
	step_end
# 165 "data/maps/Route128/scripts.pory"

# 166 "data/maps/Route128/scripts.pory"
# 88 "data/maps/Route128/scripts.pory"
# 167 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused2:
# 168 "data/maps/Route128/scripts.pory"
# 89 "data/maps/Route128/scripts.pory"
# 169 "data/maps/Route128/scripts.pory"
	walk_left
# 170 "data/maps/Route128/scripts.pory"
# 90 "data/maps/Route128/scripts.pory"
# 171 "data/maps/Route128/scripts.pory"
	walk_left
# 172 "data/maps/Route128/scripts.pory"
# 91 "data/maps/Route128/scripts.pory"
# 173 "data/maps/Route128/scripts.pory"
	walk_left
# 174 "data/maps/Route128/scripts.pory"
# 92 "data/maps/Route128/scripts.pory"
# 175 "data/maps/Route128/scripts.pory"
	walk_left
# 176 "data/maps/Route128/scripts.pory"
# 93 "data/maps/Route128/scripts.pory"
# 177 "data/maps/Route128/scripts.pory"
	walk_left
# 178 "data/maps/Route128/scripts.pory"
# 94 "data/maps/Route128/scripts.pory"
# 179 "data/maps/Route128/scripts.pory"
	walk_left
# 180 "data/maps/Route128/scripts.pory"
# 95 "data/maps/Route128/scripts.pory"
# 181 "data/maps/Route128/scripts.pory"
	walk_up
# 182 "data/maps/Route128/scripts.pory"
# 96 "data/maps/Route128/scripts.pory"
# 183 "data/maps/Route128/scripts.pory"
	walk_up
# 184 "data/maps/Route128/scripts.pory"
# 97 "data/maps/Route128/scripts.pory"
# 185 "data/maps/Route128/scripts.pory"
	walk_up
# 186 "data/maps/Route128/scripts.pory"
# 98 "data/maps/Route128/scripts.pory"
# 187 "data/maps/Route128/scripts.pory"
	walk_up
# 188 "data/maps/Route128/scripts.pory"
# 99 "data/maps/Route128/scripts.pory"
# 189 "data/maps/Route128/scripts.pory"
	walk_up
# 190 "data/maps/Route128/scripts.pory"
# 100 "data/maps/Route128/scripts.pory"
# 191 "data/maps/Route128/scripts.pory"
	walk_up
# 192 "data/maps/Route128/scripts.pory"
# 101 "data/maps/Route128/scripts.pory"
# 193 "data/maps/Route128/scripts.pory"
	step_end
# 194 "data/maps/Route128/scripts.pory"

# 195 "data/maps/Route128/scripts.pory"
# 104 "data/maps/Route128/scripts.pory"
# 196 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenWalkUp:
# 197 "data/maps/Route128/scripts.pory"
# 105 "data/maps/Route128/scripts.pory"
# 198 "data/maps/Route128/scripts.pory"
	walk_up
# 199 "data/maps/Route128/scripts.pory"
# 106 "data/maps/Route128/scripts.pory"
# 200 "data/maps/Route128/scripts.pory"
	step_end
# 201 "data/maps/Route128/scripts.pory"

# 202 "data/maps/Route128/scripts.pory"
# 109 "data/maps/Route128/scripts.pory"
# 203 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenApproachPlayer:
# 204 "data/maps/Route128/scripts.pory"
# 110 "data/maps/Route128/scripts.pory"
# 205 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 206 "data/maps/Route128/scripts.pory"
# 111 "data/maps/Route128/scripts.pory"
# 207 "data/maps/Route128/scripts.pory"
	step_end
# 208 "data/maps/Route128/scripts.pory"

# 209 "data/maps/Route128/scripts.pory"
# 114 "data/maps/Route128/scripts.pory"
# 210 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 211 "data/maps/Route128/scripts.pory"
# 115 "data/maps/Route128/scripts.pory"
# 212 "data/maps/Route128/scripts.pory"
	walk_fast_down
# 213 "data/maps/Route128/scripts.pory"
# 116 "data/maps/Route128/scripts.pory"
# 214 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_left
# 215 "data/maps/Route128/scripts.pory"
# 117 "data/maps/Route128/scripts.pory"
# 216 "data/maps/Route128/scripts.pory"
	delay_16
# 217 "data/maps/Route128/scripts.pory"
# 118 "data/maps/Route128/scripts.pory"
# 218 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 219 "data/maps/Route128/scripts.pory"
# 119 "data/maps/Route128/scripts.pory"
# 220 "data/maps/Route128/scripts.pory"
	delay_16
# 221 "data/maps/Route128/scripts.pory"
# 120 "data/maps/Route128/scripts.pory"
# 222 "data/maps/Route128/scripts.pory"
	delay_16
# 223 "data/maps/Route128/scripts.pory"
# 121 "data/maps/Route128/scripts.pory"
# 224 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 225 "data/maps/Route128/scripts.pory"
# 122 "data/maps/Route128/scripts.pory"
# 226 "data/maps/Route128/scripts.pory"
	step_end
# 227 "data/maps/Route128/scripts.pory"

# 228 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieBackUp::
# 229 "data/maps/Route128/scripts.pory"
# 126 "data/maps/Route128/scripts.pory"
# 230 "data/maps/Route128/scripts.pory"
	lock_facing_direction
# 231 "data/maps/Route128/scripts.pory"
# 127 "data/maps/Route128/scripts.pory"
# 232 "data/maps/Route128/scripts.pory"
	walk_slow_up
# 233 "data/maps/Route128/scripts.pory"
# 128 "data/maps/Route128/scripts.pory"
# 234 "data/maps/Route128/scripts.pory"
	delay_16
# 235 "data/maps/Route128/scripts.pory"
# 129 "data/maps/Route128/scripts.pory"
# 236 "data/maps/Route128/scripts.pory"
	unlock_facing_direction
# 237 "data/maps/Route128/scripts.pory"
# 130 "data/maps/Route128/scripts.pory"
# 238 "data/maps/Route128/scripts.pory"
	step_end
# 239 "data/maps/Route128/scripts.pory"
	return
# 240 "data/maps/Route128/scripts.pory"

# 241 "data/maps/Route128/scripts.pory"

# 242 "data/maps/Route128/scripts.pory"
# 133 "data/maps/Route128/scripts.pory"
# 243 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieRunLeft:
# 244 "data/maps/Route128/scripts.pory"
# 134 "data/maps/Route128/scripts.pory"
# 245 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 246 "data/maps/Route128/scripts.pory"
# 135 "data/maps/Route128/scripts.pory"
# 247 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 248 "data/maps/Route128/scripts.pory"
# 136 "data/maps/Route128/scripts.pory"
# 249 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 250 "data/maps/Route128/scripts.pory"
# 137 "data/maps/Route128/scripts.pory"
# 251 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 252 "data/maps/Route128/scripts.pory"
# 138 "data/maps/Route128/scripts.pory"
# 253 "data/maps/Route128/scripts.pory"
	step_end
# 254 "data/maps/Route128/scripts.pory"

# 255 "data/maps/Route128/scripts.pory"
# 141 "data/maps/Route128/scripts.pory"
# 256 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieExit:
# 257 "data/maps/Route128/scripts.pory"
# 142 "data/maps/Route128/scripts.pory"
# 258 "data/maps/Route128/scripts.pory"
	delay_16
# 259 "data/maps/Route128/scripts.pory"
# 143 "data/maps/Route128/scripts.pory"
# 260 "data/maps/Route128/scripts.pory"
	delay_16
# 261 "data/maps/Route128/scripts.pory"
# 144 "data/maps/Route128/scripts.pory"
# 262 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 263 "data/maps/Route128/scripts.pory"
# 145 "data/maps/Route128/scripts.pory"
# 264 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 265 "data/maps/Route128/scripts.pory"
# 146 "data/maps/Route128/scripts.pory"
# 266 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 267 "data/maps/Route128/scripts.pory"
# 147 "data/maps/Route128/scripts.pory"
# 268 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 269 "data/maps/Route128/scripts.pory"
# 148 "data/maps/Route128/scripts.pory"
# 270 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 271 "data/maps/Route128/scripts.pory"
# 149 "data/maps/Route128/scripts.pory"
# 272 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 273 "data/maps/Route128/scripts.pory"
# 150 "data/maps/Route128/scripts.pory"
# 274 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 275 "data/maps/Route128/scripts.pory"
# 151 "data/maps/Route128/scripts.pory"
# 276 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 277 "data/maps/Route128/scripts.pory"
# 152 "data/maps/Route128/scripts.pory"
# 278 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 279 "data/maps/Route128/scripts.pory"
# 153 "data/maps/Route128/scripts.pory"
# 280 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 281 "data/maps/Route128/scripts.pory"
# 154 "data/maps/Route128/scripts.pory"
# 282 "data/maps/Route128/scripts.pory"
	step_end
# 283 "data/maps/Route128/scripts.pory"

# 284 "data/maps/Route128/scripts.pory"
# 157 "data/maps/Route128/scripts.pory"
# 285 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieWalkLeft:
# 286 "data/maps/Route128/scripts.pory"
# 158 "data/maps/Route128/scripts.pory"
# 287 "data/maps/Route128/scripts.pory"
	walk_left
# 288 "data/maps/Route128/scripts.pory"
# 159 "data/maps/Route128/scripts.pory"
# 289 "data/maps/Route128/scripts.pory"
	walk_left
# 290 "data/maps/Route128/scripts.pory"
# 160 "data/maps/Route128/scripts.pory"
# 291 "data/maps/Route128/scripts.pory"
	delay_8
# 292 "data/maps/Route128/scripts.pory"
# 161 "data/maps/Route128/scripts.pory"
# 293 "data/maps/Route128/scripts.pory"
	delay_4
# 294 "data/maps/Route128/scripts.pory"
# 162 "data/maps/Route128/scripts.pory"
# 295 "data/maps/Route128/scripts.pory"
	step_end
# 296 "data/maps/Route128/scripts.pory"

# 297 "data/maps/Route128/scripts.pory"
# 165 "data/maps/Route128/scripts.pory"
# 298 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachArchie:
# 299 "data/maps/Route128/scripts.pory"
# 166 "data/maps/Route128/scripts.pory"
# 300 "data/maps/Route128/scripts.pory"
	walk_left
# 301 "data/maps/Route128/scripts.pory"
# 167 "data/maps/Route128/scripts.pory"
# 302 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 303 "data/maps/Route128/scripts.pory"
# 168 "data/maps/Route128/scripts.pory"
# 304 "data/maps/Route128/scripts.pory"
	step_end
# 305 "data/maps/Route128/scripts.pory"

# 306 "data/maps/Route128/scripts.pory"
# 171 "data/maps/Route128/scripts.pory"
# 307 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieExit:
# 308 "data/maps/Route128/scripts.pory"
# 172 "data/maps/Route128/scripts.pory"
# 309 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 310 "data/maps/Route128/scripts.pory"
# 173 "data/maps/Route128/scripts.pory"
# 311 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 312 "data/maps/Route128/scripts.pory"
# 174 "data/maps/Route128/scripts.pory"
# 313 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 314 "data/maps/Route128/scripts.pory"
# 175 "data/maps/Route128/scripts.pory"
# 315 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 316 "data/maps/Route128/scripts.pory"
# 176 "data/maps/Route128/scripts.pory"
# 317 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 318 "data/maps/Route128/scripts.pory"
# 177 "data/maps/Route128/scripts.pory"
# 319 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 320 "data/maps/Route128/scripts.pory"
# 178 "data/maps/Route128/scripts.pory"
# 321 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 322 "data/maps/Route128/scripts.pory"
# 179 "data/maps/Route128/scripts.pory"
# 323 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 324 "data/maps/Route128/scripts.pory"
# 180 "data/maps/Route128/scripts.pory"
# 325 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 326 "data/maps/Route128/scripts.pory"
# 181 "data/maps/Route128/scripts.pory"
# 327 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 328 "data/maps/Route128/scripts.pory"
# 182 "data/maps/Route128/scripts.pory"
# 329 "data/maps/Route128/scripts.pory"
	step_end
# 330 "data/maps/Route128/scripts.pory"

# 331 "data/maps/Route128/scripts.pory"
# 185 "data/maps/Route128/scripts.pory"
# 332 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachPlayer:
# 333 "data/maps/Route128/scripts.pory"
# 186 "data/maps/Route128/scripts.pory"
# 334 "data/maps/Route128/scripts.pory"
	walk_right
# 335 "data/maps/Route128/scripts.pory"
# 187 "data/maps/Route128/scripts.pory"
# 336 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 337 "data/maps/Route128/scripts.pory"
# 188 "data/maps/Route128/scripts.pory"
# 338 "data/maps/Route128/scripts.pory"
	step_end
# 339 "data/maps/Route128/scripts.pory"

# 340 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah::
# 341 "data/maps/Route128/scripts.pory"
# 192 "data/maps/Route128/scripts.pory"
# 342 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat, Route128_EventScript_RegisterIsaiah
# 343 "data/maps/Route128/scripts.pory"
# 193 "data/maps/Route128/scripts.pory"
# 344 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 345 "data/maps/Route128/scripts.pory"
# 194 "data/maps/Route128/scripts.pory"
# 346 "data/maps/Route128/scripts.pory"
	compare VAR_RESULT, TRUE
# 347 "data/maps/Route128/scripts.pory"
	goto_if_eq Route128_EventScript_Isaiah_2
# 348 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah_1:
# 349 "data/maps/Route128/scripts.pory"
# 197 "data/maps/Route128/scripts.pory"
# 350 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
# 351 "data/maps/Route128/scripts.pory"
# 198 "data/maps/Route128/scripts.pory"
# 352 "data/maps/Route128/scripts.pory"
	release
# 353 "data/maps/Route128/scripts.pory"
	end
# 354 "data/maps/Route128/scripts.pory"

# 355 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah_2:
# 356 "data/maps/Route128/scripts.pory"
# 195 "data/maps/Route128/scripts.pory"
# 357 "data/maps/Route128/scripts.pory"
	goto Route128_EventScript_RematchIsaiah
# 358 "data/maps/Route128/scripts.pory"
	goto Route128_EventScript_Isaiah_1
# 359 "data/maps/Route128/scripts.pory"

# 360 "data/maps/Route128/scripts.pory"

# 361 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterIsaiah::
# 362 "data/maps/Route128/scripts.pory"
# 203 "data/maps/Route128/scripts.pory"
# 363 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 364 "data/maps/Route128/scripts.pory"
# 204 "data/maps/Route128/scripts.pory"
# 365 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 366 "data/maps/Route128/scripts.pory"
# 205 "data/maps/Route128/scripts.pory"
# 367 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 368 "data/maps/Route128/scripts.pory"
# 206 "data/maps/Route128/scripts.pory"
# 369 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
# 370 "data/maps/Route128/scripts.pory"
# 207 "data/maps/Route128/scripts.pory"
# 371 "data/maps/Route128/scripts.pory"
	release
# 372 "data/maps/Route128/scripts.pory"
	end
# 373 "data/maps/Route128/scripts.pory"

# 374 "data/maps/Route128/scripts.pory"

# 375 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchIsaiah::
# 376 "data/maps/Route128/scripts.pory"
# 212 "data/maps/Route128/scripts.pory"
# 377 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 378 "data/maps/Route128/scripts.pory"
# 213 "data/maps/Route128/scripts.pory"
# 379 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
# 380 "data/maps/Route128/scripts.pory"
	end
# 381 "data/maps/Route128/scripts.pory"

# 382 "data/maps/Route128/scripts.pory"

# 383 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn::
# 384 "data/maps/Route128/scripts.pory"
# 218 "data/maps/Route128/scripts.pory"
# 385 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat, Route128_EventScript_RegisterKatelyn
# 386 "data/maps/Route128/scripts.pory"
# 219 "data/maps/Route128/scripts.pory"
# 387 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 388 "data/maps/Route128/scripts.pory"
# 220 "data/maps/Route128/scripts.pory"
# 389 "data/maps/Route128/scripts.pory"
	compare VAR_RESULT, TRUE
# 390 "data/maps/Route128/scripts.pory"
	goto_if_eq Route128_EventScript_Katelyn_2
# 391 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn_1:
# 392 "data/maps/Route128/scripts.pory"
# 223 "data/maps/Route128/scripts.pory"
# 393 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
# 394 "data/maps/Route128/scripts.pory"
# 224 "data/maps/Route128/scripts.pory"
# 395 "data/maps/Route128/scripts.pory"
	release
# 396 "data/maps/Route128/scripts.pory"
	end
# 397 "data/maps/Route128/scripts.pory"

# 398 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn_2:
# 399 "data/maps/Route128/scripts.pory"
# 221 "data/maps/Route128/scripts.pory"
# 400 "data/maps/Route128/scripts.pory"
	goto Route128_EventScript_RematchKatelyn
# 401 "data/maps/Route128/scripts.pory"
	goto Route128_EventScript_Katelyn_1
# 402 "data/maps/Route128/scripts.pory"

# 403 "data/maps/Route128/scripts.pory"

# 404 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterKatelyn::
# 405 "data/maps/Route128/scripts.pory"
# 229 "data/maps/Route128/scripts.pory"
# 406 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 407 "data/maps/Route128/scripts.pory"
# 230 "data/maps/Route128/scripts.pory"
# 408 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 409 "data/maps/Route128/scripts.pory"
# 231 "data/maps/Route128/scripts.pory"
# 410 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 411 "data/maps/Route128/scripts.pory"
# 232 "data/maps/Route128/scripts.pory"
# 412 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
# 413 "data/maps/Route128/scripts.pory"
# 233 "data/maps/Route128/scripts.pory"
# 414 "data/maps/Route128/scripts.pory"
	release
# 415 "data/maps/Route128/scripts.pory"
	end
# 416 "data/maps/Route128/scripts.pory"

# 417 "data/maps/Route128/scripts.pory"

# 418 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchKatelyn::
# 419 "data/maps/Route128/scripts.pory"
# 238 "data/maps/Route128/scripts.pory"
# 420 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 421 "data/maps/Route128/scripts.pory"
# 239 "data/maps/Route128/scripts.pory"
# 422 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
# 423 "data/maps/Route128/scripts.pory"
	end
# 424 "data/maps/Route128/scripts.pory"

# 425 "data/maps/Route128/scripts.pory"

# 426 "data/maps/Route128/scripts.pory"
Route128_EventScript_Alexa::
# 427 "data/maps/Route128/scripts.pory"
# 244 "data/maps/Route128/scripts.pory"
# 428 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 429 "data/maps/Route128/scripts.pory"
# 245 "data/maps/Route128/scripts.pory"
# 430 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 431 "data/maps/Route128/scripts.pory"
	end
# 432 "data/maps/Route128/scripts.pory"

# 433 "data/maps/Route128/scripts.pory"

# 434 "data/maps/Route128/scripts.pory"
Route128_EventScript_Ruben::
# 435 "data/maps/Route128/scripts.pory"
# 250 "data/maps/Route128/scripts.pory"
# 436 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 437 "data/maps/Route128/scripts.pory"
# 251 "data/maps/Route128/scripts.pory"
# 438 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
# 439 "data/maps/Route128/scripts.pory"
	end
# 440 "data/maps/Route128/scripts.pory"

# 441 "data/maps/Route128/scripts.pory"

# 442 "data/maps/Route128/scripts.pory"
Route128_EventScript_Wayne::
# 443 "data/maps/Route128/scripts.pory"
# 256 "data/maps/Route128/scripts.pory"
# 444 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 445 "data/maps/Route128/scripts.pory"
# 257 "data/maps/Route128/scripts.pory"
# 446 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
# 447 "data/maps/Route128/scripts.pory"
	end
# 448 "data/maps/Route128/scripts.pory"

# 449 "data/maps/Route128/scripts.pory"

# 450 "data/maps/Route128/scripts.pory"
Route128_EventScript_Harrison::
# 451 "data/maps/Route128/scripts.pory"
# 262 "data/maps/Route128/scripts.pory"
# 452 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
# 453 "data/maps/Route128/scripts.pory"
# 263 "data/maps/Route128/scripts.pory"
# 454 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
# 455 "data/maps/Route128/scripts.pory"
	end
# 456 "data/maps/Route128/scripts.pory"

# 457 "data/maps/Route128/scripts.pory"

# 458 "data/maps/Route128/scripts.pory"
Route128_EventScript_Carlee::
# 459 "data/maps/Route128/scripts.pory"
# 268 "data/maps/Route128/scripts.pory"
# 460 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
# 461 "data/maps/Route128/scripts.pory"
# 269 "data/maps/Route128/scripts.pory"
# 462 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
# 463 "data/maps/Route128/scripts.pory"
	end
# 464 "data/maps/Route128/scripts.pory"

# 465 "data/maps/Route128/scripts.pory"

# 466 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieWhatHappened::
# 467 "data/maps/Route128/scripts.pory"
# 273 "data/maps/Route128/scripts.pory"
# 468 "data/maps/Route128/scripts.pory"
	.string "ARCHIE: What happened…\n"
# 469 "data/maps/Route128/scripts.pory"
	.string "What is this wretched scene…\p"
# 470 "data/maps/Route128/scripts.pory"
	.string "Did I…make a horrible mistake?$"
# 471 "data/maps/Route128/scripts.pory"

# 472 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieIOnlyWanted::
# 473 "data/maps/Route128/scripts.pory"
# 279 "data/maps/Route128/scripts.pory"
# 474 "data/maps/Route128/scripts.pory"
	.string "I…\n"
# 475 "data/maps/Route128/scripts.pory"
	.string "I only wanted…$"
# 476 "data/maps/Route128/scripts.pory"

# 477 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieDoYouUnderstandNow::
# 478 "data/maps/Route128/scripts.pory"
# 284 "data/maps/Route128/scripts.pory"
# 479 "data/maps/Route128/scripts.pory"
	.string "MAXIE: Do you understand now,\n"
# 480 "data/maps/Route128/scripts.pory"
	.string "ARCHIE?\p"
# 481 "data/maps/Route128/scripts.pory"
	.string "Do you finally see how disastrous\n"
# 482 "data/maps/Route128/scripts.pory"
	.string "your dream turned out to be?\p"
# 483 "data/maps/Route128/scripts.pory"
	.string "We have to hurry! We have to do\n"
# 484 "data/maps/Route128/scripts.pory"
	.string "something before the situation goes\l"
# 485 "data/maps/Route128/scripts.pory"
	.string "completely out of control!$"
# 486 "data/maps/Route128/scripts.pory"

# 487 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieResposibilityFallsToArchieAndMe::
# 488 "data/maps/Route128/scripts.pory"
# 294 "data/maps/Route128/scripts.pory"
# 489 "data/maps/Route128/scripts.pory"
	.string "MAXIE: {PLAYER}, don't say anything.\p"
# 490 "data/maps/Route128/scripts.pory"
	.string "I know that I have no right to be\n"
# 491 "data/maps/Route128/scripts.pory"
	.string "critical of ARCHIE…\p"
# 492 "data/maps/Route128/scripts.pory"
	.string "But the way things are now, I doubt\n"
# 493 "data/maps/Route128/scripts.pory"
	.string "that we humans will be capable of\l"
# 494 "data/maps/Route128/scripts.pory"
	.string "doing anything about it.\p"
# 495 "data/maps/Route128/scripts.pory"
	.string "But neither can we stand by and\n"
# 496 "data/maps/Route128/scripts.pory"
	.string "just watch helplessly.\p"
# 497 "data/maps/Route128/scripts.pory"
	.string "The responsibility for putting an end\n"
# 498 "data/maps/Route128/scripts.pory"
	.string "to this falls to ARCHIE and me…$"
# 499 "data/maps/Route128/scripts.pory"

# 500 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieThisDefiesBelief::
# 501 "data/maps/Route128/scripts.pory"
# 307 "data/maps/Route128/scripts.pory"
# 502 "data/maps/Route128/scripts.pory"
	.string "MAXIE: This defies belief…\p"
# 503 "data/maps/Route128/scripts.pory"
	.string "Those super-ancient POKéMON…\p"
# 504 "data/maps/Route128/scripts.pory"
	.string "Their power is unbelievable.\n"
# 505 "data/maps/Route128/scripts.pory"
	.string "They've upset the balance of nature…$"
# 506 "data/maps/Route128/scripts.pory"

# 507 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWhatIsHappening::
# 508 "data/maps/Route128/scripts.pory"
# 314 "data/maps/Route128/scripts.pory"
# 509 "data/maps/Route128/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 510 "data/maps/Route128/scripts.pory"
	.string "What is happening?$"
# 511 "data/maps/Route128/scripts.pory"

# 512 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWholeWorldWillDrown::
# 513 "data/maps/Route128/scripts.pory"
# 319 "data/maps/Route128/scripts.pory"
# 514 "data/maps/Route128/scripts.pory"
	.string "This is terrible…\p"
# 515 "data/maps/Route128/scripts.pory"
	.string "After the scorching heat wave ended,\n"
# 516 "data/maps/Route128/scripts.pory"
	.string "this deluge began.\p"
# 517 "data/maps/Route128/scripts.pory"
	.string "If this doesn't stop, all of HOENN…\n"
# 518 "data/maps/Route128/scripts.pory"
	.string "No, the whole world will drown.\p"
# 519 "data/maps/Route128/scripts.pory"
	.string "This huge rain cloud is spreading\n"
# 520 "data/maps/Route128/scripts.pory"
	.string "from above SOOTOPOLIS…\p"
# 521 "data/maps/Route128/scripts.pory"
	.string "What in the world is taking place there?\p"
# 522 "data/maps/Route128/scripts.pory"
	.string "There's no point arguing here…\n"
# 523 "data/maps/Route128/scripts.pory"
	.string "SOOTOPOLIS might provide answers…$"
# 524 "data/maps/Route128/scripts.pory"

# 525 "data/maps/Route128/scripts.pory"
Route128_Text_StevenImGoingToSootopolis::
# 526 "data/maps/Route128/scripts.pory"
# 332 "data/maps/Route128/scripts.pory"
# 527 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 528 "data/maps/Route128/scripts.pory"
	.string "I don't know what you intend to do,\l"
# 529 "data/maps/Route128/scripts.pory"
	.string "but don't do anything reckless.\p"
# 530 "data/maps/Route128/scripts.pory"
	.string "Okay.\n"
# 531 "data/maps/Route128/scripts.pory"
	.string "I'm going to SOOTOPOLIS.$"
