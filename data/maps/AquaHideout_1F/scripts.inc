AquaHideout_1F_MapScripts::
	.byte 0


AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
# 5 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 7 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 9 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1
	return

AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1:
# 10 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt1_2
	return


AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1::
# 16 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1_1
	return

AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1_1:
# 17 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt1_5
	return


AquaHideout_1F_EventScript_HideoutEntranceGrunt1_4::
# 23 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
# 25 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_EventScript_HideoutEntranceGrunt1_2::
# 31 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_SlateportHint1
# 32 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1
	return


AquaHideout_1F_EventScript_HideoutEntranceGrunt1_5::
# 37 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_MagmaHideoutHint1
# 38 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt1_4
	return


AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 43 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_EventScript_SlateportHint1::
# 51 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 59 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 63 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1
	return

AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1:
# 64 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt2_2
	return


AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1::
# 70 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1_1
	return

AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1_1:
# 71 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt2_5
	return


AquaHideout_1F_EventScript_HideoutEntranceGrunt2_4::
# 77 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 79 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_EventScript_HideoutEntranceGrunt2_2::
# 85 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_SlateportHint2
# 86 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1
	return


AquaHideout_1F_EventScript_HideoutEntranceGrunt2_5::
# 91 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_MagmaHideoutHint2
# 92 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt2_4
	return


AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 97 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 99 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_EventScript_SlateportHint2::
# 105 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 107 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_EventScript_Grunt1::
# 113 "data/maps/AquaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
# 115 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_1F_EventScript_Grunt1Defeated::
# 121 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 123 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end


AquaHideout_1F_Text_OurBossIsSnatchingSomething::
# 127 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here! He's gone off to\n"
	.string "snatch something important!\p"
	.string "… …\n"
	.string "Where did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_WhereMightMagmaHideoutBe::
# 138 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
	.string "Are you a TEAM MAGMA grunt?\p"
	.string "I hear that TEAM MAGMA is trying to\n"
	.string "awaken an awesome POKéMON at their\l"
	.string "HIDEOUT.\p"
	.string "But where might their HIDEOUT be?$"

AquaHideout_1F_Text_BossWentToJackASubmarine::
# 147 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here!\n"
	.string "He's gone off to jack a submarine!\p"
	.string "… …\n"
	.string "Where did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_BossIsOnRoute122::
# 158 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here! He's on his way to\n"
	.string "MT. PYRE on ROUTE 122!\p"
	.string "… …\n"
	.string "Why did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_TeamMagmaAtMtChimney::
# 169 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
	.string "Are you a TEAM MAGMA grunt?\p"
	.string "I hear that TEAM MAGMA is after\n"
	.string "an awesome POKéMON at MT. CHIMNEY.\p"
	.string "But what is that POKéMON like?$"

AquaHideout_1F_Text_BossIsInSlateportCity::
# 177 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here!\n"
	.string "He's on his way to SLATEPORT CITY!\p"
	.string "… …\n"
	.string "Why did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_Grunt1Intro::
# 188 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ayiyiyi!\n"
	.string "Suspicious character spotted!$"

AquaHideout_1F_Text_Grunt1Defeat::
# 193 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Grrrrr…\n"
	.string "I lost it!$"

AquaHideout_1F_Text_Grunt1PostBattle::
# 198 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I took the loss for the TEAM,\n"
	.string "but I did my job…$"
