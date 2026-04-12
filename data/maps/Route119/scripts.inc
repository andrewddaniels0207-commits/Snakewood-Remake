# 1 "data/maps/Route119/scripts.pory"

# 2 "data/maps/Route119/scripts.pory"
Route119_MapScripts::
# 3 "data/maps/Route119/scripts.pory"
# 2 "data/maps/Route119/scripts.pory"
# 4 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 5 "data/maps/Route119/scripts.pory"
# 3 "data/maps/Route119/scripts.pory"
# 6 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
# 7 "data/maps/Route119/scripts.pory"
	.byte 0
# 8 "data/maps/Route119/scripts.pory"

# 9 "data/maps/Route119/scripts.pory"

# 10 "data/maps/Route119/scripts.pory"
Route119_OnResume::
# 11 "data/maps/Route119/scripts.pory"
# 7 "data/maps/Route119/scripts.pory"
# 12 "data/maps/Route119/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_OnResume_2
# 13 "data/maps/Route119/scripts.pory"
Route119_OnResume_1:
# 14 "data/maps/Route119/scripts.pory"
	end
# 15 "data/maps/Route119/scripts.pory"

# 16 "data/maps/Route119/scripts.pory"
Route119_OnResume_2:
# 17 "data/maps/Route119/scripts.pory"
# 8 "data/maps/Route119/scripts.pory"
# 18 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_TryRemoveKecleon
# 19 "data/maps/Route119/scripts.pory"
	goto Route119_OnResume_1
# 20 "data/maps/Route119/scripts.pory"

# 21 "data/maps/Route119/scripts.pory"

# 22 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon::
# 23 "data/maps/Route119/scripts.pory"
# 14 "data/maps/Route119/scripts.pory"
# 24 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/Route119/scripts.pory"
# 15 "data/maps/Route119/scripts.pory"
# 26 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 27 "data/maps/Route119/scripts.pory"
	goto_if_ne Route119_EventScript_TryRemoveKecleon_2
# 28 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon_1:
# 29 "data/maps/Route119/scripts.pory"
# 18 "data/maps/Route119/scripts.pory"
# 30 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 31 "data/maps/Route119/scripts.pory"
	return
# 32 "data/maps/Route119/scripts.pory"

# 33 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon_2:
# 34 "data/maps/Route119/scripts.pory"
# 16 "data/maps/Route119/scripts.pory"
# 35 "data/maps/Route119/scripts.pory"
	goto Common_EventScript_NopReturn
# 36 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_TryRemoveKecleon_1
# 37 "data/maps/Route119/scripts.pory"

# 38 "data/maps/Route119/scripts.pory"

# 39 "data/maps/Route119/scripts.pory"
Route119_OnTransition::
# 40 "data/maps/Route119/scripts.pory"
# 23 "data/maps/Route119/scripts.pory"
# 41 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 42 "data/maps/Route119/scripts.pory"
# 24 "data/maps/Route119/scripts.pory"
# 43 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 44 "data/maps/Route119/scripts.pory"
# 25 "data/maps/Route119/scripts.pory"
# 45 "data/maps/Route119/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 1
# 46 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_OnTransition_2
# 47 "data/maps/Route119/scripts.pory"
Route119_OnTransition_1:
# 48 "data/maps/Route119/scripts.pory"
# 28 "data/maps/Route119/scripts.pory"
# 49 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 50 "data/maps/Route119/scripts.pory"
	end
# 51 "data/maps/Route119/scripts.pory"

# 52 "data/maps/Route119/scripts.pory"
Route119_OnTransition_2:
# 53 "data/maps/Route119/scripts.pory"
# 26 "data/maps/Route119/scripts.pory"
# 54 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_MoveInstituteWorkersDownstairs
# 55 "data/maps/Route119/scripts.pory"
	goto Route119_OnTransition_1
# 56 "data/maps/Route119/scripts.pory"

# 57 "data/maps/Route119/scripts.pory"

# 58 "data/maps/Route119/scripts.pory"
Route119_EventScript_MoveInstituteWorkersDownstairs::
# 59 "data/maps/Route119/scripts.pory"
# 33 "data/maps/Route119/scripts.pory"
# 60 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 61 "data/maps/Route119/scripts.pory"
# 34 "data/maps/Route119/scripts.pory"
# 62 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 63 "data/maps/Route119/scripts.pory"
# 35 "data/maps/Route119/scripts.pory"
# 64 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 65 "data/maps/Route119/scripts.pory"
	return
# 66 "data/maps/Route119/scripts.pory"

# 67 "data/maps/Route119/scripts.pory"

# 68 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger1::
# 69 "data/maps/Route119/scripts.pory"
# 40 "data/maps/Route119/scripts.pory"
# 70 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 71 "data/maps/Route119/scripts.pory"
# 41 "data/maps/Route119/scripts.pory"
# 72 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 73 "data/maps/Route119/scripts.pory"
	end
# 74 "data/maps/Route119/scripts.pory"

# 75 "data/maps/Route119/scripts.pory"

# 76 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger2::
# 77 "data/maps/Route119/scripts.pory"
# 46 "data/maps/Route119/scripts.pory"
# 78 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 79 "data/maps/Route119/scripts.pory"
# 47 "data/maps/Route119/scripts.pory"
# 80 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 81 "data/maps/Route119/scripts.pory"
	end
# 82 "data/maps/Route119/scripts.pory"

# 83 "data/maps/Route119/scripts.pory"

# 84 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter::
# 85 "data/maps/Route119/scripts.pory"
# 52 "data/maps/Route119/scripts.pory"
# 86 "data/maps/Route119/scripts.pory"
	lockall
# 87 "data/maps/Route119/scripts.pory"
# 53 "data/maps/Route119/scripts.pory"
# 88 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 89 "data/maps/Route119/scripts.pory"
# 54 "data/maps/Route119/scripts.pory"
# 90 "data/maps/Route119/scripts.pory"
	checkplayergender
# 91 "data/maps/Route119/scripts.pory"
# 55 "data/maps/Route119/scripts.pory"
# 92 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
# 93 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalEncounter_2
# 94 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_1:
# 95 "data/maps/Route119/scripts.pory"
# 58 "data/maps/Route119/scripts.pory"
# 96 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, FEMALE
# 97 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalEncounter_5
# 98 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_4:
# 99 "data/maps/Route119/scripts.pory"
# 61 "data/maps/Route119/scripts.pory"
# 100 "data/maps/Route119/scripts.pory"
	delay 65
# 101 "data/maps/Route119/scripts.pory"
# 62 "data/maps/Route119/scripts.pory"
# 102 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 103 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalEncounter_8
# 104 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_7:
# 105 "data/maps/Route119/scripts.pory"
# 65 "data/maps/Route119/scripts.pory"
# 106 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 107 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalEncounter_11
# 108 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_10:
# 109 "data/maps/Route119/scripts.pory"
# 68 "data/maps/Route119/scripts.pory"
# 110 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 111 "data/maps/Route119/scripts.pory"
# 69 "data/maps/Route119/scripts.pory"
# 112 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route119/scripts.pory"
# 70 "data/maps/Route119/scripts.pory"
# 114 "data/maps/Route119/scripts.pory"
	delay 30
# 115 "data/maps/Route119/scripts.pory"
# 71 "data/maps/Route119/scripts.pory"
# 116 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 117 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalEncounter_14
# 118 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_13:
# 119 "data/maps/Route119/scripts.pory"
# 74 "data/maps/Route119/scripts.pory"
# 120 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 121 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalEncounter_17
# 122 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_16:
# 123 "data/maps/Route119/scripts.pory"
# 77 "data/maps/Route119/scripts.pory"
# 124 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 125 "data/maps/Route119/scripts.pory"
# 78 "data/maps/Route119/scripts.pory"
# 126 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL
# 127 "data/maps/Route119/scripts.pory"
# 79 "data/maps/Route119/scripts.pory"
# 128 "data/maps/Route119/scripts.pory"
	delay 30
# 129 "data/maps/Route119/scripts.pory"
# 80 "data/maps/Route119/scripts.pory"
# 130 "data/maps/Route119/scripts.pory"
	checkplayergender
# 131 "data/maps/Route119/scripts.pory"
# 81 "data/maps/Route119/scripts.pory"
# 132 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
# 133 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalEncounter_20
# 134 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_19:
# 135 "data/maps/Route119/scripts.pory"
# 84 "data/maps/Route119/scripts.pory"
# 136 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, FEMALE
# 137 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalEncounter_23
# 138 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_22:
# 139 "data/maps/Route119/scripts.pory"
# 87 "data/maps/Route119/scripts.pory"
# 140 "data/maps/Route119/scripts.pory"
	releaseall
# 141 "data/maps/Route119/scripts.pory"
	end
# 142 "data/maps/Route119/scripts.pory"

# 143 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_2:
# 144 "data/maps/Route119/scripts.pory"
# 56 "data/maps/Route119/scripts.pory"
# 145 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_PlayMayMusic
# 146 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter_1
# 147 "data/maps/Route119/scripts.pory"

# 148 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_5:
# 149 "data/maps/Route119/scripts.pory"
# 59 "data/maps/Route119/scripts.pory"
# 150 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_PlayBrendanMusic
# 151 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter_4
# 152 "data/maps/Route119/scripts.pory"

# 153 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_8:
# 154 "data/maps/Route119/scripts.pory"
# 63 "data/maps/Route119/scripts.pory"
# 155 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_RivalEnter1
# 156 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter_7
# 157 "data/maps/Route119/scripts.pory"

# 158 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_11:
# 159 "data/maps/Route119/scripts.pory"
# 66 "data/maps/Route119/scripts.pory"
# 160 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_RivalEnter2
# 161 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter_10
# 162 "data/maps/Route119/scripts.pory"

# 163 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_14:
# 164 "data/maps/Route119/scripts.pory"
# 72 "data/maps/Route119/scripts.pory"
# 165 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos1
# 166 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter_13
# 167 "data/maps/Route119/scripts.pory"

# 168 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_17:
# 169 "data/maps/Route119/scripts.pory"
# 75 "data/maps/Route119/scripts.pory"
# 170 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos2
# 171 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter_16
# 172 "data/maps/Route119/scripts.pory"

# 173 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_20:
# 174 "data/maps/Route119/scripts.pory"
# 82 "data/maps/Route119/scripts.pory"
# 175 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMay
# 176 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter_19
# 177 "data/maps/Route119/scripts.pory"

# 178 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_23:
# 179 "data/maps/Route119/scripts.pory"
# 85 "data/maps/Route119/scripts.pory"
# 180 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendan
# 181 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter_22
# 182 "data/maps/Route119/scripts.pory"

# 183 "data/maps/Route119/scripts.pory"

# 184 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayMayMusic::
# 185 "data/maps/Route119/scripts.pory"
# 92 "data/maps/Route119/scripts.pory"
# 186 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 187 "data/maps/Route119/scripts.pory"
	return
# 188 "data/maps/Route119/scripts.pory"

# 189 "data/maps/Route119/scripts.pory"

# 190 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayBrendanMusic::
# 191 "data/maps/Route119/scripts.pory"
# 97 "data/maps/Route119/scripts.pory"
# 192 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 193 "data/maps/Route119/scripts.pory"
	return
# 194 "data/maps/Route119/scripts.pory"

# 195 "data/maps/Route119/scripts.pory"

# 196 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay::
# 197 "data/maps/Route119/scripts.pory"
# 102 "data/maps/Route119/scripts.pory"
# 198 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 199 "data/maps/Route119/scripts.pory"
# 103 "data/maps/Route119/scripts.pory"
# 200 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 201 "data/maps/Route119/scripts.pory"
# 104 "data/maps/Route119/scripts.pory"
# 202 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleMay_3
# 203 "data/maps/Route119/scripts.pory"
# 106 "data/maps/Route119/scripts.pory"
# 204 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleMay_4
# 205 "data/maps/Route119/scripts.pory"
# 108 "data/maps/Route119/scripts.pory"
# 206 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleMay_5
# 207 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay_1:
# 208 "data/maps/Route119/scripts.pory"
	end
# 209 "data/maps/Route119/scripts.pory"

# 210 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay_3:
# 211 "data/maps/Route119/scripts.pory"
# 105 "data/maps/Route119/scripts.pory"
# 212 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMayTreecko
# 213 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMay_1
# 214 "data/maps/Route119/scripts.pory"

# 215 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay_4:
# 216 "data/maps/Route119/scripts.pory"
# 107 "data/maps/Route119/scripts.pory"
# 217 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMayTorchic
# 218 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMay_1
# 219 "data/maps/Route119/scripts.pory"

# 220 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay_5:
# 221 "data/maps/Route119/scripts.pory"
# 109 "data/maps/Route119/scripts.pory"
# 222 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMayMudkip
# 223 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMay_1
# 224 "data/maps/Route119/scripts.pory"

# 225 "data/maps/Route119/scripts.pory"

# 226 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTreecko::
# 227 "data/maps/Route119/scripts.pory"
# 115 "data/maps/Route119/scripts.pory"
# 228 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
# 229 "data/maps/Route119/scripts.pory"
# 116 "data/maps/Route119/scripts.pory"
# 230 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 231 "data/maps/Route119/scripts.pory"
	end
# 232 "data/maps/Route119/scripts.pory"

# 233 "data/maps/Route119/scripts.pory"

# 234 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTorchic::
# 235 "data/maps/Route119/scripts.pory"
# 121 "data/maps/Route119/scripts.pory"
# 236 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 237 "data/maps/Route119/scripts.pory"
# 122 "data/maps/Route119/scripts.pory"
# 238 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 239 "data/maps/Route119/scripts.pory"
	end
# 240 "data/maps/Route119/scripts.pory"

# 241 "data/maps/Route119/scripts.pory"

# 242 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayMudkip::
# 243 "data/maps/Route119/scripts.pory"
# 127 "data/maps/Route119/scripts.pory"
# 244 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
# 245 "data/maps/Route119/scripts.pory"
# 128 "data/maps/Route119/scripts.pory"
# 246 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 247 "data/maps/Route119/scripts.pory"
	end
# 248 "data/maps/Route119/scripts.pory"

# 249 "data/maps/Route119/scripts.pory"

# 250 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedMay::
# 251 "data/maps/Route119/scripts.pory"
# 133 "data/maps/Route119/scripts.pory"
# 252 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 253 "data/maps/Route119/scripts.pory"
# 134 "data/maps/Route119/scripts.pory"
# 254 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 255 "data/maps/Route119/scripts.pory"
# 135 "data/maps/Route119/scripts.pory"
# 256 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 257 "data/maps/Route119/scripts.pory"
# 136 "data/maps/Route119/scripts.pory"
# 258 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 259 "data/maps/Route119/scripts.pory"
	end
# 260 "data/maps/Route119/scripts.pory"

# 261 "data/maps/Route119/scripts.pory"

# 262 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan::
# 263 "data/maps/Route119/scripts.pory"
# 141 "data/maps/Route119/scripts.pory"
# 264 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 265 "data/maps/Route119/scripts.pory"
# 142 "data/maps/Route119/scripts.pory"
# 266 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 267 "data/maps/Route119/scripts.pory"
# 143 "data/maps/Route119/scripts.pory"
# 268 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleBrendan_3
# 269 "data/maps/Route119/scripts.pory"
# 145 "data/maps/Route119/scripts.pory"
# 270 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleBrendan_4
# 271 "data/maps/Route119/scripts.pory"
# 147 "data/maps/Route119/scripts.pory"
# 272 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleBrendan_5
# 273 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan_1:
# 274 "data/maps/Route119/scripts.pory"
	end
# 275 "data/maps/Route119/scripts.pory"

# 276 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan_3:
# 277 "data/maps/Route119/scripts.pory"
# 144 "data/maps/Route119/scripts.pory"
# 278 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendanTreecko
# 279 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendan_1
# 280 "data/maps/Route119/scripts.pory"

# 281 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan_4:
# 282 "data/maps/Route119/scripts.pory"
# 146 "data/maps/Route119/scripts.pory"
# 283 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendanTorchic
# 284 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendan_1
# 285 "data/maps/Route119/scripts.pory"

# 286 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan_5:
# 287 "data/maps/Route119/scripts.pory"
# 148 "data/maps/Route119/scripts.pory"
# 288 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendanMudkip
# 289 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendan_1
# 290 "data/maps/Route119/scripts.pory"

# 291 "data/maps/Route119/scripts.pory"

# 292 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTreecko::
# 293 "data/maps/Route119/scripts.pory"
# 154 "data/maps/Route119/scripts.pory"
# 294 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 295 "data/maps/Route119/scripts.pory"
# 155 "data/maps/Route119/scripts.pory"
# 296 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 297 "data/maps/Route119/scripts.pory"
	end
# 298 "data/maps/Route119/scripts.pory"

# 299 "data/maps/Route119/scripts.pory"

# 300 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTorchic::
# 301 "data/maps/Route119/scripts.pory"
# 160 "data/maps/Route119/scripts.pory"
# 302 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
# 303 "data/maps/Route119/scripts.pory"
# 161 "data/maps/Route119/scripts.pory"
# 304 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 305 "data/maps/Route119/scripts.pory"
	end
# 306 "data/maps/Route119/scripts.pory"

# 307 "data/maps/Route119/scripts.pory"

# 308 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanMudkip::
# 309 "data/maps/Route119/scripts.pory"
# 166 "data/maps/Route119/scripts.pory"
# 310 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
# 311 "data/maps/Route119/scripts.pory"
# 167 "data/maps/Route119/scripts.pory"
# 312 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 313 "data/maps/Route119/scripts.pory"
	end
# 314 "data/maps/Route119/scripts.pory"

# 315 "data/maps/Route119/scripts.pory"

# 316 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedBrendan::
# 317 "data/maps/Route119/scripts.pory"
# 172 "data/maps/Route119/scripts.pory"
# 318 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 319 "data/maps/Route119/scripts.pory"
# 173 "data/maps/Route119/scripts.pory"
# 320 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 321 "data/maps/Route119/scripts.pory"
# 174 "data/maps/Route119/scripts.pory"
# 322 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 323 "data/maps/Route119/scripts.pory"
# 175 "data/maps/Route119/scripts.pory"
# 324 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 325 "data/maps/Route119/scripts.pory"
	end
# 326 "data/maps/Route119/scripts.pory"

# 327 "data/maps/Route119/scripts.pory"

# 328 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveFlyHM::
# 329 "data/maps/Route119/scripts.pory"
# 180 "data/maps/Route119/scripts.pory"
# 330 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 331 "data/maps/Route119/scripts.pory"
# 181 "data/maps/Route119/scripts.pory"
# 332 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 333 "data/maps/Route119/scripts.pory"
	return
# 334 "data/maps/Route119/scripts.pory"

# 335 "data/maps/Route119/scripts.pory"

# 336 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive::
# 337 "data/maps/Route119/scripts.pory"
# 186 "data/maps/Route119/scripts.pory"
# 338 "data/maps/Route119/scripts.pory"
	closemessage
# 339 "data/maps/Route119/scripts.pory"
# 187 "data/maps/Route119/scripts.pory"
# 340 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 341 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalExitScottArrive_2
# 342 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_1:
# 343 "data/maps/Route119/scripts.pory"
# 190 "data/maps/Route119/scripts.pory"
# 344 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 345 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalExitScottArrive_5
# 346 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_4:
# 347 "data/maps/Route119/scripts.pory"
# 193 "data/maps/Route119/scripts.pory"
# 348 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL
# 349 "data/maps/Route119/scripts.pory"
# 194 "data/maps/Route119/scripts.pory"
# 350 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 351 "data/maps/Route119/scripts.pory"
# 195 "data/maps/Route119/scripts.pory"
# 352 "data/maps/Route119/scripts.pory"
	delay 30
# 353 "data/maps/Route119/scripts.pory"
# 196 "data/maps/Route119/scripts.pory"
# 354 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 355 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalExitScottArrive_8
# 356 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_7:
# 357 "data/maps/Route119/scripts.pory"
# 199 "data/maps/Route119/scripts.pory"
# 358 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 359 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalExitScottArrive_11
# 360 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_10:
# 361 "data/maps/Route119/scripts.pory"
# 202 "data/maps/Route119/scripts.pory"
# 362 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 363 "data/maps/Route119/scripts.pory"
# 203 "data/maps/Route119/scripts.pory"
# 364 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 365 "data/maps/Route119/scripts.pory"
# 204 "data/maps/Route119/scripts.pory"
# 366 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 367 "data/maps/Route119/scripts.pory"
# 205 "data/maps/Route119/scripts.pory"
# 368 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 369 "data/maps/Route119/scripts.pory"
# 206 "data/maps/Route119/scripts.pory"
# 370 "data/maps/Route119/scripts.pory"
	delay 60
# 371 "data/maps/Route119/scripts.pory"
# 207 "data/maps/Route119/scripts.pory"
# 372 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 373 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalExitScottArrive_14
# 374 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_13:
# 375 "data/maps/Route119/scripts.pory"
# 210 "data/maps/Route119/scripts.pory"
# 376 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 377 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalExitScottArrive_17
# 378 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_16:
# 379 "data/maps/Route119/scripts.pory"
# 213 "data/maps/Route119/scripts.pory"
# 380 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_SCOTT
# 381 "data/maps/Route119/scripts.pory"
# 214 "data/maps/Route119/scripts.pory"
# 382 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottEnter
# 383 "data/maps/Route119/scripts.pory"
# 215 "data/maps/Route119/scripts.pory"
# 384 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 385 "data/maps/Route119/scripts.pory"
# 216 "data/maps/Route119/scripts.pory"
# 386 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 387 "data/maps/Route119/scripts.pory"
# 217 "data/maps/Route119/scripts.pory"
# 388 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 389 "data/maps/Route119/scripts.pory"
# 218 "data/maps/Route119/scripts.pory"
# 390 "data/maps/Route119/scripts.pory"
	closemessage
# 391 "data/maps/Route119/scripts.pory"
# 219 "data/maps/Route119/scripts.pory"
# 392 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 393 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalExitScottArrive_20
# 394 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_19:
# 395 "data/maps/Route119/scripts.pory"
# 222 "data/maps/Route119/scripts.pory"
# 396 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 397 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RivalExitScottArrive_23
# 398 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_22:
# 399 "data/maps/Route119/scripts.pory"
# 225 "data/maps/Route119/scripts.pory"
# 400 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_SCOTT
# 401 "data/maps/Route119/scripts.pory"
# 226 "data/maps/Route119/scripts.pory"
# 402 "data/maps/Route119/scripts.pory"
	releaseall
# 403 "data/maps/Route119/scripts.pory"
	end
# 404 "data/maps/Route119/scripts.pory"

# 405 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_2:
# 406 "data/maps/Route119/scripts.pory"
# 188 "data/maps/Route119/scripts.pory"
# 407 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos1
# 408 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive_1
# 409 "data/maps/Route119/scripts.pory"

# 410 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_5:
# 411 "data/maps/Route119/scripts.pory"
# 191 "data/maps/Route119/scripts.pory"
# 412 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos2
# 413 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive_4
# 414 "data/maps/Route119/scripts.pory"

# 415 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_8:
# 416 "data/maps/Route119/scripts.pory"
# 197 "data/maps/Route119/scripts.pory"
# 417 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_RivalExit1
# 418 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive_7
# 419 "data/maps/Route119/scripts.pory"

# 420 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_11:
# 421 "data/maps/Route119/scripts.pory"
# 200 "data/maps/Route119/scripts.pory"
# 422 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_RivalExit2
# 423 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive_10
# 424 "data/maps/Route119/scripts.pory"

# 425 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_14:
# 426 "data/maps/Route119/scripts.pory"
# 208 "data/maps/Route119/scripts.pory"
# 427 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetScottPos1
# 428 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive_13
# 429 "data/maps/Route119/scripts.pory"

# 430 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_17:
# 431 "data/maps/Route119/scripts.pory"
# 211 "data/maps/Route119/scripts.pory"
# 432 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetScottPos2
# 433 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive_16
# 434 "data/maps/Route119/scripts.pory"

# 435 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_20:
# 436 "data/maps/Route119/scripts.pory"
# 220 "data/maps/Route119/scripts.pory"
# 437 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_ScottExit1
# 438 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive_19
# 439 "data/maps/Route119/scripts.pory"

# 440 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_23:
# 441 "data/maps/Route119/scripts.pory"
# 223 "data/maps/Route119/scripts.pory"
# 442 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_ScottExit2
# 443 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive_22
# 444 "data/maps/Route119/scripts.pory"

# 445 "data/maps/Route119/scripts.pory"

# 446 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos1::
# 447 "data/maps/Route119/scripts.pory"
# 231 "data/maps/Route119/scripts.pory"
# 448 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 27, 25
# 449 "data/maps/Route119/scripts.pory"
	return
# 450 "data/maps/Route119/scripts.pory"

# 451 "data/maps/Route119/scripts.pory"

# 452 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos2::
# 453 "data/maps/Route119/scripts.pory"
# 236 "data/maps/Route119/scripts.pory"
# 454 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 28, 25
# 455 "data/maps/Route119/scripts.pory"
	return
# 456 "data/maps/Route119/scripts.pory"

# 457 "data/maps/Route119/scripts.pory"

# 458 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit1::
# 459 "data/maps/Route119/scripts.pory"
# 241 "data/maps/Route119/scripts.pory"
# 460 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit1
# 461 "data/maps/Route119/scripts.pory"
# 242 "data/maps/Route119/scripts.pory"
# 462 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 463 "data/maps/Route119/scripts.pory"
	return
# 464 "data/maps/Route119/scripts.pory"

# 465 "data/maps/Route119/scripts.pory"

# 466 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit2::
# 467 "data/maps/Route119/scripts.pory"
# 247 "data/maps/Route119/scripts.pory"
# 468 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit2
# 469 "data/maps/Route119/scripts.pory"
# 248 "data/maps/Route119/scripts.pory"
# 470 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route119/scripts.pory"
	return
# 472 "data/maps/Route119/scripts.pory"

# 473 "data/maps/Route119/scripts.pory"

# 474 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter1::
# 475 "data/maps/Route119/scripts.pory"
# 253 "data/maps/Route119/scripts.pory"
# 476 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 477 "data/maps/Route119/scripts.pory"
# 254 "data/maps/Route119/scripts.pory"
# 478 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 479 "data/maps/Route119/scripts.pory"
	return
# 480 "data/maps/Route119/scripts.pory"

# 481 "data/maps/Route119/scripts.pory"

# 482 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter2::
# 483 "data/maps/Route119/scripts.pory"
# 259 "data/maps/Route119/scripts.pory"
# 484 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 485 "data/maps/Route119/scripts.pory"
# 260 "data/maps/Route119/scripts.pory"
# 486 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 487 "data/maps/Route119/scripts.pory"
	return
# 488 "data/maps/Route119/scripts.pory"

# 489 "data/maps/Route119/scripts.pory"

# 490 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit1::
# 491 "data/maps/Route119/scripts.pory"
# 265 "data/maps/Route119/scripts.pory"
# 492 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 493 "data/maps/Route119/scripts.pory"
# 266 "data/maps/Route119/scripts.pory"
# 494 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 495 "data/maps/Route119/scripts.pory"
# 267 "data/maps/Route119/scripts.pory"
# 496 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 497 "data/maps/Route119/scripts.pory"
	return
# 498 "data/maps/Route119/scripts.pory"

# 499 "data/maps/Route119/scripts.pory"

# 500 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit2::
# 501 "data/maps/Route119/scripts.pory"
# 272 "data/maps/Route119/scripts.pory"
# 502 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 503 "data/maps/Route119/scripts.pory"
# 273 "data/maps/Route119/scripts.pory"
# 504 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 505 "data/maps/Route119/scripts.pory"
# 274 "data/maps/Route119/scripts.pory"
# 506 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 507 "data/maps/Route119/scripts.pory"
	return
# 508 "data/maps/Route119/scripts.pory"

# 509 "data/maps/Route119/scripts.pory"

# 510 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos1::
# 511 "data/maps/Route119/scripts.pory"
# 279 "data/maps/Route119/scripts.pory"
# 512 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 25, 32
# 513 "data/maps/Route119/scripts.pory"
# 280 "data/maps/Route119/scripts.pory"
# 514 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 25, 32
# 515 "data/maps/Route119/scripts.pory"
	return
# 516 "data/maps/Route119/scripts.pory"

# 517 "data/maps/Route119/scripts.pory"

# 518 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos2::
# 519 "data/maps/Route119/scripts.pory"
# 285 "data/maps/Route119/scripts.pory"
# 520 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 26, 32
# 521 "data/maps/Route119/scripts.pory"
# 286 "data/maps/Route119/scripts.pory"
# 522 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 26, 32
# 523 "data/maps/Route119/scripts.pory"
	return
# 524 "data/maps/Route119/scripts.pory"

# 525 "data/maps/Route119/scripts.pory"

# 526 "data/maps/Route119/scripts.pory"
# 290 "data/maps/Route119/scripts.pory"
# 527 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 528 "data/maps/Route119/scripts.pory"
# 291 "data/maps/Route119/scripts.pory"
# 529 "data/maps/Route119/scripts.pory"
	delay_16
# 530 "data/maps/Route119/scripts.pory"
# 292 "data/maps/Route119/scripts.pory"
# 531 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_right
# 532 "data/maps/Route119/scripts.pory"
# 293 "data/maps/Route119/scripts.pory"
# 533 "data/maps/Route119/scripts.pory"
	delay_8
# 534 "data/maps/Route119/scripts.pory"
# 294 "data/maps/Route119/scripts.pory"
# 535 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 536 "data/maps/Route119/scripts.pory"
# 295 "data/maps/Route119/scripts.pory"
# 537 "data/maps/Route119/scripts.pory"
	step_end
# 538 "data/maps/Route119/scripts.pory"

# 539 "data/maps/Route119/scripts.pory"
# 298 "data/maps/Route119/scripts.pory"
# 540 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 541 "data/maps/Route119/scripts.pory"
# 299 "data/maps/Route119/scripts.pory"
# 542 "data/maps/Route119/scripts.pory"
	delay_16
# 543 "data/maps/Route119/scripts.pory"
# 300 "data/maps/Route119/scripts.pory"
# 544 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_left
# 545 "data/maps/Route119/scripts.pory"
# 301 "data/maps/Route119/scripts.pory"
# 546 "data/maps/Route119/scripts.pory"
	delay_8
# 547 "data/maps/Route119/scripts.pory"
# 302 "data/maps/Route119/scripts.pory"
# 548 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 549 "data/maps/Route119/scripts.pory"
# 303 "data/maps/Route119/scripts.pory"
# 550 "data/maps/Route119/scripts.pory"
	step_end
# 551 "data/maps/Route119/scripts.pory"

# 552 "data/maps/Route119/scripts.pory"
# 306 "data/maps/Route119/scripts.pory"
# 553 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 554 "data/maps/Route119/scripts.pory"
# 307 "data/maps/Route119/scripts.pory"
# 555 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 556 "data/maps/Route119/scripts.pory"
# 308 "data/maps/Route119/scripts.pory"
# 557 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 558 "data/maps/Route119/scripts.pory"
# 309 "data/maps/Route119/scripts.pory"
# 559 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 560 "data/maps/Route119/scripts.pory"
# 310 "data/maps/Route119/scripts.pory"
# 561 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 562 "data/maps/Route119/scripts.pory"
# 311 "data/maps/Route119/scripts.pory"
# 563 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 564 "data/maps/Route119/scripts.pory"
# 312 "data/maps/Route119/scripts.pory"
# 565 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 566 "data/maps/Route119/scripts.pory"
# 313 "data/maps/Route119/scripts.pory"
# 567 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 568 "data/maps/Route119/scripts.pory"
# 314 "data/maps/Route119/scripts.pory"
# 569 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 570 "data/maps/Route119/scripts.pory"
# 315 "data/maps/Route119/scripts.pory"
# 571 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route119/scripts.pory"
# 316 "data/maps/Route119/scripts.pory"
# 573 "data/maps/Route119/scripts.pory"
	step_end
# 574 "data/maps/Route119/scripts.pory"

# 575 "data/maps/Route119/scripts.pory"
# 319 "data/maps/Route119/scripts.pory"
# 576 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 577 "data/maps/Route119/scripts.pory"
# 320 "data/maps/Route119/scripts.pory"
# 578 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 579 "data/maps/Route119/scripts.pory"
# 321 "data/maps/Route119/scripts.pory"
# 580 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 581 "data/maps/Route119/scripts.pory"
# 322 "data/maps/Route119/scripts.pory"
# 582 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 583 "data/maps/Route119/scripts.pory"
# 323 "data/maps/Route119/scripts.pory"
# 584 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 585 "data/maps/Route119/scripts.pory"
# 324 "data/maps/Route119/scripts.pory"
# 586 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 587 "data/maps/Route119/scripts.pory"
# 325 "data/maps/Route119/scripts.pory"
# 588 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 589 "data/maps/Route119/scripts.pory"
# 326 "data/maps/Route119/scripts.pory"
# 590 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 591 "data/maps/Route119/scripts.pory"
# 327 "data/maps/Route119/scripts.pory"
# 592 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 593 "data/maps/Route119/scripts.pory"
# 328 "data/maps/Route119/scripts.pory"
# 594 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 595 "data/maps/Route119/scripts.pory"
# 329 "data/maps/Route119/scripts.pory"
# 596 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 597 "data/maps/Route119/scripts.pory"
# 330 "data/maps/Route119/scripts.pory"
# 598 "data/maps/Route119/scripts.pory"
	step_end
# 599 "data/maps/Route119/scripts.pory"

# 600 "data/maps/Route119/scripts.pory"
# 333 "data/maps/Route119/scripts.pory"
# 601 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 602 "data/maps/Route119/scripts.pory"
# 334 "data/maps/Route119/scripts.pory"
# 603 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 604 "data/maps/Route119/scripts.pory"
# 335 "data/maps/Route119/scripts.pory"
# 605 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 606 "data/maps/Route119/scripts.pory"
# 336 "data/maps/Route119/scripts.pory"
# 607 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 608 "data/maps/Route119/scripts.pory"
# 337 "data/maps/Route119/scripts.pory"
# 609 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 610 "data/maps/Route119/scripts.pory"
# 338 "data/maps/Route119/scripts.pory"
# 611 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 612 "data/maps/Route119/scripts.pory"
# 339 "data/maps/Route119/scripts.pory"
# 613 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 614 "data/maps/Route119/scripts.pory"
# 340 "data/maps/Route119/scripts.pory"
# 615 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 616 "data/maps/Route119/scripts.pory"
# 341 "data/maps/Route119/scripts.pory"
# 617 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 618 "data/maps/Route119/scripts.pory"
# 342 "data/maps/Route119/scripts.pory"
# 619 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 620 "data/maps/Route119/scripts.pory"
# 343 "data/maps/Route119/scripts.pory"
# 621 "data/maps/Route119/scripts.pory"
	step_end
# 622 "data/maps/Route119/scripts.pory"

# 623 "data/maps/Route119/scripts.pory"
# 346 "data/maps/Route119/scripts.pory"
# 624 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 625 "data/maps/Route119/scripts.pory"
# 347 "data/maps/Route119/scripts.pory"
# 626 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 627 "data/maps/Route119/scripts.pory"
# 348 "data/maps/Route119/scripts.pory"
# 628 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 629 "data/maps/Route119/scripts.pory"
# 349 "data/maps/Route119/scripts.pory"
# 630 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 631 "data/maps/Route119/scripts.pory"
# 350 "data/maps/Route119/scripts.pory"
# 632 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 633 "data/maps/Route119/scripts.pory"
# 351 "data/maps/Route119/scripts.pory"
# 634 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 635 "data/maps/Route119/scripts.pory"
# 352 "data/maps/Route119/scripts.pory"
# 636 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 637 "data/maps/Route119/scripts.pory"
# 353 "data/maps/Route119/scripts.pory"
# 638 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 639 "data/maps/Route119/scripts.pory"
# 354 "data/maps/Route119/scripts.pory"
# 640 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 641 "data/maps/Route119/scripts.pory"
# 355 "data/maps/Route119/scripts.pory"
# 642 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 643 "data/maps/Route119/scripts.pory"
# 356 "data/maps/Route119/scripts.pory"
# 644 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 645 "data/maps/Route119/scripts.pory"
# 357 "data/maps/Route119/scripts.pory"
# 646 "data/maps/Route119/scripts.pory"
	step_end
# 647 "data/maps/Route119/scripts.pory"

# 648 "data/maps/Route119/scripts.pory"
# 360 "data/maps/Route119/scripts.pory"
# 649 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 650 "data/maps/Route119/scripts.pory"
# 361 "data/maps/Route119/scripts.pory"
# 651 "data/maps/Route119/scripts.pory"
	walk_down
# 652 "data/maps/Route119/scripts.pory"
# 362 "data/maps/Route119/scripts.pory"
# 653 "data/maps/Route119/scripts.pory"
	walk_down
# 654 "data/maps/Route119/scripts.pory"
# 363 "data/maps/Route119/scripts.pory"
# 655 "data/maps/Route119/scripts.pory"
	walk_down
# 656 "data/maps/Route119/scripts.pory"
# 364 "data/maps/Route119/scripts.pory"
# 657 "data/maps/Route119/scripts.pory"
	walk_down
# 658 "data/maps/Route119/scripts.pory"
# 365 "data/maps/Route119/scripts.pory"
# 659 "data/maps/Route119/scripts.pory"
	walk_left
# 660 "data/maps/Route119/scripts.pory"
# 366 "data/maps/Route119/scripts.pory"
# 661 "data/maps/Route119/scripts.pory"
	walk_left
# 662 "data/maps/Route119/scripts.pory"
# 367 "data/maps/Route119/scripts.pory"
# 663 "data/maps/Route119/scripts.pory"
	walk_down
# 664 "data/maps/Route119/scripts.pory"
# 368 "data/maps/Route119/scripts.pory"
# 665 "data/maps/Route119/scripts.pory"
	step_end
# 666 "data/maps/Route119/scripts.pory"

# 667 "data/maps/Route119/scripts.pory"
# 371 "data/maps/Route119/scripts.pory"
# 668 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 669 "data/maps/Route119/scripts.pory"
# 372 "data/maps/Route119/scripts.pory"
# 670 "data/maps/Route119/scripts.pory"
	walk_up
# 671 "data/maps/Route119/scripts.pory"
# 373 "data/maps/Route119/scripts.pory"
# 672 "data/maps/Route119/scripts.pory"
	walk_right
# 673 "data/maps/Route119/scripts.pory"
# 374 "data/maps/Route119/scripts.pory"
# 674 "data/maps/Route119/scripts.pory"
	walk_right
# 675 "data/maps/Route119/scripts.pory"
# 375 "data/maps/Route119/scripts.pory"
# 676 "data/maps/Route119/scripts.pory"
	walk_up
# 677 "data/maps/Route119/scripts.pory"
# 376 "data/maps/Route119/scripts.pory"
# 678 "data/maps/Route119/scripts.pory"
	walk_up
# 679 "data/maps/Route119/scripts.pory"
# 377 "data/maps/Route119/scripts.pory"
# 680 "data/maps/Route119/scripts.pory"
	walk_up
# 681 "data/maps/Route119/scripts.pory"
# 378 "data/maps/Route119/scripts.pory"
# 682 "data/maps/Route119/scripts.pory"
	walk_up
# 683 "data/maps/Route119/scripts.pory"
# 379 "data/maps/Route119/scripts.pory"
# 684 "data/maps/Route119/scripts.pory"
	walk_up
# 685 "data/maps/Route119/scripts.pory"
# 380 "data/maps/Route119/scripts.pory"
# 686 "data/maps/Route119/scripts.pory"
	step_end
# 687 "data/maps/Route119/scripts.pory"

# 688 "data/maps/Route119/scripts.pory"
# 383 "data/maps/Route119/scripts.pory"
# 689 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 690 "data/maps/Route119/scripts.pory"
# 384 "data/maps/Route119/scripts.pory"
# 691 "data/maps/Route119/scripts.pory"
	walk_up
# 692 "data/maps/Route119/scripts.pory"
# 385 "data/maps/Route119/scripts.pory"
# 693 "data/maps/Route119/scripts.pory"
	walk_right
# 694 "data/maps/Route119/scripts.pory"
# 386 "data/maps/Route119/scripts.pory"
# 695 "data/maps/Route119/scripts.pory"
	walk_up
# 696 "data/maps/Route119/scripts.pory"
# 387 "data/maps/Route119/scripts.pory"
# 697 "data/maps/Route119/scripts.pory"
	walk_up
# 698 "data/maps/Route119/scripts.pory"
# 388 "data/maps/Route119/scripts.pory"
# 699 "data/maps/Route119/scripts.pory"
	walk_up
# 700 "data/maps/Route119/scripts.pory"
# 389 "data/maps/Route119/scripts.pory"
# 701 "data/maps/Route119/scripts.pory"
	walk_up
# 702 "data/maps/Route119/scripts.pory"
# 390 "data/maps/Route119/scripts.pory"
# 703 "data/maps/Route119/scripts.pory"
	walk_up
# 704 "data/maps/Route119/scripts.pory"
# 391 "data/maps/Route119/scripts.pory"
# 705 "data/maps/Route119/scripts.pory"
	step_end
# 706 "data/maps/Route119/scripts.pory"

# 707 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 708 "data/maps/Route119/scripts.pory"
# 395 "data/maps/Route119/scripts.pory"
# 709 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 710 "data/maps/Route119/scripts.pory"
	end
# 711 "data/maps/Route119/scripts.pory"

# 712 "data/maps/Route119/scripts.pory"

# 713 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 714 "data/maps/Route119/scripts.pory"
# 400 "data/maps/Route119/scripts.pory"
# 715 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 716 "data/maps/Route119/scripts.pory"
	end
# 717 "data/maps/Route119/scripts.pory"

# 718 "data/maps/Route119/scripts.pory"

# 719 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 720 "data/maps/Route119/scripts.pory"
# 405 "data/maps/Route119/scripts.pory"
# 721 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 722 "data/maps/Route119/scripts.pory"
	end
# 723 "data/maps/Route119/scripts.pory"

# 724 "data/maps/Route119/scripts.pory"

# 725 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 726 "data/maps/Route119/scripts.pory"
# 410 "data/maps/Route119/scripts.pory"
# 727 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 728 "data/maps/Route119/scripts.pory"
# 411 "data/maps/Route119/scripts.pory"
# 729 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 730 "data/maps/Route119/scripts.pory"
	end
# 731 "data/maps/Route119/scripts.pory"

# 732 "data/maps/Route119/scripts.pory"

# 733 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald::
# 734 "data/maps/Route119/scripts.pory"
# 416 "data/maps/Route119/scripts.pory"
# 735 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 736 "data/maps/Route119/scripts.pory"
# 417 "data/maps/Route119/scripts.pory"
# 737 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 738 "data/maps/Route119/scripts.pory"
	end
# 739 "data/maps/Route119/scripts.pory"

# 740 "data/maps/Route119/scripts.pory"

# 741 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 742 "data/maps/Route119/scripts.pory"
# 422 "data/maps/Route119/scripts.pory"
# 743 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 744 "data/maps/Route119/scripts.pory"
# 423 "data/maps/Route119/scripts.pory"
# 745 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 746 "data/maps/Route119/scripts.pory"
	end
# 747 "data/maps/Route119/scripts.pory"

# 748 "data/maps/Route119/scripts.pory"

# 749 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 750 "data/maps/Route119/scripts.pory"
# 428 "data/maps/Route119/scripts.pory"
# 751 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 752 "data/maps/Route119/scripts.pory"
# 429 "data/maps/Route119/scripts.pory"
# 753 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 754 "data/maps/Route119/scripts.pory"
	end
# 755 "data/maps/Route119/scripts.pory"

# 756 "data/maps/Route119/scripts.pory"

# 757 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 758 "data/maps/Route119/scripts.pory"
# 434 "data/maps/Route119/scripts.pory"
# 759 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 760 "data/maps/Route119/scripts.pory"
# 435 "data/maps/Route119/scripts.pory"
# 761 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 762 "data/maps/Route119/scripts.pory"
	end
# 763 "data/maps/Route119/scripts.pory"

# 764 "data/maps/Route119/scripts.pory"

# 765 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 766 "data/maps/Route119/scripts.pory"
# 440 "data/maps/Route119/scripts.pory"
# 767 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 768 "data/maps/Route119/scripts.pory"
# 441 "data/maps/Route119/scripts.pory"
# 769 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 770 "data/maps/Route119/scripts.pory"
	end
# 771 "data/maps/Route119/scripts.pory"

# 772 "data/maps/Route119/scripts.pory"

# 773 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 774 "data/maps/Route119/scripts.pory"
# 446 "data/maps/Route119/scripts.pory"
# 775 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 776 "data/maps/Route119/scripts.pory"
# 447 "data/maps/Route119/scripts.pory"
# 777 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 778 "data/maps/Route119/scripts.pory"
# 448 "data/maps/Route119/scripts.pory"
# 779 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, TRUE
# 780 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_Jackson_2
# 781 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson_1:
# 782 "data/maps/Route119/scripts.pory"
# 451 "data/maps/Route119/scripts.pory"
# 783 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 784 "data/maps/Route119/scripts.pory"
# 452 "data/maps/Route119/scripts.pory"
# 785 "data/maps/Route119/scripts.pory"
	release
# 786 "data/maps/Route119/scripts.pory"
	end
# 787 "data/maps/Route119/scripts.pory"

# 788 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson_2:
# 789 "data/maps/Route119/scripts.pory"
# 449 "data/maps/Route119/scripts.pory"
# 790 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RematchJackson
# 791 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_Jackson_1
# 792 "data/maps/Route119/scripts.pory"

# 793 "data/maps/Route119/scripts.pory"

# 794 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 795 "data/maps/Route119/scripts.pory"
# 457 "data/maps/Route119/scripts.pory"
# 796 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 797 "data/maps/Route119/scripts.pory"
# 458 "data/maps/Route119/scripts.pory"
# 798 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 799 "data/maps/Route119/scripts.pory"
# 459 "data/maps/Route119/scripts.pory"
# 800 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 801 "data/maps/Route119/scripts.pory"
# 460 "data/maps/Route119/scripts.pory"
# 802 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 803 "data/maps/Route119/scripts.pory"
# 461 "data/maps/Route119/scripts.pory"
# 804 "data/maps/Route119/scripts.pory"
	release
# 805 "data/maps/Route119/scripts.pory"
	end
# 806 "data/maps/Route119/scripts.pory"

# 807 "data/maps/Route119/scripts.pory"

# 808 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 809 "data/maps/Route119/scripts.pory"
# 466 "data/maps/Route119/scripts.pory"
# 810 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 811 "data/maps/Route119/scripts.pory"
# 467 "data/maps/Route119/scripts.pory"
# 812 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 813 "data/maps/Route119/scripts.pory"
	end
# 814 "data/maps/Route119/scripts.pory"

# 815 "data/maps/Route119/scripts.pory"

# 816 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 817 "data/maps/Route119/scripts.pory"
# 472 "data/maps/Route119/scripts.pory"
# 818 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 819 "data/maps/Route119/scripts.pory"
# 473 "data/maps/Route119/scripts.pory"
# 820 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 821 "data/maps/Route119/scripts.pory"
# 474 "data/maps/Route119/scripts.pory"
# 822 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, TRUE
# 823 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_Catherine_2
# 824 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine_1:
# 825 "data/maps/Route119/scripts.pory"
# 477 "data/maps/Route119/scripts.pory"
# 826 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 827 "data/maps/Route119/scripts.pory"
# 478 "data/maps/Route119/scripts.pory"
# 828 "data/maps/Route119/scripts.pory"
	release
# 829 "data/maps/Route119/scripts.pory"
	end
# 830 "data/maps/Route119/scripts.pory"

# 831 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine_2:
# 832 "data/maps/Route119/scripts.pory"
# 475 "data/maps/Route119/scripts.pory"
# 833 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RematchCatherine
# 834 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_Catherine_1
# 835 "data/maps/Route119/scripts.pory"

# 836 "data/maps/Route119/scripts.pory"

# 837 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 838 "data/maps/Route119/scripts.pory"
# 483 "data/maps/Route119/scripts.pory"
# 839 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 840 "data/maps/Route119/scripts.pory"
# 484 "data/maps/Route119/scripts.pory"
# 841 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 842 "data/maps/Route119/scripts.pory"
# 485 "data/maps/Route119/scripts.pory"
# 843 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 844 "data/maps/Route119/scripts.pory"
# 486 "data/maps/Route119/scripts.pory"
# 845 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 846 "data/maps/Route119/scripts.pory"
# 487 "data/maps/Route119/scripts.pory"
# 847 "data/maps/Route119/scripts.pory"
	release
# 848 "data/maps/Route119/scripts.pory"
	end
# 849 "data/maps/Route119/scripts.pory"

# 850 "data/maps/Route119/scripts.pory"

# 851 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 852 "data/maps/Route119/scripts.pory"
# 492 "data/maps/Route119/scripts.pory"
# 853 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 854 "data/maps/Route119/scripts.pory"
# 493 "data/maps/Route119/scripts.pory"
# 855 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 856 "data/maps/Route119/scripts.pory"
	end
# 857 "data/maps/Route119/scripts.pory"

# 858 "data/maps/Route119/scripts.pory"

# 859 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 860 "data/maps/Route119/scripts.pory"
# 498 "data/maps/Route119/scripts.pory"
# 861 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 862 "data/maps/Route119/scripts.pory"
# 499 "data/maps/Route119/scripts.pory"
# 863 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 864 "data/maps/Route119/scripts.pory"
	end
# 865 "data/maps/Route119/scripts.pory"

# 866 "data/maps/Route119/scripts.pory"

# 867 "data/maps/Route119/scripts.pory"
Route119_EventScript_Phil::
# 868 "data/maps/Route119/scripts.pory"
# 504 "data/maps/Route119/scripts.pory"
# 869 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 870 "data/maps/Route119/scripts.pory"
# 505 "data/maps/Route119/scripts.pory"
# 871 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 872 "data/maps/Route119/scripts.pory"
	end
# 873 "data/maps/Route119/scripts.pory"

# 874 "data/maps/Route119/scripts.pory"

# 875 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 876 "data/maps/Route119/scripts.pory"
# 510 "data/maps/Route119/scripts.pory"
# 877 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 878 "data/maps/Route119/scripts.pory"
# 511 "data/maps/Route119/scripts.pory"
# 879 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 880 "data/maps/Route119/scripts.pory"
	end
# 881 "data/maps/Route119/scripts.pory"

# 882 "data/maps/Route119/scripts.pory"

# 883 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 884 "data/maps/Route119/scripts.pory"
# 516 "data/maps/Route119/scripts.pory"
# 885 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 886 "data/maps/Route119/scripts.pory"
# 517 "data/maps/Route119/scripts.pory"
# 887 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 888 "data/maps/Route119/scripts.pory"
	end
# 889 "data/maps/Route119/scripts.pory"

# 890 "data/maps/Route119/scripts.pory"

# 891 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 892 "data/maps/Route119/scripts.pory"
# 522 "data/maps/Route119/scripts.pory"
# 893 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 894 "data/maps/Route119/scripts.pory"
# 523 "data/maps/Route119/scripts.pory"
# 895 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 896 "data/maps/Route119/scripts.pory"
	end
# 897 "data/maps/Route119/scripts.pory"

# 898 "data/maps/Route119/scripts.pory"

# 899 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 900 "data/maps/Route119/scripts.pory"
# 528 "data/maps/Route119/scripts.pory"
# 901 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 902 "data/maps/Route119/scripts.pory"
# 529 "data/maps/Route119/scripts.pory"
# 903 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 904 "data/maps/Route119/scripts.pory"
	end
# 905 "data/maps/Route119/scripts.pory"

# 906 "data/maps/Route119/scripts.pory"

# 907 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 908 "data/maps/Route119/scripts.pory"
# 534 "data/maps/Route119/scripts.pory"
# 909 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 910 "data/maps/Route119/scripts.pory"
# 535 "data/maps/Route119/scripts.pory"
# 911 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 912 "data/maps/Route119/scripts.pory"
	end
# 913 "data/maps/Route119/scripts.pory"

# 914 "data/maps/Route119/scripts.pory"

# 915 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 916 "data/maps/Route119/scripts.pory"
# 540 "data/maps/Route119/scripts.pory"
# 917 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 918 "data/maps/Route119/scripts.pory"
# 541 "data/maps/Route119/scripts.pory"
# 919 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 920 "data/maps/Route119/scripts.pory"
	end
# 921 "data/maps/Route119/scripts.pory"

# 922 "data/maps/Route119/scripts.pory"

# 923 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 924 "data/maps/Route119/scripts.pory"
# 546 "data/maps/Route119/scripts.pory"
# 925 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 926 "data/maps/Route119/scripts.pory"
# 547 "data/maps/Route119/scripts.pory"
# 927 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 928 "data/maps/Route119/scripts.pory"
	end
# 929 "data/maps/Route119/scripts.pory"

# 930 "data/maps/Route119/scripts.pory"

# 931 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 932 "data/maps/Route119/scripts.pory"
# 552 "data/maps/Route119/scripts.pory"
# 933 "data/maps/Route119/scripts.pory"
	lock
# 934 "data/maps/Route119/scripts.pory"
# 553 "data/maps/Route119/scripts.pory"
# 935 "data/maps/Route119/scripts.pory"
	faceplayer
# 936 "data/maps/Route119/scripts.pory"
# 554 "data/maps/Route119/scripts.pory"
# 937 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 938 "data/maps/Route119/scripts.pory"
# 555 "data/maps/Route119/scripts.pory"
# 939 "data/maps/Route119/scripts.pory"
	closemessage
# 940 "data/maps/Route119/scripts.pory"
# 556 "data/maps/Route119/scripts.pory"
# 941 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 942 "data/maps/Route119/scripts.pory"
# 557 "data/maps/Route119/scripts.pory"
# 943 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 944 "data/maps/Route119/scripts.pory"
# 558 "data/maps/Route119/scripts.pory"
# 945 "data/maps/Route119/scripts.pory"
	release
# 946 "data/maps/Route119/scripts.pory"
	end
# 947 "data/maps/Route119/scripts.pory"

# 948 "data/maps/Route119/scripts.pory"

# 949 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 950 "data/maps/Route119/scripts.pory"
# 563 "data/maps/Route119/scripts.pory"
# 951 "data/maps/Route119/scripts.pory"
	lock
# 952 "data/maps/Route119/scripts.pory"
# 564 "data/maps/Route119/scripts.pory"
# 953 "data/maps/Route119/scripts.pory"
	faceplayer
# 954 "data/maps/Route119/scripts.pory"
# 565 "data/maps/Route119/scripts.pory"
# 955 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 956 "data/maps/Route119/scripts.pory"
# 566 "data/maps/Route119/scripts.pory"
# 957 "data/maps/Route119/scripts.pory"
	closemessage
# 958 "data/maps/Route119/scripts.pory"
# 567 "data/maps/Route119/scripts.pory"
# 959 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 960 "data/maps/Route119/scripts.pory"
# 568 "data/maps/Route119/scripts.pory"
# 961 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 962 "data/maps/Route119/scripts.pory"
# 569 "data/maps/Route119/scripts.pory"
# 963 "data/maps/Route119/scripts.pory"
	release
# 964 "data/maps/Route119/scripts.pory"
	end
# 965 "data/maps/Route119/scripts.pory"

# 966 "data/maps/Route119/scripts.pory"

# 967 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 968 "data/maps/Route119/scripts.pory"
# 574 "data/maps/Route119/scripts.pory"
# 969 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 970 "data/maps/Route119/scripts.pory"
	end
# 971 "data/maps/Route119/scripts.pory"

# 972 "data/maps/Route119/scripts.pory"

# 973 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 974 "data/maps/Route119/scripts.pory"
# 579 "data/maps/Route119/scripts.pory"
# 975 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 976 "data/maps/Route119/scripts.pory"
	end
# 977 "data/maps/Route119/scripts.pory"

# 978 "data/maps/Route119/scripts.pory"

# 979 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 980 "data/maps/Route119/scripts.pory"
# 584 "data/maps/Route119/scripts.pory"
# 981 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 982 "data/maps/Route119/scripts.pory"
	end
# 983 "data/maps/Route119/scripts.pory"

# 984 "data/maps/Route119/scripts.pory"

# 985 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 986 "data/maps/Route119/scripts.pory"
# 589 "data/maps/Route119/scripts.pory"
# 987 "data/maps/Route119/scripts.pory"
	lockall
# 988 "data/maps/Route119/scripts.pory"
# 590 "data/maps/Route119/scripts.pory"
# 989 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 990 "data/maps/Route119/scripts.pory"
# 591 "data/maps/Route119/scripts.pory"
# 991 "data/maps/Route119/scripts.pory"
	waitmessage
# 992 "data/maps/Route119/scripts.pory"
# 592 "data/maps/Route119/scripts.pory"
# 993 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 994 "data/maps/Route119/scripts.pory"
# 593 "data/maps/Route119/scripts.pory"
# 995 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 996 "data/maps/Route119/scripts.pory"
# 594 "data/maps/Route119/scripts.pory"
# 997 "data/maps/Route119/scripts.pory"
	releaseall
# 998 "data/maps/Route119/scripts.pory"
	end
# 999 "data/maps/Route119/scripts.pory"

# 1000 "data/maps/Route119/scripts.pory"

# 1001 "data/maps/Route119/scripts.pory"
Route119_Text_MayIntro::
# 1002 "data/maps/Route119/scripts.pory"
# 598 "data/maps/Route119/scripts.pory"
# 1003 "data/maps/Route119/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 1004 "data/maps/Route119/scripts.pory"
	.string "Where were you? I was looking for you!\p"
# 1005 "data/maps/Route119/scripts.pory"
	.string "How much stronger have you gotten?\n"
# 1006 "data/maps/Route119/scripts.pory"
	.string "Let me check for you!\p"
# 1007 "data/maps/Route119/scripts.pory"
	.string "Ready with your POKéMON?\n"
# 1008 "data/maps/Route119/scripts.pory"
	.string "Of course you are! Go!$"
# 1009 "data/maps/Route119/scripts.pory"

# 1010 "data/maps/Route119/scripts.pory"
Route119_Text_MayDefeat::
# 1011 "data/maps/Route119/scripts.pory"
# 607 "data/maps/Route119/scripts.pory"
# 1012 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
# 1013 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}, you're strong!\p"
# 1014 "data/maps/Route119/scripts.pory"
	.string "I was worried that you might be\n"
# 1015 "data/maps/Route119/scripts.pory"
	.string "struggling with your training.$"
# 1016 "data/maps/Route119/scripts.pory"

# 1017 "data/maps/Route119/scripts.pory"
Route119_Text_MayPresentForYou::
# 1018 "data/maps/Route119/scripts.pory"
# 614 "data/maps/Route119/scripts.pory"
# 1019 "data/maps/Route119/scripts.pory"
	.string "MAY: But I had absolutely nothing to\n"
# 1020 "data/maps/Route119/scripts.pory"
	.string "worry about! Keep it up!\p"
# 1021 "data/maps/Route119/scripts.pory"
	.string "And, here! I have a present for you.$"
# 1022 "data/maps/Route119/scripts.pory"

# 1023 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainFly::
# 1024 "data/maps/Route119/scripts.pory"
# 620 "data/maps/Route119/scripts.pory"
# 1025 "data/maps/Route119/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\n"
# 1026 "data/maps/Route119/scripts.pory"
	.string "instantly carry you to any town you've\l"
# 1027 "data/maps/Route119/scripts.pory"
	.string "already visited.\p"
# 1028 "data/maps/Route119/scripts.pory"
	.string "But, to use FLY, you have to get\n"
# 1029 "data/maps/Route119/scripts.pory"
	.string "the GYM BADGE from FORTREE CITY.\l"
# 1030 "data/maps/Route119/scripts.pory"
	.string "That's important, so don't forget.\p"
# 1031 "data/maps/Route119/scripts.pory"
	.string "You should FLY home and visit\n"
# 1032 "data/maps/Route119/scripts.pory"
	.string "LITTLEROOT for a change.\p"
# 1033 "data/maps/Route119/scripts.pory"
	.string "I bet your mom's worried about you,\n"
# 1034 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 1035 "data/maps/Route119/scripts.pory"
	.string "Well, let's meet again somewhere!$"
# 1036 "data/maps/Route119/scripts.pory"

# 1037 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIntro::
# 1038 "data/maps/Route119/scripts.pory"
# 634 "data/maps/Route119/scripts.pory"
# 1039 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\n"
# 1040 "data/maps/Route119/scripts.pory"
	.string "you've been looking for POKéMON?\p"
# 1041 "data/maps/Route119/scripts.pory"
	.string "Let me see how good you got.\n"
# 1042 "data/maps/Route119/scripts.pory"
	.string "I'll test you!\p"
# 1043 "data/maps/Route119/scripts.pory"
	.string "Now!\n"
# 1044 "data/maps/Route119/scripts.pory"
	.string "It's a battle, so battle!$"
# 1045 "data/maps/Route119/scripts.pory"

# 1046 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanDefeat::
# 1047 "data/maps/Route119/scripts.pory"
# 643 "data/maps/Route119/scripts.pory"
# 1048 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
# 1049 "data/maps/Route119/scripts.pory"
	.string "You've gotten pretty darn decent.$"
# 1050 "data/maps/Route119/scripts.pory"

# 1051 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIllGiveYouThis::
# 1052 "data/maps/Route119/scripts.pory"
# 648 "data/maps/Route119/scripts.pory"
# 1053 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: I'd say you're good enough\n"
# 1054 "data/maps/Route119/scripts.pory"
	.string "to search for POKéMON anywhere.\p"
# 1055 "data/maps/Route119/scripts.pory"
	.string "Here, I'll give you this.\n"
# 1056 "data/maps/Route119/scripts.pory"
	.string "Try it out.$"
# 1057 "data/maps/Route119/scripts.pory"

# 1058 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainFly::
# 1059 "data/maps/Route119/scripts.pory"
# 655 "data/maps/Route119/scripts.pory"
# 1060 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\n"
# 1061 "data/maps/Route119/scripts.pory"
	.string "instantly carries you to any town\l"
# 1062 "data/maps/Route119/scripts.pory"
	.string "you've already visited.\p"
# 1063 "data/maps/Route119/scripts.pory"
	.string "But you need the FORTREE GYM BADGE \n"
# 1064 "data/maps/Route119/scripts.pory"
	.string "to do that.\p"
# 1065 "data/maps/Route119/scripts.pory"
	.string "Anyway, I have to move along.$"
# 1066 "data/maps/Route119/scripts.pory"

# 1067 "data/maps/Route119/scripts.pory"
Route119_Text_ScottWayToGoBeSeeingYou::
# 1068 "data/maps/Route119/scripts.pory"
# 664 "data/maps/Route119/scripts.pory"
# 1069 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hahahah!\n"
# 1070 "data/maps/Route119/scripts.pory"
	.string "Way to go, {PLAYER}{KUN}!\p"
# 1071 "data/maps/Route119/scripts.pory"
	.string "I just passed by a TRAINER riding\n"
# 1072 "data/maps/Route119/scripts.pory"
	.string "a BIKE.\p"
# 1073 "data/maps/Route119/scripts.pory"
	.string "You just beat that TRAINER, didn't you?\n"
# 1074 "data/maps/Route119/scripts.pory"
	.string "It was pretty obvious that you did.\p"
# 1075 "data/maps/Route119/scripts.pory"
	.string "The kid looked really upset with\n"
# 1076 "data/maps/Route119/scripts.pory"
	.string "a face all red from anger.\p"
# 1077 "data/maps/Route119/scripts.pory"
	.string "I sure seem to run into you often.\n"
# 1078 "data/maps/Route119/scripts.pory"
	.string "Are you off to FORTREE GYM next?\p"
# 1079 "data/maps/Route119/scripts.pory"
	.string "I expect that you'll do well at the GYM.\n"
# 1080 "data/maps/Route119/scripts.pory"
	.string "Well, I'll be seeing you!$"
# 1081 "data/maps/Route119/scripts.pory"

# 1082 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym::
# 1083 "data/maps/Route119/scripts.pory"
# 679 "data/maps/Route119/scripts.pory"
# 1084 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 1085 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 1086 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hiya, {PLAYER}{KUN}, it's me!\p"
# 1087 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 1088 "data/maps/Route119/scripts.pory"
	.string "the FORTREE GYM.\p"
# 1089 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 1090 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the TRAINER\l"
# 1091 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 1092 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 1093 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 1094 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 1095 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 1096 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 1097 "data/maps/Route119/scripts.pory"

# 1098 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute::
# 1099 "data/maps/Route119/scripts.pory"
# 695 "data/maps/Route119/scripts.pory"
# 1100 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
# 1101 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Stay away from the WEATHER\n"
# 1102 "data/maps/Route119/scripts.pory"
	.string "INSTITUTE. It's not safe.$"
# 1103 "data/maps/Route119/scripts.pory"

# 1104 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute::
# 1105 "data/maps/Route119/scripts.pory"
# 701 "data/maps/Route119/scripts.pory"
# 1106 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
# 1107 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Please don't go near the\n"
# 1108 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE.$"
# 1109 "data/maps/Route119/scripts.pory"

# 1110 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons::
# 1111 "data/maps/Route119/scripts.pory"
# 707 "data/maps/Route119/scripts.pory"
# 1112 "data/maps/Route119/scripts.pory"
	.string "I thought you FLY by catching a whole\n"
# 1113 "data/maps/Route119/scripts.pory"
	.string "flock of BIRD POKéMON, and then\l"
# 1114 "data/maps/Route119/scripts.pory"
	.string "hanging on to them somehow.\p"
# 1115 "data/maps/Route119/scripts.pory"
	.string "But it turns out there's an HM move\n"
# 1116 "data/maps/Route119/scripts.pory"
	.string "called FLY!\p"
# 1117 "data/maps/Route119/scripts.pory"
	.string "I wish I'd known about that a long\n"
# 1118 "data/maps/Route119/scripts.pory"
	.string "time ago…$"
# 1119 "data/maps/Route119/scripts.pory"

# 1120 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires::
# 1121 "data/maps/Route119/scripts.pory"
# 717 "data/maps/Route119/scripts.pory"
# 1122 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 1123 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 1124 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares BIKE tires.\n"
# 1125 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 1126 "data/maps/Route119/scripts.pory"

# 1127 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase::
# 1128 "data/maps/Route119/scripts.pory"
# 724 "data/maps/Route119/scripts.pory"
# 1129 "data/maps/Route119/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\n"
# 1130 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 1131 "data/maps/Route119/scripts.pory"
	.string "SECRET BASE?$"
# 1132 "data/maps/Route119/scripts.pory"

# 1133 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree::
# 1134 "data/maps/Route119/scripts.pory"
# 730 "data/maps/Route119/scripts.pory"
# 1135 "data/maps/Route119/scripts.pory"
	.string "ROUTE 119\n"
# 1136 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} FORTREE CITY$"
# 1137 "data/maps/Route119/scripts.pory"

# 1138 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute::
# 1139 "data/maps/Route119/scripts.pory"
# 735 "data/maps/Route119/scripts.pory"
# 1140 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE$"
# 1141 "data/maps/Route119/scripts.pory"

# 1142 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration::
# 1143 "data/maps/Route119/scripts.pory"
# 739 "data/maps/Route119/scripts.pory"
# 1144 "data/maps/Route119/scripts.pory"
	.string "TRAINER TIPS\p"
# 1145 "data/maps/Route119/scripts.pory"
	.string "Up to sixteen decorations and\n"
# 1146 "data/maps/Route119/scripts.pory"
	.string "furniture items can be placed in\l"
# 1147 "data/maps/Route119/scripts.pory"
	.string "a SECRET BASE.\p"
# 1148 "data/maps/Route119/scripts.pory"
	.string "Pick your favorite items and create\n"
# 1149 "data/maps/Route119/scripts.pory"
	.string "your very own SECRET BASE exactly the\l"
# 1150 "data/maps/Route119/scripts.pory"
	.string "way you want.$"
