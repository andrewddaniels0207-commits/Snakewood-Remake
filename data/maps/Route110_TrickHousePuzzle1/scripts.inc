# 1 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 2 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 4 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle1_OnLoad
# 5 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.byte 0
# 6 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 7 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 8 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_OnLoad::
# 9 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 6 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 10 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2
# 11 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle1_OnLoad_2
# 12 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_OnLoad_1:
# 13 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 14 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 15 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_OnLoad_2:
# 16 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 7 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 17 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle1_EventScript_OpenDoor
# 18 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle1_OnLoad_1
# 19 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 20 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 21 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_OpenDoor::
# 22 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 13 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 23 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 24 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 25 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 26 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 27 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Scroll::
# 28 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 18 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 29 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	lockall
# 30 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 19 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 31 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0
# 32 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle1_EventScript_Scroll_2
# 33 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Scroll_1:
# 34 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 22 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 35 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 36 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 37 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 38 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Scroll_2:
# 39 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 20 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 40 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle1_EventScript_FoundScroll
# 41 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle1_EventScript_Scroll_1
# 42 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 43 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 44 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_FoundScroll::
# 45 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 27 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 46 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 1
# 47 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 28 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 48 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 49 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 50 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 51 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 52 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Sally::
# 53 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 33 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 54 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_SALLY, Route110_TrickHousePuzzle1_Text_SallyIntro, Route110_TrickHousePuzzle1_Text_SallyDefeat
# 55 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 34 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 56 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 58 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 59 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 60 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Eddie::
# 61 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 39 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 62 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_EDDIE, Route110_TrickHousePuzzle1_Text_EddieIntro, Route110_TrickHousePuzzle1_Text_EddieDefeat
# 63 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 40 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 64 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_EddiePostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 66 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 67 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 68 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Robin::
# 69 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 45 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 70 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_ROBIN, Route110_TrickHousePuzzle1_Text_RobinIntro, Route110_TrickHousePuzzle1_Text_RobinDefeat
# 71 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 46 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 72 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 74 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 75 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 76 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened::
# 77 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 50 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 78 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 79 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "on the door.\p"
# 80 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "“TRICK MASTER is fabulous.”\n"
# 81 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "… … … … … … … …\p"
# 82 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "The lock clicked open!$"
# 83 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 84 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyIntro::
# 85 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 58 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 86 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I'll hack and slash my way to victory\n"
# 87 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "with the CUT we just learned!$"
# 88 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 89 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyDefeat::
# 90 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 63 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 91 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Why are you so serious?$"
# 92 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 93 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyPostBattle::
# 94 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 67 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 95 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I never get tired of hacking\n"
# 96 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "and slashing!$"
# 97 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 98 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddieIntro::
# 99 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 72 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 100 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I wandered into this weird house\n"
# 101 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "by accident…$"
# 102 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 103 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddieDefeat::
# 104 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 77 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 105 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "And now I've lost…$"
# 106 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 107 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddiePostBattle::
# 108 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 81 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 109 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I lost my way, I lost a battle, and I'm\n"
# 110 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "now even more lost… I can't get out…$"
# 111 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 112 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinIntro::
# 113 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 86 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 114 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Just who is the TRICK MASTER?$"
# 115 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 116 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinDefeat::
# 117 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 90 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 118 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I lost while I was lost in thought!$"
# 119 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 120 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinPostBattle::
# 121 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 94 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
# 122 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "You're strong!\n"
# 123 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Just who are you?$"
