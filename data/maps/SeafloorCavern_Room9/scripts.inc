# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8004
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit::
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 354 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 355 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 356 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 357 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 358 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 359 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 361 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 362 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 363 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 365 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 366 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 367 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 368 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 369 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 370 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 371 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 372 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 373 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 374 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 375 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 376 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 377 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 378 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 379 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 380 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 381 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 382 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 383 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 384 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 385 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 386 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 387 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 388 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 389 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 390 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 391 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 392 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 393 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 394 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 395 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 396 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 397 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 398 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 399 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 400 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 401 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 402 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 403 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 404 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 405 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 406 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 407 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 408 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 409 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 410 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 411 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 412 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 413 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 414 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 415 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 416 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 417 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 418 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 419 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 420 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 421 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 422 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 423 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 424 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 425 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 426 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 427 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 428 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere::
# 429 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 430 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"
# 431 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou::
# 433 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 434 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 435 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 436 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 437 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre::
# 438 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 439 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Behold!\p"
# 440 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 441 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient POKéMON KYOGRE!\p"
# 442 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 443 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 444 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 445 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear::
# 446 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 447 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 448 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 449 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 450 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 451 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 452 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat::
# 454 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 456 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 458 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb::
# 459 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 460 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
# 461 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 462 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 463 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 464 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 465 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this RED ORB, I can make KYOGRE…$"
# 466 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 467 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself::
# 468 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 469 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
# 470 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 471 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 472 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo::
# 473 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 474 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: What?!\p"
# 475 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 476 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the RED ORB…\p"
# 477 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did KYOGRE go?$"
# 478 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 479 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside::
# 480 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 481 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hm? It's a message from our\n"
# 482 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 483 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 484 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard::
# 485 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 486 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Yes, what is it?\p"
# 487 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 488 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 489 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Good… That should have happened.\n"
# 490 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That is why we awakened KYOGRE,\l"
# 491 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to realize TEAM AQUA's vision of\l"
# 492 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "expanding the sea.\p"
# 493 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 494 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 495 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 496 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That can't be…\n"
# 497 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's just not possible…\p"
# 498 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 499 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 500 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 501 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear::
# 502 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 503 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
# 504 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB is supposed to awaken\n"
# 505 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and control KYOGRE…\p"
# 506 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… Why?\n"
# 507 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did KYOGRE disappear?\p"
# 508 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why?!$"
# 509 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 510 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought::
# 511 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 512 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: What have you wrought?\p"
# 513 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE… You've finally awoken KYOGRE,\n"
# 514 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 515 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 516 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 517 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 518 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 519 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 520 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty::
# 521 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 522 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: W-what?!\n"
# 523 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 524 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, TEAM MAGMA, that\n"
# 525 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "infuriated GROUDON?\p"
# 526 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So long as I have this RED ORB,\n"
# 527 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control KYOGRE…\p"
# 528 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control it…$"
# 529 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 530 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue::
# 531 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 532 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: We don't have the time to\n"
# 533 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 534 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 535 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 536 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 537 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 538 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer::
# 539 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
# 540 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: {PLAYER}, come on, you have\n"
# 541 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"
