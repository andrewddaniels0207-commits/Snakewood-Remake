# 1 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 2 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 4 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_House_Room2_OnTransition
# 5 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 3 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 6 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SevenIsland_House_Room2_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 9 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 4 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 11 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SevenIsland_House_Room2_EventScript_BattleVisitingTrainer
# 12 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 14 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 15 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_OnTransition::
# 16 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 9 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 17 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special SetEReaderTrainerGfxId
# 18 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	end
# 19 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 20 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 21 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer::
# 22 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 14 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 23 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	lockall
# 24 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 15 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 25 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room2_Movement_PlayerEnterRoom
# 26 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 16 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 27 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitmovement 0
# 28 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 17 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 29 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special CopyEReaderTrainerGreeting
# 30 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 18 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 31 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	msgbox gStringVar4
# 32 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 19 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 33 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	closemessage
# 34 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 20 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 36 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 21 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 37 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_0x8005, 0
# 38 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 22 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 39 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special DoSpecialTrainerBattle
# 40 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 23 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 41 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitstate
# 42 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 24 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 43 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	compare VAR_RESULT, 3
# 44 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_2
# 45 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_1:
# 46 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 27 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 47 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 48 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_5
# 49 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_4:
# 50 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 30 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 51 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 52 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_8
# 53 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_7:
# 54 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 33 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 55 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	closemessage
# 56 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 34 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 57 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special HealPlayerParty
# 58 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 59 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room2_Movement_PlayerExitRoom
# 60 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 36 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 61 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitmovement 0
# 62 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 37 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 63 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special LoadPlayerParty
# 64 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 38 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 65 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 66 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 39 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 67 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	warp MAP_SEVEN_ISLAND_HOUSE_ROOM1, 4, 1
# 68 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 40 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 69 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitstate
# 70 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 41 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 71 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	releaseall
# 72 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	end
# 73 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 74 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_2:
# 75 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 25 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 76 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	call SevenIsland_House_Room2_EventScript_BattleTie
# 77 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	goto SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_1
# 78 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 79 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_5:
# 80 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 28 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 81 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	call SevenIsland_House_Room2_EventScript_BattleWon
# 82 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	goto SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_4
# 83 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 84 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_8:
# 85 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 31 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 86 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	call SevenIsland_House_Room2_EventScript_BattleLost
# 87 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	goto SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_7
# 88 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 89 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 90 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleTie::
# 91 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 46 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 92 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3
# 93 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 47 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 94 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_MatchEndedUpDraw
# 95 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	return
# 96 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 97 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 98 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleWon::
# 99 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 52 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 100 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1
# 101 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 53 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 102 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special ShowFieldMessageStringVar4
# 103 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 54 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 104 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitmessage
# 105 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 55 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 106 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitbuttonpress
# 107 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	return
# 108 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 109 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 110 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleLost::
# 111 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 60 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 112 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2
# 113 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 61 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 114 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special ShowFieldMessageStringVar4
# 115 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 62 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 116 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitmessage
# 117 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 63 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 118 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitbuttonpress
# 119 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	return
# 120 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 121 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 122 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 67 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 123 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_Movement_PlayerEnterRoom:
# 124 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 68 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 125 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_down
# 126 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 69 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 127 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 70 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 129 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_down
# 130 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 71 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 131 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_right
# 132 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 72 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 133 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_right
# 134 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 73 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 135 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	step_end
# 136 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 137 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 76 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 138 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_Movement_PlayerExitRoom:
# 139 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 77 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 140 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_left
# 141 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 78 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 142 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_left
# 143 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 79 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 144 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 145 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 80 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 146 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 147 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 81 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 148 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 149 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 82 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 150 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 151 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 83 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 152 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	delay_8
# 153 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 84 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
# 154 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	step_end
