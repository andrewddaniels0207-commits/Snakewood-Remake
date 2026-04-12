# 1 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 2 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts::
# 3 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven::
# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_2
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_1:
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_5
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_4:
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_8
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_7:
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_11
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_10:
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_14
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_13:
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_GRANITE_CAVE_STEVEN
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_2:
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_BagFull
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto GraniteCave_StevensRoom_EventScript_Steven_1
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_5:
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto GraniteCave_StevensRoom_EventScript_Steven_4
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_8:
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto GraniteCave_StevensRoom_EventScript_Steven_7
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_11:
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto GraniteCave_StevensRoom_EventScript_Steven_10
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_14:
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto GraniteCave_StevensRoom_EventScript_Steven_13
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 136 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 137 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 140 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 144 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 145 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 146 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 147 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 148 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 149 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 150 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 151 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 152 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 153 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 154 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 155 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 156 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 157 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 158 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 159 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 160 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 161 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 162 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 163 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 164 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 165 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 166 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 167 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 168 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 169 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 170 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 171 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 172 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 173 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 174 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 175 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 176 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 177 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 178 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 179 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 180 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 182 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 183 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 184 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe::
# 185 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 186 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is STEVEN.\p"
# 187 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'm interested in rare stones,\n"
# 188 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "so I travel here and there.\p"
# 189 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh?\n"
# 190 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "A LETTER for me?$"
# 191 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 192 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ThankYouTakeThis::
# 193 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 194 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "STEVEN: Okay, thank you.\p"
# 195 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You went through all this trouble to\n"
# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "deliver that. I need to thank you.\p"
# 197 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Let me see…\n"
# 198 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'll give you this TM.\p"
# 199 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "It contains my favorite move,\n"
# 200 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "STEEL WING.$"
# 201 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 202 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister::
# 203 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 204 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "STEVEN: Your POKéMON appear quite\n"
# 205 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "capable.\p"
# 206 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "If you keep training, you could even\n"
# 207 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "become the CHAMPION of the POKéMON\l"
# 208 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "LEAGUE one day. That's what I think.\p"
# 209 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I know, since we've gotten to know each\n"
# 210 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "other, let's register one another in\l"
# 211 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "our POKéNAVS.\p"
# 212 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … … … … …$"
# 213 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 214 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven::
# 215 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 216 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered STEVEN\n"
# 217 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "in the POKéNAV.$"
# 218 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 219 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_IveGotToHurryAlong::
# 220 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 221 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
# 222 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 223 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_OhBagIsFull::
# 224 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
# 225 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your BAG is full…\n"
# 226 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "That's too bad, then.$"
