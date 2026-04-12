Route101_MapScripts::
# 2 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 3 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
	.2byte 0


Route101_OnTransition::
	end


Route101_EventScript_HideMapNamePopup::
# 13 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 14 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
	end


Route101_EventScript_StartBirchRescue::
# 27 "data/maps/Route101/scripts.pory"
	lockall
# 28 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 29 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_StartBirchRescue_Text_0
# 30 "data/maps/Route101/scripts.pory"
	closemessage
# 31 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_EnterScene
# 32 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway
# 34 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZOMBIE, Route101_Movement_ZombieChase
# 35 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZOMBIE, Route101_Movement_ZombieChaseInCircles
# 37 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 38 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZOMBIE, Route101_Movement_ZombieFaceBirch
# 40 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZombie
# 41 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_StartBirchRescue_Text_1
# 43 "data/maps/Route101/scripts.pory"
	closemessage
# 45 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PlayerApproachZombie
# 46 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZOMBIE, Route101_Movement_ZombieTurnToPlayer
# 47 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_StartBirchRescue_Text_2
# 49 "data/maps/Route101/scripts.pory"
	closemessage
# 50 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_ROUTE101_ZOMBIE, Route101_EventScript_StartBirchRescue_Text_3, Route101_EventScript_StartBirchRescue_Text_4
# 51 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_StartBirchRescue_Text_5
# 52 "data/maps/Route101/scripts.pory"
	closemessage
# 53 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
# 54 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 55 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_StartBirchRescue_Text_6
# 57 "data/maps/Route101/scripts.pory"
	closemessage
# 58 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 59 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 60 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 61 "data/maps/Route101/scripts.pory"
	setvar VAR_SNAKEWOOD_INTRO_STATE, 2
# 62 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 63 "data/maps/Route101/scripts.pory"
	warp MAP_OLDALE_TOWN, 6, 17
# 64 "data/maps/Route101/scripts.pory"
	waitstate
# 65 "data/maps/Route101/scripts.pory"
	releaseall
	end


Route101_EventScript_PreventExitSouth::
# 74 "data/maps/Route101/scripts.pory"
	lockall
# 75 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_PreventExitSouth_Text_0
# 76 "data/maps/Route101/scripts.pory"
	closemessage
# 77 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitSouth
# 78 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route101/scripts.pory"
	releaseall
	end


Route101_EventScript_PreventExitWest::
# 84 "data/maps/Route101/scripts.pory"
	lockall
# 85 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_PreventExitSouth_Text_0
# 86 "data/maps/Route101/scripts.pory"
	closemessage
# 87 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitWest
# 88 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route101/scripts.pory"
	releaseall
	end


Route101_EventScript_PreventExitNorth::
# 94 "data/maps/Route101/scripts.pory"
	lockall
# 95 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_PreventExitSouth_Text_0
# 96 "data/maps/Route101/scripts.pory"
	closemessage
# 97 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitNorth
# 98 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route101/scripts.pory"
	releaseall
	end


# 103 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 104 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 107 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 108 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 111 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 112 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

Route101_EventScript_ZombieTrainer::
# 122 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_ZombieTrainer_Text_0, MSGBOX_NPC
	end


# 130 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 131 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_up
# 132 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
	step_end

# 136 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway:
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 150 "data/maps/Route101/scripts.pory"
Route101_Movement_ZombieChase:
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 164 "data/maps/Route101/scripts.pory"
Route101_Movement_ZombieChaseInCircles:
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 184 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 195 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 196 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 197 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 198 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 199 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 204 "data/maps/Route101/scripts.pory"
Route101_Movement_ZombieFaceBirch:
# 205 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
	step_end

# 209 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZombie:
# 210 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_right
	step_end

# 213 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerApproachZombie:
# 214 "data/maps/Route101/scripts.pory"
	walk_up
# 214 "data/maps/Route101/scripts.pory"
	walk_up
# 214 "data/maps/Route101/scripts.pory"
	walk_up
# 215 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
	step_end

# 218 "data/maps/Route101/scripts.pory"
Route101_Movement_ZombieTurnToPlayer:
# 219 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_right
	step_end

# 222 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 223 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

Route101_EventScript_RouteSign::
# 231 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_RouteSign_Text_0, MSGBOX_SIGN
	end


Route101_EventScript_Youngster::
# 237 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Youngster_Text_0, MSGBOX_NPC
	end


Route101_EventScript_Boy::
# 242 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Boy_Text_0, MSGBOX_NPC
	end


Route101_EventScript_StartBirchRescue_Text_0:
# 29 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Birch crying for help.$"

Route101_EventScript_StartBirchRescue_Text_1:
# 42 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Birch pleads for help.$"

Route101_EventScript_StartBirchRescue_Text_2:
# 48 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Zombie trainer intro.$"

Route101_EventScript_StartBirchRescue_Text_3:
# 50 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Zombie intro.$"

Route101_EventScript_StartBirchRescue_Text_4:
# 50 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Zombie defeat text.$"

Route101_EventScript_StartBirchRescue_Text_5:
# 51 "data/maps/Route101/scripts.pory"
	.string "The Zombie crumbled to dust.$"

Route101_EventScript_StartBirchRescue_Text_6:
# 56 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Birch thanks player and says let's go to Oldale.$"

Route101_EventScript_PreventExitSouth_Text_0:
# 75 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Don't leave me.$"

Route101_EventScript_ZombieTrainer_Text_0:
# 122 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Zombie trainer fallback.$"

Route101_EventScript_RouteSign_Text_0:
# 231 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_EventScript_Youngster_Text_0:
# 237 "data/maps/Route101/scripts.pory"
	.string "Bruhhh.$"

Route101_EventScript_Boy_Text_0:
# 242 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Boy dialogue.$"
