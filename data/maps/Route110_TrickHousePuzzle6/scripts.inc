# 1 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 2 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 4 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle6_OnTransition
# 5 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 3 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 6 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHousePuzzle6_OnWarp
# 7 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.byte 0
# 8 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 9 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 10 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_OnTransition::
# 11 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 7 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 12 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	special RotatingGate_InitPuzzle
# 13 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 14 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 15 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 11 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 17 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 18 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 12 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 19 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_OnWarp:
# 20 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 13 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 21 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, Route110_TrickHousePuzzle6_EventScript_InitPuzzle
# 22 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 14 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 23 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.2byte 0
# 24 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 15 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 25 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 26 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 16 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 27 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_5
# 28 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 29 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_InitPuzzle::
# 30 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 20 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 31 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 32 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 33 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 34 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 35 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Scroll::
# 36 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 25 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 37 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	lockall
# 38 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 26 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 39 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0
# 40 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle6_EventScript_Scroll_2
# 41 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Scroll_1:
# 42 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 29 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 43 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 44 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 45 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 46 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Scroll_2:
# 47 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 27 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 48 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto Route110_TrickHousePuzzle6_EventScript_FoundScroll
# 49 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto Route110_TrickHousePuzzle6_EventScript_Scroll_1
# 50 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 51 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 52 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_FoundScroll::
# 53 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 34 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 54 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 1
# 55 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 35 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 56 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 57 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 58 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 59 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 60 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Sophia::
# 61 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 40 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 62 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_SOPHIA, Route110_TrickHousePuzzle6_Text_SophiaIntro, Route110_TrickHousePuzzle6_Text_SophiaDefeat
# 63 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 41 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 64 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_SophiaPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 66 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 67 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 68 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Benny::
# 69 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 46 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 70 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_BENNY, Route110_TrickHousePuzzle6_Text_BennyIntro, Route110_TrickHousePuzzle6_Text_BennyDefeat
# 71 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 47 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 72 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_BennyPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 74 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 75 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 76 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Sebastian::
# 77 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 52 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 78 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_SEBASTIAN, Route110_TrickHousePuzzle6_Text_SebastianIntro, Route110_TrickHousePuzzle6_Text_SebastianDefeat
# 79 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 53 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 80 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_SebastianPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 82 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 83 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 84 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened::
# 85 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 57 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 86 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 87 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "on the door.\p"
# 88 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "“TRICK MASTER is my life.”\n"
# 89 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "… … … … … … … …\p"
# 90 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "The lock clicked open!$"
# 91 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 92 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SophiaIntro::
# 93 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 65 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 94 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "When I heard there was a strange\n"
# 95 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "house, I had to check it out.$"
# 96 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 97 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SophiaDefeat::
# 98 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 70 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 99 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "I've discovered a tough TRAINER!$"
# 100 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 101 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SophiaPostBattle::
# 102 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 74 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 103 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "I'm sure having a good time checking\n"
# 104 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "this place out.\p"
# 105 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "It's a challenge I've found worth\n"
# 106 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "repeating!$"
# 107 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 108 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_BennyIntro::
# 109 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 81 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 110 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Maybe I could get my BIRD POKéMON\n"
# 111 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "to fly over the wall…$"
# 112 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 113 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_BennyDefeat::
# 114 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 86 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 115 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Gwaaah! I blew it!$"
# 116 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 117 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_BennyPostBattle::
# 118 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 90 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 119 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Ehehehe… I guess I lost because\n"
# 120 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "I was trying to cheat.$"
# 121 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 122 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SebastianIntro::
# 123 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 95 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 124 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "I'm getting dizzy from these rotating\n"
# 125 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "doors…$"
# 126 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 127 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SebastianDefeat::
# 128 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 100 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 129 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Everything's spinning around and\n"
# 130 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "around. I can't take this anymore…$"
# 131 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 132 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SebastianPostBattle::
# 133 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 105 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
# 134 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "You don't seem to be affected at all.\n"
# 135 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Or do you have your poker face on?$"
