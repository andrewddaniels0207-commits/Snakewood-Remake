# 1 "data/maps/AquaHideout_1F/scripts.pory"

# 2 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_MapScripts::
# 3 "data/maps/AquaHideout_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AquaHideout_1F/scripts.pory"

# 5 "data/maps/AquaHideout_1F/scripts.pory"

# 6 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
# 7 "data/maps/AquaHideout_1F/scripts.pory"
# 5 "data/maps/AquaHideout_1F/scripts.pory"
# 8 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 9 "data/maps/AquaHideout_1F/scripts.pory"
# 7 "data/maps/AquaHideout_1F/scripts.pory"
# 10 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 11 "data/maps/AquaHideout_1F/scripts.pory"
# 9 "data/maps/AquaHideout_1F/scripts.pory"
# 12 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1
# 13 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 14 "data/maps/AquaHideout_1F/scripts.pory"

# 15 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1:
# 16 "data/maps/AquaHideout_1F/scripts.pory"
# 10 "data/maps/AquaHideout_1F/scripts.pory"
# 17 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt1_2
# 18 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 19 "data/maps/AquaHideout_1F/scripts.pory"

# 20 "data/maps/AquaHideout_1F/scripts.pory"

# 21 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1::
# 22 "data/maps/AquaHideout_1F/scripts.pory"
# 16 "data/maps/AquaHideout_1F/scripts.pory"
# 23 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1_1
# 24 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 25 "data/maps/AquaHideout_1F/scripts.pory"

# 26 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1_1:
# 27 "data/maps/AquaHideout_1F/scripts.pory"
# 17 "data/maps/AquaHideout_1F/scripts.pory"
# 28 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt1_5
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 30 "data/maps/AquaHideout_1F/scripts.pory"

# 31 "data/maps/AquaHideout_1F/scripts.pory"

# 32 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1_4::
# 33 "data/maps/AquaHideout_1F/scripts.pory"
# 23 "data/maps/AquaHideout_1F/scripts.pory"
# 34 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
# 35 "data/maps/AquaHideout_1F/scripts.pory"
# 25 "data/maps/AquaHideout_1F/scripts.pory"
# 36 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 37 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 38 "data/maps/AquaHideout_1F/scripts.pory"

# 39 "data/maps/AquaHideout_1F/scripts.pory"

# 40 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1_2::
# 41 "data/maps/AquaHideout_1F/scripts.pory"
# 31 "data/maps/AquaHideout_1F/scripts.pory"
# 42 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_SlateportHint1
# 43 "data/maps/AquaHideout_1F/scripts.pory"
# 32 "data/maps/AquaHideout_1F/scripts.pory"
# 44 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt1_1
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 46 "data/maps/AquaHideout_1F/scripts.pory"

# 47 "data/maps/AquaHideout_1F/scripts.pory"

# 48 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1_5::
# 49 "data/maps/AquaHideout_1F/scripts.pory"
# 37 "data/maps/AquaHideout_1F/scripts.pory"
# 50 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_MagmaHideoutHint1
# 51 "data/maps/AquaHideout_1F/scripts.pory"
# 38 "data/maps/AquaHideout_1F/scripts.pory"
# 52 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt1_4
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 54 "data/maps/AquaHideout_1F/scripts.pory"

# 55 "data/maps/AquaHideout_1F/scripts.pory"

# 56 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 57 "data/maps/AquaHideout_1F/scripts.pory"
# 43 "data/maps/AquaHideout_1F/scripts.pory"
# 58 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 59 "data/maps/AquaHideout_1F/scripts.pory"
# 45 "data/maps/AquaHideout_1F/scripts.pory"
# 60 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 62 "data/maps/AquaHideout_1F/scripts.pory"

# 63 "data/maps/AquaHideout_1F/scripts.pory"

# 64 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint1::
# 65 "data/maps/AquaHideout_1F/scripts.pory"
# 51 "data/maps/AquaHideout_1F/scripts.pory"
# 66 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 67 "data/maps/AquaHideout_1F/scripts.pory"
# 53 "data/maps/AquaHideout_1F/scripts.pory"
# 68 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 69 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 70 "data/maps/AquaHideout_1F/scripts.pory"

# 71 "data/maps/AquaHideout_1F/scripts.pory"

# 72 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 73 "data/maps/AquaHideout_1F/scripts.pory"
# 59 "data/maps/AquaHideout_1F/scripts.pory"
# 74 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 75 "data/maps/AquaHideout_1F/scripts.pory"
# 61 "data/maps/AquaHideout_1F/scripts.pory"
# 76 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 77 "data/maps/AquaHideout_1F/scripts.pory"
# 63 "data/maps/AquaHideout_1F/scripts.pory"
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1
# 79 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 80 "data/maps/AquaHideout_1F/scripts.pory"

# 81 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1:
# 82 "data/maps/AquaHideout_1F/scripts.pory"
# 64 "data/maps/AquaHideout_1F/scripts.pory"
# 83 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt2_2
# 84 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 85 "data/maps/AquaHideout_1F/scripts.pory"

# 86 "data/maps/AquaHideout_1F/scripts.pory"

# 87 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1::
# 88 "data/maps/AquaHideout_1F/scripts.pory"
# 70 "data/maps/AquaHideout_1F/scripts.pory"
# 89 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1_1
# 90 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 91 "data/maps/AquaHideout_1F/scripts.pory"

# 92 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1_1:
# 93 "data/maps/AquaHideout_1F/scripts.pory"
# 71 "data/maps/AquaHideout_1F/scripts.pory"
# 94 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt2_5
# 95 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 96 "data/maps/AquaHideout_1F/scripts.pory"

# 97 "data/maps/AquaHideout_1F/scripts.pory"

# 98 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2_4::
# 99 "data/maps/AquaHideout_1F/scripts.pory"
# 77 "data/maps/AquaHideout_1F/scripts.pory"
# 100 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 101 "data/maps/AquaHideout_1F/scripts.pory"
# 79 "data/maps/AquaHideout_1F/scripts.pory"
# 102 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 103 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 104 "data/maps/AquaHideout_1F/scripts.pory"

# 105 "data/maps/AquaHideout_1F/scripts.pory"

# 106 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2_2::
# 107 "data/maps/AquaHideout_1F/scripts.pory"
# 85 "data/maps/AquaHideout_1F/scripts.pory"
# 108 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_SlateportHint2
# 109 "data/maps/AquaHideout_1F/scripts.pory"
# 86 "data/maps/AquaHideout_1F/scripts.pory"
# 110 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt2_1
# 111 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 112 "data/maps/AquaHideout_1F/scripts.pory"

# 113 "data/maps/AquaHideout_1F/scripts.pory"

# 114 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2_5::
# 115 "data/maps/AquaHideout_1F/scripts.pory"
# 91 "data/maps/AquaHideout_1F/scripts.pory"
# 116 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_MagmaHideoutHint2
# 117 "data/maps/AquaHideout_1F/scripts.pory"
# 92 "data/maps/AquaHideout_1F/scripts.pory"
# 118 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunt2_4
# 119 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 120 "data/maps/AquaHideout_1F/scripts.pory"

# 121 "data/maps/AquaHideout_1F/scripts.pory"

# 122 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 123 "data/maps/AquaHideout_1F/scripts.pory"
# 97 "data/maps/AquaHideout_1F/scripts.pory"
# 124 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 125 "data/maps/AquaHideout_1F/scripts.pory"
# 99 "data/maps/AquaHideout_1F/scripts.pory"
# 126 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 127 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 128 "data/maps/AquaHideout_1F/scripts.pory"

# 129 "data/maps/AquaHideout_1F/scripts.pory"

# 130 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint2::
# 131 "data/maps/AquaHideout_1F/scripts.pory"
# 105 "data/maps/AquaHideout_1F/scripts.pory"
# 132 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 133 "data/maps/AquaHideout_1F/scripts.pory"
# 107 "data/maps/AquaHideout_1F/scripts.pory"
# 134 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 135 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 136 "data/maps/AquaHideout_1F/scripts.pory"

# 137 "data/maps/AquaHideout_1F/scripts.pory"

# 138 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1::
# 139 "data/maps/AquaHideout_1F/scripts.pory"
# 113 "data/maps/AquaHideout_1F/scripts.pory"
# 140 "data/maps/AquaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
# 141 "data/maps/AquaHideout_1F/scripts.pory"
# 115 "data/maps/AquaHideout_1F/scripts.pory"
# 142 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 144 "data/maps/AquaHideout_1F/scripts.pory"

# 145 "data/maps/AquaHideout_1F/scripts.pory"

# 146 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1Defeated::
# 147 "data/maps/AquaHideout_1F/scripts.pory"
# 121 "data/maps/AquaHideout_1F/scripts.pory"
# 148 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 149 "data/maps/AquaHideout_1F/scripts.pory"
# 123 "data/maps/AquaHideout_1F/scripts.pory"
# 150 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 151 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 152 "data/maps/AquaHideout_1F/scripts.pory"

# 153 "data/maps/AquaHideout_1F/scripts.pory"

# 154 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_OurBossIsSnatchingSomething::
# 155 "data/maps/AquaHideout_1F/scripts.pory"
# 127 "data/maps/AquaHideout_1F/scripts.pory"
# 156 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 157 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 158 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here! He's gone off to\n"
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	.string "snatch something important!\p"
# 160 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 161 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Where did he go?\p"
# 162 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 164 "data/maps/AquaHideout_1F/scripts.pory"

# 165 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_WhereMightMagmaHideoutBe::
# 166 "data/maps/AquaHideout_1F/scripts.pory"
# 138 "data/maps/AquaHideout_1F/scripts.pory"
# 167 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
# 168 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Are you a TEAM MAGMA grunt?\p"
# 169 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I hear that TEAM MAGMA is trying to\n"
# 170 "data/maps/AquaHideout_1F/scripts.pory"
	.string "awaken an awesome POKéMON at their\l"
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	.string "HIDEOUT.\p"
# 172 "data/maps/AquaHideout_1F/scripts.pory"
	.string "But where might their HIDEOUT be?$"
# 173 "data/maps/AquaHideout_1F/scripts.pory"

# 174 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossWentToJackASubmarine::
# 175 "data/maps/AquaHideout_1F/scripts.pory"
# 147 "data/maps/AquaHideout_1F/scripts.pory"
# 176 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 177 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 178 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here!\n"
# 179 "data/maps/AquaHideout_1F/scripts.pory"
	.string "He's gone off to jack a submarine!\p"
# 180 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 181 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Where did he go?\p"
# 182 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 183 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 184 "data/maps/AquaHideout_1F/scripts.pory"

# 185 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsOnRoute122::
# 186 "data/maps/AquaHideout_1F/scripts.pory"
# 158 "data/maps/AquaHideout_1F/scripts.pory"
# 187 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 188 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 189 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here! He's on his way to\n"
# 190 "data/maps/AquaHideout_1F/scripts.pory"
	.string "MT. PYRE on ROUTE 122!\p"
# 191 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 192 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Why did he go?\p"
# 193 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 194 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 195 "data/maps/AquaHideout_1F/scripts.pory"

# 196 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TeamMagmaAtMtChimney::
# 197 "data/maps/AquaHideout_1F/scripts.pory"
# 169 "data/maps/AquaHideout_1F/scripts.pory"
# 198 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
# 199 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Are you a TEAM MAGMA grunt?\p"
# 200 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I hear that TEAM MAGMA is after\n"
# 201 "data/maps/AquaHideout_1F/scripts.pory"
	.string "an awesome POKéMON at MT. CHIMNEY.\p"
# 202 "data/maps/AquaHideout_1F/scripts.pory"
	.string "But what is that POKéMON like?$"
# 203 "data/maps/AquaHideout_1F/scripts.pory"

# 204 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsInSlateportCity::
# 205 "data/maps/AquaHideout_1F/scripts.pory"
# 177 "data/maps/AquaHideout_1F/scripts.pory"
# 206 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\n"
# 207 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 208 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here!\n"
# 209 "data/maps/AquaHideout_1F/scripts.pory"
	.string "He's on his way to SLATEPORT CITY!\p"
# 210 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 211 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Why did he go?\p"
# 212 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 213 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 214 "data/maps/AquaHideout_1F/scripts.pory"

# 215 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Intro::
# 216 "data/maps/AquaHideout_1F/scripts.pory"
# 188 "data/maps/AquaHideout_1F/scripts.pory"
# 217 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ayiyiyi!\n"
# 218 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Suspicious character spotted!$"
# 219 "data/maps/AquaHideout_1F/scripts.pory"

# 220 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Defeat::
# 221 "data/maps/AquaHideout_1F/scripts.pory"
# 193 "data/maps/AquaHideout_1F/scripts.pory"
# 222 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Grrrrr…\n"
# 223 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I lost it!$"
# 224 "data/maps/AquaHideout_1F/scripts.pory"

# 225 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1PostBattle::
# 226 "data/maps/AquaHideout_1F/scripts.pory"
# 198 "data/maps/AquaHideout_1F/scripts.pory"
# 227 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I took the loss for the TEAM,\n"
# 228 "data/maps/AquaHideout_1F/scripts.pory"
	.string "but I did my job…$"
