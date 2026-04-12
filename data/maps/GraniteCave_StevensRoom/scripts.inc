GraniteCave_StevensRoom_MapScripts::
	.byte 0


GraniteCave_StevensRoom_EventScript_Steven::
# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_2
GraniteCave_StevensRoom_EventScript_Steven_1:
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_5
GraniteCave_StevensRoom_EventScript_Steven_4:
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_8
GraniteCave_StevensRoom_EventScript_Steven_7:
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_11
GraniteCave_StevensRoom_EventScript_Steven_10:
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_14
GraniteCave_StevensRoom_EventScript_Steven_13:
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_GRANITE_CAVE_STEVEN
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
	end

GraniteCave_StevensRoom_EventScript_Steven_2:
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_BagFull
	goto GraniteCave_StevensRoom_EventScript_Steven_1

GraniteCave_StevensRoom_EventScript_Steven_5:
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitNorth
	goto GraniteCave_StevensRoom_EventScript_Steven_4

GraniteCave_StevensRoom_EventScript_Steven_8:
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitSouth
	goto GraniteCave_StevensRoom_EventScript_Steven_7

GraniteCave_StevensRoom_EventScript_Steven_11:
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	goto GraniteCave_StevensRoom_EventScript_Steven_10

GraniteCave_StevensRoom_EventScript_Steven_14:
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	goto GraniteCave_StevensRoom_EventScript_Steven_13


GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
	return


GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
	return


GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
	return


GraniteCave_StevensRoom_EventScript_BagFull::
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
	return


# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end

# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end

# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end

GraniteCave_StevensRoom_Text_ImStevenLetterForMe::
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is STEVEN.\p"
	.string "I'm interested in rare stones,\n"
	.string "so I travel here and there.\p"
	.string "Oh?\n"
	.string "A LETTER for me?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis::
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "STEVEN: Okay, thank you.\p"
	.string "You went through all this trouble to\n"
	.string "deliver that. I need to thank you.\p"
	.string "Let me see…\n"
	.string "I'll give you this TM.\p"
	.string "It contains my favorite move,\n"
	.string "STEEL WING.$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister::
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "STEVEN: Your POKéMON appear quite\n"
	.string "capable.\p"
	.string "If you keep training, you could even\n"
	.string "become the CHAMPION of the POKéMON\l"
	.string "LEAGUE one day. That's what I think.\p"
	.string "I know, since we've gotten to know each\n"
	.string "other, let's register one another in\l"
	.string "our POKéNAVS.\p"
	.string "… … … … … …$"

GraniteCave_StevensRoom_Text_RegisteredSteven::
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered STEVEN\n"
	.string "in the POKéNAV.$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong::
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"

GraniteCave_StevensRoom_Text_OhBagIsFull::
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your BAG is full…\n"
	.string "That's too bad, then.$"
