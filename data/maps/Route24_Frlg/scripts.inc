# 1 "data/maps/Route24_Frlg/scripts.pory"

# 2 "data/maps/Route24_Frlg/scripts.pory"
Route24_Frlg_MapScripts::
# 3 "data/maps/Route24_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route24_Frlg/scripts.pory"

# 5 "data/maps/Route24_Frlg/scripts.pory"

# 6 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_Rocket::
# 7 "data/maps/Route24_Frlg/scripts.pory"
# 4 "data/maps/Route24_Frlg/scripts.pory"
# 8 "data/maps/Route24_Frlg/scripts.pory"
	lock
# 9 "data/maps/Route24_Frlg/scripts.pory"
# 5 "data/maps/Route24_Frlg/scripts.pory"
# 10 "data/maps/Route24_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/Route24_Frlg/scripts.pory"
# 6 "data/maps/Route24_Frlg/scripts.pory"
# 12 "data/maps/Route24_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE24, 1
# 13 "data/maps/Route24_Frlg/scripts.pory"
	goto_if_eq Route24_EventScript_Rocket_2
# 14 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_Rocket_1:
# 15 "data/maps/Route24_Frlg/scripts.pory"
# 9 "data/maps/Route24_Frlg/scripts.pory"
# 16 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_JustEarnedFabulousPrize
# 17 "data/maps/Route24_Frlg/scripts.pory"
# 10 "data/maps/Route24_Frlg/scripts.pory"
# 18 "data/maps/Route24_Frlg/scripts.pory"
	checkitemspace ITEM_NUGGET
# 19 "data/maps/Route24_Frlg/scripts.pory"
# 11 "data/maps/Route24_Frlg/scripts.pory"
# 20 "data/maps/Route24_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 21 "data/maps/Route24_Frlg/scripts.pory"
	goto_if_eq Route24_EventScript_Rocket_5
# 22 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_Rocket_4:
# 23 "data/maps/Route24_Frlg/scripts.pory"
# 14 "data/maps/Route24_Frlg/scripts.pory"
# 24 "data/maps/Route24_Frlg/scripts.pory"
	call Route24_EventScript_BattleRocket
# 25 "data/maps/Route24_Frlg/scripts.pory"
# 15 "data/maps/Route24_Frlg/scripts.pory"
# 26 "data/maps/Route24_Frlg/scripts.pory"
	release
# 27 "data/maps/Route24_Frlg/scripts.pory"
	end
# 28 "data/maps/Route24_Frlg/scripts.pory"

# 29 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_Rocket_2:
# 30 "data/maps/Route24_Frlg/scripts.pory"
# 7 "data/maps/Route24_Frlg/scripts.pory"
# 31 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_RocketPostBattle
# 32 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_Rocket_1
# 33 "data/maps/Route24_Frlg/scripts.pory"

# 34 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_Rocket_5:
# 35 "data/maps/Route24_Frlg/scripts.pory"
# 12 "data/maps/Route24_Frlg/scripts.pory"
# 36 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_NoRoomForNugget
# 37 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_Rocket_4
# 38 "data/maps/Route24_Frlg/scripts.pory"

# 39 "data/maps/Route24_Frlg/scripts.pory"

# 40 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_NoRoomForNugget::
# 41 "data/maps/Route24_Frlg/scripts.pory"
# 20 "data/maps/Route24_Frlg/scripts.pory"
# 42 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YouDontHaveAnyRoom
# 43 "data/maps/Route24_Frlg/scripts.pory"
# 21 "data/maps/Route24_Frlg/scripts.pory"
# 44 "data/maps/Route24_Frlg/scripts.pory"
	release
# 45 "data/maps/Route24_Frlg/scripts.pory"
	end
# 46 "data/maps/Route24_Frlg/scripts.pory"

# 47 "data/maps/Route24_Frlg/scripts.pory"

# 48 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketPostBattle::
# 49 "data/maps/Route24_Frlg/scripts.pory"
# 26 "data/maps/Route24_Frlg/scripts.pory"
# 50 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YoudBecomeTopRocketLeader
# 51 "data/maps/Route24_Frlg/scripts.pory"
# 27 "data/maps/Route24_Frlg/scripts.pory"
# 52 "data/maps/Route24_Frlg/scripts.pory"
	release
# 53 "data/maps/Route24_Frlg/scripts.pory"
	end
# 54 "data/maps/Route24_Frlg/scripts.pory"

# 55 "data/maps/Route24_Frlg/scripts.pory"

# 56 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTriggerLeft::
# 57 "data/maps/Route24_Frlg/scripts.pory"
# 32 "data/maps/Route24_Frlg/scripts.pory"
# 58 "data/maps/Route24_Frlg/scripts.pory"
	lockall
# 59 "data/maps/Route24_Frlg/scripts.pory"
# 33 "data/maps/Route24_Frlg/scripts.pory"
# 60 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 61 "data/maps/Route24_Frlg/scripts.pory"
# 34 "data/maps/Route24_Frlg/scripts.pory"
# 62 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_RocketTrigger
# 63 "data/maps/Route24_Frlg/scripts.pory"
	end
# 64 "data/maps/Route24_Frlg/scripts.pory"

# 65 "data/maps/Route24_Frlg/scripts.pory"

# 66 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTriggerRight::
# 67 "data/maps/Route24_Frlg/scripts.pory"
# 39 "data/maps/Route24_Frlg/scripts.pory"
# 68 "data/maps/Route24_Frlg/scripts.pory"
	lockall
# 69 "data/maps/Route24_Frlg/scripts.pory"
# 40 "data/maps/Route24_Frlg/scripts.pory"
# 70 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 71 "data/maps/Route24_Frlg/scripts.pory"
# 41 "data/maps/Route24_Frlg/scripts.pory"
# 72 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_RocketTrigger
# 73 "data/maps/Route24_Frlg/scripts.pory"
	end
# 74 "data/maps/Route24_Frlg/scripts.pory"

# 75 "data/maps/Route24_Frlg/scripts.pory"

# 76 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTrigger::
# 77 "data/maps/Route24_Frlg/scripts.pory"
# 46 "data/maps/Route24_Frlg/scripts.pory"
# 78 "data/maps/Route24_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 79 "data/maps/Route24_Frlg/scripts.pory"
# 47 "data/maps/Route24_Frlg/scripts.pory"
# 80 "data/maps/Route24_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 81 "data/maps/Route24_Frlg/scripts.pory"
	goto_if_eq Route24_EventScript_RocketTrigger_2
# 82 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTrigger_1:
# 83 "data/maps/Route24_Frlg/scripts.pory"
# 50 "data/maps/Route24_Frlg/scripts.pory"
# 84 "data/maps/Route24_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 85 "data/maps/Route24_Frlg/scripts.pory"
	goto_if_eq Route24_EventScript_RocketTrigger_5
# 86 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTrigger_4:
# 87 "data/maps/Route24_Frlg/scripts.pory"
# 53 "data/maps/Route24_Frlg/scripts.pory"
# 88 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 89 "data/maps/Route24_Frlg/scripts.pory"
# 54 "data/maps/Route24_Frlg/scripts.pory"
# 90 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route24_Frlg/scripts.pory"
# 55 "data/maps/Route24_Frlg/scripts.pory"
# 92 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_JustEarnedFabulousPrize
# 93 "data/maps/Route24_Frlg/scripts.pory"
# 56 "data/maps/Route24_Frlg/scripts.pory"
# 94 "data/maps/Route24_Frlg/scripts.pory"
	checkitemspace ITEM_NUGGET
# 95 "data/maps/Route24_Frlg/scripts.pory"
# 57 "data/maps/Route24_Frlg/scripts.pory"
# 96 "data/maps/Route24_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 97 "data/maps/Route24_Frlg/scripts.pory"
	goto_if_eq Route24_EventScript_RocketTrigger_8
# 98 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTrigger_7:
# 99 "data/maps/Route24_Frlg/scripts.pory"
# 60 "data/maps/Route24_Frlg/scripts.pory"
# 100 "data/maps/Route24_Frlg/scripts.pory"
	call Route24_EventScript_BattleRocket
# 101 "data/maps/Route24_Frlg/scripts.pory"
# 61 "data/maps/Route24_Frlg/scripts.pory"
# 102 "data/maps/Route24_Frlg/scripts.pory"
	releaseall
# 103 "data/maps/Route24_Frlg/scripts.pory"
	end
# 104 "data/maps/Route24_Frlg/scripts.pory"

# 105 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTrigger_2:
# 106 "data/maps/Route24_Frlg/scripts.pory"
# 48 "data/maps/Route24_Frlg/scripts.pory"
# 107 "data/maps/Route24_Frlg/scripts.pory"
	call Route24_EventScript_RocketApproachPlayer
# 108 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_RocketTrigger_1
# 109 "data/maps/Route24_Frlg/scripts.pory"

# 110 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTrigger_5:
# 111 "data/maps/Route24_Frlg/scripts.pory"
# 51 "data/maps/Route24_Frlg/scripts.pory"
# 112 "data/maps/Route24_Frlg/scripts.pory"
	call Route24_EventScript_RocketMotionToPlayer
# 113 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_RocketTrigger_4
# 114 "data/maps/Route24_Frlg/scripts.pory"

# 115 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTrigger_8:
# 116 "data/maps/Route24_Frlg/scripts.pory"
# 58 "data/maps/Route24_Frlg/scripts.pory"
# 117 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_NoRoomForNuggetTrigger
# 118 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_RocketTrigger_7
# 119 "data/maps/Route24_Frlg/scripts.pory"

# 120 "data/maps/Route24_Frlg/scripts.pory"

# 121 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_BattleRocket::
# 122 "data/maps/Route24_Frlg/scripts.pory"
# 66 "data/maps/Route24_Frlg/scripts.pory"
# 123 "data/maps/Route24_Frlg/scripts.pory"
	giveitem_msg Route24_Text_ReceivedNuggetFromMysteryTrainer, ITEM_NUGGET
# 124 "data/maps/Route24_Frlg/scripts.pory"
# 67 "data/maps/Route24_Frlg/scripts.pory"
# 125 "data/maps/Route24_Frlg/scripts.pory"
	message Route24_Text_JoinTeamRocket
# 126 "data/maps/Route24_Frlg/scripts.pory"
# 68 "data/maps/Route24_Frlg/scripts.pory"
# 127 "data/maps/Route24_Frlg/scripts.pory"
	waitmessage
# 128 "data/maps/Route24_Frlg/scripts.pory"
# 69 "data/maps/Route24_Frlg/scripts.pory"
# 129 "data/maps/Route24_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 130 "data/maps/Route24_Frlg/scripts.pory"
# 70 "data/maps/Route24_Frlg/scripts.pory"
# 131 "data/maps/Route24_Frlg/scripts.pory"
	waitbuttonpress
# 132 "data/maps/Route24_Frlg/scripts.pory"
# 71 "data/maps/Route24_Frlg/scripts.pory"
# 133 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE24_ROCKET
# 134 "data/maps/Route24_Frlg/scripts.pory"
# 72 "data/maps/Route24_Frlg/scripts.pory"
# 135 "data/maps/Route24_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_6, Route24_Text_RocketDefeat
# 136 "data/maps/Route24_Frlg/scripts.pory"
# 73 "data/maps/Route24_Frlg/scripts.pory"
# 137 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YoudBecomeTopRocketLeader
# 138 "data/maps/Route24_Frlg/scripts.pory"
# 74 "data/maps/Route24_Frlg/scripts.pory"
# 139 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE24, 1
# 140 "data/maps/Route24_Frlg/scripts.pory"
	return
# 141 "data/maps/Route24_Frlg/scripts.pory"

# 142 "data/maps/Route24_Frlg/scripts.pory"

# 143 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketApproachPlayer::
# 144 "data/maps/Route24_Frlg/scripts.pory"
# 79 "data/maps/Route24_Frlg/scripts.pory"
# 145 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketApproachPlayer
# 146 "data/maps/Route24_Frlg/scripts.pory"
# 80 "data/maps/Route24_Frlg/scripts.pory"
# 147 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route24_Frlg/scripts.pory"
	return
# 149 "data/maps/Route24_Frlg/scripts.pory"

# 150 "data/maps/Route24_Frlg/scripts.pory"

# 151 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketMotionToPlayer::
# 152 "data/maps/Route24_Frlg/scripts.pory"
# 85 "data/maps/Route24_Frlg/scripts.pory"
# 153 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Common_Movement_WalkInPlaceFasterLeft
# 154 "data/maps/Route24_Frlg/scripts.pory"
# 86 "data/maps/Route24_Frlg/scripts.pory"
# 155 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route24_Frlg/scripts.pory"
	return
# 157 "data/maps/Route24_Frlg/scripts.pory"

# 158 "data/maps/Route24_Frlg/scripts.pory"

# 159 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_NoRoomForNuggetTrigger::
# 160 "data/maps/Route24_Frlg/scripts.pory"
# 91 "data/maps/Route24_Frlg/scripts.pory"
# 161 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YouDontHaveAnyRoom
# 162 "data/maps/Route24_Frlg/scripts.pory"
# 92 "data/maps/Route24_Frlg/scripts.pory"
# 163 "data/maps/Route24_Frlg/scripts.pory"
	closemessage
# 164 "data/maps/Route24_Frlg/scripts.pory"
# 93 "data/maps/Route24_Frlg/scripts.pory"
# 165 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route24_Movement_WalkDown
# 166 "data/maps/Route24_Frlg/scripts.pory"
# 94 "data/maps/Route24_Frlg/scripts.pory"
# 167 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route24_Frlg/scripts.pory"
# 95 "data/maps/Route24_Frlg/scripts.pory"
# 169 "data/maps/Route24_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 170 "data/maps/Route24_Frlg/scripts.pory"
	goto_if_eq Route24_EventScript_NoRoomForNuggetTrigger_2
# 171 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_NoRoomForNuggetTrigger_1:
# 172 "data/maps/Route24_Frlg/scripts.pory"
# 98 "data/maps/Route24_Frlg/scripts.pory"
# 173 "data/maps/Route24_Frlg/scripts.pory"
	release
# 174 "data/maps/Route24_Frlg/scripts.pory"
	end
# 175 "data/maps/Route24_Frlg/scripts.pory"

# 176 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_NoRoomForNuggetTrigger_2:
# 177 "data/maps/Route24_Frlg/scripts.pory"
# 96 "data/maps/Route24_Frlg/scripts.pory"
# 178 "data/maps/Route24_Frlg/scripts.pory"
	call Route24_EventScript_RocketWalkBackToPos
# 179 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_NoRoomForNuggetTrigger_1
# 180 "data/maps/Route24_Frlg/scripts.pory"

# 181 "data/maps/Route24_Frlg/scripts.pory"

# 182 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketWalkBackToPos::
# 183 "data/maps/Route24_Frlg/scripts.pory"
# 103 "data/maps/Route24_Frlg/scripts.pory"
# 184 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketWalkBackToPos
# 185 "data/maps/Route24_Frlg/scripts.pory"
# 104 "data/maps/Route24_Frlg/scripts.pory"
# 186 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route24_Frlg/scripts.pory"
	return
# 188 "data/maps/Route24_Frlg/scripts.pory"

# 189 "data/maps/Route24_Frlg/scripts.pory"

# 190 "data/maps/Route24_Frlg/scripts.pory"
# 108 "data/maps/Route24_Frlg/scripts.pory"
# 191 "data/maps/Route24_Frlg/scripts.pory"
Route24_Movement_RocketApproachPlayer:
# 192 "data/maps/Route24_Frlg/scripts.pory"
# 109 "data/maps/Route24_Frlg/scripts.pory"
# 193 "data/maps/Route24_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/Route24_Frlg/scripts.pory"
# 110 "data/maps/Route24_Frlg/scripts.pory"
# 195 "data/maps/Route24_Frlg/scripts.pory"
	step_end
# 196 "data/maps/Route24_Frlg/scripts.pory"

# 197 "data/maps/Route24_Frlg/scripts.pory"
# 113 "data/maps/Route24_Frlg/scripts.pory"
# 198 "data/maps/Route24_Frlg/scripts.pory"
Route24_Movement_RocketWalkBackToPos:
# 199 "data/maps/Route24_Frlg/scripts.pory"
# 114 "data/maps/Route24_Frlg/scripts.pory"
# 200 "data/maps/Route24_Frlg/scripts.pory"
	walk_right
# 201 "data/maps/Route24_Frlg/scripts.pory"
# 115 "data/maps/Route24_Frlg/scripts.pory"
# 202 "data/maps/Route24_Frlg/scripts.pory"
	walk_in_place_faster_left
# 203 "data/maps/Route24_Frlg/scripts.pory"
# 116 "data/maps/Route24_Frlg/scripts.pory"
# 204 "data/maps/Route24_Frlg/scripts.pory"
	step_end
# 205 "data/maps/Route24_Frlg/scripts.pory"

# 206 "data/maps/Route24_Frlg/scripts.pory"
# 119 "data/maps/Route24_Frlg/scripts.pory"
# 207 "data/maps/Route24_Frlg/scripts.pory"
Route24_Movement_WalkDown:
# 208 "data/maps/Route24_Frlg/scripts.pory"
# 120 "data/maps/Route24_Frlg/scripts.pory"
# 209 "data/maps/Route24_Frlg/scripts.pory"
	walk_down
# 210 "data/maps/Route24_Frlg/scripts.pory"
# 121 "data/maps/Route24_Frlg/scripts.pory"
# 211 "data/maps/Route24_Frlg/scripts.pory"
	step_end
# 212 "data/maps/Route24_Frlg/scripts.pory"

# 213 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_JustEarnedFabulousPrize::
# 214 "data/maps/Route24_Frlg/scripts.pory"
# 124 "data/maps/Route24_Frlg/scripts.pory"
# 215 "data/maps/Route24_Frlg/scripts.pory"
	.string "Congratulations! You beat our\n"
# 216 "data/maps/Route24_Frlg/scripts.pory"
	.string "five contest TRAINERS!\p"
# 217 "data/maps/Route24_Frlg/scripts.pory"
	.string "You just earned a fabulous prize!$"
# 218 "data/maps/Route24_Frlg/scripts.pory"

# 219 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ReceivedNuggetFromMysteryTrainer::
# 220 "data/maps/Route24_Frlg/scripts.pory"
# 130 "data/maps/Route24_Frlg/scripts.pory"
# 221 "data/maps/Route24_Frlg/scripts.pory"
	.string "{PLAYER} received a NUGGET\n"
# 222 "data/maps/Route24_Frlg/scripts.pory"
	.string "from the mystery TRAINER!$"
# 223 "data/maps/Route24_Frlg/scripts.pory"

# 224 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_YouDontHaveAnyRoom::
# 225 "data/maps/Route24_Frlg/scripts.pory"
# 135 "data/maps/Route24_Frlg/scripts.pory"
# 226 "data/maps/Route24_Frlg/scripts.pory"
	.string "You don't have any room!$"
# 227 "data/maps/Route24_Frlg/scripts.pory"

# 228 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_JoinTeamRocket::
# 229 "data/maps/Route24_Frlg/scripts.pory"
# 139 "data/maps/Route24_Frlg/scripts.pory"
# 230 "data/maps/Route24_Frlg/scripts.pory"
	.string "By the way, how would you like to\n"
# 231 "data/maps/Route24_Frlg/scripts.pory"
	.string "join TEAM ROCKET?\p"
# 232 "data/maps/Route24_Frlg/scripts.pory"
	.string "We're a group of professional\n"
# 233 "data/maps/Route24_Frlg/scripts.pory"
	.string "criminals specializing in POKéMON!\p"
# 234 "data/maps/Route24_Frlg/scripts.pory"
	.string "Want to join?\p"
# 235 "data/maps/Route24_Frlg/scripts.pory"
	.string "Are you sure?\p"
# 236 "data/maps/Route24_Frlg/scripts.pory"
	.string "Come on, join us!\p"
# 237 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'm telling you to join!\p"
# 238 "data/maps/Route24_Frlg/scripts.pory"
	.string "…Okay, you need convincing!\p"
# 239 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'll make you an offer you can't\n"
# 240 "data/maps/Route24_Frlg/scripts.pory"
	.string "refuse!$"
# 241 "data/maps/Route24_Frlg/scripts.pory"

# 242 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_RocketDefeat::
# 243 "data/maps/Route24_Frlg/scripts.pory"
# 153 "data/maps/Route24_Frlg/scripts.pory"
# 244 "data/maps/Route24_Frlg/scripts.pory"
	.string "Arrgh!\n"
# 245 "data/maps/Route24_Frlg/scripts.pory"
	.string "You are good!$"
# 246 "data/maps/Route24_Frlg/scripts.pory"

# 247 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_YoudBecomeTopRocketLeader::
# 248 "data/maps/Route24_Frlg/scripts.pory"
# 158 "data/maps/Route24_Frlg/scripts.pory"
# 249 "data/maps/Route24_Frlg/scripts.pory"
	.string "With your ability, you'd become\n"
# 250 "data/maps/Route24_Frlg/scripts.pory"
	.string "a top leader in TEAM ROCKET.\p"
# 251 "data/maps/Route24_Frlg/scripts.pory"
	.string "Come on, think of the opportunity!\n"
# 252 "data/maps/Route24_Frlg/scripts.pory"
	.string "Don't let this chance go to waste.$"
# 253 "data/maps/Route24_Frlg/scripts.pory"

# 254 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ShaneIntro::
# 255 "data/maps/Route24_Frlg/scripts.pory"
# 165 "data/maps/Route24_Frlg/scripts.pory"
# 256 "data/maps/Route24_Frlg/scripts.pory"
	.string "I saw your feat from the grass!$"
# 257 "data/maps/Route24_Frlg/scripts.pory"

# 258 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ShaneDefeat::
# 259 "data/maps/Route24_Frlg/scripts.pory"
# 169 "data/maps/Route24_Frlg/scripts.pory"
# 260 "data/maps/Route24_Frlg/scripts.pory"
	.string "I thought not!$"
# 261 "data/maps/Route24_Frlg/scripts.pory"

# 262 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ShanePostBattle::
# 263 "data/maps/Route24_Frlg/scripts.pory"
# 173 "data/maps/Route24_Frlg/scripts.pory"
# 264 "data/maps/Route24_Frlg/scripts.pory"
	.string "I hid because the people on the\n"
# 265 "data/maps/Route24_Frlg/scripts.pory"
	.string "bridge frightened me.$"
# 266 "data/maps/Route24_Frlg/scripts.pory"

# 267 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_EthanIntro::
# 268 "data/maps/Route24_Frlg/scripts.pory"
# 178 "data/maps/Route24_Frlg/scripts.pory"
# 269 "data/maps/Route24_Frlg/scripts.pory"
	.string "Okay! I'm No. 5!\n"
# 270 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'll stomp you!$"
# 271 "data/maps/Route24_Frlg/scripts.pory"

# 272 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_EthanDefeat::
# 273 "data/maps/Route24_Frlg/scripts.pory"
# 183 "data/maps/Route24_Frlg/scripts.pory"
# 274 "data/maps/Route24_Frlg/scripts.pory"
	.string "Whoa!\n"
# 275 "data/maps/Route24_Frlg/scripts.pory"
	.string "Too much!$"
# 276 "data/maps/Route24_Frlg/scripts.pory"

# 277 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_EthanPostBattle::
# 278 "data/maps/Route24_Frlg/scripts.pory"
# 188 "data/maps/Route24_Frlg/scripts.pory"
# 279 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"
# 280 "data/maps/Route24_Frlg/scripts.pory"

# 281 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ReliIntro::
# 282 "data/maps/Route24_Frlg/scripts.pory"
# 192 "data/maps/Route24_Frlg/scripts.pory"
# 283 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'm No. 4!\n"
# 284 "data/maps/Route24_Frlg/scripts.pory"
	.string "Getting tired?$"
# 285 "data/maps/Route24_Frlg/scripts.pory"

# 286 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ReliDefeat::
# 287 "data/maps/Route24_Frlg/scripts.pory"
# 197 "data/maps/Route24_Frlg/scripts.pory"
# 288 "data/maps/Route24_Frlg/scripts.pory"
	.string "I lost, too!$"
# 289 "data/maps/Route24_Frlg/scripts.pory"

# 290 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ReliPostBattle::
# 291 "data/maps/Route24_Frlg/scripts.pory"
# 201 "data/maps/Route24_Frlg/scripts.pory"
# 292 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best, so I've no regrets!$"
# 293 "data/maps/Route24_Frlg/scripts.pory"

# 294 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_TimmyIntro::
# 295 "data/maps/Route24_Frlg/scripts.pory"
# 205 "data/maps/Route24_Frlg/scripts.pory"
# 296 "data/maps/Route24_Frlg/scripts.pory"
	.string "Here's No. 3!\n"
# 297 "data/maps/Route24_Frlg/scripts.pory"
	.string "I won't be easy!$"
# 298 "data/maps/Route24_Frlg/scripts.pory"

# 299 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_TimmyDefeat::
# 300 "data/maps/Route24_Frlg/scripts.pory"
# 210 "data/maps/Route24_Frlg/scripts.pory"
# 301 "data/maps/Route24_Frlg/scripts.pory"
	.string "Ow!\n"
# 302 "data/maps/Route24_Frlg/scripts.pory"
	.string "Stomped flat!$"
# 303 "data/maps/Route24_Frlg/scripts.pory"

# 304 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_TimmyPostBattle::
# 305 "data/maps/Route24_Frlg/scripts.pory"
# 215 "data/maps/Route24_Frlg/scripts.pory"
# 306 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"
# 307 "data/maps/Route24_Frlg/scripts.pory"

# 308 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_AliIntro::
# 309 "data/maps/Route24_Frlg/scripts.pory"
# 219 "data/maps/Route24_Frlg/scripts.pory"
# 310 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'm second!\n"
# 311 "data/maps/Route24_Frlg/scripts.pory"
	.string "Now it's serious!$"
# 312 "data/maps/Route24_Frlg/scripts.pory"

# 313 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_AliDefeat::
# 314 "data/maps/Route24_Frlg/scripts.pory"
# 224 "data/maps/Route24_Frlg/scripts.pory"
# 315 "data/maps/Route24_Frlg/scripts.pory"
	.string "How could I lose?$"
# 316 "data/maps/Route24_Frlg/scripts.pory"

# 317 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_AliPostBattle::
# 318 "data/maps/Route24_Frlg/scripts.pory"
# 228 "data/maps/Route24_Frlg/scripts.pory"
# 319 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"
# 320 "data/maps/Route24_Frlg/scripts.pory"

# 321 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_CaleIntro::
# 322 "data/maps/Route24_Frlg/scripts.pory"
# 232 "data/maps/Route24_Frlg/scripts.pory"
# 323 "data/maps/Route24_Frlg/scripts.pory"
	.string "People call this the NUGGET\n"
# 324 "data/maps/Route24_Frlg/scripts.pory"
	.string "BRIDGE!\p"
# 325 "data/maps/Route24_Frlg/scripts.pory"
	.string "Beat us five TRAINERS and win\n"
# 326 "data/maps/Route24_Frlg/scripts.pory"
	.string "a fabulous prize!\p"
# 327 "data/maps/Route24_Frlg/scripts.pory"
	.string "Think you got what it takes?$"
# 328 "data/maps/Route24_Frlg/scripts.pory"

# 329 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_CaleDefeat::
# 330 "data/maps/Route24_Frlg/scripts.pory"
# 240 "data/maps/Route24_Frlg/scripts.pory"
# 331 "data/maps/Route24_Frlg/scripts.pory"
	.string "Whoo!\n"
# 332 "data/maps/Route24_Frlg/scripts.pory"
	.string "Good stuff!$"
# 333 "data/maps/Route24_Frlg/scripts.pory"

# 334 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_CalePostBattle::
# 335 "data/maps/Route24_Frlg/scripts.pory"
# 245 "data/maps/Route24_Frlg/scripts.pory"
# 336 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"
