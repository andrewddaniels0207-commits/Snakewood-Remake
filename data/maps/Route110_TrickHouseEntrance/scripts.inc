# 1 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 2 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_MapScripts::
# 3 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 2 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 4 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEntrance_OnTransition
# 5 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 6 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 6 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEntrance_OnWarp
# 7 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 3 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 8 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.byte 0
# 10 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 11 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 4 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 13 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_BeginChallenge
# 14 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.2byte 0
# 15 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 16 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 17 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition::
# 18 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 10 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 19 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_LANDMARK_TRICK_HOUSE
# 20 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 11 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 21 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 1
# 22 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_OnTransition_2
# 23 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_1:
# 24 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 14 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 25 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
# 26 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_OnTransition_5
# 27 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_4:
# 28 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 17 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 29 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1
# 30 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_OnTransition_8
# 31 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_7:
# 32 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 20 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 33 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 34 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_OnTransition_11
# 35 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_10:
# 36 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 23 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 37 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 38 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_OnTransition_14
# 39 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_13:
# 40 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 26 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 41 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_ENTRANCE_STATE, 0
# 42 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_OnTransition_17
# 43 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_16:
# 44 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 29 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 45 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 46 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 30 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 47 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_OnTransition_21
# 48 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 32 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 49 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_OnTransition_22
# 50 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 34 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 51 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_OnTransition_23
# 52 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 36 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 53 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_OnTransition_24
# 54 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_19:
# 55 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 56 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 57 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_2:
# 58 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 12 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 59 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterFromCorridor
# 60 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_OnTransition_1
# 61 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 62 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_5:
# 63 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 15 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 64 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward
# 65 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_OnTransition_4
# 66 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 67 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_8:
# 68 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 18 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 69 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_MoveTrickMasterToDoor
# 70 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_OnTransition_7
# 71 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 72 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_11:
# 73 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 21 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 74 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 75 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_OnTransition_10
# 76 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 77 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_14:
# 78 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 24 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 79 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 80 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_OnTransition_13
# 81 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 82 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_17:
# 83 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 27 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 84 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 85 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_OnTransition_16
# 86 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 87 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_21:
# 88 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 31 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 89 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_ReadyBeingWatchedTrigger
# 90 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_OnTransition_19
# 91 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 92 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_22:
# 93 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 33 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 94 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched1
# 95 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_OnTransition_19
# 96 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 97 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_23:
# 98 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 35 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 99 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched2
# 100 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_OnTransition_19
# 101 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 102 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition_24:
# 103 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 37 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 104 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched3
# 105 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_OnTransition_19
# 106 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 107 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 108 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward::
# 109 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 43 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 111 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 44 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 112 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 8
# 113 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward_2
# 114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward_1:
# 115 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 47 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 116 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 2
# 117 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 118 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 119 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward_2:
# 120 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 45 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 121 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_ReadyToGiveTentReward
# 122 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward_1
# 123 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 124 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 125 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReadyToGiveTentReward::
# 126 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 52 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 127 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 6
# 128 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 130 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 131 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterFromCorridor::
# 132 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 57 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 0
# 134 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 58 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 135 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 136 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 59 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 137 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 138 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 139 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 140 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 141 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle::
# 142 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 64 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 0
# 144 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 65 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 145 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 1
# 146 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_2
# 147 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1:
# 148 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 68 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 149 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 2
# 150 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_5
# 151 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_4:
# 152 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 71 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 153 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 3
# 154 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_8
# 155 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_7:
# 156 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 74 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 157 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 4
# 158 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_11
# 159 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_10:
# 160 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 77 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 161 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 5
# 162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_14
# 163 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_13:
# 164 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 80 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 165 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 6
# 166 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_17
# 167 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_16:
# 168 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 83 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 169 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 7
# 170 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_20
# 171 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_19:
# 172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 86 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 173 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 8
# 174 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_23
# 175 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_22:
# 176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 177 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_2:
# 179 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 66 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 180 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2
# 181 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1
# 182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 183 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_5:
# 184 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 69 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 185 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3
# 186 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_4
# 187 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 188 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_8:
# 189 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 72 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 190 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4
# 191 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_7
# 192 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 193 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_11:
# 194 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 75 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 195 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5
# 196 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_10
# 197 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 198 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_14:
# 199 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 78 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 200 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6
# 201 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_13
# 202 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 203 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_17:
# 204 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 81 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 205 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7
# 206 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_16
# 207 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 208 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_20:
# 209 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 84 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 210 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8
# 211 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_19
# 212 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 213 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_23:
# 214 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 87 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 215 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_FinishedPuzzles
# 216 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_22
# 217 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 218 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 219 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2::
# 220 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 93 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 221 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2_2
# 222 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2_1:
# 223 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 224 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 225 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2_2:
# 226 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 94 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 227 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 228 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2_1
# 229 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 230 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 231 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3::
# 232 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 100 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 233 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3_2
# 234 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3_1:
# 235 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 236 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 237 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3_2:
# 238 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 101 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 239 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 240 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3_1
# 241 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 242 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 243 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4::
# 244 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 107 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 245 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4_2
# 246 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4_1:
# 247 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 248 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 249 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4_2:
# 250 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 108 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 251 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 252 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4_1
# 253 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 254 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 255 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5::
# 256 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 257 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5_2
# 258 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5_1:
# 259 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 260 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 261 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5_2:
# 262 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 115 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 263 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 264 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5_1
# 265 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 266 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 267 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6::
# 268 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 121 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 269 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6_2
# 270 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6_1:
# 271 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 272 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 273 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6_2:
# 274 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 122 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 275 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 276 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6_1
# 277 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 278 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 279 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7::
# 280 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 128 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 281 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7_2
# 282 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7_1:
# 283 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 284 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 285 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7_2:
# 286 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 287 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 288 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7_1
# 289 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 290 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 291 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8::
# 292 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 135 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 293 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8_2
# 294 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8_1:
# 295 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 296 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 297 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8_2:
# 298 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 136 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 299 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 300 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8_1
# 301 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 302 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 303 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FinishedPuzzles::
# 304 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 142 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 305 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 4
# 306 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 307 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 308 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 309 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle::
# 310 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 147 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 311 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 312 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 313 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 314 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 315 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MoveTrickMasterToDoor::
# 316 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 152 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 317 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxyperm LOCALID_TRICK_MASTER, 5, 2
# 318 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 319 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 320 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 321 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReadyBeingWatchedTrigger::
# 322 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 157 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 323 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 0
# 324 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 325 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 326 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 327 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched1::
# 328 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 329 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 330 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 331 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 332 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 333 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched2::
# 334 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 167 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 335 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 336 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 337 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 338 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 339 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched3::
# 340 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 341 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 342 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 343 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 344 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 345 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 346 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 347 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 177 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 348 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnWarp:
# 349 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 350 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_TrickMasterFound
# 351 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 179 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 352 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 0, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot
# 353 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 180 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 354 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 1, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 355 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 181 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 356 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 2, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 357 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 358 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 3, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 359 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 183 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 360 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 4, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 361 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 184 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 362 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 5, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 363 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 185 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 364 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 6, Route110_TrickHouseEntrance_EventScript_SetTrickMasterInFrontOfDoor
# 365 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 186 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 366 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.2byte 0
# 367 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 368 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterFound::
# 369 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 191 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 370 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 371 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 192 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 372 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	showobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 373 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 193 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 374 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_EAST
# 375 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 194 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 376 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 377 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 378 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 379 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 380 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot::
# 381 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 199 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 382 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 383 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 200 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 384 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	hideobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 385 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 201 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 386 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 387 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 202 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 388 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_3
# 389 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 204 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 390 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_4
# 391 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 206 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 392 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_5
# 393 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 208 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 394 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_6
# 395 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 210 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 396 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_7
# 397 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 212 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 398 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_8
# 399 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 214 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 400 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_9
# 401 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 216 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 402 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_10
# 403 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1:
# 404 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 405 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 406 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_3:
# 407 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 203 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 408 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle1
# 409 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1
# 410 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 411 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_4:
# 412 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 205 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 413 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle2
# 414 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1
# 415 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 416 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_5:
# 417 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 207 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 418 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle3
# 419 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1
# 420 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 421 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_6:
# 422 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 209 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 423 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle4
# 424 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1
# 425 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 426 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_7:
# 427 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 211 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 428 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle5
# 429 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1
# 430 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 431 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_8:
# 432 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 213 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 433 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle6
# 434 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1
# 435 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 436 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_9:
# 437 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 215 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 438 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle7
# 439 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1
# 440 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 441 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_10:
# 442 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 217 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 443 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle8
# 444 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1
# 445 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 446 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 447 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle1::
# 448 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 223 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 449 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 6, 3
# 450 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 451 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 452 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 453 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle2::
# 454 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 228 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 455 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 5
# 456 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 457 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 458 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 459 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle3::
# 460 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 233 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 461 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 9, 1
# 462 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 463 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 464 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 465 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle4::
# 466 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 238 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 467 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 3, 1
# 468 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 469 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 470 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 471 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle5::
# 472 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 243 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 473 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 0, 5
# 474 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 475 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 476 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 477 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle6::
# 478 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 248 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 479 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 1
# 480 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 481 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 482 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 483 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle7::
# 484 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 253 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 485 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 8, 1
# 486 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 487 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 488 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 489 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle8::
# 490 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 258 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 491 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 4, 4
# 492 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 493 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 494 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 495 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster::
# 496 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 263 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 497 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 498 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 499 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 500 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 501 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor::
# 502 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 268 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 503 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 504 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 269 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 505 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 506 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 270 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 507 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_NORTH
# 508 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 509 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 510 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 511 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterInFrontOfDoor::
# 512 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 275 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 513 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 514 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 276 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 515 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 516 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 277 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 517 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_SOUTH
# 518 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 519 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 520 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 521 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_BeginChallenge::
# 522 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 282 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 523 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 524 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 283 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 525 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 526 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 284 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 527 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 0
# 528 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_BeginChallenge_2
# 529 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_BeginChallenge_1:
# 530 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 287 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 531 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse, MSGBOX_DEFAULT
# 532 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 288 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 533 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 534 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 289 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 535 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 536 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 290 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 537 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 538 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 291 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 539 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 540 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 292 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 541 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 542 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 293 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 543 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 544 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 294 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 545 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 546 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 295 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 547 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 548 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 296 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 549 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 1
# 550 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 297 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 551 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 0
# 552 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 298 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 553 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 554 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 555 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 556 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_BeginChallenge_2:
# 557 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 285 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 558 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_MeetTrickMaster
# 559 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_BeginChallenge_1
# 560 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 561 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 562 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_UnusedRelease::
# 563 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 303 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 564 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 565 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 566 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 567 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 568 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMaster::
# 569 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 308 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 570 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 571 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 309 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 572 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 573 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 310 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 574 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_TrickMaster_3
# 575 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 312 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 576 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_TrickMaster_4
# 577 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 314 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 578 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_TrickMaster_5
# 579 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 316 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 580 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_TrickMaster_6
# 581 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMaster_1:
# 582 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 583 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 584 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMaster_3:
# 585 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 311 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 586 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster
# 587 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_TrickMaster_1
# 588 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 589 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMaster_4:
# 590 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 313 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 591 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveReward
# 592 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_TrickMaster_1
# 593 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 594 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMaster_5:
# 595 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 315 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 596 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle
# 597 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_TrickMaster_1
# 598 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 599 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMaster_6:
# 600 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 317 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 601 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_MechadollReward
# 602 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_TrickMaster_1
# 603 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 604 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 605 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster::
# 606 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 323 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 607 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 608 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 324 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 609 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 610 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 325 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 611 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 612 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 326 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 613 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 614 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 327 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 615 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 616 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 328 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 617 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 0
# 618 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_2
# 619 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_1:
# 620 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 331 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 621 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 1
# 622 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_5
# 623 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_4:
# 624 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 334 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 625 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 2
# 626 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_8
# 627 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_7:
# 628 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 337 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 629 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 3
# 630 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_11
# 631 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_10:
# 632 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 340 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 633 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 4
# 634 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_14
# 635 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_13:
# 636 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 343 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 637 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 5
# 638 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_17
# 639 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_16:
# 640 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 346 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 641 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 6
# 642 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_20
# 643 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_19:
# 644 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 349 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 645 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 7
# 646 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_23
# 647 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_22:
# 648 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 352 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 649 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 650 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 353 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 651 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1
# 652 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 354 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 653 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warpsilent MAP_ROUTE110_TRICK_HOUSE_ENTRANCE, 6, 2
# 654 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 355 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 655 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 656 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 356 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 657 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 658 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 659 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 660 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_2:
# 661 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 329 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 662 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_FoundBeneathDesk
# 663 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_1
# 664 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 665 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_5:
# 666 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 332 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 667 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_FoundBehindTree
# 668 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_4
# 669 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 670 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_8:
# 671 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 335 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 672 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_FoundInDresser
# 673 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_7
# 674 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 675 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_11:
# 676 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 338 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 677 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_FoundBeyondWindow
# 678 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_10
# 679 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 680 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_14:
# 681 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 341 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 682 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_FoundInPlanter
# 683 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_13
# 684 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 685 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_17:
# 686 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 344 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 687 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_FoundInCupboard
# 688 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_16
# 689 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 690 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_20:
# 691 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 347 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 692 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_FoundBehindWindow
# 693 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_19
# 694 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 695 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_23:
# 696 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 350 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 697 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_FoundBeneathCushion
# 698 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_22
# 699 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 700 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 701 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeneathDesk::
# 702 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 361 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 703 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk, MSGBOX_DEFAULT
# 704 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 705 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 706 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 707 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBehindTree::
# 708 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 366 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 709 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindTree, MSGBOX_DEFAULT
# 710 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 711 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 712 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 713 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInDresser::
# 714 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 371 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 715 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInDresser, MSGBOX_DEFAULT
# 716 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 717 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 718 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 719 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeyondWindow::
# 720 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 376 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 721 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConealedBeyondWindow, MSGBOX_DEFAULT
# 722 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 723 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 724 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 725 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInPlanter::
# 726 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 381 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 727 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInPlanter, MSGBOX_DEFAULT
# 728 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 729 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 730 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 731 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInCupboard::
# 732 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 386 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 733 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInCupboard, MSGBOX_DEFAULT
# 734 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 735 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 736 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 737 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBehindWindow::
# 738 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 391 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 739 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindWindow, MSGBOX_DEFAULT
# 740 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 741 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 742 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 743 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeneathCushion::
# 744 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 396 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 745 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion, MSGBOX_DEFAULT
# 746 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 747 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 748 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 749 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 400 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 750 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouse_Movement_TrickMasterSpin:
# 751 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 401 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 752 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 753 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 402 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 754 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 755 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 403 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 756 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 757 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 404 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 758 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 759 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 405 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 760 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_down
# 761 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 406 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 762 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 763 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 407 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 764 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 765 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 408 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 766 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 767 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 409 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 768 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 769 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 770 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouse_Movement_TrickMasterJumpAway::
# 771 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 413 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 772 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 773 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 414 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 774 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	disable_anim
# 775 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 415 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 776 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 777 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 416 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 778 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 779 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 417 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 780 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 781 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 418 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 782 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 783 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 419 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 784 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 785 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 420 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 786 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 787 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 421 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 788 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 789 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 790 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 791 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 792 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MeetTrickMaster::
# 793 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 425 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 794 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster, MSGBOX_DEFAULT
# 795 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 796 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 797 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 798 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle::
# 799 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 430 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 800 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick, MSGBOX_DEFAULT
# 801 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 431 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 802 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 803 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 432 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 804 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 805 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 433 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 806 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 807 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 434 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 808 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 809 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 435 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 810 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_ExclamationMark
# 811 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 436 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 812 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 813 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 437 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 814 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_Delay48
# 815 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 438 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 816 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 817 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 439 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 818 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges, MSGBOX_DEFAULT
# 819 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 440 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 820 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFasterUp
# 821 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 441 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 822 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 823 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 442 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 824 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 825 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 826 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 827 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 828 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward::
# 829 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 447 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 830 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 831 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 448 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 832 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 833 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 449 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 834 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward, MSGBOX_DEFAULT
# 835 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 450 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 836 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 1
# 837 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GiveReward_2
# 838 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_1:
# 839 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 453 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 840 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 2
# 841 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GiveReward_5
# 842 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_4:
# 843 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 456 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 844 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 3
# 845 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GiveReward_8
# 846 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_7:
# 847 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 459 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 848 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 4
# 849 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GiveReward_11
# 850 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_10:
# 851 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 462 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 852 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 5
# 853 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GiveReward_14
# 854 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_13:
# 855 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 465 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 856 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 6
# 857 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GiveReward_17
# 858 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_16:
# 859 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 468 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 860 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 7
# 861 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GiveReward_20
# 862 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_19:
# 863 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 864 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 865 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_2:
# 866 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 451 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 867 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward
# 868 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_1
# 869 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 870 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_5:
# 871 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 454 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 872 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward
# 873 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_4
# 874 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 875 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_8:
# 876 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 457 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 877 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward
# 878 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_7
# 879 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 880 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_11:
# 881 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 460 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 882 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward
# 883 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_10
# 884 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 885 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_14:
# 886 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 463 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 887 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward
# 888 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_13
# 889 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 890 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_17:
# 891 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 466 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 892 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward
# 893 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_16
# 894 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 895 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward_20:
# 896 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 469 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 897 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward
# 898 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_19
# 899 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 900 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 901 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward::
# 902 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 475 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 903 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 904 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 476 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 905 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 906 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward_2
# 907 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward_1:
# 908 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 479 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 909 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 910 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward_5
# 911 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward_4:
# 912 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 482 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 913 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 914 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 483 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 915 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 916 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 917 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 918 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward_2:
# 919 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 477 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 920 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GotReward
# 921 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward_1
# 922 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 923 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward_5:
# 924 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 480 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 925 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_BagIsFull
# 926 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward_4
# 927 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 928 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 929 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward::
# 930 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 488 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 931 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TIMER_BALL
# 932 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 489 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 933 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 934 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward_2
# 935 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward_1:
# 936 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 492 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 937 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 938 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward_5
# 939 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward_4:
# 940 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 495 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 941 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 942 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 496 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 943 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 944 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 945 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 946 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward_2:
# 947 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 490 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 948 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GotReward
# 949 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward_1
# 950 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 951 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward_5:
# 952 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 493 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 953 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_BagIsFull
# 954 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward_4
# 955 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 956 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 957 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward::
# 958 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 501 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 959 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_HARD_STONE
# 960 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 502 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 961 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 962 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward_2
# 963 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward_1:
# 964 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 505 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 965 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 966 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward_5
# 967 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward_4:
# 968 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 508 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 969 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 970 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 509 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 971 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 972 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 973 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 974 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward_2:
# 975 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 503 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 976 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GotReward
# 977 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward_1
# 978 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 979 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward_5:
# 980 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 506 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 981 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_BagIsFull
# 982 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward_4
# 983 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 984 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 985 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward::
# 986 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 514 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 987 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_SMOKE_BALL
# 988 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 515 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 989 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 990 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward_2
# 991 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward_1:
# 992 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 518 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 993 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 994 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward_5
# 995 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward_4:
# 996 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 521 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 997 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 998 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 522 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 999 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1000 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1001 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1002 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward_2:
# 1003 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 516 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1004 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GotReward
# 1005 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward_1
# 1006 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1007 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward_5:
# 1008 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 519 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1009 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_BagIsFull
# 1010 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward_4
# 1011 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1012 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1013 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward::
# 1014 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 527 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1015 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_TAUNT
# 1016 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 528 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1017 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 1018 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward_2
# 1019 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward_1:
# 1020 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 531 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1021 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 1022 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward_5
# 1023 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward_4:
# 1024 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 534 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1025 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 1026 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 535 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1027 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1028 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1029 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1030 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward_2:
# 1031 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 529 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1032 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GotReward
# 1033 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward_1
# 1034 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1035 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward_5:
# 1036 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 532 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1037 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_BagIsFull
# 1038 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward_4
# 1039 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1040 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1041 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward::
# 1042 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 540 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1043 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_MAGNET
# 1044 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 541 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1045 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 1046 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward_2
# 1047 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward_1:
# 1048 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 544 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1049 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 1050 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward_5
# 1051 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward_4:
# 1052 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 547 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1053 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 1054 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 548 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1055 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1056 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1057 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1058 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward_2:
# 1059 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 542 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1060 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GotReward
# 1061 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward_1
# 1062 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1063 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward_5:
# 1064 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 545 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1065 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_BagIsFull
# 1066 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward_4
# 1067 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1068 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1069 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward::
# 1070 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 553 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1071 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_PP_MAX
# 1072 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 554 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1073 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 1074 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward_2
# 1075 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward_1:
# 1076 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 557 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1077 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 1078 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward_5
# 1079 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward_4:
# 1080 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 560 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1081 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 1082 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 561 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1083 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1084 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1085 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1086 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward_2:
# 1087 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 555 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1088 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GotReward
# 1089 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward_1
# 1090 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1091 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward_5:
# 1092 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 558 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1093 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_BagIsFull
# 1094 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward_4
# 1095 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1096 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1097 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GotReward::
# 1098 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 566 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1099 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 1100 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 567 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1101 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 1102 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 568 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1103 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFasterUp
# 1104 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 569 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1105 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 1106 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 570 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1107 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1108 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1109 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1111 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MechadollReward::
# 1112 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 575 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1113 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 1114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 576 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1115 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 1116 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 577 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1117 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_MechadollWhichTent, MSGBOX_DEFAULT
# 1118 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 578 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1119 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_ChooseTent
# 1120 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 579 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1121 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 1122 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_MechadollReward_2
# 1123 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MechadollReward_1:
# 1124 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 582 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1125 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 1126 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_MechadollReward_5
# 1127 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MechadollReward_4:
# 1128 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 585 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_PCFullAgain, MSGBOX_DEFAULT
# 1130 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 586 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1131 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1132 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1134 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MechadollReward_2:
# 1135 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 580 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1136 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_ReceivedTent
# 1137 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_MechadollReward_1
# 1138 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1139 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MechadollReward_5:
# 1140 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 583 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1141 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 1142 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_MechadollReward_4
# 1143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1144 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1145 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ChooseTent::
# 1146 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 591 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1147 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	multichoice 0, 0, MULTI_TENT, TRUE
# 1148 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 592 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1149 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 1150 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 593 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1151 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_ChooseTent_3
# 1152 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ChooseTent_1:
# 1153 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 596 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1154 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveBlueTent
# 1155 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1156 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1157 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ChooseTent_3:
# 1158 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 594 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1159 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveRedTent
# 1160 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_ChooseTent_1
# 1161 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1163 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveRedTent::
# 1164 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 600 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1165 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_RED_TENT
# 1166 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1167 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1168 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1169 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveBlueTent::
# 1170 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 605 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1171 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_BLUE_TENT
# 1172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1173 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1174 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1175 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReceivedTent::
# 1176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 610 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1177 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ThenFarewell, MSGBOX_DEFAULT
# 1178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 611 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1179 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 1180 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 612 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1181 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 1182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 613 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1183 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 1184 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 614 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1185 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 1186 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 615 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1187 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 1188 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 616 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1189 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 1190 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 617 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1191 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 1192 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 618 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1193 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 1194 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 619 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1195 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 1196 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 620 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1197 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 1198 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 621 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1199 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 1200 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 622 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1201 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1202 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1203 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1204 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1205 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_Door::
# 1206 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 627 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1207 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 1208 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 628 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1209 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 1210 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 629 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1211 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_Door_3
# 1212 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 631 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1213 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_Door_4
# 1214 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 633 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1215 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_Door_5
# 1216 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 635 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1217 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_Door_6
# 1218 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_Door_1:
# 1219 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1220 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1221 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_Door_3:
# 1222 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 630 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1223 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_ItsAScroll
# 1224 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_Door_1
# 1225 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1226 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_Door_4:
# 1227 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 632 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1228 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GoInHolePrompt
# 1229 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_Door_1
# 1230 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1231 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_Door_5:
# 1232 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 634 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1233 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote
# 1234 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_Door_1
# 1235 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1236 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_Door_6:
# 1237 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 636 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1238 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage
# 1239 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_Door_1
# 1240 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1241 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1242 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ItsAScroll::
# 1243 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 642 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1244 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
# 1245 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 643 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1246 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1247 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1248 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1249 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1250 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GoInHolePrompt::
# 1251 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 648 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1252 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll, MSGBOX_YESNO
# 1253 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 649 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1254 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 1255 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 650 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1256 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
# 1257 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GoInHolePrompt_2
# 1258 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GoInHolePrompt_1:
# 1259 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 653 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1260 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1261 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1262 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1263 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GoInHolePrompt_2:
# 1264 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 651 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1265 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom
# 1266 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GoInHolePrompt_1
# 1267 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1268 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1269 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom::
# 1270 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 658 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1271 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 5, 1, METATILE_GenericBuilding_TrickHouse_Stairs_Down, FALSE
# 1272 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 659 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1273 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1274 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 660 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1275 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 1276 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 661 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1277 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 1278 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 662 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1279 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 1280 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 663 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1281 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route110_TrickHouseEntrance_Movement_EnterRoom
# 1282 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 664 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1283 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 1284 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 665 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1285 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 1286 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 666 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1287 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_3
# 1288 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 668 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1289 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_4
# 1290 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 670 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1291 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_5
# 1292 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 672 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1293 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_6
# 1294 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 674 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1295 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_7
# 1296 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 676 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1297 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_8
# 1298 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 678 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1299 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_9
# 1300 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 680 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1301 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_10
# 1302 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1:
# 1303 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1304 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1305 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_3:
# 1306 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 667 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1307 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom1
# 1308 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1
# 1309 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1310 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_4:
# 1311 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 669 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1312 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom2
# 1313 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1
# 1314 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1315 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_5:
# 1316 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 671 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1317 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom3
# 1318 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1
# 1319 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1320 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_6:
# 1321 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 673 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1322 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom4
# 1323 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1
# 1324 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1325 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_7:
# 1326 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 675 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1327 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom5
# 1328 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1
# 1329 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1330 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_8:
# 1331 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 677 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1332 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom6
# 1333 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1
# 1334 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1335 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_9:
# 1336 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 679 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1337 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom7
# 1338 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1
# 1339 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1340 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_10:
# 1341 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 681 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1342 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom8
# 1343 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1
# 1344 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1345 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1346 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 686 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1347 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Movement_EnterRoom:
# 1348 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 687 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1349 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	set_invisible
# 1350 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 688 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1351 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 1352 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1353 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom1::
# 1354 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 692 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1355 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE1, 0, 21
# 1356 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 693 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1357 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 1358 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 694 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1359 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1360 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1361 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1362 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1363 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom2::
# 1364 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 699 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1365 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE2, 0, 21
# 1366 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 700 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1367 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 1368 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 701 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1369 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1370 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1371 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1372 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1373 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom3::
# 1374 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 706 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1375 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE3, 0, 21
# 1376 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 707 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1377 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 1378 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 708 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1379 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1380 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1381 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1382 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1383 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom4::
# 1384 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 713 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1385 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE4, 0, 21
# 1386 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 714 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1387 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 1388 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 715 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1389 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1390 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1391 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1392 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1393 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom5::
# 1394 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 720 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1395 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE5, 0, 21
# 1396 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 721 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1397 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 1398 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 722 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1399 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1400 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1401 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1402 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1403 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom6::
# 1404 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 727 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1405 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE6, 0, 21
# 1406 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 728 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1407 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 1408 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 729 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1409 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1410 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1411 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1412 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1413 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom7::
# 1414 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 734 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1415 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 0, 21
# 1416 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 735 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1417 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 1418 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 736 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1419 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1420 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1421 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1422 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1423 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom8::
# 1424 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 741 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1425 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE8, 0, 21
# 1426 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 742 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1427 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 1428 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 743 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1429 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1430 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1431 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1432 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1433 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote::
# 1434 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 748 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1435 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
# 1436 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 749 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1437 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1438 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1439 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1440 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1441 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage::
# 1442 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 754 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1443 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 8
# 1444 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage_2
# 1445 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage_1:
# 1446 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 757 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1447 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
# 1448 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 758 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1449 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1450 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1451 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1452 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage_2:
# 1453 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 755 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1454 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote2
# 1455 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage_1
# 1456 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1457 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1458 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote2::
# 1459 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 763 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1460 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
# 1461 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 764 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1462 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1463 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1464 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1465 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1466 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door::
# 1467 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 769 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1468 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 1469 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 770 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1470 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 1471 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 771 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1472 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHousePuzzle_EventScript_Door_3
# 1473 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 773 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1474 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHousePuzzle_EventScript_Door_4
# 1475 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 775 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1476 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHousePuzzle_EventScript_Door_5
# 1477 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 777 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1478 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHousePuzzle_EventScript_Door_6
# 1479 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 779 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1480 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHousePuzzle_EventScript_Door_7
# 1481 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 781 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1482 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHousePuzzle_EventScript_Door_8
# 1483 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 783 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1484 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHousePuzzle_EventScript_Door_9
# 1485 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 785 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1486 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHousePuzzle_EventScript_Door_10
# 1487 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door_1:
# 1488 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1489 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1490 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door_3:
# 1491 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 772 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1492 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle1_EventScript_Door
# 1493 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_Door_1
# 1494 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1495 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door_4:
# 1496 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 774 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1497 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle2_EventScript_Door
# 1498 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_Door_1
# 1499 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1500 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door_5:
# 1501 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 776 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1502 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_Door
# 1503 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_Door_1
# 1504 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1505 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door_6:
# 1506 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 778 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1507 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle4_EventScript_Door
# 1508 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_Door_1
# 1509 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1510 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door_7:
# 1511 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 780 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1512 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Door
# 1513 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_Door_1
# 1514 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1515 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door_8:
# 1516 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 782 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1517 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle6_EventScript_Door
# 1518 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_Door_1
# 1519 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1520 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door_9:
# 1521 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 784 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1522 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Door
# 1523 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_Door_1
# 1524 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1525 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door_10:
# 1526 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 786 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1527 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle8_EventScript_Door
# 1528 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_Door_1
# 1529 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1530 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1531 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Door::
# 1532 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 792 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1533 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0
# 1534 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle1_EventScript_Door_2
# 1535 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Door_1:
# 1536 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 795 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1537 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1538 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 796 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1539 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1540 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 797 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1541 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2
# 1542 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 798 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1543 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1544 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 799 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1545 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1546 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 800 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1547 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1548 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1549 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1550 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Door_2:
# 1551 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 793 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1552 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1553 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle1_EventScript_Door_1
# 1554 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1555 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1556 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Door::
# 1557 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 805 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1558 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_2_STATE, 0
# 1559 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle2_EventScript_Door_2
# 1560 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Door_1:
# 1561 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 808 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1562 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1563 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 809 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1564 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1565 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 810 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1566 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_2_STATE, 2
# 1567 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 811 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1568 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1569 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 812 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1570 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1571 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 813 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1572 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1573 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1574 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1575 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Door_2:
# 1576 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 806 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1577 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1578 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle2_EventScript_Door_1
# 1579 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1580 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1581 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Door::
# 1582 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 818 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1583 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_3_STATE, 0
# 1584 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_Door_2
# 1585 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Door_1:
# 1586 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 821 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1587 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1588 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 822 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1589 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1590 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 823 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1591 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_3_STATE, 2
# 1592 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 824 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1593 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1594 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 825 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1595 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1596 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 826 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1597 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1598 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1599 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1600 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Door_2:
# 1601 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 819 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1602 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1603 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_Door_1
# 1604 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1605 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1606 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Door::
# 1607 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 831 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1608 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0
# 1609 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle4_EventScript_Door_2
# 1610 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Door_1:
# 1611 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 834 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1612 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1613 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 835 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1614 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1615 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 836 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1616 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 2
# 1617 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 837 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1618 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1619 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 838 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1620 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1621 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 839 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1622 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1623 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1624 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1625 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Door_2:
# 1626 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 832 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1627 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1628 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle4_EventScript_Door_1
# 1629 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1630 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1631 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Door::
# 1632 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 844 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1633 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_5_STATE, 0
# 1634 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Door_2
# 1635 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Door_1:
# 1636 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 847 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1637 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1638 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 848 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1639 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1640 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 849 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1641 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_5_STATE, 2
# 1642 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 850 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1643 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1644 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 851 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1645 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1646 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 852 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1647 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1648 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1649 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1650 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Door_2:
# 1651 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 845 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1652 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1653 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Door_1
# 1654 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1655 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1656 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Door::
# 1657 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 857 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1658 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0
# 1659 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle6_EventScript_Door_2
# 1660 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Door_1:
# 1661 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 860 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1662 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1663 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 861 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1664 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1665 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 862 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1666 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 2
# 1667 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 863 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1668 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1669 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 864 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1670 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1671 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 865 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1672 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1673 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1674 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1675 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Door_2:
# 1676 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 858 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1677 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1678 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle6_EventScript_Door_1
# 1679 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1680 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1681 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Door::
# 1682 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 870 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1683 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0
# 1684 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle7_EventScript_Door_2
# 1685 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Door_1:
# 1686 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 873 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1687 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1688 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 874 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1689 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1690 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 875 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1691 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 2
# 1692 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 876 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1693 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1694 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 877 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1695 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1696 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 878 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1697 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1698 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1699 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1700 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Door_2:
# 1701 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 871 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1702 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1703 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Door_1
# 1704 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1705 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1706 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Door::
# 1707 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 883 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1708 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0
# 1709 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle8_EventScript_Door_2
# 1710 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Door_1:
# 1711 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 886 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1712 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1713 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 887 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1714 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1715 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 888 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1716 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 2
# 1717 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 889 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1718 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1719 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 890 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1720 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1721 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 891 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1722 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1723 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1724 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1725 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Door_2:
# 1726 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 884 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1727 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1728 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle8_EventScript_Door_1
# 1729 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1730 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1731 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_DoorLocked::
# 1732 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 896 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1733 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere, MSGBOX_DEFAULT
# 1734 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 897 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1735 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1736 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1737 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1738 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1739 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_ReadScrollAgain::
# 1740 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 902 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1741 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt, MSGBOX_DEFAULT
# 1742 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 903 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1743 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1744 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1745 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1746 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1747 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_FoundScroll::
# 1748 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 908 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1749 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1750 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 909 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1751 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	message Route110_TrickHousePuzzle_Text_FoundAScroll
# 1752 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 910 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1753 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
# 1754 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 911 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1755 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_MemorizedSecretCode, MSGBOX_DEFAULT
# 1756 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 912 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1757 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1758 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1759 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1760 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1761 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding::
# 1762 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 917 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1763 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 1764 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 918 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1765 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureBeingWatched, MSGBOX_DEFAULT
# 1766 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 919 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1767 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1768 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 920 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1769 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 0
# 1770 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_2
# 1771 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_1:
# 1772 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 923 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1773 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 1
# 1774 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_5
# 1775 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_4:
# 1776 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 926 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1777 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 2
# 1778 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_8
# 1779 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_7:
# 1780 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 929 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1781 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 1782 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1783 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1784 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_2:
# 1785 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 921 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1786 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle1
# 1787 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_1
# 1788 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1789 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_5:
# 1790 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 924 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1791 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle2
# 1792 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_4
# 1793 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1794 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_8:
# 1795 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 927 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1796 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle3
# 1797 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_7
# 1798 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1799 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1800 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle1::
# 1801 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 934 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1802 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 6
# 1803 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 935 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1804 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 3
# 1805 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 936 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1806 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1807 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1808 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1809 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1810 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle2::
# 1811 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 941 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1812 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 11
# 1813 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 942 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1814 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 5
# 1815 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 943 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1816 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1817 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1818 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1819 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1820 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle3::
# 1821 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 948 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1822 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 9
# 1823 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 949 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1824 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 2
# 1825 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 950 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1826 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1827 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1828 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1829 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1830 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle::
# 1831 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 955 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1832 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8006, 0
# 1833 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 956 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1834 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	dofieldeffectsparkle VAR_0x8004, VAR_0x8005, VAR_0x8006
# 1835 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 957 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1836 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 1837 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 958 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1838 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 10
# 1839 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1840 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1841 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1842 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_YoureBeingWatched::
# 1843 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 962 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1844 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You're being watched…$"
# 1845 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1846 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk::
# 1847 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 966 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1848 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1849 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1850 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beneath this desk? You're sharp!$"
# 1851 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1852 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBehindTree::
# 1853 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 972 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1854 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1855 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1856 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "behind this tree? You're sharp!$"
# 1857 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1858 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInDresser::
# 1859 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 978 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1860 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1861 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1862 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this dresser? You're sharp!$"
# 1863 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1864 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConealedBeyondWindow::
# 1865 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 984 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1866 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1867 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1868 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beyond this window? You're sharp!$"
# 1869 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1870 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInPlanter::
# 1871 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 990 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1872 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1873 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1874 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this planter? You're sharp!$"
# 1875 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1876 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInCupboard::
# 1877 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 996 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1878 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1879 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1880 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this cupboard? You're sharp!$"
# 1881 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1882 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBehindWindow::
# 1883 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1002 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1884 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1885 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1886 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "behind this window? You're sharp!$"
# 1887 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1888 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion::
# 1889 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1008 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1890 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1891 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1892 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beneath this cushion? You're sharp!$"
# 1893 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1894 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster::
# 1895 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1014 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1896 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Behold!\p"
# 1897 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "For I am the greatest living mystery\n"
# 1898 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "of a man in all of HOENN!\l"
# 1899 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "They call me…\p"
# 1900 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The TRICK MASTER!\n"
# 1901 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Wahahaha! Glad to meet you!$"
# 1902 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1903 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse::
# 1904 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1023 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1905 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You, you've come to challenge\n"
# 1906 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "my TRICK HOUSE, haven't you?\p"
# 1907 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "That's why you're here, isn't it?\n"
# 1908 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Yes, it is!\p"
# 1909 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Consider your challenge accepted!\p"
# 1910 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Enter through the scroll there,\n"
# 1911 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "and let your challenge commence!\p"
# 1912 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I shall be waiting in the back!$"
# 1913 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1914 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ItsAScroll::
# 1915 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1034 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1916 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It's a scroll.$"
# 1917 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1918 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll::
# 1919 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1038 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1920 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a big hole behind the scroll!\p"
# 1921 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Want to go in?$"
# 1922 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1923 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote::
# 1924 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1043 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1925 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a note affixed to the scroll…\p"
# 1926 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "“I am leaving on a journey.\n"
# 1927 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Don't look for me. TRICK MASTER”$"
# 1928 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1929 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick::
# 1930 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1049 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1931 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "For the next time, I'll use this trick,\n"
# 1932 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "and that scheme, and those ruses…\p"
# 1933 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Mufufufu… If I may say so, it's\n"
# 1934 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "brilliantly difficult, even for me!$"
# 1935 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1936 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges::
# 1937 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1056 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1938 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? What?!\n"
# 1939 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Oh, it's you!\p"
# 1940 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I'm in the midst of devising new tricky\n"
# 1941 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "challenges!\p"
# 1942 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It's not too much to ask for a bit more\n"
# 1943 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "time for me to think, is it now?\l"
# 1944 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You wouldn't begrudge me that?\l"
# 1945 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Come back in a little while!$"
# 1946 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1947 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward::
# 1948 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1067 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1949 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Ah, it's you! You're here to accept the\n"
# 1950 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "reward from before, isn't that right?\l"
# 1951 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Yes, right I am!\p"
# 1952 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Here!\n"
# 1953 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I'll give it to you now!$"
# 1954 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1955 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward::
# 1956 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1075 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1957 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah?\n"
# 1958 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Did you not come to claim your reward?$"
# 1959 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1960 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_MechadollWhichTent::
# 1961 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1080 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1962 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "MECHADOLL 5 I AM!\n"
# 1963 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "IF REWARD IS NOT TAKEN BY YOU,\l"
# 1964 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN TRICK MASTER YOU CANNOT FOLLOW.\p"
# 1965 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "RED TENT OR BLUE TENT,\n"
# 1966 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "WHICH DO YOU PREFER?$"
# 1967 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1968 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ThenFarewell::
# 1969 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1088 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1970 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN FAREWELL.$"
# 1971 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1972 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_PCFullAgain::
# 1973 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1092 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1974 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "YOUR PC STATUS: FULL AGAIN.\n"
# 1975 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "MEAN, YOU ARE.$"
# 1976 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1977 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_FoundAScroll::
# 1978 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1097 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1979 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} found a scroll.$"
# 1980 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1981 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_MemorizedSecretCode::
# 1982 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1101 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1983 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} memorized the secret code\n"
# 1984 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "written on the scroll.$"
# 1985 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1986 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt::
# 1987 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1106 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1988 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "A secret code is written on it.$"
# 1989 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1990 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere::
# 1991 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
# 1992 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The door is locked.\p"
# 1993 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "…On closer inspection, this is written\n"
# 1994 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "on it: “Write the secret code here.”$"
