ViridianCity_Frlg_MapScripts::
# 2 "data/maps/ViridianCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
	.byte 0


ViridianCity_OnTransition::
# 6 "data/maps/ViridianCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 7 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0
	goto_if_eq ViridianCity_OnTransition_2
ViridianCity_OnTransition_1:
# 10 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
	goto_if_eq ViridianCity_OnTransition_5
ViridianCity_OnTransition_4:
# 13 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
	goto_if_ge ViridianCity_OnTransition_8
ViridianCity_OnTransition_7:
# 16 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0
	goto_if_eq ViridianCity_OnTransition_11
ViridianCity_OnTransition_10:
	end

ViridianCity_OnTransition_2:
# 8 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_SetOldManBlockingRoad
	goto ViridianCity_OnTransition_1

ViridianCity_OnTransition_5:
# 11 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_SetOldManStandingByRoad
	goto ViridianCity_OnTransition_4

ViridianCity_OnTransition_8:
# 14 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_SetOldManNormal
	goto ViridianCity_OnTransition_7

ViridianCity_OnTransition_11:
# 17 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_TryUnlockGym
	goto ViridianCity_OnTransition_10


ViridianCity_EventScript_SetOldManNormal::
# 23 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
	return


ViridianCity_EventScript_SetOldManStandingByRoad::
# 28 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 29 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 8
# 30 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_LOOK_AROUND
	return


ViridianCity_EventScript_SetOldManBlockingRoad::
# 35 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_LYING_DOWN
# 36 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 11
# 37 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_FACE_DOWN
	return


ViridianCity_EventScript_TryUnlockGym::
# 42 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ViridianCity_EventScript_TryUnlockGym_2
ViridianCity_EventScript_TryUnlockGym_1:
# 45 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, ViridianCity_EventScript_TryUnlockGym_5
ViridianCity_EventScript_TryUnlockGym_4:
# 48 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, ViridianCity_EventScript_TryUnlockGym_8
ViridianCity_EventScript_TryUnlockGym_7:
# 51 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, ViridianCity_EventScript_TryUnlockGym_11
ViridianCity_EventScript_TryUnlockGym_10:
# 54 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, ViridianCity_EventScript_TryUnlockGym_14
ViridianCity_EventScript_TryUnlockGym_13:
# 57 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, ViridianCity_EventScript_TryUnlockGym_17
ViridianCity_EventScript_TryUnlockGym_16:
# 60 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
	return

ViridianCity_EventScript_TryUnlockGym_2:
# 43 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto ViridianCity_EventScript_TryUnlockGym_1

ViridianCity_EventScript_TryUnlockGym_5:
# 46 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto ViridianCity_EventScript_TryUnlockGym_4

ViridianCity_EventScript_TryUnlockGym_8:
# 49 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto ViridianCity_EventScript_TryUnlockGym_7

ViridianCity_EventScript_TryUnlockGym_11:
# 52 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto ViridianCity_EventScript_TryUnlockGym_10

ViridianCity_EventScript_TryUnlockGym_14:
# 55 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto ViridianCity_EventScript_TryUnlockGym_13

ViridianCity_EventScript_TryUnlockGym_17:
# 58 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto ViridianCity_EventScript_TryUnlockGym_16


ViridianCity_EventScript_GymDoorLocked::
# 65 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 66 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 67 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 68 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 69 "data/maps/ViridianCity_Frlg/scripts.pory"
	delay 20
# 70 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked
# 71 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 72 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_JumpDownLedge
# 73 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 74 "data/maps/ViridianCity_Frlg/scripts.pory"
	releaseall
	end


ViridianCity_Movement_JumpDownLedge::
# 79 "data/maps/ViridianCity_Frlg/scripts.pory"
	jump_2_down
# 80 "data/maps/ViridianCity_Frlg/scripts.pory"
	step_end
	return


ViridianCity_EventScript_CitySign::
# 84 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
	end


ViridianCity_EventScript_TrainerTips1::
# 89 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
	end


ViridianCity_EventScript_TrainerTips2::
# 94 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
	end


ViridianCity_EventScript_GymSign::
# 99 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
	end


ViridianCity_EventScript_GymDoor::
# 104 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
	end


ViridianCity_EventScript_Boy::
# 109 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
	end


ViridianCity_EventScript_OldMan::
# 114 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 115 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 116 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
	goto_if_eq ViridianCity_EventScript_OldMan_2
ViridianCity_EventScript_OldMan_1:
# 119 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 120 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 121 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_OLD_MAN, Common_Movement_FaceOriginalDirection
# 122 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 123 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end

ViridianCity_EventScript_OldMan_2:
# 117 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_OldManGymLeaderReturned
	goto ViridianCity_EventScript_OldMan_1


ViridianCity_EventScript_OldManGymLeaderReturned::
# 128 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
# 129 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialOldMan::
# 134 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 135 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 136 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ViridianCity_EventScript_TutorialOldMan_2
ViridianCity_EventScript_TutorialOldMan_1:
# 139 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
	goto_if_ge ViridianCity_EventScript_TutorialOldMan_5
ViridianCity_EventScript_TutorialOldMan_4:
# 142 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
	goto_if_eq ViridianCity_EventScript_TutorialOldMan_8
ViridianCity_EventScript_TutorialOldMan_7:
# 145 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0
	goto_if_eq ViridianCity_EventScript_TutorialOldMan_11
ViridianCity_EventScript_TutorialOldMan_10:
	end

ViridianCity_EventScript_TutorialOldMan_2:
# 137 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_AskIfTeachyTVHelpful
	goto ViridianCity_EventScript_TutorialOldMan_1

ViridianCity_EventScript_TutorialOldMan_5:
# 140 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TutorialCompleted
	goto ViridianCity_EventScript_TutorialOldMan_4

ViridianCity_EventScript_TutorialOldMan_8:
# 143 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TutorialStart
	goto ViridianCity_EventScript_TutorialOldMan_7

ViridianCity_EventScript_TutorialOldMan_11:
# 146 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TutorialNotReady
	goto ViridianCity_EventScript_TutorialOldMan_10


ViridianCity_EventScript_AskIfTeachyTVHelpful::
# 152 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
# 153 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ViridianCity_EventScript_AskIfTeachyTVHelpful_2
ViridianCity_EventScript_AskIfTeachyTVHelpful_1:
# 156 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
# 157 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end

ViridianCity_EventScript_AskIfTeachyTVHelpful_2:
# 154 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TeachyTVNotHelpful
	goto ViridianCity_EventScript_AskIfTeachyTVHelpful_1


ViridianCity_EventScript_TeachyTVNotHelpful::
# 162 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_TooBusyForTeachyTV
# 163 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialCompleted::
# 168 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
# 169 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialStart::
# 174 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 175 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_WatchToLearnBasics::
# 180 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 181 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialUnused::
# 186 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 187 "data/maps/ViridianCity_Frlg/scripts.pory"
	special StartOldManTutorialBattle
# 188 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitstate
# 189 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialNotReady::
# 194 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 195 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 196 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_Youngster::
# 201 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 202 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 203 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 204 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ViridianCity_EventScript_Youngster_2
ViridianCity_EventScript_Youngster_1:
# 207 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ViridianCity_EventScript_Youngster_5
ViridianCity_EventScript_Youngster_4:
	end

ViridianCity_EventScript_Youngster_2:
# 205 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_YoungsterExplainCaterpillars
	goto ViridianCity_EventScript_Youngster_1

ViridianCity_EventScript_Youngster_5:
# 208 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_YoungsterDeclineExplanation
	goto ViridianCity_EventScript_Youngster_4


ViridianCity_EventScript_YoungsterExplainCaterpillars::
# 214 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
# 215 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_YoungsterDeclineExplanation::
# 220 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
# 221 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_Woman::
# 226 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 227 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 228 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0
	goto_if_eq ViridianCity_EventScript_Woman_2
ViridianCity_EventScript_Woman_1:
# 231 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
# 232 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end

ViridianCity_EventScript_Woman_2:
# 229 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_WomanRoadBlocked
	goto ViridianCity_EventScript_Woman_1


ViridianCity_EventScript_WomanRoadBlocked::
# 237 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
# 238 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 239 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_WOMAN, Common_Movement_FaceOriginalDirection
# 240 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 241 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_DreamEaterTutor::
# 246 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto EventScript_DreamEaterTutor
	end


ViridianCity_EventScript_RoadBlocked::
# 251 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 252 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 253 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 254 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 255 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_WalkDown
# 256 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 257 "data/maps/ViridianCity_Frlg/scripts.pory"
	releaseall
	end


# 261 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Movement_WalkDown:
# 262 "data/maps/ViridianCity_Frlg/scripts.pory"
	walk_down
# 263 "data/maps/ViridianCity_Frlg/scripts.pory"
	step_end

ViridianCity_EventScript_TutorialTriggerLeft::
# 267 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 268 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 269 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterLeft
# 270 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 271 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 272 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 273 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 274 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialTriggerRight::
# 279 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 280 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 281 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 282 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 283 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 284 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 285 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 286 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_EventScript_DoTutorialBattle::
# 291 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
# 292 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 293 "data/maps/ViridianCity_Frlg/scripts.pory"
	special StartOldManTutorialBattle
# 294 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitstate
# 295 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 296 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 297 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 298 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 299 "data/maps/ViridianCity_Frlg/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 300 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
	return


ViridianCity_Text_CanCarryMonsAnywhere::
# 304 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Those POKé BALLS at your waist!\n"
	.string "You have POKéMON, don't you?\p"
	.string "It's great that you can carry and\n"
	.string "use POKéMON anytime, anywhere.$"

ViridianCity_Text_GymClosedWonderWhoLeaderIs::
# 311 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "This POKéMON GYM is always closed.\p"
	.string "I wonder who the LEADER is?$"

ViridianCity_Text_ViridiansGymLeaderReturned::
# 316 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN GYM's LEADER returned!$"

ViridianCity_Text_WantToKnowAboutCaterpillarMons::
# 320 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "You want to know about the two\n"
	.string "kinds of caterpillar POKéMON?$"

ViridianCity_Text_OhOkayThen::
# 325 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Oh, okay then!$"

ViridianCity_Text_ExplainCaterpieWeedle::
# 329 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "CATERPIE has no poison,\n"
	.string "but WEEDLE does.\p"
	.string "Watch that your POKéMON aren't\n"
	.string "stabbed by WEEDLE's POISON STING.$"

ViridianCity_Text_GrandpaHasntHadCoffeeYet::
# 336 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Oh, Grandpa!\n"
	.string "Don't be so mean!\p"
	.string "I'm so sorry.\n"
	.string "He hasn't had his coffee yet.$"

ViridianCity_Text_GoShoppingInPewterOccasionally::
# 343 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I go shopping in PEWTER CITY\n"
	.string "occasionally.\p"
	.string "I have to take the winding trail in\n"
	.string "VIRIDIAN FOREST when I go.$"

ViridianCity_Text_ThisIsPrivateProperty::
# 350 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I absolutely forbid you from\n"
	.string "going through here!\p"
	.string "This is private property!$"

ViridianCity_Text_ShowYouHowToCatchMons::
# 356 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
	.string "that's what I need to get going!\p"
	.string "Hm?\n"
	.string "What is that red box you have?\p"
	.string "Ah, so you're working on your\n"
	.string "POKéDEX.\p"
	.string "Then let me give you a word of\n"
	.string "advice.\p"
	.string "Whenever you catch a POKéMON,\n"
	.string "the POKéDEX automatically updates\l"
	.string "its data.\p"
	.string "…You don't know how to catch\n"
	.string "a POKéMON?\p"
	.string "I suppose I had better show you\n"
	.string "then!$"

ViridianCity_Text_ThatWasEducationalTakeThis::
# 374 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "There! Now tell me, that was\n"
	.string "educational, was it not?\p"
	.string "And here, take this, too.$"

ViridianCity_Text_WatchThatToLearnBasics::
# 380 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "If there's something you don't\n"
	.string "understand, watch that.\p"
	.string "It will teach you about the basics\n"
	.string "of being a POKéMON TRAINER.$"

ViridianCity_Text_WeakenMonsFirstToCatch::
# 387 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
	.string "that's what I need to get going!\p"
	.string "But I made it too strong.\n"
	.string "It gave me a headache…\p"
	.string "Incidentally, are you filling your\n"
	.string "POKéDEX?\p"
	.string "At first, focus on weakening the\n"
	.string "POKéMON before trying to catch it.$"

ViridianCity_Text_HowsTeachyTVHelping::
# 398 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
	.string "that's what I need to get going!\p"
	.string "But I made it too strong.\n"
	.string "It gave me a headache…\p"
	.string "Incidentally, is my old TEACHY TV\n"
	.string "helping you?$"

ViridianCity_Text_MyGrandsonOnTheShow::
# 407 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Wahaha!\n"
	.string "It's my grandson on the show!\p"
	.string "Since he's the one doing the\n"
	.string "teaching, you're bound to learn.$"

ViridianCity_Text_TooBusyForTeachyTV::
# 414 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Hm… You're too busy to not even\n"
	.string "have the time for TEACHY TV…\p"
	.string "Time is money, and neither should\n"
	.string "be ill spent…$"

ViridianCity_Text_CitySign::
# 421 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN CITY \n"
	.string "The Eternally Green Paradise$"

ViridianCity_Text_CatchMonsForEasierBattles::
# 426 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Catch POKéMON and expand your\n"
	.string "collection.\p"
	.string "The more you have, the easier it\n"
	.string "is to battle.$"

ViridianCity_Text_MovesLimitedByPP::
# 434 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "The battle moves of POKéMON are\n"
	.string "limited by their POWER POINTS, PP.\p"
	.string "To replenish PP, rest your tired\n"
	.string "POKéMON at a POKéMON CENTER.$"

ViridianCity_Text_GymSign::
# 442 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN CITY POKéMON GYM$"

ViridianCity_Text_GymDoorsAreLocked::
# 446 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN GYM's doors are locked…$"
