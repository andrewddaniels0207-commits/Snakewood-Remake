SeafloorCavern_Room9_MapScripts::
	.byte 0


SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8004
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
	end


# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end

# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end

# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end

# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end

SeafloorCavern_Room9_Movement_ArchieExit::
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end

# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end

# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end

# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end

# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end

# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end

SeafloorCavern_Room9_Text_ArchieHoldItRightThere::
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"

SeafloorCavern_Room9_Text_ArchieSoItWasYou::
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
	.string "So it was you, after all.$"

SeafloorCavern_Room9_Text_ArchieBeholdKyogre::
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Behold!\p"
	.string "See how beautiful it is, the sleeping\n"
	.string "form of the ancient POKéMON KYOGRE!\p"
	.string "I have waited so long for this day to\n"
	.string "come…$"

SeafloorCavern_Room9_Text_ArchieYouMustDisappear::
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
	.string "managed to chase me here.\p"
	.string "But that's all over now.\p"
	.string "For the realization of my dream,\n"
	.string "you must disappear now!$"

SeafloorCavern_Room9_Text_ArchieDefeat::
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
	.string "I lost to a mere child like you?!$"

SeafloorCavern_Room9_Text_ArchieWithThisRedOrb::
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
	.string "I commend you. I must recognize that\n"
	.string "you are truly gifted.\p"
	.string "But!\n"
	.string "I have this in my possession!\p"
	.string "With this RED ORB, I can make KYOGRE…$"

SeafloorCavern_Room9_Text_RedOrbShinesByItself::
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
	.string "by itself!$"

SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo::
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: What?!\p"
	.string "I didn't do anything.\n"
	.string "Why did the RED ORB…\p"
	.string "Where did KYOGRE go?$"

SeafloorCavern_Room9_Text_ArchieAMessageFromOutside::
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hm? It's a message from our\n"
	.string "members outside…$"

SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard::
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Yes, what is it?\p"
	.string "Hm…\n"
	.string "It's raining heavily?\p"
	.string "Good… That should have happened.\n"
	.string "That is why we awakened KYOGRE,\l"
	.string "to realize TEAM AQUA's vision of\l"
	.string "expanding the sea.\p"
	.string "What?!\p"
	.string "It's raining far harder than we\n"
	.string "envisioned? You're in danger?\p"
	.string "That can't be…\n"
	.string "That's just not possible…\p"
	.string "Hold your position and monitor\n"
	.string "the situation!$"

SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear::
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
	.string "The RED ORB is supposed to awaken\n"
	.string "and control KYOGRE…\p"
	.string "But… Why?\n"
	.string "Why did KYOGRE disappear?\p"
	.string "Why?!$"

SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought::
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: What have you wrought?\p"
	.string "ARCHIE… You've finally awoken KYOGRE,\n"
	.string "haven't you?\p"
	.string "What will happen to the world if this\n"
	.string "downpour continues for all eternity?\p"
	.string "The world's landmass will drown in\n"
	.string "the deepening sea…$"

SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty::
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: W-what?!\n"
	.string "Don't get all high and mighty with me!\p"
	.string "Wasn't it you, TEAM MAGMA, that\n"
	.string "infuriated GROUDON?\p"
	.string "So long as I have this RED ORB,\n"
	.string "I should be able to control KYOGRE…\p"
	.string "I should be able to control it…$"

SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue::
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: We don't have the time to\n"
	.string "argue about it here!\p"
	.string "Get outside and see for yourself!\p"
	.string "See if what you've wrought is the\n"
	.string "world that we desired!$"

SeafloorCavern_Room9_Text_MaxieComeOnPlayer::
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: {PLAYER}, come on, you have\n"
	.string "to get out of here, too!$"
