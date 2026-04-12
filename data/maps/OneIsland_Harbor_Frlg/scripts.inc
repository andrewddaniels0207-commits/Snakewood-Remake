# 1 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 2 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
OneIsland_Harbor_Frlg_MapScripts::
# 3 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 2 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 4 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, OneIsland_Harbor_OnWarp
# 5 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 3 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 6 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 9 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 4 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 11 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1, OneIsland_Harbor_EventScript_PlayerEnterHarborFirstTime
# 12 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 14 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 15 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 8 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 16 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 17 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 9 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 18 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
OneIsland_Harbor_OnWarp:
# 19 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 10 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 20 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1, OneIsland_Harbor_EventScript_TurnPlayerNorth
# 21 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 11 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 22 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	.2byte 0
# 23 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 24 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
OneIsland_Harbor_EventScript_TurnPlayerNorth::
# 25 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 16 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 26 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 27 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	end
# 28 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 29 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 30 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
OneIsland_Harbor_EventScript_PlayerEnterHarborFirstTime::
# 31 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 21 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 32 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	lockall
# 33 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 22 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 34 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 35 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 23 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 36 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Harbor_Movement_PlayerExitHarbor
# 37 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 24 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 38 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 25 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 40 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 2
# 41 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 26 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 42 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	warp MAP_ONE_ISLAND, 12, 18
# 43 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 27 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 44 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	waitstate
# 45 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 28 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 46 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	releaseall
# 47 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	end
# 48 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 49 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 50 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 32 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 51 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
OneIsland_Harbor_Movement_PlayerExitHarbor:
# 52 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 33 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 53 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	walk_up
# 54 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 34 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 55 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	walk_up
# 56 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 35 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 57 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	walk_up
# 58 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 36 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 59 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	step_end
# 60 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 61 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
OneIsland_Harbor_EventScript_Sailor::
# 62 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 40 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 63 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	lock
# 64 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 41 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 65 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	faceplayer
# 66 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 42 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 67 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 68 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 43 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 69 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	waitmessage
# 70 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 44 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 71 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 72 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 45 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
# 73 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	goto EventScript_ChooseDestFromOneIsland
# 74 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	end
