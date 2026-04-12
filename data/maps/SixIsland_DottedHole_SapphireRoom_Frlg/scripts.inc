# 1 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Frlg_MapScripts::
# 3 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 5 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 6 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire::
# 7 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 4 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 8 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	lock
# 9 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 5 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 10 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 6 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 12 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 13 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 7 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 15 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 8 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 16 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	message SixIsland_DottedHole_SapphireRoom_Text_FoundSapphire
# 17 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 9 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 18 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmessage
# 19 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 10 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 20 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitfanfare
# 21 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 11 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 22 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 23 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 12 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 24 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setobjectxyperm LOCALID_DOTTED_HOLE_THIEF, 5, 0
# 25 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 13 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 26 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	addobject LOCALID_DOTTED_HOLE_THIEF
# 27 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 28 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_FALL
# 29 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 15 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 30 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn
# 31 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 16 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 32 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 33 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 17 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 34 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_M_STRENGTH
# 35 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 18 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 36 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 37 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_2
# 38 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_1:
# 39 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 21 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 40 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 41 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_5
# 42 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_4:
# 43 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 24 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 44 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 45 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_8
# 46 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_7:
# 47 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 27 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 48 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 49 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_11
# 50 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_10:
# 51 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 30 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 52 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 53 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 31 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 54 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8005, 0
# 55 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 32 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 56 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8006, 12
# 57 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 33 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 58 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8007, 3
# 59 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 34 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 60 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	special ShakeScreen
# 61 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 35 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay 60
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 36 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 64 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 65 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_14
# 66 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_13:
# 67 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 39 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 68 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 69 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_17
# 70 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_16:
# 71 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 42 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 72 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 73 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_20
# 74 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_19:
# 75 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 45 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 76 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 77 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_23
# 78 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_22:
# 79 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 48 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 80 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 81 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 49 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 82 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_IWasRightInTailingYou
# 83 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 50 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 84 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 85 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 51 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 86 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 87 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_26
# 88 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_25:
# 89 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 54 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 90 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 91 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_29
# 92 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_28:
# 93 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 57 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 94 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 95 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_32
# 96 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_31:
# 97 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 60 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 98 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 99 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_35
# 100 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_34:
# 101 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 102 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	removeobject LOCALID_SAPPHIRE
# 103 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 64 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 104 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 105 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_38
# 106 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_37:
# 107 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 67 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 108 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 109 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_41
# 110 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_40:
# 111 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 70 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 112 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 113 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_44
# 114 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_43:
# 115 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 73 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 116 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 117 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_47
# 118 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_46:
# 119 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 76 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 120 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_SellToTeamRocketTellPassword
# 121 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 77 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 122 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 123 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 78 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 124 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 125 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_50
# 126 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_49:
# 127 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 81 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 128 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 129 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_53
# 130 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_52:
# 131 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 84 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 132 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 133 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_56
# 134 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_55:
# 135 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 87 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 136 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 137 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_59
# 138 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_58:
# 139 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 90 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 140 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_EXIT
# 141 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 91 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 142 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay 35
# 143 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 92 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 144 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	removeobject LOCALID_DOTTED_HOLE_THIEF
# 145 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 93 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 146 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setflag FLAG_LEARNED_YES_NAH_CHANSEY
# 147 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 94 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 148 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	release
# 149 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	end
# 150 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 151 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_2:
# 152 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 19 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 153 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
# 154 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_1
# 155 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 156 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_5:
# 157 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 22 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 158 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
# 159 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_4
# 160 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 161 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_8:
# 162 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 25 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 163 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
# 164 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_7
# 165 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 166 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_11:
# 167 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 28 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 168 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
# 169 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_10
# 170 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 171 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_14:
# 172 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 37 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 173 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth
# 174 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_13
# 175 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 176 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_17:
# 177 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 40 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 178 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth
# 179 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_16
# 180 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 181 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_20:
# 182 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 43 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 183 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast
# 184 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_19
# 185 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 186 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_23:
# 187 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 46 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 188 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest
# 189 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_22
# 190 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 191 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_26:
# 192 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 52 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 193 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth
# 194 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_25
# 195 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 196 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_29:
# 197 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 55 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 198 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth
# 199 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_28
# 200 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 201 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_32:
# 202 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 58 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 203 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast
# 204 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_31
# 205 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 206 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_35:
# 207 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 61 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 208 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest
# 209 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_34
# 210 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 211 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_38:
# 212 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 65 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 213 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
# 214 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_37
# 215 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 216 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_41:
# 217 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 68 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 218 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
# 219 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_40
# 220 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 221 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_44:
# 222 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 71 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 223 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
# 224 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_43
# 225 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 226 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_47:
# 227 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 74 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 228 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
# 229 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_46
# 230 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 231 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_50:
# 232 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 79 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 233 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth
# 234 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_49
# 235 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 236 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_53:
# 237 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 82 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 238 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth
# 239 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_52
# 240 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 241 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_56:
# 242 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 85 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 243 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast
# 244 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_55
# 245 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 246 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_59:
# 247 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 88 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 248 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest
# 249 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_58
# 250 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 251 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 252 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2::
# 253 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 99 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 254 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 255 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 100 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 256 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 257 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 258 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 259 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 260 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2::
# 261 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 105 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 262 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 263 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 106 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 264 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 265 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 266 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 267 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 268 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft::
# 269 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 111 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 270 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 271 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 112 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 272 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 273 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 274 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 275 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 276 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown::
# 277 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 117 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 278 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 279 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 118 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 280 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 281 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 282 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 283 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 284 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth::
# 285 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 123 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 286 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 287 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 124 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 288 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 289 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 290 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 291 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 292 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth::
# 293 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 129 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 294 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 295 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 130 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 296 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 297 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 298 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 299 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 300 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast::
# 301 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 135 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 302 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 303 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 136 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 304 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 305 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 306 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 307 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 308 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest::
# 309 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 141 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 310 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 311 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 142 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 312 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 313 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 314 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 315 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 316 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth::
# 317 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 147 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 318 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 319 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 148 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 320 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 321 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 149 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 322 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 323 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 150 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 324 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 325 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 326 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 327 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 328 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth::
# 329 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 155 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 330 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 331 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 156 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 332 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 333 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 157 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 334 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 335 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 158 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 336 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 337 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 338 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 339 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 340 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast::
# 341 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 163 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 342 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 343 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 164 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 344 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 345 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 165 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 346 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 347 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 166 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 348 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 349 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 350 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 351 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 352 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest::
# 353 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 171 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 354 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 355 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 172 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 356 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 357 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 173 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 358 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 359 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 174 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 360 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 361 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 362 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 363 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 364 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth::
# 365 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 179 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 366 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 367 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 180 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 368 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth
# 369 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 181 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 370 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 371 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 372 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 373 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 374 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth::
# 375 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 186 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 376 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 377 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 187 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 378 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth
# 379 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 188 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 380 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 381 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 382 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 383 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 384 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast::
# 385 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 193 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 386 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 387 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 194 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 388 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 389 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 195 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 390 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 391 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 392 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 393 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 394 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest::
# 395 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 200 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 396 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 397 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 201 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 398 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 399 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 202 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 400 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 401 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 402 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 403 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 404 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 206 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 405 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft:
# 406 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 207 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 407 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_up
# 408 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 208 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 409 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_up
# 410 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 209 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 411 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_in_place_faster_right
# 412 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 210 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 413 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 414 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 415 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 213 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 416 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow:
# 417 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 214 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 418 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_right
# 419 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 215 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 420 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_right
# 421 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 216 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 422 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_in_place_faster_up
# 423 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 217 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 424 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 425 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 426 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 220 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 427 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft:
# 428 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 221 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 429 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_right
# 430 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 222 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 431 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 432 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 433 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 225 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 434 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow:
# 435 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 226 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 436 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_up
# 437 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 227 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 438 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 439 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 440 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 230 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 441 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth:
# 442 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 231 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 443 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_up
# 444 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 232 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 445 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 446 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 233 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 447 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 448 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 234 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 449 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 450 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 235 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 451 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_down
# 452 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 236 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 453 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 454 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 237 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 455 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 456 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 238 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 457 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 458 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 459 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 241 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 460 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth:
# 461 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 242 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 462 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_down
# 463 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 243 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 464 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 465 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 244 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 466 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 467 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 245 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 468 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 469 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 246 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 470 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_up
# 471 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 247 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 472 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 473 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 248 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 474 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 475 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 249 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 476 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 477 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 478 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 252 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 479 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest:
# 480 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 253 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 481 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 482 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 254 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 483 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 484 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 255 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 485 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 486 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 256 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 487 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 488 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 257 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 489 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_up
# 490 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 258 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 491 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 492 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 493 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn::
# 494 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 262 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 495 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	face_down
# 496 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 263 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 497 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	disable_anim
# 498 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 264 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 499 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 500 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 265 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 501 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 502 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 266 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 503 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 504 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 267 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 505 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 506 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 268 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 507 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 508 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 269 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 509 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 510 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 270 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 511 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 512 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 271 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 513 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 514 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 272 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 515 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 516 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 273 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 517 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	restore_anim
# 518 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 274 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 519 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 520 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 521 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 522 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 523 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 277 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 524 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit:
# 525 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 278 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 526 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay_16
# 527 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 279 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 528 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_in_place_faster_right
# 529 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 280 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 530 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 531 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 532 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_BrailleMessage::
# 533 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 284 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 534 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	lockall
# 535 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 285 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 536 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8005, 130
# 537 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 286 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 538 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_LetTheTwo
# 539 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 287 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 540 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Glittering
# 541 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 288 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 542 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Stones
# 543 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 289 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 544 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_OneInRed
# 545 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 290 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 546 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_OneInBlue
# 547 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 291 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 548 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ConnectThe
# 549 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 292 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 550 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Past
# 551 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 293 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 552 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_TwoFriends
# 553 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 294 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 554 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Sharing
# 555 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 295 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 556 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_PowerOpen
# 557 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 296 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 558 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_AWindowTo
# 559 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 297 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 560 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ANewWorld
# 561 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 298 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 562 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ThatGlows
# 563 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 299 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 564 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_TheNext
# 565 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 300 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 566 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_WorldWaits
# 567 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 301 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 568 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemsgbox Braille_Text_ForYou
# 569 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 302 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 570 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	releaseall
# 571 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	end
# 572 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 573 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 574 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_FoundSapphire::
# 575 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 306 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 576 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "{PLAYER} found a SAPPHIRE!$"
# 577 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 578 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_IWasRightInTailingYou::
# 579 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 310 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 580 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "Fufu… Fufufufu…\n"
# 581 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I guessed right.\p"
# 582 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I was right in tailing you!$"
# 583 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 584 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_SellToTeamRocketTellPassword::
# 585 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 316 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
# 586 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I knew that there was a SAPPHIRE\n"
# 587 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "here, so it belongs to me!\p"
# 588 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I'll sell it to TEAM ROCKET for\n"
# 589 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "serious money.\p"
# 590 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "…D-don't glare at me like that!\p"
# 591 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "If you want it back, why don't you\n"
# 592 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "go get it after I sell it?\p"
# 593 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I'll even tell you one of the\n"
# 594 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "passwords to TEAM ROCKET's\l"
# 595 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "WAREHOUSE.\p"
# 596 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "The WAREHOUSE password I know is\n"
# 597 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "“Yes, nah, CHANSEY.”\p"
# 598 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I'm done.\n"
# 599 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "Don't think badly of me!$"
