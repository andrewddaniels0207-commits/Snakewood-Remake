FiveIsland_RocketWarehouse_Frlg_MapScripts::
# 2 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_RocketWarehouse_OnLoad
# 3 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_RocketWarehouse_OnTransition
	.byte 0


FiveIsland_RocketWarehouse_OnTransition::
# 7 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
	end


FiveIsland_RocketWarehouse_OnLoad::
# 12 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
	end


FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry::
# 17 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setmetatile 26, 20, METATILE_SilphCo_Arrow_Up, 0
# 18 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setmetatile 27, 20, METATILE_SilphCo_Arrow_Up, 0
	return


FiveIsland_RocketWarehouse_EventScript_Cage::
# 23 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	lockall
# 24 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FiveIsland_RocketWarehouse_EventScript_Cage_2
FiveIsland_RocketWarehouse_EventScript_Cage_1:
# 27 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen
# 28 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	releaseall
	end

FiveIsland_RocketWarehouse_EventScript_Cage_2:
# 25 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_CageUnlocked
	goto FiveIsland_RocketWarehouse_EventScript_Cage_1


FiveIsland_RocketWarehouse_EventScript_CageUnlocked::
# 33 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled
# 34 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	releaseall
	end


FiveIsland_RocketWarehouse_EventScript_Computer::
# 39 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText, MSGBOX_SIGN
	end


FiveIsland_RocketWarehouse_EventScript_Admin2Trigger::
# 44 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	lockall
# 45 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN2, Common_Movement_WalkInPlaceFasterLeft
# 46 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 47 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 48 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	releaseall
	end


FiveIsland_RocketWarehouse_EventScript_Gideon::
# 53 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_GIDEON, FiveIsland_RocketWarehouse_Text_GideonIntro, FiveIsland_RocketWarehouse_Text_GideonDefeat, FiveIsland_RocketWarehouse_EventScript_DefeatedGideon
# 54 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, FiveIsland_RocketWarehouse_EventScript_Gideon_2
FiveIsland_RocketWarehouse_EventScript_Gideon_1:
# 57 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_Gideon_2:
# 55 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid
	goto FiveIsland_RocketWarehouse_EventScript_Gideon_1


FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid::
# 62 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 5
# 63 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_DefeatedGideon::
# 68 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GideonPostBattle
# 69 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_RECOVERED_SAPPHIRE
# 70 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 71 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	release
	end


FiveIsland_RocketWarehouse_EventScript_Grunt2::
# 76 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_47, FiveIsland_RocketWarehouse_Text_Grunt2Intro, FiveIsland_RocketWarehouse_Text_Grunt2Defeat
# 77 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_Grunt3::
# 82 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_48, FiveIsland_RocketWarehouse_Text_Grunt3Intro, FiveIsland_RocketWarehouse_Text_Grunt3Defeat
# 83 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_Admin2::
# 88 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN_2, FiveIsland_RocketWarehouse_Text_Admin2Intro, FiveIsland_RocketWarehouse_Text_Admin2Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2
# 89 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2::
# 94 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
# 95 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 24
	goto_if_le FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_2
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_1:
# 98 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle
# 99 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	closemessage
# 100 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 101 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT2
# 102 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT3
# 103 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN2
# 104 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN1
# 105 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_HIDE_FIVE_ISLAND_ROCKETS
# 106 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 107 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 108 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE
# 109 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	release
	end

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_2:
# 96 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_1


FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2::
# 114 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 115 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
	return


FiveIsland_RocketWarehouse_EventScript_Grunt1::
# 120 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_42, FiveIsland_RocketWarehouse_Text_Grunt1Intro, FiveIsland_RocketWarehouse_Text_Grunt1Defeat
# 121 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_Admin1::
# 126 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_Text_Admin1Intro, FiveIsland_RocketWarehouse_Text_Admin1Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1
# 127 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1::
# 132 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
# 133 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 134 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_2
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_1:
# 137 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin1PostBattle
# 138 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	closemessage
# 139 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 24
	goto_if_le FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_5
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_4:
# 142 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 25
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_8
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_7:
# 145 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 26
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_11
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_10:
# 148 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 27
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_14
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_13:
# 151 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	playse SE_PIN
# 152 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
# 153 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	special DrawWholeMapView
# 154 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitse
# 155 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 24
	goto_if_le FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_17
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_16:
# 158 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 25
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_20
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_19:
# 161 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 26
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_23
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_22:
# 164 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 27
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_26
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_25:
# 167 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough
# 168 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	release
	end

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_2:
# 135 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_1

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_5:
# 140 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_4

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_8:
# 143 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_7

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_11:
# 146 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_10

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_14:
# 149 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_13

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_17:
# 156 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_16

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_20:
# 159 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_19

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_23:
# 162 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_22

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_26:
# 165 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_25


FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1::
# 173 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 27
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1_2
FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1_1:
# 176 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 177 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1_2:
# 174 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1_1


FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar::
# 182 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar
# 183 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
	return


FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch::
# 188 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch
# 189 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
	return


FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch::
# 194 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterUp
# 195 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
	return


FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft::
# 200 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterLeft
# 201 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
	return


FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown::
# 206 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterDown
# 207 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
	return


# 211 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar:
# 212 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 213 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 214 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_in_place_faster_up
# 215 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	step_end

# 218 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch:
# 219 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 220 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_in_place_faster_up
# 221 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	step_end

FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen::
# 224 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "There are many POKéMON locked\n"
	.string "away in the pen…$"

FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled::
# 229 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "The pen door is unlocked.\n"
	.string "The POKéMON appear to have fled.$"

FiveIsland_RocketWarehouse_Text_Grunt2Intro::
# 234 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Did you come here knowing it's\n"
	.string "TEAM ROCKET's WAREHOUSE?$"

FiveIsland_RocketWarehouse_Text_Grunt2Defeat::
# 239 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What do you think you're doing?!$"

FiveIsland_RocketWarehouse_Text_Grunt2PostBattle::
# 243 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "TEAM ROCKET broke up?\n"
	.string "What planet are you from?$"

FiveIsland_RocketWarehouse_Text_Grunt1Intro::
# 248 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Oh, now your POKéMON look strong.\n"
	.string "You're willing to sell them?\p"
	.string "Oh?\n"
	.string "You wanted to battle?$"

FiveIsland_RocketWarehouse_Text_Grunt1Defeat::
# 255 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Oh, but…\n"
	.string "Too much!$"

FiveIsland_RocketWarehouse_Text_Grunt1PostBattle::
# 260 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "We can give you a great price.\n"
	.string "Sell us your POKéMON!$"

FiveIsland_RocketWarehouse_Text_Grunt3Intro::
# 265 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I got word about you from the\n"
	.string "others.\p"
	.string "But there's no way a kid like you'd\n"
	.string "know our BOSS GIOVANNI!$"

FiveIsland_RocketWarehouse_Text_Grunt3Defeat::
# 272 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Don't…you…dare…laugh…$"

FiveIsland_RocketWarehouse_Text_Grunt3PostBattle::
# 276 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Don't mess in the doings of adults,\n"
	.string "you jumped-up pip-squeak!$"

FiveIsland_RocketWarehouse_Text_Admin1Intro::
# 281 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I don't know or care if what I'm\n"
	.string "doing is right or wrong…\p"
	.string "I just put my faith in GIOVANNI\n"
	.string "and do as I am told.$"

FiveIsland_RocketWarehouse_Text_Admin1Defeat::
# 288 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I…\n"
	.string "I'm shattered…$"

FiveIsland_RocketWarehouse_Text_Admin1PostBattle::
# 293 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You're doing things according to\n"
	.string "your beliefs and morals.\p"
	.string "I understand now…$"

FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough::
# 299 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I've made it so you can come back\n"
	.string "in through there.\p"
	.string "Why don't you go get rested and\n"
	.string "refreshed for what lies ahead?\p"
	.string "The ADMIN after me outranks me\n"
	.string "thoroughly as a TRAINER.\p"
	.string "You'd better steel yourself for one\n"
	.string "harsh challenge.$"

FiveIsland_RocketWarehouse_Text_Admin2Intro::
# 310 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "That's quite enough of you \n"
	.string "playing the hero, kid.\p"
	.string "Spreading lies about how TEAM\n"
	.string "ROCKET has disbanded…\p"
	.string "It's such an obvious attempt to\n"
	.string "cause confusion in our ranks.\p"
	.string "Fortunately, we're not so ignorant\n"
	.string "to fall for the lies of a child!\p"
	.string "And now, I'll show you how scary\n"
	.string "an angry adult can be!$"

FiveIsland_RocketWarehouse_Text_Admin2Defeat::
# 323 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Urgh…\n"
	.string "You were too strong…\p"
	.string "…\n"
	.string "Th-that's GIOVANNI's BADGE!\p"
	.string "So it's true?\n"
	.string "TEAM ROCKET really has disbanded?$"

FiveIsland_RocketWarehouse_Text_Admin2PostBattle::
# 332 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "We will abandon this WAREHOUSE…\p"
	.string "But don't think this is over.\n"
	.string "I won't let this be the end.\p"
	.string "I will find GIOVANNI.\n"
	.string "And I will resurrect TEAM ROCKET!\l"
	.string "I will…\p"
	.string "Until then, farewell!$"

FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText::
# 342 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "A report with graphs and text is on\n"
	.string "the PC monitor.\p"
	.string "“The Influence of Magnetic Waves\n"
	.string "on POKéMON Evolution”…\p"
	.string "… … … … … …\p"
	.string "It's too difficult to understand…$"

FiveIsland_RocketWarehouse_Text_GideonIntro::
# 351 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I almost managed to sell the\n"
	.string "SAPPHIRE for huge money…\p"
	.string "Then, you just had to come along\n"
	.string "and blow the whole deal apart!\p"
	.string "Fufu… Fufufufu…\n"
	.string "There's no forgiveness for you!$"

FiveIsland_RocketWarehouse_Text_GideonDefeat::
# 360 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Gah! Darn!\n"
	.string "Darn! Darn!$"

FiveIsland_RocketWarehouse_Text_GideonPostBattle::
# 365 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "If I can't sell it, it's worthless!\n"
	.string "Go ahead, take it!$"

FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe::
# 370 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What do you want now?\n"
	.string "Go on, get lost, leave me be.$"

FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair::
# 375 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What, you again?\p"
	.string "You… You're not GIOVANNI's kid,\n"
	.string "are you?\p"
	.string "No, that can't be right!\n"
	.string "GIOVANNI's kid has red hair.\p"
	.string "You don't have any reasons for\n"
	.string "bugging me. Leave me alone!$"
