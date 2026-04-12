MagmaHideout_4F_MapScripts::
	.byte 0


MagmaHideout_4F_EventScript_Maxie::
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 9 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 10 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 12 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON_SLEEPING
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, Common_Movement_FacePlayer
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_MAXIE
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_1
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_2
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_3
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_TABITHA
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	end


# 76 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end

# 90 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end

# 96 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end

MagmaHideout_4F_EventScript_Grunt11::
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
	end


MagmaHideout_4F_EventScript_Grunt12::
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
	end


MagmaHideout_4F_EventScript_Grunt13::
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
	end


MagmaHideout_4F_EventScript_Tabitha::
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end


MagmaHideout_4F_Text_Grunt11Intro::
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see GROUDON, too, but they\n"
	.string "won't let me see even its tail…\p"
	.string "It's got me feeling really frustrated.\p"
	.string "Oh, no!\n"
	.string "I blabbed about GROUDON!$"

MagmaHideout_4F_Text_Grunt11Defeat::
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
	.string "doesn't have a calm mind…$"

MagmaHideout_4F_Text_Grunt11PostBattle::
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if GROUDON even has a tail?$"

MagmaHideout_4F_Text_Grunt12Intro::
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
	.string "Soon! Very soon!\l"
	.string "Our grand objective will be achieved!$"

MagmaHideout_4F_Text_Grunt12Defeat::
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
	.string "I've come so far, but now this?$"

MagmaHideout_4F_Text_Grunt12PostBattle::
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE, sir!\n"
	.string "An intruder is headed your way!$"

MagmaHideout_4F_Text_Grunt13Intro::
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
	.string "You're not getting by me easily!$"

MagmaHideout_4F_Text_Grunt13Defeat::
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"

MagmaHideout_4F_Text_Grunt13PostBattle::
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "C-come on, one more match…$"

MagmaHideout_4F_Text_TabithaIntro::
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
	.string "You made it this far, so I'll tell you!\p"
	.string "That's right!\n"
	.string "Up ahead, GROUDON is sleeping!\p"
	.string "MAXIE went to GROUDON just seconds\n"
	.string "ago!\p"
	.string "It's going to awaken real soon!\n"
	.string "Hehe! Hehehe!$"

MagmaHideout_4F_Text_TabithaDefeat::
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Taken down again…\n"
	.string "Hehe…$"

MagmaHideout_4F_Text_TabithaPostBattle::
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
	.string "MAXIE should have awakened GROUDON…$"

MagmaHideout_4F_Text_MaxieAwakenGroudon::
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON…\p"
	.string "Nothing could awaken you from your\n"
	.string "sleep bathed in magma…\p"
	.string "This BLUE ORB is what you sought.\n"
	.string "Wasn't it?\p"
	.string "I have brought you the BLUE ORB.\n"
	.string "Let its shine awaken you!\p"
	.string "And show me…\n"
	.string "Show me the full extent of your power!$"

MagmaHideout_4F_Text_MaxieGroudonWhatsWrong::
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON!\n"
	.string "What's wrong?\p"
	.string "Wasn't the BLUE ORB the key?\p"
	.string "GROUDON!\n"
	.string "Where have you gone…$"

MagmaHideout_4F_Text_MaxieOhItWasYou::
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: Oh, so it was you?\p"
	.string "I've seen you poking around uninvited\n"
	.string "here and there…\p"
	.string "I get it now!\n"
	.string "You must have pulled a cheap stunt!$"

MagmaHideout_4F_Text_MaxieDefeat::
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What makes you so adept at handling\n"
	.string "POKéMON?$"

MagmaHideout_4F_Text_MaxieImGoingAfterGroudon::
# 235 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: There has to be some reason\n"
	.string "why GROUDON fled…\p"
	.string "That's what you're trying to say,\n"
	.string "aren't you?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Humph…\n"
	.string "You think I didn't know that?\p"
	.string "With GROUDON gone, there is no longer\n"
	.string "any need for this blasted volcano.\p"
	.string "I am going after GROUDON, so this\n"
	.string "is where we part!$"
