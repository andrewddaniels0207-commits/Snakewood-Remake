# 1 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 2 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_MapScripts::
# 3 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 2 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 4 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_OnTransition
# 5 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.byte 0
# 6 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 7 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 8 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_OnTransition::
# 9 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 6 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 10 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
# 11 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 12 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 13 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 14 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother::
# 15 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 11 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 16 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	lock
# 17 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 12 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 18 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	faceplayer
# 19 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 13 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 20 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_DIG, Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_2
# 21 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_1:
# 22 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 16 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 23 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother, MSGBOX_DEFAULT
# 24 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 17 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 25 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	giveitem ITEM_TM_DIG
# 26 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 18 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 27 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 28 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_eq Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_5
# 29 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_4:
# 30 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 21 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 31 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_DIG
# 32 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 22 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 33 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
# 34 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 35 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 36 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_2:
# 37 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 14 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 38 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto Route114_FossilManiacsHouse_EventScript_ReceivedDig
# 39 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_1
# 40 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 41 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_5:
# 42 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 19 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 43 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 44 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_4
# 45 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 46 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 47 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_ReceivedDig::
# 48 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 27 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 49 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance, MSGBOX_DEFAULT
# 50 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 28 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 51 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
# 52 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 53 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 54 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 55 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_RockDisplay::
# 56 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 33 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 57 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_RocksFillDisplayCase, MSGBOX_SIGN
# 58 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 59 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 60 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 61 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_Bookshelf::
# 62 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 38 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 63 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_CrammedWithBooks, MSGBOX_SIGN
# 64 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 65 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 66 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 67 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother::
# 68 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 42 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 69 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "My big brother's the FOSSIL MANIAC…\n"
# 70 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "He's a nice guy who loves FOSSILS…\p"
# 71 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "He loves digging holes, too…\n"
# 72 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "He dug this hole by himself…\p"
# 73 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "You can have this, so you can DIG\n"
# 74 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "holes just like my big brother…$"
# 75 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 76 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance::
# 77 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 51 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 78 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "If you make a POKéMON DIG inside a\n"
# 79 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "cave, you're returned to the entrance…$"
# 80 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 81 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_RocksFillDisplayCase::
# 82 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 56 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 83 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Rocks in peculiar shapes fill\n"
# 84 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "the display case…$"
# 85 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 86 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_CrammedWithBooks::
# 87 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 61 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
# 88 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "THE COMPOSITION OF STRATA…\n"
# 89 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "HOW RAIN SHAPES THE LAND…\l"
# 90 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "STONES, SOIL, AND ROCK…\p"
# 91 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "It's crammed with books.$"
