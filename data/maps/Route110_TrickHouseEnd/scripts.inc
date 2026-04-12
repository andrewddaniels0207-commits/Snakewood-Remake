# 1 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 2 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_MapScripts::
# 3 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 2 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 4 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHouseEnd_OnResume
# 5 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 3 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 6 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEnd_OnTransition
# 7 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 7 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 8 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEnd_OnWarp
# 9 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 4 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 10 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.byte 0
# 12 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 13 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 5 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 15 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Route110_TrickHouseEnd_EventScript_CloseDoor
# 16 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.2byte 0
# 17 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 18 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 19 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnResume::
# 20 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 11 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 21 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_TEMP_1, 1
# 22 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_OnResume_2
# 23 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnResume_1:
# 24 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 25 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 26 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnResume_2:
# 27 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 12 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 28 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile
# 29 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_OnResume_1
# 30 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 31 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 32 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnTransition::
# 33 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 18 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 34 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_1, 0
# 35 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 19 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 36 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_2, 0
# 37 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 20 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 38 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special SetTrickHouseNuggetFlag
# 39 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 40 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 41 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 42 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 24 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 43 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 44 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 25 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 45 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnWarp:
# 46 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 26 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 47 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, Route110_TrickHouseEnd_EventScript_SetTrickMasterPos
# 48 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 27 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 49 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.2byte 0
# 50 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 51 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_SetTrickMasterPos::
# 52 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 32 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 53 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	addobject LOCALID_TRICK_MASTER_END
# 54 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 33 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 55 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	showobjectat LOCALID_TRICK_MASTER_END, MAP_ROUTE110_TRICK_HOUSE_END
# 56 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 34 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 57 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_EAST
# 58 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 59 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 60 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 61 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CloseDoor::
# 62 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 39 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 63 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_1, 1
# 64 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 40 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 65 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile
# 66 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 41 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 67 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special DrawWholeMapView
# 68 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 69 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 70 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 71 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile::
# 72 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 46 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 73 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setmetatile 10, 1, METATILE_GenericBuilding_TrickHouse_Door_Closed, TRUE
# 74 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 75 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 76 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 77 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster::
# 78 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 51 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 79 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	lock
# 80 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 52 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 81 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	faceplayer
# 82 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 53 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 83 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouveMadeItToMe, MSGBOX_DEFAULT
# 84 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 54 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 85 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_2, 1
# 86 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 55 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 87 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 88 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 56 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 89 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 0, Route110_TrickHouseEnd_EventScript_TrickMaster_3
# 90 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 58 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 91 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 1, Route110_TrickHouseEnd_EventScript_TrickMaster_4
# 92 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 60 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 93 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 2, Route110_TrickHouseEnd_EventScript_TrickMaster_5
# 94 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 62 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 95 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 3, Route110_TrickHouseEnd_EventScript_TrickMaster_6
# 96 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 64 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 97 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 4, Route110_TrickHouseEnd_EventScript_TrickMaster_7
# 98 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 66 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 99 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 5, Route110_TrickHouseEnd_EventScript_TrickMaster_8
# 100 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 68 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 101 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 6, Route110_TrickHouseEnd_EventScript_TrickMaster_9
# 102 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 70 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 103 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 7, Route110_TrickHouseEnd_EventScript_TrickMaster_10
# 104 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster_1:
# 105 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 106 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 107 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster_3:
# 108 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 57 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 109 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle1
# 110 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1
# 111 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster_4:
# 113 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 59 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 114 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle2
# 115 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1
# 116 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 117 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster_5:
# 118 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 61 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 119 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle3
# 120 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1
# 121 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 122 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster_6:
# 123 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 63 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 124 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle4
# 125 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1
# 126 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 127 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster_7:
# 128 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 65 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 129 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle5
# 130 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1
# 131 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 132 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster_8:
# 133 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 67 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 134 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle6
# 135 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1
# 136 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 137 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster_9:
# 138 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 69 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 139 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle7
# 140 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1
# 141 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 142 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster_10:
# 143 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 71 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 144 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8
# 145 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1
# 146 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 147 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 148 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle1::
# 149 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 77 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 150 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToPlantTrees, MSGBOX_DEFAULT
# 151 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 78 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 152 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 153 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 79 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 154 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 155 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 80 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 156 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 157 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 81 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 158 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 159 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle1_2
# 160 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle1_1:
# 161 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 84 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 162 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 163 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 85 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 164 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 165 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 86 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 166 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 167 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 87 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 168 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 169 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 170 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 171 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle1_2:
# 172 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 82 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 173 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
# 174 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle1_1
# 175 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 176 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 177 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle2::
# 178 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 92 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 179 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMaze, MSGBOX_DEFAULT
# 180 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 93 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 181 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 182 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 94 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 183 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 184 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 95 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 185 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_TIMER_BALL
# 186 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 96 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 187 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 188 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle2_2
# 189 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle2_1:
# 190 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 99 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 191 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 192 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 100 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 193 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 194 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 101 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 195 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 196 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 102 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 197 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 198 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 199 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 200 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle2_2:
# 201 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 97 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 202 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
# 203 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle2_1
# 204 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 205 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 206 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle3::
# 207 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 107 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 208 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToPreparePanels, MSGBOX_DEFAULT
# 209 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 108 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 210 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 211 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 109 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 212 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 213 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 110 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 214 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_HARD_STONE
# 215 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 111 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 216 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 217 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle3_2
# 218 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle3_1:
# 219 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 114 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 220 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 221 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 115 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 222 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 223 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 116 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 224 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 225 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 117 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 226 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 227 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 228 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 229 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle3_2:
# 230 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 231 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
# 232 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle3_1
# 233 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 234 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 235 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle4::
# 236 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 122 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 237 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToShoveBoulders, MSGBOX_DEFAULT
# 238 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 123 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 239 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 240 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 124 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 241 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 242 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 125 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 243 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_SMOKE_BALL
# 244 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 126 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 245 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 246 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle4_2
# 247 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle4_1:
# 248 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 129 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 249 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 250 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 130 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 251 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 252 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 131 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 253 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 254 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 132 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 255 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 256 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 257 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 258 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle4_2:
# 259 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 127 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 260 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
# 261 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle4_1
# 262 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 263 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 264 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle5::
# 265 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 137 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 266 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls, MSGBOX_DEFAULT
# 267 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 138 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 268 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 269 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 139 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 270 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 271 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 140 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 272 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_TM_TAUNT
# 273 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 141 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 274 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 275 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle5_2
# 276 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle5_1:
# 277 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 144 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 278 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 279 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 145 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 280 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 281 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 146 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 282 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 283 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 147 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 284 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 285 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 286 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 287 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle5_2:
# 288 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 142 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 289 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
# 290 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle5_1
# 291 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 292 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 293 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle6::
# 294 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 152 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 295 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToInstallDoors, MSGBOX_DEFAULT
# 296 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 153 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 297 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 298 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 154 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 299 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 300 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 155 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 301 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_MAGNET
# 302 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 156 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 303 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 304 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle6_2
# 305 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle6_1:
# 306 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 159 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 307 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 308 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 160 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 309 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 310 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 161 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 311 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 312 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 162 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 313 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 314 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 315 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 316 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle6_2:
# 317 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 157 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 318 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
# 319 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle6_1
# 320 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 321 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 322 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle7::
# 323 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 167 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 324 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightSettingUpArrows, MSGBOX_DEFAULT
# 325 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 168 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 326 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 327 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 169 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 328 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 329 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 170 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 330 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_PP_MAX
# 331 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 171 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 332 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 333 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle7_2
# 334 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle7_1:
# 335 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 174 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 336 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 337 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 175 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 338 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 339 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 176 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 340 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 341 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 177 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 342 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 343 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 344 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 345 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle7_2:
# 346 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 172 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 347 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_BagFull
# 348 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle7_1
# 349 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 350 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 351 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8::
# 352 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 182 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 353 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightPolishingFloors, MSGBOX_DEFAULT
# 354 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 183 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 355 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 356 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 184 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 357 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 358 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_2
# 359 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_1:
# 360 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 187 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 361 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 362 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_5
# 363 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_4:
# 364 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 190 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 365 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 366 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_8
# 367 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_7:
# 368 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 193 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 369 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 370 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_11
# 371 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_10:
# 372 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 196 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 373 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 30
# 374 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 197 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 375 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry, MSGBOX_DEFAULT
# 376 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 198 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 377 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 378 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 199 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 379 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_FacePlayer
# 380 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 200 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 381 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 382 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 201 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 383 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 30
# 384 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 202 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 385 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent, MSGBOX_DEFAULT
# 386 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 203 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 387 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 388 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 204 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 389 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_ChooseTent
# 390 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 205 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 391 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 392 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_14
# 393 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_13:
# 394 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 208 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 395 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_LeavingOnJourney, MSGBOX_DEFAULT
# 396 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 209 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 397 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 398 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 210 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 399 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special ResetTrickHouseNuggetFlag
# 400 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 211 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 401 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 402 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 403 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 404 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_2:
# 405 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 185 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 406 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwaySouth
# 407 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_1
# 408 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 409 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_5:
# 410 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 188 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 411 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayNorth
# 412 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_4
# 413 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 414 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_8:
# 415 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 191 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 416 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayWest
# 417 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_7
# 418 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 419 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_11:
# 420 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 194 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 421 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayEast
# 422 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_10
# 423 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 424 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_14:
# 425 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 206 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 426 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_NoRoomForTent
# 427 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_13
# 428 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 429 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 430 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_ChooseTent::
# 431 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 216 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 432 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	multichoice 0, 0, MULTI_TENT, TRUE
# 433 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 217 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 434 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	switch VAR_RESULT
# 435 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 218 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 436 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 0, Route110_TrickHouseEnd_EventScript_ChooseTent_3
# 437 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_ChooseTent_1:
# 438 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 221 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 439 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_GiveBlueTent
# 440 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 441 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 442 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_ChooseTent_3:
# 443 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 219 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 444 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_GiveRedTent
# 445 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_ChooseTent_1
# 446 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 447 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 448 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_GiveRedTent::
# 449 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 225 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 450 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	givedecoration DECOR_RED_TENT
# 451 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 452 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 453 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 454 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_GiveBlueTent::
# 455 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 230 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 456 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	givedecoration DECOR_BLUE_TENT
# 457 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 458 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 459 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 460 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterExit::
# 461 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 235 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 462 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouse_Movement_TrickMasterSpin
# 463 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 236 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 464 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 465 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 237 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 466 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_M_EXPLOSION
# 467 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 238 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 468 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 469 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 239 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 470 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 240 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 472 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	removeobject LOCALID_TRICK_MASTER_END
# 473 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 241 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 474 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	addvar VAR_TRICK_HOUSE_LEVEL, 1
# 475 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 476 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 477 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 478 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_BagFull::
# 479 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 246 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 480 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Common_EventScript_BagIsFull
# 481 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 247 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 482 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_NoRoomForThis, MSGBOX_DEFAULT
# 483 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 248 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 484 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
# 485 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 486 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 487 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 488 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_NoRoomForTent::
# 489 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 253 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 490 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 491 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 254 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 492 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_NoRoomInPC, MSGBOX_DEFAULT
# 493 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 255 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 494 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
# 495 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 496 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 497 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 498 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwaySouth::
# 499 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 260 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 500 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterDown
# 501 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 261 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 502 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 503 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 504 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 505 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 506 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayNorth::
# 507 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 266 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 508 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterUp
# 509 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 267 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 510 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 511 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 512 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 513 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 514 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayWest::
# 515 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 272 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 516 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterLeft
# 517 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 273 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 518 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 519 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 520 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 521 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 522 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayEast::
# 523 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 278 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 524 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterRight
# 525 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 279 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 526 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 527 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 528 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 529 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 530 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterExitTrigger::
# 531 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 284 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 532 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	lockall
# 533 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 285 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 534 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_WEST
# 535 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 286 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 536 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_PIN
# 537 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 287 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 538 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_ExclamationMark
# 539 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 288 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 540 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 541 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 289 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 542 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 20
# 543 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 290 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 544 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouseEnd_Movement_TrickMasterSurprise
# 545 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 291 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 546 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 547 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 292 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 548 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_M_EXPLOSION
# 549 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 293 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 550 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 551 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 294 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 552 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 553 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 295 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 554 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YoureIgnoringMe, MSGBOX_DEFAULT
# 555 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 296 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 556 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 557 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 297 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 558 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_PLAYER, Route110_TrickHouseEnd_Movement_KeepPlayerInRoom
# 559 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 298 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 560 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 561 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 299 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 562 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 4
# 563 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 300 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 564 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_EAST
# 565 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 301 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 566 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	releaseall
# 567 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 568 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 569 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 570 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 305 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 571 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Movement_KeepPlayerInRoom:
# 572 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 306 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 573 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	walk_down
# 574 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 307 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 575 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	step_end
# 576 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 577 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 310 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 578 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Movement_TrickMasterSurprise:
# 579 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 311 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 580 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	jump_in_place_left
# 581 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 312 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 582 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	step_end
# 583 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 584 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_YouveMadeItToMe::
# 585 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 315 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 586 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Aak!\n"
# 587 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You've made it to me?\l"
# 588 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Hmmm… You're sharp!$"
# 589 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 590 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToPlantTrees::
# 591 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 321 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 592 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to plant all those\n"
# 593 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "trees…\p"
# 594 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness by\n"
# 595 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "one, two, three, four, five, six places!$"
# 596 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 597 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToMakeMaze::
# 598 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 328 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 599 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to make the maze…\p"
# 600 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness by\n"
# 601 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "one, two, three, four, five places!$"
# 602 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 603 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToPreparePanels::
# 604 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 334 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 605 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to prepare\n"
# 606 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "the wall panels…\p"
# 607 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness by\n"
# 608 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "one, two, three, four places!$"
# 609 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 610 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToShoveBoulders::
# 611 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 341 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 612 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to shove in those\n"
# 613 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "boulders…\p"
# 614 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness by\n"
# 615 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "one, two, three places!$"
# 616 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 617 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls::
# 618 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 348 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 619 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to make MECHADOLLS\n"
# 620 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "and another to think up the quiz…\p"
# 621 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness by\n"
# 622 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "one, two places!$"
# 623 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 624 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToInstallDoors::
# 625 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 355 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 626 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to install\n"
# 627 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "the doors…\p"
# 628 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness!$"
# 629 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 630 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightSettingUpArrows::
# 631 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 361 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 632 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night setting up arrows…\p"
# 633 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're my equal in greatness!$"
# 634 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 635 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightPolishingFloors::
# 636 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 366 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 637 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night polishing floors…\p"
# 638 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're above me in greatness!\n"
# 639 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Possibly…$"
# 640 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 641 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry::
# 642 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 372 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 643 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Wh-what should I do?\n"
# 644 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "My fountain of ideas for tricks has\l"
# 645 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "run dry…\p"
# 646 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Perhaps it is time I toured the country\n"
# 647 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "on a quest to devise new tricks…$"
# 648 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 649 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent::
# 650 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 380 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 651 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I hate to admit defeat, but you have\n"
# 652 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "bested me!\p"
# 653 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Still, you must have been reeled in by\n"
# 654 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "my charisma for you to visit me again\l"
# 655 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "and again. Yes, you must have!\p"
# 656 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "But that has nothing to do with my\n"
# 657 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "losing!\p"
# 658 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "In recognition of the friendship\n"
# 659 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "between you, the driven, and the genius\l"
# 660 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "that is myself, I demand that you take\l"
# 661 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "this keepsake!\p"
# 662 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Actually there are two--\n"
# 663 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "a RED TENT and a BLUE TENT.\l"
# 664 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Which do you prefer?$"
# 665 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 666 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_NoRoomInPC::
# 667 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 397 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 668 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What? No room in your PC?\n"
# 669 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What am I to make of that?\p"
# 670 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I wish I could say that, but I am much\n"
# 671 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "too kind and caring, so come back later!$"
# 672 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 673 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_LeavingOnJourney::
# 674 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 404 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 675 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "… … … … … …\p"
# 676 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I am leaving on a journey of discovery.\n"
# 677 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "A quest in search of new tricks.\p"
# 678 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I wish that you will one day visit and\n"
# 679 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "entertain me again.\p"
# 680 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "And now, farewell!$"
# 681 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 682 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward::
# 683 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 413 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 684 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Fine!\n"
# 685 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You have earned this reward!$"
# 686 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 687 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_NoRoomForThis::
# 688 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 418 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 689 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What? Have you no room for this?\n"
# 690 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What manner of items do you carry?\p"
# 691 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "But fine, since you've reached me,\n"
# 692 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "your reward will be with me till later.$"
# 693 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 694 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou::
# 695 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 425 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 696 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Scrub that smug smirk from your face!\n"
# 697 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It's much too early to think you've won!\p"
# 698 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I'll make new tricks to stump you, I will.\n"
# 699 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You may mock me only when you're done.\p"
# 700 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Come back for the next exciting\n"
# 701 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "installment!$"
# 702 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 703 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_YoureIgnoringMe::
# 704 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 434 "data/maps/Route110_TrickHouseEnd/scripts.pory"
# 705 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Now, now! You're ignoring me now?\n"
# 706 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Now that, I consider heartbreaking!$"
