# 1 "data/maps/Route22_Frlg/scripts.pory"

# 2 "data/maps/Route22_Frlg/scripts.pory"
Route22_Frlg_MapScripts::
# 3 "data/maps/Route22_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route22_Frlg/scripts.pory"

# 5 "data/maps/Route22_Frlg/scripts.pory"

# 6 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRivalTriggerTop::
# 7 "data/maps/Route22_Frlg/scripts.pory"
# 4 "data/maps/Route22_Frlg/scripts.pory"
# 8 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 9 "data/maps/Route22_Frlg/scripts.pory"
# 5 "data/maps/Route22_Frlg/scripts.pory"
# 10 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/Route22_Frlg/scripts.pory"
# 6 "data/maps/Route22_Frlg/scripts.pory"
# 12 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival
# 13 "data/maps/Route22_Frlg/scripts.pory"
	end
# 14 "data/maps/Route22_Frlg/scripts.pory"

# 15 "data/maps/Route22_Frlg/scripts.pory"

# 16 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRivalTriggerMid::
# 17 "data/maps/Route22_Frlg/scripts.pory"
# 11 "data/maps/Route22_Frlg/scripts.pory"
# 18 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 19 "data/maps/Route22_Frlg/scripts.pory"
# 12 "data/maps/Route22_Frlg/scripts.pory"
# 20 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/Route22_Frlg/scripts.pory"
# 13 "data/maps/Route22_Frlg/scripts.pory"
# 22 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 23 "data/maps/Route22_Frlg/scripts.pory"
# 14 "data/maps/Route22_Frlg/scripts.pory"
# 24 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival
# 25 "data/maps/Route22_Frlg/scripts.pory"
	end
# 26 "data/maps/Route22_Frlg/scripts.pory"

# 27 "data/maps/Route22_Frlg/scripts.pory"

# 28 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRivalTriggerBottom::
# 29 "data/maps/Route22_Frlg/scripts.pory"
# 19 "data/maps/Route22_Frlg/scripts.pory"
# 30 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 31 "data/maps/Route22_Frlg/scripts.pory"
# 20 "data/maps/Route22_Frlg/scripts.pory"
# 32 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 33 "data/maps/Route22_Frlg/scripts.pory"
# 21 "data/maps/Route22_Frlg/scripts.pory"
# 34 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 35 "data/maps/Route22_Frlg/scripts.pory"
# 22 "data/maps/Route22_Frlg/scripts.pory"
# 36 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival
# 37 "data/maps/Route22_Frlg/scripts.pory"
	end
# 38 "data/maps/Route22_Frlg/scripts.pory"

# 39 "data/maps/Route22_Frlg/scripts.pory"

# 40 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival::
# 41 "data/maps/Route22_Frlg/scripts.pory"
# 27 "data/maps/Route22_Frlg/scripts.pory"
# 42 "data/maps/Route22_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 43 "data/maps/Route22_Frlg/scripts.pory"
# 28 "data/maps/Route22_Frlg/scripts.pory"
# 44 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 45 "data/maps/Route22_Frlg/scripts.pory"
# 29 "data/maps/Route22_Frlg/scripts.pory"
# 46 "data/maps/Route22_Frlg/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 47 "data/maps/Route22_Frlg/scripts.pory"
# 30 "data/maps/Route22_Frlg/scripts.pory"
# 48 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 49 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_EarlyRival_2
# 50 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_1:
# 51 "data/maps/Route22_Frlg/scripts.pory"
# 33 "data/maps/Route22_Frlg/scripts.pory"
# 52 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 53 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_EarlyRival_5
# 54 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_4:
# 55 "data/maps/Route22_Frlg/scripts.pory"
# 36 "data/maps/Route22_Frlg/scripts.pory"
# 56 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 57 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_EarlyRival_8
# 58 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_7:
# 59 "data/maps/Route22_Frlg/scripts.pory"
# 39 "data/maps/Route22_Frlg/scripts.pory"
# 60 "data/maps/Route22_Frlg/scripts.pory"
	delay 6
# 61 "data/maps/Route22_Frlg/scripts.pory"
# 40 "data/maps/Route22_Frlg/scripts.pory"
# 62 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_EarlyRivalIntro
# 63 "data/maps/Route22_Frlg/scripts.pory"
# 41 "data/maps/Route22_Frlg/scripts.pory"
# 64 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
# 65 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_EarlyRival_11
# 66 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_10:
# 67 "data/maps/Route22_Frlg/scripts.pory"
# 44 "data/maps/Route22_Frlg/scripts.pory"
# 68 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
# 69 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_EarlyRival_14
# 70 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_13:
# 71 "data/maps/Route22_Frlg/scripts.pory"
# 47 "data/maps/Route22_Frlg/scripts.pory"
# 72 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
# 73 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_EarlyRival_17
# 74 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_16:
# 75 "data/maps/Route22_Frlg/scripts.pory"
# 50 "data/maps/Route22_Frlg/scripts.pory"
# 76 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_EarlyRivalPostBattle
# 77 "data/maps/Route22_Frlg/scripts.pory"
# 51 "data/maps/Route22_Frlg/scripts.pory"
# 78 "data/maps/Route22_Frlg/scripts.pory"
	closemessage
# 79 "data/maps/Route22_Frlg/scripts.pory"
# 52 "data/maps/Route22_Frlg/scripts.pory"
# 80 "data/maps/Route22_Frlg/scripts.pory"
	delay 10
# 81 "data/maps/Route22_Frlg/scripts.pory"
# 53 "data/maps/Route22_Frlg/scripts.pory"
# 82 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 83 "data/maps/Route22_Frlg/scripts.pory"
# 54 "data/maps/Route22_Frlg/scripts.pory"
# 84 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 85 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_EarlyRival_20
# 86 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_19:
# 87 "data/maps/Route22_Frlg/scripts.pory"
# 57 "data/maps/Route22_Frlg/scripts.pory"
# 88 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 89 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_EarlyRival_23
# 90 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_22:
# 91 "data/maps/Route22_Frlg/scripts.pory"
# 60 "data/maps/Route22_Frlg/scripts.pory"
# 92 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 93 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_EarlyRival_26
# 94 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_25:
# 95 "data/maps/Route22_Frlg/scripts.pory"
# 63 "data/maps/Route22_Frlg/scripts.pory"
# 96 "data/maps/Route22_Frlg/scripts.pory"
	fadedefaultbgm
# 97 "data/maps/Route22_Frlg/scripts.pory"
# 64 "data/maps/Route22_Frlg/scripts.pory"
# 98 "data/maps/Route22_Frlg/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 99 "data/maps/Route22_Frlg/scripts.pory"
# 65 "data/maps/Route22_Frlg/scripts.pory"
# 100 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 101 "data/maps/Route22_Frlg/scripts.pory"
# 66 "data/maps/Route22_Frlg/scripts.pory"
# 102 "data/maps/Route22_Frlg/scripts.pory"
	releaseall
# 103 "data/maps/Route22_Frlg/scripts.pory"
	end
# 104 "data/maps/Route22_Frlg/scripts.pory"

# 105 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_2:
# 106 "data/maps/Route22_Frlg/scripts.pory"
# 31 "data/maps/Route22_Frlg/scripts.pory"
# 107 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalApproach
# 108 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival_1
# 109 "data/maps/Route22_Frlg/scripts.pory"

# 110 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_5:
# 111 "data/maps/Route22_Frlg/scripts.pory"
# 34 "data/maps/Route22_Frlg/scripts.pory"
# 112 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalApproach
# 113 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival_4
# 114 "data/maps/Route22_Frlg/scripts.pory"

# 115 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_8:
# 116 "data/maps/Route22_Frlg/scripts.pory"
# 37 "data/maps/Route22_Frlg/scripts.pory"
# 117 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalApproachBottom
# 118 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival_7
# 119 "data/maps/Route22_Frlg/scripts.pory"

# 120 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_11:
# 121 "data/maps/Route22_Frlg/scripts.pory"
# 42 "data/maps/Route22_Frlg/scripts.pory"
# 122 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalSquirtle
# 123 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival_10
# 124 "data/maps/Route22_Frlg/scripts.pory"

# 125 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_14:
# 126 "data/maps/Route22_Frlg/scripts.pory"
# 45 "data/maps/Route22_Frlg/scripts.pory"
# 127 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalBulbasaur
# 128 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival_13
# 129 "data/maps/Route22_Frlg/scripts.pory"

# 130 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_17:
# 131 "data/maps/Route22_Frlg/scripts.pory"
# 48 "data/maps/Route22_Frlg/scripts.pory"
# 132 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalCharmander
# 133 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival_16
# 134 "data/maps/Route22_Frlg/scripts.pory"

# 135 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_20:
# 136 "data/maps/Route22_Frlg/scripts.pory"
# 55 "data/maps/Route22_Frlg/scripts.pory"
# 137 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalExit
# 138 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival_19
# 139 "data/maps/Route22_Frlg/scripts.pory"

# 140 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_23:
# 141 "data/maps/Route22_Frlg/scripts.pory"
# 58 "data/maps/Route22_Frlg/scripts.pory"
# 142 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalExit
# 143 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival_22
# 144 "data/maps/Route22_Frlg/scripts.pory"

# 145 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_26:
# 146 "data/maps/Route22_Frlg/scripts.pory"
# 61 "data/maps/Route22_Frlg/scripts.pory"
# 147 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_EarlyRivalExitBottom
# 148 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival_25
# 149 "data/maps/Route22_Frlg/scripts.pory"

# 150 "data/maps/Route22_Frlg/scripts.pory"

# 151 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRivalApproach::
# 152 "data/maps/Route22_Frlg/scripts.pory"
# 71 "data/maps/Route22_Frlg/scripts.pory"
# 153 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 154 "data/maps/Route22_Frlg/scripts.pory"
# 72 "data/maps/Route22_Frlg/scripts.pory"
# 155 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route22_Frlg/scripts.pory"
	return
# 157 "data/maps/Route22_Frlg/scripts.pory"

# 158 "data/maps/Route22_Frlg/scripts.pory"

# 159 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRivalApproachBottom::
# 160 "data/maps/Route22_Frlg/scripts.pory"
# 77 "data/maps/Route22_Frlg/scripts.pory"
# 161 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 162 "data/maps/Route22_Frlg/scripts.pory"
# 78 "data/maps/Route22_Frlg/scripts.pory"
# 163 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
# 164 "data/maps/Route22_Frlg/scripts.pory"
# 79 "data/maps/Route22_Frlg/scripts.pory"
# 165 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route22_Frlg/scripts.pory"
	return
# 167 "data/maps/Route22_Frlg/scripts.pory"

# 168 "data/maps/Route22_Frlg/scripts.pory"

# 169 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRivalSquirtle::
# 170 "data/maps/Route22_Frlg/scripts.pory"
# 84 "data/maps/Route22_Frlg/scripts.pory"
# 171 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
# 172 "data/maps/Route22_Frlg/scripts.pory"
	return
# 173 "data/maps/Route22_Frlg/scripts.pory"

# 174 "data/maps/Route22_Frlg/scripts.pory"

# 175 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRivalBulbasaur::
# 176 "data/maps/Route22_Frlg/scripts.pory"
# 89 "data/maps/Route22_Frlg/scripts.pory"
# 177 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
# 178 "data/maps/Route22_Frlg/scripts.pory"
	return
# 179 "data/maps/Route22_Frlg/scripts.pory"

# 180 "data/maps/Route22_Frlg/scripts.pory"

# 181 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRivalCharmander::
# 182 "data/maps/Route22_Frlg/scripts.pory"
# 94 "data/maps/Route22_Frlg/scripts.pory"
# 183 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
# 184 "data/maps/Route22_Frlg/scripts.pory"
	return
# 185 "data/maps/Route22_Frlg/scripts.pory"

# 186 "data/maps/Route22_Frlg/scripts.pory"

# 187 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRivalExit::
# 188 "data/maps/Route22_Frlg/scripts.pory"
# 99 "data/maps/Route22_Frlg/scripts.pory"
# 189 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExit
# 190 "data/maps/Route22_Frlg/scripts.pory"
# 100 "data/maps/Route22_Frlg/scripts.pory"
# 191 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route22_Frlg/scripts.pory"
	return
# 193 "data/maps/Route22_Frlg/scripts.pory"

# 194 "data/maps/Route22_Frlg/scripts.pory"

# 195 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRivalExitBottom::
# 196 "data/maps/Route22_Frlg/scripts.pory"
# 105 "data/maps/Route22_Frlg/scripts.pory"
# 197 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExitBottom
# 198 "data/maps/Route22_Frlg/scripts.pory"
# 106 "data/maps/Route22_Frlg/scripts.pory"
# 199 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route22_Frlg/scripts.pory"
	return
# 201 "data/maps/Route22_Frlg/scripts.pory"

# 202 "data/maps/Route22_Frlg/scripts.pory"

# 203 "data/maps/Route22_Frlg/scripts.pory"
# 110 "data/maps/Route22_Frlg/scripts.pory"
# 204 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_UnusedRivalExit:
# 205 "data/maps/Route22_Frlg/scripts.pory"
# 111 "data/maps/Route22_Frlg/scripts.pory"
# 206 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 207 "data/maps/Route22_Frlg/scripts.pory"
# 112 "data/maps/Route22_Frlg/scripts.pory"
# 208 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 209 "data/maps/Route22_Frlg/scripts.pory"
# 113 "data/maps/Route22_Frlg/scripts.pory"
# 210 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 211 "data/maps/Route22_Frlg/scripts.pory"
# 114 "data/maps/Route22_Frlg/scripts.pory"
# 212 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 213 "data/maps/Route22_Frlg/scripts.pory"
# 115 "data/maps/Route22_Frlg/scripts.pory"
# 214 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 215 "data/maps/Route22_Frlg/scripts.pory"
# 116 "data/maps/Route22_Frlg/scripts.pory"
# 216 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 217 "data/maps/Route22_Frlg/scripts.pory"
# 117 "data/maps/Route22_Frlg/scripts.pory"
# 218 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 219 "data/maps/Route22_Frlg/scripts.pory"
# 118 "data/maps/Route22_Frlg/scripts.pory"
# 220 "data/maps/Route22_Frlg/scripts.pory"
	step_end
# 221 "data/maps/Route22_Frlg/scripts.pory"

# 222 "data/maps/Route22_Frlg/scripts.pory"
# 121 "data/maps/Route22_Frlg/scripts.pory"
# 223 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_EarlyRivalExit:
# 224 "data/maps/Route22_Frlg/scripts.pory"
# 122 "data/maps/Route22_Frlg/scripts.pory"
# 225 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 226 "data/maps/Route22_Frlg/scripts.pory"
# 123 "data/maps/Route22_Frlg/scripts.pory"
# 227 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 228 "data/maps/Route22_Frlg/scripts.pory"
# 124 "data/maps/Route22_Frlg/scripts.pory"
# 229 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 230 "data/maps/Route22_Frlg/scripts.pory"
# 125 "data/maps/Route22_Frlg/scripts.pory"
# 231 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 232 "data/maps/Route22_Frlg/scripts.pory"
# 126 "data/maps/Route22_Frlg/scripts.pory"
# 233 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 234 "data/maps/Route22_Frlg/scripts.pory"
# 127 "data/maps/Route22_Frlg/scripts.pory"
# 235 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 236 "data/maps/Route22_Frlg/scripts.pory"
# 128 "data/maps/Route22_Frlg/scripts.pory"
# 237 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 238 "data/maps/Route22_Frlg/scripts.pory"
# 129 "data/maps/Route22_Frlg/scripts.pory"
# 239 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 240 "data/maps/Route22_Frlg/scripts.pory"
# 130 "data/maps/Route22_Frlg/scripts.pory"
# 241 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 242 "data/maps/Route22_Frlg/scripts.pory"
# 131 "data/maps/Route22_Frlg/scripts.pory"
# 243 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 244 "data/maps/Route22_Frlg/scripts.pory"
# 132 "data/maps/Route22_Frlg/scripts.pory"
# 245 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 246 "data/maps/Route22_Frlg/scripts.pory"
# 133 "data/maps/Route22_Frlg/scripts.pory"
# 247 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 248 "data/maps/Route22_Frlg/scripts.pory"
# 134 "data/maps/Route22_Frlg/scripts.pory"
# 249 "data/maps/Route22_Frlg/scripts.pory"
	step_end
# 250 "data/maps/Route22_Frlg/scripts.pory"

# 251 "data/maps/Route22_Frlg/scripts.pory"
# 137 "data/maps/Route22_Frlg/scripts.pory"
# 252 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_EarlyRivalExitBottom:
# 253 "data/maps/Route22_Frlg/scripts.pory"
# 138 "data/maps/Route22_Frlg/scripts.pory"
# 254 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 255 "data/maps/Route22_Frlg/scripts.pory"
# 139 "data/maps/Route22_Frlg/scripts.pory"
# 256 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 257 "data/maps/Route22_Frlg/scripts.pory"
# 140 "data/maps/Route22_Frlg/scripts.pory"
# 258 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 259 "data/maps/Route22_Frlg/scripts.pory"
# 141 "data/maps/Route22_Frlg/scripts.pory"
# 260 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 261 "data/maps/Route22_Frlg/scripts.pory"
# 142 "data/maps/Route22_Frlg/scripts.pory"
# 262 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 263 "data/maps/Route22_Frlg/scripts.pory"
# 143 "data/maps/Route22_Frlg/scripts.pory"
# 264 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 265 "data/maps/Route22_Frlg/scripts.pory"
# 144 "data/maps/Route22_Frlg/scripts.pory"
# 266 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 267 "data/maps/Route22_Frlg/scripts.pory"
# 145 "data/maps/Route22_Frlg/scripts.pory"
# 268 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 269 "data/maps/Route22_Frlg/scripts.pory"
# 146 "data/maps/Route22_Frlg/scripts.pory"
# 270 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 271 "data/maps/Route22_Frlg/scripts.pory"
# 147 "data/maps/Route22_Frlg/scripts.pory"
# 272 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 273 "data/maps/Route22_Frlg/scripts.pory"
# 148 "data/maps/Route22_Frlg/scripts.pory"
# 274 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 275 "data/maps/Route22_Frlg/scripts.pory"
# 149 "data/maps/Route22_Frlg/scripts.pory"
# 276 "data/maps/Route22_Frlg/scripts.pory"
	step_end
# 277 "data/maps/Route22_Frlg/scripts.pory"

# 278 "data/maps/Route22_Frlg/scripts.pory"
# 152 "data/maps/Route22_Frlg/scripts.pory"
# 279 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_RivalApproach:
# 280 "data/maps/Route22_Frlg/scripts.pory"
# 153 "data/maps/Route22_Frlg/scripts.pory"
# 281 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 282 "data/maps/Route22_Frlg/scripts.pory"
# 154 "data/maps/Route22_Frlg/scripts.pory"
# 283 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 284 "data/maps/Route22_Frlg/scripts.pory"
# 155 "data/maps/Route22_Frlg/scripts.pory"
# 285 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 286 "data/maps/Route22_Frlg/scripts.pory"
# 156 "data/maps/Route22_Frlg/scripts.pory"
# 287 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 288 "data/maps/Route22_Frlg/scripts.pory"
# 157 "data/maps/Route22_Frlg/scripts.pory"
# 289 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 290 "data/maps/Route22_Frlg/scripts.pory"
# 158 "data/maps/Route22_Frlg/scripts.pory"
# 291 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 292 "data/maps/Route22_Frlg/scripts.pory"
# 159 "data/maps/Route22_Frlg/scripts.pory"
# 293 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 294 "data/maps/Route22_Frlg/scripts.pory"
# 160 "data/maps/Route22_Frlg/scripts.pory"
# 295 "data/maps/Route22_Frlg/scripts.pory"
	step_end
# 296 "data/maps/Route22_Frlg/scripts.pory"

# 297 "data/maps/Route22_Frlg/scripts.pory"
# 163 "data/maps/Route22_Frlg/scripts.pory"
# 298 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_RivalApproachBottom:
# 299 "data/maps/Route22_Frlg/scripts.pory"
# 164 "data/maps/Route22_Frlg/scripts.pory"
# 300 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 301 "data/maps/Route22_Frlg/scripts.pory"
# 165 "data/maps/Route22_Frlg/scripts.pory"
# 302 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 303 "data/maps/Route22_Frlg/scripts.pory"
# 166 "data/maps/Route22_Frlg/scripts.pory"
# 304 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 305 "data/maps/Route22_Frlg/scripts.pory"
# 167 "data/maps/Route22_Frlg/scripts.pory"
# 306 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 307 "data/maps/Route22_Frlg/scripts.pory"
# 168 "data/maps/Route22_Frlg/scripts.pory"
# 308 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 309 "data/maps/Route22_Frlg/scripts.pory"
# 169 "data/maps/Route22_Frlg/scripts.pory"
# 310 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 311 "data/maps/Route22_Frlg/scripts.pory"
# 170 "data/maps/Route22_Frlg/scripts.pory"
# 312 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 313 "data/maps/Route22_Frlg/scripts.pory"
# 171 "data/maps/Route22_Frlg/scripts.pory"
# 314 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 315 "data/maps/Route22_Frlg/scripts.pory"
# 172 "data/maps/Route22_Frlg/scripts.pory"
# 316 "data/maps/Route22_Frlg/scripts.pory"
	walk_in_place_faster_down
# 317 "data/maps/Route22_Frlg/scripts.pory"
# 173 "data/maps/Route22_Frlg/scripts.pory"
# 318 "data/maps/Route22_Frlg/scripts.pory"
	step_end
# 319 "data/maps/Route22_Frlg/scripts.pory"

# 320 "data/maps/Route22_Frlg/scripts.pory"
# 176 "data/maps/Route22_Frlg/scripts.pory"
# 321 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_PlayerFaceRival:
# 322 "data/maps/Route22_Frlg/scripts.pory"
# 177 "data/maps/Route22_Frlg/scripts.pory"
# 323 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 324 "data/maps/Route22_Frlg/scripts.pory"
# 178 "data/maps/Route22_Frlg/scripts.pory"
# 325 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 326 "data/maps/Route22_Frlg/scripts.pory"
# 179 "data/maps/Route22_Frlg/scripts.pory"
# 327 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 328 "data/maps/Route22_Frlg/scripts.pory"
# 180 "data/maps/Route22_Frlg/scripts.pory"
# 329 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 330 "data/maps/Route22_Frlg/scripts.pory"
# 181 "data/maps/Route22_Frlg/scripts.pory"
# 331 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 332 "data/maps/Route22_Frlg/scripts.pory"
# 182 "data/maps/Route22_Frlg/scripts.pory"
# 333 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 334 "data/maps/Route22_Frlg/scripts.pory"
# 183 "data/maps/Route22_Frlg/scripts.pory"
# 335 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 336 "data/maps/Route22_Frlg/scripts.pory"
# 184 "data/maps/Route22_Frlg/scripts.pory"
# 337 "data/maps/Route22_Frlg/scripts.pory"
	delay_8
# 338 "data/maps/Route22_Frlg/scripts.pory"
# 185 "data/maps/Route22_Frlg/scripts.pory"
# 339 "data/maps/Route22_Frlg/scripts.pory"
	walk_in_place_faster_up
# 340 "data/maps/Route22_Frlg/scripts.pory"
# 186 "data/maps/Route22_Frlg/scripts.pory"
# 341 "data/maps/Route22_Frlg/scripts.pory"
	step_end
# 342 "data/maps/Route22_Frlg/scripts.pory"

# 343 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRivalTriggerTop::
# 344 "data/maps/Route22_Frlg/scripts.pory"
# 190 "data/maps/Route22_Frlg/scripts.pory"
# 345 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 346 "data/maps/Route22_Frlg/scripts.pory"
# 191 "data/maps/Route22_Frlg/scripts.pory"
# 347 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 348 "data/maps/Route22_Frlg/scripts.pory"
# 192 "data/maps/Route22_Frlg/scripts.pory"
# 349 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival
# 350 "data/maps/Route22_Frlg/scripts.pory"
	end
# 351 "data/maps/Route22_Frlg/scripts.pory"

# 352 "data/maps/Route22_Frlg/scripts.pory"

# 353 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRivalTriggerMid::
# 354 "data/maps/Route22_Frlg/scripts.pory"
# 197 "data/maps/Route22_Frlg/scripts.pory"
# 355 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 356 "data/maps/Route22_Frlg/scripts.pory"
# 198 "data/maps/Route22_Frlg/scripts.pory"
# 357 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 358 "data/maps/Route22_Frlg/scripts.pory"
# 199 "data/maps/Route22_Frlg/scripts.pory"
# 359 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 360 "data/maps/Route22_Frlg/scripts.pory"
# 200 "data/maps/Route22_Frlg/scripts.pory"
# 361 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival
# 362 "data/maps/Route22_Frlg/scripts.pory"
	end
# 363 "data/maps/Route22_Frlg/scripts.pory"

# 364 "data/maps/Route22_Frlg/scripts.pory"

# 365 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRivalTriggerBottom::
# 366 "data/maps/Route22_Frlg/scripts.pory"
# 205 "data/maps/Route22_Frlg/scripts.pory"
# 367 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 368 "data/maps/Route22_Frlg/scripts.pory"
# 206 "data/maps/Route22_Frlg/scripts.pory"
# 369 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 370 "data/maps/Route22_Frlg/scripts.pory"
# 207 "data/maps/Route22_Frlg/scripts.pory"
# 371 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 372 "data/maps/Route22_Frlg/scripts.pory"
# 208 "data/maps/Route22_Frlg/scripts.pory"
# 373 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival
# 374 "data/maps/Route22_Frlg/scripts.pory"
	end
# 375 "data/maps/Route22_Frlg/scripts.pory"

# 376 "data/maps/Route22_Frlg/scripts.pory"

# 377 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival::
# 378 "data/maps/Route22_Frlg/scripts.pory"
# 213 "data/maps/Route22_Frlg/scripts.pory"
# 379 "data/maps/Route22_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 380 "data/maps/Route22_Frlg/scripts.pory"
# 214 "data/maps/Route22_Frlg/scripts.pory"
# 381 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 382 "data/maps/Route22_Frlg/scripts.pory"
# 215 "data/maps/Route22_Frlg/scripts.pory"
# 383 "data/maps/Route22_Frlg/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 384 "data/maps/Route22_Frlg/scripts.pory"
# 216 "data/maps/Route22_Frlg/scripts.pory"
# 385 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 386 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_LateRival_2
# 387 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_1:
# 388 "data/maps/Route22_Frlg/scripts.pory"
# 219 "data/maps/Route22_Frlg/scripts.pory"
# 389 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 390 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_LateRival_5
# 391 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_4:
# 392 "data/maps/Route22_Frlg/scripts.pory"
# 222 "data/maps/Route22_Frlg/scripts.pory"
# 393 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 394 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_LateRival_8
# 395 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_7:
# 396 "data/maps/Route22_Frlg/scripts.pory"
# 225 "data/maps/Route22_Frlg/scripts.pory"
# 397 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_LateRivalIntro
# 398 "data/maps/Route22_Frlg/scripts.pory"
# 226 "data/maps/Route22_Frlg/scripts.pory"
# 399 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE22_RIVAL
# 400 "data/maps/Route22_Frlg/scripts.pory"
# 227 "data/maps/Route22_Frlg/scripts.pory"
# 401 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
# 402 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_LateRival_11
# 403 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_10:
# 404 "data/maps/Route22_Frlg/scripts.pory"
# 230 "data/maps/Route22_Frlg/scripts.pory"
# 405 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
# 406 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_LateRival_14
# 407 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_13:
# 408 "data/maps/Route22_Frlg/scripts.pory"
# 233 "data/maps/Route22_Frlg/scripts.pory"
# 409 "data/maps/Route22_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
# 410 "data/maps/Route22_Frlg/scripts.pory"
	goto_if_eq Route22_EventScript_LateRival_17
# 411 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_16:
# 412 "data/maps/Route22_Frlg/scripts.pory"
# 236 "data/maps/Route22_Frlg/scripts.pory"
# 413 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_LateRivalPostBattle
# 414 "data/maps/Route22_Frlg/scripts.pory"
# 237 "data/maps/Route22_Frlg/scripts.pory"
# 415 "data/maps/Route22_Frlg/scripts.pory"
	closemessage
# 416 "data/maps/Route22_Frlg/scripts.pory"
# 238 "data/maps/Route22_Frlg/scripts.pory"
# 417 "data/maps/Route22_Frlg/scripts.pory"
	delay 10
# 418 "data/maps/Route22_Frlg/scripts.pory"
# 239 "data/maps/Route22_Frlg/scripts.pory"
# 419 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 420 "data/maps/Route22_Frlg/scripts.pory"
# 240 "data/maps/Route22_Frlg/scripts.pory"
# 421 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_LateRivalExit
# 422 "data/maps/Route22_Frlg/scripts.pory"
# 241 "data/maps/Route22_Frlg/scripts.pory"
# 423 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route22_Frlg/scripts.pory"
# 242 "data/maps/Route22_Frlg/scripts.pory"
# 425 "data/maps/Route22_Frlg/scripts.pory"
	fadedefaultbgm
# 426 "data/maps/Route22_Frlg/scripts.pory"
# 243 "data/maps/Route22_Frlg/scripts.pory"
# 427 "data/maps/Route22_Frlg/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 428 "data/maps/Route22_Frlg/scripts.pory"
# 244 "data/maps/Route22_Frlg/scripts.pory"
# 429 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 4
# 430 "data/maps/Route22_Frlg/scripts.pory"
# 245 "data/maps/Route22_Frlg/scripts.pory"
# 431 "data/maps/Route22_Frlg/scripts.pory"
	releaseall
# 432 "data/maps/Route22_Frlg/scripts.pory"
	end
# 433 "data/maps/Route22_Frlg/scripts.pory"

# 434 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_2:
# 435 "data/maps/Route22_Frlg/scripts.pory"
# 217 "data/maps/Route22_Frlg/scripts.pory"
# 436 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalApproach
# 437 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival_1
# 438 "data/maps/Route22_Frlg/scripts.pory"

# 439 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_5:
# 440 "data/maps/Route22_Frlg/scripts.pory"
# 220 "data/maps/Route22_Frlg/scripts.pory"
# 441 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalApproach
# 442 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival_4
# 443 "data/maps/Route22_Frlg/scripts.pory"

# 444 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_8:
# 445 "data/maps/Route22_Frlg/scripts.pory"
# 223 "data/maps/Route22_Frlg/scripts.pory"
# 446 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalApproachBottom
# 447 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival_7
# 448 "data/maps/Route22_Frlg/scripts.pory"

# 449 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_11:
# 450 "data/maps/Route22_Frlg/scripts.pory"
# 228 "data/maps/Route22_Frlg/scripts.pory"
# 451 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalSquirtle
# 452 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival_10
# 453 "data/maps/Route22_Frlg/scripts.pory"

# 454 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_14:
# 455 "data/maps/Route22_Frlg/scripts.pory"
# 231 "data/maps/Route22_Frlg/scripts.pory"
# 456 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalBulbasaur
# 457 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival_13
# 458 "data/maps/Route22_Frlg/scripts.pory"

# 459 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_17:
# 460 "data/maps/Route22_Frlg/scripts.pory"
# 234 "data/maps/Route22_Frlg/scripts.pory"
# 461 "data/maps/Route22_Frlg/scripts.pory"
	call Route22_EventScript_LateRivalCharmander
# 462 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival_16
# 463 "data/maps/Route22_Frlg/scripts.pory"

# 464 "data/maps/Route22_Frlg/scripts.pory"

# 465 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRivalApproach::
# 466 "data/maps/Route22_Frlg/scripts.pory"
# 250 "data/maps/Route22_Frlg/scripts.pory"
# 467 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 468 "data/maps/Route22_Frlg/scripts.pory"
# 251 "data/maps/Route22_Frlg/scripts.pory"
# 469 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
# 470 "data/maps/Route22_Frlg/scripts.pory"
	return
# 471 "data/maps/Route22_Frlg/scripts.pory"

# 472 "data/maps/Route22_Frlg/scripts.pory"

# 473 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRivalApproachBottom::
# 474 "data/maps/Route22_Frlg/scripts.pory"
# 256 "data/maps/Route22_Frlg/scripts.pory"
# 475 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 476 "data/maps/Route22_Frlg/scripts.pory"
# 257 "data/maps/Route22_Frlg/scripts.pory"
# 477 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
# 478 "data/maps/Route22_Frlg/scripts.pory"
# 258 "data/maps/Route22_Frlg/scripts.pory"
# 479 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
# 480 "data/maps/Route22_Frlg/scripts.pory"
	return
# 481 "data/maps/Route22_Frlg/scripts.pory"

# 482 "data/maps/Route22_Frlg/scripts.pory"

# 483 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRivalSquirtle::
# 484 "data/maps/Route22_Frlg/scripts.pory"
# 263 "data/maps/Route22_Frlg/scripts.pory"
# 485 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE, Route22_Text_LateRivalDefeat
# 486 "data/maps/Route22_Frlg/scripts.pory"
	return
# 487 "data/maps/Route22_Frlg/scripts.pory"

# 488 "data/maps/Route22_Frlg/scripts.pory"

# 489 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRivalBulbasaur::
# 490 "data/maps/Route22_Frlg/scripts.pory"
# 268 "data/maps/Route22_Frlg/scripts.pory"
# 491 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR, Route22_Text_LateRivalDefeat
# 492 "data/maps/Route22_Frlg/scripts.pory"
	return
# 493 "data/maps/Route22_Frlg/scripts.pory"

# 494 "data/maps/Route22_Frlg/scripts.pory"

# 495 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRivalCharmander::
# 496 "data/maps/Route22_Frlg/scripts.pory"
# 273 "data/maps/Route22_Frlg/scripts.pory"
# 497 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER, Route22_Text_LateRivalDefeat
# 498 "data/maps/Route22_Frlg/scripts.pory"
	return
# 499 "data/maps/Route22_Frlg/scripts.pory"

# 500 "data/maps/Route22_Frlg/scripts.pory"

# 501 "data/maps/Route22_Frlg/scripts.pory"
# 277 "data/maps/Route22_Frlg/scripts.pory"
# 502 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_LateRivalExit:
# 503 "data/maps/Route22_Frlg/scripts.pory"
# 278 "data/maps/Route22_Frlg/scripts.pory"
# 504 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 505 "data/maps/Route22_Frlg/scripts.pory"
# 279 "data/maps/Route22_Frlg/scripts.pory"
# 506 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 507 "data/maps/Route22_Frlg/scripts.pory"
# 280 "data/maps/Route22_Frlg/scripts.pory"
# 508 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 509 "data/maps/Route22_Frlg/scripts.pory"
# 281 "data/maps/Route22_Frlg/scripts.pory"
# 510 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 511 "data/maps/Route22_Frlg/scripts.pory"
# 282 "data/maps/Route22_Frlg/scripts.pory"
# 512 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 513 "data/maps/Route22_Frlg/scripts.pory"
# 283 "data/maps/Route22_Frlg/scripts.pory"
# 514 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 515 "data/maps/Route22_Frlg/scripts.pory"
# 284 "data/maps/Route22_Frlg/scripts.pory"
# 516 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 517 "data/maps/Route22_Frlg/scripts.pory"
# 285 "data/maps/Route22_Frlg/scripts.pory"
# 518 "data/maps/Route22_Frlg/scripts.pory"
	step_end
# 519 "data/maps/Route22_Frlg/scripts.pory"

# 520 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LeagueGateSign::
# 521 "data/maps/Route22_Frlg/scripts.pory"
# 289 "data/maps/Route22_Frlg/scripts.pory"
# 522 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_LeagueGateSign, MSGBOX_SIGN
# 523 "data/maps/Route22_Frlg/scripts.pory"
	end
# 524 "data/maps/Route22_Frlg/scripts.pory"

# 525 "data/maps/Route22_Frlg/scripts.pory"

# 526 "data/maps/Route22_Frlg/scripts.pory"
Route22_Text_EarlyRivalIntro::
# 527 "data/maps/Route22_Frlg/scripts.pory"
# 293 "data/maps/Route22_Frlg/scripts.pory"
# 528 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}: Hey! {PLAYER}!\p"
# 529 "data/maps/Route22_Frlg/scripts.pory"
	.string "You're off to the POKéMON LEAGUE?\n"
# 530 "data/maps/Route22_Frlg/scripts.pory"
	.string "Forget about it!\p"
# 531 "data/maps/Route22_Frlg/scripts.pory"
	.string "You probably don't have any\n"
# 532 "data/maps/Route22_Frlg/scripts.pory"
	.string "BADGES, do you?\p"
# 533 "data/maps/Route22_Frlg/scripts.pory"
	.string "The guard won't let you through\n"
# 534 "data/maps/Route22_Frlg/scripts.pory"
	.string "without them.\p"
# 535 "data/maps/Route22_Frlg/scripts.pory"
	.string "By the way, did your POKéMON get\n"
# 536 "data/maps/Route22_Frlg/scripts.pory"
	.string "any stronger?$"
# 537 "data/maps/Route22_Frlg/scripts.pory"

# 538 "data/maps/Route22_Frlg/scripts.pory"
Route22_Text_EarlyRivalDefeat::
# 539 "data/maps/Route22_Frlg/scripts.pory"
# 305 "data/maps/Route22_Frlg/scripts.pory"
# 540 "data/maps/Route22_Frlg/scripts.pory"
	.string "Awww!\n"
# 541 "data/maps/Route22_Frlg/scripts.pory"
	.string "You just lucked out!$"
# 542 "data/maps/Route22_Frlg/scripts.pory"

# 543 "data/maps/Route22_Frlg/scripts.pory"
Route22_Text_EarlyRivalPostBattle::
# 544 "data/maps/Route22_Frlg/scripts.pory"
# 310 "data/maps/Route22_Frlg/scripts.pory"
# 545 "data/maps/Route22_Frlg/scripts.pory"
	.string "I heard the POKéMON LEAGUE is\n"
# 546 "data/maps/Route22_Frlg/scripts.pory"
	.string "crawling with tough TRAINERS.\p"
# 547 "data/maps/Route22_Frlg/scripts.pory"
	.string "I have to figure out how to get\n"
# 548 "data/maps/Route22_Frlg/scripts.pory"
	.string "past them.\p"
# 549 "data/maps/Route22_Frlg/scripts.pory"
	.string "You should quit dawdling and get a\n"
# 550 "data/maps/Route22_Frlg/scripts.pory"
	.string "move on!$"
# 551 "data/maps/Route22_Frlg/scripts.pory"

# 552 "data/maps/Route22_Frlg/scripts.pory"
Route22_Text_RivalShouldCatchSomeMons::
# 553 "data/maps/Route22_Frlg/scripts.pory"
# 319 "data/maps/Route22_Frlg/scripts.pory"
# 554 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}“なんだ？\n"
# 555 "data/maps/Route22_Frlg/scripts.pory"
	.string "ポケモン　2ひきも\l"
# 556 "data/maps/Route22_Frlg/scripts.pory"
	.string "もってるの　なぜか　だって？\p"
# 557 "data/maps/Route22_Frlg/scripts.pory"
	.string "おまえも\n"
# 558 "data/maps/Route22_Frlg/scripts.pory"
	.string "つかまえれば　いい　じゃん！$"
# 559 "data/maps/Route22_Frlg/scripts.pory"

# 560 "data/maps/Route22_Frlg/scripts.pory"
Route22_Text_LateRivalIntro::
# 561 "data/maps/Route22_Frlg/scripts.pory"
# 327 "data/maps/Route22_Frlg/scripts.pory"
# 562 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}: What? {PLAYER}!\n"
# 563 "data/maps/Route22_Frlg/scripts.pory"
	.string "What a surprise to see you here!\p"
# 564 "data/maps/Route22_Frlg/scripts.pory"
	.string "So you're going to the POKéMON\n"
# 565 "data/maps/Route22_Frlg/scripts.pory"
	.string "LEAGUE?\p"
# 566 "data/maps/Route22_Frlg/scripts.pory"
	.string "You collected all the BADGES, too?\n"
# 567 "data/maps/Route22_Frlg/scripts.pory"
	.string "That's cool!\p"
# 568 "data/maps/Route22_Frlg/scripts.pory"
	.string "Then I'll whip you, {PLAYER}, as a\n"
# 569 "data/maps/Route22_Frlg/scripts.pory"
	.string "warm-up for the POKéMON LEAGUE!\p"
# 570 "data/maps/Route22_Frlg/scripts.pory"
	.string "Come on!$"
# 571 "data/maps/Route22_Frlg/scripts.pory"

# 572 "data/maps/Route22_Frlg/scripts.pory"
Route22_Text_LateRivalDefeat::
# 573 "data/maps/Route22_Frlg/scripts.pory"
# 339 "data/maps/Route22_Frlg/scripts.pory"
# 574 "data/maps/Route22_Frlg/scripts.pory"
	.string "What!?\p"
# 575 "data/maps/Route22_Frlg/scripts.pory"
	.string "I was just careless, you!$"
# 576 "data/maps/Route22_Frlg/scripts.pory"

# 577 "data/maps/Route22_Frlg/scripts.pory"
Route22_Text_LateRivalPostBattle::
# 578 "data/maps/Route22_Frlg/scripts.pory"
# 344 "data/maps/Route22_Frlg/scripts.pory"
# 579 "data/maps/Route22_Frlg/scripts.pory"
	.string "That loosened me up.\n"
# 580 "data/maps/Route22_Frlg/scripts.pory"
	.string "I'm ready for the POKéMON LEAGUE!\p"
# 581 "data/maps/Route22_Frlg/scripts.pory"
	.string "{PLAYER}, you need more practice.\p"
# 582 "data/maps/Route22_Frlg/scripts.pory"
	.string "But hey, you know that!\n"
# 583 "data/maps/Route22_Frlg/scripts.pory"
	.string "I'm out of here. Smell ya!$"
# 584 "data/maps/Route22_Frlg/scripts.pory"

# 585 "data/maps/Route22_Frlg/scripts.pory"
Route22_Text_LateRivalVictory::
# 586 "data/maps/Route22_Frlg/scripts.pory"
# 352 "data/maps/Route22_Frlg/scripts.pory"
# 587 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}“ひゃははッ　{PLAYER}ー！\n"
# 588 "data/maps/Route22_Frlg/scripts.pory"
	.string "それで　がんばってるのかよ！\l"
# 589 "data/maps/Route22_Frlg/scripts.pory"
	.string "おれの　さいのうに　くらべりゃ\l"
# 590 "data/maps/Route22_Frlg/scripts.pory"
	.string "{PLAYER}は　まだまだ　だな！\p"
# 591 "data/maps/Route22_Frlg/scripts.pory"
	.string "もっと　れんしゅう　こいよ！\n"
# 592 "data/maps/Route22_Frlg/scripts.pory"
	.string "あははーッ！$"
# 593 "data/maps/Route22_Frlg/scripts.pory"

# 594 "data/maps/Route22_Frlg/scripts.pory"
Route22_Text_LeagueGateSign::
# 595 "data/maps/Route22_Frlg/scripts.pory"
# 361 "data/maps/Route22_Frlg/scripts.pory"
# 596 "data/maps/Route22_Frlg/scripts.pory"
	.string "POKéMON LEAGUE\n"
# 597 "data/maps/Route22_Frlg/scripts.pory"
	.string "Front Gate$"
