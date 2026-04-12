Route7_EastEntrance_Frlg_MapScripts::
	.byte 0


Route7_EastEntrance_EventScript_Guard::
# 4 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_HiHowsItGoing, MSGBOX_NPC
	end


Route7_EastEntrance_EventScript_GuardTriggerTop::
# 9 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	lockall
# 10 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end


Route7_EastEntrance_EventScript_GuardTriggerMid::
# 16 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	lockall
# 17 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end


Route7_EastEntrance_EventScript_GuardTriggerBottom::
# 23 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	lockall
# 24 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 25 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end


Route7_EastEntrance_EventScript_GuardTrigger::
# 30 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 31 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route7_EastEntrance_EventScript_GuardTrigger_2
Route7_EastEntrance_EventScript_GuardTrigger_1:
# 36 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThirstyOnGuardDuty
# 37 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	closemessage
# 38 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_BlockPlayerEntry
# 39 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	releaseall
	end

Route7_EastEntrance_EventScript_GuardTrigger_2:
# 34 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GiveTea
	goto Route7_EastEntrance_EventScript_GuardTrigger_1


Route7_EastEntrance_EventScript_GiveTea::
# 45 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	removeitem ITEM_TEA
# 46 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardDrinkTea
	end


Route7_EastEntrance_EventScript_GuardDrinkTea::
# 51 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThatTeaLooksTasty
# 52 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	closemessage
# 53 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route7_EastEntrance_EventScript_GuardDrinkTea_2
Route7_EastEntrance_EventScript_GuardDrinkTea_1:
# 56 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route7_EastEntrance_EventScript_GuardDrinkTea_5
Route7_EastEntrance_EventScript_GuardDrinkTea_4:
# 59 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Route7_EastEntrance_EventScript_GuardDrinkTea_8
Route7_EastEntrance_EventScript_GuardDrinkTea_7:
# 62 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThanksIllShareTeaWithGuards
# 63 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 64 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	releaseall
	end

Route7_EastEntrance_EventScript_GuardDrinkTea_2:
# 54 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	call Route7_EastEntrance_WalkToGuardTop
	goto Route7_EastEntrance_EventScript_GuardDrinkTea_1

Route7_EastEntrance_EventScript_GuardDrinkTea_5:
# 57 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	call Route7_EastEntrance_WalkToGuardMid
	goto Route7_EastEntrance_EventScript_GuardDrinkTea_4

Route7_EastEntrance_EventScript_GuardDrinkTea_8:
# 60 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	call Route7_EastEntrance_WalkToGuardBottom
	goto Route7_EastEntrance_EventScript_GuardDrinkTea_7


Route7_EastEntrance_WalkToGuardTop::
# 69 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardTop
# 70 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
	return


Route7_EastEntrance_WalkToGuardMid::
# 75 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardMid
# 76 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
	return


Route7_EastEntrance_WalkToGuardBottom::
# 81 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardBottom
# 82 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
	return


# 86 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Movement_WalkToGuardMid:
# 87 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	step_end

# 91 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Movement_WalkToGuardBottom:
# 92 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_up
# 93 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_up
# 94 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	step_end

# 97 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Movement_WalkToGuardTop:
# 98 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_in_place_up
# 99 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	step_end

# 102 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_Movement_BlockPlayerEntry:
# 103 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_left
# 104 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	step_end

Route7_EastEntrance_Text_ThirstyOnGuardDuty::
# 107 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "I'm on guard duty.\n"
	.string "Gee, I'm thirsty, though!\p"
	.string "Oh, wait there, the road's closed.$"

Route7_EastEntrance_Text_ThatTeaLooksTasty::
# 113 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Oh, that TEA…\n"
	.string "It looks awfully tasty…$"

Route7_EastEntrance_Text_ThanksIllShareTeaWithGuards::
# 118 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Huh? I can have this drink?\n"
	.string "Gee, thanks!\l"
	.string "… …\l"
	.string "Glug, glug…\l"
	.string "… …\l"
	.string "Gulp…\l"
	.string "If you want to go to SAFFRON\l"
	.string "CITY…\l"
	.string "… …\l"
	.string "You can go on through.\p"
	.string "I'll share this TEA with the other\n"
	.string "guards!$"

Route7_EastEntrance_Text_HiHowsItGoing::
# 133 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Hi, how's it going?$"
