# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 3 "data/maps/PetalburgCity/scripts.pory"
# 2 "data/maps/PetalburgCity/scripts.pory"
# 4 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 5 "data/maps/PetalburgCity/scripts.pory"
# 3 "data/maps/PetalburgCity/scripts.pory"
# 6 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity/scripts.pory"

# 9 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/PetalburgCity/scripts.pory"
# 4 "data/maps/PetalburgCity/scripts.pory"
# 11 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 12 "data/maps/PetalburgCity/scripts.pory"
# 5 "data/maps/PetalburgCity/scripts.pory"
# 13 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 14 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 15 "data/maps/PetalburgCity/scripts.pory"

# 16 "data/maps/PetalburgCity/scripts.pory"

# 17 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition::
# 18 "data/maps/PetalburgCity/scripts.pory"
# 10 "data/maps/PetalburgCity/scripts.pory"
# 19 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 20 "data/maps/PetalburgCity/scripts.pory"
# 11 "data/maps/PetalburgCity/scripts.pory"
# 21 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 0
# 22 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_OnTransition_2
# 23 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition_1:
# 24 "data/maps/PetalburgCity/scripts.pory"
# 14 "data/maps/PetalburgCity/scripts.pory"
# 25 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 2
# 26 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_OnTransition_5
# 27 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition_4:
# 28 "data/maps/PetalburgCity/scripts.pory"
# 17 "data/maps/PetalburgCity/scripts.pory"
# 29 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 4
# 30 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_OnTransition_8
# 31 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition_7:
# 32 "data/maps/PetalburgCity/scripts.pory"
# 20 "data/maps/PetalburgCity/scripts.pory"
# 33 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 8
# 34 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_OnTransition_11
# 35 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition_10:
# 36 "data/maps/PetalburgCity/scripts.pory"
	end
# 37 "data/maps/PetalburgCity/scripts.pory"

# 38 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition_2:
# 39 "data/maps/PetalburgCity/scripts.pory"
# 12 "data/maps/PetalburgCity/scripts.pory"
# 40 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 41 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_OnTransition_1
# 42 "data/maps/PetalburgCity/scripts.pory"

# 43 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition_5:
# 44 "data/maps/PetalburgCity/scripts.pory"
# 15 "data/maps/PetalburgCity/scripts.pory"
# 45 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_DisableMapNameAndMusic
# 46 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_OnTransition_4
# 47 "data/maps/PetalburgCity/scripts.pory"

# 48 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition_8:
# 49 "data/maps/PetalburgCity/scripts.pory"
# 18 "data/maps/PetalburgCity/scripts.pory"
# 50 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_DisableMapNameAndMusic
# 51 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_OnTransition_7
# 52 "data/maps/PetalburgCity/scripts.pory"

# 53 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition_11:
# 54 "data/maps/PetalburgCity/scripts.pory"
# 21 "data/maps/PetalburgCity/scripts.pory"
# 55 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_SetGymDoorsUnlocked
# 56 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_OnTransition_10
# 57 "data/maps/PetalburgCity/scripts.pory"

# 58 "data/maps/PetalburgCity/scripts.pory"

# 59 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 60 "data/maps/PetalburgCity/scripts.pory"
# 27 "data/maps/PetalburgCity/scripts.pory"
# 61 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 62 "data/maps/PetalburgCity/scripts.pory"
	return
# 63 "data/maps/PetalburgCity/scripts.pory"

# 64 "data/maps/PetalburgCity/scripts.pory"

# 65 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 66 "data/maps/PetalburgCity/scripts.pory"
# 32 "data/maps/PetalburgCity/scripts.pory"
# 67 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 68 "data/maps/PetalburgCity/scripts.pory"
# 33 "data/maps/PetalburgCity/scripts.pory"
# 69 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 70 "data/maps/PetalburgCity/scripts.pory"
	return
# 71 "data/maps/PetalburgCity/scripts.pory"

# 72 "data/maps/PetalburgCity/scripts.pory"

# 73 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 74 "data/maps/PetalburgCity/scripts.pory"
# 38 "data/maps/PetalburgCity/scripts.pory"
# 75 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 76 "data/maps/PetalburgCity/scripts.pory"
	return
# 77 "data/maps/PetalburgCity/scripts.pory"

# 78 "data/maps/PetalburgCity/scripts.pory"

# 79 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 80 "data/maps/PetalburgCity/scripts.pory"
# 43 "data/maps/PetalburgCity/scripts.pory"
# 81 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 82 "data/maps/PetalburgCity/scripts.pory"
# 44 "data/maps/PetalburgCity/scripts.pory"
# 83 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 84 "data/maps/PetalburgCity/scripts.pory"
# 45 "data/maps/PetalburgCity/scripts.pory"
# 85 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 86 "data/maps/PetalburgCity/scripts.pory"
# 46 "data/maps/PetalburgCity/scripts.pory"
# 87 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 88 "data/maps/PetalburgCity/scripts.pory"
# 47 "data/maps/PetalburgCity/scripts.pory"
# 89 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 90 "data/maps/PetalburgCity/scripts.pory"
# 48 "data/maps/PetalburgCity/scripts.pory"
# 91 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgCity/scripts.pory"
# 49 "data/maps/PetalburgCity/scripts.pory"
# 93 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 94 "data/maps/PetalburgCity/scripts.pory"
# 50 "data/maps/PetalburgCity/scripts.pory"
# 95 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 96 "data/maps/PetalburgCity/scripts.pory"
# 51 "data/maps/PetalburgCity/scripts.pory"
# 97 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 98 "data/maps/PetalburgCity/scripts.pory"
# 52 "data/maps/PetalburgCity/scripts.pory"
# 99 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 100 "data/maps/PetalburgCity/scripts.pory"
# 53 "data/maps/PetalburgCity/scripts.pory"
# 101 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 102 "data/maps/PetalburgCity/scripts.pory"
# 54 "data/maps/PetalburgCity/scripts.pory"
# 103 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 104 "data/maps/PetalburgCity/scripts.pory"
# 55 "data/maps/PetalburgCity/scripts.pory"
# 105 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 106 "data/maps/PetalburgCity/scripts.pory"
# 56 "data/maps/PetalburgCity/scripts.pory"
# 107 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 108 "data/maps/PetalburgCity/scripts.pory"
# 57 "data/maps/PetalburgCity/scripts.pory"
# 109 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 110 "data/maps/PetalburgCity/scripts.pory"
# 58 "data/maps/PetalburgCity/scripts.pory"
# 111 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 112 "data/maps/PetalburgCity/scripts.pory"
# 59 "data/maps/PetalburgCity/scripts.pory"
# 113 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 114 "data/maps/PetalburgCity/scripts.pory"
# 60 "data/maps/PetalburgCity/scripts.pory"
# 115 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 116 "data/maps/PetalburgCity/scripts.pory"
# 61 "data/maps/PetalburgCity/scripts.pory"
# 117 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 118 "data/maps/PetalburgCity/scripts.pory"
# 62 "data/maps/PetalburgCity/scripts.pory"
# 119 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 120 "data/maps/PetalburgCity/scripts.pory"
# 63 "data/maps/PetalburgCity/scripts.pory"
# 121 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 122 "data/maps/PetalburgCity/scripts.pory"
# 64 "data/maps/PetalburgCity/scripts.pory"
# 123 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 124 "data/maps/PetalburgCity/scripts.pory"
# 65 "data/maps/PetalburgCity/scripts.pory"
# 125 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 126 "data/maps/PetalburgCity/scripts.pory"
	end
# 127 "data/maps/PetalburgCity/scripts.pory"

# 128 "data/maps/PetalburgCity/scripts.pory"

# 129 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 130 "data/maps/PetalburgCity/scripts.pory"
# 70 "data/maps/PetalburgCity/scripts.pory"
# 131 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 132 "data/maps/PetalburgCity/scripts.pory"
# 71 "data/maps/PetalburgCity/scripts.pory"
# 133 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 134 "data/maps/PetalburgCity/scripts.pory"
# 72 "data/maps/PetalburgCity/scripts.pory"
# 135 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 136 "data/maps/PetalburgCity/scripts.pory"
# 73 "data/maps/PetalburgCity/scripts.pory"
# 137 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 138 "data/maps/PetalburgCity/scripts.pory"
# 74 "data/maps/PetalburgCity/scripts.pory"
# 139 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 140 "data/maps/PetalburgCity/scripts.pory"
# 75 "data/maps/PetalburgCity/scripts.pory"
# 141 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 142 "data/maps/PetalburgCity/scripts.pory"
# 76 "data/maps/PetalburgCity/scripts.pory"
# 143 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 144 "data/maps/PetalburgCity/scripts.pory"
# 77 "data/maps/PetalburgCity/scripts.pory"
# 145 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 146 "data/maps/PetalburgCity/scripts.pory"
# 78 "data/maps/PetalburgCity/scripts.pory"
# 147 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 148 "data/maps/PetalburgCity/scripts.pory"
# 79 "data/maps/PetalburgCity/scripts.pory"
# 149 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 150 "data/maps/PetalburgCity/scripts.pory"
# 80 "data/maps/PetalburgCity/scripts.pory"
# 151 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 152 "data/maps/PetalburgCity/scripts.pory"
# 81 "data/maps/PetalburgCity/scripts.pory"
# 153 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 154 "data/maps/PetalburgCity/scripts.pory"
# 82 "data/maps/PetalburgCity/scripts.pory"
# 155 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 156 "data/maps/PetalburgCity/scripts.pory"
# 83 "data/maps/PetalburgCity/scripts.pory"
# 157 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 158 "data/maps/PetalburgCity/scripts.pory"
# 84 "data/maps/PetalburgCity/scripts.pory"
# 159 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 160 "data/maps/PetalburgCity/scripts.pory"
# 85 "data/maps/PetalburgCity/scripts.pory"
# 161 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 162 "data/maps/PetalburgCity/scripts.pory"
# 86 "data/maps/PetalburgCity/scripts.pory"
# 163 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 164 "data/maps/PetalburgCity/scripts.pory"
# 87 "data/maps/PetalburgCity/scripts.pory"
# 165 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 166 "data/maps/PetalburgCity/scripts.pory"
# 88 "data/maps/PetalburgCity/scripts.pory"
# 167 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 168 "data/maps/PetalburgCity/scripts.pory"
# 89 "data/maps/PetalburgCity/scripts.pory"
# 169 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 170 "data/maps/PetalburgCity/scripts.pory"
# 90 "data/maps/PetalburgCity/scripts.pory"
# 171 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 172 "data/maps/PetalburgCity/scripts.pory"
# 91 "data/maps/PetalburgCity/scripts.pory"
# 173 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 174 "data/maps/PetalburgCity/scripts.pory"
	end
# 175 "data/maps/PetalburgCity/scripts.pory"

# 176 "data/maps/PetalburgCity/scripts.pory"

# 177 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 178 "data/maps/PetalburgCity/scripts.pory"
# 96 "data/maps/PetalburgCity/scripts.pory"
# 179 "data/maps/PetalburgCity/scripts.pory"
	lock
# 180 "data/maps/PetalburgCity/scripts.pory"
# 97 "data/maps/PetalburgCity/scripts.pory"
# 181 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 182 "data/maps/PetalburgCity/scripts.pory"
# 98 "data/maps/PetalburgCity/scripts.pory"
# 183 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 184 "data/maps/PetalburgCity/scripts.pory"
# 99 "data/maps/PetalburgCity/scripts.pory"
# 185 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 186 "data/maps/PetalburgCity/scripts.pory"
# 100 "data/maps/PetalburgCity/scripts.pory"
# 187 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 188 "data/maps/PetalburgCity/scripts.pory"
# 101 "data/maps/PetalburgCity/scripts.pory"
# 189 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 190 "data/maps/PetalburgCity/scripts.pory"
# 102 "data/maps/PetalburgCity/scripts.pory"
# 191 "data/maps/PetalburgCity/scripts.pory"
	release
# 192 "data/maps/PetalburgCity/scripts.pory"
	end
# 193 "data/maps/PetalburgCity/scripts.pory"

# 194 "data/maps/PetalburgCity/scripts.pory"

# 195 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 196 "data/maps/PetalburgCity/scripts.pory"
# 107 "data/maps/PetalburgCity/scripts.pory"
# 197 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 198 "data/maps/PetalburgCity/scripts.pory"
	end
# 199 "data/maps/PetalburgCity/scripts.pory"

# 200 "data/maps/PetalburgCity/scripts.pory"

# 201 "data/maps/PetalburgCity/scripts.pory"
# 111 "data/maps/PetalburgCity/scripts.pory"
# 202 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 203 "data/maps/PetalburgCity/scripts.pory"
# 112 "data/maps/PetalburgCity/scripts.pory"
# 204 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 205 "data/maps/PetalburgCity/scripts.pory"
# 113 "data/maps/PetalburgCity/scripts.pory"
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 207 "data/maps/PetalburgCity/scripts.pory"
# 114 "data/maps/PetalburgCity/scripts.pory"
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 209 "data/maps/PetalburgCity/scripts.pory"
# 115 "data/maps/PetalburgCity/scripts.pory"
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 211 "data/maps/PetalburgCity/scripts.pory"
# 116 "data/maps/PetalburgCity/scripts.pory"
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 213 "data/maps/PetalburgCity/scripts.pory"
# 117 "data/maps/PetalburgCity/scripts.pory"
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 215 "data/maps/PetalburgCity/scripts.pory"
# 118 "data/maps/PetalburgCity/scripts.pory"
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 217 "data/maps/PetalburgCity/scripts.pory"
# 119 "data/maps/PetalburgCity/scripts.pory"
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 219 "data/maps/PetalburgCity/scripts.pory"
# 120 "data/maps/PetalburgCity/scripts.pory"
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 221 "data/maps/PetalburgCity/scripts.pory"
# 121 "data/maps/PetalburgCity/scripts.pory"
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 223 "data/maps/PetalburgCity/scripts.pory"
# 122 "data/maps/PetalburgCity/scripts.pory"
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 225 "data/maps/PetalburgCity/scripts.pory"
# 123 "data/maps/PetalburgCity/scripts.pory"
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 227 "data/maps/PetalburgCity/scripts.pory"
# 124 "data/maps/PetalburgCity/scripts.pory"
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 229 "data/maps/PetalburgCity/scripts.pory"
# 125 "data/maps/PetalburgCity/scripts.pory"
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 231 "data/maps/PetalburgCity/scripts.pory"
# 126 "data/maps/PetalburgCity/scripts.pory"
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 233 "data/maps/PetalburgCity/scripts.pory"
# 127 "data/maps/PetalburgCity/scripts.pory"
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 235 "data/maps/PetalburgCity/scripts.pory"
# 128 "data/maps/PetalburgCity/scripts.pory"
# 236 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 237 "data/maps/PetalburgCity/scripts.pory"
# 129 "data/maps/PetalburgCity/scripts.pory"
# 238 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 239 "data/maps/PetalburgCity/scripts.pory"

# 240 "data/maps/PetalburgCity/scripts.pory"
# 132 "data/maps/PetalburgCity/scripts.pory"
# 241 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 242 "data/maps/PetalburgCity/scripts.pory"
# 133 "data/maps/PetalburgCity/scripts.pory"
# 243 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 244 "data/maps/PetalburgCity/scripts.pory"
# 134 "data/maps/PetalburgCity/scripts.pory"
# 245 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 246 "data/maps/PetalburgCity/scripts.pory"
# 135 "data/maps/PetalburgCity/scripts.pory"
# 247 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 248 "data/maps/PetalburgCity/scripts.pory"

# 249 "data/maps/PetalburgCity/scripts.pory"
# 138 "data/maps/PetalburgCity/scripts.pory"
# 250 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 251 "data/maps/PetalburgCity/scripts.pory"
# 139 "data/maps/PetalburgCity/scripts.pory"
# 252 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 253 "data/maps/PetalburgCity/scripts.pory"
# 140 "data/maps/PetalburgCity/scripts.pory"
# 254 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 255 "data/maps/PetalburgCity/scripts.pory"
# 141 "data/maps/PetalburgCity/scripts.pory"
# 256 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 257 "data/maps/PetalburgCity/scripts.pory"
# 142 "data/maps/PetalburgCity/scripts.pory"
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 259 "data/maps/PetalburgCity/scripts.pory"
# 143 "data/maps/PetalburgCity/scripts.pory"
# 260 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 261 "data/maps/PetalburgCity/scripts.pory"
# 144 "data/maps/PetalburgCity/scripts.pory"
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 263 "data/maps/PetalburgCity/scripts.pory"
# 145 "data/maps/PetalburgCity/scripts.pory"
# 264 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 265 "data/maps/PetalburgCity/scripts.pory"
# 146 "data/maps/PetalburgCity/scripts.pory"
# 266 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 267 "data/maps/PetalburgCity/scripts.pory"
# 147 "data/maps/PetalburgCity/scripts.pory"
# 268 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 269 "data/maps/PetalburgCity/scripts.pory"
# 148 "data/maps/PetalburgCity/scripts.pory"
# 270 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 271 "data/maps/PetalburgCity/scripts.pory"
# 149 "data/maps/PetalburgCity/scripts.pory"
# 272 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 273 "data/maps/PetalburgCity/scripts.pory"
# 150 "data/maps/PetalburgCity/scripts.pory"
# 274 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 275 "data/maps/PetalburgCity/scripts.pory"
# 151 "data/maps/PetalburgCity/scripts.pory"
# 276 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 277 "data/maps/PetalburgCity/scripts.pory"
# 152 "data/maps/PetalburgCity/scripts.pory"
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 279 "data/maps/PetalburgCity/scripts.pory"
# 153 "data/maps/PetalburgCity/scripts.pory"
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 281 "data/maps/PetalburgCity/scripts.pory"
# 154 "data/maps/PetalburgCity/scripts.pory"
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 283 "data/maps/PetalburgCity/scripts.pory"
# 155 "data/maps/PetalburgCity/scripts.pory"
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 285 "data/maps/PetalburgCity/scripts.pory"
# 156 "data/maps/PetalburgCity/scripts.pory"
# 286 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 287 "data/maps/PetalburgCity/scripts.pory"

# 288 "data/maps/PetalburgCity/scripts.pory"
# 159 "data/maps/PetalburgCity/scripts.pory"
# 289 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 290 "data/maps/PetalburgCity/scripts.pory"
# 160 "data/maps/PetalburgCity/scripts.pory"
# 291 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 292 "data/maps/PetalburgCity/scripts.pory"
# 161 "data/maps/PetalburgCity/scripts.pory"
# 293 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 294 "data/maps/PetalburgCity/scripts.pory"
# 162 "data/maps/PetalburgCity/scripts.pory"
# 295 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 296 "data/maps/PetalburgCity/scripts.pory"

# 297 "data/maps/PetalburgCity/scripts.pory"
# 165 "data/maps/PetalburgCity/scripts.pory"
# 298 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 299 "data/maps/PetalburgCity/scripts.pory"
# 166 "data/maps/PetalburgCity/scripts.pory"
# 300 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 301 "data/maps/PetalburgCity/scripts.pory"
# 167 "data/maps/PetalburgCity/scripts.pory"
# 302 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 303 "data/maps/PetalburgCity/scripts.pory"
# 168 "data/maps/PetalburgCity/scripts.pory"
# 304 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 305 "data/maps/PetalburgCity/scripts.pory"
# 169 "data/maps/PetalburgCity/scripts.pory"
# 306 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 307 "data/maps/PetalburgCity/scripts.pory"
# 170 "data/maps/PetalburgCity/scripts.pory"
# 308 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 309 "data/maps/PetalburgCity/scripts.pory"
# 171 "data/maps/PetalburgCity/scripts.pory"
# 310 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 311 "data/maps/PetalburgCity/scripts.pory"
# 172 "data/maps/PetalburgCity/scripts.pory"
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 313 "data/maps/PetalburgCity/scripts.pory"
# 173 "data/maps/PetalburgCity/scripts.pory"
# 314 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 315 "data/maps/PetalburgCity/scripts.pory"
# 174 "data/maps/PetalburgCity/scripts.pory"
# 316 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 317 "data/maps/PetalburgCity/scripts.pory"
# 175 "data/maps/PetalburgCity/scripts.pory"
# 318 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 319 "data/maps/PetalburgCity/scripts.pory"
# 176 "data/maps/PetalburgCity/scripts.pory"
# 320 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 321 "data/maps/PetalburgCity/scripts.pory"
# 177 "data/maps/PetalburgCity/scripts.pory"
# 322 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 323 "data/maps/PetalburgCity/scripts.pory"
# 178 "data/maps/PetalburgCity/scripts.pory"
# 324 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 325 "data/maps/PetalburgCity/scripts.pory"
# 179 "data/maps/PetalburgCity/scripts.pory"
# 326 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 327 "data/maps/PetalburgCity/scripts.pory"
# 180 "data/maps/PetalburgCity/scripts.pory"
# 328 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 329 "data/maps/PetalburgCity/scripts.pory"
# 181 "data/maps/PetalburgCity/scripts.pory"
# 330 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 331 "data/maps/PetalburgCity/scripts.pory"
# 182 "data/maps/PetalburgCity/scripts.pory"
# 332 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 333 "data/maps/PetalburgCity/scripts.pory"
# 183 "data/maps/PetalburgCity/scripts.pory"
# 334 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 335 "data/maps/PetalburgCity/scripts.pory"
# 184 "data/maps/PetalburgCity/scripts.pory"
# 336 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 337 "data/maps/PetalburgCity/scripts.pory"
# 185 "data/maps/PetalburgCity/scripts.pory"
# 338 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 339 "data/maps/PetalburgCity/scripts.pory"
# 186 "data/maps/PetalburgCity/scripts.pory"
# 340 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 341 "data/maps/PetalburgCity/scripts.pory"
# 187 "data/maps/PetalburgCity/scripts.pory"
# 342 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 343 "data/maps/PetalburgCity/scripts.pory"
# 188 "data/maps/PetalburgCity/scripts.pory"
# 344 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 345 "data/maps/PetalburgCity/scripts.pory"
# 189 "data/maps/PetalburgCity/scripts.pory"
# 346 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 347 "data/maps/PetalburgCity/scripts.pory"
# 190 "data/maps/PetalburgCity/scripts.pory"
# 348 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 349 "data/maps/PetalburgCity/scripts.pory"
# 191 "data/maps/PetalburgCity/scripts.pory"
# 350 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 351 "data/maps/PetalburgCity/scripts.pory"
# 192 "data/maps/PetalburgCity/scripts.pory"
# 352 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 353 "data/maps/PetalburgCity/scripts.pory"
# 193 "data/maps/PetalburgCity/scripts.pory"
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 355 "data/maps/PetalburgCity/scripts.pory"
# 194 "data/maps/PetalburgCity/scripts.pory"
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 357 "data/maps/PetalburgCity/scripts.pory"
# 195 "data/maps/PetalburgCity/scripts.pory"
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 359 "data/maps/PetalburgCity/scripts.pory"
# 196 "data/maps/PetalburgCity/scripts.pory"
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 361 "data/maps/PetalburgCity/scripts.pory"
# 197 "data/maps/PetalburgCity/scripts.pory"
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 363 "data/maps/PetalburgCity/scripts.pory"
# 198 "data/maps/PetalburgCity/scripts.pory"
# 364 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 365 "data/maps/PetalburgCity/scripts.pory"

# 366 "data/maps/PetalburgCity/scripts.pory"
# 201 "data/maps/PetalburgCity/scripts.pory"
# 367 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 368 "data/maps/PetalburgCity/scripts.pory"
# 202 "data/maps/PetalburgCity/scripts.pory"
# 369 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 370 "data/maps/PetalburgCity/scripts.pory"
# 203 "data/maps/PetalburgCity/scripts.pory"
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 372 "data/maps/PetalburgCity/scripts.pory"
# 204 "data/maps/PetalburgCity/scripts.pory"
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 374 "data/maps/PetalburgCity/scripts.pory"
# 205 "data/maps/PetalburgCity/scripts.pory"
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 376 "data/maps/PetalburgCity/scripts.pory"
# 206 "data/maps/PetalburgCity/scripts.pory"
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 378 "data/maps/PetalburgCity/scripts.pory"
# 207 "data/maps/PetalburgCity/scripts.pory"
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 380 "data/maps/PetalburgCity/scripts.pory"
# 208 "data/maps/PetalburgCity/scripts.pory"
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 382 "data/maps/PetalburgCity/scripts.pory"
# 209 "data/maps/PetalburgCity/scripts.pory"
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 384 "data/maps/PetalburgCity/scripts.pory"
# 210 "data/maps/PetalburgCity/scripts.pory"
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
# 211 "data/maps/PetalburgCity/scripts.pory"
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
# 212 "data/maps/PetalburgCity/scripts.pory"
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
# 213 "data/maps/PetalburgCity/scripts.pory"
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
# 214 "data/maps/PetalburgCity/scripts.pory"
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 394 "data/maps/PetalburgCity/scripts.pory"
# 215 "data/maps/PetalburgCity/scripts.pory"
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
# 216 "data/maps/PetalburgCity/scripts.pory"
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
# 217 "data/maps/PetalburgCity/scripts.pory"
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
# 218 "data/maps/PetalburgCity/scripts.pory"
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgCity/scripts.pory"
# 219 "data/maps/PetalburgCity/scripts.pory"
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
# 220 "data/maps/PetalburgCity/scripts.pory"
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
# 221 "data/maps/PetalburgCity/scripts.pory"
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
# 222 "data/maps/PetalburgCity/scripts.pory"
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
# 223 "data/maps/PetalburgCity/scripts.pory"
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
# 224 "data/maps/PetalburgCity/scripts.pory"
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
# 225 "data/maps/PetalburgCity/scripts.pory"
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
# 226 "data/maps/PetalburgCity/scripts.pory"
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
# 227 "data/maps/PetalburgCity/scripts.pory"
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
# 228 "data/maps/PetalburgCity/scripts.pory"
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 422 "data/maps/PetalburgCity/scripts.pory"
# 229 "data/maps/PetalburgCity/scripts.pory"
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
# 230 "data/maps/PetalburgCity/scripts.pory"
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 426 "data/maps/PetalburgCity/scripts.pory"
# 231 "data/maps/PetalburgCity/scripts.pory"
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 428 "data/maps/PetalburgCity/scripts.pory"
# 232 "data/maps/PetalburgCity/scripts.pory"
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
# 233 "data/maps/PetalburgCity/scripts.pory"
# 431 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 432 "data/maps/PetalburgCity/scripts.pory"
# 234 "data/maps/PetalburgCity/scripts.pory"
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 434 "data/maps/PetalburgCity/scripts.pory"
# 235 "data/maps/PetalburgCity/scripts.pory"
# 435 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 436 "data/maps/PetalburgCity/scripts.pory"
# 236 "data/maps/PetalburgCity/scripts.pory"
# 437 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 438 "data/maps/PetalburgCity/scripts.pory"
# 237 "data/maps/PetalburgCity/scripts.pory"
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 440 "data/maps/PetalburgCity/scripts.pory"
# 238 "data/maps/PetalburgCity/scripts.pory"
# 441 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 442 "data/maps/PetalburgCity/scripts.pory"

# 443 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 444 "data/maps/PetalburgCity/scripts.pory"
# 242 "data/maps/PetalburgCity/scripts.pory"
# 445 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 446 "data/maps/PetalburgCity/scripts.pory"
	end
# 447 "data/maps/PetalburgCity/scripts.pory"

# 448 "data/maps/PetalburgCity/scripts.pory"

# 449 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 450 "data/maps/PetalburgCity/scripts.pory"
# 247 "data/maps/PetalburgCity/scripts.pory"
# 451 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 452 "data/maps/PetalburgCity/scripts.pory"
	end
# 453 "data/maps/PetalburgCity/scripts.pory"

# 454 "data/maps/PetalburgCity/scripts.pory"

# 455 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 456 "data/maps/PetalburgCity/scripts.pory"
# 252 "data/maps/PetalburgCity/scripts.pory"
# 457 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 458 "data/maps/PetalburgCity/scripts.pory"
	end
# 459 "data/maps/PetalburgCity/scripts.pory"

# 460 "data/maps/PetalburgCity/scripts.pory"

# 461 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 462 "data/maps/PetalburgCity/scripts.pory"
# 257 "data/maps/PetalburgCity/scripts.pory"
# 463 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 464 "data/maps/PetalburgCity/scripts.pory"
	end
# 465 "data/maps/PetalburgCity/scripts.pory"

# 466 "data/maps/PetalburgCity/scripts.pory"

# 467 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 468 "data/maps/PetalburgCity/scripts.pory"
# 262 "data/maps/PetalburgCity/scripts.pory"
# 469 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 470 "data/maps/PetalburgCity/scripts.pory"
# 263 "data/maps/PetalburgCity/scripts.pory"
# 471 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 472 "data/maps/PetalburgCity/scripts.pory"
# 264 "data/maps/PetalburgCity/scripts.pory"
# 473 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 474 "data/maps/PetalburgCity/scripts.pory"
	end
# 475 "data/maps/PetalburgCity/scripts.pory"

# 476 "data/maps/PetalburgCity/scripts.pory"

# 477 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 478 "data/maps/PetalburgCity/scripts.pory"
# 269 "data/maps/PetalburgCity/scripts.pory"
# 479 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 480 "data/maps/PetalburgCity/scripts.pory"
# 270 "data/maps/PetalburgCity/scripts.pory"
# 481 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 482 "data/maps/PetalburgCity/scripts.pory"
# 271 "data/maps/PetalburgCity/scripts.pory"
# 483 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 484 "data/maps/PetalburgCity/scripts.pory"
	end
# 485 "data/maps/PetalburgCity/scripts.pory"

# 486 "data/maps/PetalburgCity/scripts.pory"

# 487 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 488 "data/maps/PetalburgCity/scripts.pory"
# 276 "data/maps/PetalburgCity/scripts.pory"
# 489 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 490 "data/maps/PetalburgCity/scripts.pory"
# 277 "data/maps/PetalburgCity/scripts.pory"
# 491 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 492 "data/maps/PetalburgCity/scripts.pory"
# 278 "data/maps/PetalburgCity/scripts.pory"
# 493 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 494 "data/maps/PetalburgCity/scripts.pory"
	end
# 495 "data/maps/PetalburgCity/scripts.pory"

# 496 "data/maps/PetalburgCity/scripts.pory"

# 497 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 498 "data/maps/PetalburgCity/scripts.pory"
# 283 "data/maps/PetalburgCity/scripts.pory"
# 499 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 500 "data/maps/PetalburgCity/scripts.pory"
# 284 "data/maps/PetalburgCity/scripts.pory"
# 501 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 502 "data/maps/PetalburgCity/scripts.pory"
# 285 "data/maps/PetalburgCity/scripts.pory"
# 503 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 504 "data/maps/PetalburgCity/scripts.pory"
	end
# 505 "data/maps/PetalburgCity/scripts.pory"

# 506 "data/maps/PetalburgCity/scripts.pory"

# 507 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 508 "data/maps/PetalburgCity/scripts.pory"
# 290 "data/maps/PetalburgCity/scripts.pory"
# 509 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 510 "data/maps/PetalburgCity/scripts.pory"
# 291 "data/maps/PetalburgCity/scripts.pory"
# 511 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 512 "data/maps/PetalburgCity/scripts.pory"
# 292 "data/maps/PetalburgCity/scripts.pory"
# 513 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 514 "data/maps/PetalburgCity/scripts.pory"
# 293 "data/maps/PetalburgCity/scripts.pory"
# 515 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 516 "data/maps/PetalburgCity/scripts.pory"
# 294 "data/maps/PetalburgCity/scripts.pory"
# 517 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 518 "data/maps/PetalburgCity/scripts.pory"
# 295 "data/maps/PetalburgCity/scripts.pory"
# 519 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 520 "data/maps/PetalburgCity/scripts.pory"
# 296 "data/maps/PetalburgCity/scripts.pory"
# 521 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 522 "data/maps/PetalburgCity/scripts.pory"
# 297 "data/maps/PetalburgCity/scripts.pory"
# 523 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/PetalburgCity/scripts.pory"
# 298 "data/maps/PetalburgCity/scripts.pory"
# 525 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 0
# 526 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_2
# 527 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_1:
# 528 "data/maps/PetalburgCity/scripts.pory"
# 301 "data/maps/PetalburgCity/scripts.pory"
# 529 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 1
# 530 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_5
# 531 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_4:
# 532 "data/maps/PetalburgCity/scripts.pory"
# 304 "data/maps/PetalburgCity/scripts.pory"
# 533 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 2
# 534 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_8
# 535 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_7:
# 536 "data/maps/PetalburgCity/scripts.pory"
# 307 "data/maps/PetalburgCity/scripts.pory"
# 537 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 3
# 538 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_11
# 539 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_10:
# 540 "data/maps/PetalburgCity/scripts.pory"
# 310 "data/maps/PetalburgCity/scripts.pory"
# 541 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 542 "data/maps/PetalburgCity/scripts.pory"
# 311 "data/maps/PetalburgCity/scripts.pory"
# 543 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 544 "data/maps/PetalburgCity/scripts.pory"
# 312 "data/maps/PetalburgCity/scripts.pory"
# 545 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 0
# 546 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_14
# 547 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_13:
# 548 "data/maps/PetalburgCity/scripts.pory"
# 315 "data/maps/PetalburgCity/scripts.pory"
# 549 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 1
# 550 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_17
# 551 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_16:
# 552 "data/maps/PetalburgCity/scripts.pory"
# 318 "data/maps/PetalburgCity/scripts.pory"
# 553 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 2
# 554 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_20
# 555 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_19:
# 556 "data/maps/PetalburgCity/scripts.pory"
# 321 "data/maps/PetalburgCity/scripts.pory"
# 557 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 3
# 558 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_ShowGymToPlayer_23
# 559 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_22:
# 560 "data/maps/PetalburgCity/scripts.pory"
# 324 "data/maps/PetalburgCity/scripts.pory"
# 561 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 562 "data/maps/PetalburgCity/scripts.pory"
# 325 "data/maps/PetalburgCity/scripts.pory"
# 563 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 564 "data/maps/PetalburgCity/scripts.pory"
# 326 "data/maps/PetalburgCity/scripts.pory"
# 565 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 566 "data/maps/PetalburgCity/scripts.pory"
# 327 "data/maps/PetalburgCity/scripts.pory"
# 567 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/PetalburgCity/scripts.pory"
# 328 "data/maps/PetalburgCity/scripts.pory"
# 569 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 570 "data/maps/PetalburgCity/scripts.pory"
# 329 "data/maps/PetalburgCity/scripts.pory"
# 571 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 572 "data/maps/PetalburgCity/scripts.pory"
# 330 "data/maps/PetalburgCity/scripts.pory"
# 573 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 574 "data/maps/PetalburgCity/scripts.pory"
# 331 "data/maps/PetalburgCity/scripts.pory"
# 575 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 576 "data/maps/PetalburgCity/scripts.pory"
# 332 "data/maps/PetalburgCity/scripts.pory"
# 577 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 578 "data/maps/PetalburgCity/scripts.pory"
# 333 "data/maps/PetalburgCity/scripts.pory"
# 579 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 580 "data/maps/PetalburgCity/scripts.pory"
	end
# 581 "data/maps/PetalburgCity/scripts.pory"

# 582 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_2:
# 583 "data/maps/PetalburgCity/scripts.pory"
# 299 "data/maps/PetalburgCity/scripts.pory"
# 584 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer0
# 585 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer_1
# 586 "data/maps/PetalburgCity/scripts.pory"

# 587 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_5:
# 588 "data/maps/PetalburgCity/scripts.pory"
# 302 "data/maps/PetalburgCity/scripts.pory"
# 589 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer1
# 590 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer_4
# 591 "data/maps/PetalburgCity/scripts.pory"

# 592 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_8:
# 593 "data/maps/PetalburgCity/scripts.pory"
# 305 "data/maps/PetalburgCity/scripts.pory"
# 594 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer2
# 595 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer_7
# 596 "data/maps/PetalburgCity/scripts.pory"

# 597 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_11:
# 598 "data/maps/PetalburgCity/scripts.pory"
# 308 "data/maps/PetalburgCity/scripts.pory"
# 599 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer3
# 600 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer_10
# 601 "data/maps/PetalburgCity/scripts.pory"

# 602 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_14:
# 603 "data/maps/PetalburgCity/scripts.pory"
# 313 "data/maps/PetalburgCity/scripts.pory"
# 604 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym0
# 605 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer_13
# 606 "data/maps/PetalburgCity/scripts.pory"

# 607 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_17:
# 608 "data/maps/PetalburgCity/scripts.pory"
# 316 "data/maps/PetalburgCity/scripts.pory"
# 609 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym1
# 610 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer_16
# 611 "data/maps/PetalburgCity/scripts.pory"

# 612 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_20:
# 613 "data/maps/PetalburgCity/scripts.pory"
# 319 "data/maps/PetalburgCity/scripts.pory"
# 614 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym2
# 615 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer_19
# 616 "data/maps/PetalburgCity/scripts.pory"

# 617 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_23:
# 618 "data/maps/PetalburgCity/scripts.pory"
# 322 "data/maps/PetalburgCity/scripts.pory"
# 619 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym3
# 620 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer_22
# 621 "data/maps/PetalburgCity/scripts.pory"

# 622 "data/maps/PetalburgCity/scripts.pory"

# 623 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 624 "data/maps/PetalburgCity/scripts.pory"
# 338 "data/maps/PetalburgCity/scripts.pory"
# 625 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 626 "data/maps/PetalburgCity/scripts.pory"
# 339 "data/maps/PetalburgCity/scripts.pory"
# 627 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 628 "data/maps/PetalburgCity/scripts.pory"
# 340 "data/maps/PetalburgCity/scripts.pory"
# 629 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 630 "data/maps/PetalburgCity/scripts.pory"
# 341 "data/maps/PetalburgCity/scripts.pory"
# 631 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/PetalburgCity/scripts.pory"
	return
# 633 "data/maps/PetalburgCity/scripts.pory"

# 634 "data/maps/PetalburgCity/scripts.pory"

# 635 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 636 "data/maps/PetalburgCity/scripts.pory"
# 346 "data/maps/PetalburgCity/scripts.pory"
# 637 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 638 "data/maps/PetalburgCity/scripts.pory"
# 347 "data/maps/PetalburgCity/scripts.pory"
# 639 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/PetalburgCity/scripts.pory"
	return
# 641 "data/maps/PetalburgCity/scripts.pory"

# 642 "data/maps/PetalburgCity/scripts.pory"

# 643 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 644 "data/maps/PetalburgCity/scripts.pory"
# 352 "data/maps/PetalburgCity/scripts.pory"
# 645 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 646 "data/maps/PetalburgCity/scripts.pory"
# 353 "data/maps/PetalburgCity/scripts.pory"
# 647 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 648 "data/maps/PetalburgCity/scripts.pory"
# 354 "data/maps/PetalburgCity/scripts.pory"
# 649 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 650 "data/maps/PetalburgCity/scripts.pory"
# 355 "data/maps/PetalburgCity/scripts.pory"
# 651 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/PetalburgCity/scripts.pory"
	return
# 653 "data/maps/PetalburgCity/scripts.pory"

# 654 "data/maps/PetalburgCity/scripts.pory"

# 655 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 656 "data/maps/PetalburgCity/scripts.pory"
# 360 "data/maps/PetalburgCity/scripts.pory"
# 657 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 658 "data/maps/PetalburgCity/scripts.pory"
# 361 "data/maps/PetalburgCity/scripts.pory"
# 659 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 660 "data/maps/PetalburgCity/scripts.pory"
# 362 "data/maps/PetalburgCity/scripts.pory"
# 661 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 662 "data/maps/PetalburgCity/scripts.pory"
# 363 "data/maps/PetalburgCity/scripts.pory"
# 663 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/PetalburgCity/scripts.pory"
	return
# 665 "data/maps/PetalburgCity/scripts.pory"

# 666 "data/maps/PetalburgCity/scripts.pory"

# 667 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 668 "data/maps/PetalburgCity/scripts.pory"
# 368 "data/maps/PetalburgCity/scripts.pory"
# 669 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 670 "data/maps/PetalburgCity/scripts.pory"
# 369 "data/maps/PetalburgCity/scripts.pory"
# 671 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 672 "data/maps/PetalburgCity/scripts.pory"
# 370 "data/maps/PetalburgCity/scripts.pory"
# 673 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/PetalburgCity/scripts.pory"
	return
# 675 "data/maps/PetalburgCity/scripts.pory"

# 676 "data/maps/PetalburgCity/scripts.pory"

# 677 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 678 "data/maps/PetalburgCity/scripts.pory"
# 375 "data/maps/PetalburgCity/scripts.pory"
# 679 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 680 "data/maps/PetalburgCity/scripts.pory"
# 376 "data/maps/PetalburgCity/scripts.pory"
# 681 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 682 "data/maps/PetalburgCity/scripts.pory"
# 377 "data/maps/PetalburgCity/scripts.pory"
# 683 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 684 "data/maps/PetalburgCity/scripts.pory"
	return
# 685 "data/maps/PetalburgCity/scripts.pory"

# 686 "data/maps/PetalburgCity/scripts.pory"

# 687 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 688 "data/maps/PetalburgCity/scripts.pory"
# 382 "data/maps/PetalburgCity/scripts.pory"
# 689 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 690 "data/maps/PetalburgCity/scripts.pory"
# 383 "data/maps/PetalburgCity/scripts.pory"
# 691 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 692 "data/maps/PetalburgCity/scripts.pory"
# 384 "data/maps/PetalburgCity/scripts.pory"
# 693 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 694 "data/maps/PetalburgCity/scripts.pory"
	return
# 695 "data/maps/PetalburgCity/scripts.pory"

# 696 "data/maps/PetalburgCity/scripts.pory"

# 697 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 698 "data/maps/PetalburgCity/scripts.pory"
# 389 "data/maps/PetalburgCity/scripts.pory"
# 699 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 700 "data/maps/PetalburgCity/scripts.pory"
# 390 "data/maps/PetalburgCity/scripts.pory"
# 701 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 702 "data/maps/PetalburgCity/scripts.pory"
# 391 "data/maps/PetalburgCity/scripts.pory"
# 703 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 704 "data/maps/PetalburgCity/scripts.pory"
	return
# 705 "data/maps/PetalburgCity/scripts.pory"

# 706 "data/maps/PetalburgCity/scripts.pory"

# 707 "data/maps/PetalburgCity/scripts.pory"
# 395 "data/maps/PetalburgCity/scripts.pory"
# 708 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48:
# 709 "data/maps/PetalburgCity/scripts.pory"
# 396 "data/maps/PetalburgCity/scripts.pory"
# 710 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 711 "data/maps/PetalburgCity/scripts.pory"
# 397 "data/maps/PetalburgCity/scripts.pory"
# 712 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 713 "data/maps/PetalburgCity/scripts.pory"
# 398 "data/maps/PetalburgCity/scripts.pory"
# 714 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 715 "data/maps/PetalburgCity/scripts.pory"
# 399 "data/maps/PetalburgCity/scripts.pory"
# 716 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 717 "data/maps/PetalburgCity/scripts.pory"

# 718 "data/maps/PetalburgCity/scripts.pory"
# 402 "data/maps/PetalburgCity/scripts.pory"
# 719 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 720 "data/maps/PetalburgCity/scripts.pory"
# 403 "data/maps/PetalburgCity/scripts.pory"
# 721 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 722 "data/maps/PetalburgCity/scripts.pory"
# 404 "data/maps/PetalburgCity/scripts.pory"
# 723 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 724 "data/maps/PetalburgCity/scripts.pory"
# 405 "data/maps/PetalburgCity/scripts.pory"
# 725 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 726 "data/maps/PetalburgCity/scripts.pory"
# 406 "data/maps/PetalburgCity/scripts.pory"
# 727 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 728 "data/maps/PetalburgCity/scripts.pory"
# 407 "data/maps/PetalburgCity/scripts.pory"
# 729 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 730 "data/maps/PetalburgCity/scripts.pory"

# 731 "data/maps/PetalburgCity/scripts.pory"
# 410 "data/maps/PetalburgCity/scripts.pory"
# 732 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 733 "data/maps/PetalburgCity/scripts.pory"
# 411 "data/maps/PetalburgCity/scripts.pory"
# 734 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 735 "data/maps/PetalburgCity/scripts.pory"
# 412 "data/maps/PetalburgCity/scripts.pory"
# 736 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 737 "data/maps/PetalburgCity/scripts.pory"
# 413 "data/maps/PetalburgCity/scripts.pory"
# 738 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 739 "data/maps/PetalburgCity/scripts.pory"

# 740 "data/maps/PetalburgCity/scripts.pory"
# 416 "data/maps/PetalburgCity/scripts.pory"
# 741 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 742 "data/maps/PetalburgCity/scripts.pory"
# 417 "data/maps/PetalburgCity/scripts.pory"
# 743 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 744 "data/maps/PetalburgCity/scripts.pory"
# 418 "data/maps/PetalburgCity/scripts.pory"
# 745 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 746 "data/maps/PetalburgCity/scripts.pory"
# 419 "data/maps/PetalburgCity/scripts.pory"
# 747 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 748 "data/maps/PetalburgCity/scripts.pory"
# 420 "data/maps/PetalburgCity/scripts.pory"
# 749 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 750 "data/maps/PetalburgCity/scripts.pory"
# 421 "data/maps/PetalburgCity/scripts.pory"
# 751 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 752 "data/maps/PetalburgCity/scripts.pory"

# 753 "data/maps/PetalburgCity/scripts.pory"
# 424 "data/maps/PetalburgCity/scripts.pory"
# 754 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 755 "data/maps/PetalburgCity/scripts.pory"
# 425 "data/maps/PetalburgCity/scripts.pory"
# 756 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 757 "data/maps/PetalburgCity/scripts.pory"
# 426 "data/maps/PetalburgCity/scripts.pory"
# 758 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 759 "data/maps/PetalburgCity/scripts.pory"
# 427 "data/maps/PetalburgCity/scripts.pory"
# 760 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 761 "data/maps/PetalburgCity/scripts.pory"
# 428 "data/maps/PetalburgCity/scripts.pory"
# 762 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 763 "data/maps/PetalburgCity/scripts.pory"
# 429 "data/maps/PetalburgCity/scripts.pory"
# 764 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 765 "data/maps/PetalburgCity/scripts.pory"
# 430 "data/maps/PetalburgCity/scripts.pory"
# 766 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 767 "data/maps/PetalburgCity/scripts.pory"

# 768 "data/maps/PetalburgCity/scripts.pory"
# 433 "data/maps/PetalburgCity/scripts.pory"
# 769 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 770 "data/maps/PetalburgCity/scripts.pory"
# 434 "data/maps/PetalburgCity/scripts.pory"
# 771 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 772 "data/maps/PetalburgCity/scripts.pory"
# 435 "data/maps/PetalburgCity/scripts.pory"
# 773 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 774 "data/maps/PetalburgCity/scripts.pory"
# 436 "data/maps/PetalburgCity/scripts.pory"
# 775 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 776 "data/maps/PetalburgCity/scripts.pory"
# 437 "data/maps/PetalburgCity/scripts.pory"
# 777 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 778 "data/maps/PetalburgCity/scripts.pory"
# 438 "data/maps/PetalburgCity/scripts.pory"
# 779 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 780 "data/maps/PetalburgCity/scripts.pory"
# 439 "data/maps/PetalburgCity/scripts.pory"
# 781 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 782 "data/maps/PetalburgCity/scripts.pory"
# 440 "data/maps/PetalburgCity/scripts.pory"
# 783 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 784 "data/maps/PetalburgCity/scripts.pory"
# 441 "data/maps/PetalburgCity/scripts.pory"
# 785 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 786 "data/maps/PetalburgCity/scripts.pory"
# 442 "data/maps/PetalburgCity/scripts.pory"
# 787 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 788 "data/maps/PetalburgCity/scripts.pory"
# 443 "data/maps/PetalburgCity/scripts.pory"
# 789 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 790 "data/maps/PetalburgCity/scripts.pory"
# 444 "data/maps/PetalburgCity/scripts.pory"
# 791 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 792 "data/maps/PetalburgCity/scripts.pory"

# 793 "data/maps/PetalburgCity/scripts.pory"
# 447 "data/maps/PetalburgCity/scripts.pory"
# 794 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 795 "data/maps/PetalburgCity/scripts.pory"
# 448 "data/maps/PetalburgCity/scripts.pory"
# 796 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 797 "data/maps/PetalburgCity/scripts.pory"
# 449 "data/maps/PetalburgCity/scripts.pory"
# 798 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 799 "data/maps/PetalburgCity/scripts.pory"
# 450 "data/maps/PetalburgCity/scripts.pory"
# 800 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 801 "data/maps/PetalburgCity/scripts.pory"
# 451 "data/maps/PetalburgCity/scripts.pory"
# 802 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 803 "data/maps/PetalburgCity/scripts.pory"
# 452 "data/maps/PetalburgCity/scripts.pory"
# 804 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 805 "data/maps/PetalburgCity/scripts.pory"
# 453 "data/maps/PetalburgCity/scripts.pory"
# 806 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 807 "data/maps/PetalburgCity/scripts.pory"
# 454 "data/maps/PetalburgCity/scripts.pory"
# 808 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 809 "data/maps/PetalburgCity/scripts.pory"
# 455 "data/maps/PetalburgCity/scripts.pory"
# 810 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 811 "data/maps/PetalburgCity/scripts.pory"
# 456 "data/maps/PetalburgCity/scripts.pory"
# 812 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 813 "data/maps/PetalburgCity/scripts.pory"
# 457 "data/maps/PetalburgCity/scripts.pory"
# 814 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 815 "data/maps/PetalburgCity/scripts.pory"
# 458 "data/maps/PetalburgCity/scripts.pory"
# 816 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 817 "data/maps/PetalburgCity/scripts.pory"
# 459 "data/maps/PetalburgCity/scripts.pory"
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 819 "data/maps/PetalburgCity/scripts.pory"
# 460 "data/maps/PetalburgCity/scripts.pory"
# 820 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 821 "data/maps/PetalburgCity/scripts.pory"
# 461 "data/maps/PetalburgCity/scripts.pory"
# 822 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 823 "data/maps/PetalburgCity/scripts.pory"

# 824 "data/maps/PetalburgCity/scripts.pory"
# 464 "data/maps/PetalburgCity/scripts.pory"
# 825 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 826 "data/maps/PetalburgCity/scripts.pory"
# 465 "data/maps/PetalburgCity/scripts.pory"
# 827 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 828 "data/maps/PetalburgCity/scripts.pory"
# 466 "data/maps/PetalburgCity/scripts.pory"
# 829 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 830 "data/maps/PetalburgCity/scripts.pory"
# 467 "data/maps/PetalburgCity/scripts.pory"
# 831 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 832 "data/maps/PetalburgCity/scripts.pory"
# 468 "data/maps/PetalburgCity/scripts.pory"
# 833 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 834 "data/maps/PetalburgCity/scripts.pory"
# 469 "data/maps/PetalburgCity/scripts.pory"
# 835 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 836 "data/maps/PetalburgCity/scripts.pory"
# 470 "data/maps/PetalburgCity/scripts.pory"
# 837 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 838 "data/maps/PetalburgCity/scripts.pory"
# 471 "data/maps/PetalburgCity/scripts.pory"
# 839 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 840 "data/maps/PetalburgCity/scripts.pory"
# 472 "data/maps/PetalburgCity/scripts.pory"
# 841 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 842 "data/maps/PetalburgCity/scripts.pory"
# 473 "data/maps/PetalburgCity/scripts.pory"
# 843 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 844 "data/maps/PetalburgCity/scripts.pory"
# 474 "data/maps/PetalburgCity/scripts.pory"
# 845 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 846 "data/maps/PetalburgCity/scripts.pory"
# 475 "data/maps/PetalburgCity/scripts.pory"
# 847 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 848 "data/maps/PetalburgCity/scripts.pory"

# 849 "data/maps/PetalburgCity/scripts.pory"
# 478 "data/maps/PetalburgCity/scripts.pory"
# 850 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 851 "data/maps/PetalburgCity/scripts.pory"
# 479 "data/maps/PetalburgCity/scripts.pory"
# 852 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 853 "data/maps/PetalburgCity/scripts.pory"
# 480 "data/maps/PetalburgCity/scripts.pory"
# 854 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 855 "data/maps/PetalburgCity/scripts.pory"
# 481 "data/maps/PetalburgCity/scripts.pory"
# 856 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 857 "data/maps/PetalburgCity/scripts.pory"
# 482 "data/maps/PetalburgCity/scripts.pory"
# 858 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 859 "data/maps/PetalburgCity/scripts.pory"
# 483 "data/maps/PetalburgCity/scripts.pory"
# 860 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 861 "data/maps/PetalburgCity/scripts.pory"
# 484 "data/maps/PetalburgCity/scripts.pory"
# 862 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 863 "data/maps/PetalburgCity/scripts.pory"
# 485 "data/maps/PetalburgCity/scripts.pory"
# 864 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 865 "data/maps/PetalburgCity/scripts.pory"
# 486 "data/maps/PetalburgCity/scripts.pory"
# 866 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 867 "data/maps/PetalburgCity/scripts.pory"
# 487 "data/maps/PetalburgCity/scripts.pory"
# 868 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 869 "data/maps/PetalburgCity/scripts.pory"
# 488 "data/maps/PetalburgCity/scripts.pory"
# 870 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 871 "data/maps/PetalburgCity/scripts.pory"
# 489 "data/maps/PetalburgCity/scripts.pory"
# 872 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 873 "data/maps/PetalburgCity/scripts.pory"
# 490 "data/maps/PetalburgCity/scripts.pory"
# 874 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 875 "data/maps/PetalburgCity/scripts.pory"

# 876 "data/maps/PetalburgCity/scripts.pory"
# 493 "data/maps/PetalburgCity/scripts.pory"
# 877 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 878 "data/maps/PetalburgCity/scripts.pory"
# 494 "data/maps/PetalburgCity/scripts.pory"
# 879 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 880 "data/maps/PetalburgCity/scripts.pory"
# 495 "data/maps/PetalburgCity/scripts.pory"
# 881 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 882 "data/maps/PetalburgCity/scripts.pory"
# 496 "data/maps/PetalburgCity/scripts.pory"
# 883 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 884 "data/maps/PetalburgCity/scripts.pory"
# 497 "data/maps/PetalburgCity/scripts.pory"
# 885 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 886 "data/maps/PetalburgCity/scripts.pory"
# 498 "data/maps/PetalburgCity/scripts.pory"
# 887 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 888 "data/maps/PetalburgCity/scripts.pory"
# 499 "data/maps/PetalburgCity/scripts.pory"
# 889 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 890 "data/maps/PetalburgCity/scripts.pory"
# 500 "data/maps/PetalburgCity/scripts.pory"
# 891 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 892 "data/maps/PetalburgCity/scripts.pory"
# 501 "data/maps/PetalburgCity/scripts.pory"
# 893 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 894 "data/maps/PetalburgCity/scripts.pory"
# 502 "data/maps/PetalburgCity/scripts.pory"
# 895 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 896 "data/maps/PetalburgCity/scripts.pory"
# 503 "data/maps/PetalburgCity/scripts.pory"
# 897 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 898 "data/maps/PetalburgCity/scripts.pory"
# 504 "data/maps/PetalburgCity/scripts.pory"
# 899 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 900 "data/maps/PetalburgCity/scripts.pory"
# 505 "data/maps/PetalburgCity/scripts.pory"
# 901 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 902 "data/maps/PetalburgCity/scripts.pory"
# 506 "data/maps/PetalburgCity/scripts.pory"
# 903 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 904 "data/maps/PetalburgCity/scripts.pory"

# 905 "data/maps/PetalburgCity/scripts.pory"
# 509 "data/maps/PetalburgCity/scripts.pory"
# 906 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 907 "data/maps/PetalburgCity/scripts.pory"
# 510 "data/maps/PetalburgCity/scripts.pory"
# 908 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 909 "data/maps/PetalburgCity/scripts.pory"
# 511 "data/maps/PetalburgCity/scripts.pory"
# 910 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 911 "data/maps/PetalburgCity/scripts.pory"
# 512 "data/maps/PetalburgCity/scripts.pory"
# 912 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 913 "data/maps/PetalburgCity/scripts.pory"
# 513 "data/maps/PetalburgCity/scripts.pory"
# 914 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 915 "data/maps/PetalburgCity/scripts.pory"
# 514 "data/maps/PetalburgCity/scripts.pory"
# 916 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 917 "data/maps/PetalburgCity/scripts.pory"
# 515 "data/maps/PetalburgCity/scripts.pory"
# 918 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 919 "data/maps/PetalburgCity/scripts.pory"
# 516 "data/maps/PetalburgCity/scripts.pory"
# 920 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 921 "data/maps/PetalburgCity/scripts.pory"
# 517 "data/maps/PetalburgCity/scripts.pory"
# 922 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 923 "data/maps/PetalburgCity/scripts.pory"
# 518 "data/maps/PetalburgCity/scripts.pory"
# 924 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 925 "data/maps/PetalburgCity/scripts.pory"
# 519 "data/maps/PetalburgCity/scripts.pory"
# 926 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 927 "data/maps/PetalburgCity/scripts.pory"

# 928 "data/maps/PetalburgCity/scripts.pory"
# 522 "data/maps/PetalburgCity/scripts.pory"
# 929 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 930 "data/maps/PetalburgCity/scripts.pory"
# 523 "data/maps/PetalburgCity/scripts.pory"
# 931 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 932 "data/maps/PetalburgCity/scripts.pory"
# 524 "data/maps/PetalburgCity/scripts.pory"
# 933 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 934 "data/maps/PetalburgCity/scripts.pory"
# 525 "data/maps/PetalburgCity/scripts.pory"
# 935 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 936 "data/maps/PetalburgCity/scripts.pory"
# 526 "data/maps/PetalburgCity/scripts.pory"
# 937 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 938 "data/maps/PetalburgCity/scripts.pory"
# 527 "data/maps/PetalburgCity/scripts.pory"
# 939 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 940 "data/maps/PetalburgCity/scripts.pory"
# 528 "data/maps/PetalburgCity/scripts.pory"
# 941 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 942 "data/maps/PetalburgCity/scripts.pory"
# 529 "data/maps/PetalburgCity/scripts.pory"
# 943 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 944 "data/maps/PetalburgCity/scripts.pory"
# 530 "data/maps/PetalburgCity/scripts.pory"
# 945 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 946 "data/maps/PetalburgCity/scripts.pory"
# 531 "data/maps/PetalburgCity/scripts.pory"
# 947 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 948 "data/maps/PetalburgCity/scripts.pory"
# 532 "data/maps/PetalburgCity/scripts.pory"
# 949 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 950 "data/maps/PetalburgCity/scripts.pory"
# 533 "data/maps/PetalburgCity/scripts.pory"
# 951 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 952 "data/maps/PetalburgCity/scripts.pory"
# 534 "data/maps/PetalburgCity/scripts.pory"
# 953 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 954 "data/maps/PetalburgCity/scripts.pory"
# 535 "data/maps/PetalburgCity/scripts.pory"
# 955 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 956 "data/maps/PetalburgCity/scripts.pory"

# 957 "data/maps/PetalburgCity/scripts.pory"
# 538 "data/maps/PetalburgCity/scripts.pory"
# 958 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 959 "data/maps/PetalburgCity/scripts.pory"
# 539 "data/maps/PetalburgCity/scripts.pory"
# 960 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 961 "data/maps/PetalburgCity/scripts.pory"
# 540 "data/maps/PetalburgCity/scripts.pory"
# 962 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 963 "data/maps/PetalburgCity/scripts.pory"
# 541 "data/maps/PetalburgCity/scripts.pory"
# 964 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 965 "data/maps/PetalburgCity/scripts.pory"
# 542 "data/maps/PetalburgCity/scripts.pory"
# 966 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 967 "data/maps/PetalburgCity/scripts.pory"
# 543 "data/maps/PetalburgCity/scripts.pory"
# 968 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 969 "data/maps/PetalburgCity/scripts.pory"
# 544 "data/maps/PetalburgCity/scripts.pory"
# 970 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 971 "data/maps/PetalburgCity/scripts.pory"
# 545 "data/maps/PetalburgCity/scripts.pory"
# 972 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 973 "data/maps/PetalburgCity/scripts.pory"
# 546 "data/maps/PetalburgCity/scripts.pory"
# 974 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 975 "data/maps/PetalburgCity/scripts.pory"
# 547 "data/maps/PetalburgCity/scripts.pory"
# 976 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 977 "data/maps/PetalburgCity/scripts.pory"
# 548 "data/maps/PetalburgCity/scripts.pory"
# 978 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 979 "data/maps/PetalburgCity/scripts.pory"

# 980 "data/maps/PetalburgCity/scripts.pory"
# 551 "data/maps/PetalburgCity/scripts.pory"
# 981 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 982 "data/maps/PetalburgCity/scripts.pory"
# 552 "data/maps/PetalburgCity/scripts.pory"
# 983 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 984 "data/maps/PetalburgCity/scripts.pory"
# 553 "data/maps/PetalburgCity/scripts.pory"
# 985 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 986 "data/maps/PetalburgCity/scripts.pory"
# 554 "data/maps/PetalburgCity/scripts.pory"
# 987 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 988 "data/maps/PetalburgCity/scripts.pory"
# 555 "data/maps/PetalburgCity/scripts.pory"
# 989 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 990 "data/maps/PetalburgCity/scripts.pory"
# 556 "data/maps/PetalburgCity/scripts.pory"
# 991 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 992 "data/maps/PetalburgCity/scripts.pory"
# 557 "data/maps/PetalburgCity/scripts.pory"
# 993 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 994 "data/maps/PetalburgCity/scripts.pory"
# 558 "data/maps/PetalburgCity/scripts.pory"
# 995 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 996 "data/maps/PetalburgCity/scripts.pory"
# 559 "data/maps/PetalburgCity/scripts.pory"
# 997 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 998 "data/maps/PetalburgCity/scripts.pory"
# 560 "data/maps/PetalburgCity/scripts.pory"
# 999 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1000 "data/maps/PetalburgCity/scripts.pory"
# 561 "data/maps/PetalburgCity/scripts.pory"
# 1001 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1002 "data/maps/PetalburgCity/scripts.pory"
# 562 "data/maps/PetalburgCity/scripts.pory"
# 1003 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 1004 "data/maps/PetalburgCity/scripts.pory"

# 1005 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 1006 "data/maps/PetalburgCity/scripts.pory"
# 566 "data/maps/PetalburgCity/scripts.pory"
# 1007 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 1008 "data/maps/PetalburgCity/scripts.pory"
# 567 "data/maps/PetalburgCity/scripts.pory"
# 1009 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 1010 "data/maps/PetalburgCity/scripts.pory"
# 568 "data/maps/PetalburgCity/scripts.pory"
# 1011 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 1012 "data/maps/PetalburgCity/scripts.pory"
# 569 "data/maps/PetalburgCity/scripts.pory"
# 1013 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 1014 "data/maps/PetalburgCity/scripts.pory"
# 570 "data/maps/PetalburgCity/scripts.pory"
# 1015 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 1016 "data/maps/PetalburgCity/scripts.pory"
	end
# 1017 "data/maps/PetalburgCity/scripts.pory"

# 1018 "data/maps/PetalburgCity/scripts.pory"

# 1019 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 1020 "data/maps/PetalburgCity/scripts.pory"
# 575 "data/maps/PetalburgCity/scripts.pory"
# 1021 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 1022 "data/maps/PetalburgCity/scripts.pory"
# 576 "data/maps/PetalburgCity/scripts.pory"
# 1023 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 1024 "data/maps/PetalburgCity/scripts.pory"
# 577 "data/maps/PetalburgCity/scripts.pory"
# 1025 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 1026 "data/maps/PetalburgCity/scripts.pory"
# 578 "data/maps/PetalburgCity/scripts.pory"
# 1027 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 1028 "data/maps/PetalburgCity/scripts.pory"
# 579 "data/maps/PetalburgCity/scripts.pory"
# 1029 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 1030 "data/maps/PetalburgCity/scripts.pory"
	end
# 1031 "data/maps/PetalburgCity/scripts.pory"

# 1032 "data/maps/PetalburgCity/scripts.pory"

# 1033 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 1034 "data/maps/PetalburgCity/scripts.pory"
# 584 "data/maps/PetalburgCity/scripts.pory"
# 1035 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 1036 "data/maps/PetalburgCity/scripts.pory"
# 585 "data/maps/PetalburgCity/scripts.pory"
# 1037 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 1038 "data/maps/PetalburgCity/scripts.pory"
# 586 "data/maps/PetalburgCity/scripts.pory"
# 1039 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 1040 "data/maps/PetalburgCity/scripts.pory"
# 587 "data/maps/PetalburgCity/scripts.pory"
# 1041 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 1042 "data/maps/PetalburgCity/scripts.pory"
# 588 "data/maps/PetalburgCity/scripts.pory"
# 1043 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 1044 "data/maps/PetalburgCity/scripts.pory"
	end
# 1045 "data/maps/PetalburgCity/scripts.pory"

# 1046 "data/maps/PetalburgCity/scripts.pory"

# 1047 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 1048 "data/maps/PetalburgCity/scripts.pory"
# 593 "data/maps/PetalburgCity/scripts.pory"
# 1049 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 1050 "data/maps/PetalburgCity/scripts.pory"
# 594 "data/maps/PetalburgCity/scripts.pory"
# 1051 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 1052 "data/maps/PetalburgCity/scripts.pory"
# 595 "data/maps/PetalburgCity/scripts.pory"
# 1053 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 1054 "data/maps/PetalburgCity/scripts.pory"
# 596 "data/maps/PetalburgCity/scripts.pory"
# 1055 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 1056 "data/maps/PetalburgCity/scripts.pory"
# 597 "data/maps/PetalburgCity/scripts.pory"
# 1057 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 1058 "data/maps/PetalburgCity/scripts.pory"
	end
# 1059 "data/maps/PetalburgCity/scripts.pory"

# 1060 "data/maps/PetalburgCity/scripts.pory"

# 1061 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 1062 "data/maps/PetalburgCity/scripts.pory"
# 602 "data/maps/PetalburgCity/scripts.pory"
# 1063 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 1064 "data/maps/PetalburgCity/scripts.pory"
# 603 "data/maps/PetalburgCity/scripts.pory"
# 1065 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 1066 "data/maps/PetalburgCity/scripts.pory"
# 604 "data/maps/PetalburgCity/scripts.pory"
# 1067 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1068 "data/maps/PetalburgCity/scripts.pory"
# 605 "data/maps/PetalburgCity/scripts.pory"
# 1069 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 1070 "data/maps/PetalburgCity/scripts.pory"
# 606 "data/maps/PetalburgCity/scripts.pory"
# 1071 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 1072 "data/maps/PetalburgCity/scripts.pory"
# 607 "data/maps/PetalburgCity/scripts.pory"
# 1073 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 1074 "data/maps/PetalburgCity/scripts.pory"
# 608 "data/maps/PetalburgCity/scripts.pory"
# 1075 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 1076 "data/maps/PetalburgCity/scripts.pory"
# 609 "data/maps/PetalburgCity/scripts.pory"
# 1077 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 1078 "data/maps/PetalburgCity/scripts.pory"
# 610 "data/maps/PetalburgCity/scripts.pory"
# 1079 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 1080 "data/maps/PetalburgCity/scripts.pory"
# 611 "data/maps/PetalburgCity/scripts.pory"
# 1081 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1082 "data/maps/PetalburgCity/scripts.pory"
# 612 "data/maps/PetalburgCity/scripts.pory"
# 1083 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 1084 "data/maps/PetalburgCity/scripts.pory"
# 613 "data/maps/PetalburgCity/scripts.pory"
# 1085 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 1086 "data/maps/PetalburgCity/scripts.pory"
# 614 "data/maps/PetalburgCity/scripts.pory"
# 1087 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 1088 "data/maps/PetalburgCity/scripts.pory"
# 615 "data/maps/PetalburgCity/scripts.pory"
# 1089 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1090 "data/maps/PetalburgCity/scripts.pory"
# 616 "data/maps/PetalburgCity/scripts.pory"
# 1091 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 1092 "data/maps/PetalburgCity/scripts.pory"
# 617 "data/maps/PetalburgCity/scripts.pory"
# 1093 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 1094 "data/maps/PetalburgCity/scripts.pory"
# 618 "data/maps/PetalburgCity/scripts.pory"
# 1095 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 1096 "data/maps/PetalburgCity/scripts.pory"
# 619 "data/maps/PetalburgCity/scripts.pory"
# 1097 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 1098 "data/maps/PetalburgCity/scripts.pory"
# 620 "data/maps/PetalburgCity/scripts.pory"
# 1099 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1100 "data/maps/PetalburgCity/scripts.pory"
# 621 "data/maps/PetalburgCity/scripts.pory"
# 1101 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 1102 "data/maps/PetalburgCity/scripts.pory"
# 622 "data/maps/PetalburgCity/scripts.pory"
# 1103 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 1104 "data/maps/PetalburgCity/scripts.pory"
# 623 "data/maps/PetalburgCity/scripts.pory"
# 1105 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 1106 "data/maps/PetalburgCity/scripts.pory"
# 624 "data/maps/PetalburgCity/scripts.pory"
# 1107 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 1108 "data/maps/PetalburgCity/scripts.pory"
# 625 "data/maps/PetalburgCity/scripts.pory"
# 1109 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1110 "data/maps/PetalburgCity/scripts.pory"
# 626 "data/maps/PetalburgCity/scripts.pory"
# 1111 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 0
# 1112 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_Scott_2
# 1113 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_1:
# 1114 "data/maps/PetalburgCity/scripts.pory"
# 629 "data/maps/PetalburgCity/scripts.pory"
# 1115 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 1
# 1116 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_Scott_5
# 1117 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_4:
# 1118 "data/maps/PetalburgCity/scripts.pory"
# 632 "data/maps/PetalburgCity/scripts.pory"
# 1119 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 2
# 1120 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_Scott_8
# 1121 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_7:
# 1122 "data/maps/PetalburgCity/scripts.pory"
# 635 "data/maps/PetalburgCity/scripts.pory"
# 1123 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 3
# 1124 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq PetalburgCity_EventScript_Scott_11
# 1125 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_10:
# 1126 "data/maps/PetalburgCity/scripts.pory"
# 638 "data/maps/PetalburgCity/scripts.pory"
# 1127 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 1128 "data/maps/PetalburgCity/scripts.pory"
# 639 "data/maps/PetalburgCity/scripts.pory"
# 1129 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 1130 "data/maps/PetalburgCity/scripts.pory"
# 640 "data/maps/PetalburgCity/scripts.pory"
# 1131 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 1132 "data/maps/PetalburgCity/scripts.pory"
	end
# 1133 "data/maps/PetalburgCity/scripts.pory"

# 1134 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_2:
# 1135 "data/maps/PetalburgCity/scripts.pory"
# 627 "data/maps/PetalburgCity/scripts.pory"
# 1136 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit0
# 1137 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott_1
# 1138 "data/maps/PetalburgCity/scripts.pory"

# 1139 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_5:
# 1140 "data/maps/PetalburgCity/scripts.pory"
# 630 "data/maps/PetalburgCity/scripts.pory"
# 1141 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit1
# 1142 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott_4
# 1143 "data/maps/PetalburgCity/scripts.pory"

# 1144 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_8:
# 1145 "data/maps/PetalburgCity/scripts.pory"
# 633 "data/maps/PetalburgCity/scripts.pory"
# 1146 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit2
# 1147 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott_7
# 1148 "data/maps/PetalburgCity/scripts.pory"

# 1149 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_11:
# 1150 "data/maps/PetalburgCity/scripts.pory"
# 636 "data/maps/PetalburgCity/scripts.pory"
# 1151 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit3
# 1152 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott_10
# 1153 "data/maps/PetalburgCity/scripts.pory"

# 1154 "data/maps/PetalburgCity/scripts.pory"

# 1155 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 1156 "data/maps/PetalburgCity/scripts.pory"
# 645 "data/maps/PetalburgCity/scripts.pory"
# 1157 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 1158 "data/maps/PetalburgCity/scripts.pory"
# 646 "data/maps/PetalburgCity/scripts.pory"
# 1159 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 1160 "data/maps/PetalburgCity/scripts.pory"
# 647 "data/maps/PetalburgCity/scripts.pory"
# 1161 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 1162 "data/maps/PetalburgCity/scripts.pory"
	return
# 1163 "data/maps/PetalburgCity/scripts.pory"

# 1164 "data/maps/PetalburgCity/scripts.pory"

# 1165 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 1166 "data/maps/PetalburgCity/scripts.pory"
# 652 "data/maps/PetalburgCity/scripts.pory"
# 1167 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 1168 "data/maps/PetalburgCity/scripts.pory"
# 653 "data/maps/PetalburgCity/scripts.pory"
# 1169 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 1170 "data/maps/PetalburgCity/scripts.pory"
# 654 "data/maps/PetalburgCity/scripts.pory"
# 1171 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 1172 "data/maps/PetalburgCity/scripts.pory"
	return
# 1173 "data/maps/PetalburgCity/scripts.pory"

# 1174 "data/maps/PetalburgCity/scripts.pory"

# 1175 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 1176 "data/maps/PetalburgCity/scripts.pory"
# 659 "data/maps/PetalburgCity/scripts.pory"
# 1177 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 1178 "data/maps/PetalburgCity/scripts.pory"
# 660 "data/maps/PetalburgCity/scripts.pory"
# 1179 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 1180 "data/maps/PetalburgCity/scripts.pory"
# 661 "data/maps/PetalburgCity/scripts.pory"
# 1181 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 1182 "data/maps/PetalburgCity/scripts.pory"
	return
# 1183 "data/maps/PetalburgCity/scripts.pory"

# 1184 "data/maps/PetalburgCity/scripts.pory"

# 1185 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 1186 "data/maps/PetalburgCity/scripts.pory"
# 666 "data/maps/PetalburgCity/scripts.pory"
# 1187 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 1188 "data/maps/PetalburgCity/scripts.pory"
# 667 "data/maps/PetalburgCity/scripts.pory"
# 1189 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 1190 "data/maps/PetalburgCity/scripts.pory"
# 668 "data/maps/PetalburgCity/scripts.pory"
# 1191 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 1192 "data/maps/PetalburgCity/scripts.pory"
	return
# 1193 "data/maps/PetalburgCity/scripts.pory"

# 1194 "data/maps/PetalburgCity/scripts.pory"

# 1195 "data/maps/PetalburgCity/scripts.pory"
# 672 "data/maps/PetalburgCity/scripts.pory"
# 1196 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 1197 "data/maps/PetalburgCity/scripts.pory"
# 673 "data/maps/PetalburgCity/scripts.pory"
# 1198 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1199 "data/maps/PetalburgCity/scripts.pory"
# 674 "data/maps/PetalburgCity/scripts.pory"
# 1200 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1201 "data/maps/PetalburgCity/scripts.pory"
# 675 "data/maps/PetalburgCity/scripts.pory"
# 1202 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1203 "data/maps/PetalburgCity/scripts.pory"
# 676 "data/maps/PetalburgCity/scripts.pory"
# 1204 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1205 "data/maps/PetalburgCity/scripts.pory"
# 677 "data/maps/PetalburgCity/scripts.pory"
# 1206 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 1207 "data/maps/PetalburgCity/scripts.pory"

# 1208 "data/maps/PetalburgCity/scripts.pory"
# 680 "data/maps/PetalburgCity/scripts.pory"
# 1209 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 1210 "data/maps/PetalburgCity/scripts.pory"
# 681 "data/maps/PetalburgCity/scripts.pory"
# 1211 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1212 "data/maps/PetalburgCity/scripts.pory"
# 682 "data/maps/PetalburgCity/scripts.pory"
# 1213 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1214 "data/maps/PetalburgCity/scripts.pory"
# 683 "data/maps/PetalburgCity/scripts.pory"
# 1215 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1216 "data/maps/PetalburgCity/scripts.pory"
# 684 "data/maps/PetalburgCity/scripts.pory"
# 1217 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1218 "data/maps/PetalburgCity/scripts.pory"
# 685 "data/maps/PetalburgCity/scripts.pory"
# 1219 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 1220 "data/maps/PetalburgCity/scripts.pory"

# 1221 "data/maps/PetalburgCity/scripts.pory"
# 688 "data/maps/PetalburgCity/scripts.pory"
# 1222 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 1223 "data/maps/PetalburgCity/scripts.pory"
# 689 "data/maps/PetalburgCity/scripts.pory"
# 1224 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1225 "data/maps/PetalburgCity/scripts.pory"
# 690 "data/maps/PetalburgCity/scripts.pory"
# 1226 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1227 "data/maps/PetalburgCity/scripts.pory"
# 691 "data/maps/PetalburgCity/scripts.pory"
# 1228 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1229 "data/maps/PetalburgCity/scripts.pory"
# 692 "data/maps/PetalburgCity/scripts.pory"
# 1230 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1231 "data/maps/PetalburgCity/scripts.pory"
# 693 "data/maps/PetalburgCity/scripts.pory"
# 1232 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1233 "data/maps/PetalburgCity/scripts.pory"
# 694 "data/maps/PetalburgCity/scripts.pory"
# 1234 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1235 "data/maps/PetalburgCity/scripts.pory"
# 695 "data/maps/PetalburgCity/scripts.pory"
# 1236 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1237 "data/maps/PetalburgCity/scripts.pory"
# 696 "data/maps/PetalburgCity/scripts.pory"
# 1238 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1239 "data/maps/PetalburgCity/scripts.pory"
# 697 "data/maps/PetalburgCity/scripts.pory"
# 1240 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1241 "data/maps/PetalburgCity/scripts.pory"
# 698 "data/maps/PetalburgCity/scripts.pory"
# 1242 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1243 "data/maps/PetalburgCity/scripts.pory"
# 699 "data/maps/PetalburgCity/scripts.pory"
# 1244 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1245 "data/maps/PetalburgCity/scripts.pory"
# 700 "data/maps/PetalburgCity/scripts.pory"
# 1246 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1247 "data/maps/PetalburgCity/scripts.pory"
# 701 "data/maps/PetalburgCity/scripts.pory"
# 1248 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1249 "data/maps/PetalburgCity/scripts.pory"
# 702 "data/maps/PetalburgCity/scripts.pory"
# 1250 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 1251 "data/maps/PetalburgCity/scripts.pory"

# 1252 "data/maps/PetalburgCity/scripts.pory"
# 705 "data/maps/PetalburgCity/scripts.pory"
# 1253 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 1254 "data/maps/PetalburgCity/scripts.pory"
# 706 "data/maps/PetalburgCity/scripts.pory"
# 1255 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1256 "data/maps/PetalburgCity/scripts.pory"
# 707 "data/maps/PetalburgCity/scripts.pory"
# 1257 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 1258 "data/maps/PetalburgCity/scripts.pory"
# 708 "data/maps/PetalburgCity/scripts.pory"
# 1259 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1260 "data/maps/PetalburgCity/scripts.pory"
# 709 "data/maps/PetalburgCity/scripts.pory"
# 1261 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1262 "data/maps/PetalburgCity/scripts.pory"
# 710 "data/maps/PetalburgCity/scripts.pory"
# 1263 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 1264 "data/maps/PetalburgCity/scripts.pory"
# 711 "data/maps/PetalburgCity/scripts.pory"
# 1265 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 1266 "data/maps/PetalburgCity/scripts.pory"
# 712 "data/maps/PetalburgCity/scripts.pory"
# 1267 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 1268 "data/maps/PetalburgCity/scripts.pory"

# 1269 "data/maps/PetalburgCity/scripts.pory"
# 715 "data/maps/PetalburgCity/scripts.pory"
# 1270 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 1271 "data/maps/PetalburgCity/scripts.pory"
# 716 "data/maps/PetalburgCity/scripts.pory"
# 1272 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1273 "data/maps/PetalburgCity/scripts.pory"
# 717 "data/maps/PetalburgCity/scripts.pory"
# 1274 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1275 "data/maps/PetalburgCity/scripts.pory"
# 718 "data/maps/PetalburgCity/scripts.pory"
# 1276 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1277 "data/maps/PetalburgCity/scripts.pory"
# 719 "data/maps/PetalburgCity/scripts.pory"
# 1278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1279 "data/maps/PetalburgCity/scripts.pory"
# 720 "data/maps/PetalburgCity/scripts.pory"
# 1280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1281 "data/maps/PetalburgCity/scripts.pory"
# 721 "data/maps/PetalburgCity/scripts.pory"
# 1282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1283 "data/maps/PetalburgCity/scripts.pory"
# 722 "data/maps/PetalburgCity/scripts.pory"
# 1284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1285 "data/maps/PetalburgCity/scripts.pory"
# 723 "data/maps/PetalburgCity/scripts.pory"
# 1286 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1287 "data/maps/PetalburgCity/scripts.pory"
# 724 "data/maps/PetalburgCity/scripts.pory"
# 1288 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1289 "data/maps/PetalburgCity/scripts.pory"
# 725 "data/maps/PetalburgCity/scripts.pory"
# 1290 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1291 "data/maps/PetalburgCity/scripts.pory"
# 726 "data/maps/PetalburgCity/scripts.pory"
# 1292 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1293 "data/maps/PetalburgCity/scripts.pory"
# 727 "data/maps/PetalburgCity/scripts.pory"
# 1294 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1295 "data/maps/PetalburgCity/scripts.pory"
# 728 "data/maps/PetalburgCity/scripts.pory"
# 1296 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 1297 "data/maps/PetalburgCity/scripts.pory"

# 1298 "data/maps/PetalburgCity/scripts.pory"
# 731 "data/maps/PetalburgCity/scripts.pory"
# 1299 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 1300 "data/maps/PetalburgCity/scripts.pory"
# 732 "data/maps/PetalburgCity/scripts.pory"
# 1301 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1302 "data/maps/PetalburgCity/scripts.pory"
# 733 "data/maps/PetalburgCity/scripts.pory"
# 1303 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 1304 "data/maps/PetalburgCity/scripts.pory"
# 734 "data/maps/PetalburgCity/scripts.pory"
# 1305 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1306 "data/maps/PetalburgCity/scripts.pory"
# 735 "data/maps/PetalburgCity/scripts.pory"
# 1307 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 1308 "data/maps/PetalburgCity/scripts.pory"
# 736 "data/maps/PetalburgCity/scripts.pory"
# 1309 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 1310 "data/maps/PetalburgCity/scripts.pory"
# 737 "data/maps/PetalburgCity/scripts.pory"
# 1311 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 1312 "data/maps/PetalburgCity/scripts.pory"

# 1313 "data/maps/PetalburgCity/scripts.pory"
# 740 "data/maps/PetalburgCity/scripts.pory"
# 1314 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 1315 "data/maps/PetalburgCity/scripts.pory"
# 741 "data/maps/PetalburgCity/scripts.pory"
# 1316 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1317 "data/maps/PetalburgCity/scripts.pory"
# 742 "data/maps/PetalburgCity/scripts.pory"
# 1318 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1319 "data/maps/PetalburgCity/scripts.pory"
# 743 "data/maps/PetalburgCity/scripts.pory"
# 1320 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1321 "data/maps/PetalburgCity/scripts.pory"
# 744 "data/maps/PetalburgCity/scripts.pory"
# 1322 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1323 "data/maps/PetalburgCity/scripts.pory"
# 745 "data/maps/PetalburgCity/scripts.pory"
# 1324 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1325 "data/maps/PetalburgCity/scripts.pory"
# 746 "data/maps/PetalburgCity/scripts.pory"
# 1326 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1327 "data/maps/PetalburgCity/scripts.pory"
# 747 "data/maps/PetalburgCity/scripts.pory"
# 1328 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1329 "data/maps/PetalburgCity/scripts.pory"
# 748 "data/maps/PetalburgCity/scripts.pory"
# 1330 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1331 "data/maps/PetalburgCity/scripts.pory"
# 749 "data/maps/PetalburgCity/scripts.pory"
# 1332 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1333 "data/maps/PetalburgCity/scripts.pory"
# 750 "data/maps/PetalburgCity/scripts.pory"
# 1334 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1335 "data/maps/PetalburgCity/scripts.pory"
# 751 "data/maps/PetalburgCity/scripts.pory"
# 1336 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1337 "data/maps/PetalburgCity/scripts.pory"
# 752 "data/maps/PetalburgCity/scripts.pory"
# 1338 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1339 "data/maps/PetalburgCity/scripts.pory"
# 753 "data/maps/PetalburgCity/scripts.pory"
# 1340 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 1341 "data/maps/PetalburgCity/scripts.pory"

# 1342 "data/maps/PetalburgCity/scripts.pory"
# 756 "data/maps/PetalburgCity/scripts.pory"
# 1343 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 1344 "data/maps/PetalburgCity/scripts.pory"
# 757 "data/maps/PetalburgCity/scripts.pory"
# 1345 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1346 "data/maps/PetalburgCity/scripts.pory"
# 758 "data/maps/PetalburgCity/scripts.pory"
# 1347 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 1348 "data/maps/PetalburgCity/scripts.pory"
# 759 "data/maps/PetalburgCity/scripts.pory"
# 1349 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1350 "data/maps/PetalburgCity/scripts.pory"
# 760 "data/maps/PetalburgCity/scripts.pory"
# 1351 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 1352 "data/maps/PetalburgCity/scripts.pory"
# 761 "data/maps/PetalburgCity/scripts.pory"
# 1353 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 1354 "data/maps/PetalburgCity/scripts.pory"
# 762 "data/maps/PetalburgCity/scripts.pory"
# 1355 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 1356 "data/maps/PetalburgCity/scripts.pory"

# 1357 "data/maps/PetalburgCity/scripts.pory"
# 765 "data/maps/PetalburgCity/scripts.pory"
# 1358 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 1359 "data/maps/PetalburgCity/scripts.pory"
# 766 "data/maps/PetalburgCity/scripts.pory"
# 1360 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1361 "data/maps/PetalburgCity/scripts.pory"
# 767 "data/maps/PetalburgCity/scripts.pory"
# 1362 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1363 "data/maps/PetalburgCity/scripts.pory"
# 768 "data/maps/PetalburgCity/scripts.pory"
# 1364 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1365 "data/maps/PetalburgCity/scripts.pory"
# 769 "data/maps/PetalburgCity/scripts.pory"
# 1366 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1367 "data/maps/PetalburgCity/scripts.pory"
# 770 "data/maps/PetalburgCity/scripts.pory"
# 1368 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1369 "data/maps/PetalburgCity/scripts.pory"
# 771 "data/maps/PetalburgCity/scripts.pory"
# 1370 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1371 "data/maps/PetalburgCity/scripts.pory"
# 772 "data/maps/PetalburgCity/scripts.pory"
# 1372 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1373 "data/maps/PetalburgCity/scripts.pory"
# 773 "data/maps/PetalburgCity/scripts.pory"
# 1374 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1375 "data/maps/PetalburgCity/scripts.pory"
# 774 "data/maps/PetalburgCity/scripts.pory"
# 1376 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1377 "data/maps/PetalburgCity/scripts.pory"
# 775 "data/maps/PetalburgCity/scripts.pory"
# 1378 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1379 "data/maps/PetalburgCity/scripts.pory"
# 776 "data/maps/PetalburgCity/scripts.pory"
# 1380 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1381 "data/maps/PetalburgCity/scripts.pory"
# 777 "data/maps/PetalburgCity/scripts.pory"
# 1382 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1383 "data/maps/PetalburgCity/scripts.pory"
# 778 "data/maps/PetalburgCity/scripts.pory"
# 1384 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 1385 "data/maps/PetalburgCity/scripts.pory"

# 1386 "data/maps/PetalburgCity/scripts.pory"
# 781 "data/maps/PetalburgCity/scripts.pory"
# 1387 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 1388 "data/maps/PetalburgCity/scripts.pory"
# 782 "data/maps/PetalburgCity/scripts.pory"
# 1389 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1390 "data/maps/PetalburgCity/scripts.pory"
# 783 "data/maps/PetalburgCity/scripts.pory"
# 1391 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 1392 "data/maps/PetalburgCity/scripts.pory"
# 784 "data/maps/PetalburgCity/scripts.pory"
# 1393 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1394 "data/maps/PetalburgCity/scripts.pory"
# 785 "data/maps/PetalburgCity/scripts.pory"
# 1395 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 1396 "data/maps/PetalburgCity/scripts.pory"
# 786 "data/maps/PetalburgCity/scripts.pory"
# 1397 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 1398 "data/maps/PetalburgCity/scripts.pory"
# 787 "data/maps/PetalburgCity/scripts.pory"
# 1399 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 1400 "data/maps/PetalburgCity/scripts.pory"

# 1401 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 1402 "data/maps/PetalburgCity/scripts.pory"
# 791 "data/maps/PetalburgCity/scripts.pory"
# 1403 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 1404 "data/maps/PetalburgCity/scripts.pory"
	end
# 1405 "data/maps/PetalburgCity/scripts.pory"

# 1406 "data/maps/PetalburgCity/scripts.pory"

# 1407 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally::
# 1408 "data/maps/PetalburgCity/scripts.pory"
# 795 "data/maps/PetalburgCity/scripts.pory"
# 1409 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 1410 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 1411 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 1412 "data/maps/PetalburgCity/scripts.pory"

# 1413 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer::
# 1414 "data/maps/PetalburgCity/scripts.pory"
# 801 "data/maps/PetalburgCity/scripts.pory"
# 1415 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 1416 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 1417 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 1418 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 1419 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 1420 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 1421 "data/maps/PetalburgCity/scripts.pory"

# 1422 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym::
# 1423 "data/maps/PetalburgCity/scripts.pory"
# 810 "data/maps/PetalburgCity/scripts.pory"
# 1424 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 1425 "data/maps/PetalburgCity/scripts.pory"

# 1426 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign::
# 1427 "data/maps/PetalburgCity/scripts.pory"
# 814 "data/maps/PetalburgCity/scripts.pory"
# 1428 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 1429 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 1430 "data/maps/PetalburgCity/scripts.pory"

# 1431 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection::
# 1432 "data/maps/PetalburgCity/scripts.pory"
# 819 "data/maps/PetalburgCity/scripts.pory"
# 1433 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 1434 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 1435 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 1436 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 1437 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 1438 "data/maps/PetalburgCity/scripts.pory"

# 1439 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation::
# 1440 "data/maps/PetalburgCity/scripts.pory"
# 827 "data/maps/PetalburgCity/scripts.pory"
# 1441 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 1442 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 1443 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 1444 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 1445 "data/maps/PetalburgCity/scripts.pory"

# 1446 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign::
# 1447 "data/maps/PetalburgCity/scripts.pory"
# 834 "data/maps/PetalburgCity/scripts.pory"
# 1448 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 1449 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 1450 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 1451 "data/maps/PetalburgCity/scripts.pory"

# 1452 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign::
# 1453 "data/maps/PetalburgCity/scripts.pory"
# 840 "data/maps/PetalburgCity/scripts.pory"
# 1454 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 1455 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 1456 "data/maps/PetalburgCity/scripts.pory"

# 1457 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign::
# 1458 "data/maps/PetalburgCity/scripts.pory"
# 845 "data/maps/PetalburgCity/scripts.pory"
# 1459 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 1460 "data/maps/PetalburgCity/scripts.pory"

# 1461 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer::
# 1462 "data/maps/PetalburgCity/scripts.pory"
# 849 "data/maps/PetalburgCity/scripts.pory"
# 1463 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 1464 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 1465 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 1466 "data/maps/PetalburgCity/scripts.pory"

# 1467 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot::
# 1468 "data/maps/PetalburgCity/scripts.pory"
# 855 "data/maps/PetalburgCity/scripts.pory"
# 1469 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 1470 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 1471 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 1472 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 1473 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 1474 "data/maps/PetalburgCity/scripts.pory"

# 1475 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers::
# 1476 "data/maps/PetalburgCity/scripts.pory"
# 863 "data/maps/PetalburgCity/scripts.pory"
# 1477 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 1478 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 1479 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
