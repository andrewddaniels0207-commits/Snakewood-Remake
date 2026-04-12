VerdanturfTown_BattleTentCorridor_MapScripts::
# 2 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

VerdanturfTown_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor
	.2byte 0


VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor::
# 8 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	lockall
# 9 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 10 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_CORRIDOR_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
# 11 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
# 12 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 13 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	opendoor 2, 1
# 14 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 15 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_CORRIDOR_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor
# 16 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor
# 17 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 18 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	closedoor 2, 1
# 19 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 20 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 21 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM, 6, 5
# 22 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitstate
# 23 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	releaseall
	end


# 27 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor:
# 28 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 29 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 30 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 31 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 32 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	step_end

VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor::
# 36 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
	return


# 39 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor:
# 40 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 41 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	set_invisible
# 42 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	step_end

VerdanturfTown_ContestHall_Text_WhichContestYouEntering::
# 45 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "Which CONTEST are you entering?\n"
	.string "Want a piece of advice?\p"
	.string "In any CONTEST, for example, a CUTE\n"
	.string "CONTEST, I don't think they judge you\l"
	.string "only on cuteness in the first round.\p"
	.string "You need to work out ways for raising\n"
	.string "POKéMON better.$"

VerdanturfTown_ContestHall_Text_RaisedMonToBeCute::
# 55 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "I raised my POKéMON to be cute.\p"
	.string "I found out you can put POKéMON in\n"
	.string "a CONTEST for cuteness!\p"
	.string "I'm so glad I raised my POKéMON with\n"
	.string "loving care…$"

VerdanturfTown_ContestHall_Text_MyMonRules::
# 63 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "My POKéMON rules!\p"
	.string "It's cool, tough yet beautiful, cute,\n"
	.string "and smart. It's complete!\p"
	.string "I may as well go for wins in every\n"
	.string "single CONTEST.$"

VerdanturfTown_ContestHall_Text_NormalRankStage::
# 71 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "POKéMON CONTESTS\n"
	.string "NORMAL RANK STAGE!$"
