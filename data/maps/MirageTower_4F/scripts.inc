# 1 "data/maps/MirageTower_4F/scripts.pory"

# 2 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_MapScripts::
# 3 "data/maps/MirageTower_4F/scripts.pory"
	.byte 0
# 4 "data/maps/MirageTower_4F/scripts.pory"

# 5 "data/maps/MirageTower_4F/scripts.pory"

# 6 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_RootFossil::
# 7 "data/maps/MirageTower_4F/scripts.pory"
# 4 "data/maps/MirageTower_4F/scripts.pory"
# 8 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 9 "data/maps/MirageTower_4F/scripts.pory"
# 5 "data/maps/MirageTower_4F/scripts.pory"
# 10 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 11 "data/maps/MirageTower_4F/scripts.pory"
# 6 "data/maps/MirageTower_4F/scripts.pory"
# 12 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeRootFossil, MSGBOX_YESNO
# 13 "data/maps/MirageTower_4F/scripts.pory"
# 7 "data/maps/MirageTower_4F/scripts.pory"
# 14 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, NO
# 15 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq MirageTower_4F_EventScript_RootFossil_2
# 16 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_RootFossil_1:
# 17 "data/maps/MirageTower_4F/scripts.pory"
# 10 "data/maps/MirageTower_4F/scripts.pory"
# 18 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 19 "data/maps/MirageTower_4F/scripts.pory"
# 11 "data/maps/MirageTower_4F/scripts.pory"
# 20 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, FALSE
# 21 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq MirageTower_4F_EventScript_RootFossil_5
# 22 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_RootFossil_4:
# 23 "data/maps/MirageTower_4F/scripts.pory"
# 14 "data/maps/MirageTower_4F/scripts.pory"
# 24 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 25 "data/maps/MirageTower_4F/scripts.pory"
# 15 "data/maps/MirageTower_4F/scripts.pory"
# 26 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 27 "data/maps/MirageTower_4F/scripts.pory"
# 16 "data/maps/MirageTower_4F/scripts.pory"
# 28 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 29 "data/maps/MirageTower_4F/scripts.pory"
# 17 "data/maps/MirageTower_4F/scripts.pory"
# 30 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_ROOT_FOSSIL
# 31 "data/maps/MirageTower_4F/scripts.pory"
# 18 "data/maps/MirageTower_4F/scripts.pory"
# 32 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 33 "data/maps/MirageTower_4F/scripts.pory"
# 19 "data/maps/MirageTower_4F/scripts.pory"
# 34 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_ROOT_FOSSIL
# 35 "data/maps/MirageTower_4F/scripts.pory"
# 20 "data/maps/MirageTower_4F/scripts.pory"
# 36 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 37 "data/maps/MirageTower_4F/scripts.pory"
	end
# 38 "data/maps/MirageTower_4F/scripts.pory"

# 39 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_RootFossil_2:
# 40 "data/maps/MirageTower_4F/scripts.pory"
# 8 "data/maps/MirageTower_4F/scripts.pory"
# 41 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_LeaveRootFossil
# 42 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_RootFossil_1
# 43 "data/maps/MirageTower_4F/scripts.pory"

# 44 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_RootFossil_5:
# 45 "data/maps/MirageTower_4F/scripts.pory"
# 12 "data/maps/MirageTower_4F/scripts.pory"
# 46 "data/maps/MirageTower_4F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 47 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_RootFossil_4
# 48 "data/maps/MirageTower_4F/scripts.pory"

# 49 "data/maps/MirageTower_4F/scripts.pory"

# 50 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveRootFossil::
# 51 "data/maps/MirageTower_4F/scripts.pory"
# 25 "data/maps/MirageTower_4F/scripts.pory"
# 52 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftRootFossilAlone, MSGBOX_DEFAULT
# 53 "data/maps/MirageTower_4F/scripts.pory"
# 26 "data/maps/MirageTower_4F/scripts.pory"
# 54 "data/maps/MirageTower_4F/scripts.pory"
	release
# 55 "data/maps/MirageTower_4F/scripts.pory"
	end
# 56 "data/maps/MirageTower_4F/scripts.pory"

# 57 "data/maps/MirageTower_4F/scripts.pory"

# 58 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_ClawFossil::
# 59 "data/maps/MirageTower_4F/scripts.pory"
# 31 "data/maps/MirageTower_4F/scripts.pory"
# 60 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 61 "data/maps/MirageTower_4F/scripts.pory"
# 32 "data/maps/MirageTower_4F/scripts.pory"
# 62 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 63 "data/maps/MirageTower_4F/scripts.pory"
# 33 "data/maps/MirageTower_4F/scripts.pory"
# 64 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeClawFossil, MSGBOX_YESNO
# 65 "data/maps/MirageTower_4F/scripts.pory"
# 34 "data/maps/MirageTower_4F/scripts.pory"
# 66 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, NO
# 67 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq MirageTower_4F_EventScript_ClawFossil_2
# 68 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_ClawFossil_1:
# 69 "data/maps/MirageTower_4F/scripts.pory"
# 37 "data/maps/MirageTower_4F/scripts.pory"
# 70 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 71 "data/maps/MirageTower_4F/scripts.pory"
# 38 "data/maps/MirageTower_4F/scripts.pory"
# 72 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, FALSE
# 73 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq MirageTower_4F_EventScript_ClawFossil_5
# 74 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_ClawFossil_4:
# 75 "data/maps/MirageTower_4F/scripts.pory"
# 41 "data/maps/MirageTower_4F/scripts.pory"
# 76 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 77 "data/maps/MirageTower_4F/scripts.pory"
# 42 "data/maps/MirageTower_4F/scripts.pory"
# 78 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 79 "data/maps/MirageTower_4F/scripts.pory"
# 43 "data/maps/MirageTower_4F/scripts.pory"
# 80 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 81 "data/maps/MirageTower_4F/scripts.pory"
# 44 "data/maps/MirageTower_4F/scripts.pory"
# 82 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_CLAW_FOSSIL
# 83 "data/maps/MirageTower_4F/scripts.pory"
# 45 "data/maps/MirageTower_4F/scripts.pory"
# 84 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 85 "data/maps/MirageTower_4F/scripts.pory"
# 46 "data/maps/MirageTower_4F/scripts.pory"
# 86 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_CLAW_FOSSIL
# 87 "data/maps/MirageTower_4F/scripts.pory"
# 47 "data/maps/MirageTower_4F/scripts.pory"
# 88 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 89 "data/maps/MirageTower_4F/scripts.pory"
	end
# 90 "data/maps/MirageTower_4F/scripts.pory"

# 91 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_ClawFossil_2:
# 92 "data/maps/MirageTower_4F/scripts.pory"
# 35 "data/maps/MirageTower_4F/scripts.pory"
# 93 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_LeaveClawFossil
# 94 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_ClawFossil_1
# 95 "data/maps/MirageTower_4F/scripts.pory"

# 96 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_ClawFossil_5:
# 97 "data/maps/MirageTower_4F/scripts.pory"
# 39 "data/maps/MirageTower_4F/scripts.pory"
# 98 "data/maps/MirageTower_4F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 99 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_ClawFossil_4
# 100 "data/maps/MirageTower_4F/scripts.pory"

# 101 "data/maps/MirageTower_4F/scripts.pory"

# 102 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveClawFossil::
# 103 "data/maps/MirageTower_4F/scripts.pory"
# 52 "data/maps/MirageTower_4F/scripts.pory"
# 104 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveClawFossilAlone, MSGBOX_DEFAULT
# 105 "data/maps/MirageTower_4F/scripts.pory"
# 53 "data/maps/MirageTower_4F/scripts.pory"
# 106 "data/maps/MirageTower_4F/scripts.pory"
	release
# 107 "data/maps/MirageTower_4F/scripts.pory"
	end
# 108 "data/maps/MirageTower_4F/scripts.pory"

# 109 "data/maps/MirageTower_4F/scripts.pory"

# 110 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_CollapseMirageTower::
# 111 "data/maps/MirageTower_4F/scripts.pory"
# 58 "data/maps/MirageTower_4F/scripts.pory"
# 112 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 113 "data/maps/MirageTower_4F/scripts.pory"
# 59 "data/maps/MirageTower_4F/scripts.pory"
# 114 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 115 "data/maps/MirageTower_4F/scripts.pory"
# 60 "data/maps/MirageTower_4F/scripts.pory"
# 116 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 32
# 117 "data/maps/MirageTower_4F/scripts.pory"
# 61 "data/maps/MirageTower_4F/scripts.pory"
# 118 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2
# 119 "data/maps/MirageTower_4F/scripts.pory"
# 62 "data/maps/MirageTower_4F/scripts.pory"
# 120 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 121 "data/maps/MirageTower_4F/scripts.pory"
# 63 "data/maps/MirageTower_4F/scripts.pory"
# 122 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 123 "data/maps/MirageTower_4F/scripts.pory"
# 64 "data/maps/MirageTower_4F/scripts.pory"
# 124 "data/maps/MirageTower_4F/scripts.pory"
	special DoMirageTowerCeilingCrumble
# 125 "data/maps/MirageTower_4F/scripts.pory"
# 65 "data/maps/MirageTower_4F/scripts.pory"
# 126 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 127 "data/maps/MirageTower_4F/scripts.pory"
# 66 "data/maps/MirageTower_4F/scripts.pory"
# 128 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 1
# 129 "data/maps/MirageTower_4F/scripts.pory"
# 67 "data/maps/MirageTower_4F/scripts.pory"
# 130 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
# 131 "data/maps/MirageTower_4F/scripts.pory"
# 68 "data/maps/MirageTower_4F/scripts.pory"
# 132 "data/maps/MirageTower_4F/scripts.pory"
	warp MAP_ROUTE111, 19, 59
# 133 "data/maps/MirageTower_4F/scripts.pory"
# 69 "data/maps/MirageTower_4F/scripts.pory"
# 134 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 135 "data/maps/MirageTower_4F/scripts.pory"
# 70 "data/maps/MirageTower_4F/scripts.pory"
# 136 "data/maps/MirageTower_4F/scripts.pory"
	release
# 137 "data/maps/MirageTower_4F/scripts.pory"
	end
# 138 "data/maps/MirageTower_4F/scripts.pory"

# 139 "data/maps/MirageTower_4F/scripts.pory"

# 140 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeRootFossil::
# 141 "data/maps/MirageTower_4F/scripts.pory"
# 74 "data/maps/MirageTower_4F/scripts.pory"
# 142 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the ROOT FOSSIL.\p"
# 143 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 144 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 145 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the ROOT FOSSIL anyway?$"
# 146 "data/maps/MirageTower_4F/scripts.pory"

# 147 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeftRootFossilAlone::
# 148 "data/maps/MirageTower_4F/scripts.pory"
# 81 "data/maps/MirageTower_4F/scripts.pory"
# 149 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the ROOT FOSSIL alone.$"
# 150 "data/maps/MirageTower_4F/scripts.pory"

# 151 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeClawFossil::
# 152 "data/maps/MirageTower_4F/scripts.pory"
# 85 "data/maps/MirageTower_4F/scripts.pory"
# 153 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the CLAW FOSSIL.\p"
# 154 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 155 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 156 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the CLAW FOSSIL anyway?$"
# 157 "data/maps/MirageTower_4F/scripts.pory"

# 158 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveClawFossilAlone::
# 159 "data/maps/MirageTower_4F/scripts.pory"
# 92 "data/maps/MirageTower_4F/scripts.pory"
# 160 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the CLAW FOSSIL alone.$"
