# 1 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_Frlg_MapScripts::
# 3 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 2 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 4 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SSAnne_Exterior_OnTransition
# 5 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 3 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 6 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SSAnne_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 9 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 4 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 11 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 1, SSAnne_Exterior_ExitSSAnne
# 12 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 14 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_OnTransition::
# 16 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 9 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 17 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SSANNE_EXTERIOR
# 18 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	end
# 19 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 20 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 21 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_ExitSSAnne::
# 22 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 14 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 23 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	lockall
# 24 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 26 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 16 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 27 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	compare VAR_0x8005, 6
# 28 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	goto_if_le SSAnne_Exterior_ExitSSAnne_2
# 29 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_ExitSSAnne_1:
# 30 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 19 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 31 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	compare VAR_0x8005, 7
# 32 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	goto_if_ge SSAnne_Exterior_ExitSSAnne_5
# 33 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_ExitSSAnne_4:
# 34 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 22 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 35 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	fadenewbgm MUS_RG_SURF
# 36 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 23 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 37 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	delay 50
# 38 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 24 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 39 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	special DoSSAnneDepartureCutscene
# 40 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 41 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitstate
# 42 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 26 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 43 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_SS_ANNE
# 44 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 27 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 45 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_Exterior_Movement_Exit
# 46 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 28 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 47 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 48 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 29 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 49 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 2
# 50 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 30 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 51 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 52 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 31 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 53 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	warp MAP_VERMILION_CITY, 23, 34
# 54 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 32 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 55 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitstate
# 56 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 33 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 57 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	releaseall
# 58 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	end
# 59 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 60 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_ExitSSAnne_2:
# 61 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 17 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 62 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	call SSAnne_Exterior_WalkDown
# 63 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	goto SSAnne_Exterior_ExitSSAnne_1
# 64 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 65 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_ExitSSAnne_5:
# 66 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 20 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 67 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	call SSAnne_Exterior_WalkInPlaceDown
# 68 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	goto SSAnne_Exterior_ExitSSAnne_4
# 69 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 70 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 71 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_WalkDown::
# 72 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 38 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 73 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_Exterior_Movement_WalkDown
# 74 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 39 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 75 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 76 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	return
# 77 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 78 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 79 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_WalkInPlaceDown::
# 80 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 44 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 81 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 82 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 45 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 83 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 84 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	return
# 85 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 86 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 87 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 49 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 88 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_Movement_Exit:
# 89 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 50 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 90 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 91 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 51 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 92 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 93 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 52 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 94 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 95 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 53 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 96 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 97 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 54 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 98 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 99 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 55 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 100 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 101 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 56 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 102 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 103 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 57 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 104 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 105 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 58 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 106 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 107 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 59 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 108 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	step_end
# 109 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"

# 110 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 62 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 111 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_Movement_WalkDown:
# 112 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 63 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 113 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 114 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 64 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 115 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 116 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 65 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 117 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 118 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 66 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 119 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 120 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 67 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 121 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 122 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 68 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 123 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 124 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 69 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 125 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 126 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 70 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 127 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 71 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 129 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 130 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 72 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
# 131 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	step_end
