Route114_FossilManiacsHouse_MapScripts::
# 2 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_OnTransition
	.byte 0


Route114_FossilManiacsHouse_OnTransition::
# 6 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
	end


Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother::
# 11 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	lock
# 12 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_DIG, Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_2
Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_1:
# 16 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother, MSGBOX_DEFAULT
# 17 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	giveitem ITEM_TM_DIG
# 18 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_5
Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_4:
# 21 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_DIG
# 22 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
	end

Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_2:
# 14 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto Route114_FossilManiacsHouse_EventScript_ReceivedDig
	goto Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_1

Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_5:
# 19 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_4


Route114_FossilManiacsHouse_EventScript_ReceivedDig::
# 27 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance, MSGBOX_DEFAULT
# 28 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
	end


Route114_FossilManiacsHouse_EventScript_RockDisplay::
# 33 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_RocksFillDisplayCase, MSGBOX_SIGN
	end


Route114_FossilManiacsHouse_EventScript_Bookshelf::
# 38 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_CrammedWithBooks, MSGBOX_SIGN
	end


Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother::
# 42 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "My big brother's the FOSSIL MANIAC…\n"
	.string "He's a nice guy who loves FOSSILS…\p"
	.string "He loves digging holes, too…\n"
	.string "He dug this hole by himself…\p"
	.string "You can have this, so you can DIG\n"
	.string "holes just like my big brother…$"

Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance::
# 51 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "If you make a POKéMON DIG inside a\n"
	.string "cave, you're returned to the entrance…$"

Route114_FossilManiacsHouse_Text_RocksFillDisplayCase::
# 56 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Rocks in peculiar shapes fill\n"
	.string "the display case…$"

Route114_FossilManiacsHouse_Text_CrammedWithBooks::
# 61 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "THE COMPOSITION OF STRATA…\n"
	.string "HOW RAIN SHAPES THE LAND…\l"
	.string "STONES, SOIL, AND ROCK…\p"
	.string "It's crammed with books.$"
