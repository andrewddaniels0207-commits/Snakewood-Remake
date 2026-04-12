# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_4F/scripts.pory"

# 5 "data/maps/MagmaHideout_4F/scripts.pory"

# 6 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 9 "data/maps/MagmaHideout_4F/scripts.pory"
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
# 10 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
# 12 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
# 9 "data/maps/MagmaHideout_4F/scripts.pory"
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
# 10 "data/maps/MagmaHideout_4F/scripts.pory"
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
# 12 "data/maps/MagmaHideout_4F/scripts.pory"
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON_SLEEPING
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, Common_Movement_FacePlayer
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 123 "data/maps/MagmaHideout_4F/scripts.pory"
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_MAXIE
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
# 132 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_1
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_2
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_3
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_TABITHA
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
# 140 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 145 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 146 "data/maps/MagmaHideout_4F/scripts.pory"

# 147 "data/maps/MagmaHideout_4F/scripts.pory"

# 148 "data/maps/MagmaHideout_4F/scripts.pory"
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
# 149 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
# 153 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
# 155 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 156 "data/maps/MagmaHideout_4F/scripts.pory"
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
# 157 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
# 159 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
# 161 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 162 "data/maps/MagmaHideout_4F/scripts.pory"
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 164 "data/maps/MagmaHideout_4F/scripts.pory"
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
# 165 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 166 "data/maps/MagmaHideout_4F/scripts.pory"
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
# 167 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
# 169 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 172 "data/maps/MagmaHideout_4F/scripts.pory"

# 173 "data/maps/MagmaHideout_4F/scripts.pory"
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 175 "data/maps/MagmaHideout_4F/scripts.pory"
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
# 176 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 179 "data/maps/MagmaHideout_4F/scripts.pory"
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
# 180 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 181 "data/maps/MagmaHideout_4F/scripts.pory"

# 182 "data/maps/MagmaHideout_4F/scripts.pory"
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 188 "data/maps/MagmaHideout_4F/scripts.pory"
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 194 "data/maps/MagmaHideout_4F/scripts.pory"
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
# 195 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 198 "data/maps/MagmaHideout_4F/scripts.pory"
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
# 199 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
# 203 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 204 "data/maps/MagmaHideout_4F/scripts.pory"
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 208 "data/maps/MagmaHideout_4F/scripts.pory"

# 209 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 215 "data/maps/MagmaHideout_4F/scripts.pory"

# 216 "data/maps/MagmaHideout_4F/scripts.pory"

# 217 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 218 "data/maps/MagmaHideout_4F/scripts.pory"
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
# 219 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 223 "data/maps/MagmaHideout_4F/scripts.pory"

# 224 "data/maps/MagmaHideout_4F/scripts.pory"

# 225 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 231 "data/maps/MagmaHideout_4F/scripts.pory"

# 232 "data/maps/MagmaHideout_4F/scripts.pory"

# 233 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
# 235 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
# 236 "data/maps/MagmaHideout_4F/scripts.pory"
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
# 237 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 239 "data/maps/MagmaHideout_4F/scripts.pory"

# 240 "data/maps/MagmaHideout_4F/scripts.pory"

# 241 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro::
# 242 "data/maps/MagmaHideout_4F/scripts.pory"
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see GROUDON, too, but they\n"
# 244 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "won't let me see even its tail…\p"
# 245 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's got me feeling really frustrated.\p"
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Oh, no!\n"
# 247 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I blabbed about GROUDON!$"
# 248 "data/maps/MagmaHideout_4F/scripts.pory"

# 249 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat::
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
# 251 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
# 252 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "doesn't have a calm mind…$"
# 253 "data/maps/MagmaHideout_4F/scripts.pory"

# 254 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle::
# 255 "data/maps/MagmaHideout_4F/scripts.pory"
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
# 256 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if GROUDON even has a tail?$"
# 257 "data/maps/MagmaHideout_4F/scripts.pory"

# 258 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro::
# 259 "data/maps/MagmaHideout_4F/scripts.pory"
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
# 260 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
# 261 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Soon! Very soon!\l"
# 262 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our grand objective will be achieved!$"
# 263 "data/maps/MagmaHideout_4F/scripts.pory"

# 264 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat::
# 265 "data/maps/MagmaHideout_4F/scripts.pory"
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
# 266 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 267 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've come so far, but now this?$"
# 268 "data/maps/MagmaHideout_4F/scripts.pory"

# 269 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle::
# 270 "data/maps/MagmaHideout_4F/scripts.pory"
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
# 271 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE, sir!\n"
# 272 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "An intruder is headed your way!$"
# 273 "data/maps/MagmaHideout_4F/scripts.pory"

# 274 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro::
# 275 "data/maps/MagmaHideout_4F/scripts.pory"
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
# 276 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 277 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 278 "data/maps/MagmaHideout_4F/scripts.pory"

# 279 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat::
# 280 "data/maps/MagmaHideout_4F/scripts.pory"
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
# 281 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"
# 282 "data/maps/MagmaHideout_4F/scripts.pory"

# 283 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle::
# 284 "data/maps/MagmaHideout_4F/scripts.pory"
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
# 285 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "C-come on, one more match…$"
# 286 "data/maps/MagmaHideout_4F/scripts.pory"

# 287 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro::
# 288 "data/maps/MagmaHideout_4F/scripts.pory"
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
# 289 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 290 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 291 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 292 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 293 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 294 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 295 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 296 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 297 "data/maps/MagmaHideout_4F/scripts.pory"

# 298 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat::
# 299 "data/maps/MagmaHideout_4F/scripts.pory"
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
# 300 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Taken down again…\n"
# 301 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe…$"
# 302 "data/maps/MagmaHideout_4F/scripts.pory"

# 303 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle::
# 304 "data/maps/MagmaHideout_4F/scripts.pory"
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
# 305 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
# 306 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE should have awakened GROUDON…$"
# 307 "data/maps/MagmaHideout_4F/scripts.pory"

# 308 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon::
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
# 310 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON…\p"
# 311 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 312 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This BLUE ORB is what you sought.\n"
# 314 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't it?\p"
# 315 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the BLUE ORB.\n"
# 316 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 317 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And show me…\n"
# 318 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Show me the full extent of your power!$"
# 319 "data/maps/MagmaHideout_4F/scripts.pory"

# 320 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong::
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
# 322 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON!\n"
# 323 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 324 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the BLUE ORB the key?\p"
# 325 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "GROUDON!\n"
# 326 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 327 "data/maps/MagmaHideout_4F/scripts.pory"

# 328 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou::
# 329 "data/maps/MagmaHideout_4F/scripts.pory"
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
# 330 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: Oh, so it was you?\p"
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've seen you poking around uninvited\n"
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "here and there…\p"
# 333 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I get it now!\n"
# 334 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You must have pulled a cheap stunt!$"
# 335 "data/maps/MagmaHideout_4F/scripts.pory"

# 336 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat::
# 337 "data/maps/MagmaHideout_4F/scripts.pory"
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
# 338 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What makes you so adept at handling\n"
# 339 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "POKéMON?$"
# 340 "data/maps/MagmaHideout_4F/scripts.pory"

# 341 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon::
# 342 "data/maps/MagmaHideout_4F/scripts.pory"
# 235 "data/maps/MagmaHideout_4F/scripts.pory"
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: There has to be some reason\n"
# 344 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "why GROUDON fled…\p"
# 345 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's what you're trying to say,\n"
# 346 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "aren't you?\p"
# 347 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
# 348 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 349 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Humph…\n"
# 350 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You think I didn't know that?\p"
# 351 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With GROUDON gone, there is no longer\n"
# 352 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "any need for this blasted volcano.\p"
# 353 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I am going after GROUDON, so this\n"
# 354 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is where we part!$"
