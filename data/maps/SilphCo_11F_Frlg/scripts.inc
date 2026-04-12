SilphCo_11F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
	.byte 0


SilphCo_11F_OnLoad::
# 6 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_11F_DOOR, SilphCo_11F_OnLoad_2
SilphCo_11F_OnLoad_1:
	end

SilphCo_11F_OnLoad_2:
# 7 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call EventScript_Close11FDoor
	goto SilphCo_11F_OnLoad_1


SilphCo_11F_EventScript_President::
# 13 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lock
# 14 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	faceplayer
# 15 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_MASTER_BALL_FROM_SILPH, SilphCo_11F_EventScript_President_2
SilphCo_11F_EventScript_President_1:
# 18 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	checkplayergender
# 19 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SilphCo_11F_EventScript_President_5
SilphCo_11F_EventScript_President_4:
# 22 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SilphCo_11F_EventScript_President_8
SilphCo_11F_EventScript_President_7:
# 25 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	checkitemspace ITEM_MASTER_BALL
# 26 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SilphCo_11F_EventScript_President_11
SilphCo_11F_EventScript_President_10:
# 29 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	giveitem_msg SilphCo_11F_Text_ObtainedMasterBallFromPresident, ITEM_MASTER_BALL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 30 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 31 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setflag FLAG_GOT_MASTER_BALL_FROM_SILPH
# 32 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	release
	end

SilphCo_11F_EventScript_President_2:
# 16 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_AlreadyGotMasterBall
	goto SilphCo_11F_EventScript_President_1

SilphCo_11F_EventScript_President_5:
# 20 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call SilphCo_11F_EventScript_PresidentThanksMale
	goto SilphCo_11F_EventScript_President_4

SilphCo_11F_EventScript_President_8:
# 23 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call SilphCo_11F_EventScript_PresidentThanksFemale
	goto SilphCo_11F_EventScript_President_7

SilphCo_11F_EventScript_President_11:
# 27 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_NoRoomForMasterBall
	goto SilphCo_11F_EventScript_President_10


SilphCo_11F_EventScript_PresidentThanksMale::
# 37 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearBoy
	return


SilphCo_11F_EventScript_PresidentThanksFemale::
# 42 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearGirl
	return


SilphCo_11F_EventScript_NoRoomForMasterBall::
# 47 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_YouHaveNoRoomForThis
# 48 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	release
	end


SilphCo_11F_EventScript_AlreadyGotMasterBall::
# 53 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 54 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	release
	end


SilphCo_11F_EventScript_Secretary::
# 59 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForRescuingUs, MSGBOX_NPC
	end


SilphCo_11F_EventScript_GiovanniTriggerLeft::
# 64 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lockall
# 65 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 66 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
	end


SilphCo_11F_EventScript_GiovanniTriggerRight::
# 71 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lockall
# 72 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 73 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
	end


SilphCo_11F_EventScript_BattleGiovanni::
# 78 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 79 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, Common_Movement_WalkInPlaceFasterDown
# 80 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	waitmovement 0
# 81 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay 25
# 82 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniIntro
# 83 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	closemessage
# 84 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SilphCo_11F_EventScript_BattleGiovanni_2
SilphCo_11F_EventScript_BattleGiovanni_1:
# 87 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SilphCo_11F_EventScript_BattleGiovanni_5
SilphCo_11F_EventScript_BattleGiovanni_4:
# 90 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SILPH_CO_GIOVANNI
# 91 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI_2, SilphCo_11F_Text_GiovanniDefeat
# 92 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniPostBattle
# 93 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	closemessage
# 94 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_GIOVANNI
# 96 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT1
# 97 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT2
# 98 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 99 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_11F, 1
# 100 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setflag FLAG_HIDE_SAFFRON_ROCKETS
# 101 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CIVILIANS
# 102 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	releaseall
	end

SilphCo_11F_EventScript_BattleGiovanni_2:
# 85 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call SilphCo_11F_EventScript_GiovanniApproachLeft
	goto SilphCo_11F_EventScript_BattleGiovanni_1

SilphCo_11F_EventScript_BattleGiovanni_5:
# 88 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call SilphCo_11F_EventScript_GiovanniApproachRight
	goto SilphCo_11F_EventScript_BattleGiovanni_4


SilphCo_11F_EventScript_GiovanniApproachLeft::
# 107 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachLeft
# 108 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SilphCo_11F_Movement_PlayerFaceGiovanni
# 109 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	waitmovement 0
	return


SilphCo_11F_EventScript_GiovanniApproachRight::
# 114 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachRight
# 115 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	waitmovement 0
	return


# 119 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachLeft:
# 120 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 121 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 122 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 123 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 124 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_in_place_faster_left
# 125 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	step_end

# 128 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachRight:
# 129 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 130 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	step_end

# 135 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Movement_PlayerFaceGiovanni:
# 136 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 137 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 138 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 139 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_8
# 140 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_4
# 141 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 142 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	step_end

SilphCo_11F_EventScript_Monitor::
# 146 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_MonitorHasMonsOnIt, MSGBOX_SIGN
	end


SilphCo_11F_EventScript_FloorSign::
# 151 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_11F_EventScript_Grunt1::
# 156 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_40, SilphCo_11F_Text_Grunt1Intro, SilphCo_11F_Text_Grunt1Defeat
# 157 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_11F_EventScript_Grunt2::
# 162 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_41, SilphCo_11F_Text_Grunt2Intro, SilphCo_11F_Text_Grunt2Defeat
# 163 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_11F_Text_ThanksForSavingMeDearBoy::
# 167 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: Oh, dear boy!\n"
	.string "Thank you for saving SILPH.\p"
	.string "I will never forget you saved us in\n"
	.string "our moment of peril.\p"
	.string "I have to thank you in some way.\p"
	.string "Because I am rich, I can give you\n"
	.string "anything.\p"
	.string "Here, maybe this will do.$"

SilphCo_11F_Text_ThanksForSavingMeDearGirl::
# 178 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: Oh, dear girl!\n"
	.string "Thank you for saving SILPH.\p"
	.string "I will never forget you saved us in\n"
	.string "our moment of peril.\p"
	.string "I have to thank you in some way.\p"
	.string "Because I am rich, I can give you\n"
	.string "anything.\p"
	.string "Here, maybe this will do.$"

SilphCo_11F_Text_ObtainedMasterBallFromPresident::
# 189 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "{PLAYER} obtained a MASTER BALL\n"
	.string "from the PRESIDENT!$"

SilphCo_11F_Text_ThatsOurSecretPrototype::
# 194 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: You can't buy that\n"
	.string "anywhere.\p"
	.string "It's our secret prototype MASTER\n"
	.string "BALL.\p"
	.string "It will catch any POKéMON without\n"
	.string "fail!\p"
	.string "You should be quiet about using it,\n"
	.string "though.$"

SilphCo_11F_Text_YouHaveNoRoomForThis::
# 205 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "You have no room for this.$"

SilphCo_11F_Text_ThanksForRescuingUs::
# 209 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "SECRETARY: Thank you for rescuing\n"
	.string "all of us.\p"
	.string "We, from the PRESIDENT down,\n"
	.string "are indebted to you.$"

SilphCo_11F_Text_GiovanniIntro::
# 216 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Ah, {PLAYER}!\n"
	.string "So we meet again!\p"
	.string "The PRESIDENT and I are discussing\n"
	.string "a vital business proposition.\p"
	.string "Keep your nose out of grown-up\n"
	.string "matters…\p"
	.string "Or, experience a world of pain!$"

SilphCo_11F_Text_GiovanniDefeat::
# 226 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Arrgh!!\n"
	.string "I lost again!?$"

SilphCo_11F_Text_GiovanniPostBattle::
# 231 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Blast it all!\n"
	.string "You ruined our plans for SILPH!\p"
	.string "But, TEAM ROCKET will never fall!\p"
	.string "{PLAYER}! Never forget that all\n"
	.string "POKéMON exist for TEAM ROCKET!\p"
	.string "I must go, but I shall return!$"

SilphCo_11F_Text_Grunt2Intro::
# 240 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Stop right there!\n"
	.string "Don't you move!$"

SilphCo_11F_Text_Grunt2Defeat::
# 245 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Don't…\n"
	.string "Please!$"

SilphCo_11F_Text_Grunt2PostBattle::
# 250 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "So, you want to see my BOSS?$"

SilphCo_11F_Text_Grunt1Intro::
# 254 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Halt! Do you have an appointment\n"
	.string "with my BOSS?$"

SilphCo_11F_Text_Grunt1Defeat::
# 259 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Gaah!\n"
	.string "Demolished!$"

SilphCo_11F_Text_Grunt1PostBattle::
# 264 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Watch your step…\n"
	.string "My BOSS likes his POKéMON tough!$"

SilphCo_11F_Text_MonitorHasMonsOnIt::
# 269 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "The monitor has POKéMON on it!$"

SilphCo_11F_Text_FloorSign::
# 273 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "11F$"
