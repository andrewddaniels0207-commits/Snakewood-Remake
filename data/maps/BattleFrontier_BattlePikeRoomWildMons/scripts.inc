BattleFrontier_BattlePikeRoomWildMons_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePikeRoomWildMons_OnResume
# 7 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRoomWildMons_OnWarp
# 3 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeRoomWildMons_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattlePikeRoomWildMons_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeRoomWildMons_EventScript_SetInWildMonRoom
# 5 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, BattleFrontier_BattlePikeRoomWildMons_EventScript_WarpToLobbyLost
	.2byte 0


BattleFrontier_BattlePikeRoomWildMons_EventScript_SetInWildMonRoom::
# 11 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	setvar VAR_TEMP_0, 1
# 12 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	pike_inwildmonroom
	end


BattleFrontier_BattlePikeRoomWildMons_EventScript_WarpToLobbyLost::
# 17 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 18 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 19 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	waitstate
	end


# 23 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"

# 24 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
BattleFrontier_BattlePikeRoomWildMons_OnWarp:
# 25 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeRoomWildMons_EventScript_TurnPlayerNorth
# 26 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	.2byte 0

BattleFrontier_BattlePikeRoomWildMons_EventScript_TurnPlayerNorth::
# 31 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	setvar VAR_TEMP_4, 1
# 32 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattlePikeRoomWildMons_OnResume::
# 37 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	call BattleFrontier_BattlePikeRoom_EventScript_ResetSketchedMoves
# 38 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 39 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq BattleFrontier_BattlePikeRoomWildMons_OnResume_2
BattleFrontier_BattlePikeRoomWildMons_OnResume_1:
# 42 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_DREW
	goto_if_eq BattleFrontier_BattlePikeRoomWildMons_OnResume_5
BattleFrontier_BattlePikeRoomWildMons_OnResume_4:
	end

BattleFrontier_BattlePikeRoomWildMons_OnResume_2:
# 40 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	goto BattleFrontier_BattlePikeRoomWildMons_EventScript_SetLost
	goto BattleFrontier_BattlePikeRoomWildMons_OnResume_1

BattleFrontier_BattlePikeRoomWildMons_OnResume_5:
# 43 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	goto BattleFrontier_BattlePikeRoomWildMons_EventScript_SetLost
	goto BattleFrontier_BattlePikeRoomWildMons_OnResume_4


BattleFrontier_BattlePikeRoomWildMons_EventScript_SetLost::
# 49 "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.pory"
	setvar VAR_TEMP_1, 1
	end

