Route110_TrickHouseEnd_MapScripts::
# 2 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHouseEnd_OnResume
# 3 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEnd_OnTransition
# 7 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEnd_OnWarp
# 4 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Route110_TrickHouseEnd_EventScript_CloseDoor
	.2byte 0


Route110_TrickHouseEnd_OnResume::
# 11 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route110_TrickHouseEnd_OnResume_2
Route110_TrickHouseEnd_OnResume_1:
	end

Route110_TrickHouseEnd_OnResume_2:
# 12 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile
	goto Route110_TrickHouseEnd_OnResume_1


Route110_TrickHouseEnd_OnTransition::
# 18 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_1, 0
# 19 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_2, 0
# 20 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special SetTrickHouseNuggetFlag
	end


# 24 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 25 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnWarp:
# 26 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, Route110_TrickHouseEnd_EventScript_SetTrickMasterPos
# 27 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.2byte 0

Route110_TrickHouseEnd_EventScript_SetTrickMasterPos::
# 32 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	addobject LOCALID_TRICK_MASTER_END
# 33 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	showobjectat LOCALID_TRICK_MASTER_END, MAP_ROUTE110_TRICK_HOUSE_END
# 34 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_EAST
	end


Route110_TrickHouseEnd_EventScript_CloseDoor::
# 39 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_1, 1
# 40 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile
# 41 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special DrawWholeMapView
	end


Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile::
# 46 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setmetatile 10, 1, METATILE_GenericBuilding_TrickHouse_Door_Closed, TRUE
	return


Route110_TrickHouseEnd_EventScript_TrickMaster::
# 51 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	lock
# 52 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	faceplayer
# 53 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouveMadeItToMe, MSGBOX_DEFAULT
# 54 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_2, 1
# 55 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 56 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 0, Route110_TrickHouseEnd_EventScript_TrickMaster_3
# 58 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 1, Route110_TrickHouseEnd_EventScript_TrickMaster_4
# 60 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 2, Route110_TrickHouseEnd_EventScript_TrickMaster_5
# 62 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 3, Route110_TrickHouseEnd_EventScript_TrickMaster_6
# 64 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 4, Route110_TrickHouseEnd_EventScript_TrickMaster_7
# 66 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 5, Route110_TrickHouseEnd_EventScript_TrickMaster_8
# 68 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 6, Route110_TrickHouseEnd_EventScript_TrickMaster_9
# 70 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 7, Route110_TrickHouseEnd_EventScript_TrickMaster_10
Route110_TrickHouseEnd_EventScript_TrickMaster_1:
	end

Route110_TrickHouseEnd_EventScript_TrickMaster_3:
# 57 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle1
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_4:
# 59 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle2
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_5:
# 61 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle3
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_6:
# 63 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle4
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_7:
# 65 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle5
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_8:
# 67 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle6
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_9:
# 69 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle7
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_10:
# 71 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1


Route110_TrickHouseEnd_EventScript_CompletedPuzzle1::
# 77 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToPlantTrees, MSGBOX_DEFAULT
# 78 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 79 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 80 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 81 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle1_2
Route110_TrickHouseEnd_EventScript_CompletedPuzzle1_1:
# 84 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 85 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 86 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 87 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle1_2:
# 82 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle1_1


Route110_TrickHouseEnd_EventScript_CompletedPuzzle2::
# 92 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMaze, MSGBOX_DEFAULT
# 93 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 94 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 95 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_TIMER_BALL
# 96 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle2_2
Route110_TrickHouseEnd_EventScript_CompletedPuzzle2_1:
# 99 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 100 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 101 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 102 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle2_2:
# 97 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle2_1


Route110_TrickHouseEnd_EventScript_CompletedPuzzle3::
# 107 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToPreparePanels, MSGBOX_DEFAULT
# 108 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 109 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 110 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_HARD_STONE
# 111 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle3_2
Route110_TrickHouseEnd_EventScript_CompletedPuzzle3_1:
# 114 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 115 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 116 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 117 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle3_2:
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle3_1


Route110_TrickHouseEnd_EventScript_CompletedPuzzle4::
# 122 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToShoveBoulders, MSGBOX_DEFAULT
# 123 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 124 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 125 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_SMOKE_BALL
# 126 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle4_2
Route110_TrickHouseEnd_EventScript_CompletedPuzzle4_1:
# 129 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 130 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 131 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 132 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle4_2:
# 127 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle4_1


Route110_TrickHouseEnd_EventScript_CompletedPuzzle5::
# 137 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls, MSGBOX_DEFAULT
# 138 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 139 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 140 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_TM_TAUNT
# 141 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle5_2
Route110_TrickHouseEnd_EventScript_CompletedPuzzle5_1:
# 144 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 145 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 146 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 147 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle5_2:
# 142 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle5_1


Route110_TrickHouseEnd_EventScript_CompletedPuzzle6::
# 152 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToInstallDoors, MSGBOX_DEFAULT
# 153 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 154 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 155 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_MAGNET
# 156 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle6_2
Route110_TrickHouseEnd_EventScript_CompletedPuzzle6_1:
# 159 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 160 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 161 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 162 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle6_2:
# 157 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle6_1


Route110_TrickHouseEnd_EventScript_CompletedPuzzle7::
# 167 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightSettingUpArrows, MSGBOX_DEFAULT
# 168 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 169 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 170 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_PP_MAX
# 171 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle7_2
Route110_TrickHouseEnd_EventScript_CompletedPuzzle7_1:
# 174 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 175 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 176 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 177 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle7_2:
# 172 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle7_1


Route110_TrickHouseEnd_EventScript_CompletedPuzzle8::
# 182 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightPolishingFloors, MSGBOX_DEFAULT
# 183 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 184 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_2
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_1:
# 187 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_5
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_4:
# 190 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_8
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_7:
# 193 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_11
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_10:
# 196 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 30
# 197 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry, MSGBOX_DEFAULT
# 198 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 199 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_FacePlayer
# 200 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 30
# 202 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent, MSGBOX_DEFAULT
# 203 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 204 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_ChooseTent
# 205 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_14
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_13:
# 208 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_LeavingOnJourney, MSGBOX_DEFAULT
# 209 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 210 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special ResetTrickHouseNuggetFlag
# 211 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_2:
# 185 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwaySouth
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_1

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_5:
# 188 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayNorth
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_4

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_8:
# 191 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayWest
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_7

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_11:
# 194 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayEast
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_10

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_14:
# 206 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_NoRoomForTent
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_13


Route110_TrickHouseEnd_EventScript_ChooseTent::
# 216 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	multichoice 0, 0, MULTI_TENT, TRUE
# 217 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	switch VAR_RESULT
# 218 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 0, Route110_TrickHouseEnd_EventScript_ChooseTent_3
Route110_TrickHouseEnd_EventScript_ChooseTent_1:
# 221 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_GiveBlueTent
	return

Route110_TrickHouseEnd_EventScript_ChooseTent_3:
# 219 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_GiveRedTent
	goto Route110_TrickHouseEnd_EventScript_ChooseTent_1


Route110_TrickHouseEnd_EventScript_GiveRedTent::
# 225 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	givedecoration DECOR_RED_TENT
	return


Route110_TrickHouseEnd_EventScript_GiveBlueTent::
# 230 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	givedecoration DECOR_BLUE_TENT
	return


Route110_TrickHouseEnd_EventScript_TrickMasterExit::
# 235 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouse_Movement_TrickMasterSpin
# 236 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_M_EXPLOSION
# 238 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 239 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	removeobject LOCALID_TRICK_MASTER_END
# 241 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	addvar VAR_TRICK_HOUSE_LEVEL, 1
	return


Route110_TrickHouseEnd_EventScript_BagFull::
# 246 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Common_EventScript_BagIsFull
# 247 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_NoRoomForThis, MSGBOX_DEFAULT
# 248 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
	return


Route110_TrickHouseEnd_EventScript_NoRoomForTent::
# 253 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 254 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_NoRoomInPC, MSGBOX_DEFAULT
# 255 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
	return


Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwaySouth::
# 260 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterDown
# 261 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
	return


Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayNorth::
# 266 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterUp
# 267 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
	return


Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayWest::
# 272 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterLeft
# 273 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
	return


Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayEast::
# 278 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterRight
# 279 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
	return


Route110_TrickHouseEnd_EventScript_TrickMasterExitTrigger::
# 284 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	lockall
# 285 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_WEST
# 286 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_PIN
# 287 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_ExclamationMark
# 288 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 289 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 20
# 290 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouseEnd_Movement_TrickMasterSurprise
# 291 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 292 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_M_EXPLOSION
# 293 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 294 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 295 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YoureIgnoringMe, MSGBOX_DEFAULT
# 296 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 297 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_PLAYER, Route110_TrickHouseEnd_Movement_KeepPlayerInRoom
# 298 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 299 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 4
# 300 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_EAST
# 301 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	releaseall
	end


# 305 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Movement_KeepPlayerInRoom:
# 306 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	walk_down
# 307 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	step_end

# 310 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Movement_TrickMasterSurprise:
# 311 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	jump_in_place_left
# 312 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	step_end

Route110_TrickHouseEnd_Text_YouveMadeItToMe::
# 315 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Aak!\n"
	.string "You've made it to me?\l"
	.string "Hmmm… You're sharp!$"

Route110_TrickHouseEnd_Text_AllNightToPlantTrees::
# 321 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to plant all those\n"
	.string "trees…\p"
	.string "You're almost my equal in greatness by\n"
	.string "one, two, three, four, five, six places!$"

Route110_TrickHouseEnd_Text_AllNightToMakeMaze::
# 328 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to make the maze…\p"
	.string "You're almost my equal in greatness by\n"
	.string "one, two, three, four, five places!$"

Route110_TrickHouseEnd_Text_AllNightToPreparePanels::
# 334 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to prepare\n"
	.string "the wall panels…\p"
	.string "You're almost my equal in greatness by\n"
	.string "one, two, three, four places!$"

Route110_TrickHouseEnd_Text_AllNightToShoveBoulders::
# 341 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to shove in those\n"
	.string "boulders…\p"
	.string "You're almost my equal in greatness by\n"
	.string "one, two, three places!$"

Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls::
# 348 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to make MECHADOLLS\n"
	.string "and another to think up the quiz…\p"
	.string "You're almost my equal in greatness by\n"
	.string "one, two places!$"

Route110_TrickHouseEnd_Text_AllNightToInstallDoors::
# 355 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to install\n"
	.string "the doors…\p"
	.string "You're almost my equal in greatness!$"

Route110_TrickHouseEnd_Text_AllNightSettingUpArrows::
# 361 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night setting up arrows…\p"
	.string "You're my equal in greatness!$"

Route110_TrickHouseEnd_Text_AllNightPolishingFloors::
# 366 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night polishing floors…\p"
	.string "You're above me in greatness!\n"
	.string "Possibly…$"

Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry::
# 372 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Wh-what should I do?\n"
	.string "My fountain of ideas for tricks has\l"
	.string "run dry…\p"
	.string "Perhaps it is time I toured the country\n"
	.string "on a quest to devise new tricks…$"

Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent::
# 380 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I hate to admit defeat, but you have\n"
	.string "bested me!\p"
	.string "Still, you must have been reeled in by\n"
	.string "my charisma for you to visit me again\l"
	.string "and again. Yes, you must have!\p"
	.string "But that has nothing to do with my\n"
	.string "losing!\p"
	.string "In recognition of the friendship\n"
	.string "between you, the driven, and the genius\l"
	.string "that is myself, I demand that you take\l"
	.string "this keepsake!\p"
	.string "Actually there are two--\n"
	.string "a RED TENT and a BLUE TENT.\l"
	.string "Which do you prefer?$"

Route110_TrickHouseEnd_Text_NoRoomInPC::
# 397 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What? No room in your PC?\n"
	.string "What am I to make of that?\p"
	.string "I wish I could say that, but I am much\n"
	.string "too kind and caring, so come back later!$"

Route110_TrickHouseEnd_Text_LeavingOnJourney::
# 404 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "… … … … … …\p"
	.string "I am leaving on a journey of discovery.\n"
	.string "A quest in search of new tricks.\p"
	.string "I wish that you will one day visit and\n"
	.string "entertain me again.\p"
	.string "And now, farewell!$"

Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward::
# 413 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Fine!\n"
	.string "You have earned this reward!$"

Route110_TrickHouseEnd_Text_NoRoomForThis::
# 418 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What? Have you no room for this?\n"
	.string "What manner of items do you carry?\p"
	.string "But fine, since you've reached me,\n"
	.string "your reward will be with me till later.$"

Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou::
# 425 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Scrub that smug smirk from your face!\n"
	.string "It's much too early to think you've won!\p"
	.string "I'll make new tricks to stump you, I will.\n"
	.string "You may mock me only when you're done.\p"
	.string "Come back for the next exciting\n"
	.string "installment!$"

Route110_TrickHouseEnd_Text_YoureIgnoringMe::
# 434 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Now, now! You're ignoring me now?\n"
	.string "Now that, I consider heartbreaking!$"
