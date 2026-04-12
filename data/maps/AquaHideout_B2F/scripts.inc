AquaHideout_B2F_MapScripts::
# 2 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
	.byte 0


AquaHideout_B2F_OnTransition::
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_OnTransition_1
	return

AquaHideout_B2F_OnTransition_1:
# 8 "data/maps/AquaHideout_B2F/scripts.pory"
	goto AquaHideout_B2F_OnTransition_2
	return


AquaHideout_B2F_OnTransition_1::
	end


AquaHideout_B2F_OnTransition_2::
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	call AquaHideout_B2F_EventScript_PreventMattNoticing
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	goto AquaHideout_B2F_OnTransition_1
	return


AquaHideout_B2F_EventScript_PreventMattNoticing::
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


AquaHideout_B2F_EventScript_MattNoticePlayer::
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 34 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
	end


AquaHideout_B2F_EventScript_Matt::
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	release
	end


AquaHideout_B2F_EventScript_SubmarineEscape::
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_AQUA_HIDEOUT_SUBMARINE
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 80 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 84 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 98 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
	release
	end


AquaHideout_B2F_Movement_SumbarineDepartLeft::
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
	return


AquaHideout_B2F_Movement_SumbarineDepartRight::
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 127 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
	return


AquaHideout_B2F_EventScript_Grunt4::
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_B2F_EventScript_Grunt4Defeated::
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
	release
	end


AquaHideout_B2F_EventScript_Grunt6::
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 152 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_B2F_EventScript_Grunt8::
# 158 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_B2F_Text_MattIntro::
# 164 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\p"
	.string "Got here already, did you?\n"
	.string "We underestimated you!\p"
	.string "But this is it!\p"
	.string "I'm a cut above the GRUNTS you've seen\n"
	.string "so far.\p"
	.string "I'm not stalling for time.\n"
	.string "I'm going to pulverize you!$"

AquaHideout_B2F_Text_MattDefeat::
# 175 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
	.string "So, I lost, too…$"

AquaHideout_B2F_Text_OurBossGotThroughHisPreparations::
# 180 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
	.string "While I was toying with you, our BOSS\n"
	.string "got through his preparations!$"

AquaHideout_B2F_Text_MattPostBattle::
# 186 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
	.string "Our BOSS has already gone on his way to\n"
	.string "some cave under the sea!\p"
	.string "If you're going to give chase, you'd\n"
	.string "better search the big, wide sea beyond\l"
	.string "LILYCOVE.\p"
	.string "But will you find it then?\n"
	.string "Hehehe!$"

AquaHideout_B2F_Text_Grunt4Intro::
# 197 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
	.string "You owe me a battle, too!$"

AquaHideout_B2F_Text_Grunt4Defeat::
# 202 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
	.string "Lost and dazed…$"

AquaHideout_B2F_Text_Grunt4PostBattle::
# 207 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "BOSS…\n"
	.string "Is this good enough?$"

AquaHideout_B2F_Text_Grunt6Intro::
# 212 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the HIDEOUT's pride\n"
	.string "and joy!\p"
	.string "You're clueless about where you are,\n"
	.string "aren't you?\p"
	.string "Fluster and tire out the enemy, then\n"
	.string "lower the boom! That's our plan!$"

AquaHideout_B2F_Text_Grunt6Defeat::
# 221 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
	.string "You're not tired at all!$"

AquaHideout_B2F_Text_Grunt6PostBattle::
# 226 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
	.string "where I put the MASTER BALL.\p"
	.string "If I fail to guard it, our BOSS will\n"
	.string "chew me out…$"

AquaHideout_B2F_Text_Grunt8Intro::
# 233 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined TEAM AQUA, the first\n"
	.string "thing I had to learn was how these\l"
	.string "warp panels connected.$"

AquaHideout_B2F_Text_Grunt8Defeat::
# 239 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
	.string "the warp panels…$"

AquaHideout_B2F_Text_Grunt8PostBattle::
# 244 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
	.string "battle more effectively…$"
