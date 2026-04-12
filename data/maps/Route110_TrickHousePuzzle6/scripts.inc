Route110_TrickHousePuzzle6_MapScripts::
# 2 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle6_OnTransition
# 3 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHousePuzzle6_OnWarp
	.byte 0


Route110_TrickHousePuzzle6_OnTransition::
# 7 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	special RotatingGate_InitPuzzle
	end


# 11 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 12 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_OnWarp:
# 13 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, Route110_TrickHousePuzzle6_EventScript_InitPuzzle
# 14 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.2byte 0
# 15 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_5

Route110_TrickHousePuzzle6_EventScript_InitPuzzle::
# 20 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
	end


Route110_TrickHousePuzzle6_EventScript_Scroll::
# 25 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	lockall
# 26 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle6_EventScript_Scroll_2
Route110_TrickHousePuzzle6_EventScript_Scroll_1:
# 29 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle6_EventScript_Scroll_2:
# 27 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto Route110_TrickHousePuzzle6_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle6_EventScript_Scroll_1


Route110_TrickHousePuzzle6_EventScript_FoundScroll::
# 34 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 1
# 35 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end


Route110_TrickHousePuzzle6_EventScript_Sophia::
# 40 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_SOPHIA, Route110_TrickHousePuzzle6_Text_SophiaIntro, Route110_TrickHousePuzzle6_Text_SophiaDefeat
# 41 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_SophiaPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle6_EventScript_Benny::
# 46 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_BENNY, Route110_TrickHousePuzzle6_Text_BennyIntro, Route110_TrickHousePuzzle6_Text_BennyDefeat
# 47 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_BennyPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle6_EventScript_Sebastian::
# 52 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_SEBASTIAN, Route110_TrickHousePuzzle6_Text_SebastianIntro, Route110_TrickHousePuzzle6_Text_SebastianDefeat
# 53 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_SebastianPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened::
# 57 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is my life.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle6_Text_SophiaIntro::
# 65 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "When I heard there was a strange\n"
	.string "house, I had to check it out.$"

Route110_TrickHousePuzzle6_Text_SophiaDefeat::
# 70 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "I've discovered a tough TRAINER!$"

Route110_TrickHousePuzzle6_Text_SophiaPostBattle::
# 74 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "I'm sure having a good time checking\n"
	.string "this place out.\p"
	.string "It's a challenge I've found worth\n"
	.string "repeating!$"

Route110_TrickHousePuzzle6_Text_BennyIntro::
# 81 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Maybe I could get my BIRD POKéMON\n"
	.string "to fly over the wall…$"

Route110_TrickHousePuzzle6_Text_BennyDefeat::
# 86 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Gwaaah! I blew it!$"

Route110_TrickHousePuzzle6_Text_BennyPostBattle::
# 90 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Ehehehe… I guess I lost because\n"
	.string "I was trying to cheat.$"

Route110_TrickHousePuzzle6_Text_SebastianIntro::
# 95 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "I'm getting dizzy from these rotating\n"
	.string "doors…$"

Route110_TrickHousePuzzle6_Text_SebastianDefeat::
# 100 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Everything's spinning around and\n"
	.string "around. I can't take this anymore…$"

Route110_TrickHousePuzzle6_Text_SebastianPostBattle::
# 105 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "You don't seem to be affected at all.\n"
	.string "Or do you have your poker face on?$"
