# 1 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 2 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_MapScripts::
# 3 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 2 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 4 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OldLadysRestStop_OnTransition
# 5 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.byte 0
# 6 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 7 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 8 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_OnTransition::
# 9 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 6 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 10 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	setflag FLAG_LANDMARK_OLD_LADY_REST_SHOP
# 11 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 12 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 13 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 14 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_OldLady::
# 15 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 11 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 16 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	lock
# 17 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 12 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 18 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	faceplayer
# 19 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 13 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 20 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_RestUpHere, MSGBOX_YESNO
# 21 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 14 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 22 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	compare VAR_RESULT, YES
# 23 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq Route111_OldLadysRestStop_EventScript_OldLady_2
# 24 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_OldLady_1:
# 25 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 17 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 26 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	compare VAR_RESULT, NO
# 27 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq Route111_OldLadysRestStop_EventScript_OldLady_5
# 28 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_OldLady_4:
# 29 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 30 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 31 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_OldLady_2:
# 32 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 15 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 33 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_Rest
# 34 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_OldLady_1
# 35 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 36 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_OldLady_5:
# 37 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 18 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 38 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_DeclineRest
# 39 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_OldLady_4
# 40 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 41 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 42 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_Rest::
# 43 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 24 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 44 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
# 45 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 25 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 46 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	closemessage
# 47 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 26 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 48 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 49 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 27 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 50 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest, MSGBOX_YESNO
# 51 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 28 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 52 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	compare VAR_RESULT, YES
# 53 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq Route111_OldLadysRestStop_EventScript_Rest_2
# 54 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_Rest_1:
# 55 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 31 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 56 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	compare VAR_RESULT, NO
# 57 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq Route111_OldLadysRestStop_EventScript_Rest_5
# 58 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_Rest_4:
# 59 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 60 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 61 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_Rest_2:
# 62 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 29 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 63 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_Rest
# 64 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_Rest_1
# 65 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 66 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_Rest_5:
# 67 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 32 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 68 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_DeclineRest
# 69 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_Rest_4
# 70 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 71 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 72 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_DeclineRest::
# 73 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 38 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 74 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_DontNeedToBeShy, MSGBOX_DEFAULT
# 75 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 39 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 76 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	release
# 77 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 78 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 79 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 80 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_RestUpHere::
# 81 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 43 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 82 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Oh, dear, dear.\n"
# 83 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Aren't your POKéMON exhausted?\p"
# 84 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "If you'd like, rest up here.\n"
# 85 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "That's a fine idea! You should do that.$"
# 86 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 87 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_TakeYourTimeRestUp::
# 88 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 50 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 89 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "That's right.\n"
# 90 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Take your time and rest up!$"
# 91 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 92 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest::
# 93 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 55 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 94 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Oh, dear, dear.\n"
# 95 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Are your POKéMON still tired?\p"
# 96 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "You should take another rest here.\n"
# 97 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "That's a fine idea. You should do that.$"
# 98 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 99 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_DontNeedToBeShy::
# 100 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 62 "data/maps/Route111_OldLadysRestStop/scripts.pory"
# 101 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Is that so?\n"
# 102 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "You don't need to be shy about it.$"
