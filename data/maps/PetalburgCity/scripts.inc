PetalburgCity_MapScripts::
# 2 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 3 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 5 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
	.2byte 0


PetalburgCity_OnTransition::
# 10 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 11 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 0
	goto_if_eq PetalburgCity_OnTransition_2
PetalburgCity_OnTransition_1:
# 14 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 2
	goto_if_eq PetalburgCity_OnTransition_5
PetalburgCity_OnTransition_4:
# 17 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 4
	goto_if_eq PetalburgCity_OnTransition_8
PetalburgCity_OnTransition_7:
# 20 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 8
	goto_if_eq PetalburgCity_OnTransition_11
PetalburgCity_OnTransition_10:
	end

PetalburgCity_OnTransition_2:
# 12 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_MoveGymBoyToWestEntrance
	goto PetalburgCity_OnTransition_1

PetalburgCity_OnTransition_5:
# 15 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_DisableMapNameAndMusic
	goto PetalburgCity_OnTransition_4

PetalburgCity_OnTransition_8:
# 18 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_DisableMapNameAndMusic
	goto PetalburgCity_OnTransition_7

PetalburgCity_OnTransition_11:
# 21 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_SetGymDoorsUnlocked
	goto PetalburgCity_OnTransition_10


PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 27 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
	return


PetalburgCity_EventScript_DisableMapNameAndMusic::
# 32 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 33 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
	return


PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 38 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
	return


PetalburgCity_EventScript_WallyTutorial::
# 43 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 44 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 45 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 46 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 47 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 48 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 50 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 51 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 52 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 54 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 55 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 56 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 57 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 58 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 59 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 60 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 61 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 62 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 63 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 64 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 65 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


PetalburgCity_EventScript_WalkToWallyHouse::
# 70 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 71 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 72 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 73 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 76 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 77 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 78 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 79 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 80 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 83 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 84 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 85 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 86 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 87 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 88 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 89 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 90 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 91 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


PetalburgCity_EventScript_Boy::
# 96 "data/maps/PetalburgCity/scripts.pory"
	lock
# 97 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 98 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 100 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 101 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/PetalburgCity/scripts.pory"
	release
	end


PetalburgCity_EventScript_WallysMom::
# 107 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	end


# 111 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 112 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 129 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 132 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 138 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 139 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 156 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 159 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 161 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 162 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 165 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 166 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 201 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 202 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 233 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 235 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 236 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 237 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 238 "data/maps/PetalburgCity/scripts.pory"
	step_end

PetalburgCity_EventScript_GymSign::
# 242 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_CitySign::
# 247 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_Gentleman::
# 252 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end


PetalburgCity_EventScript_WallyHouseSign::
# 257 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_ShowGymToPlayer0::
# 262 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 263 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 264 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer1::
# 269 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 270 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 271 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer2::
# 276 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 277 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 278 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer3::
# 283 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 284 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 285 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer::
# 290 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 291 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 293 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 294 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 295 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 297 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_2
PetalburgCity_EventScript_ShowGymToPlayer_1:
# 301 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_5
PetalburgCity_EventScript_ShowGymToPlayer_4:
# 304 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_8
PetalburgCity_EventScript_ShowGymToPlayer_7:
# 307 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_11
PetalburgCity_EventScript_ShowGymToPlayer_10:
# 310 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 311 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 312 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_14
PetalburgCity_EventScript_ShowGymToPlayer_13:
# 315 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_17
PetalburgCity_EventScript_ShowGymToPlayer_16:
# 318 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_20
PetalburgCity_EventScript_ShowGymToPlayer_19:
# 321 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_23
PetalburgCity_EventScript_ShowGymToPlayer_22:
# 324 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 325 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 326 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 327 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 329 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 330 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 331 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 332 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 333 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_ShowGymToPlayer_2:
# 299 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer0
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_5:
# 302 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer1
	goto PetalburgCity_EventScript_ShowGymToPlayer_4

PetalburgCity_EventScript_ShowGymToPlayer_8:
# 305 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer2
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_11:
# 308 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer3
	goto PetalburgCity_EventScript_ShowGymToPlayer_10

PetalburgCity_EventScript_ShowGymToPlayer_14:
# 313 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym0
	goto PetalburgCity_EventScript_ShowGymToPlayer_13

PetalburgCity_EventScript_ShowGymToPlayer_17:
# 316 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym1
	goto PetalburgCity_EventScript_ShowGymToPlayer_16

PetalburgCity_EventScript_ShowGymToPlayer_20:
# 319 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym2
	goto PetalburgCity_EventScript_ShowGymToPlayer_19

PetalburgCity_EventScript_ShowGymToPlayer_23:
# 322 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym3
	goto PetalburgCity_EventScript_ShowGymToPlayer_22


PetalburgCity_EventScript_BoyApproachPlayer0::
# 338 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 339 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 341 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_BoyApproachPlayer1::
# 346 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 347 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_BoyApproachPlayer2::
# 352 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 353 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 354 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 355 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_BoyApproachPlayer3::
# 360 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 361 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 362 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 363 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_LeadPlayerToGym0::
# 368 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 369 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 370 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_LeadPlayerToGym1::
# 375 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 376 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 377 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_LeadPlayerToGym2::
# 382 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 383 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 384 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_LeadPlayerToGym3::
# 389 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 390 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 391 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


# 395 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48:
# 396 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 397 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 398 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 399 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 402 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 407 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 410 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 416 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 421 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 424 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 430 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 433 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 444 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 447 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 461 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 464 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 475 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 478 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 490 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 493 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 506 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 509 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 511 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 512 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 513 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 514 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 515 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 516 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 517 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 518 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 519 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 522 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 523 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 524 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 525 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 526 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 527 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 528 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 529 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 530 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 531 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 532 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 533 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 534 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 535 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 538 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 539 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 540 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 541 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 542 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 543 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 544 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 545 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 546 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 547 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 548 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 551 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 552 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 553 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 554 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 555 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 556 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 557 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 558 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 559 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 560 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 561 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 562 "data/maps/PetalburgCity/scripts.pory"
	step_end

PetalburgCity_EventScript_Scott0::
# 566 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 567 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 568 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 569 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 570 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott1::
# 575 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 576 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 577 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 578 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 579 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott2::
# 584 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 585 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 586 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 587 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 588 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott3::
# 593 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 594 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 595 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 596 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 597 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott::
# 602 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 603 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 604 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 605 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 606 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 607 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 608 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 609 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 610 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 611 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 612 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 613 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 614 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 615 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 616 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 617 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 618 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 619 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 620 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 621 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 622 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 623 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 624 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 625 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 626 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq PetalburgCity_EventScript_Scott_2
PetalburgCity_EventScript_Scott_1:
# 629 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq PetalburgCity_EventScript_Scott_5
PetalburgCity_EventScript_Scott_4:
# 632 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq PetalburgCity_EventScript_Scott_8
PetalburgCity_EventScript_Scott_7:
# 635 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq PetalburgCity_EventScript_Scott_11
PetalburgCity_EventScript_Scott_10:
# 638 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 639 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 640 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_Scott_2:
# 627 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit0
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_5:
# 630 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit1
	goto PetalburgCity_EventScript_Scott_4

PetalburgCity_EventScript_Scott_8:
# 633 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit2
	goto PetalburgCity_EventScript_Scott_7

PetalburgCity_EventScript_Scott_11:
# 636 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit3
	goto PetalburgCity_EventScript_Scott_10


PetalburgCity_EventScript_ScottExit0::
# 645 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 646 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 647 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_ScottExit1::
# 652 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 653 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 654 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_ScottExit2::
# 659 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 660 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 661 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_ScottExit3::
# 666 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 667 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 668 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


# 672 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 680 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 688 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 698 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 700 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 701 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 702 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 705 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 706 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 707 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 708 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 709 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 710 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 711 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 712 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 715 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 716 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 717 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 718 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 719 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 720 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 721 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 722 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 723 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 724 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 725 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 726 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 727 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 728 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 731 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 732 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 733 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 734 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 735 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 736 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 737 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 740 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 741 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 742 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 743 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 744 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 745 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 746 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 747 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 748 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 749 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 750 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 751 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 752 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 753 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 756 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 757 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 758 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 759 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 760 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 761 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 762 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 765 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 766 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 767 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 768 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 769 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 770 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 771 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 772 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 773 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 774 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 775 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 776 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 777 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 778 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 781 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 782 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 783 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 784 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 785 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 786 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 787 "data/maps/PetalburgCity/scripts.pory"
	step_end

PetalburgCity_EventScript_GymBoy::
# 791 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
	end


PetalburgCity_Text_WhereIsWally::
# 795 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
	.string "We have to leave for VERDANTURF TOWN\n"
	.string "very soon…$"

PetalburgCity_Text_AreYouRookieTrainer::
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
	.string "A rookie TRAINER?\p"
	.string "Do you know what POKéMON TRAINERS\n"
	.string "do when they reach a new town?\p"
	.string "They first check what kind of GYM\n"
	.string "is in the town.$"

PetalburgCity_Text_ThisIsPetalburgGym::
# 810 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"

PetalburgCity_Text_ThisIsGymSign::
# 814 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
	.string "whenever you're looking for a GYM.$"

PetalburgCity_Text_WaterReflection::
# 819 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "What do you see reflected in your face?$"

PetalburgCity_Text_FullPartyExplanation::
# 827 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
	.string "If you catch another one…\p"
	.string "It is automatically sent to a STORAGE\n"
	.string "BOX over a PC connection.$"

PetalburgCity_Text_GymSign::
# 834 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
	.string "LEADER: NORMAN\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign::
# 840 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_WallyHouseSign::
# 845 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"

PetalburgCity_Text_AreYouATrainer::
# 849 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a POKéMON TRAINER?$"

PetalburgCity_Text_WellMaybeNot::
# 855 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie TRAINER,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers::
# 863 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
	.string "talented TRAINERS.\p"
	.string "I'm sorry to have taken your time.$"
