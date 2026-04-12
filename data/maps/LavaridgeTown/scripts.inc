LavaridgeTown_MapScripts::
# 2 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 3 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
	.2byte 0


LavaridgeTown_OnTransition::
# 9 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 10 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_OnTransition_2
LavaridgeTown_OnTransition_1:
# 13 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_OnTransition_5
LavaridgeTown_OnTransition_4:
# 16 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 17 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 18 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_LAVARIDGE_TOWN_STATE, 1
	goto_if_eq LavaridgeTown_OnTransition_8
LavaridgeTown_OnTransition_7:
# 21 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_LAVARIDGE_TOWN_STATE, 1
	goto_if_eq LavaridgeTown_OnTransition_11
LavaridgeTown_OnTransition_10:
	end

LavaridgeTown_OnTransition_2:
# 11 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
	goto LavaridgeTown_OnTransition_1

LavaridgeTown_OnTransition_5:
# 14 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_ShowMtChimneyTrainers
	goto LavaridgeTown_OnTransition_4

LavaridgeTown_OnTransition_8:
# 19 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_CheckSetRivalPos
	goto LavaridgeTown_OnTransition_7

LavaridgeTown_OnTransition_11:
# 22 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_HideMapNamePopup
	goto LavaridgeTown_OnTransition_10


LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 28 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
	return


LavaridgeTown_EventScript_CheckSetRivalPos::
# 33 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 34 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8004, 9
	goto_if_eq LavaridgeTown_EventScript_CheckSetRivalPos_2
LavaridgeTown_EventScript_CheckSetRivalPos_1:
	return

LavaridgeTown_EventScript_CheckSetRivalPos_2:
# 35 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_SetRivalPos
	goto LavaridgeTown_EventScript_CheckSetRivalPos_1


LavaridgeTown_EventScript_SetRivalPos::
# 41 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL, 11, 9
# 42 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL_ON_BIKE, 9, 8
# 43 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_LAVARIDGE_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 44 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
	return


LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 49 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
	return


LavaridgeTown_EventScript_HideMapNamePopup::
# 54 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 59 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 60 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 61 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_2
LavaridgeTown_EventScript_RivalGiveGoGoggles_1:
# 64 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_ne LavaridgeTown_EventScript_RivalGiveGoGoggles_5
LavaridgeTown_EventScript_RivalGiveGoGoggles_4:
# 67 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 68 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 69 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_8
LavaridgeTown_EventScript_RivalGiveGoGoggles_7:
# 72 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_11
LavaridgeTown_EventScript_RivalGiveGoGoggles_10:
# 75 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_14
LavaridgeTown_EventScript_RivalGiveGoGoggles_13:
# 78 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_ne LavaridgeTown_EventScript_RivalGiveGoGoggles_17
LavaridgeTown_EventScript_RivalGiveGoGoggles_16:
# 81 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 82 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_20
LavaridgeTown_EventScript_RivalGiveGoGoggles_19:
# 85 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_23
LavaridgeTown_EventScript_RivalGiveGoGoggles_22:
	end

LavaridgeTown_EventScript_RivalGiveGoGoggles_2:
# 62 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalNoticePlayer
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_1

LavaridgeTown_EventScript_RivalGiveGoGoggles_5:
# 65 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalExitHerbShop
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_4

LavaridgeTown_EventScript_RivalGiveGoGoggles_8:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_PlayMayMusic
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_7

LavaridgeTown_EventScript_RivalGiveGoGoggles_11:
# 73 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_PlayBrendanMusic
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_10

LavaridgeTown_EventScript_RivalGiveGoGoggles_14:
# 76 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalApproachPlayer1
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_13

LavaridgeTown_EventScript_RivalGiveGoGoggles_17:
# 79 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalApproachPlayer2
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_16

LavaridgeTown_EventScript_RivalGiveGoGoggles_20:
# 83 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_MayGiveGoGoggles
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_19

LavaridgeTown_EventScript_RivalGiveGoGoggles_23:
# 86 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_BrendanGiveGoGoggles
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_22


LavaridgeTown_EventScript_MayGiveGoGoggles::
# 92 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 93 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 94 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 95 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 96 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
	end


LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 101 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 102 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 103 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 104 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 105 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
	end


LavaridgeTown_EventScript_RivalExit::
# 110 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 111 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_LAVARIDGE_RIVAL
# 112 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
# 113 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 114 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_eq LavaridgeTown_EventScript_RivalExit_2
LavaridgeTown_EventScript_RivalExit_1:
# 117 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_ne LavaridgeTown_EventScript_RivalExit_5
LavaridgeTown_EventScript_RivalExit_4:
# 120 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
# 121 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 122 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 123 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 124 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 125 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
	end

LavaridgeTown_EventScript_RivalExit_2:
# 115 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalExit1
	goto LavaridgeTown_EventScript_RivalExit_1

LavaridgeTown_EventScript_RivalExit_5:
# 118 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalExit2
	goto LavaridgeTown_EventScript_RivalExit_4


LavaridgeTown_EventScript_PlayMayMusic::
# 130 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return


LavaridgeTown_EventScript_PlayBrendanMusic::
# 135 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return


LavaridgeTown_EventScript_RivalNoticePlayer::
# 140 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 141 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 143 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
# 144 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
# 146 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
	return


LavaridgeTown_EventScript_RivalExitHerbShop::
# 151 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 152 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 153 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_LAVARIDGE_RIVAL
# 154 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 155 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 156 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 157 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 158 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 159 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 161 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
# 162 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
# 164 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 165 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 166 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
	return


LavaridgeTown_EventScript_RivalApproachPlayer1::
# 171 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 172 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
	return


LavaridgeTown_EventScript_RivalApproachPlayer2::
# 177 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 178 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
	return


LavaridgeTown_EventScript_RivalExit1::
# 183 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 184 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 185 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
	return


LavaridgeTown_EventScript_RivalExit2::
# 190 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 191 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
	return


# 195 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 196 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 197 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 198 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 199 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 200 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 201 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 202 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 203 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 204 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 205 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 206 "data/maps/LavaridgeTown/scripts.pory"
	step_end

# 209 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 210 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 211 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 212 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 213 "data/maps/LavaridgeTown/scripts.pory"
	step_end

# 216 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 217 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 218 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 219 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 220 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 223 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 224 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 225 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/LavaridgeTown/scripts.pory"
	step_end

# 229 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 230 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 231 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 232 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 233 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 234 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 235 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 236 "data/maps/LavaridgeTown/scripts.pory"
	step_end

# 239 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 240 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 241 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 242 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 243 "data/maps/LavaridgeTown/scripts.pory"
	step_end

# 246 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 247 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 248 "data/maps/LavaridgeTown/scripts.pory"
	step_end

LavaridgeTown_EventScript_HotSpringsTrigger::
# 252 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 253 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq LavaridgeTown_EventScript_HotSpringsTrigger_2
LavaridgeTown_EventScript_HotSpringsTrigger_1:
	end

LavaridgeTown_EventScript_HotSpringsTrigger_2:
# 254 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_EnteredHotSprings
	goto LavaridgeTown_EventScript_HotSpringsTrigger_1


LavaridgeTown_EventScript_EnteredHotSprings::
# 260 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
	end


LavaridgeTown_EventScript_ExpertM::
# 265 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
	end


LavaridgeTown_EventScript_OldMan::
# 270 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
	end


LavaridgeTown_EventScript_Twin::
# 275 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
	end


LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 280 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
	end


LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 285 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
	end


LavaridgeTown_EventScript_ExpertF::
# 290 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
	end


LavaridgeTown_EventScript_EggWoman::
# 295 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 296 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 297 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_EggWoman_2
LavaridgeTown_EventScript_EggWoman_1:
# 300 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 301 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_EventScript_EggWoman_5
LavaridgeTown_EventScript_EggWoman_4:
# 304 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 305 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LavaridgeTown_EventScript_EggWoman_8
LavaridgeTown_EventScript_EggWoman_7:
# 308 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 309 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 310 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 311 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 312 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 313 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 314 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_2:
# 298 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_ReceivedEgg
	goto LavaridgeTown_EventScript_EggWoman_1

LavaridgeTown_EventScript_EggWoman_5:
# 302 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_DeclineEgg
	goto LavaridgeTown_EventScript_EggWoman_4

LavaridgeTown_EventScript_EggWoman_8:
# 306 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_NoRoomForEgg
	goto LavaridgeTown_EventScript_EggWoman_7


LavaridgeTown_EventScript_ReceivedEgg::
# 319 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 320 "data/maps/LavaridgeTown/scripts.pory"
	release
	end


LavaridgeTown_EventScript_NoRoomForEgg::
# 325 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 326 "data/maps/LavaridgeTown/scripts.pory"
	release
	end


LavaridgeTown_EventScript_DeclineEgg::
# 331 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 332 "data/maps/LavaridgeTown/scripts.pory"
	release
	end


LavaridgeTown_EventScript_TownSign::
# 337 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
	end


LavaridgeTown_EventScript_GymSign::
# 342 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
	end


LavaridgeTown_EventScript_HerbShopSign::
# 347 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
	end


LavaridgeTown_Text_MayNiceBadgesTakeThis::
# 351 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
	.string "Oh? While I visited the hot springs,\n"
	.string "you got the LAVARIDGE GYM BADGE.\p"
	.string "You must have collected\n"
	.string "good POKéMON…\l"
	.string "No, I believe you raised some.\p"
	.string "I guess it would be okay for you to\n"
	.string "have this.$"

LavaridgeTown_Text_MayExplainGoGogglesChallengeDad::
# 362 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those GO-GOGGLES, you'll\n"
	.string "have no trouble getting through the\l"
	.string "desert near ROUTE 111.\p"
	.string "But, wow, {PLAYER}{KUN}…\n"
	.string "Challenging GYMS…\p"
	.string "You're trying hard because you don't\n"
	.string "want to lose to me, I bet!\p"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
	.string "your dad in PETALBURG GYM.\p"
	.string "See you again!$"

LavaridgeTown_Text_BrendanNiceBadgesTakeThis::
# 375 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
	.string "How's it going?\p"
	.string "Hmm…\n"
	.string "That's a decent collection of BADGES.\p"
	.string "All right, then.\n"
	.string "You may as well have this.$"

LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad::
# 384 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: Keep those with you if you're\n"
	.string "planning on going into that desert near\l"
	.string "ROUTE 111.\p"
	.string "There should be some POKéMON that\n"
	.string "are exclusively desert-dwellers.\l"
	.string "You might look around for those.\p"
	.string "As for me…\n"
	.string "I'm considering challenging NORMAN,\l"
	.string "the GYM LEADER of PETALBURG.\p"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
	.string "he really is tough.\p"
	.string "See you around!$"

LavaridgeTown_Text_HaveEggWillYouTakeIt::
# 399 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
	.string "I'd hoped to hatch it by covering it in\n"
	.string "hot sand by the hot springs.\l"
	.string "But that doesn't seem to be enough…\p"
	.string "I've heard it would be best if it were\n"
	.string "kept together with POKéMON and\l"
	.string "carried about.\p"
	.string "You are a TRAINER, yes?\n"
	.string "And your POKéMON radiate vitality.\p"
	.string "So, what say you?\n"
	.string "Will you take this EGG to hatch?$"

LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg::
# 413 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
	.string "this here EGG!$"

LavaridgeTown_Text_ReceivedTheEgg::
# 418 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"

LavaridgeTown_Text_NoRoomForThisEgg::
# 422 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
	.string "There's no room for this EGG…$"

LavaridgeTown_Text_AsYouWishThen::
# 427 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
	.string "If you have a change of heart about\n"
	.string "hatching this EGG, I will be here.$"

LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare::
# 433 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an EGG will be found at\n"
	.string "the POKéMON DAY CARE.\p"
	.string "Or at least that's how the rumor goes.$"

LavaridgeTown_Text_HotSpringsNeverRunDry::
# 439 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
	.string "and yet the hot springs never run dry.\p"
	.string "Isn't it magical?\p"
	.string "These hot springs appear near active\n"
	.string "volcanoes. Veins of water under the\l"
	.string "ground are heated by magma to well up\l"
	.string "as hot springs.$"

LavaridgeTown_Text_PokemonNippedBackside::
# 449 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
	.string "Sigh…\p"
	.string "So warm and heavenly…\p"
	.string "Eh? Gyaah! Ouch!\p"
	.string "A POKéMON nipped my backside!$"

LavaridgeTown_Text_OhYouLikeHotSprings::
# 457 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
	.string "That's surprising for one as young\n"
	.string "as you.$"

LavaridgeTown_Text_BatheInHotSpringsEveryDay::
# 463 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
	.string "I want to become a beautiful and strong\n"
	.string "GYM LEADER like FLANNERY.$"

LavaridgeTown_Text_IfPokemonInHotSprings::
# 469 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put POKéMON in hot springs,\n"
	.string "it might be seriously strange.\p"
	.string "Why, it might be an electric bath, or\n"
	.string "a bubble bath, or even a lava bath…$"

LavaridgeTown_Text_HotSpringsClaims::
# 476 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
	.string "are good for calming nervous tension,\l"
	.string "relieving aching muscles, solving\l"
	.string "romantic problems, and attracting\l"
	.string "money…$"

LavaridgeTown_Text_TownSign::
# 484 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
	.string "“POKéMON CENTER HOT SPRINGS\n"
	.string "An excellent place for relaxing!”$"

LavaridgeTown_Text_GymSign::
# 490 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
	.string "LEADER: FLANNERY\l"
	.string "“One with a fiery passion that burns!”$"

LavaridgeTown_Text_HerbShopSign::
# 496 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
	.string "“Bitter taste--better cure!”$"
