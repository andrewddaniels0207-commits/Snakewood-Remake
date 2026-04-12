Route110_TrickHousePuzzle1_MapScripts::
# 2 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle1_OnLoad
	.byte 0


Route110_TrickHousePuzzle1_OnLoad::
# 6 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2
	goto_if_eq Route110_TrickHousePuzzle1_OnLoad_2
Route110_TrickHousePuzzle1_OnLoad_1:
	end

Route110_TrickHousePuzzle1_OnLoad_2:
# 7 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle1_EventScript_OpenDoor
	goto Route110_TrickHousePuzzle1_OnLoad_1


Route110_TrickHousePuzzle1_EventScript_OpenDoor::
# 13 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
	end


Route110_TrickHousePuzzle1_EventScript_Scroll::
# 18 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	lockall
# 19 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle1_EventScript_Scroll_2
Route110_TrickHousePuzzle1_EventScript_Scroll_1:
# 22 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle1_EventScript_Scroll_2:
# 20 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle1_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle1_EventScript_Scroll_1


Route110_TrickHousePuzzle1_EventScript_FoundScroll::
# 27 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 1
# 28 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end


Route110_TrickHousePuzzle1_EventScript_Sally::
# 33 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_SALLY, Route110_TrickHousePuzzle1_Text_SallyIntro, Route110_TrickHousePuzzle1_Text_SallyDefeat
# 34 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle1_EventScript_Eddie::
# 39 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_EDDIE, Route110_TrickHousePuzzle1_Text_EddieIntro, Route110_TrickHousePuzzle1_Text_EddieDefeat
# 40 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_EddiePostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle1_EventScript_Robin::
# 45 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_ROBIN, Route110_TrickHousePuzzle1_Text_RobinIntro, Route110_TrickHousePuzzle1_Text_RobinDefeat
# 46 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened::
# 50 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is fabulous.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle1_Text_SallyIntro::
# 58 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I'll hack and slash my way to victory\n"
	.string "with the CUT we just learned!$"

Route110_TrickHousePuzzle1_Text_SallyDefeat::
# 63 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Why are you so serious?$"

Route110_TrickHousePuzzle1_Text_SallyPostBattle::
# 67 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I never get tired of hacking\n"
	.string "and slashing!$"

Route110_TrickHousePuzzle1_Text_EddieIntro::
# 72 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I wandered into this weird house\n"
	.string "by accident…$"

Route110_TrickHousePuzzle1_Text_EddieDefeat::
# 77 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "And now I've lost…$"

Route110_TrickHousePuzzle1_Text_EddiePostBattle::
# 81 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I lost my way, I lost a battle, and I'm\n"
	.string "now even more lost… I can't get out…$"

Route110_TrickHousePuzzle1_Text_RobinIntro::
# 86 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Just who is the TRICK MASTER?$"

Route110_TrickHousePuzzle1_Text_RobinDefeat::
# 90 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I lost while I was lost in thought!$"

Route110_TrickHousePuzzle1_Text_RobinPostBattle::
# 94 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "You're strong!\n"
	.string "Just who are you?$"
