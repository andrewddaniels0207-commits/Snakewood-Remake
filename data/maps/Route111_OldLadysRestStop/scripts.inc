Route111_OldLadysRestStop_MapScripts::
# 2 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OldLadysRestStop_OnTransition
	.byte 0


Route111_OldLadysRestStop_OnTransition::
# 6 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	setflag FLAG_LANDMARK_OLD_LADY_REST_SHOP
	end


Route111_OldLadysRestStop_EventScript_OldLady::
# 11 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	lock
# 12 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	faceplayer
# 13 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_RestUpHere, MSGBOX_YESNO
# 14 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route111_OldLadysRestStop_EventScript_OldLady_2
Route111_OldLadysRestStop_EventScript_OldLady_1:
# 17 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route111_OldLadysRestStop_EventScript_OldLady_5
Route111_OldLadysRestStop_EventScript_OldLady_4:
	end

Route111_OldLadysRestStop_EventScript_OldLady_2:
# 15 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_Rest
	goto Route111_OldLadysRestStop_EventScript_OldLady_1

Route111_OldLadysRestStop_EventScript_OldLady_5:
# 18 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_DeclineRest
	goto Route111_OldLadysRestStop_EventScript_OldLady_4


Route111_OldLadysRestStop_EventScript_Rest::
# 24 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
# 25 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	closemessage
# 26 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 27 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest, MSGBOX_YESNO
# 28 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route111_OldLadysRestStop_EventScript_Rest_2
Route111_OldLadysRestStop_EventScript_Rest_1:
# 31 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route111_OldLadysRestStop_EventScript_Rest_5
Route111_OldLadysRestStop_EventScript_Rest_4:
	end

Route111_OldLadysRestStop_EventScript_Rest_2:
# 29 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_Rest
	goto Route111_OldLadysRestStop_EventScript_Rest_1

Route111_OldLadysRestStop_EventScript_Rest_5:
# 32 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_DeclineRest
	goto Route111_OldLadysRestStop_EventScript_Rest_4


Route111_OldLadysRestStop_EventScript_DeclineRest::
# 38 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_DontNeedToBeShy, MSGBOX_DEFAULT
# 39 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	release
	end


Route111_OldLadysRestStop_Text_RestUpHere::
# 43 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Oh, dear, dear.\n"
	.string "Aren't your POKéMON exhausted?\p"
	.string "If you'd like, rest up here.\n"
	.string "That's a fine idea! You should do that.$"

Route111_OldLadysRestStop_Text_TakeYourTimeRestUp::
# 50 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "That's right.\n"
	.string "Take your time and rest up!$"

Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest::
# 55 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Oh, dear, dear.\n"
	.string "Are your POKéMON still tired?\p"
	.string "You should take another rest here.\n"
	.string "That's a fine idea. You should do that.$"

Route111_OldLadysRestStop_Text_DontNeedToBeShy::
# 62 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Is that so?\n"
	.string "You don't need to be shy about it.$"
