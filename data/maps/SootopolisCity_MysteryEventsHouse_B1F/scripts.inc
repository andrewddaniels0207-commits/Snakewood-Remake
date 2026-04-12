SootopolisCity_MysteryEventsHouse_B1F_MapScripts::
# 2 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_MysteryEventsHouse_B1F_OnTransition
# 3 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MysteryEventsHouse_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SootopolisCity_MysteryEventsHouse_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer
	.2byte 0


SootopolisCity_MysteryEventsHouse_B1F_OnTransition::
# 9 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special SetEReaderTrainerGfxId
	end


SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer::
# 14 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	lockall
# 15 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerEnterBasement
# 16 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special CopyEReaderTrainerGreeting
# 18 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 19 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	closemessage
# 20 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_EREADER
# 21 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_0x8005, 0
# 22 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special DoSpecialTrainerBattle
# 23 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitstate
# 24 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_DREW
	goto_if_eq SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_2
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_1:
# 27 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_5
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_4:
# 30 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_8
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_7:
# 33 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	closemessage
# 34 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerExitBasement
# 36 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmovement 0
# 37 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special LoadPlayerParty
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	warp MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F, 3, 1
# 40 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitstate
# 41 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	releaseall
	end

SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_2:
# 25 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleTie
	goto SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_1

SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_5:
# 28 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleWon
	goto SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_4

SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_8:
# 31 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleLost
	goto SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_7


SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleTie::
# 46 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 3
# 47 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_B1F_Text_MatchEndedUpDraw, MSGBOX_DEFAULT
	return


SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleWon::
# 52 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 1
# 53 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special ShowFieldMessageStringVar4
# 54 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmessage
# 55 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitbuttonpress
	return


SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleLost::
# 60 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 2
# 61 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special ShowFieldMessageStringVar4
# 62 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmessage
# 63 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitbuttonpress
	return


# 67 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerEnterBasement:
# 68 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 69 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 70 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 71 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_right
# 72 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_right
# 73 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	step_end

# 76 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerExitBasement:
# 77 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_left
# 78 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_left
# 79 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 80 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 81 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 82 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 83 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	delay_8
# 84 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	step_end
