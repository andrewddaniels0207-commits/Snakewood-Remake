Route16_NorthEntrance_1F_Frlg_MapScripts::
# 2 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_NorthEntrance_1F_OnTransition
	.byte 0


Route16_NorthEntrance_1F_OnTransition::
# 6 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	clearflag FLAG_SYS_ON_CYCLING_ROAD
# 7 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, Route16_NorthEntrance_1F_OnTransition_2
Route16_NorthEntrance_1F_OnTransition_1:
	end

Route16_NorthEntrance_1F_OnTransition_2:
# 8 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	call Route16_NorthEntrance_1F_EventScript_DisableNeedBikeTrigger
	goto Route16_NorthEntrance_1F_OnTransition_1


Route16_NorthEntrance_1F_EventScript_DisableNeedBikeTrigger::
# 14 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Route16_NorthEntrance_1F_EventScript_Guard::
# 19 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_1F_Text_CyclingRoadIsDownhillCourse, MSGBOX_NPC
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerTop::
# 24 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	lockall
# 25 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 0
# 26 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerMidTop::
# 31 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	lockall
# 32 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 1
# 33 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerMid::
# 38 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	lockall
# 39 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 2
# 40 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerMidBottom::
# 45 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	lockall
# 46 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 3
# 47 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerBottom::
# 52 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	lockall
# 53 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 4
# 54 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger::
# 59 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 60 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_1F_Text_ExcuseMeWaitUp
# 61 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	closemessage
# 62 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 63 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	delay 20
# 65 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_2
Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_1:
# 68 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_5
Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_4:
# 71 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_8
Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_7:
# 74 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	compare VAR_0x8008, 4
	goto_if_eq Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_11
Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_10:
# 77 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_1F_Text_NoPedestriansOnCyclingRoad
# 78 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	closemessage
# 79 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route16_NorthEntrance_1F_Movement_WalkRight
# 80 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	releaseall
	end

Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_2:
# 66 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	call Route16_NorthEntrance_1F_EventScript_PlayerWalkToCounterMidTop
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_1

Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_5:
# 69 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	call Route16_NorthEntrance_1F_EventScript_PlayerWalkToCounterMid
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_4

Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_8:
# 72 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	call Route16_NorthEntrance_1F_EventScript_PlayerWalkToCounterMidBottom
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_7

Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_11:
# 75 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	call Route16_NorthEntrance_1F_EventScript_PlayerWalkToCounterBottom
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_10


Route16_NorthEntrance_1F_EventScript_PlayerWalkToCounterMidTop::
# 86 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route16_NorthEntrance_1F_Movement_WalkUp
# 87 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
	return


Route16_NorthEntrance_1F_EventScript_PlayerWalkToCounterMid::
# 92 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route16_NorthEntrance_1F_Movement_WalkUp2
# 93 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
	return


Route16_NorthEntrance_1F_EventScript_PlayerWalkToCounterMidBottom::
# 98 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route16_NorthEntrance_1F_Movement_WalkUp3
# 99 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
	return


Route16_NorthEntrance_1F_EventScript_PlayerWalkToCounterBottom::
# 104 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route16_NorthEntrance_1F_Movement_WalkUp4
# 105 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
	return


# 109 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
Route16_NorthEntrance_1F_Movement_WalkUp:
# 110 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 111 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	step_end

# 114 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
Route16_NorthEntrance_1F_Movement_WalkUp2:
# 115 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 116 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 117 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	step_end

# 120 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
Route16_NorthEntrance_1F_Movement_WalkUp3:
# 121 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 122 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 123 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 124 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	step_end

# 127 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
Route16_NorthEntrance_1F_Movement_WalkUp4:
# 128 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 129 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 130 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 131 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 132 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	step_end

# 135 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
Route16_NorthEntrance_1F_Movement_WalkRight:
# 136 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_right
# 137 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	step_end

Route16_NorthEntrance_1F_EventScript_OldMan::
# 141 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_1F_Text_HowdYouGetInGoodEffort, MSGBOX_NPC
	end


Route16_NorthEntrance_1F_Text_NoPedestriansOnCyclingRoad::
# 145 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	.string "No pedestrians are allowed on\n"
	.string "CYCLING ROAD!$"

Route16_NorthEntrance_1F_Text_CyclingRoadIsDownhillCourse::
# 150 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	.string "CYCLING ROAD is a downhill course\n"
	.string "by the sea. It's a great ride.$"

Route16_NorthEntrance_1F_Text_ExcuseMeWaitUp::
# 155 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	.string "Excuse me!\n"
	.string "Wait up, please!$"

Route16_NorthEntrance_1F_Text_HowdYouGetInGoodEffort::
# 160 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	.string "How'd you get in?\n"
	.string "Good effort!$"
