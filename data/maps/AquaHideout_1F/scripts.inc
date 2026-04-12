AquaHideout_1F_MapScripts::
	.byte 0


AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
# 4 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 5 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 6 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_HideoutEntranceGrunt1_2
AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1:
# 9 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_HideoutEntranceGrunt1_5
AquaHideout_1F_EventScript_HideoutEntranceGrunt1_4:
# 12 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
# 13 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end

AquaHideout_1F_EventScript_HideoutEntranceGrunt1_2:
# 7 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_SlateportHint1
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1

AquaHideout_1F_EventScript_HideoutEntranceGrunt1_5:
# 10 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_MagmaHideoutHint1
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt1_4


AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 18 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 19 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_EventScript_SlateportHint1::
# 24 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 25 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 31 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 32 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_HideoutEntranceGrunt2_2
AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1:
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_HideoutEntranceGrunt2_5
AquaHideout_1F_EventScript_HideoutEntranceGrunt2_4:
# 38 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 39 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end

AquaHideout_1F_EventScript_HideoutEntranceGrunt2_2:
# 33 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_SlateportHint2
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1

AquaHideout_1F_EventScript_HideoutEntranceGrunt2_5:
# 36 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_MagmaHideoutHint2
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt2_4


AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 44 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_EventScript_SlateportHint2::
# 50 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 51 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_EventScript_Grunt1::
# 56 "data/maps/AquaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_1F_EventScript_Grunt1Defeated::
# 62 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 63 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_Text_OurBossIsSnatchingSomething::
# 67 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here! He's gone off to\n"
	.string "snatch something important!\p"
	.string "… …\n"
	.string "Where did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_WhereMightMagmaHideoutBe::
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
	.string "Are you a TEAM MAGMA grunt?\p"
	.string "I hear that TEAM MAGMA is trying to\n"
	.string "awaken an awesome POKéMON at their\l"
	.string "HIDEOUT.\p"
	.string "But where might their HIDEOUT be?$"

AquaHideout_1F_Text_BossWentToJackASubmarine::
# 87 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here!\n"
	.string "He's gone off to jack a submarine!\p"
	.string "… …\n"
	.string "Where did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_BossIsOnRoute122::
# 98 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here! He's on his way to\n"
	.string "MT. PYRE on ROUTE 122!\p"
	.string "… …\n"
	.string "Why did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_TeamMagmaAtMtChimney::
# 109 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
	.string "Are you a TEAM MAGMA grunt?\p"
	.string "I hear that TEAM MAGMA is after\n"
	.string "an awesome POKéMON at MT. CHIMNEY.\p"
	.string "But what is that POKéMON like?$"

AquaHideout_1F_Text_BossIsInSlateportCity::
# 117 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here!\n"
	.string "He's on his way to SLATEPORT CITY!\p"
	.string "… …\n"
	.string "Why did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_Grunt1Intro::
# 128 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ayiyiyi!\n"
	.string "Suspicious character spotted!$"

AquaHideout_1F_Text_Grunt1Defeat::
# 133 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Grrrrr…\n"
	.string "I lost it!$"

AquaHideout_1F_Text_Grunt1PostBattle::
# 138 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I took the loss for the TEAM,\n"
	.string "but I did my job…$"
