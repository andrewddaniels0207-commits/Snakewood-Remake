# 1 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.byte 0
# 4 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 5 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 6 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Scroll::
# 7 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 4 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 8 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	lockall
# 9 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 5 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 10 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0
# 11 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle8_EventScript_Scroll_2
# 12 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Scroll_1:
# 13 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 8 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 14 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 15 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 16 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 17 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Scroll_2:
# 18 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 6 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 19 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle8_EventScript_FoundScroll
# 20 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle8_EventScript_Scroll_1
# 21 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 22 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 23 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_FoundScroll::
# 24 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 13 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 25 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 1
# 26 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 14 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 27 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 28 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 29 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 30 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 31 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Vincent::
# 32 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 19 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 33 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_VINCENT, Route110_TrickHousePuzzle8_Text_VincentIntro, Route110_TrickHousePuzzle8_Text_VincentDefeat
# 34 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 20 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 35 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 37 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 38 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 39 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Keira::
# 40 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 25 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 41 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_KEIRA, Route110_TrickHousePuzzle8_Text_KeiraIntro, Route110_TrickHousePuzzle8_Text_KeiraDefeat
# 42 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 26 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 43 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_KeiraPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 45 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 46 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 47 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Leroy::
# 48 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 31 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 49 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_LEROY, Route110_TrickHousePuzzle8_Text_LeroyIntro, Route110_TrickHousePuzzle8_Text_LeroyDefeat
# 50 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 32 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 51 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 53 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 54 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 55 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened::
# 56 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 36 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 57 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 58 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "on the door.\p"
# 59 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "“TRICK MASTER I love.”\n"
# 60 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "… … … … … … … …\p"
# 61 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "The lock clicked open!$"
# 62 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 63 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentIntro::
# 64 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 44 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 65 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Not many TRAINERS have made it\n"
# 66 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "this far.$"
# 67 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 68 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentDefeat::
# 69 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 49 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 70 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "That must mean you're tough, too…$"
# 71 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 72 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentPostBattle::
# 73 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 53 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 74 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "You've beaten the POKéMON LEAGUE\n"
# 75 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "CHAMPION? That's too much!$"
# 76 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 77 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraIntro::
# 78 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 58 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 79 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Consider yourself lucky to be\n"
# 80 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "battling me!$"
# 81 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 82 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraDefeat::
# 83 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 63 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 84 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "This isn't right!\n"
# 85 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "I can't lose!$"
# 86 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 87 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraPostBattle::
# 88 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 68 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 89 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "It's a miracle that you beat me.\n"
# 90 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "You can brag about it.$"
# 91 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 92 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyIntro::
# 93 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 73 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 94 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "You've been slugging through the TRICK\n"
# 95 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "HOUSE challenge, too.$"
# 96 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 97 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyDefeat::
# 98 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 78 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 99 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "I see…\n"
# 100 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "You possess an extraordinary style.$"
# 101 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 102 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyPostBattle::
# 103 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 83 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
# 104 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Seeing someone like you should please\n"
# 105 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "the TRICK MASTER.$"
