# 1 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 2 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 4 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideEntranceRoom_OnTransition
# 5 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.byte 0
# 6 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 7 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 8 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_OnTransition::
# 9 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 6 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 10 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	special UpdateShoalTideFlag
# 11 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 7 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 12 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideEntranceRoom_OnTransition_2
# 13 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_OnTransition_1:
# 14 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 10 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 15 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_SetLowTide
# 16 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 17 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 18 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_OnTransition_2:
# 19 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 8 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 20 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_SetHighTide
# 21 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_OnTransition_1
# 22 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 23 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 24 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_SetHighTide::
# 25 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 14 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 26 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_HIGH_TIDE_ENTRANCE_ROOM
# 27 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 28 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 29 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 30 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_SetLowTide::
# 31 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 19 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 32 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM
# 33 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 34 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 35 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 36 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert::
# 37 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 24 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 38 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	lock
# 39 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 25 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 40 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	faceplayer
# 41 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 26 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 42 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	dotimebasedevents
# 43 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 27 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 44 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_ITEM, ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_2
# 45 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_1:
# 46 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 30 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 47 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 4
# 48 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 31 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 49 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 50 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_5
# 51 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_4:
# 52 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 34 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 53 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 4
# 54 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 35 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 55 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 56 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_8
# 57 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_7:
# 58 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 38 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 59 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell, MSGBOX_YESNO
# 60 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 39 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 61 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, NO
# 62 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_11
# 63 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_10:
# 64 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 42 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 65 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitemspace ITEM_SHELL_BELL
# 66 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 43 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 67 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 68 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_14
# 69 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_13:
# 70 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 46 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 71 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, 2
# 72 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_17
# 73 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_16:
# 74 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 49 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 75 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway, MSGBOX_DEFAULT
# 76 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 50 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 77 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	removeitem ITEM_SHOAL_SALT, 4
# 78 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 51 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 79 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	removeitem ITEM_SHOAL_SHELL, 4
# 80 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 52 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 81 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 82 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 53 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 83 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 84 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_20
# 85 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_19:
# 86 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 56 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 87 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell, MSGBOX_DEFAULT
# 88 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 57 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 89 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 90 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 58 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 91 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 92 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 93 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 94 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_2:
# 95 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 28 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 96 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	call ShoalCave_LowTideEntranceRoom_EventScript_ResetShoalItems
# 97 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_1
# 98 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 99 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_5:
# 100 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 32 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 101 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells
# 102 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_4
# 103 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 104 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_8:
# 105 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 36 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 106 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells
# 107 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_7
# 108 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 109 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_11:
# 110 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 40 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 111 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_DeclineShellBell
# 112 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_10
# 113 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 114 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_14:
# 115 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 44 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 116 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	call ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreed
# 117 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_13
# 118 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 119 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_17:
# 120 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 47 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 121 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_NoRoomForShellBell
# 122 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_16
# 123 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 124 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_20:
# 125 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 54 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 126 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 127 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_19
# 128 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 129 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 130 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreed::
# 131 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 63 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 132 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 5
# 133 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 64 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 134 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 135 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreed_2
# 136 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreed_1:
# 137 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 138 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 139 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreed_2:
# 140 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 65 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 141 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells
# 142 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreed_1
# 143 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 144 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 145 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells::
# 146 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 71 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 147 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 5
# 148 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 72 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 149 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 150 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells_2
# 151 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells_1:
# 152 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 153 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 154 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells_2:
# 155 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 73 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 156 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_NoSpaceWillBeFreed
# 157 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells_1
# 158 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 159 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 160 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NoSpaceWillBeFreed::
# 161 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 79 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 162 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setvar VAR_RESULT, 2
# 163 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 164 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 165 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 166 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NoRoomForShellBell::
# 167 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 84 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 168 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag, MSGBOX_DEFAULT
# 169 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 85 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 170 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 171 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 172 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 173 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 174 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells::
# 175 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 90 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 176 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT
# 177 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 91 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 178 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 179 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells_2
# 180 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells_1:
# 181 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 94 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 182 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL
# 183 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 95 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 184 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 185 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells_5
# 186 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells_4:
# 187 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 98 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 188 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere, MSGBOX_DEFAULT
# 189 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 99 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 190 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 191 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 192 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 193 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells_2:
# 194 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 92 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 195 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell
# 196 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells_1
# 197 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 198 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells_5:
# 199 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 96 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 200 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell
# 201 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells_4
# 202 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 203 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 204 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell::
# 205 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 104 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 206 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells, MSGBOX_DEFAULT
# 207 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 105 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 208 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 209 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 210 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 211 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 212 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_DeclineShellBell::
# 213 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 110 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 214 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell, MSGBOX_DEFAULT
# 215 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 111 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 216 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 217 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 218 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 219 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 220 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ResetShoalItems::
# 221 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 116 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 222 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_1
# 223 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 117 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 224 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_2
# 225 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 118 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 226 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_3
# 227 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 119 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 228 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_4
# 229 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 120 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 230 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_1
# 231 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 121 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 232 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_2
# 233 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 122 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 234 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_3
# 235 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 123 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 236 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_4
# 237 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 124 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
# 238 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_SYS_SHOAL_ITEM
# 239 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
