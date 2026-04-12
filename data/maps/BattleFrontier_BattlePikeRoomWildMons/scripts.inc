# 1 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePikeRoomWildMons_OnResume
# 5 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 7 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRoomWildMons_OnWarp
# 7 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 8 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeRoomWildMons_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 11 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeRoomWildMons_EventScript_SetInWildMonRoom
# 14 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 5 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, BattleFrontier_BattlePikeRoomWildMons_EventScript_WarpToLobbyLost
# 16 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	.2byte 0
# 17 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 18 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 19 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_EventScript_SetInWildMonRoom::
# 20 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	setvar VAR_TEMP_0, 1
# 22 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 12 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	pike_inwildmonroom
# 24 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 26 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 27 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_EventScript_WarpToLobbyLost::
# 28 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 29 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 30 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 18 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 32 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 33 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	waitstate
# 34 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	end
# 35 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 36 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 37 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 39 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 24 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 40 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_OnWarp:
# 41 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 42 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeRoomWildMons_EventScript_TurnPlayerNorth
# 43 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 26 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	.2byte 0
# 45 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 46 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_EventScript_TurnPlayerNorth::
# 47 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	setvar VAR_TEMP_4, 1
# 49 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 51 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	end
# 52 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 53 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 54 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_OnResume::
# 55 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	call BattleFrontier_BattlePikeRoom_EventScript_ResetSketchedMoves
# 57 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 59 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
# 61 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomWildMons_OnResume_2
# 62 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_OnResume_1:
# 63 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 42 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_DREW
# 65 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomWildMons_OnResume_5
# 66 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_OnResume_4:
# 67 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 69 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_OnResume_2:
# 70 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 40 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 71 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	goto BattleFrontier_BattlePikeRoomWildMons_EventScript_SetLost
# 72 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	goto BattleFrontier_BattlePikeRoomWildMons_OnResume_1
# 73 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 74 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_OnResume_5:
# 75 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 43 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 76 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	goto BattleFrontier_BattlePikeRoomWildMons_EventScript_SetLost
# 77 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	goto BattleFrontier_BattlePikeRoomWildMons_OnResume_4
# 78 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 79 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 80 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_EventScript_SetLost::
# 81 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
# 82 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	setvar VAR_TEMP_1, 1
# 83 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	end
