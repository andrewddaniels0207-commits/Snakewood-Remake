# 1 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 2 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FiveIsland_LostCave_Room10_OnResume
# 5 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 3 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 6 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 9 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 11 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 0, FiveIsland_LostCave_Room10_EventScript_FindSelphyScene
# 12 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 14 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 15 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_OnResume::
# 16 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 9 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 17 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	call_if_defeated TRAINER_LADY_SELPHY, FiveIsland_LostCave_Room10_EventScript_StopSelphySceneTrigger
# 18 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	end
# 19 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 20 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 21 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_StopSelphySceneTrigger::
# 22 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 14 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 23 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 1
# 24 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	return
# 25 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 26 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 27 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_FindSelphyScene::
# 28 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 19 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 29 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	lockall
# 30 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 20 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 31 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 32 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 21 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 33 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	applymovement LOCALID_LOST_CAVE_SELPHY, FiveIsland_LostCave_Room10_Movement_SelphyWander
# 34 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 22 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 35 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitmovement 0
# 36 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 23 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 37 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay 100
# 38 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 24 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 39 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	applymovement LOCALID_LOST_CAVE_SELPHY, FiveIsland_LostCave_Room10_Movement_SelphyApproach
# 40 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 25 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 41 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitmovement 0
# 42 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 26 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 43 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	msgbox FiveIsland_LostCave_Room10_Text_SelphyIntro
# 44 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 27 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 45 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_LADY_SELPHY, FiveIsland_LostCave_Room10_Text_SelphyDefeat
# 46 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 28 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 47 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	msgbox FiveIsland_LostCave_Room10_Text_MayIAskYouToTakeMeHome
# 48 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 29 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 49 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	closemessage
# 50 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 30 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 51 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	call FiveIsland_LostCave_Room10_EventScript_SetSelphyFound
# 52 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 31 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 53 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	warp MAP_FIVE_ISLAND_RESORT_GORGEOUS, 39, 10
# 54 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 32 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 55 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitstate
# 56 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 33 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 57 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	releaseall
# 58 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	end
# 59 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 60 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 61 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_SetSelphyFound::
# 62 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 38 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 63 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setflag FLAG_HIDE_LOST_CAVE_SELPHY
# 64 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 39 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 65 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	clearflag FLAG_HIDE_RESORT_GORGEOUS_SELPHY
# 66 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 40 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 67 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 1
# 68 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 41 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 69 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1
# 70 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	return
# 71 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 72 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 73 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_SelphyQuestLog::
# 74 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 46 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 75 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	settrainerflag TRAINER_LADY_SELPHY
# 76 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 47 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 77 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	call FiveIsland_LostCave_Room10_EventScript_SetSelphyFound
# 78 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 48 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 79 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	releaseall
# 80 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	end
# 81 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 82 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 83 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 52 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 84 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Movement_SelphyWander:
# 85 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 53 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 86 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_left
# 87 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 54 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 88 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 89 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 55 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 90 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_right
# 91 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 56 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 92 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 93 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 57 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 94 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_in_place_faster_up
# 95 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 58 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 96 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 97 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 59 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 98 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_in_place_faster_down
# 99 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 60 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 100 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	step_end
# 101 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 102 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 63 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 103 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Movement_SelphyApproach:
# 104 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 64 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 105 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_down
# 106 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 65 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 107 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_down
# 108 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 66 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 109 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	step_end
# 110 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 111 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Text_SelphyIntro::
# 112 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 69 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 113 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "W-what do you intend to do with\n"
# 114 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "me?$"
# 115 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 116 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Text_SelphyDefeat::
# 117 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 74 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 118 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "Oh… I was afraid that you meant to\n"
# 119 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "harm me.$"
# 120 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 121 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Text_MayIAskYouToTakeMeHome::
# 122 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 79 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
# 123 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "I am so glad that you happened\n"
# 124 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "here.\p"
# 125 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "I grew rather bored of walking,\n"
# 126 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "and I am feeling fatigued.\p"
# 127 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "May I ask you to take me home\n"
# 128 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "from here?$"
