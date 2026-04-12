Route22_Frlg_MapScripts::
	.byte 0


Route22_EventScript_EarlyRivalTriggerTop::
# 4 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 5 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 6 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRivalTriggerMid::
# 11 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 12 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 14 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRivalTriggerBottom::
# 19 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 20 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 21 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 22 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRival::
# 27 "data/maps/Route22_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 28 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 29 "data/maps/Route22_Frlg/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 30 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route22_EventScript_EarlyRival_2
Route22_EventScript_EarlyRival_1:
# 33 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route22_EventScript_EarlyRival_5
Route22_EventScript_EarlyRival_4:
# 36 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Route22_EventScript_EarlyRival_8
Route22_EventScript_EarlyRival_7:
# 39 "data/maps/Route22_Frlg/scripts.pory"
	delay 6
# 40 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_EarlyRivalIntro
# 41 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq Route22_EventScript_EarlyRival_11
Route22_EventScript_EarlyRival_10:
# 44 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq Route22_EventScript_EarlyRival_14
Route22_EventScript_EarlyRival_13:
# 47 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq Route22_EventScript_EarlyRival_17
Route22_EventScript_EarlyRival_16:
# 50 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_EarlyRivalPostBattle
# 51 "data/maps/Route22_Frlg/scripts.pory"
	closemessage
# 52 "data/maps/Route22_Frlg/scripts.pory"
	delay 10
# 53 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 54 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route22_EventScript_EarlyRival_20
Route22_EventScript_EarlyRival_19:
# 57 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route22_EventScript_EarlyRival_23
Route22_EventScript_EarlyRival_22:
# 60 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Route22_EventScript_EarlyRival_26
Route22_EventScript_EarlyRival_25:
# 63 "data/maps/Route22_Frlg/scripts.pory"
	fadedefaultbgm
# 64 "data/maps/Route22_Frlg/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 65 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 66 "data/maps/Route22_Frlg/scripts.pory"
	releaseall
	end

Route22_EventScript_EarlyRival_2:
# 31 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalApproach
	goto Route22_EventScript_EarlyRival_1

Route22_EventScript_EarlyRival_5:
# 34 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalApproach
	goto Route22_EventScript_EarlyRival_4

Route22_EventScript_EarlyRival_8:
# 37 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalApproachBottom
	goto Route22_EventScript_EarlyRival_7

Route22_EventScript_EarlyRival_11:
# 42 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalSquirtle
	goto Route22_EventScript_EarlyRival_10

Route22_EventScript_EarlyRival_14:
# 45 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalBulbasaur
	goto Route22_EventScript_EarlyRival_13

Route22_EventScript_EarlyRival_17:
# 48 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalCharmander
	goto Route22_EventScript_EarlyRival_16

Route22_EventScript_EarlyRival_20:
# 55 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalExit
	goto Route22_EventScript_EarlyRival_19

Route22_EventScript_EarlyRival_23:
# 58 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalExit
	goto Route22_EventScript_EarlyRival_22

Route22_EventScript_EarlyRival_26:
# 61 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalExitBottom
	goto Route22_EventScript_EarlyRival_25


Route22_EventScript_EarlyRivalApproach::
# 71 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 72 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalApproachBottom::
# 77 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 78 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
# 79 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalSquirtle::
# 84 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return


Route22_EventScript_EarlyRivalBulbasaur::
# 89 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return


Route22_EventScript_EarlyRivalCharmander::
# 94 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return


Route22_EventScript_EarlyRivalExit::
# 99 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExit
# 100 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalExitBottom::
# 105 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExitBottom
# 106 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
	return


# 110 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_UnusedRivalExit:
# 111 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 112 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 113 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 114 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 115 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 116 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 117 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 118 "data/maps/Route22_Frlg/scripts.pory"
	step_end

# 121 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_EarlyRivalExit:
# 122 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 123 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 124 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 125 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 126 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 127 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 128 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 130 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 133 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 134 "data/maps/Route22_Frlg/scripts.pory"
	step_end

# 137 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_EarlyRivalExitBottom:
# 138 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 139 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 140 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 141 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 142 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 143 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 144 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 145 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 146 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 147 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 148 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 149 "data/maps/Route22_Frlg/scripts.pory"
	step_end

# 152 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_RivalApproach:
# 153 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 154 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 155 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 156 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 157 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 158 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 159 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 160 "data/maps/Route22_Frlg/scripts.pory"
	step_end

# 163 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_RivalApproachBottom:
# 164 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 165 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 166 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 167 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 168 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 169 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 170 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 171 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 172 "data/maps/Route22_Frlg/scripts.pory"
	walk_in_place_faster_down
# 173 "data/maps/Route22_Frlg/scripts.pory"
	step_end

# 176 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_PlayerFaceRival:
# 177 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 178 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 179 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 180 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 181 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 182 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 183 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 184 "data/maps/Route22_Frlg/scripts.pory"
	delay_8
# 185 "data/maps/Route22_Frlg/scripts.pory"
	walk_in_place_faster_up
# 186 "data/maps/Route22_Frlg/scripts.pory"
	step_end

Route22_EventScript_LateRivalTriggerTop::
# 190 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 191 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 192 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRivalTriggerMid::
# 197 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 198 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 199 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 200 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRivalTriggerBottom::
# 205 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 206 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 207 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 208 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRival::
# 213 "data/maps/Route22_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 214 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 215 "data/maps/Route22_Frlg/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 216 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route22_EventScript_LateRival_2
Route22_EventScript_LateRival_1:
# 219 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route22_EventScript_LateRival_5
Route22_EventScript_LateRival_4:
# 222 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Route22_EventScript_LateRival_8
Route22_EventScript_LateRival_7:
# 225 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_LateRivalIntro
# 226 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE22_RIVAL
# 227 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq Route22_EventScript_LateRival_11
Route22_EventScript_LateRival_10:
# 230 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq Route22_EventScript_LateRival_14
Route22_EventScript_LateRival_13:
# 233 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq Route22_EventScript_LateRival_17
Route22_EventScript_LateRival_16:
# 236 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_LateRivalPostBattle
# 237 "data/maps/Route22_Frlg/scripts.pory"
	closemessage
# 238 "data/maps/Route22_Frlg/scripts.pory"
	delay 10
# 239 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 240 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_LateRivalExit
# 241 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route22_Frlg/scripts.pory"
	fadedefaultbgm
# 243 "data/maps/Route22_Frlg/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 244 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 4
# 245 "data/maps/Route22_Frlg/scripts.pory"
	releaseall
	end

Route22_EventScript_LateRival_2:
# 217 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalApproach
	goto Route22_EventScript_LateRival_1

Route22_EventScript_LateRival_5:
# 220 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalApproach
	goto Route22_EventScript_LateRival_4

Route22_EventScript_LateRival_8:
# 223 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalApproachBottom
	goto Route22_EventScript_LateRival_7

Route22_EventScript_LateRival_11:
# 228 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalSquirtle
	goto Route22_EventScript_LateRival_10

Route22_EventScript_LateRival_14:
# 231 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalBulbasaur
	goto Route22_EventScript_LateRival_13

Route22_EventScript_LateRival_17:
# 234 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalCharmander
	goto Route22_EventScript_LateRival_16


Route22_EventScript_LateRivalApproach::
# 250 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 251 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_LateRivalApproachBottom::
# 256 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 257 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
# 258 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_LateRivalSquirtle::
# 263 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE, Route22_Text_LateRivalDefeat
	return


Route22_EventScript_LateRivalBulbasaur::
# 268 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR, Route22_Text_LateRivalDefeat
	return


Route22_EventScript_LateRivalCharmander::
# 273 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER, Route22_Text_LateRivalDefeat
	return


# 277 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_LateRivalExit:
# 278 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 279 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 280 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 281 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 282 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 283 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 284 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 285 "data/maps/Route22_Frlg/scripts.pory"
	step_end

Route22_EventScript_LeagueGateSign::
# 289 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_LeagueGateSign, MSGBOX_SIGN
	end


Route22_Text_EarlyRivalIntro::
# 293 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}: Hey! {PLAYER}!\p"
	.string "You're off to the POKéMON LEAGUE?\n"
	.string "Forget about it!\p"
	.string "You probably don't have any\n"
	.string "BADGES, do you?\p"
	.string "The guard won't let you through\n"
	.string "without them.\p"
	.string "By the way, did your POKéMON get\n"
	.string "any stronger?$"

Route22_Text_EarlyRivalDefeat::
# 305 "data/maps/Route22_Frlg/scripts.pory"
	.string "Awww!\n"
	.string "You just lucked out!$"

Route22_Text_EarlyRivalPostBattle::
# 310 "data/maps/Route22_Frlg/scripts.pory"
	.string "I heard the POKéMON LEAGUE is\n"
	.string "crawling with tough TRAINERS.\p"
	.string "I have to figure out how to get\n"
	.string "past them.\p"
	.string "You should quit dawdling and get a\n"
	.string "move on!$"

Route22_Text_RivalShouldCatchSomeMons::
# 319 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}“なんだ？\n"
	.string "ポケモン　2ひきも\l"
	.string "もってるの　なぜか　だって？\p"
	.string "おまえも\n"
	.string "つかまえれば　いい　じゃん！$"

Route22_Text_LateRivalIntro::
# 327 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}: What? {PLAYER}!\n"
	.string "What a surprise to see you here!\p"
	.string "So you're going to the POKéMON\n"
	.string "LEAGUE?\p"
	.string "You collected all the BADGES, too?\n"
	.string "That's cool!\p"
	.string "Then I'll whip you, {PLAYER}, as a\n"
	.string "warm-up for the POKéMON LEAGUE!\p"
	.string "Come on!$"

Route22_Text_LateRivalDefeat::
# 339 "data/maps/Route22_Frlg/scripts.pory"
	.string "What!?\p"
	.string "I was just careless, you!$"

Route22_Text_LateRivalPostBattle::
# 344 "data/maps/Route22_Frlg/scripts.pory"
	.string "That loosened me up.\n"
	.string "I'm ready for the POKéMON LEAGUE!\p"
	.string "{PLAYER}, you need more practice.\p"
	.string "But hey, you know that!\n"
	.string "I'm out of here. Smell ya!$"

Route22_Text_LateRivalVictory::
# 352 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}“ひゃははッ　{PLAYER}ー！\n"
	.string "それで　がんばってるのかよ！\l"
	.string "おれの　さいのうに　くらべりゃ\l"
	.string "{PLAYER}は　まだまだ　だな！\p"
	.string "もっと　れんしゅう　こいよ！\n"
	.string "あははーッ！$"

Route22_Text_LeagueGateSign::
# 361 "data/maps/Route22_Frlg/scripts.pory"
	.string "POKéMON LEAGUE\n"
	.string "Front Gate$"
