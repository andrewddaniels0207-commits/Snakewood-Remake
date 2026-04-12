SSAnne_Exterior_Frlg_MapScripts::
# 2 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SSAnne_Exterior_OnTransition
# 3 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SSAnne_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SSAnne_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 1, SSAnne_Exterior_ExitSSAnne
	.2byte 0


SSAnne_Exterior_OnTransition::
# 9 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SSANNE_EXTERIOR
	end


SSAnne_Exterior_ExitSSAnne::
# 14 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	lockall
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 16 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	compare VAR_0x8005, 6
	goto_if_le SSAnne_Exterior_ExitSSAnne_2
SSAnne_Exterior_ExitSSAnne_1:
# 19 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	compare VAR_0x8005, 7
	goto_if_ge SSAnne_Exterior_ExitSSAnne_5
SSAnne_Exterior_ExitSSAnne_4:
# 22 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	fadenewbgm MUS_RG_SURF
# 23 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	delay 50
# 24 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	special DoSSAnneDepartureCutscene
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitstate
# 26 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_SS_ANNE
# 27 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_Exterior_Movement_Exit
# 28 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 29 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 2
# 30 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 31 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	warp MAP_VERMILION_CITY, 23, 34
# 32 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitstate
# 33 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	releaseall
	end

SSAnne_Exterior_ExitSSAnne_2:
# 17 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	call SSAnne_Exterior_WalkDown
	goto SSAnne_Exterior_ExitSSAnne_1

SSAnne_Exterior_ExitSSAnne_5:
# 20 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	call SSAnne_Exterior_WalkInPlaceDown
	goto SSAnne_Exterior_ExitSSAnne_4


SSAnne_Exterior_WalkDown::
# 38 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_Exterior_Movement_WalkDown
# 39 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitmovement 0
	return


SSAnne_Exterior_WalkInPlaceDown::
# 44 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 45 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitmovement 0
	return


# 49 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_Movement_Exit:
# 50 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 51 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 52 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 53 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 54 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 55 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 56 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 58 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 59 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	step_end

# 62 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_Movement_WalkDown:
# 63 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 64 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 65 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 66 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 67 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 68 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 69 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 70 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 71 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 72 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	step_end
