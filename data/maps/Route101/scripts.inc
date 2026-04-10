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
# 24 "data/maps/Route101/scripts.pory"
	lockall
# 25 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 26 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_StartBirchRescue_Text_0
# 27 "data/maps/Route101/scripts.pory"
	closemessage
# 28 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_EnterScene
# 29 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway
# 31 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZOMBIE, Route101_Movement_ZombieChase
# 32 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZOMBIE, Route101_Movement_ZombieChaseInCircles
# 34 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 35 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZOMBIE, Route101_Movement_ZombieFaceBirch
# 37 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZombie
# 38 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_StartBirchRescue_Text_1
# 40 "data/maps/Route101/scripts.pory"
	closemessage
# 41 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 42 "data/maps/Route101/scripts.pory"
	releaseall
	end


Route101_EventScript_PreventExitSouth::
# 51 "data/maps/Route101/scripts.pory"
	lockall
# 52 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_PreventExitSouth_Text_0
# 53 "data/maps/Route101/scripts.pory"
	closemessage
# 54 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitSouth
# 55 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route101/scripts.pory"
	releaseall
	end


Route101_EventScript_PreventExitWest::
# 61 "data/maps/Route101/scripts.pory"
	lockall
# 62 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_PreventExitSouth_Text_0
# 63 "data/maps/Route101/scripts.pory"
	closemessage
# 64 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitWest
# 65 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route101/scripts.pory"
	releaseall
	end


Route101_EventScript_PreventExitNorth::
# 71 "data/maps/Route101/scripts.pory"
	lockall
# 72 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_PreventExitSouth_Text_0
# 73 "data/maps/Route101/scripts.pory"
	closemessage
# 74 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitNorth
# 75 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route101/scripts.pory"
	releaseall
	end


# 80 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 81 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 84 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 85 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 88 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 89 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

Route101_EventScript_ZombieTrainer::
# 98 "data/maps/Route101/scripts.pory"
	lockall
# 99 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZOMBIE, Common_Movement_WalkInPlaceFasterRight
# 100 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 102 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_ZombieTrainer_Text_0
# 104 "data/maps/Route101/scripts.pory"
	closemessage
# 105 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_ROUTE101_ZOMBIE, Route101_EventScript_ZombieTrainer_Text_1, Route101_EventScript_ZombieTrainer_Text_2
# 106 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_ZombieTrainer_Text_3
# 107 "data/maps/Route101/scripts.pory"
	closemessage
# 108 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
# 109 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 110 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_ZombieTrainer_Text_4
# 112 "data/maps/Route101/scripts.pory"
	closemessage
# 113 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 114 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 115 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 116 "data/maps/Route101/scripts.pory"
	setvar VAR_SNAKEWOOD_INTRO_STATE, 2
# 117 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 118 "data/maps/Route101/scripts.pory"
	warp MAP_OLDALE_TOWN, 6, 17
# 119 "data/maps/Route101/scripts.pory"
	waitstate
# 120 "data/maps/Route101/scripts.pory"
	releaseall
	end


# 128 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 129 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_up
# 130 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
	step_end

# 134 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway:
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 148 "data/maps/Route101/scripts.pory"
Route101_Movement_ZombieChase:
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 162 "data/maps/Route101/scripts.pory"
Route101_Movement_ZombieChaseInCircles:
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 182 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 195 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 196 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 197 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 198 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 202 "data/maps/Route101/scripts.pory"
Route101_Movement_ZombieFaceBirch:
# 203 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
	step_end

# 207 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZombie:
# 208 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_right
	step_end

# 211 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 212 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

Route101_EventScript_RouteSign::
# 220 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_RouteSign_Text_0, MSGBOX_SIGN
	end


Route101_EventScript_Youngster::
# 226 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Youngster_Text_0, MSGBOX_NPC
	end


Route101_EventScript_Boy::
# 231 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Boy_Text_0, MSGBOX_NPC
	end


Route101_EventScript_StartBirchRescue_Text_0:
# 26 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Birch crying for help.$"

Route101_EventScript_StartBirchRescue_Text_1:
# 39 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Birch pleads for help.$"

Route101_EventScript_PreventExitSouth_Text_0:
# 52 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Don't leave me.$"

Route101_EventScript_ZombieTrainer_Text_0:
# 103 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Zombie trainer intro.$"

Route101_EventScript_ZombieTrainer_Text_1:
# 105 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Zombie intro.$"

Route101_EventScript_ZombieTrainer_Text_2:
# 105 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Zombie defeat text.$"

Route101_EventScript_ZombieTrainer_Text_3:
# 106 "data/maps/Route101/scripts.pory"
	.string "The Zombie crumbled to dust.$"

Route101_EventScript_ZombieTrainer_Text_4:
# 111 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Birch thanks player and says let's go to Oldale.$"

Route101_EventScript_RouteSign_Text_0:
# 220 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_EventScript_Youngster_Text_0:
# 226 "data/maps/Route101/scripts.pory"
	.string "Bruhhh.$"

Route101_EventScript_Boy_Text_0:
# 231 "data/maps/Route101/scripts.pory"
	.string "Placeholder: Boy dialogue.$"
