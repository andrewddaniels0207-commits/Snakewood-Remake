OneIsland_Harbor_Frlg_MapScripts::
# 2 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, OneIsland_Harbor_OnWarp
# 3 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1, OneIsland_Harbor_EventScript_PlayerEnterHarborFirstTime
	.2byte 0


# 8 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"

# 9 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
OneIsland_Harbor_OnWarp:
# 10 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1, OneIsland_Harbor_EventScript_TurnPlayerNorth
# 11 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	.2byte 0

OneIsland_Harbor_EventScript_TurnPlayerNorth::
# 16 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


OneIsland_Harbor_EventScript_PlayerEnterHarborFirstTime::
# 21 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	lockall
# 22 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 23 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Harbor_Movement_PlayerExitHarbor
# 24 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	waitmovement 0
# 25 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 2
# 26 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	warp MAP_ONE_ISLAND, 12, 18
# 27 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	waitstate
# 28 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	releaseall
	end


# 32 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
OneIsland_Harbor_Movement_PlayerExitHarbor:
# 33 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	walk_up
# 34 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	walk_up
# 35 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	walk_up
# 36 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	step_end

OneIsland_Harbor_EventScript_Sailor::
# 40 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	lock
# 41 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	faceplayer
# 42 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 43 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	waitmessage
# 44 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 45 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	goto EventScript_ChooseDestFromOneIsland
	end

