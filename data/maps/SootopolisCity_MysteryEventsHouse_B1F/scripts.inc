# 1 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 2 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_MapScripts::
# 3 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 2 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 4 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_MysteryEventsHouse_B1F_OnTransition
# 5 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 3 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 6 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MysteryEventsHouse_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 9 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 4 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 11 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer
# 12 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	.2byte 0
# 13 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 14 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 15 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_OnTransition::
# 16 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 9 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 17 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special SetEReaderTrainerGfxId
# 18 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	end
# 19 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 20 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 21 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer::
# 22 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 14 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 23 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	lockall
# 24 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 15 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 25 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerEnterBasement
# 26 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 16 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 27 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 17 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 29 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special CopyEReaderTrainerGreeting
# 30 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 18 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 31 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 32 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 19 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 33 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	closemessage
# 34 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 20 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 35 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_EREADER
# 36 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 21 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 37 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_0x8005, 0
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 22 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 39 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special DoSpecialTrainerBattle
# 40 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 23 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 41 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitstate
# 42 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 24 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 43 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_DREW
# 44 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_2
# 45 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_1:
# 46 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 27 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 47 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 48 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_5
# 49 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_4:
# 50 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 30 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 51 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
# 52 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_8
# 53 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_7:
# 54 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 33 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 55 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	closemessage
# 56 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 34 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 57 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special HealPlayerParty
# 58 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 35 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 59 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerExitBasement
# 60 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 36 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 61 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 37 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 63 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special LoadPlayerParty
# 64 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 65 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 66 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 39 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 67 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	warp MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F, 3, 1
# 68 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 40 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 69 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitstate
# 70 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 41 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 71 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	releaseall
# 72 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	end
# 73 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 74 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_2:
# 75 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 25 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 76 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleTie
# 77 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_1
# 78 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 79 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_5:
# 80 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 28 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 81 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleWon
# 82 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_4
# 83 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 84 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_8:
# 85 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 31 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 86 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleLost
# 87 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_7
# 88 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 89 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 90 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleTie::
# 91 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 46 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 92 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 3
# 93 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 47 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 94 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_B1F_Text_MatchEndedUpDraw, MSGBOX_DEFAULT
# 95 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	return
# 96 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 97 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 98 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleWon::
# 99 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 52 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 100 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 1
# 101 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 53 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 102 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special ShowFieldMessageStringVar4
# 103 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 54 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 104 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmessage
# 105 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 55 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 106 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitbuttonpress
# 107 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	return
# 108 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 109 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 110 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleLost::
# 111 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 60 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 112 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 2
# 113 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 61 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 114 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special ShowFieldMessageStringVar4
# 115 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 62 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 116 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmessage
# 117 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 63 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 118 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitbuttonpress
# 119 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	return
# 120 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 121 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 122 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 67 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 123 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerEnterBasement:
# 124 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 68 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 125 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 126 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 69 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 127 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 128 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 70 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 129 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 130 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 71 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 131 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_right
# 132 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 72 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 133 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_right
# 134 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 73 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 135 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	step_end
# 136 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 137 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 76 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 138 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerExitBasement:
# 139 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 77 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 140 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_left
# 141 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 78 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 142 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_left
# 143 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 79 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 144 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 145 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 80 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 146 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 147 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 81 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 148 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 149 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 82 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 150 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 151 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 83 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 152 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	delay_8
# 153 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 84 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
# 154 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	step_end
