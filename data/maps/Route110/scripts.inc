# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 3 "data/maps/Route110/scripts.pory"
# 2 "data/maps/Route110/scripts.pory"
# 4 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 5 "data/maps/Route110/scripts.pory"
# 3 "data/maps/Route110/scripts.pory"
# 6 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 7 "data/maps/Route110/scripts.pory"
# 4 "data/maps/Route110/scripts.pory"
# 8 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Route110/scripts.pory"
	.byte 0
# 10 "data/maps/Route110/scripts.pory"

# 11 "data/maps/Route110/scripts.pory"
Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Route110/scripts.pory"
# 5 "data/maps/Route110/scripts.pory"
# 13 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 14 "data/maps/Route110/scripts.pory"
	.2byte 0
# 15 "data/maps/Route110/scripts.pory"

# 16 "data/maps/Route110/scripts.pory"

# 17 "data/maps/Route110/scripts.pory"
Route110_OnResume::
# 18 "data/maps/Route110/scripts.pory"
# 10 "data/maps/Route110/scripts.pory"
# 19 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 20 "data/maps/Route110/scripts.pory"
	end
# 21 "data/maps/Route110/scripts.pory"

# 22 "data/maps/Route110/scripts.pory"

# 23 "data/maps/Route110/scripts.pory"
Route110_OnTransition::
# 24 "data/maps/Route110/scripts.pory"
# 15 "data/maps/Route110/scripts.pory"
# 25 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 26 "data/maps/Route110/scripts.pory"
# 16 "data/maps/Route110/scripts.pory"
# 27 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 28 "data/maps/Route110/scripts.pory"
# 17 "data/maps/Route110/scripts.pory"
# 29 "data/maps/Route110/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 1
# 30 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_OnTransition_2
# 31 "data/maps/Route110/scripts.pory"
Route110_OnTransition_1:
# 32 "data/maps/Route110/scripts.pory"
	end
# 33 "data/maps/Route110/scripts.pory"

# 34 "data/maps/Route110/scripts.pory"
Route110_OnTransition_2:
# 35 "data/maps/Route110/scripts.pory"
# 18 "data/maps/Route110/scripts.pory"
# 36 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_SaveCyclingMusic
# 37 "data/maps/Route110/scripts.pory"
	goto Route110_OnTransition_1
# 38 "data/maps/Route110/scripts.pory"

# 39 "data/maps/Route110/scripts.pory"

# 40 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 41 "data/maps/Route110/scripts.pory"
# 24 "data/maps/Route110/scripts.pory"
# 42 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 43 "data/maps/Route110/scripts.pory"
	return
# 44 "data/maps/Route110/scripts.pory"

# 45 "data/maps/Route110/scripts.pory"

# 46 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 47 "data/maps/Route110/scripts.pory"
# 29 "data/maps/Route110/scripts.pory"
# 48 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 49 "data/maps/Route110/scripts.pory"
# 30 "data/maps/Route110/scripts.pory"
# 50 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 51 "data/maps/Route110/scripts.pory"
	return
# 52 "data/maps/Route110/scripts.pory"

# 53 "data/maps/Route110/scripts.pory"

# 54 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 55 "data/maps/Route110/scripts.pory"
# 35 "data/maps/Route110/scripts.pory"
# 56 "data/maps/Route110/scripts.pory"
	lock
# 57 "data/maps/Route110/scripts.pory"
# 36 "data/maps/Route110/scripts.pory"
# 58 "data/maps/Route110/scripts.pory"
	faceplayer
# 59 "data/maps/Route110/scripts.pory"
# 37 "data/maps/Route110/scripts.pory"
# 60 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 61 "data/maps/Route110/scripts.pory"
# 38 "data/maps/Route110/scripts.pory"
# 62 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 63 "data/maps/Route110/scripts.pory"
# 39 "data/maps/Route110/scripts.pory"
# 64 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route110/scripts.pory"
# 40 "data/maps/Route110/scripts.pory"
# 66 "data/maps/Route110/scripts.pory"
	release
# 67 "data/maps/Route110/scripts.pory"
	end
# 68 "data/maps/Route110/scripts.pory"

# 69 "data/maps/Route110/scripts.pory"

# 70 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 71 "data/maps/Route110/scripts.pory"
# 45 "data/maps/Route110/scripts.pory"
# 72 "data/maps/Route110/scripts.pory"
	lock
# 73 "data/maps/Route110/scripts.pory"
# 46 "data/maps/Route110/scripts.pory"
# 74 "data/maps/Route110/scripts.pory"
	faceplayer
# 75 "data/maps/Route110/scripts.pory"
# 47 "data/maps/Route110/scripts.pory"
# 76 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 77 "data/maps/Route110/scripts.pory"
# 48 "data/maps/Route110/scripts.pory"
# 78 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 79 "data/maps/Route110/scripts.pory"
# 49 "data/maps/Route110/scripts.pory"
# 80 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route110/scripts.pory"
# 50 "data/maps/Route110/scripts.pory"
# 82 "data/maps/Route110/scripts.pory"
	release
# 83 "data/maps/Route110/scripts.pory"
	end
# 84 "data/maps/Route110/scripts.pory"

# 85 "data/maps/Route110/scripts.pory"

# 86 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 87 "data/maps/Route110/scripts.pory"
# 55 "data/maps/Route110/scripts.pory"
# 88 "data/maps/Route110/scripts.pory"
	lock
# 89 "data/maps/Route110/scripts.pory"
# 56 "data/maps/Route110/scripts.pory"
# 90 "data/maps/Route110/scripts.pory"
	faceplayer
# 91 "data/maps/Route110/scripts.pory"
# 57 "data/maps/Route110/scripts.pory"
# 92 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 93 "data/maps/Route110/scripts.pory"
# 58 "data/maps/Route110/scripts.pory"
# 94 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 95 "data/maps/Route110/scripts.pory"
# 59 "data/maps/Route110/scripts.pory"
# 96 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route110/scripts.pory"
# 60 "data/maps/Route110/scripts.pory"
# 98 "data/maps/Route110/scripts.pory"
	release
# 99 "data/maps/Route110/scripts.pory"
	end
# 100 "data/maps/Route110/scripts.pory"

# 101 "data/maps/Route110/scripts.pory"

# 102 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 103 "data/maps/Route110/scripts.pory"
# 65 "data/maps/Route110/scripts.pory"
# 104 "data/maps/Route110/scripts.pory"
	lock
# 105 "data/maps/Route110/scripts.pory"
# 66 "data/maps/Route110/scripts.pory"
# 106 "data/maps/Route110/scripts.pory"
	faceplayer
# 107 "data/maps/Route110/scripts.pory"
# 67 "data/maps/Route110/scripts.pory"
# 108 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 109 "data/maps/Route110/scripts.pory"
# 68 "data/maps/Route110/scripts.pory"
# 110 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 111 "data/maps/Route110/scripts.pory"
# 69 "data/maps/Route110/scripts.pory"
# 112 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route110/scripts.pory"
# 70 "data/maps/Route110/scripts.pory"
# 114 "data/maps/Route110/scripts.pory"
	release
# 115 "data/maps/Route110/scripts.pory"
	end
# 116 "data/maps/Route110/scripts.pory"

# 117 "data/maps/Route110/scripts.pory"

# 118 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 119 "data/maps/Route110/scripts.pory"
# 75 "data/maps/Route110/scripts.pory"
# 120 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 121 "data/maps/Route110/scripts.pory"
	end
# 122 "data/maps/Route110/scripts.pory"

# 123 "data/maps/Route110/scripts.pory"

# 124 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 125 "data/maps/Route110/scripts.pory"
# 80 "data/maps/Route110/scripts.pory"
# 126 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 127 "data/maps/Route110/scripts.pory"
	end
# 128 "data/maps/Route110/scripts.pory"

# 129 "data/maps/Route110/scripts.pory"

# 130 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 131 "data/maps/Route110/scripts.pory"
# 85 "data/maps/Route110/scripts.pory"
# 132 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 133 "data/maps/Route110/scripts.pory"
	end
# 134 "data/maps/Route110/scripts.pory"

# 135 "data/maps/Route110/scripts.pory"

# 136 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 137 "data/maps/Route110/scripts.pory"
# 90 "data/maps/Route110/scripts.pory"
# 138 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 139 "data/maps/Route110/scripts.pory"
	end
# 140 "data/maps/Route110/scripts.pory"

# 141 "data/maps/Route110/scripts.pory"

# 142 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 143 "data/maps/Route110/scripts.pory"
# 95 "data/maps/Route110/scripts.pory"
# 144 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 145 "data/maps/Route110/scripts.pory"
	end
# 146 "data/maps/Route110/scripts.pory"

# 147 "data/maps/Route110/scripts.pory"

# 148 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 149 "data/maps/Route110/scripts.pory"
# 100 "data/maps/Route110/scripts.pory"
# 150 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 151 "data/maps/Route110/scripts.pory"
	end
# 152 "data/maps/Route110/scripts.pory"

# 153 "data/maps/Route110/scripts.pory"

# 154 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 155 "data/maps/Route110/scripts.pory"
# 105 "data/maps/Route110/scripts.pory"
# 156 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 157 "data/maps/Route110/scripts.pory"
	end
# 158 "data/maps/Route110/scripts.pory"

# 159 "data/maps/Route110/scripts.pory"

# 160 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 161 "data/maps/Route110/scripts.pory"
# 110 "data/maps/Route110/scripts.pory"
# 162 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 163 "data/maps/Route110/scripts.pory"
	end
# 164 "data/maps/Route110/scripts.pory"

# 165 "data/maps/Route110/scripts.pory"

# 166 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 167 "data/maps/Route110/scripts.pory"
# 115 "data/maps/Route110/scripts.pory"
# 168 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 169 "data/maps/Route110/scripts.pory"
	end
# 170 "data/maps/Route110/scripts.pory"

# 171 "data/maps/Route110/scripts.pory"

# 172 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 173 "data/maps/Route110/scripts.pory"
# 120 "data/maps/Route110/scripts.pory"
# 174 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 175 "data/maps/Route110/scripts.pory"
	end
# 176 "data/maps/Route110/scripts.pory"

# 177 "data/maps/Route110/scripts.pory"

# 178 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 179 "data/maps/Route110/scripts.pory"
# 125 "data/maps/Route110/scripts.pory"
# 180 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 181 "data/maps/Route110/scripts.pory"
	end
# 182 "data/maps/Route110/scripts.pory"

# 183 "data/maps/Route110/scripts.pory"

# 184 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 185 "data/maps/Route110/scripts.pory"
# 130 "data/maps/Route110/scripts.pory"
# 186 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 187 "data/maps/Route110/scripts.pory"
	end
# 188 "data/maps/Route110/scripts.pory"

# 189 "data/maps/Route110/scripts.pory"

# 190 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 191 "data/maps/Route110/scripts.pory"
# 135 "data/maps/Route110/scripts.pory"
# 192 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 193 "data/maps/Route110/scripts.pory"
	end
# 194 "data/maps/Route110/scripts.pory"

# 195 "data/maps/Route110/scripts.pory"

# 196 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 197 "data/maps/Route110/scripts.pory"
# 140 "data/maps/Route110/scripts.pory"
# 198 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 199 "data/maps/Route110/scripts.pory"
	end
# 200 "data/maps/Route110/scripts.pory"

# 201 "data/maps/Route110/scripts.pory"

# 202 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 203 "data/maps/Route110/scripts.pory"
# 145 "data/maps/Route110/scripts.pory"
# 204 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 205 "data/maps/Route110/scripts.pory"
	end
# 206 "data/maps/Route110/scripts.pory"

# 207 "data/maps/Route110/scripts.pory"

# 208 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 209 "data/maps/Route110/scripts.pory"
# 150 "data/maps/Route110/scripts.pory"
# 210 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 211 "data/maps/Route110/scripts.pory"
	end
# 212 "data/maps/Route110/scripts.pory"

# 213 "data/maps/Route110/scripts.pory"

# 214 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 215 "data/maps/Route110/scripts.pory"
# 155 "data/maps/Route110/scripts.pory"
# 216 "data/maps/Route110/scripts.pory"
	lockall
# 217 "data/maps/Route110/scripts.pory"
# 156 "data/maps/Route110/scripts.pory"
# 218 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 219 "data/maps/Route110/scripts.pory"
# 157 "data/maps/Route110/scripts.pory"
# 220 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FALSE
# 221 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_CyclingRoadResultsSign_2
# 222 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign_1:
# 223 "data/maps/Route110/scripts.pory"
# 160 "data/maps/Route110/scripts.pory"
# 224 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 225 "data/maps/Route110/scripts.pory"
# 161 "data/maps/Route110/scripts.pory"
# 226 "data/maps/Route110/scripts.pory"
	releaseall
# 227 "data/maps/Route110/scripts.pory"
	end
# 228 "data/maps/Route110/scripts.pory"

# 229 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign_2:
# 230 "data/maps/Route110/scripts.pory"
# 158 "data/maps/Route110/scripts.pory"
# 231 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_NoRecordSet
# 232 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingRoadResultsSign_1
# 233 "data/maps/Route110/scripts.pory"

# 234 "data/maps/Route110/scripts.pory"

# 235 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 236 "data/maps/Route110/scripts.pory"
# 166 "data/maps/Route110/scripts.pory"
# 237 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 238 "data/maps/Route110/scripts.pory"
# 167 "data/maps/Route110/scripts.pory"
# 239 "data/maps/Route110/scripts.pory"
	releaseall
# 240 "data/maps/Route110/scripts.pory"
	end
# 241 "data/maps/Route110/scripts.pory"

# 242 "data/maps/Route110/scripts.pory"

# 243 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 244 "data/maps/Route110/scripts.pory"
# 172 "data/maps/Route110/scripts.pory"
# 245 "data/maps/Route110/scripts.pory"
	lock
# 246 "data/maps/Route110/scripts.pory"
# 173 "data/maps/Route110/scripts.pory"
# 247 "data/maps/Route110/scripts.pory"
	faceplayer
# 248 "data/maps/Route110/scripts.pory"
# 174 "data/maps/Route110/scripts.pory"
# 249 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 250 "data/maps/Route110/scripts.pory"
# 175 "data/maps/Route110/scripts.pory"
# 251 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, 1
# 252 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_ChallengeGuy_2
# 253 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy_1:
# 254 "data/maps/Route110/scripts.pory"
# 178 "data/maps/Route110/scripts.pory"
# 255 "data/maps/Route110/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 0
# 256 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_ChallengeGuy_5
# 257 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy_4:
# 258 "data/maps/Route110/scripts.pory"
# 181 "data/maps/Route110/scripts.pory"
# 259 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 260 "data/maps/Route110/scripts.pory"
# 182 "data/maps/Route110/scripts.pory"
# 261 "data/maps/Route110/scripts.pory"
	release
# 262 "data/maps/Route110/scripts.pory"
	end
# 263 "data/maps/Route110/scripts.pory"

# 264 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy_2:
# 265 "data/maps/Route110/scripts.pory"
# 176 "data/maps/Route110/scripts.pory"
# 266 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_PlayerRidingAcroBike
# 267 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeGuy_1
# 268 "data/maps/Route110/scripts.pory"

# 269 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy_5:
# 270 "data/maps/Route110/scripts.pory"
# 179 "data/maps/Route110/scripts.pory"
# 271 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_PlayerNotRidingBike
# 272 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeGuy_4
# 273 "data/maps/Route110/scripts.pory"

# 274 "data/maps/Route110/scripts.pory"

# 275 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 276 "data/maps/Route110/scripts.pory"
# 187 "data/maps/Route110/scripts.pory"
# 277 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 278 "data/maps/Route110/scripts.pory"
# 188 "data/maps/Route110/scripts.pory"
# 279 "data/maps/Route110/scripts.pory"
	release
# 280 "data/maps/Route110/scripts.pory"
	end
# 281 "data/maps/Route110/scripts.pory"

# 282 "data/maps/Route110/scripts.pory"

# 283 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 284 "data/maps/Route110/scripts.pory"
# 193 "data/maps/Route110/scripts.pory"
# 285 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 286 "data/maps/Route110/scripts.pory"
# 194 "data/maps/Route110/scripts.pory"
# 287 "data/maps/Route110/scripts.pory"
	release
# 288 "data/maps/Route110/scripts.pory"
	end
# 289 "data/maps/Route110/scripts.pory"

# 290 "data/maps/Route110/scripts.pory"

# 291 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 292 "data/maps/Route110/scripts.pory"
# 199 "data/maps/Route110/scripts.pory"
# 293 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 294 "data/maps/Route110/scripts.pory"
# 200 "data/maps/Route110/scripts.pory"
# 295 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 296 "data/maps/Route110/scripts.pory"
	end
# 297 "data/maps/Route110/scripts.pory"

# 298 "data/maps/Route110/scripts.pory"

# 299 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 300 "data/maps/Route110/scripts.pory"
# 205 "data/maps/Route110/scripts.pory"
# 301 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 302 "data/maps/Route110/scripts.pory"
# 206 "data/maps/Route110/scripts.pory"
# 303 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route110/scripts.pory"
	end
# 305 "data/maps/Route110/scripts.pory"

# 306 "data/maps/Route110/scripts.pory"

# 307 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 308 "data/maps/Route110/scripts.pory"
# 211 "data/maps/Route110/scripts.pory"
# 309 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 310 "data/maps/Route110/scripts.pory"
# 212 "data/maps/Route110/scripts.pory"
# 311 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 312 "data/maps/Route110/scripts.pory"
# 213 "data/maps/Route110/scripts.pory"
# 313 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
# 314 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_Edwin_2
# 315 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin_1:
# 316 "data/maps/Route110/scripts.pory"
# 216 "data/maps/Route110/scripts.pory"
# 317 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 318 "data/maps/Route110/scripts.pory"
# 217 "data/maps/Route110/scripts.pory"
# 319 "data/maps/Route110/scripts.pory"
	release
# 320 "data/maps/Route110/scripts.pory"
	end
# 321 "data/maps/Route110/scripts.pory"

# 322 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin_2:
# 323 "data/maps/Route110/scripts.pory"
# 214 "data/maps/Route110/scripts.pory"
# 324 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EdwinRematch
# 325 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_Edwin_1
# 326 "data/maps/Route110/scripts.pory"

# 327 "data/maps/Route110/scripts.pory"

# 328 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 329 "data/maps/Route110/scripts.pory"
# 222 "data/maps/Route110/scripts.pory"
# 330 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 331 "data/maps/Route110/scripts.pory"
# 223 "data/maps/Route110/scripts.pory"
# 332 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 333 "data/maps/Route110/scripts.pory"
# 224 "data/maps/Route110/scripts.pory"
# 334 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 335 "data/maps/Route110/scripts.pory"
# 225 "data/maps/Route110/scripts.pory"
# 336 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 337 "data/maps/Route110/scripts.pory"
# 226 "data/maps/Route110/scripts.pory"
# 338 "data/maps/Route110/scripts.pory"
	release
# 339 "data/maps/Route110/scripts.pory"
	end
# 340 "data/maps/Route110/scripts.pory"

# 341 "data/maps/Route110/scripts.pory"

# 342 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 343 "data/maps/Route110/scripts.pory"
# 231 "data/maps/Route110/scripts.pory"
# 344 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 345 "data/maps/Route110/scripts.pory"
# 232 "data/maps/Route110/scripts.pory"
# 346 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 347 "data/maps/Route110/scripts.pory"
	end
# 348 "data/maps/Route110/scripts.pory"

# 349 "data/maps/Route110/scripts.pory"

# 350 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 351 "data/maps/Route110/scripts.pory"
# 237 "data/maps/Route110/scripts.pory"
# 352 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 353 "data/maps/Route110/scripts.pory"
# 238 "data/maps/Route110/scripts.pory"
# 354 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 355 "data/maps/Route110/scripts.pory"
	end
# 356 "data/maps/Route110/scripts.pory"

# 357 "data/maps/Route110/scripts.pory"

# 358 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 359 "data/maps/Route110/scripts.pory"
# 243 "data/maps/Route110/scripts.pory"
# 360 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 361 "data/maps/Route110/scripts.pory"
# 244 "data/maps/Route110/scripts.pory"
# 362 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 363 "data/maps/Route110/scripts.pory"
	end
# 364 "data/maps/Route110/scripts.pory"

# 365 "data/maps/Route110/scripts.pory"

# 366 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 367 "data/maps/Route110/scripts.pory"
# 249 "data/maps/Route110/scripts.pory"
# 368 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 369 "data/maps/Route110/scripts.pory"
# 250 "data/maps/Route110/scripts.pory"
# 370 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route110/scripts.pory"
	end
# 372 "data/maps/Route110/scripts.pory"

# 373 "data/maps/Route110/scripts.pory"

# 374 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 375 "data/maps/Route110/scripts.pory"
# 255 "data/maps/Route110/scripts.pory"
# 376 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 377 "data/maps/Route110/scripts.pory"
# 256 "data/maps/Route110/scripts.pory"
# 378 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 379 "data/maps/Route110/scripts.pory"
# 257 "data/maps/Route110/scripts.pory"
# 380 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
# 381 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_Benjamin_2
# 382 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin_1:
# 383 "data/maps/Route110/scripts.pory"
# 260 "data/maps/Route110/scripts.pory"
# 384 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 385 "data/maps/Route110/scripts.pory"
# 261 "data/maps/Route110/scripts.pory"
# 386 "data/maps/Route110/scripts.pory"
	release
# 387 "data/maps/Route110/scripts.pory"
	end
# 388 "data/maps/Route110/scripts.pory"

# 389 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin_2:
# 390 "data/maps/Route110/scripts.pory"
# 258 "data/maps/Route110/scripts.pory"
# 391 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BenjaminRematch
# 392 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_Benjamin_1
# 393 "data/maps/Route110/scripts.pory"

# 394 "data/maps/Route110/scripts.pory"

# 395 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 396 "data/maps/Route110/scripts.pory"
# 266 "data/maps/Route110/scripts.pory"
# 397 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 398 "data/maps/Route110/scripts.pory"
# 267 "data/maps/Route110/scripts.pory"
# 399 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 400 "data/maps/Route110/scripts.pory"
# 268 "data/maps/Route110/scripts.pory"
# 401 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 402 "data/maps/Route110/scripts.pory"
# 269 "data/maps/Route110/scripts.pory"
# 403 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 404 "data/maps/Route110/scripts.pory"
# 270 "data/maps/Route110/scripts.pory"
# 405 "data/maps/Route110/scripts.pory"
	release
# 406 "data/maps/Route110/scripts.pory"
	end
# 407 "data/maps/Route110/scripts.pory"

# 408 "data/maps/Route110/scripts.pory"

# 409 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 410 "data/maps/Route110/scripts.pory"
# 275 "data/maps/Route110/scripts.pory"
# 411 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 412 "data/maps/Route110/scripts.pory"
# 276 "data/maps/Route110/scripts.pory"
# 413 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 414 "data/maps/Route110/scripts.pory"
	end
# 415 "data/maps/Route110/scripts.pory"

# 416 "data/maps/Route110/scripts.pory"

# 417 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 418 "data/maps/Route110/scripts.pory"
# 281 "data/maps/Route110/scripts.pory"
# 419 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 420 "data/maps/Route110/scripts.pory"
# 282 "data/maps/Route110/scripts.pory"
# 421 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 422 "data/maps/Route110/scripts.pory"
	end
# 423 "data/maps/Route110/scripts.pory"

# 424 "data/maps/Route110/scripts.pory"

# 425 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 426 "data/maps/Route110/scripts.pory"
# 287 "data/maps/Route110/scripts.pory"
# 427 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 428 "data/maps/Route110/scripts.pory"
# 288 "data/maps/Route110/scripts.pory"
# 429 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 430 "data/maps/Route110/scripts.pory"
# 289 "data/maps/Route110/scripts.pory"
# 431 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
# 432 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_Abigail_2
# 433 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail_1:
# 434 "data/maps/Route110/scripts.pory"
# 292 "data/maps/Route110/scripts.pory"
# 435 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 436 "data/maps/Route110/scripts.pory"
# 293 "data/maps/Route110/scripts.pory"
# 437 "data/maps/Route110/scripts.pory"
	release
# 438 "data/maps/Route110/scripts.pory"
	end
# 439 "data/maps/Route110/scripts.pory"

# 440 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail_2:
# 441 "data/maps/Route110/scripts.pory"
# 290 "data/maps/Route110/scripts.pory"
# 442 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_AbigailRematch
# 443 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_Abigail_1
# 444 "data/maps/Route110/scripts.pory"

# 445 "data/maps/Route110/scripts.pory"

# 446 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 447 "data/maps/Route110/scripts.pory"
# 298 "data/maps/Route110/scripts.pory"
# 448 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 449 "data/maps/Route110/scripts.pory"
# 299 "data/maps/Route110/scripts.pory"
# 450 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route110/scripts.pory"
# 300 "data/maps/Route110/scripts.pory"
# 452 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 453 "data/maps/Route110/scripts.pory"
# 301 "data/maps/Route110/scripts.pory"
# 454 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 455 "data/maps/Route110/scripts.pory"
# 302 "data/maps/Route110/scripts.pory"
# 456 "data/maps/Route110/scripts.pory"
	release
# 457 "data/maps/Route110/scripts.pory"
	end
# 458 "data/maps/Route110/scripts.pory"

# 459 "data/maps/Route110/scripts.pory"

# 460 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 461 "data/maps/Route110/scripts.pory"
# 307 "data/maps/Route110/scripts.pory"
# 462 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 463 "data/maps/Route110/scripts.pory"
# 308 "data/maps/Route110/scripts.pory"
# 464 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 465 "data/maps/Route110/scripts.pory"
	end
# 466 "data/maps/Route110/scripts.pory"

# 467 "data/maps/Route110/scripts.pory"

# 468 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 469 "data/maps/Route110/scripts.pory"
# 313 "data/maps/Route110/scripts.pory"
# 470 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 471 "data/maps/Route110/scripts.pory"
# 314 "data/maps/Route110/scripts.pory"
# 472 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 473 "data/maps/Route110/scripts.pory"
# 315 "data/maps/Route110/scripts.pory"
# 474 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
# 475 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_Isabel_2
# 476 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel_1:
# 477 "data/maps/Route110/scripts.pory"
# 318 "data/maps/Route110/scripts.pory"
# 478 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 479 "data/maps/Route110/scripts.pory"
# 319 "data/maps/Route110/scripts.pory"
# 480 "data/maps/Route110/scripts.pory"
	release
# 481 "data/maps/Route110/scripts.pory"
	end
# 482 "data/maps/Route110/scripts.pory"

# 483 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel_2:
# 484 "data/maps/Route110/scripts.pory"
# 316 "data/maps/Route110/scripts.pory"
# 485 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_IsabelRematch
# 486 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_Isabel_1
# 487 "data/maps/Route110/scripts.pory"

# 488 "data/maps/Route110/scripts.pory"

# 489 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 490 "data/maps/Route110/scripts.pory"
# 324 "data/maps/Route110/scripts.pory"
# 491 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 492 "data/maps/Route110/scripts.pory"
# 325 "data/maps/Route110/scripts.pory"
# 493 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 494 "data/maps/Route110/scripts.pory"
# 326 "data/maps/Route110/scripts.pory"
# 495 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 496 "data/maps/Route110/scripts.pory"
# 327 "data/maps/Route110/scripts.pory"
# 497 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 498 "data/maps/Route110/scripts.pory"
# 328 "data/maps/Route110/scripts.pory"
# 499 "data/maps/Route110/scripts.pory"
	release
# 500 "data/maps/Route110/scripts.pory"
	end
# 501 "data/maps/Route110/scripts.pory"

# 502 "data/maps/Route110/scripts.pory"

# 503 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 504 "data/maps/Route110/scripts.pory"
# 333 "data/maps/Route110/scripts.pory"
# 505 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 506 "data/maps/Route110/scripts.pory"
# 334 "data/maps/Route110/scripts.pory"
# 507 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/Route110/scripts.pory"
	end
# 509 "data/maps/Route110/scripts.pory"

# 510 "data/maps/Route110/scripts.pory"

# 511 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 512 "data/maps/Route110/scripts.pory"
# 339 "data/maps/Route110/scripts.pory"
# 513 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 514 "data/maps/Route110/scripts.pory"
# 340 "data/maps/Route110/scripts.pory"
# 515 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 516 "data/maps/Route110/scripts.pory"
	end
# 517 "data/maps/Route110/scripts.pory"

# 518 "data/maps/Route110/scripts.pory"

# 519 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 520 "data/maps/Route110/scripts.pory"
	end
# 521 "data/maps/Route110/scripts.pory"

# 522 "data/maps/Route110/scripts.pory"

# 523 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 524 "data/maps/Route110/scripts.pory"
# 349 "data/maps/Route110/scripts.pory"
# 525 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 526 "data/maps/Route110/scripts.pory"
# 350 "data/maps/Route110/scripts.pory"
# 527 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 528 "data/maps/Route110/scripts.pory"
	end
# 529 "data/maps/Route110/scripts.pory"

# 530 "data/maps/Route110/scripts.pory"

# 531 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 532 "data/maps/Route110/scripts.pory"
# 355 "data/maps/Route110/scripts.pory"
# 533 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 534 "data/maps/Route110/scripts.pory"
# 356 "data/maps/Route110/scripts.pory"
# 535 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 536 "data/maps/Route110/scripts.pory"
	end
# 537 "data/maps/Route110/scripts.pory"

# 538 "data/maps/Route110/scripts.pory"

# 539 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 540 "data/maps/Route110/scripts.pory"
# 361 "data/maps/Route110/scripts.pory"
# 541 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 542 "data/maps/Route110/scripts.pory"
# 362 "data/maps/Route110/scripts.pory"
# 543 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 544 "data/maps/Route110/scripts.pory"
	end
# 545 "data/maps/Route110/scripts.pory"

# 546 "data/maps/Route110/scripts.pory"

# 547 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 548 "data/maps/Route110/scripts.pory"
# 367 "data/maps/Route110/scripts.pory"
# 549 "data/maps/Route110/scripts.pory"
	lockall
# 550 "data/maps/Route110/scripts.pory"
# 368 "data/maps/Route110/scripts.pory"
# 551 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 552 "data/maps/Route110/scripts.pory"
# 369 "data/maps/Route110/scripts.pory"
# 553 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 554 "data/maps/Route110/scripts.pory"
# 370 "data/maps/Route110/scripts.pory"
# 555 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 556 "data/maps/Route110/scripts.pory"
# 371 "data/maps/Route110/scripts.pory"
# 557 "data/maps/Route110/scripts.pory"
	releaseall
# 558 "data/maps/Route110/scripts.pory"
	end
# 559 "data/maps/Route110/scripts.pory"

# 560 "data/maps/Route110/scripts.pory"

# 561 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 562 "data/maps/Route110/scripts.pory"
# 376 "data/maps/Route110/scripts.pory"
# 563 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 564 "data/maps/Route110/scripts.pory"
# 377 "data/maps/Route110/scripts.pory"
# 565 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 566 "data/maps/Route110/scripts.pory"
# 378 "data/maps/Route110/scripts.pory"
# 567 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 568 "data/maps/Route110/scripts.pory"
# 379 "data/maps/Route110/scripts.pory"
# 569 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_CyclingChallengeResults_3
# 570 "data/maps/Route110/scripts.pory"
# 381 "data/maps/Route110/scripts.pory"
# 571 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_CyclingChallengeResults_4
# 572 "data/maps/Route110/scripts.pory"
# 383 "data/maps/Route110/scripts.pory"
# 573 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_CyclingChallengeResults_5
# 574 "data/maps/Route110/scripts.pory"
# 385 "data/maps/Route110/scripts.pory"
# 575 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_CyclingChallengeResults_6
# 576 "data/maps/Route110/scripts.pory"
# 387 "data/maps/Route110/scripts.pory"
# 577 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_CyclingChallengeResults_7
# 578 "data/maps/Route110/scripts.pory"
# 389 "data/maps/Route110/scripts.pory"
# 579 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_CyclingChallengeResults_8
# 580 "data/maps/Route110/scripts.pory"
# 391 "data/maps/Route110/scripts.pory"
# 581 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_CyclingChallengeResults_9
# 582 "data/maps/Route110/scripts.pory"
# 393 "data/maps/Route110/scripts.pory"
# 583 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_CyclingChallengeResults_10
# 584 "data/maps/Route110/scripts.pory"
# 395 "data/maps/Route110/scripts.pory"
# 585 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_CyclingChallengeResults_11
# 586 "data/maps/Route110/scripts.pory"
# 397 "data/maps/Route110/scripts.pory"
# 587 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_CyclingChallengeResults_12
# 588 "data/maps/Route110/scripts.pory"
# 399 "data/maps/Route110/scripts.pory"
# 589 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_CyclingChallengeResults_13
# 590 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_1:
# 591 "data/maps/Route110/scripts.pory"
	end
# 592 "data/maps/Route110/scripts.pory"

# 593 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_3:
# 594 "data/maps/Route110/scripts.pory"
# 380 "data/maps/Route110/scripts.pory"
# 595 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionBest
# 596 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingChallengeResults_1
# 597 "data/maps/Route110/scripts.pory"

# 598 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_4:
# 599 "data/maps/Route110/scripts.pory"
# 382 "data/maps/Route110/scripts.pory"
# 600 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionGood
# 601 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingChallengeResults_1
# 602 "data/maps/Route110/scripts.pory"

# 603 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_5:
# 604 "data/maps/Route110/scripts.pory"
# 384 "data/maps/Route110/scripts.pory"
# 605 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionGood
# 606 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingChallengeResults_1
# 607 "data/maps/Route110/scripts.pory"

# 608 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_6:
# 609 "data/maps/Route110/scripts.pory"
# 386 "data/maps/Route110/scripts.pory"
# 610 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionGood
# 611 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingChallengeResults_1
# 612 "data/maps/Route110/scripts.pory"

# 613 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_7:
# 614 "data/maps/Route110/scripts.pory"
# 388 "data/maps/Route110/scripts.pory"
# 615 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionOk
# 616 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingChallengeResults_1
# 617 "data/maps/Route110/scripts.pory"

# 618 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_8:
# 619 "data/maps/Route110/scripts.pory"
# 390 "data/maps/Route110/scripts.pory"
# 620 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionOk
# 621 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingChallengeResults_1
# 622 "data/maps/Route110/scripts.pory"

# 623 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_9:
# 624 "data/maps/Route110/scripts.pory"
# 392 "data/maps/Route110/scripts.pory"
# 625 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionOk
# 626 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingChallengeResults_1
# 627 "data/maps/Route110/scripts.pory"

# 628 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_10:
# 629 "data/maps/Route110/scripts.pory"
# 394 "data/maps/Route110/scripts.pory"
# 630 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionBad
# 631 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingChallengeResults_1
# 632 "data/maps/Route110/scripts.pory"

# 633 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_11:
# 634 "data/maps/Route110/scripts.pory"
# 396 "data/maps/Route110/scripts.pory"
# 635 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionBad
# 636 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingChallengeResults_1
# 637 "data/maps/Route110/scripts.pory"

# 638 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_12:
# 639 "data/maps/Route110/scripts.pory"
# 398 "data/maps/Route110/scripts.pory"
# 640 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionBad
# 641 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingChallengeResults_1
# 642 "data/maps/Route110/scripts.pory"

# 643 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults_13:
# 644 "data/maps/Route110/scripts.pory"
# 400 "data/maps/Route110/scripts.pory"
# 645 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionWorst
# 646 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_CyclingChallengeResults_1
# 647 "data/maps/Route110/scripts.pory"

# 648 "data/maps/Route110/scripts.pory"

# 649 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 650 "data/maps/Route110/scripts.pory"
# 406 "data/maps/Route110/scripts.pory"
# 651 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 652 "data/maps/Route110/scripts.pory"
# 407 "data/maps/Route110/scripts.pory"
# 653 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 654 "data/maps/Route110/scripts.pory"
	end
# 655 "data/maps/Route110/scripts.pory"

# 656 "data/maps/Route110/scripts.pory"

# 657 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 658 "data/maps/Route110/scripts.pory"
# 412 "data/maps/Route110/scripts.pory"
# 659 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 660 "data/maps/Route110/scripts.pory"
# 413 "data/maps/Route110/scripts.pory"
# 661 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 662 "data/maps/Route110/scripts.pory"
	end
# 663 "data/maps/Route110/scripts.pory"

# 664 "data/maps/Route110/scripts.pory"

# 665 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 666 "data/maps/Route110/scripts.pory"
# 418 "data/maps/Route110/scripts.pory"
# 667 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 668 "data/maps/Route110/scripts.pory"
# 419 "data/maps/Route110/scripts.pory"
# 669 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 670 "data/maps/Route110/scripts.pory"
	end
# 671 "data/maps/Route110/scripts.pory"

# 672 "data/maps/Route110/scripts.pory"

# 673 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 674 "data/maps/Route110/scripts.pory"
# 424 "data/maps/Route110/scripts.pory"
# 675 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 676 "data/maps/Route110/scripts.pory"
# 425 "data/maps/Route110/scripts.pory"
# 677 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 678 "data/maps/Route110/scripts.pory"
	end
# 679 "data/maps/Route110/scripts.pory"

# 680 "data/maps/Route110/scripts.pory"

# 681 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 682 "data/maps/Route110/scripts.pory"
# 430 "data/maps/Route110/scripts.pory"
# 683 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 684 "data/maps/Route110/scripts.pory"
# 431 "data/maps/Route110/scripts.pory"
# 685 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 686 "data/maps/Route110/scripts.pory"
	end
# 687 "data/maps/Route110/scripts.pory"

# 688 "data/maps/Route110/scripts.pory"

# 689 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 690 "data/maps/Route110/scripts.pory"
# 436 "data/maps/Route110/scripts.pory"
# 691 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 692 "data/maps/Route110/scripts.pory"
# 437 "data/maps/Route110/scripts.pory"
# 693 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 694 "data/maps/Route110/scripts.pory"
# 438 "data/maps/Route110/scripts.pory"
# 695 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 696 "data/maps/Route110/scripts.pory"
	return
# 697 "data/maps/Route110/scripts.pory"

# 698 "data/maps/Route110/scripts.pory"

# 699 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 700 "data/maps/Route110/scripts.pory"
# 443 "data/maps/Route110/scripts.pory"
# 701 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 702 "data/maps/Route110/scripts.pory"
# 444 "data/maps/Route110/scripts.pory"
# 703 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 704 "data/maps/Route110/scripts.pory"
	end
# 705 "data/maps/Route110/scripts.pory"

# 706 "data/maps/Route110/scripts.pory"

# 707 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 708 "data/maps/Route110/scripts.pory"
# 449 "data/maps/Route110/scripts.pory"
# 709 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 710 "data/maps/Route110/scripts.pory"
# 450 "data/maps/Route110/scripts.pory"
# 711 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 712 "data/maps/Route110/scripts.pory"
	end
# 713 "data/maps/Route110/scripts.pory"

# 714 "data/maps/Route110/scripts.pory"

# 715 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 716 "data/maps/Route110/scripts.pory"
# 455 "data/maps/Route110/scripts.pory"
# 717 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 718 "data/maps/Route110/scripts.pory"
# 456 "data/maps/Route110/scripts.pory"
# 719 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 720 "data/maps/Route110/scripts.pory"
	end
# 721 "data/maps/Route110/scripts.pory"

# 722 "data/maps/Route110/scripts.pory"

# 723 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 724 "data/maps/Route110/scripts.pory"
# 461 "data/maps/Route110/scripts.pory"
# 725 "data/maps/Route110/scripts.pory"
	lockall
# 726 "data/maps/Route110/scripts.pory"
# 462 "data/maps/Route110/scripts.pory"
# 727 "data/maps/Route110/scripts.pory"
	checkplayergender
# 728 "data/maps/Route110/scripts.pory"
# 463 "data/maps/Route110/scripts.pory"
# 729 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, MALE
# 730 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalScene_2
# 731 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_1:
# 732 "data/maps/Route110/scripts.pory"
# 466 "data/maps/Route110/scripts.pory"
# 733 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FEMALE
# 734 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalScene_5
# 735 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_4:
# 736 "data/maps/Route110/scripts.pory"
# 469 "data/maps/Route110/scripts.pory"
# 737 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 738 "data/maps/Route110/scripts.pory"
# 470 "data/maps/Route110/scripts.pory"
# 739 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 740 "data/maps/Route110/scripts.pory"
# 471 "data/maps/Route110/scripts.pory"
# 741 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_ExclamationMark
# 742 "data/maps/Route110/scripts.pory"
# 472 "data/maps/Route110/scripts.pory"
# 743 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 744 "data/maps/Route110/scripts.pory"
# 473 "data/maps/Route110/scripts.pory"
# 745 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_Delay48
# 746 "data/maps/Route110/scripts.pory"
# 474 "data/maps/Route110/scripts.pory"
# 747 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 748 "data/maps/Route110/scripts.pory"
# 475 "data/maps/Route110/scripts.pory"
# 749 "data/maps/Route110/scripts.pory"
	delay 30
# 750 "data/maps/Route110/scripts.pory"
# 476 "data/maps/Route110/scripts.pory"
# 751 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
# 752 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalScene_8
# 753 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_7:
# 754 "data/maps/Route110/scripts.pory"
# 479 "data/maps/Route110/scripts.pory"
# 755 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 2
# 756 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalScene_11
# 757 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_10:
# 758 "data/maps/Route110/scripts.pory"
# 482 "data/maps/Route110/scripts.pory"
# 759 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
# 760 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalScene_14
# 761 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_13:
# 762 "data/maps/Route110/scripts.pory"
# 485 "data/maps/Route110/scripts.pory"
# 763 "data/maps/Route110/scripts.pory"
	checkplayergender
# 764 "data/maps/Route110/scripts.pory"
# 486 "data/maps/Route110/scripts.pory"
# 765 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, MALE
# 766 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalScene_17
# 767 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_16:
# 768 "data/maps/Route110/scripts.pory"
# 489 "data/maps/Route110/scripts.pory"
# 769 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FEMALE
# 770 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalScene_20
# 771 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_19:
# 772 "data/maps/Route110/scripts.pory"
# 492 "data/maps/Route110/scripts.pory"
# 773 "data/maps/Route110/scripts.pory"
	releaseall
# 774 "data/maps/Route110/scripts.pory"
	end
# 775 "data/maps/Route110/scripts.pory"

# 776 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_2:
# 777 "data/maps/Route110/scripts.pory"
# 464 "data/maps/Route110/scripts.pory"
# 778 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_PlayMayMusic
# 779 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene_1
# 780 "data/maps/Route110/scripts.pory"

# 781 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_5:
# 782 "data/maps/Route110/scripts.pory"
# 467 "data/maps/Route110/scripts.pory"
# 783 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_PlayBrendanMusic
# 784 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene_4
# 785 "data/maps/Route110/scripts.pory"

# 786 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_8:
# 787 "data/maps/Route110/scripts.pory"
# 477 "data/maps/Route110/scripts.pory"
# 788 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalApproachPlayer1
# 789 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene_7
# 790 "data/maps/Route110/scripts.pory"

# 791 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_11:
# 792 "data/maps/Route110/scripts.pory"
# 480 "data/maps/Route110/scripts.pory"
# 793 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalApproachPlayer2
# 794 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene_10
# 795 "data/maps/Route110/scripts.pory"

# 796 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_14:
# 797 "data/maps/Route110/scripts.pory"
# 483 "data/maps/Route110/scripts.pory"
# 798 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalApproachPlayer3
# 799 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene_13
# 800 "data/maps/Route110/scripts.pory"

# 801 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_17:
# 802 "data/maps/Route110/scripts.pory"
# 487 "data/maps/Route110/scripts.pory"
# 803 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattle
# 804 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene_16
# 805 "data/maps/Route110/scripts.pory"

# 806 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_20:
# 807 "data/maps/Route110/scripts.pory"
# 490 "data/maps/Route110/scripts.pory"
# 808 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattle
# 809 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene_19
# 810 "data/maps/Route110/scripts.pory"

# 811 "data/maps/Route110/scripts.pory"

# 812 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 813 "data/maps/Route110/scripts.pory"
# 497 "data/maps/Route110/scripts.pory"
# 814 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 815 "data/maps/Route110/scripts.pory"
	return
# 816 "data/maps/Route110/scripts.pory"

# 817 "data/maps/Route110/scripts.pory"

# 818 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 819 "data/maps/Route110/scripts.pory"
# 502 "data/maps/Route110/scripts.pory"
# 820 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 821 "data/maps/Route110/scripts.pory"
	return
# 822 "data/maps/Route110/scripts.pory"

# 823 "data/maps/Route110/scripts.pory"

# 824 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 825 "data/maps/Route110/scripts.pory"
# 507 "data/maps/Route110/scripts.pory"
# 826 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 827 "data/maps/Route110/scripts.pory"
# 508 "data/maps/Route110/scripts.pory"
# 828 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 829 "data/maps/Route110/scripts.pory"
# 509 "data/maps/Route110/scripts.pory"
# 830 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattle_3
# 831 "data/maps/Route110/scripts.pory"
# 511 "data/maps/Route110/scripts.pory"
# 832 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattle_4
# 833 "data/maps/Route110/scripts.pory"
# 513 "data/maps/Route110/scripts.pory"
# 834 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattle_5
# 835 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle_1:
# 836 "data/maps/Route110/scripts.pory"
	end
# 837 "data/maps/Route110/scripts.pory"

# 838 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle_3:
# 839 "data/maps/Route110/scripts.pory"
# 510 "data/maps/Route110/scripts.pory"
# 840 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattleTreecko
# 841 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattle_1
# 842 "data/maps/Route110/scripts.pory"

# 843 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle_4:
# 844 "data/maps/Route110/scripts.pory"
# 512 "data/maps/Route110/scripts.pory"
# 845 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattleTorchic
# 846 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattle_1
# 847 "data/maps/Route110/scripts.pory"

# 848 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle_5:
# 849 "data/maps/Route110/scripts.pory"
# 514 "data/maps/Route110/scripts.pory"
# 850 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattleMudkip
# 851 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattle_1
# 852 "data/maps/Route110/scripts.pory"

# 853 "data/maps/Route110/scripts.pory"

# 854 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 855 "data/maps/Route110/scripts.pory"
# 520 "data/maps/Route110/scripts.pory"
# 856 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 857 "data/maps/Route110/scripts.pory"
# 521 "data/maps/Route110/scripts.pory"
# 858 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 859 "data/maps/Route110/scripts.pory"
	end
# 860 "data/maps/Route110/scripts.pory"

# 861 "data/maps/Route110/scripts.pory"

# 862 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 863 "data/maps/Route110/scripts.pory"
# 526 "data/maps/Route110/scripts.pory"
# 864 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 865 "data/maps/Route110/scripts.pory"
# 527 "data/maps/Route110/scripts.pory"
# 866 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 867 "data/maps/Route110/scripts.pory"
	end
# 868 "data/maps/Route110/scripts.pory"

# 869 "data/maps/Route110/scripts.pory"

# 870 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 871 "data/maps/Route110/scripts.pory"
# 532 "data/maps/Route110/scripts.pory"
# 872 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 873 "data/maps/Route110/scripts.pory"
# 533 "data/maps/Route110/scripts.pory"
# 874 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 875 "data/maps/Route110/scripts.pory"
	end
# 876 "data/maps/Route110/scripts.pory"

# 877 "data/maps/Route110/scripts.pory"

# 878 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 879 "data/maps/Route110/scripts.pory"
# 538 "data/maps/Route110/scripts.pory"
# 880 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 881 "data/maps/Route110/scripts.pory"
# 539 "data/maps/Route110/scripts.pory"
# 882 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 883 "data/maps/Route110/scripts.pory"
# 540 "data/maps/Route110/scripts.pory"
# 884 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 885 "data/maps/Route110/scripts.pory"
# 541 "data/maps/Route110/scripts.pory"
# 886 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 887 "data/maps/Route110/scripts.pory"
	end
# 888 "data/maps/Route110/scripts.pory"

# 889 "data/maps/Route110/scripts.pory"

# 890 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 891 "data/maps/Route110/scripts.pory"
# 546 "data/maps/Route110/scripts.pory"
# 892 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 893 "data/maps/Route110/scripts.pory"
# 547 "data/maps/Route110/scripts.pory"
# 894 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 895 "data/maps/Route110/scripts.pory"
# 548 "data/maps/Route110/scripts.pory"
# 896 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattle_3
# 897 "data/maps/Route110/scripts.pory"
# 550 "data/maps/Route110/scripts.pory"
# 898 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattle_4
# 899 "data/maps/Route110/scripts.pory"
# 552 "data/maps/Route110/scripts.pory"
# 900 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattle_5
# 901 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle_1:
# 902 "data/maps/Route110/scripts.pory"
	end
# 903 "data/maps/Route110/scripts.pory"

# 904 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle_3:
# 905 "data/maps/Route110/scripts.pory"
# 549 "data/maps/Route110/scripts.pory"
# 906 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattleTreecko
# 907 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattle_1
# 908 "data/maps/Route110/scripts.pory"

# 909 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle_4:
# 910 "data/maps/Route110/scripts.pory"
# 551 "data/maps/Route110/scripts.pory"
# 911 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattleTorchic
# 912 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattle_1
# 913 "data/maps/Route110/scripts.pory"

# 914 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle_5:
# 915 "data/maps/Route110/scripts.pory"
# 553 "data/maps/Route110/scripts.pory"
# 916 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattleMudkip
# 917 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattle_1
# 918 "data/maps/Route110/scripts.pory"

# 919 "data/maps/Route110/scripts.pory"

# 920 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 921 "data/maps/Route110/scripts.pory"
# 559 "data/maps/Route110/scripts.pory"
# 922 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 923 "data/maps/Route110/scripts.pory"
# 560 "data/maps/Route110/scripts.pory"
# 924 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 925 "data/maps/Route110/scripts.pory"
	end
# 926 "data/maps/Route110/scripts.pory"

# 927 "data/maps/Route110/scripts.pory"

# 928 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 929 "data/maps/Route110/scripts.pory"
# 565 "data/maps/Route110/scripts.pory"
# 930 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 931 "data/maps/Route110/scripts.pory"
# 566 "data/maps/Route110/scripts.pory"
# 932 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 933 "data/maps/Route110/scripts.pory"
	end
# 934 "data/maps/Route110/scripts.pory"

# 935 "data/maps/Route110/scripts.pory"

# 936 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 937 "data/maps/Route110/scripts.pory"
# 571 "data/maps/Route110/scripts.pory"
# 938 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 939 "data/maps/Route110/scripts.pory"
# 572 "data/maps/Route110/scripts.pory"
# 940 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 941 "data/maps/Route110/scripts.pory"
	end
# 942 "data/maps/Route110/scripts.pory"

# 943 "data/maps/Route110/scripts.pory"

# 944 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 945 "data/maps/Route110/scripts.pory"
# 577 "data/maps/Route110/scripts.pory"
# 946 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 947 "data/maps/Route110/scripts.pory"
# 578 "data/maps/Route110/scripts.pory"
# 948 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 949 "data/maps/Route110/scripts.pory"
# 579 "data/maps/Route110/scripts.pory"
# 950 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 951 "data/maps/Route110/scripts.pory"
# 580 "data/maps/Route110/scripts.pory"
# 952 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 953 "data/maps/Route110/scripts.pory"
	end
# 954 "data/maps/Route110/scripts.pory"

# 955 "data/maps/Route110/scripts.pory"

# 956 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 957 "data/maps/Route110/scripts.pory"
# 585 "data/maps/Route110/scripts.pory"
# 958 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 959 "data/maps/Route110/scripts.pory"
	return
# 960 "data/maps/Route110/scripts.pory"

# 961 "data/maps/Route110/scripts.pory"

# 962 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 963 "data/maps/Route110/scripts.pory"
# 590 "data/maps/Route110/scripts.pory"
# 964 "data/maps/Route110/scripts.pory"
	closemessage
# 965 "data/maps/Route110/scripts.pory"
# 591 "data/maps/Route110/scripts.pory"
# 966 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
# 967 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalExit_2
# 968 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_1:
# 969 "data/maps/Route110/scripts.pory"
# 594 "data/maps/Route110/scripts.pory"
# 970 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 2
# 971 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalExit_5
# 972 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_4:
# 973 "data/maps/Route110/scripts.pory"
# 597 "data/maps/Route110/scripts.pory"
# 974 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
# 975 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalExit_8
# 976 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_7:
# 977 "data/maps/Route110/scripts.pory"
# 600 "data/maps/Route110/scripts.pory"
# 978 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 979 "data/maps/Route110/scripts.pory"
# 601 "data/maps/Route110/scripts.pory"
# 980 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 981 "data/maps/Route110/scripts.pory"
# 602 "data/maps/Route110/scripts.pory"
# 982 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL
# 983 "data/maps/Route110/scripts.pory"
# 603 "data/maps/Route110/scripts.pory"
# 984 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 985 "data/maps/Route110/scripts.pory"
# 604 "data/maps/Route110/scripts.pory"
# 986 "data/maps/Route110/scripts.pory"
	delay 45
# 987 "data/maps/Route110/scripts.pory"
# 605 "data/maps/Route110/scripts.pory"
# 988 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
# 989 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalExit_11
# 990 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_10:
# 991 "data/maps/Route110/scripts.pory"
# 608 "data/maps/Route110/scripts.pory"
# 992 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 2
# 993 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalExit_14
# 994 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_13:
# 995 "data/maps/Route110/scripts.pory"
# 611 "data/maps/Route110/scripts.pory"
# 996 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
# 997 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_RivalExit_17
# 998 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_16:
# 999 "data/maps/Route110/scripts.pory"
# 614 "data/maps/Route110/scripts.pory"
# 1000 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 1001 "data/maps/Route110/scripts.pory"
# 615 "data/maps/Route110/scripts.pory"
# 1002 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 1003 "data/maps/Route110/scripts.pory"
# 616 "data/maps/Route110/scripts.pory"
# 1004 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 1005 "data/maps/Route110/scripts.pory"
# 617 "data/maps/Route110/scripts.pory"
# 1006 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 1007 "data/maps/Route110/scripts.pory"
# 618 "data/maps/Route110/scripts.pory"
# 1008 "data/maps/Route110/scripts.pory"
	releaseall
# 1009 "data/maps/Route110/scripts.pory"
	end
# 1010 "data/maps/Route110/scripts.pory"

# 1011 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_2:
# 1012 "data/maps/Route110/scripts.pory"
# 592 "data/maps/Route110/scripts.pory"
# 1013 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_MoveRival1
# 1014 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit_1
# 1015 "data/maps/Route110/scripts.pory"

# 1016 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_5:
# 1017 "data/maps/Route110/scripts.pory"
# 595 "data/maps/Route110/scripts.pory"
# 1018 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_MoveRival2
# 1019 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit_4
# 1020 "data/maps/Route110/scripts.pory"

# 1021 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_8:
# 1022 "data/maps/Route110/scripts.pory"
# 598 "data/maps/Route110/scripts.pory"
# 1023 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_MoveRival3
# 1024 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit_7
# 1025 "data/maps/Route110/scripts.pory"

# 1026 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_11:
# 1027 "data/maps/Route110/scripts.pory"
# 606 "data/maps/Route110/scripts.pory"
# 1028 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalExit1
# 1029 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit_10
# 1030 "data/maps/Route110/scripts.pory"

# 1031 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_14:
# 1032 "data/maps/Route110/scripts.pory"
# 609 "data/maps/Route110/scripts.pory"
# 1033 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalExit2
# 1034 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit_13
# 1035 "data/maps/Route110/scripts.pory"

# 1036 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_17:
# 1037 "data/maps/Route110/scripts.pory"
# 612 "data/maps/Route110/scripts.pory"
# 1038 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalExit3
# 1039 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit_16
# 1040 "data/maps/Route110/scripts.pory"

# 1041 "data/maps/Route110/scripts.pory"

# 1042 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 1043 "data/maps/Route110/scripts.pory"
# 623 "data/maps/Route110/scripts.pory"
# 1044 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer1
# 1045 "data/maps/Route110/scripts.pory"
# 624 "data/maps/Route110/scripts.pory"
# 1046 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1047 "data/maps/Route110/scripts.pory"
	return
# 1048 "data/maps/Route110/scripts.pory"

# 1049 "data/maps/Route110/scripts.pory"

# 1050 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 1051 "data/maps/Route110/scripts.pory"
# 629 "data/maps/Route110/scripts.pory"
# 1052 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer2
# 1053 "data/maps/Route110/scripts.pory"
# 630 "data/maps/Route110/scripts.pory"
# 1054 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1055 "data/maps/Route110/scripts.pory"
	return
# 1056 "data/maps/Route110/scripts.pory"

# 1057 "data/maps/Route110/scripts.pory"

# 1058 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 1059 "data/maps/Route110/scripts.pory"
# 635 "data/maps/Route110/scripts.pory"
# 1060 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer3
# 1061 "data/maps/Route110/scripts.pory"
# 636 "data/maps/Route110/scripts.pory"
# 1062 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1063 "data/maps/Route110/scripts.pory"
	return
# 1064 "data/maps/Route110/scripts.pory"

# 1065 "data/maps/Route110/scripts.pory"

# 1066 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 1067 "data/maps/Route110/scripts.pory"
# 641 "data/maps/Route110/scripts.pory"
# 1068 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 1069 "data/maps/Route110/scripts.pory"
# 642 "data/maps/Route110/scripts.pory"
# 1070 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1071 "data/maps/Route110/scripts.pory"
	return
# 1072 "data/maps/Route110/scripts.pory"

# 1073 "data/maps/Route110/scripts.pory"

# 1074 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 1075 "data/maps/Route110/scripts.pory"
# 647 "data/maps/Route110/scripts.pory"
# 1076 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 1077 "data/maps/Route110/scripts.pory"
# 648 "data/maps/Route110/scripts.pory"
# 1078 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1079 "data/maps/Route110/scripts.pory"
	return
# 1080 "data/maps/Route110/scripts.pory"

# 1081 "data/maps/Route110/scripts.pory"

# 1082 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 1083 "data/maps/Route110/scripts.pory"
# 653 "data/maps/Route110/scripts.pory"
# 1084 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 1085 "data/maps/Route110/scripts.pory"
# 654 "data/maps/Route110/scripts.pory"
# 1086 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1087 "data/maps/Route110/scripts.pory"
	return
# 1088 "data/maps/Route110/scripts.pory"

# 1089 "data/maps/Route110/scripts.pory"

# 1090 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 1091 "data/maps/Route110/scripts.pory"
# 659 "data/maps/Route110/scripts.pory"
# 1092 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 33, 55
# 1093 "data/maps/Route110/scripts.pory"
	return
# 1094 "data/maps/Route110/scripts.pory"

# 1095 "data/maps/Route110/scripts.pory"

# 1096 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 1097 "data/maps/Route110/scripts.pory"
# 664 "data/maps/Route110/scripts.pory"
# 1098 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 34, 55
# 1099 "data/maps/Route110/scripts.pory"
	return
# 1100 "data/maps/Route110/scripts.pory"

# 1101 "data/maps/Route110/scripts.pory"

# 1102 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 1103 "data/maps/Route110/scripts.pory"
# 669 "data/maps/Route110/scripts.pory"
# 1104 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 35, 55
# 1105 "data/maps/Route110/scripts.pory"
	return
# 1106 "data/maps/Route110/scripts.pory"

# 1107 "data/maps/Route110/scripts.pory"

# 1108 "data/maps/Route110/scripts.pory"
# 673 "data/maps/Route110/scripts.pory"
# 1109 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 1110 "data/maps/Route110/scripts.pory"
# 674 "data/maps/Route110/scripts.pory"
# 1111 "data/maps/Route110/scripts.pory"
	walk_down
# 1112 "data/maps/Route110/scripts.pory"
# 675 "data/maps/Route110/scripts.pory"
# 1113 "data/maps/Route110/scripts.pory"
	walk_left
# 1114 "data/maps/Route110/scripts.pory"
# 676 "data/maps/Route110/scripts.pory"
# 1115 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 1116 "data/maps/Route110/scripts.pory"
# 677 "data/maps/Route110/scripts.pory"
# 1117 "data/maps/Route110/scripts.pory"
	step_end
# 1118 "data/maps/Route110/scripts.pory"

# 1119 "data/maps/Route110/scripts.pory"
# 680 "data/maps/Route110/scripts.pory"
# 1120 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 1121 "data/maps/Route110/scripts.pory"
# 681 "data/maps/Route110/scripts.pory"
# 1122 "data/maps/Route110/scripts.pory"
	walk_down
# 1123 "data/maps/Route110/scripts.pory"
# 682 "data/maps/Route110/scripts.pory"
# 1124 "data/maps/Route110/scripts.pory"
	step_end
# 1125 "data/maps/Route110/scripts.pory"

# 1126 "data/maps/Route110/scripts.pory"
# 685 "data/maps/Route110/scripts.pory"
# 1127 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 1128 "data/maps/Route110/scripts.pory"
# 686 "data/maps/Route110/scripts.pory"
# 1129 "data/maps/Route110/scripts.pory"
	walk_down
# 1130 "data/maps/Route110/scripts.pory"
# 687 "data/maps/Route110/scripts.pory"
# 1131 "data/maps/Route110/scripts.pory"
	walk_right
# 1132 "data/maps/Route110/scripts.pory"
# 688 "data/maps/Route110/scripts.pory"
# 1133 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 1134 "data/maps/Route110/scripts.pory"
# 689 "data/maps/Route110/scripts.pory"
# 1135 "data/maps/Route110/scripts.pory"
	step_end
# 1136 "data/maps/Route110/scripts.pory"

# 1137 "data/maps/Route110/scripts.pory"
# 692 "data/maps/Route110/scripts.pory"
# 1138 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 1139 "data/maps/Route110/scripts.pory"
# 693 "data/maps/Route110/scripts.pory"
# 1140 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1141 "data/maps/Route110/scripts.pory"
# 694 "data/maps/Route110/scripts.pory"
# 1142 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1143 "data/maps/Route110/scripts.pory"
# 695 "data/maps/Route110/scripts.pory"
# 1144 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1145 "data/maps/Route110/scripts.pory"
# 696 "data/maps/Route110/scripts.pory"
# 1146 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1147 "data/maps/Route110/scripts.pory"
# 697 "data/maps/Route110/scripts.pory"
# 1148 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1149 "data/maps/Route110/scripts.pory"
# 698 "data/maps/Route110/scripts.pory"
# 1150 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1151 "data/maps/Route110/scripts.pory"
# 699 "data/maps/Route110/scripts.pory"
# 1152 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1153 "data/maps/Route110/scripts.pory"
# 700 "data/maps/Route110/scripts.pory"
# 1154 "data/maps/Route110/scripts.pory"
	step_end
# 1155 "data/maps/Route110/scripts.pory"

# 1156 "data/maps/Route110/scripts.pory"
# 703 "data/maps/Route110/scripts.pory"
# 1157 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 1158 "data/maps/Route110/scripts.pory"
# 704 "data/maps/Route110/scripts.pory"
# 1159 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1160 "data/maps/Route110/scripts.pory"
# 705 "data/maps/Route110/scripts.pory"
# 1161 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1162 "data/maps/Route110/scripts.pory"
# 706 "data/maps/Route110/scripts.pory"
# 1163 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1164 "data/maps/Route110/scripts.pory"
# 707 "data/maps/Route110/scripts.pory"
# 1165 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1166 "data/maps/Route110/scripts.pory"
# 708 "data/maps/Route110/scripts.pory"
# 1167 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1168 "data/maps/Route110/scripts.pory"
# 709 "data/maps/Route110/scripts.pory"
# 1169 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1170 "data/maps/Route110/scripts.pory"
# 710 "data/maps/Route110/scripts.pory"
# 1171 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1172 "data/maps/Route110/scripts.pory"
# 711 "data/maps/Route110/scripts.pory"
# 1173 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 1174 "data/maps/Route110/scripts.pory"
# 712 "data/maps/Route110/scripts.pory"
# 1175 "data/maps/Route110/scripts.pory"
	step_end
# 1176 "data/maps/Route110/scripts.pory"

# 1177 "data/maps/Route110/scripts.pory"
# 715 "data/maps/Route110/scripts.pory"
# 1178 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 1179 "data/maps/Route110/scripts.pory"
# 716 "data/maps/Route110/scripts.pory"
# 1180 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1181 "data/maps/Route110/scripts.pory"
# 717 "data/maps/Route110/scripts.pory"
# 1182 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1183 "data/maps/Route110/scripts.pory"
# 718 "data/maps/Route110/scripts.pory"
# 1184 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1185 "data/maps/Route110/scripts.pory"
# 719 "data/maps/Route110/scripts.pory"
# 1186 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1187 "data/maps/Route110/scripts.pory"
# 720 "data/maps/Route110/scripts.pory"
# 1188 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1189 "data/maps/Route110/scripts.pory"
# 721 "data/maps/Route110/scripts.pory"
# 1190 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1191 "data/maps/Route110/scripts.pory"
# 722 "data/maps/Route110/scripts.pory"
# 1192 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 1193 "data/maps/Route110/scripts.pory"
# 723 "data/maps/Route110/scripts.pory"
# 1194 "data/maps/Route110/scripts.pory"
	step_end
# 1195 "data/maps/Route110/scripts.pory"

# 1196 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 1197 "data/maps/Route110/scripts.pory"
# 727 "data/maps/Route110/scripts.pory"
# 1198 "data/maps/Route110/scripts.pory"
	lockall
# 1199 "data/maps/Route110/scripts.pory"
# 728 "data/maps/Route110/scripts.pory"
# 1200 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 1201 "data/maps/Route110/scripts.pory"
# 729 "data/maps/Route110/scripts.pory"
# 1202 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 1203 "data/maps/Route110/scripts.pory"
	return
# 1204 "data/maps/Route110/scripts.pory"

# 1205 "data/maps/Route110/scripts.pory"

# 1206 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 1207 "data/maps/Route110/scripts.pory"
# 733 "data/maps/Route110/scripts.pory"
# 1208 "data/maps/Route110/scripts.pory"
	lockall
# 1209 "data/maps/Route110/scripts.pory"
# 734 "data/maps/Route110/scripts.pory"
# 1210 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 1211 "data/maps/Route110/scripts.pory"
# 735 "data/maps/Route110/scripts.pory"
# 1212 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 1213 "data/maps/Route110/scripts.pory"
	return
# 1214 "data/maps/Route110/scripts.pory"

# 1215 "data/maps/Route110/scripts.pory"

# 1216 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 1217 "data/maps/Route110/scripts.pory"
# 739 "data/maps/Route110/scripts.pory"
# 1218 "data/maps/Route110/scripts.pory"
	lockall
# 1219 "data/maps/Route110/scripts.pory"
# 740 "data/maps/Route110/scripts.pory"
# 1220 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 1221 "data/maps/Route110/scripts.pory"
# 741 "data/maps/Route110/scripts.pory"
# 1222 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 1223 "data/maps/Route110/scripts.pory"
	return
# 1224 "data/maps/Route110/scripts.pory"

# 1225 "data/maps/Route110/scripts.pory"

# 1226 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 1227 "data/maps/Route110/scripts.pory"
# 745 "data/maps/Route110/scripts.pory"
# 1228 "data/maps/Route110/scripts.pory"
	lockall
# 1229 "data/maps/Route110/scripts.pory"
# 746 "data/maps/Route110/scripts.pory"
# 1230 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 1231 "data/maps/Route110/scripts.pory"
# 747 "data/maps/Route110/scripts.pory"
# 1232 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 1233 "data/maps/Route110/scripts.pory"
	return
# 1234 "data/maps/Route110/scripts.pory"

# 1235 "data/maps/Route110/scripts.pory"

# 1236 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 1237 "data/maps/Route110/scripts.pory"
# 751 "data/maps/Route110/scripts.pory"
# 1238 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 1239 "data/maps/Route110/scripts.pory"
# 752 "data/maps/Route110/scripts.pory"
# 1240 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchEntrance
# 1241 "data/maps/Route110/scripts.pory"
# 753 "data/maps/Route110/scripts.pory"
# 1242 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1243 "data/maps/Route110/scripts.pory"
# 754 "data/maps/Route110/scripts.pory"
# 1244 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 1245 "data/maps/Route110/scripts.pory"
# 755 "data/maps/Route110/scripts.pory"
# 1246 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 1247 "data/maps/Route110/scripts.pory"
# 756 "data/maps/Route110/scripts.pory"
# 1248 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1249 "data/maps/Route110/scripts.pory"
# 757 "data/maps/Route110/scripts.pory"
# 1250 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 1251 "data/maps/Route110/scripts.pory"
# 758 "data/maps/Route110/scripts.pory"
# 1252 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1253 "data/maps/Route110/scripts.pory"
# 759 "data/maps/Route110/scripts.pory"
# 1254 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
# 1255 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_BirchScene_2
# 1256 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_1:
# 1257 "data/maps/Route110/scripts.pory"
# 762 "data/maps/Route110/scripts.pory"
# 1258 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 2
# 1259 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_BirchScene_5
# 1260 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_4:
# 1261 "data/maps/Route110/scripts.pory"
# 765 "data/maps/Route110/scripts.pory"
# 1262 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
# 1263 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_BirchScene_8
# 1264 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_7:
# 1265 "data/maps/Route110/scripts.pory"
# 768 "data/maps/Route110/scripts.pory"
# 1266 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 4
# 1267 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_BirchScene_11
# 1268 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_10:
# 1269 "data/maps/Route110/scripts.pory"
# 771 "data/maps/Route110/scripts.pory"
# 1270 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 1271 "data/maps/Route110/scripts.pory"
# 772 "data/maps/Route110/scripts.pory"
# 1272 "data/maps/Route110/scripts.pory"
	closemessage
# 1273 "data/maps/Route110/scripts.pory"
# 773 "data/maps/Route110/scripts.pory"
# 1274 "data/maps/Route110/scripts.pory"
	delay 20
# 1275 "data/maps/Route110/scripts.pory"
# 774 "data/maps/Route110/scripts.pory"
# 1276 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 1277 "data/maps/Route110/scripts.pory"
# 775 "data/maps/Route110/scripts.pory"
# 1278 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1279 "data/maps/Route110/scripts.pory"
# 776 "data/maps/Route110/scripts.pory"
# 1280 "data/maps/Route110/scripts.pory"
	delay 10
# 1281 "data/maps/Route110/scripts.pory"
# 777 "data/maps/Route110/scripts.pory"
# 1282 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 1283 "data/maps/Route110/scripts.pory"
# 778 "data/maps/Route110/scripts.pory"
# 1284 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1285 "data/maps/Route110/scripts.pory"
# 779 "data/maps/Route110/scripts.pory"
# 1286 "data/maps/Route110/scripts.pory"
	delay 20
# 1287 "data/maps/Route110/scripts.pory"
# 780 "data/maps/Route110/scripts.pory"
# 1288 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 1289 "data/maps/Route110/scripts.pory"
# 781 "data/maps/Route110/scripts.pory"
# 1290 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1291 "data/maps/Route110/scripts.pory"
# 782 "data/maps/Route110/scripts.pory"
# 1292 "data/maps/Route110/scripts.pory"
	delay 30
# 1293 "data/maps/Route110/scripts.pory"
# 783 "data/maps/Route110/scripts.pory"
# 1294 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 1295 "data/maps/Route110/scripts.pory"
# 784 "data/maps/Route110/scripts.pory"
# 1296 "data/maps/Route110/scripts.pory"
	closemessage
# 1297 "data/maps/Route110/scripts.pory"
# 785 "data/maps/Route110/scripts.pory"
# 1298 "data/maps/Route110/scripts.pory"
	delay 30
# 1299 "data/maps/Route110/scripts.pory"
# 786 "data/maps/Route110/scripts.pory"
# 1300 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1301 "data/maps/Route110/scripts.pory"
# 787 "data/maps/Route110/scripts.pory"
# 1302 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 1303 "data/maps/Route110/scripts.pory"
# 788 "data/maps/Route110/scripts.pory"
# 1304 "data/maps/Route110/scripts.pory"
	waitfanfare
# 1305 "data/maps/Route110/scripts.pory"
# 789 "data/maps/Route110/scripts.pory"
# 1306 "data/maps/Route110/scripts.pory"
	closemessage
# 1307 "data/maps/Route110/scripts.pory"
# 790 "data/maps/Route110/scripts.pory"
# 1308 "data/maps/Route110/scripts.pory"
	delay 30
# 1309 "data/maps/Route110/scripts.pory"
# 791 "data/maps/Route110/scripts.pory"
# 1310 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 1311 "data/maps/Route110/scripts.pory"
# 792 "data/maps/Route110/scripts.pory"
# 1312 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 1313 "data/maps/Route110/scripts.pory"
# 793 "data/maps/Route110/scripts.pory"
# 1314 "data/maps/Route110/scripts.pory"
	closemessage
# 1315 "data/maps/Route110/scripts.pory"
# 794 "data/maps/Route110/scripts.pory"
# 1316 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
# 1317 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_BirchScene_14
# 1318 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_13:
# 1319 "data/maps/Route110/scripts.pory"
# 797 "data/maps/Route110/scripts.pory"
# 1320 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 2
# 1321 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_BirchScene_17
# 1322 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_16:
# 1323 "data/maps/Route110/scripts.pory"
# 800 "data/maps/Route110/scripts.pory"
# 1324 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
# 1325 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_BirchScene_20
# 1326 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_19:
# 1327 "data/maps/Route110/scripts.pory"
# 803 "data/maps/Route110/scripts.pory"
# 1328 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 4
# 1329 "data/maps/Route110/scripts.pory"
	goto_if_eq Route110_EventScript_BirchScene_23
# 1330 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_22:
# 1331 "data/maps/Route110/scripts.pory"
# 806 "data/maps/Route110/scripts.pory"
# 1332 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 1333 "data/maps/Route110/scripts.pory"
# 807 "data/maps/Route110/scripts.pory"
# 1334 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 1335 "data/maps/Route110/scripts.pory"
# 808 "data/maps/Route110/scripts.pory"
# 1336 "data/maps/Route110/scripts.pory"
	releaseall
# 1337 "data/maps/Route110/scripts.pory"
	end
# 1338 "data/maps/Route110/scripts.pory"

# 1339 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_2:
# 1340 "data/maps/Route110/scripts.pory"
# 760 "data/maps/Route110/scripts.pory"
# 1341 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchApproachPlayer1
# 1342 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene_1
# 1343 "data/maps/Route110/scripts.pory"

# 1344 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_5:
# 1345 "data/maps/Route110/scripts.pory"
# 763 "data/maps/Route110/scripts.pory"
# 1346 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchApproachPlayer2
# 1347 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene_4
# 1348 "data/maps/Route110/scripts.pory"

# 1349 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_8:
# 1350 "data/maps/Route110/scripts.pory"
# 766 "data/maps/Route110/scripts.pory"
# 1351 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchApproachPlayer3
# 1352 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene_7
# 1353 "data/maps/Route110/scripts.pory"

# 1354 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_11:
# 1355 "data/maps/Route110/scripts.pory"
# 769 "data/maps/Route110/scripts.pory"
# 1356 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchApproachPlayer4
# 1357 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene_10
# 1358 "data/maps/Route110/scripts.pory"

# 1359 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_14:
# 1360 "data/maps/Route110/scripts.pory"
# 795 "data/maps/Route110/scripts.pory"
# 1361 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchExit1
# 1362 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene_13
# 1363 "data/maps/Route110/scripts.pory"

# 1364 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_17:
# 1365 "data/maps/Route110/scripts.pory"
# 798 "data/maps/Route110/scripts.pory"
# 1366 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchExit2
# 1367 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene_16
# 1368 "data/maps/Route110/scripts.pory"

# 1369 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_20:
# 1370 "data/maps/Route110/scripts.pory"
# 801 "data/maps/Route110/scripts.pory"
# 1371 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchExit3
# 1372 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene_19
# 1373 "data/maps/Route110/scripts.pory"

# 1374 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_23:
# 1375 "data/maps/Route110/scripts.pory"
# 804 "data/maps/Route110/scripts.pory"
# 1376 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchExit4
# 1377 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene_22
# 1378 "data/maps/Route110/scripts.pory"

# 1379 "data/maps/Route110/scripts.pory"

# 1380 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 1381 "data/maps/Route110/scripts.pory"
# 813 "data/maps/Route110/scripts.pory"
# 1382 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer1
# 1383 "data/maps/Route110/scripts.pory"
# 814 "data/maps/Route110/scripts.pory"
# 1384 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1385 "data/maps/Route110/scripts.pory"
	return
# 1386 "data/maps/Route110/scripts.pory"

# 1387 "data/maps/Route110/scripts.pory"

# 1388 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 1389 "data/maps/Route110/scripts.pory"
# 819 "data/maps/Route110/scripts.pory"
# 1390 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer2
# 1391 "data/maps/Route110/scripts.pory"
# 820 "data/maps/Route110/scripts.pory"
# 1392 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1393 "data/maps/Route110/scripts.pory"
	return
# 1394 "data/maps/Route110/scripts.pory"

# 1395 "data/maps/Route110/scripts.pory"

# 1396 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 1397 "data/maps/Route110/scripts.pory"
# 825 "data/maps/Route110/scripts.pory"
# 1398 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer3
# 1399 "data/maps/Route110/scripts.pory"
# 826 "data/maps/Route110/scripts.pory"
# 1400 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1401 "data/maps/Route110/scripts.pory"
	return
# 1402 "data/maps/Route110/scripts.pory"

# 1403 "data/maps/Route110/scripts.pory"

# 1404 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 1405 "data/maps/Route110/scripts.pory"
# 831 "data/maps/Route110/scripts.pory"
# 1406 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer4
# 1407 "data/maps/Route110/scripts.pory"
# 832 "data/maps/Route110/scripts.pory"
# 1408 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1409 "data/maps/Route110/scripts.pory"
	return
# 1410 "data/maps/Route110/scripts.pory"

# 1411 "data/maps/Route110/scripts.pory"

# 1412 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 1413 "data/maps/Route110/scripts.pory"
# 837 "data/maps/Route110/scripts.pory"
# 1414 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit1
# 1415 "data/maps/Route110/scripts.pory"
# 838 "data/maps/Route110/scripts.pory"
# 1416 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1417 "data/maps/Route110/scripts.pory"
	return
# 1418 "data/maps/Route110/scripts.pory"

# 1419 "data/maps/Route110/scripts.pory"

# 1420 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 1421 "data/maps/Route110/scripts.pory"
# 843 "data/maps/Route110/scripts.pory"
# 1422 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit2
# 1423 "data/maps/Route110/scripts.pory"
# 844 "data/maps/Route110/scripts.pory"
# 1424 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1425 "data/maps/Route110/scripts.pory"
	return
# 1426 "data/maps/Route110/scripts.pory"

# 1427 "data/maps/Route110/scripts.pory"

# 1428 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 1429 "data/maps/Route110/scripts.pory"
# 849 "data/maps/Route110/scripts.pory"
# 1430 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit3
# 1431 "data/maps/Route110/scripts.pory"
# 850 "data/maps/Route110/scripts.pory"
# 1432 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1433 "data/maps/Route110/scripts.pory"
	return
# 1434 "data/maps/Route110/scripts.pory"

# 1435 "data/maps/Route110/scripts.pory"

# 1436 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 1437 "data/maps/Route110/scripts.pory"
# 855 "data/maps/Route110/scripts.pory"
# 1438 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit4
# 1439 "data/maps/Route110/scripts.pory"
# 856 "data/maps/Route110/scripts.pory"
# 1440 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1441 "data/maps/Route110/scripts.pory"
	return
# 1442 "data/maps/Route110/scripts.pory"

# 1443 "data/maps/Route110/scripts.pory"

# 1444 "data/maps/Route110/scripts.pory"
# 860 "data/maps/Route110/scripts.pory"
# 1445 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 1446 "data/maps/Route110/scripts.pory"
# 861 "data/maps/Route110/scripts.pory"
# 1447 "data/maps/Route110/scripts.pory"
	walk_down
# 1448 "data/maps/Route110/scripts.pory"
# 862 "data/maps/Route110/scripts.pory"
# 1449 "data/maps/Route110/scripts.pory"
	walk_down
# 1450 "data/maps/Route110/scripts.pory"
# 863 "data/maps/Route110/scripts.pory"
# 1451 "data/maps/Route110/scripts.pory"
	walk_down
# 1452 "data/maps/Route110/scripts.pory"
# 864 "data/maps/Route110/scripts.pory"
# 1453 "data/maps/Route110/scripts.pory"
	step_end
# 1454 "data/maps/Route110/scripts.pory"

# 1455 "data/maps/Route110/scripts.pory"
# 867 "data/maps/Route110/scripts.pory"
# 1456 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 1457 "data/maps/Route110/scripts.pory"
# 868 "data/maps/Route110/scripts.pory"
# 1458 "data/maps/Route110/scripts.pory"
	walk_down
# 1459 "data/maps/Route110/scripts.pory"
# 869 "data/maps/Route110/scripts.pory"
# 1460 "data/maps/Route110/scripts.pory"
	walk_left
# 1461 "data/maps/Route110/scripts.pory"
# 870 "data/maps/Route110/scripts.pory"
# 1462 "data/maps/Route110/scripts.pory"
	walk_left
# 1463 "data/maps/Route110/scripts.pory"
# 871 "data/maps/Route110/scripts.pory"
# 1464 "data/maps/Route110/scripts.pory"
	walk_down
# 1465 "data/maps/Route110/scripts.pory"
# 872 "data/maps/Route110/scripts.pory"
# 1466 "data/maps/Route110/scripts.pory"
	step_end
# 1467 "data/maps/Route110/scripts.pory"

# 1468 "data/maps/Route110/scripts.pory"
# 875 "data/maps/Route110/scripts.pory"
# 1469 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 1470 "data/maps/Route110/scripts.pory"
# 876 "data/maps/Route110/scripts.pory"
# 1471 "data/maps/Route110/scripts.pory"
	walk_down
# 1472 "data/maps/Route110/scripts.pory"
# 877 "data/maps/Route110/scripts.pory"
# 1473 "data/maps/Route110/scripts.pory"
	walk_left
# 1474 "data/maps/Route110/scripts.pory"
# 878 "data/maps/Route110/scripts.pory"
# 1475 "data/maps/Route110/scripts.pory"
	walk_down
# 1476 "data/maps/Route110/scripts.pory"
# 879 "data/maps/Route110/scripts.pory"
# 1477 "data/maps/Route110/scripts.pory"
	step_end
# 1478 "data/maps/Route110/scripts.pory"

# 1479 "data/maps/Route110/scripts.pory"
# 882 "data/maps/Route110/scripts.pory"
# 1480 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 1481 "data/maps/Route110/scripts.pory"
# 883 "data/maps/Route110/scripts.pory"
# 1482 "data/maps/Route110/scripts.pory"
	walk_down
# 1483 "data/maps/Route110/scripts.pory"
# 884 "data/maps/Route110/scripts.pory"
# 1484 "data/maps/Route110/scripts.pory"
	walk_down
# 1485 "data/maps/Route110/scripts.pory"
# 885 "data/maps/Route110/scripts.pory"
# 1486 "data/maps/Route110/scripts.pory"
	step_end
# 1487 "data/maps/Route110/scripts.pory"

# 1488 "data/maps/Route110/scripts.pory"
# 888 "data/maps/Route110/scripts.pory"
# 1489 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 1490 "data/maps/Route110/scripts.pory"
# 889 "data/maps/Route110/scripts.pory"
# 1491 "data/maps/Route110/scripts.pory"
	walk_down
# 1492 "data/maps/Route110/scripts.pory"
# 890 "data/maps/Route110/scripts.pory"
# 1493 "data/maps/Route110/scripts.pory"
	walk_right
# 1494 "data/maps/Route110/scripts.pory"
# 891 "data/maps/Route110/scripts.pory"
# 1495 "data/maps/Route110/scripts.pory"
	walk_down
# 1496 "data/maps/Route110/scripts.pory"
# 892 "data/maps/Route110/scripts.pory"
# 1497 "data/maps/Route110/scripts.pory"
	step_end
# 1498 "data/maps/Route110/scripts.pory"

# 1499 "data/maps/Route110/scripts.pory"
# 895 "data/maps/Route110/scripts.pory"
# 1500 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 1501 "data/maps/Route110/scripts.pory"
# 896 "data/maps/Route110/scripts.pory"
# 1502 "data/maps/Route110/scripts.pory"
	walk_up
# 1503 "data/maps/Route110/scripts.pory"
# 897 "data/maps/Route110/scripts.pory"
# 1504 "data/maps/Route110/scripts.pory"
	walk_up
# 1505 "data/maps/Route110/scripts.pory"
# 898 "data/maps/Route110/scripts.pory"
# 1506 "data/maps/Route110/scripts.pory"
	walk_right
# 1507 "data/maps/Route110/scripts.pory"
# 899 "data/maps/Route110/scripts.pory"
# 1508 "data/maps/Route110/scripts.pory"
	walk_up
# 1509 "data/maps/Route110/scripts.pory"
# 900 "data/maps/Route110/scripts.pory"
# 1510 "data/maps/Route110/scripts.pory"
	walk_up
# 1511 "data/maps/Route110/scripts.pory"
# 901 "data/maps/Route110/scripts.pory"
# 1512 "data/maps/Route110/scripts.pory"
	walk_up
# 1513 "data/maps/Route110/scripts.pory"
# 902 "data/maps/Route110/scripts.pory"
# 1514 "data/maps/Route110/scripts.pory"
	step_end
# 1515 "data/maps/Route110/scripts.pory"

# 1516 "data/maps/Route110/scripts.pory"
# 905 "data/maps/Route110/scripts.pory"
# 1517 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 1518 "data/maps/Route110/scripts.pory"
# 906 "data/maps/Route110/scripts.pory"
# 1519 "data/maps/Route110/scripts.pory"
	walk_up
# 1520 "data/maps/Route110/scripts.pory"
# 907 "data/maps/Route110/scripts.pory"
# 1521 "data/maps/Route110/scripts.pory"
	walk_up
# 1522 "data/maps/Route110/scripts.pory"
# 908 "data/maps/Route110/scripts.pory"
# 1523 "data/maps/Route110/scripts.pory"
	walk_up
# 1524 "data/maps/Route110/scripts.pory"
# 909 "data/maps/Route110/scripts.pory"
# 1525 "data/maps/Route110/scripts.pory"
	walk_up
# 1526 "data/maps/Route110/scripts.pory"
# 910 "data/maps/Route110/scripts.pory"
# 1527 "data/maps/Route110/scripts.pory"
	walk_up
# 1528 "data/maps/Route110/scripts.pory"
# 911 "data/maps/Route110/scripts.pory"
# 1529 "data/maps/Route110/scripts.pory"
	step_end
# 1530 "data/maps/Route110/scripts.pory"

# 1531 "data/maps/Route110/scripts.pory"
# 914 "data/maps/Route110/scripts.pory"
# 1532 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 1533 "data/maps/Route110/scripts.pory"
# 915 "data/maps/Route110/scripts.pory"
# 1534 "data/maps/Route110/scripts.pory"
	walk_up
# 1535 "data/maps/Route110/scripts.pory"
# 916 "data/maps/Route110/scripts.pory"
# 1536 "data/maps/Route110/scripts.pory"
	walk_up
# 1537 "data/maps/Route110/scripts.pory"
# 917 "data/maps/Route110/scripts.pory"
# 1538 "data/maps/Route110/scripts.pory"
	walk_up
# 1539 "data/maps/Route110/scripts.pory"
# 918 "data/maps/Route110/scripts.pory"
# 1540 "data/maps/Route110/scripts.pory"
	walk_up
# 1541 "data/maps/Route110/scripts.pory"
# 919 "data/maps/Route110/scripts.pory"
# 1542 "data/maps/Route110/scripts.pory"
	walk_up
# 1543 "data/maps/Route110/scripts.pory"
# 920 "data/maps/Route110/scripts.pory"
# 1544 "data/maps/Route110/scripts.pory"
	step_end
# 1545 "data/maps/Route110/scripts.pory"

# 1546 "data/maps/Route110/scripts.pory"
# 923 "data/maps/Route110/scripts.pory"
# 1547 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 1548 "data/maps/Route110/scripts.pory"
# 924 "data/maps/Route110/scripts.pory"
# 1549 "data/maps/Route110/scripts.pory"
	walk_up
# 1550 "data/maps/Route110/scripts.pory"
# 925 "data/maps/Route110/scripts.pory"
# 1551 "data/maps/Route110/scripts.pory"
	walk_up
# 1552 "data/maps/Route110/scripts.pory"
# 926 "data/maps/Route110/scripts.pory"
# 1553 "data/maps/Route110/scripts.pory"
	walk_up
# 1554 "data/maps/Route110/scripts.pory"
# 927 "data/maps/Route110/scripts.pory"
# 1555 "data/maps/Route110/scripts.pory"
	walk_up
# 1556 "data/maps/Route110/scripts.pory"
# 928 "data/maps/Route110/scripts.pory"
# 1557 "data/maps/Route110/scripts.pory"
	walk_up
# 1558 "data/maps/Route110/scripts.pory"
# 929 "data/maps/Route110/scripts.pory"
# 1559 "data/maps/Route110/scripts.pory"
	step_end
# 1560 "data/maps/Route110/scripts.pory"

# 1561 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities::
# 1562 "data/maps/Route110/scripts.pory"
# 932 "data/maps/Route110/scripts.pory"
# 1563 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 1564 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 1565 "data/maps/Route110/scripts.pory"

# 1566 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus::
# 1567 "data/maps/Route110/scripts.pory"
# 937 "data/maps/Route110/scripts.pory"
# 1568 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 1569 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 1570 "data/maps/Route110/scripts.pory"

# 1571 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua::
# 1572 "data/maps/Route110/scripts.pory"
# 942 "data/maps/Route110/scripts.pory"
# 1573 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 1574 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 1575 "data/maps/Route110/scripts.pory"

# 1576 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles::
# 1577 "data/maps/Route110/scripts.pory"
# 947 "data/maps/Route110/scripts.pory"
# 1578 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 1579 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 1580 "data/maps/Route110/scripts.pory"

# 1581 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle::
# 1582 "data/maps/Route110/scripts.pory"
# 952 "data/maps/Route110/scripts.pory"
# 1583 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 1584 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 1585 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 1586 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 1587 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 1588 "data/maps/Route110/scripts.pory"

# 1589 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated::
# 1590 "data/maps/Route110/scripts.pory"
# 960 "data/maps/Route110/scripts.pory"
# 1591 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 1592 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 1593 "data/maps/Route110/scripts.pory"

# 1594 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis::
# 1595 "data/maps/Route110/scripts.pory"
# 965 "data/maps/Route110/scripts.pory"
# 1596 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 1597 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 1598 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 1599 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 1600 "data/maps/Route110/scripts.pory"

# 1601 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder::
# 1602 "data/maps/Route110/scripts.pory"
# 972 "data/maps/Route110/scripts.pory"
# 1603 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 1604 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 1605 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 1606 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 1607 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 1608 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 1609 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 1610 "data/maps/Route110/scripts.pory"

# 1611 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle::
# 1612 "data/maps/Route110/scripts.pory"
# 982 "data/maps/Route110/scripts.pory"
# 1613 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 1614 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 1615 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 1616 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 1617 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 1618 "data/maps/Route110/scripts.pory"

# 1619 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated::
# 1620 "data/maps/Route110/scripts.pory"
# 990 "data/maps/Route110/scripts.pory"
# 1621 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 1622 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 1623 "data/maps/Route110/scripts.pory"

# 1624 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis::
# 1625 "data/maps/Route110/scripts.pory"
# 995 "data/maps/Route110/scripts.pory"
# 1626 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 1627 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 1628 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 1629 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 1630 "data/maps/Route110/scripts.pory"

# 1631 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder::
# 1632 "data/maps/Route110/scripts.pory"
# 1002 "data/maps/Route110/scripts.pory"
# 1633 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 1634 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 1635 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 1636 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 1637 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 1638 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 1639 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 1640 "data/maps/Route110/scripts.pory"

# 1641 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed::
# 1642 "data/maps/Route110/scripts.pory"
# 1012 "data/maps/Route110/scripts.pory"
# 1643 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 1644 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 1645 "data/maps/Route110/scripts.pory"

# 1646 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe::
# 1647 "data/maps/Route110/scripts.pory"
# 1017 "data/maps/Route110/scripts.pory"
# 1648 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 1649 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 1650 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 1651 "data/maps/Route110/scripts.pory"

# 1652 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel::
# 1653 "data/maps/Route110/scripts.pory"
# 1023 "data/maps/Route110/scripts.pory"
# 1654 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 1655 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 1656 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 1657 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1658 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1659 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1660 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1661 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1662 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1663 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1664 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1665 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 1666 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 1667 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 1668 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 1669 "data/maps/Route110/scripts.pory"

# 1670 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads::
# 1671 "data/maps/Route110/scripts.pory"
# 1041 "data/maps/Route110/scripts.pory"
# 1672 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 1673 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 1674 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 1675 "data/maps/Route110/scripts.pory"

# 1676 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad::
# 1677 "data/maps/Route110/scripts.pory"
# 1047 "data/maps/Route110/scripts.pory"
# 1678 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 1679 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 1680 "data/maps/Route110/scripts.pory"

# 1681 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques::
# 1682 "data/maps/Route110/scripts.pory"
# 1052 "data/maps/Route110/scripts.pory"
# 1683 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 1684 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 1685 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 1686 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 1687 "data/maps/Route110/scripts.pory"

# 1688 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose::
# 1689 "data/maps/Route110/scripts.pory"
# 1059 "data/maps/Route110/scripts.pory"
# 1690 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 1691 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 1692 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 1693 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 1694 "data/maps/Route110/scripts.pory"

# 1695 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary::
# 1696 "data/maps/Route110/scripts.pory"
# 1066 "data/maps/Route110/scripts.pory"
# 1697 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 1698 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 1699 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 1700 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 1701 "data/maps/Route110/scripts.pory"

# 1702 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest::
# 1703 "data/maps/Route110/scripts.pory"
# 1073 "data/maps/Route110/scripts.pory"
# 1704 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 1705 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 1706 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 1707 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 1708 "data/maps/Route110/scripts.pory"

# 1709 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood::
# 1710 "data/maps/Route110/scripts.pory"
# 1080 "data/maps/Route110/scripts.pory"
# 1711 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 1712 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 1713 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 1714 "data/maps/Route110/scripts.pory"

# 1715 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk::
# 1716 "data/maps/Route110/scripts.pory"
# 1086 "data/maps/Route110/scripts.pory"
# 1717 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 1718 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 1719 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 1720 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 1721 "data/maps/Route110/scripts.pory"

# 1722 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad::
# 1723 "data/maps/Route110/scripts.pory"
# 1093 "data/maps/Route110/scripts.pory"
# 1724 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 1725 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 1726 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 1727 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 1728 "data/maps/Route110/scripts.pory"

# 1729 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst::
# 1730 "data/maps/Route110/scripts.pory"
# 1100 "data/maps/Route110/scripts.pory"
# 1731 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 1732 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 1733 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 1734 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 1735 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 1736 "data/maps/Route110/scripts.pory"

# 1737 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions::
# 1738 "data/maps/Route110/scripts.pory"
# 1108 "data/maps/Route110/scripts.pory"
# 1739 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 1740 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 1741 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 1742 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 1743 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 1744 "data/maps/Route110/scripts.pory"

# 1745 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher::
# 1746 "data/maps/Route110/scripts.pory"
# 1116 "data/maps/Route110/scripts.pory"
# 1747 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 1748 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 1749 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 1750 "data/maps/Route110/scripts.pory"

# 1751 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify::
# 1752 "data/maps/Route110/scripts.pory"
# 1122 "data/maps/Route110/scripts.pory"
# 1753 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 1754 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 1755 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 1756 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 1757 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 1758 "data/maps/Route110/scripts.pory"

# 1759 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign::
# 1760 "data/maps/Route110/scripts.pory"
# 1130 "data/maps/Route110/scripts.pory"
# 1761 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1762 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 1763 "data/maps/Route110/scripts.pory"

# 1764 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign::
# 1765 "data/maps/Route110/scripts.pory"
# 1135 "data/maps/Route110/scripts.pory"
# 1766 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 1767 "data/maps/Route110/scripts.pory"

# 1768 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere::
# 1769 "data/maps/Route110/scripts.pory"
# 1139 "data/maps/Route110/scripts.pory"
# 1770 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 1771 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 1772 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 1773 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 1774 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 1775 "data/maps/Route110/scripts.pory"

# 1776 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign::
# 1777 "data/maps/Route110/scripts.pory"
# 1147 "data/maps/Route110/scripts.pory"
# 1778 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1779 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 1780 "data/maps/Route110/scripts.pory"

# 1781 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign::
# 1782 "data/maps/Route110/scripts.pory"
# 1152 "data/maps/Route110/scripts.pory"
# 1783 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 1784 "data/maps/Route110/scripts.pory"

# 1785 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign::
# 1786 "data/maps/Route110/scripts.pory"
# 1156 "data/maps/Route110/scripts.pory"
# 1787 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1788 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 1789 "data/maps/Route110/scripts.pory"

# 1790 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep::
# 1791 "data/maps/Route110/scripts.pory"
# 1161 "data/maps/Route110/scripts.pory"
# 1792 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1793 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 1794 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 1795 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 1796 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 1797 "data/maps/Route110/scripts.pory"

# 1798 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems::
# 1799 "data/maps/Route110/scripts.pory"
# 1169 "data/maps/Route110/scripts.pory"
# 1800 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1801 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 1802 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 1803 "data/maps/Route110/scripts.pory"

# 1804 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign::
# 1805 "data/maps/Route110/scripts.pory"
# 1175 "data/maps/Route110/scripts.pory"
# 1806 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 1807 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 1808 "data/maps/Route110/scripts.pory"

# 1809 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord::
# 1810 "data/maps/Route110/scripts.pory"
# 1180 "data/maps/Route110/scripts.pory"
# 1811 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1812 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 1813 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 1814 "data/maps/Route110/scripts.pory"

# 1815 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord::
# 1816 "data/maps/Route110/scripts.pory"
# 1186 "data/maps/Route110/scripts.pory"
# 1817 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1818 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 1819 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 1820 "data/maps/Route110/scripts.pory"

# 1821 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere::
# 1822 "data/maps/Route110/scripts.pory"
# 1192 "data/maps/Route110/scripts.pory"
# 1823 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 1824 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 1825 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 1826 "data/maps/Route110/scripts.pory"

# 1827 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall::
# 1828 "data/maps/Route110/scripts.pory"
# 1198 "data/maps/Route110/scripts.pory"
# 1829 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 1830 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 1831 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 1832 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 1833 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 1834 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 1835 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 1836 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 1837 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 1838 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 1839 "data/maps/Route110/scripts.pory"

# 1840 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav::
# 1841 "data/maps/Route110/scripts.pory"
# 1211 "data/maps/Route110/scripts.pory"
# 1842 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1843 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 1844 "data/maps/Route110/scripts.pory"

# 1845 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival::
# 1846 "data/maps/Route110/scripts.pory"
# 1216 "data/maps/Route110/scripts.pory"
# 1847 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1848 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1849 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1850 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1851 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
