LittlerootTown_MapScripts::
# 2 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 3 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_SNAKEWOOD_INTRO_STATE, 0, LittlerootTown_EventScript_WakeUp
	.2byte 0


LittlerootTown_OnTransition::
# 9 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 10 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 11 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 12 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 13 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 14 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 15 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_OnTransition_2
# 18 "data/maps/LittlerootTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
LittlerootTown_OnTransition_1:
	end

LittlerootTown_OnTransition_2:
# 16 "data/maps/LittlerootTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto LittlerootTown_OnTransition_1


LittlerootTown_EventScript_WakeUp::
# 24 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 25 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_SNAKEWOOD_INTRO_STATE, 1
# 26 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 28 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 29 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerLookAround
# 30 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 31 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WakeUp_Text_0
# 34 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


# 38 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerLookAround:
# 39 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 40 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 41 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 42 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 43 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_right
# 44 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 45 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
	step_end

LittlerootTown_EventScript_BirchsBag::
# 49 "data/maps/LittlerootTown/scripts.pory"
	lock
# 50 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 51 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_STARTER_CHOSEN, LittlerootTown_EventScript_BirchsBag_2
# 58 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BirchsBag_Text_1
# 62 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BirchsBag_Text_2
# 65 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 66 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 67 "data/maps/LittlerootTown/scripts.pory"
	special ChooseStarter
# 68 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 69 "data/maps/LittlerootTown/scripts.pory"
	special HealPlayerParty
# 70 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_STARTER_CHOSEN
# 71 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BirchsBag_Text_3
# 73 "data/maps/LittlerootTown/scripts.pory"
	release
	end

LittlerootTown_EventScript_BirchsBag_2:
# 52 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BirchsBag_Text_0
# 55 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_CantLeaveWithoutStarter::
# 78 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_STARTER_CHOSEN, LittlerootTown_EventScript_CantLeaveWithoutStarter_2
# 81 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 82 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_CantLeaveWithoutStarter_Text_0
# 87 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 88 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushBackSouth
# 89 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 90 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_CantLeaveWithoutStarter_2:
	end


LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 95 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_STARTER_CHOSEN, LittlerootTown_EventScript_NeedPokemonTriggerRight_2
# 98 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 99 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_CantLeaveWithoutStarter_Text_0
# 104 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 105 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushBackSouth
# 106 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_NeedPokemonTriggerRight_2:
	end


# 111 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushBackSouth:
# 112 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 113 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

LittlerootTown_EventScript_TownSign::
# 117 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_LabSign::
# 125 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_LabSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_WakeUp_Text_0:
# 31 "data/maps/LittlerootTown/scripts.pory"
	.string "Urgh…\p"
	.string "Where am I?\p"
	.string "I can't seem to remember…$"

LittlerootTown_EventScript_BirchsBag_Text_0:
# 52 "data/maps/LittlerootTown/scripts.pory"
	.string "The satchel is still here.\p"
	.string "Two empty slots stare back\n"
	.string "at you.…$"

LittlerootTown_EventScript_BirchsBag_Text_1:
# 58 "data/maps/LittlerootTown/scripts.pory"
	.string "A worn satchel, half-buried under\n"
	.string "a chunk of broken wall.\p"
	.string "Three POKéBALLS are\n"
	.string "nestled inside.$"

LittlerootTown_EventScript_BirchsBag_Text_2:
# 62 "data/maps/LittlerootTown/scripts.pory"
	.string "All three POKéBALLS are intact.\p"
	.string "I can feel movement from\n"
	.string "each of them.…$"

LittlerootTown_EventScript_BirchsBag_Text_3:
# 71 "data/maps/LittlerootTown/scripts.pory"
	.string "At least I'm not completely\n"
	.string "alone out here.$"

LittlerootTown_EventScript_CantLeaveWithoutStarter_Text_0:
# 82 "data/maps/LittlerootTown/scripts.pory"
	.string "Something is moving out there\n"
	.string "in the long grass.\p"
	.string "I can hear it.\p"
	.string "Going out there without a\n"
	.string "POKéMON would be suicide.$"

LittlerootTown_EventScript_TownSign_Text_0:
# 117 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
	.string "“A town that can't be shaded any hue.”\p"
	.string "Someone has written below in red:\n"
	.string "“HELP.”$"

LittlerootTown_EventScript_LabSign_Text_0:
# 125 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB\p"
	.string "The sign is half-buried\n"
	.string "under collapsed concrete.$"
