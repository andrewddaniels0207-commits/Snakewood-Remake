SixIsland_DottedHole_SapphireRoom_Frlg_MapScripts::
	.byte 0


SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire::
# 4 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	lock
# 5 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 7 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 8 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	message SixIsland_DottedHole_SapphireRoom_Text_FoundSapphire
# 9 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmessage
# 10 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitfanfare
# 11 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 12 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setobjectxyperm LOCALID_DOTTED_HOLE_THIEF, 5, 0
# 13 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	addobject LOCALID_DOTTED_HOLE_THIEF
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_FALL
# 15 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn
# 16 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 17 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_M_STRENGTH
# 18 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_2
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_1:
# 21 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_5
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_4:
# 24 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_8
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_7:
# 27 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_11
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_10:
# 30 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 31 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8005, 0
# 32 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8006, 12
# 33 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8007, 3
# 34 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	special ShakeScreen
# 35 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay 60
# 36 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_14
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_13:
# 39 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_17
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_16:
# 42 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_20
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_19:
# 45 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_23
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_22:
# 48 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 49 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_IWasRightInTailingYou
# 50 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 51 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_26
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_25:
# 54 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_29
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_28:
# 57 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_32
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_31:
# 60 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_35
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_34:
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	removeobject LOCALID_SAPPHIRE
# 64 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_38
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_37:
# 67 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_41
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_40:
# 70 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_44
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_43:
# 73 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_47
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_46:
# 76 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_SellToTeamRocketTellPassword
# 77 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 78 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_50
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_49:
# 81 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_53
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_52:
# 84 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_56
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_55:
# 87 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_59
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_58:
# 90 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_EXIT
# 91 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay 35
# 92 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	removeobject LOCALID_DOTTED_HOLE_THIEF
# 93 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setflag FLAG_LEARNED_YES_NAH_CHANSEY
# 94 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	release
	end

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_2:
# 19 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_1

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_5:
# 22 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_4

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_8:
# 25 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_7

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_11:
# 28 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_10

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_14:
# 37 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_13

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_17:
# 40 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_16

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_20:
# 43 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_19

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_23:
# 46 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_22

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_26:
# 52 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_25

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_29:
# 55 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_28

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_32:
# 58 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_31

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_35:
# 61 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_34

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_38:
# 65 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_37

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_41:
# 68 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_40

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_44:
# 71 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_43

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_47:
# 74 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_46

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_50:
# 79 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_49

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_53:
# 82 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_52

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_56:
# 85 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_55

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_59:
# 88 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_58


SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2::
# 99 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 100 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2::
# 105 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 106 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft::
# 111 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 112 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown::
# 117 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 118 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth::
# 123 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 124 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth::
# 129 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 130 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast::
# 135 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 136 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest::
# 141 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 142 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth::
# 147 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 148 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 149 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 150 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth::
# 155 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 156 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 157 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 158 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast::
# 163 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 164 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 165 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 166 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest::
# 171 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 172 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 173 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 174 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth::
# 179 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 180 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth
# 181 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth::
# 186 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 187 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth
# 188 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast::
# 193 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 194 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 195 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest::
# 200 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 201 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 202 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
	return


# 206 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft:
# 207 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_up
# 208 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_up
# 209 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_in_place_faster_right
# 210 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end

# 213 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow:
# 214 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_right
# 215 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_right
# 216 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_in_place_faster_up
# 217 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end

# 220 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft:
# 221 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_right
# 222 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end

# 225 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow:
# 226 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_up
# 227 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end

# 230 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth:
# 231 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_up
# 232 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 233 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 234 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 235 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_down
# 236 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 237 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 238 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end

# 241 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth:
# 242 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_down
# 243 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 244 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 245 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 246 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_up
# 247 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 248 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 249 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end

# 252 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest:
# 253 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 254 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 255 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 256 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 257 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_up
# 258 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end

SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn::
# 262 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	face_down
# 263 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	disable_anim
# 264 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 265 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 266 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 267 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 268 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 269 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 270 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 271 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 272 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 273 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	restore_anim
# 274 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
	return


# 277 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit:
# 278 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay_16
# 279 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_in_place_faster_right
# 280 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end

SixIsland_DottedHole_SapphireRoom_EventScript_BrailleMessage::
# 284 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	lockall
# 285 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8005, 130
# 286 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_LetTheTwo
# 287 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Glittering
# 288 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Stones
# 289 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_OneInRed
# 290 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_OneInBlue
# 291 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ConnectThe
# 292 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Past
# 293 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_TwoFriends
# 294 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Sharing
# 295 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_PowerOpen
# 296 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_AWindowTo
# 297 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ANewWorld
# 298 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ThatGlows
# 299 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_TheNext
# 300 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_WorldWaits
# 301 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemsgbox Braille_Text_ForYou
# 302 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	releaseall
	end


SixIsland_DottedHole_SapphireRoom_Text_FoundSapphire::
# 306 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "{PLAYER} found a SAPPHIRE!$"

SixIsland_DottedHole_SapphireRoom_Text_IWasRightInTailingYou::
# 310 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "Fufu… Fufufufu…\n"
	.string "I guessed right.\p"
	.string "I was right in tailing you!$"

SixIsland_DottedHole_SapphireRoom_Text_SellToTeamRocketTellPassword::
# 316 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I knew that there was a SAPPHIRE\n"
	.string "here, so it belongs to me!\p"
	.string "I'll sell it to TEAM ROCKET for\n"
	.string "serious money.\p"
	.string "…D-don't glare at me like that!\p"
	.string "If you want it back, why don't you\n"
	.string "go get it after I sell it?\p"
	.string "I'll even tell you one of the\n"
	.string "passwords to TEAM ROCKET's\l"
	.string "WAREHOUSE.\p"
	.string "The WAREHOUSE password I know is\n"
	.string "“Yes, nah, CHANSEY.”\p"
	.string "I'm done.\n"
	.string "Don't think badly of me!$"
