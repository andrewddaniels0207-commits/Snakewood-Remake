# 1 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_MapScripts::
# 3 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BattleFrontier_BattleTowerCorridor_OnLoad
# 5 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor
# 12 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 14 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 15 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_OnLoad::
# 16 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 9 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	compare VAR_0x8006, 1
# 18 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerCorridor_OnLoad_2
# 19 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_OnLoad_1:
# 20 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 12 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setmetatile 12, 0, METATILE_BattleFrontier_CorridorOpenDoor_Top, FALSE
# 22 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setmetatile 12, 1, METATILE_BattleFrontier_CorridorOpenDoor_Bottom, FALSE
# 24 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 26 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_OnLoad_2:
# 27 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 10 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 28 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerCorridor_EventScript_OpenFarDoor
# 29 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerCorridor_OnLoad_1
# 30 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 31 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_EventScript_OpenFarDoor::
# 33 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 18 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setmetatile 15, 0, METATILE_BattleFrontier_CorridorOpenDoor_Top, FALSE
# 35 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 36 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setmetatile 15, 1, METATILE_BattleFrontier_CorridorOpenDoor_Bottom, FALSE
# 37 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	end
# 38 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 39 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 40 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor::
# 41 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 24 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 43 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 44 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	compare VAR_0x8006, 1
# 45 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor_2
# 46 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor_1:
# 47 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 28 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	applymovement LOCALID_TOWER_CORRIDOR_ATTENDANT, BattleFrontier_BattleTowerCorridor_Movement_AttendantWalkToDoor
# 49 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 50 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerCorridor_Movement_PlayerWalkToDoor
# 51 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 30 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 52 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	waitmovement 0
# 53 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerCorridor_EventScript_WarpToBattleRoom
# 55 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	return
# 56 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 57 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor_2:
# 58 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerCorridor_EventScript_WalkToFarDoor
# 60 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor_1
# 61 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 62 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 63 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_EventScript_WalkToFarDoor::
# 64 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	applymovement LOCALID_TOWER_CORRIDOR_ATTENDANT, BattleFrontier_BattleTowerCorridor_Movement_AttendantWalkToFarDoor
# 66 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 36 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerCorridor_Movement_PlayerWalkToFarDoor
# 68 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	waitmovement 0
# 70 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	return
# 71 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 72 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 73 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_EventScript_WarpToBattleRoom::
# 74 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setvar VAR_TEMP_0, 0
# 76 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_BATTLE_ROOM, 4, 8
# 78 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	waitstate
# 80 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	end
# 81 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 82 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 83 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_Movement_PlayerWalkToFarDoor::
# 84 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
# 86 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	return
# 87 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 88 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 89 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_Movement_AttendantWalkToFarDoor::
# 90 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 52 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 91 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
# 92 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 93 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
# 94 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	return
# 95 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 96 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 97 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_Movement_PlayerWalkToDoor::
# 98 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
# 100 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	return
# 101 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 102 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"

# 103 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_Movement_AttendantWalkToDoor:
# 105 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
# 107 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
# 109 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
# 111 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_up
# 113 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	set_invisible
# 115 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	step_end
