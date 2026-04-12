MirageTower_4F_MapScripts::
	.byte 0


MirageTower_4F_EventScript_RootFossil::
# 4 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 5 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 6 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeRootFossil, MSGBOX_YESNO
# 7 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MirageTower_4F_EventScript_RootFossil_2
MirageTower_4F_EventScript_RootFossil_1:
# 10 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 11 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MirageTower_4F_EventScript_RootFossil_5
MirageTower_4F_EventScript_RootFossil_4:
# 14 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 15 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 16 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 17 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_ROOT_FOSSIL
# 18 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 19 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_ROOT_FOSSIL
# 20 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_RootFossil_2:
# 8 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_LeaveRootFossil
	goto MirageTower_4F_EventScript_RootFossil_1

MirageTower_4F_EventScript_RootFossil_5:
# 12 "data/maps/MirageTower_4F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MirageTower_4F_EventScript_RootFossil_4


MirageTower_4F_EventScript_LeaveRootFossil::
# 25 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftRootFossilAlone, MSGBOX_DEFAULT
# 26 "data/maps/MirageTower_4F/scripts.pory"
	release
	end


MirageTower_4F_EventScript_ClawFossil::
# 31 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 32 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 33 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeClawFossil, MSGBOX_YESNO
# 34 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MirageTower_4F_EventScript_ClawFossil_2
MirageTower_4F_EventScript_ClawFossil_1:
# 37 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 38 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MirageTower_4F_EventScript_ClawFossil_5
MirageTower_4F_EventScript_ClawFossil_4:
# 41 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 42 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 43 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 44 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_CLAW_FOSSIL
# 45 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 46 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_CLAW_FOSSIL
# 47 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_ClawFossil_2:
# 35 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_LeaveClawFossil
	goto MirageTower_4F_EventScript_ClawFossil_1

MirageTower_4F_EventScript_ClawFossil_5:
# 39 "data/maps/MirageTower_4F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MirageTower_4F_EventScript_ClawFossil_4


MirageTower_4F_EventScript_LeaveClawFossil::
# 52 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveClawFossilAlone, MSGBOX_DEFAULT
# 53 "data/maps/MirageTower_4F/scripts.pory"
	release
	end


MirageTower_4F_EventScript_CollapseMirageTower::
# 58 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 59 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 60 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 32
# 61 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2
# 62 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 63 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 64 "data/maps/MirageTower_4F/scripts.pory"
	special DoMirageTowerCeilingCrumble
# 65 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 66 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 1
# 67 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
# 68 "data/maps/MirageTower_4F/scripts.pory"
	warp MAP_ROUTE111, 19, 59
# 69 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 70 "data/maps/MirageTower_4F/scripts.pory"
	release
	end


MirageTower_4F_Text_TakeRootFossil::
# 74 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the ROOT FOSSIL.\p"
	.string "If this FOSSIL is taken, the ground\n"
	.string "around it will likely crumble away…\p"
	.string "Take the ROOT FOSSIL anyway?$"

MirageTower_4F_Text_LeftRootFossilAlone::
# 81 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the ROOT FOSSIL alone.$"

MirageTower_4F_Text_TakeClawFossil::
# 85 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the CLAW FOSSIL.\p"
	.string "If this FOSSIL is taken, the ground\n"
	.string "around it will likely crumble away…\p"
	.string "Take the CLAW FOSSIL anyway?$"

MirageTower_4F_Text_LeaveClawFossilAlone::
# 92 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the CLAW FOSSIL alone.$"
