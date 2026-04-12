MtChimney_MapScripts::
# 2 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 3 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
	.byte 0


MtChimney_OnTransition::
# 7 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
	end


MtChimney_OnResume::
# 12 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
	end


MtChimney_EventScript_Archie::
# 17 "data/maps/MtChimney/scripts.pory"
	lock
# 18 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 19 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_Archie_2
MtChimney_EventScript_Archie_1:
# 22 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_Archie_5
MtChimney_EventScript_Archie_4:
# 25 "data/maps/MtChimney/scripts.pory"
	closemessage
# 26 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceOriginalDirection
# 27 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 28 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 29 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_Archie_2:
# 20 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieGoStopTeamMagma
	goto MtChimney_EventScript_Archie_1

MtChimney_EventScript_Archie_5:
# 23 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieBusyFighting
	goto MtChimney_EventScript_Archie_4


MtChimney_EventScript_ArchieGoStopTeamMagma::
# 34 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
	return


MtChimney_EventScript_ArchieBusyFighting::
# 39 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
	return


MtChimney_EventScript_Maxie::
# 44 "data/maps/MtChimney/scripts.pory"
	lockall
# 45 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 46 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 47 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 48 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 49 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 50 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 51 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 52 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
# 53 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 54 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 55 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 56 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 57 "data/maps/MtChimney/scripts.pory"
	closemessage
# 58 "data/maps/MtChimney/scripts.pory"
	delay 30
# 59 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 60 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 61 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 62 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 63 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 64 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 65 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 66 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
# 67 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 68 "data/maps/MtChimney/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq MtChimney_EventScript_Maxie_2
MtChimney_EventScript_Maxie_1:
# 71 "data/maps/MtChimney/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MtChimney_EventScript_Maxie_5
MtChimney_EventScript_Maxie_4:
# 74 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 75 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 76 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 77 "data/maps/MtChimney/scripts.pory"
	closemessage
# 78 "data/maps/MtChimney/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq MtChimney_EventScript_Maxie_8
MtChimney_EventScript_Maxie_7:
# 81 "data/maps/MtChimney/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MtChimney_EventScript_Maxie_11
MtChimney_EventScript_Maxie_10:
# 84 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 85 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 86 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 87 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 88 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 89 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 90 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_EventScript_Maxie_2:
# 69 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieApproachPlayerEast
	goto MtChimney_EventScript_Maxie_1

MtChimney_EventScript_Maxie_5:
# 72 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieApproachPlayerNorth
	goto MtChimney_EventScript_Maxie_4

MtChimney_EventScript_Maxie_8:
# 79 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieExitEast
	goto MtChimney_EventScript_Maxie_7

MtChimney_EventScript_Maxie_11:
# 82 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieExitNorth
	goto MtChimney_EventScript_Maxie_10


MtChimney_EventScript_ArchieApproachPlayerEast::
# 95 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 96 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
	return


MtChimney_EventScript_ArchieApproachPlayerNorth::
# 101 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 102 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
	return


MtChimney_EventScript_ArchieExitEast::
# 107 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitEast
# 108 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
	return


MtChimney_EventScript_ArchieExitNorth::
# 113 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 114 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
	return


MtChimney_EventScript_LavaCookieLady::
# 119 "data/maps/MtChimney/scripts.pory"
	lock
# 120 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 121 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 122 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 123 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MtChimney_EventScript_LavaCookieLady_2
MtChimney_EventScript_LavaCookieLady_1:
# 126 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 127 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MtChimney_EventScript_LavaCookieLady_5
MtChimney_EventScript_LavaCookieLady_4:
# 130 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 131 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 132 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtChimney_EventScript_LavaCookieLady_8
MtChimney_EventScript_LavaCookieLady_7:
# 135 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 136 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MtChimney_EventScript_LavaCookieLady_11
MtChimney_EventScript_LavaCookieLady_10:
# 139 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 140 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_LavaCookieLady_2:
# 124 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_DeclineLavaCookie
	goto MtChimney_EventScript_LavaCookieLady_1

MtChimney_EventScript_LavaCookieLady_5:
# 128 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_NotEnoughMoney
	goto MtChimney_EventScript_LavaCookieLady_4

MtChimney_EventScript_LavaCookieLady_8:
# 133 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_RemoveMoney
	goto MtChimney_EventScript_LavaCookieLady_7

MtChimney_EventScript_LavaCookieLady_11:
# 137 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_BagIsFull
	goto MtChimney_EventScript_LavaCookieLady_10


MtChimney_EventScript_BagIsFull::
# 145 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 146 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 147 "data/maps/MtChimney/scripts.pory"
	release
# 148 "data/maps/MtChimney/scripts.pory"
	end
# 149 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 150 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 151 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MtChimney_EventScript_BagIsFull_2
MtChimney_EventScript_BagIsFull_1:
# 154 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_BagIsFull_2:
# 152 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_BagIsFull
	goto MtChimney_EventScript_BagIsFull_1


MtChimney_EventScript_BagIsFull::
# 159 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 160 "data/maps/MtChimney/scripts.pory"
	release
	end


MtChimney_EventScript_RemoveMoney::
# 165 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 166 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
	return


MtChimney_EventScript_DeclineLavaCookie::
# 171 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 172 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 173 "data/maps/MtChimney/scripts.pory"
	release
	end


MtChimney_EventScript_NotEnoughMoney::
# 178 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 179 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 180 "data/maps/MtChimney/scripts.pory"
	release
	end


# 184 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 185 "data/maps/MtChimney/scripts.pory"
	walk_up
# 186 "data/maps/MtChimney/scripts.pory"
	walk_up
# 187 "data/maps/MtChimney/scripts.pory"
	walk_up
# 188 "data/maps/MtChimney/scripts.pory"
	walk_up
# 189 "data/maps/MtChimney/scripts.pory"
	walk_up
# 190 "data/maps/MtChimney/scripts.pory"
	walk_up
# 191 "data/maps/MtChimney/scripts.pory"
	walk_right
# 192 "data/maps/MtChimney/scripts.pory"
	step_end

# 195 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 196 "data/maps/MtChimney/scripts.pory"
	walk_left
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_down
# 201 "data/maps/MtChimney/scripts.pory"
	walk_down
# 202 "data/maps/MtChimney/scripts.pory"
	walk_down
# 203 "data/maps/MtChimney/scripts.pory"
	walk_down
# 204 "data/maps/MtChimney/scripts.pory"
	step_end

# 207 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 208 "data/maps/MtChimney/scripts.pory"
	walk_up
# 209 "data/maps/MtChimney/scripts.pory"
	walk_up
# 210 "data/maps/MtChimney/scripts.pory"
	walk_up
# 211 "data/maps/MtChimney/scripts.pory"
	walk_up
# 212 "data/maps/MtChimney/scripts.pory"
	walk_up
# 213 "data/maps/MtChimney/scripts.pory"
	walk_right
# 214 "data/maps/MtChimney/scripts.pory"
	walk_right
# 215 "data/maps/MtChimney/scripts.pory"
	step_end

# 218 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 219 "data/maps/MtChimney/scripts.pory"
	walk_left
# 220 "data/maps/MtChimney/scripts.pory"
	walk_left
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	walk_down
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 225 "data/maps/MtChimney/scripts.pory"
	walk_down
# 226 "data/maps/MtChimney/scripts.pory"
	walk_down
# 227 "data/maps/MtChimney/scripts.pory"
	walk_down
# 228 "data/maps/MtChimney/scripts.pory"
	step_end

# 231 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
# 233 "data/maps/MtChimney/scripts.pory"
	walk_down
# 234 "data/maps/MtChimney/scripts.pory"
	walk_down
# 235 "data/maps/MtChimney/scripts.pory"
	walk_down
# 236 "data/maps/MtChimney/scripts.pory"
	walk_down
# 237 "data/maps/MtChimney/scripts.pory"
	walk_left
# 238 "data/maps/MtChimney/scripts.pory"
	walk_left
# 239 "data/maps/MtChimney/scripts.pory"
	walk_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_down
# 242 "data/maps/MtChimney/scripts.pory"
	walk_down
# 243 "data/maps/MtChimney/scripts.pory"
	walk_left
# 244 "data/maps/MtChimney/scripts.pory"
	walk_left
# 245 "data/maps/MtChimney/scripts.pory"
	walk_left
# 246 "data/maps/MtChimney/scripts.pory"
	walk_left
# 247 "data/maps/MtChimney/scripts.pory"
	walk_left
# 248 "data/maps/MtChimney/scripts.pory"
	walk_down
# 249 "data/maps/MtChimney/scripts.pory"
	step_end

# 252 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 253 "data/maps/MtChimney/scripts.pory"
	walk_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_down
# 256 "data/maps/MtChimney/scripts.pory"
	walk_down
# 257 "data/maps/MtChimney/scripts.pory"
	walk_left
# 258 "data/maps/MtChimney/scripts.pory"
	walk_left
# 259 "data/maps/MtChimney/scripts.pory"
	walk_left
# 260 "data/maps/MtChimney/scripts.pory"
	walk_down
# 261 "data/maps/MtChimney/scripts.pory"
	step_end

# 264 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 265 "data/maps/MtChimney/scripts.pory"
	walk_right
# 266 "data/maps/MtChimney/scripts.pory"
	walk_down
# 267 "data/maps/MtChimney/scripts.pory"
	walk_down
# 268 "data/maps/MtChimney/scripts.pory"
	walk_down
# 269 "data/maps/MtChimney/scripts.pory"
	walk_down
# 270 "data/maps/MtChimney/scripts.pory"
	walk_left
# 271 "data/maps/MtChimney/scripts.pory"
	walk_left
# 272 "data/maps/MtChimney/scripts.pory"
	walk_left
# 273 "data/maps/MtChimney/scripts.pory"
	walk_left
# 274 "data/maps/MtChimney/scripts.pory"
	walk_left
# 275 "data/maps/MtChimney/scripts.pory"
	walk_down
# 276 "data/maps/MtChimney/scripts.pory"
	walk_down
# 277 "data/maps/MtChimney/scripts.pory"
	walk_down
# 278 "data/maps/MtChimney/scripts.pory"
	walk_down
# 279 "data/maps/MtChimney/scripts.pory"
	step_end

# 282 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 283 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 284 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 285 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 286 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 287 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 288 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 289 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 290 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 291 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 292 "data/maps/MtChimney/scripts.pory"
	walk_left
# 293 "data/maps/MtChimney/scripts.pory"
	walk_left
# 294 "data/maps/MtChimney/scripts.pory"
	walk_down
# 295 "data/maps/MtChimney/scripts.pory"
	walk_down
# 296 "data/maps/MtChimney/scripts.pory"
	walk_down
# 297 "data/maps/MtChimney/scripts.pory"
	walk_left
# 298 "data/maps/MtChimney/scripts.pory"
	walk_left
# 299 "data/maps/MtChimney/scripts.pory"
	walk_down
# 300 "data/maps/MtChimney/scripts.pory"
	walk_down
# 301 "data/maps/MtChimney/scripts.pory"
	walk_left
# 302 "data/maps/MtChimney/scripts.pory"
	walk_left
# 303 "data/maps/MtChimney/scripts.pory"
	walk_left
# 304 "data/maps/MtChimney/scripts.pory"
	walk_left
# 305 "data/maps/MtChimney/scripts.pory"
	walk_left
# 306 "data/maps/MtChimney/scripts.pory"
	walk_down
# 307 "data/maps/MtChimney/scripts.pory"
	step_end

# 310 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 311 "data/maps/MtChimney/scripts.pory"
	delay_16
# 312 "data/maps/MtChimney/scripts.pory"
	delay_16
# 313 "data/maps/MtChimney/scripts.pory"
	delay_16
# 314 "data/maps/MtChimney/scripts.pory"
	walk_down
# 315 "data/maps/MtChimney/scripts.pory"
	walk_down
# 316 "data/maps/MtChimney/scripts.pory"
	walk_down
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_left
# 319 "data/maps/MtChimney/scripts.pory"
	walk_left
# 320 "data/maps/MtChimney/scripts.pory"
	walk_down
# 321 "data/maps/MtChimney/scripts.pory"
	step_end

# 324 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 325 "data/maps/MtChimney/scripts.pory"
	delay_16
# 326 "data/maps/MtChimney/scripts.pory"
	walk_left
# 327 "data/maps/MtChimney/scripts.pory"
	walk_down
# 328 "data/maps/MtChimney/scripts.pory"
	walk_down
# 329 "data/maps/MtChimney/scripts.pory"
	walk_down
# 330 "data/maps/MtChimney/scripts.pory"
	walk_down
# 331 "data/maps/MtChimney/scripts.pory"
	walk_left
# 332 "data/maps/MtChimney/scripts.pory"
	walk_left
# 333 "data/maps/MtChimney/scripts.pory"
	walk_left
# 334 "data/maps/MtChimney/scripts.pory"
	walk_left
# 335 "data/maps/MtChimney/scripts.pory"
	walk_left
# 336 "data/maps/MtChimney/scripts.pory"
	walk_down
# 337 "data/maps/MtChimney/scripts.pory"
	walk_down
# 338 "data/maps/MtChimney/scripts.pory"
	walk_down
# 339 "data/maps/MtChimney/scripts.pory"
	walk_down
# 340 "data/maps/MtChimney/scripts.pory"
	step_end

# 343 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 344 "data/maps/MtChimney/scripts.pory"
	delay_16
# 345 "data/maps/MtChimney/scripts.pory"
	walk_left
# 346 "data/maps/MtChimney/scripts.pory"
	walk_left
# 347 "data/maps/MtChimney/scripts.pory"
	walk_down
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	walk_left
# 351 "data/maps/MtChimney/scripts.pory"
	walk_left
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	walk_down
# 354 "data/maps/MtChimney/scripts.pory"
	walk_left
# 355 "data/maps/MtChimney/scripts.pory"
	walk_left
# 356 "data/maps/MtChimney/scripts.pory"
	walk_left
# 357 "data/maps/MtChimney/scripts.pory"
	walk_left
# 358 "data/maps/MtChimney/scripts.pory"
	walk_left
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	step_end

# 363 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 364 "data/maps/MtChimney/scripts.pory"
	delay_16
# 365 "data/maps/MtChimney/scripts.pory"
	walk_down
# 366 "data/maps/MtChimney/scripts.pory"
	walk_left
# 367 "data/maps/MtChimney/scripts.pory"
	walk_left
# 368 "data/maps/MtChimney/scripts.pory"
	walk_left
# 369 "data/maps/MtChimney/scripts.pory"
	walk_left
# 370 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 371 "data/maps/MtChimney/scripts.pory"
	step_end

# 374 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 375 "data/maps/MtChimney/scripts.pory"
	walk_down
# 376 "data/maps/MtChimney/scripts.pory"
	walk_down
# 377 "data/maps/MtChimney/scripts.pory"
	walk_down
# 378 "data/maps/MtChimney/scripts.pory"
	walk_down
# 379 "data/maps/MtChimney/scripts.pory"
	walk_left
# 380 "data/maps/MtChimney/scripts.pory"
	walk_left
# 381 "data/maps/MtChimney/scripts.pory"
	walk_left
# 382 "data/maps/MtChimney/scripts.pory"
	walk_left
# 383 "data/maps/MtChimney/scripts.pory"
	walk_left
# 384 "data/maps/MtChimney/scripts.pory"
	walk_down
# 385 "data/maps/MtChimney/scripts.pory"
	walk_down
# 386 "data/maps/MtChimney/scripts.pory"
	walk_down
# 387 "data/maps/MtChimney/scripts.pory"
	walk_down
# 388 "data/maps/MtChimney/scripts.pory"
	step_end

# 391 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 392 "data/maps/MtChimney/scripts.pory"
	walk_down
# 393 "data/maps/MtChimney/scripts.pory"
	step_end

# 396 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 397 "data/maps/MtChimney/scripts.pory"
	walk_down
# 398 "data/maps/MtChimney/scripts.pory"
	walk_down
# 399 "data/maps/MtChimney/scripts.pory"
	walk_down
# 400 "data/maps/MtChimney/scripts.pory"
	walk_down
# 401 "data/maps/MtChimney/scripts.pory"
	walk_down
# 402 "data/maps/MtChimney/scripts.pory"
	walk_down
# 403 "data/maps/MtChimney/scripts.pory"
	walk_down
# 404 "data/maps/MtChimney/scripts.pory"
	step_end

# 407 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 408 "data/maps/MtChimney/scripts.pory"
	delay_16
# 409 "data/maps/MtChimney/scripts.pory"
	delay_16
# 410 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 411 "data/maps/MtChimney/scripts.pory"
	delay_16
# 412 "data/maps/MtChimney/scripts.pory"
	walk_down
# 413 "data/maps/MtChimney/scripts.pory"
	walk_down
# 414 "data/maps/MtChimney/scripts.pory"
	walk_down
# 415 "data/maps/MtChimney/scripts.pory"
	walk_down
# 416 "data/maps/MtChimney/scripts.pory"
	walk_down
# 417 "data/maps/MtChimney/scripts.pory"
	step_end

# 420 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 421 "data/maps/MtChimney/scripts.pory"
	delay_16
# 422 "data/maps/MtChimney/scripts.pory"
	delay_16
# 423 "data/maps/MtChimney/scripts.pory"
	delay_16
# 424 "data/maps/MtChimney/scripts.pory"
	delay_16
# 425 "data/maps/MtChimney/scripts.pory"
	delay_16
# 426 "data/maps/MtChimney/scripts.pory"
	delay_16
# 427 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 428 "data/maps/MtChimney/scripts.pory"
	delay_16
# 429 "data/maps/MtChimney/scripts.pory"
	walk_down
# 430 "data/maps/MtChimney/scripts.pory"
	walk_down
# 431 "data/maps/MtChimney/scripts.pory"
	step_end

MtChimney_Movement_Unused14::
# 435 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 436 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 437 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 438 "data/maps/MtChimney/scripts.pory"
	face_right
# 439 "data/maps/MtChimney/scripts.pory"
	step_end
	return


# 442 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 443 "data/maps/MtChimney/scripts.pory"
	walk_left
# 444 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 445 "data/maps/MtChimney/scripts.pory"
	delay_16
# 446 "data/maps/MtChimney/scripts.pory"
	step_end

MtChimney_EventScript_BusyAquaGrunt1::
# 450 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyAquaGrunt2::
# 455 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyAquaGrunt3::
# 460 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
	end


MtChimney_EventScript_Tabitha::
# 465 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 466 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Grunt2::
# 471 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 472 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_BusyMagmaGrunt1::
# 477 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt2::
# 482 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt3::
# 487 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt4::
# 492 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt5::
# 497 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt6::
# 502 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
	end


MtChimney_EventScript_MagmaPoochyena::
# 507 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
	end


MtChimney_EventScript_AquaPoochyena::
# 512 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
	end


MtChimney_EventScript_MeteoriteMachine::
# 517 "data/maps/MtChimney/scripts.pory"
	lockall
# 518 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MeteoriteMachine_2
MtChimney_EventScript_MeteoriteMachine_1:
# 521 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MeteoriteMachine_5
MtChimney_EventScript_MeteoriteMachine_4:
# 524 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 525 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MtChimney_EventScript_MeteoriteMachine_8
MtChimney_EventScript_MeteoriteMachine_7:
# 528 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 529 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 530 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MtChimney_EventScript_MeteoriteMachine_11
MtChimney_EventScript_MeteoriteMachine_10:
# 533 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 534 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_EventScript_MeteoriteMachine_2:
# 519 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MachineOn
	goto MtChimney_EventScript_MeteoriteMachine_1

MtChimney_EventScript_MeteoriteMachine_5:
# 522 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MachineOff
	goto MtChimney_EventScript_MeteoriteMachine_4

MtChimney_EventScript_MeteoriteMachine_8:
# 526 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_LeaveMeteoriteAlone
	goto MtChimney_EventScript_MeteoriteMachine_7

MtChimney_EventScript_MeteoriteMachine_11:
# 531 "data/maps/MtChimney/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MtChimney_EventScript_MeteoriteMachine_10


MtChimney_EventScript_LeaveMeteoriteAlone::
# 539 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 540 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


MtChimney_EventScript_MachineOff::
# 545 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 546 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


MtChimney_EventScript_MachineOn::
# 551 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 552 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


MtChimney_EventScript_RouteSign::
# 557 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
	end


MtChimney_EventScript_Shelby::
# 562 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 563 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 564 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtChimney_EventScript_Shelby_2
MtChimney_EventScript_Shelby_1:
# 567 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 568 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_Shelby_2:
# 565 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_RematchShelby
	goto MtChimney_EventScript_Shelby_1


MtChimney_EventScript_DefeatedShelby::
# 573 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 574 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 575 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 576 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 577 "data/maps/MtChimney/scripts.pory"
	release
	end


MtChimney_EventScript_RematchShelby::
# 582 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 583 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Melissa::
# 588 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 589 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Sheila::
# 594 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 595 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Shirley::
# 600 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 601 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Grunt1::
# 606 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 607 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Sawyer::
# 612 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 613 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 614 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtChimney_EventScript_Sawyer_2
MtChimney_EventScript_Sawyer_1:
# 617 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 618 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_Sawyer_2:
# 615 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_SawyerRematch
	goto MtChimney_EventScript_Sawyer_1


MtChimney_EventScript_SawyerDefeated::
# 623 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 624 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 625 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 626 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 627 "data/maps/MtChimney/scripts.pory"
	release
	end


MtChimney_EventScript_SawyerRematch::
# 632 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 633 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
	end


MtChimney_Text_MeteoriteWillActivateVolcano::
# 637 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
	.string "By amplifying its power with this\n"
	.string "machine, MT. CHIMNEY's volcanic\l"
	.string "activity will instantly intensify…\p"
	.string "Its energy will grow deep inside\n"
	.string "the crater and…\l"
	.string "Fufufu…$"

MtChimney_Text_MaxieIntro::
# 647 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
	.string "Who are you?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "I'd heard ARCHIE bemoaning a child\n"
	.string "who's been meddling in TEAM AQUA's\l"
	.string "affairs.\p"
	.string "It must be you he meant.\p"
	.string "Humph! So you're thinking of\n"
	.string "interfering with us, TEAM MAGMA?\p"
	.string "Now you listen.\n"
	.string "Long ago, living things used the\l"
	.string "land to live and grow.\p"
	.string "That is why land is all important!\n"
	.string "It is the cradle of all!\p"
	.string "That is why TEAM MAGMA is dedicated\n"
	.string "to the expansion of the land mass.\p"
	.string "It is for further advancement of\n"
	.string "humankind and POKéMON!\p"
	.string "And for that, we need the power of\n"
	.string "what sleeps within this mountain…\p"
	.string "Oh! There was no need for you to\n"
	.string "learn that much.\p"
	.string "But, no matter!\n"
	.string "I'll teach you the consequences of\l"
	.string "meddling in our grand design!$"

MtChimney_Text_MaxieDefeat::
# 676 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
	.string "I, MAXIE, was caught off guard?!$"

MtChimney_Text_MaxieYouHaventSeenLastOfMagma::
# 681 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
	.string "I will back off this time.\p"
	.string "But don't think that this is the last\n"
	.string "you've seen of TEAM MAGMA.\p"
	.string "Fufufu…\p"
	.string "Even without the METEORITE, if we\n"
	.string "obtain that ORB… Fufufu…$"

MtChimney_Text_TabithaIntro::
# 691 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
	.string "So you've come all the way here!\p"
	.string "But you're too late!\n"
	.string "I've already delivered the METEORITE\l"
	.string "from METEOR FALLS to the BOSS!$"

MtChimney_Text_TabithaDefeat::
# 699 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
	.string "Even though I've lost, if our leader\n"
	.string "awakens that thing…$"

MtChimney_Text_TabithaPostBattle::
# 705 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
	.string "Give it the METEORITE's energy!\p"
	.string "Hehehe…$"

MtChimney_Text_Grunt2Intro::
# 711 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
	.string "everyone's sake.\p"
	.string "Like, if that thing's power made more\n"
	.string "land, there'd be more places to live.\p"
	.string "Everyone'd be happy!$"

MtChimney_Text_Grunt2Defeat::
# 719 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
	.string "What do you mean I lost?$"

MtChimney_Text_Grunt2PostBattle::
# 724 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
	.string "happy.”\p"
	.string "But why does everyone keep getting\n"
	.string "in our way?$"

MtChimney_Text_Grunt1Intro::
# 731 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
	.string "to get a big house of my own!\p"
	.string "I'm going to build it on hardened lava!$"

MtChimney_Text_Grunt1Defeat::
# 737 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"

MtChimney_Text_Grunt1PostBattle::
# 741 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
	.string "splashing about in the waves!$"

MtChimney_Text_TeamAquaAlwaysMessingWithPlans::
# 746 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
	.string "They always mess with our plans!$"

MtChimney_Text_MeteoritesPackAmazingPower::
# 751 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"

MtChimney_Text_YouBetterNotMessWithUs::
# 755 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
	.string "We're trying to awaken that thing\n"
	.string "for the benefit of everyone!$"

MtChimney_Text_AquasNameSimilar::
# 761 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
	.string "They're TEAM AQUA!\p"
	.string "It totally annoys me that they'd\n"
	.string "use a name like ours!$"

MtChimney_Text_DouseThemInFire::
# 768 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
	.string "Douse them in fire!$"

MtChimney_Text_KeepMakingMoreLand::
# 773 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"

MtChimney_Text_Bufoh::
# 777 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"

MtChimney_Text_ArchieGoStopTeamMagma::
# 781 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
	.string "I should've guessed you'd show up!\p"
	.string "See for yourself what the fanatics\n"
	.string "of TEAM MAGMA are up to!\p"
	.string "They're trying to inject the stolen\n"
	.string "METEORITE's power into the volcano!\p"
	.string "Doing something like that will cause\n"
	.string "the volcano's eruption!$"

MtChimney_Text_ArchieIHaveMyHandsFull::
# 792 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
	.string "I want to stop that MAXIE,\n"
	.string "but I can't!\p"
	.string "Not when I have my hands full battling\n"
	.string "three opponents at once!$"

MtChimney_Text_ArchieThankYou::
# 800 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
	.string "Thank you!\p"
	.string "With your help, we thwarted TEAM\n"
	.string "MAGMA's destructive plan!\p"
	.string "But… You…\n"
	.string "Whose side are you on?\p"
	.string "Ah, it doesn't matter.\p"
	.string "We will remain vigilant and keep up\n"
	.string "our pursuit of TEAM MAGMA.\p"
	.string "{PLAYER}, we shall meet again!$"

MtChimney_Text_MagmaOutnumbersUs::
# 813 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
	.string "We can't keep up with them!$"

MtChimney_Text_LessHabitatForWaterPokemon::
# 818 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
	.string "less habitats for WATER POKéMON!$"

MtChimney_Text_MagmasNameSimilar::
# 823 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
	.string "They're TEAM MAGMA!\p"
	.string "It burns me up that they'd use such\n"
	.string "a confusing name!$"

MtChimney_Text_Bushaa::
# 830 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"

MtChimney_Text_LavaCookiesJust200::
# 834 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
	.string "specialty.\p"
	.string "Try one. It's just ¥200.$"

MtChimney_Text_ThankYouDear::
# 840 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"

MtChimney_Text_YouveNotGotTheMoney::
# 844 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
	.string "you've not got the money.$"

MtChimney_Text_OhFineThen::
# 849 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"

MtChimney_Text_MetoriteFittedOnMachine::
# 853 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
	.string "machine…\p"
	.string "The machine seems to be storing\n"
	.string "energy in the METEORITE.$"

MtChimney_Text_RemoveTheMeteorite::
# 860 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
	.string "machine…\p"
	.string "Do you want to remove the METEORITE?$"

MtChimney_Text_PlayerRemovedMeteorite::
# 866 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
	.string "the mysterious machine.$"

MtChimney_Text_PlayerLeftMeteorite::
# 871 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
	.string "it was.$"

MtChimney_Text_MachineMakesNoResponse::
# 876 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
	.string "It makes no response whatsoever.$"

MtChimney_Text_RouteSign::
# 881 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
	.string "LAVARIDGE TOWN AHEAD$"

MtChimney_Text_ShelbyIntro::
# 886 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
	.string "refreshed my tired bones.\l"
	.string "Right now I'm feeling strong!$"

MtChimney_Text_ShelbyDefeat::
# 892 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
	.string "Now, aren't you something!$"

MtChimney_Text_ShelbyPostBattle::
# 897 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
	.string "myself an EXPERT now, can I?$"

MtChimney_Text_ShelbyRegister::
# 902 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
	.string "I were battling my own grandchild.\p"
	.string "Please, come see me again for\n"
	.string "a rematch.$"

MtChimney_Text_ShelbyRematchIntro::
# 909 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
	.string "of your POKéMON, why, you should be\l"
	.string "able to achieve great things.$"

MtChimney_Text_ShelbyRematchDefeat::
# 915 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
	.string "Now, aren't you something!$"

MtChimney_Text_ShelbyPostRematch::
# 920 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
	.string "with the hearts of your POKéMON.$"

MtChimney_Text_MelissaIntro::
# 925 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
	.string "I can't stand it! I have to battle!$"

MtChimney_Text_MelissaDefeat::
# 930 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"

MtChimney_Text_MelissaPostBattle::
# 934 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
	.string "me up, baby!$"

MtChimney_Text_SheilaIntro::
# 939 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
	.string "I want to make my POKéMON battle!$"

MtChimney_Text_SheilaDefeat::
# 944 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
	.string "It's like a MT. CHIMNEY eruption!$"

MtChimney_Text_SheilaPostBattle::
# 949 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
	.string "MT. CHIMNEY. It would be a shame if\l"
	.string "I only do a little sightseeing…\p"
	.string "I want to get in some battles and buy\n"
	.string "COOKIES as souvenirs.$"

MtChimney_Text_ShirleyIntro::
# 957 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"

MtChimney_Text_ShirleyDefeat::
# 963 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
	.string "I'm getting a chill out of the water.$"

MtChimney_Text_ShirleyPostBattle::
# 968 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
	.string "hot springs. Want to join me?\p"
	.string "Just joking!$"

MtChimney_Text_SawyerIntro::
# 974 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
	.string "hot people around for company!$"

MtChimney_Text_SawyerDefeat::
# 979 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"

MtChimney_Text_SawyerPostBattle::
# 983 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
	.string "HOT SPRING with the locals!$"

MtChimney_Text_SawyerRegister::
# 988 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
	.string "Let me register you in my POKéNAV.$"

MtChimney_Text_SawyerRematchIntro::
# 993 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
	.string "around these parts. I won't lose!$"

MtChimney_Text_SawyerRematchDefeat::
# 998 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
	.string "firebrand as before!$"

MtChimney_Text_SawyerPostRematch::
# 1003 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
	.string "I'm overdressed for these parts.$"
