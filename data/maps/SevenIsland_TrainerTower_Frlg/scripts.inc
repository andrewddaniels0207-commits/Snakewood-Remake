# 1 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 2 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 4 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TrainerTower_OnTransition
# 5 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 7 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 8 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_OnTransition::
# 9 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 6 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 10 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
# 11 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	end
# 12 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 13 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 14 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_EventScript_TrainerTowerSign::
# 15 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 11 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 16 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerSign, MSGBOX_SIGN
# 17 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	end
# 18 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 19 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 20 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_EventScript_TrainerTowerAheadSign::
# 21 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 16 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 22 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerAhead, MSGBOX_SIGN
# 23 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	end
# 24 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 25 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 26 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_DarioIntro::
# 27 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 20 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 28 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "I sensed your approach.$"
# 29 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 30 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_DarioDefeat::
# 31 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 24 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 32 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Give up…$"
# 33 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 34 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_DarioPostBattle::
# 35 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 28 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 36 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "In your future, I sense that you\n"
# 37 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "will meet many others.\p"
# 38 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "I think you will be linked to each\n"
# 39 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "other by a strange power.$"
# 40 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 41 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_RodetteIntro::
# 42 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 35 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 43 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Somewhere on this island, peculiar\n"
# 44 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "POKéMON are sleeping.$"
# 45 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 46 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_RodetteDefeat::
# 47 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 40 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 48 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "What an amazing TRAINER!$"
# 49 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 50 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_RodettePostBattle::
# 51 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 44 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 52 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Somewhere on this island, peculiar\n"
# 53 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "POKéMON are sleeping.\p"
# 54 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Could it be that they're waiting\n"
# 55 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "for you?$"
# 56 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 57 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_TrainerTowerSign::
# 58 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 51 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 59 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "TRAINER TOWER ENTRANCE\n"
# 60 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Rise to the Challenge, TRAINERS!$"
# 61 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 62 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_TrainerTowerAhead::
# 63 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 56 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
# 64 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "TRAINER TOWER AHEAD$"
