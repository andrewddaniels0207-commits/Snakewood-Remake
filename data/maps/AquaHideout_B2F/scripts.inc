# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
# 2 "data/maps/AquaHideout_B2F/scripts.pory"
# 4 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 5 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 6 "data/maps/AquaHideout_B2F/scripts.pory"

# 7 "data/maps/AquaHideout_B2F/scripts.pory"

# 8 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition::
# 9 "data/maps/AquaHideout_B2F/scripts.pory"
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
# 10 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_OnTransition_1
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 12 "data/maps/AquaHideout_B2F/scripts.pory"

# 13 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition_1:
# 14 "data/maps/AquaHideout_B2F/scripts.pory"
# 8 "data/maps/AquaHideout_B2F/scripts.pory"
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	goto AquaHideout_B2F_OnTransition_2
# 16 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 17 "data/maps/AquaHideout_B2F/scripts.pory"

# 18 "data/maps/AquaHideout_B2F/scripts.pory"

# 19 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition_1::
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 21 "data/maps/AquaHideout_B2F/scripts.pory"

# 22 "data/maps/AquaHideout_B2F/scripts.pory"

# 23 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition_2::
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
# 25 "data/maps/AquaHideout_B2F/scripts.pory"
	call AquaHideout_B2F_EventScript_PreventMattNoticing
# 26 "data/maps/AquaHideout_B2F/scripts.pory"
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	goto AquaHideout_B2F_OnTransition_1
# 28 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 29 "data/maps/AquaHideout_B2F/scripts.pory"

# 30 "data/maps/AquaHideout_B2F/scripts.pory"

# 31 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventMattNoticing::
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 34 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 35 "data/maps/AquaHideout_B2F/scripts.pory"

# 36 "data/maps/AquaHideout_B2F/scripts.pory"

# 37 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattNoticePlayer::
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
# 34 "data/maps/AquaHideout_B2F/scripts.pory"
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
# 55 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 57 "data/maps/AquaHideout_B2F/scripts.pory"

# 58 "data/maps/AquaHideout_B2F/scripts.pory"

# 59 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Matt::
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
# 61 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
# 65 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 67 "data/maps/AquaHideout_B2F/scripts.pory"

# 68 "data/maps/AquaHideout_B2F/scripts.pory"

# 69 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 70 "data/maps/AquaHideout_B2F/scripts.pory"
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_AQUA_HIDEOUT_SUBMARINE
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
# 75 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
# 70 "data/maps/AquaHideout_B2F/scripts.pory"
# 79 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 80 "data/maps/AquaHideout_B2F/scripts.pory"
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
# 83 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 84 "data/maps/AquaHideout_B2F/scripts.pory"
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
# 80 "data/maps/AquaHideout_B2F/scripts.pory"
# 89 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
# 84 "data/maps/AquaHideout_B2F/scripts.pory"
# 93 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
# 95 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
# 97 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 98 "data/maps/AquaHideout_B2F/scripts.pory"
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
# 99 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/AquaHideout_B2F/scripts.pory"
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
# 103 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 104 "data/maps/AquaHideout_B2F/scripts.pory"
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
# 98 "data/maps/AquaHideout_B2F/scripts.pory"
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 108 "data/maps/AquaHideout_B2F/scripts.pory"
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 111 "data/maps/AquaHideout_B2F/scripts.pory"

# 112 "data/maps/AquaHideout_B2F/scripts.pory"

# 113 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft::
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 118 "data/maps/AquaHideout_B2F/scripts.pory"
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 122 "data/maps/AquaHideout_B2F/scripts.pory"
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 125 "data/maps/AquaHideout_B2F/scripts.pory"

# 126 "data/maps/AquaHideout_B2F/scripts.pory"

# 127 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight::
# 128 "data/maps/AquaHideout_B2F/scripts.pory"
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
# 133 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
# 127 "data/maps/AquaHideout_B2F/scripts.pory"
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
# 137 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 138 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 139 "data/maps/AquaHideout_B2F/scripts.pory"

# 140 "data/maps/AquaHideout_B2F/scripts.pory"

# 141 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
# 143 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
# 145 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 147 "data/maps/AquaHideout_B2F/scripts.pory"

# 148 "data/maps/AquaHideout_B2F/scripts.pory"

# 149 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
# 151 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 152 "data/maps/AquaHideout_B2F/scripts.pory"
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
# 153 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 154 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 155 "data/maps/AquaHideout_B2F/scripts.pory"

# 156 "data/maps/AquaHideout_B2F/scripts.pory"

# 157 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 158 "data/maps/AquaHideout_B2F/scripts.pory"
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
# 159 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
# 152 "data/maps/AquaHideout_B2F/scripts.pory"
# 161 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 162 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 163 "data/maps/AquaHideout_B2F/scripts.pory"

# 164 "data/maps/AquaHideout_B2F/scripts.pory"

# 165 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 166 "data/maps/AquaHideout_B2F/scripts.pory"
# 158 "data/maps/AquaHideout_B2F/scripts.pory"
# 167 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 168 "data/maps/AquaHideout_B2F/scripts.pory"
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
# 169 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 171 "data/maps/AquaHideout_B2F/scripts.pory"

# 172 "data/maps/AquaHideout_B2F/scripts.pory"

# 173 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattIntro::
# 174 "data/maps/AquaHideout_B2F/scripts.pory"
# 164 "data/maps/AquaHideout_B2F/scripts.pory"
# 175 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\p"
# 176 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Got here already, did you?\n"
# 177 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We underestimated you!\p"
# 178 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But this is it!\p"
# 179 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm a cut above the GRUNTS you've seen\n"
# 180 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "so far.\p"
# 181 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm not stalling for time.\n"
# 182 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm going to pulverize you!$"
# 183 "data/maps/AquaHideout_B2F/scripts.pory"

# 184 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat::
# 185 "data/maps/AquaHideout_B2F/scripts.pory"
# 175 "data/maps/AquaHideout_B2F/scripts.pory"
# 186 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 187 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "So, I lost, too…$"
# 188 "data/maps/AquaHideout_B2F/scripts.pory"

# 189 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations::
# 190 "data/maps/AquaHideout_B2F/scripts.pory"
# 180 "data/maps/AquaHideout_B2F/scripts.pory"
# 191 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 192 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While I was toying with you, our BOSS\n"
# 193 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "got through his preparations!$"
# 194 "data/maps/AquaHideout_B2F/scripts.pory"

# 195 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle::
# 196 "data/maps/AquaHideout_B2F/scripts.pory"
# 186 "data/maps/AquaHideout_B2F/scripts.pory"
# 197 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 198 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our BOSS has already gone on his way to\n"
# 199 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 200 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 201 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 202 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "LILYCOVE.\p"
# 203 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But will you find it then?\n"
# 204 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!$"
# 205 "data/maps/AquaHideout_B2F/scripts.pory"

# 206 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro::
# 207 "data/maps/AquaHideout_B2F/scripts.pory"
# 197 "data/maps/AquaHideout_B2F/scripts.pory"
# 208 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 209 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 210 "data/maps/AquaHideout_B2F/scripts.pory"

# 211 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat::
# 212 "data/maps/AquaHideout_B2F/scripts.pory"
# 202 "data/maps/AquaHideout_B2F/scripts.pory"
# 213 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 214 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 215 "data/maps/AquaHideout_B2F/scripts.pory"

# 216 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle::
# 217 "data/maps/AquaHideout_B2F/scripts.pory"
# 207 "data/maps/AquaHideout_B2F/scripts.pory"
# 218 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "BOSS…\n"
# 219 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 220 "data/maps/AquaHideout_B2F/scripts.pory"

# 221 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro::
# 222 "data/maps/AquaHideout_B2F/scripts.pory"
# 212 "data/maps/AquaHideout_B2F/scripts.pory"
# 223 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the HIDEOUT's pride\n"
# 224 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 225 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 226 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 227 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 228 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 229 "data/maps/AquaHideout_B2F/scripts.pory"

# 230 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat::
# 231 "data/maps/AquaHideout_B2F/scripts.pory"
# 221 "data/maps/AquaHideout_B2F/scripts.pory"
# 232 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 233 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 234 "data/maps/AquaHideout_B2F/scripts.pory"

# 235 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle::
# 236 "data/maps/AquaHideout_B2F/scripts.pory"
# 226 "data/maps/AquaHideout_B2F/scripts.pory"
# 237 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 238 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the MASTER BALL.\p"
# 239 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our BOSS will\n"
# 240 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 241 "data/maps/AquaHideout_B2F/scripts.pory"

# 242 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro::
# 243 "data/maps/AquaHideout_B2F/scripts.pory"
# 233 "data/maps/AquaHideout_B2F/scripts.pory"
# 244 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined TEAM AQUA, the first\n"
# 245 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 246 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 247 "data/maps/AquaHideout_B2F/scripts.pory"

# 248 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat::
# 249 "data/maps/AquaHideout_B2F/scripts.pory"
# 239 "data/maps/AquaHideout_B2F/scripts.pory"
# 250 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 251 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 252 "data/maps/AquaHideout_B2F/scripts.pory"

# 253 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle::
# 254 "data/maps/AquaHideout_B2F/scripts.pory"
# 244 "data/maps/AquaHideout_B2F/scripts.pory"
# 255 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 256 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"
