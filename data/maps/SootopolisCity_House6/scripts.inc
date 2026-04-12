# 1 "data/maps/SootopolisCity_House6/scripts.pory"

# 2 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_MapScripts::
# 3 "data/maps/SootopolisCity_House6/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House6/scripts.pory"

# 5 "data/maps/SootopolisCity_House6/scripts.pory"

# 6 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_EventScript_Woman::
# 7 "data/maps/SootopolisCity_House6/scripts.pory"
# 4 "data/maps/SootopolisCity_House6/scripts.pory"
# 8 "data/maps/SootopolisCity_House6/scripts.pory"
	lock
# 9 "data/maps/SootopolisCity_House6/scripts.pory"
# 5 "data/maps/SootopolisCity_House6/scripts.pory"
# 10 "data/maps/SootopolisCity_House6/scripts.pory"
	faceplayer
# 11 "data/maps/SootopolisCity_House6/scripts.pory"
# 6 "data/maps/SootopolisCity_House6/scripts.pory"
# 12 "data/maps/SootopolisCity_House6/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_DOLL, SootopolisCity_House6_EventScript_Woman_2
# 13 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_EventScript_Woman_1:
# 14 "data/maps/SootopolisCity_House6/scripts.pory"
# 9 "data/maps/SootopolisCity_House6/scripts.pory"
# 15 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll, MSGBOX_YESNO
# 16 "data/maps/SootopolisCity_House6/scripts.pory"
# 10 "data/maps/SootopolisCity_House6/scripts.pory"
# 17 "data/maps/SootopolisCity_House6/scripts.pory"
	compare VAR_RESULT, NO
# 18 "data/maps/SootopolisCity_House6/scripts.pory"
	goto_if_eq SootopolisCity_House6_EventScript_Woman_5
# 19 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_EventScript_Woman_4:
# 20 "data/maps/SootopolisCity_House6/scripts.pory"
# 13 "data/maps/SootopolisCity_House6/scripts.pory"
# 21 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox SootopolisCity_House6_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
# 22 "data/maps/SootopolisCity_House6/scripts.pory"
# 14 "data/maps/SootopolisCity_House6/scripts.pory"
# 23 "data/maps/SootopolisCity_House6/scripts.pory"
	givedecoration DECOR_WAILMER_DOLL
# 24 "data/maps/SootopolisCity_House6/scripts.pory"
# 15 "data/maps/SootopolisCity_House6/scripts.pory"
# 25 "data/maps/SootopolisCity_House6/scripts.pory"
	compare VAR_RESULT, FALSE
# 26 "data/maps/SootopolisCity_House6/scripts.pory"
	goto_if_eq SootopolisCity_House6_EventScript_Woman_8
# 27 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_EventScript_Woman_7:
# 28 "data/maps/SootopolisCity_House6/scripts.pory"
# 18 "data/maps/SootopolisCity_House6/scripts.pory"
# 29 "data/maps/SootopolisCity_House6/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_DOLL
# 30 "data/maps/SootopolisCity_House6/scripts.pory"
# 19 "data/maps/SootopolisCity_House6/scripts.pory"
# 31 "data/maps/SootopolisCity_House6/scripts.pory"
	release
# 32 "data/maps/SootopolisCity_House6/scripts.pory"
	end
# 33 "data/maps/SootopolisCity_House6/scripts.pory"

# 34 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_EventScript_Woman_2:
# 35 "data/maps/SootopolisCity_House6/scripts.pory"
# 7 "data/maps/SootopolisCity_House6/scripts.pory"
# 36 "data/maps/SootopolisCity_House6/scripts.pory"
	goto SootopolisCity_House6_EventScript_ReceivedWailmerDoll
# 37 "data/maps/SootopolisCity_House6/scripts.pory"
	goto SootopolisCity_House6_EventScript_Woman_1
# 38 "data/maps/SootopolisCity_House6/scripts.pory"

# 39 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_EventScript_Woman_5:
# 40 "data/maps/SootopolisCity_House6/scripts.pory"
# 11 "data/maps/SootopolisCity_House6/scripts.pory"
# 41 "data/maps/SootopolisCity_House6/scripts.pory"
	call SootopolisCity_House6_EventScript_DeclineWailmerDoll
# 42 "data/maps/SootopolisCity_House6/scripts.pory"
	goto SootopolisCity_House6_EventScript_Woman_4
# 43 "data/maps/SootopolisCity_House6/scripts.pory"

# 44 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_EventScript_Woman_8:
# 45 "data/maps/SootopolisCity_House6/scripts.pory"
# 16 "data/maps/SootopolisCity_House6/scripts.pory"
# 46 "data/maps/SootopolisCity_House6/scripts.pory"
	goto SootopolisCity_House6_EventScript_NoRoomForWailmerDoll
# 47 "data/maps/SootopolisCity_House6/scripts.pory"
	goto SootopolisCity_House6_EventScript_Woman_7
# 48 "data/maps/SootopolisCity_House6/scripts.pory"

# 49 "data/maps/SootopolisCity_House6/scripts.pory"

# 50 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_EventScript_DeclineWailmerDoll::
# 51 "data/maps/SootopolisCity_House6/scripts.pory"
# 24 "data/maps/SootopolisCity_House6/scripts.pory"
# 52 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox SootopolisCity_House6_Text_DontWantThisDoll, MSGBOX_DEFAULT
# 53 "data/maps/SootopolisCity_House6/scripts.pory"
# 25 "data/maps/SootopolisCity_House6/scripts.pory"
# 54 "data/maps/SootopolisCity_House6/scripts.pory"
	release
# 55 "data/maps/SootopolisCity_House6/scripts.pory"
	end
# 56 "data/maps/SootopolisCity_House6/scripts.pory"

# 57 "data/maps/SootopolisCity_House6/scripts.pory"

# 58 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_EventScript_ReceivedWailmerDoll::
# 59 "data/maps/SootopolisCity_House6/scripts.pory"
# 30 "data/maps/SootopolisCity_House6/scripts.pory"
# 60 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox SootopolisCity_House6_Text_LovePlushDolls, MSGBOX_DEFAULT
# 61 "data/maps/SootopolisCity_House6/scripts.pory"
# 31 "data/maps/SootopolisCity_House6/scripts.pory"
# 62 "data/maps/SootopolisCity_House6/scripts.pory"
	release
# 63 "data/maps/SootopolisCity_House6/scripts.pory"
	end
# 64 "data/maps/SootopolisCity_House6/scripts.pory"

# 65 "data/maps/SootopolisCity_House6/scripts.pory"

# 66 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_EventScript_NoRoomForWailmerDoll::
# 67 "data/maps/SootopolisCity_House6/scripts.pory"
# 36 "data/maps/SootopolisCity_House6/scripts.pory"
# 68 "data/maps/SootopolisCity_House6/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_WAILMER_DOLL
# 69 "data/maps/SootopolisCity_House6/scripts.pory"
# 37 "data/maps/SootopolisCity_House6/scripts.pory"
# 70 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
# 71 "data/maps/SootopolisCity_House6/scripts.pory"
# 38 "data/maps/SootopolisCity_House6/scripts.pory"
# 72 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox SootopolisCity_House6_Text_IllHoldItForYou, MSGBOX_DEFAULT
# 73 "data/maps/SootopolisCity_House6/scripts.pory"
# 39 "data/maps/SootopolisCity_House6/scripts.pory"
# 74 "data/maps/SootopolisCity_House6/scripts.pory"
	release
# 75 "data/maps/SootopolisCity_House6/scripts.pory"
	end
# 76 "data/maps/SootopolisCity_House6/scripts.pory"

# 77 "data/maps/SootopolisCity_House6/scripts.pory"

# 78 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll::
# 79 "data/maps/SootopolisCity_House6/scripts.pory"
# 43 "data/maps/SootopolisCity_House6/scripts.pory"
# 80 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "Hello! You're our first guest in\n"
# 81 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "a good while.\p"
# 82 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "You've brightened up my day, so I'll\n"
# 83 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "give you a big WAILMER DOLL.$"
# 84 "data/maps/SootopolisCity_House6/scripts.pory"

# 85 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_Text_TakeGoodCareOfIt::
# 86 "data/maps/SootopolisCity_House6/scripts.pory"
# 50 "data/maps/SootopolisCity_House6/scripts.pory"
# 87 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "Take good care of it!$"
# 88 "data/maps/SootopolisCity_House6/scripts.pory"

# 89 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_Text_IllHoldItForYou::
# 90 "data/maps/SootopolisCity_House6/scripts.pory"
# 54 "data/maps/SootopolisCity_House6/scripts.pory"
# 91 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "Oh, you want it, but not right now?\n"
# 92 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "Okay, then I'll hold it for you.$"
# 93 "data/maps/SootopolisCity_House6/scripts.pory"

# 94 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_Text_DontWantThisDoll::
# 95 "data/maps/SootopolisCity_House6/scripts.pory"
# 59 "data/maps/SootopolisCity_House6/scripts.pory"
# 96 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "Are you sure?\n"
# 97 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "You don't want this DOLL?$"
# 98 "data/maps/SootopolisCity_House6/scripts.pory"

# 99 "data/maps/SootopolisCity_House6/scripts.pory"
SootopolisCity_House6_Text_LovePlushDolls::
# 100 "data/maps/SootopolisCity_House6/scripts.pory"
# 64 "data/maps/SootopolisCity_House6/scripts.pory"
# 101 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "I love plush DOLLS!$"
