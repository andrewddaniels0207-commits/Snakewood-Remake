FiveIsland_LostCave_Room10_Frlg_MapScripts::
# 2 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FiveIsland_LostCave_Room10_OnResume
# 3 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 0, FiveIsland_LostCave_Room10_EventScript_FindSelphyScene
	.2byte 0


FiveIsland_LostCave_Room10_OnResume::
# 9 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	call_if_defeated TRAINER_LADY_SELPHY, FiveIsland_LostCave_Room10_EventScript_StopSelphySceneTrigger
	end


FiveIsland_LostCave_Room10_EventScript_StopSelphySceneTrigger::
# 14 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 1
	return


FiveIsland_LostCave_Room10_EventScript_FindSelphyScene::
# 19 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	lockall
# 20 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 21 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	applymovement LOCALID_LOST_CAVE_SELPHY, FiveIsland_LostCave_Room10_Movement_SelphyWander
# 22 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitmovement 0
# 23 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay 100
# 24 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	applymovement LOCALID_LOST_CAVE_SELPHY, FiveIsland_LostCave_Room10_Movement_SelphyApproach
# 25 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitmovement 0
# 26 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	msgbox FiveIsland_LostCave_Room10_Text_SelphyIntro
# 27 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_LADY_SELPHY, FiveIsland_LostCave_Room10_Text_SelphyDefeat
# 28 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	msgbox FiveIsland_LostCave_Room10_Text_MayIAskYouToTakeMeHome
# 29 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	closemessage
# 30 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	call FiveIsland_LostCave_Room10_EventScript_SetSelphyFound
# 31 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	warp MAP_FIVE_ISLAND_RESORT_GORGEOUS, 39, 10
# 32 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitstate
# 33 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	releaseall
	end


FiveIsland_LostCave_Room10_EventScript_SetSelphyFound::
# 38 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setflag FLAG_HIDE_LOST_CAVE_SELPHY
# 39 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	clearflag FLAG_HIDE_RESORT_GORGEOUS_SELPHY
# 40 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 1
# 41 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1
	return


FiveIsland_LostCave_Room10_EventScript_SelphyQuestLog::
# 46 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	settrainerflag TRAINER_LADY_SELPHY
# 47 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	call FiveIsland_LostCave_Room10_EventScript_SetSelphyFound
# 48 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	releaseall
	end


# 52 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Movement_SelphyWander:
# 53 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_left
# 54 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 55 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_right
# 56 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 57 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_in_place_faster_up
# 58 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 59 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_in_place_faster_down
# 60 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	step_end

# 63 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Movement_SelphyApproach:
# 64 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_down
# 65 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_down
# 66 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	step_end

FiveIsland_LostCave_Room10_Text_SelphyIntro::
# 69 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "W-what do you intend to do with\n"
	.string "me?$"

FiveIsland_LostCave_Room10_Text_SelphyDefeat::
# 74 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "Oh… I was afraid that you meant to\n"
	.string "harm me.$"

FiveIsland_LostCave_Room10_Text_MayIAskYouToTakeMeHome::
# 79 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "I am so glad that you happened\n"
	.string "here.\p"
	.string "I grew rather bored of walking,\n"
	.string "and I am feeling fatigued.\p"
	.string "May I ask you to take me home\n"
	.string "from here?$"
