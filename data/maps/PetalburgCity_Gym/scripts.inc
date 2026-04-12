# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"

# 13 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"

# 18 "data/maps/PetalburgCity_Gym/scripts.pory"

# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad::
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_OnLoad_2
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad_1:
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 7
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_ge PetalburgCity_Gym_OnLoad_5
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad_4:
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"

# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad_2:
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_OnLoad_1
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"

# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad_5:
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_OnLoad_4
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"

# 40 "data/maps/PetalburgCity_Gym/scripts.pory"

# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"

# 62 "data/maps/PetalburgCity_Gym/scripts.pory"

# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"

# 84 "data/maps/PetalburgCity_Gym/scripts.pory"

# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition::
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 1
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_OnTransition_2
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition_1:
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt PetalburgCity_Gym_OnTransition_5
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition_4:
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_OnTransition_8
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition_7:
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"

# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition_2:
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_OnTransition_1
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"

# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition_5:
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_OnTransition_4
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"

# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition_8:
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_OnTransition_7
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"

# 114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_WALLY, 5, 108
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"

# 120 "data/maps/PetalburgCity_Gym/scripts.pory"

# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"

# 126 "data/maps/PetalburgCity_Gym/scripts.pory"

# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_CheckNormanForRematch_2
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch_1:
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 8
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_CheckNormanForRematch_5
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch_4:
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"

# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch_2:
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_CheckNormanForRematch_1
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"

# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch_5:
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_CheckNormanForRematch_4
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"

# 154 "data/maps/PetalburgCity_Gym/scripts.pory"

# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"

# 160 "data/maps/PetalburgCity_Gym/scripts.pory"

# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"

# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"

# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"

# 175 "data/maps/PetalburgCity_Gym/scripts.pory"

# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"

# 211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"

# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	vsseeker_rematchid TRAINER_NORMAN_1
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_Norman_3
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_Norman_4
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_Norman_5
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_Norman_6
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_Norman_7
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_Norman_8
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_Norman_9
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_1:
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_Norman_12
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_Norman_13
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_Norman_14
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_Norman_15
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_10:
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"

# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_3:
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanNoBadges
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Norman_1
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"

# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_4:
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanOneBadge
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Norman_1
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_5:
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanTwoBadges
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Norman_1
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"

# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_6:
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanThreeBadges
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Norman_1
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"

# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_7:
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanBattle
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Norman_1
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"

# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_8:
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanPostBattle
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Norman_1
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"

# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_9:
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematch
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Norman_1
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"

# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_12:
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Norman_10
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"

# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_13:
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Norman_10
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"

# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_14:
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Norman_10
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"

# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_15:
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Norman_10
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"

# 321 "data/maps/PetalburgCity_Gym/scripts.pory"

# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"

# 329 "data/maps/PetalburgCity_Gym/scripts.pory"

# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"

# 337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"

# 345 "data/maps/PetalburgCity_Gym/scripts.pory"

# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"

# 353 "data/maps/PetalburgCity_Gym/scripts.pory"

# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLY
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_2
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_1:
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_5
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_4:
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_8
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_7:
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_11
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_10:
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_14
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_13:
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_17
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_16:
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_20
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_19:
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_23
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_22:
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_26
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_25:
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_29
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_28:
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_32
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_31:
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_35
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_34:
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_38
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_37:
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_41
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_40:
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_44
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_43:
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_47
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_46:
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_50
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_49:
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_53
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_52:
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_56
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_55:
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_59
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_58:
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_62
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_61:
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_65
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_64:
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_68
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_67:
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_71
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_70:
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"

# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_2:
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyArriveSouth
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_1
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"

# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_5:
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyArriveNorth
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_4
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"

# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_8:
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_7
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"

# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_11:
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_10
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"

# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_14:
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_13
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"

# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_17:
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_16
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"

# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_20:
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_19
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"

# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_23:
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_22
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"

# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_26:
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_25
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"

# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_29:
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_28
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"

# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_32:
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_31
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"

# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_35:
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_34
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"

# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_38:
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_37
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"

# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_41:
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_40
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"

# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_44:
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_43
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"

# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_47:
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_46
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"

# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_50:
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyFacePlayer
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_49
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"

# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_53:
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyFaceDown
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_52
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"

# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_56:
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyFacePlayer
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_55
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"

# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_59:
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyFacePlayer
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_58
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"

# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_62:
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_61
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"

# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_65:
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_64
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"

# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_68:
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_67
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"

# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_71:
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_70
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"

# 623 "data/maps/PetalburgCity_Gym/scripts.pory"

# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"

# 633 "data/maps/PetalburgCity_Gym/scripts.pory"

# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"

# 647 "data/maps/PetalburgCity_Gym/scripts.pory"

# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"

# 659 "data/maps/PetalburgCity_Gym/scripts.pory"

# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"

# 671 "data/maps/PetalburgCity_Gym/scripts.pory"

# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"

# 681 "data/maps/PetalburgCity_Gym/scripts.pory"

# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"

# 691 "data/maps/PetalburgCity_Gym/scripts.pory"

# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"

# 701 "data/maps/PetalburgCity_Gym/scripts.pory"

# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"

# 709 "data/maps/PetalburgCity_Gym/scripts.pory"

# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"

# 719 "data/maps/PetalburgCity_Gym/scripts.pory"

# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"

# 729 "data/maps/PetalburgCity_Gym/scripts.pory"

# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"

# 739 "data/maps/PetalburgCity_Gym/scripts.pory"

# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"

# 747 "data/maps/PetalburgCity_Gym/scripts.pory"

# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"

# 755 "data/maps/PetalburgCity_Gym/scripts.pory"

# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"

# 763 "data/maps/PetalburgCity_Gym/scripts.pory"

# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"

# 771 "data/maps/PetalburgCity_Gym/scripts.pory"

# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_FacePlayer
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"

# 779 "data/maps/PetalburgCity_Gym/scripts.pory"

# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_WalkInPlaceFasterDown
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"

# 787 "data/maps/PetalburgCity_Gym/scripts.pory"

# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"

# 795 "data/maps/PetalburgCity_Gym/scripts.pory"

# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"

# 803 "data/maps/PetalburgCity_Gym/scripts.pory"

# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"

# 811 "data/maps/PetalburgCity_Gym/scripts.pory"

# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"

# 819 "data/maps/PetalburgCity_Gym/scripts.pory"

# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"

# 823 "data/maps/PetalburgCity_Gym/scripts.pory"

# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"

# 831 "data/maps/PetalburgCity_Gym/scripts.pory"

# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"

# 835 "data/maps/PetalburgCity_Gym/scripts.pory"

# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"

# 839 "data/maps/PetalburgCity_Gym/scripts.pory"

# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_NormanPostBattle_2
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle_1:
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_NormanPostBattle_5
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle_4:
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NormanPostBattle_8
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle_7:
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"

# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle_2:
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"

# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle_5:
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GiveFacade2
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_4
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"

# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle_8:
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_7
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"

# 874 "data/maps/PetalburgCity_Gym/scripts.pory"

# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"

# 882 "data/maps/PetalburgCity_Gym/scripts.pory"

# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"

# 890 "data/maps/PetalburgCity_Gym/scripts.pory"

# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_2
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_1:
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_5
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_4:
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_8
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_7:
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_ENIGMA_BERRY_AVAILABLE, 0
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_11
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_10:
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"

# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_2:
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_1
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"

# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_5:
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_4
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"

# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_8:
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_7
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"

# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_11:
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_10
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"

# 940 "data/maps/PetalburgCity_Gym/scripts.pory"

# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"

# 946 "data/maps/PetalburgCity_Gym/scripts.pory"

# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEnigmaBerry_2
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry_1:
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"

# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry_2:
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GiveEnigmaBerry_1
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"

# 965 "data/maps/PetalburgCity_Gym/scripts.pory"

# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_NormanBattle_3
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_NormanBattle_4
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_NormanBattle_5
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle_1:
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle_3:
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanBattle_1
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle_4:
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanBattle_1
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle_5:
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanBattle_1
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_GiveFacade_2
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade_1:
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade_2:
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto Common_EventScript_BagIsFull
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GiveFacade_1
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_ExclamationMark
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_Delay48
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_WallysDadArrives_2
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_1:
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_WallysDadArrives_5
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_4:
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_WallysDadArrives_8
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_7:
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_WallysDadArrives_11
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_10:
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_WallysDadArrives_14
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_13:
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_WallysDadArrives_17
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_16:
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_WallysDadArrives_20
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_19:
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_WallysDadArrives_23
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_22:
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_WallysDadArrives_26
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_25:
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_2:
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_1
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_5:
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_4
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_8:
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_7
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_11:
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_10
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_14:
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_13
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_17:
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_16
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_20:
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_19
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_23:
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_22
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_26:
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_25
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1647 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1657 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1658 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1659 "data/maps/PetalburgCity_Gym/scripts.pory"
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1662 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1663 "data/maps/PetalburgCity_Gym/scripts.pory"
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1664 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1665 "data/maps/PetalburgCity_Gym/scripts.pory"
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1667 "data/maps/PetalburgCity_Gym/scripts.pory"
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1671 "data/maps/PetalburgCity_Gym/scripts.pory"
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1672 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1673 "data/maps/PetalburgCity_Gym/scripts.pory"
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1675 "data/maps/PetalburgCity_Gym/scripts.pory"
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1680 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1681 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1682 "data/maps/PetalburgCity_Gym/scripts.pory"
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 1684 "data/maps/PetalburgCity_Gym/scripts.pory"
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1685 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1686 "data/maps/PetalburgCity_Gym/scripts.pory"
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1689 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1690 "data/maps/PetalburgCity_Gym/scripts.pory"
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1691 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1692 "data/maps/PetalburgCity_Gym/scripts.pory"
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1693 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1694 "data/maps/PetalburgCity_Gym/scripts.pory"
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1695 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1696 "data/maps/PetalburgCity_Gym/scripts.pory"
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1698 "data/maps/PetalburgCity_Gym/scripts.pory"
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1699 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1701 "data/maps/PetalburgCity_Gym/scripts.pory"
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1702 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 1703 "data/maps/PetalburgCity_Gym/scripts.pory"
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 1705 "data/maps/PetalburgCity_Gym/scripts.pory"
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1706 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1707 "data/maps/PetalburgCity_Gym/scripts.pory"
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1708 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1709 "data/maps/PetalburgCity_Gym/scripts.pory"
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1710 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1711 "data/maps/PetalburgCity_Gym/scripts.pory"
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1713 "data/maps/PetalburgCity_Gym/scripts.pory"
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1714 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1716 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1717 "data/maps/PetalburgCity_Gym/scripts.pory"
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1718 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1719 "data/maps/PetalburgCity_Gym/scripts.pory"
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1720 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1721 "data/maps/PetalburgCity_Gym/scripts.pory"
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1722 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1723 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1724 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1726 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1728 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1729 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1730 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1731 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1732 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 1733 "data/maps/PetalburgCity_Gym/scripts.pory"
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1734 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1735 "data/maps/PetalburgCity_Gym/scripts.pory"
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1736 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 1737 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt PetalburgCity_Gym_EventScript_SpeedRoomDoor_2
# 1738 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor_1:
# 1739 "data/maps/PetalburgCity_Gym/scripts.pory"
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1740 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1741 "data/maps/PetalburgCity_Gym/scripts.pory"
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1742 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 1743 "data/maps/PetalburgCity_Gym/scripts.pory"
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1744 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 1745 "data/maps/PetalburgCity_Gym/scripts.pory"
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1746 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1747 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_SpeedRoomDoor_5
# 1748 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor_4:
# 1749 "data/maps/PetalburgCity_Gym/scripts.pory"
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1750 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1751 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_SpeedRoomDoor_8
# 1752 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor_7:
# 1753 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1754 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1755 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor_2:
# 1756 "data/maps/PetalburgCity_Gym/scripts.pory"
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1757 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 1758 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_SpeedRoomDoor_1
# 1759 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1760 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor_5:
# 1761 "data/maps/PetalburgCity_Gym/scripts.pory"
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1762 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 1763 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_SpeedRoomDoor_4
# 1764 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1765 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor_8:
# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1767 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 1768 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_SpeedRoomDoor_7
# 1769 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1770 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1771 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 1772 "data/maps/PetalburgCity_Gym/scripts.pory"
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1773 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1774 "data/maps/PetalburgCity_Gym/scripts.pory"
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 1776 "data/maps/PetalburgCity_Gym/scripts.pory"
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1777 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 1778 "data/maps/PetalburgCity_Gym/scripts.pory"
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1779 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1780 "data/maps/PetalburgCity_Gym/scripts.pory"
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1781 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1782 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1783 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1784 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1785 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 1786 "data/maps/PetalburgCity_Gym/scripts.pory"
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1787 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1788 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1789 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1790 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1791 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 1792 "data/maps/PetalburgCity_Gym/scripts.pory"
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1793 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 1794 "data/maps/PetalburgCity_Gym/scripts.pory"
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1795 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1796 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1797 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1798 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1799 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 1800 "data/maps/PetalburgCity_Gym/scripts.pory"
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1801 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1802 "data/maps/PetalburgCity_Gym/scripts.pory"
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1803 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 1804 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt PetalburgCity_Gym_EventScript_AccuracyRoomDoor_2
# 1805 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor_1:
# 1806 "data/maps/PetalburgCity_Gym/scripts.pory"
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1807 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1808 "data/maps/PetalburgCity_Gym/scripts.pory"
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1809 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 1810 "data/maps/PetalburgCity_Gym/scripts.pory"
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1811 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 1812 "data/maps/PetalburgCity_Gym/scripts.pory"
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1813 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1814 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_AccuracyRoomDoor_5
# 1815 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor_4:
# 1816 "data/maps/PetalburgCity_Gym/scripts.pory"
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1817 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1818 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_AccuracyRoomDoor_8
# 1819 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor_7:
# 1820 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1821 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1822 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor_2:
# 1823 "data/maps/PetalburgCity_Gym/scripts.pory"
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1824 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 1825 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_AccuracyRoomDoor_1
# 1826 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1827 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor_5:
# 1828 "data/maps/PetalburgCity_Gym/scripts.pory"
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1829 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 1830 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_AccuracyRoomDoor_4
# 1831 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1832 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor_8:
# 1833 "data/maps/PetalburgCity_Gym/scripts.pory"
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1834 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 1835 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_AccuracyRoomDoor_7
# 1836 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1837 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1838 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 1839 "data/maps/PetalburgCity_Gym/scripts.pory"
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1840 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1841 "data/maps/PetalburgCity_Gym/scripts.pory"
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1842 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 1843 "data/maps/PetalburgCity_Gym/scripts.pory"
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1844 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1845 "data/maps/PetalburgCity_Gym/scripts.pory"
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1846 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 1847 "data/maps/PetalburgCity_Gym/scripts.pory"
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1848 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 1849 "data/maps/PetalburgCity_Gym/scripts.pory"
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1850 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1851 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_ConfusionRoomDoor_2
# 1852 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor_1:
# 1853 "data/maps/PetalburgCity_Gym/scripts.pory"
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1854 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1855 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_ConfusionRoomDoor_5
# 1856 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor_4:
# 1857 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1858 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1859 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor_2:
# 1860 "data/maps/PetalburgCity_Gym/scripts.pory"
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1861 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 1862 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_ConfusionRoomDoor_1
# 1863 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1864 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor_5:
# 1865 "data/maps/PetalburgCity_Gym/scripts.pory"
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1866 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 1867 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_ConfusionRoomDoor_4
# 1868 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1869 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1870 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 1871 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1872 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1873 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1874 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 1875 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1876 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1877 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1878 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 1879 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1880 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 1881 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1882 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1883 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_2
# 1884 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_1:
# 1885 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1886 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1887 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_5
# 1888 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_4:
# 1889 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1890 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1891 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_2:
# 1892 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1893 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 1894 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_1
# 1895 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1896 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_5:
# 1897 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1898 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 1899 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_4
# 1900 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1901 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1902 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 1903 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1904 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1905 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1906 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 1907 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1908 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1909 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1910 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 1911 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1912 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 1913 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1914 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1915 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_2
# 1916 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_1:
# 1917 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1918 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1919 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_5
# 1920 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_4:
# 1921 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1922 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1923 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_2:
# 1924 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1925 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 1926 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_1
# 1927 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1928 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_5:
# 1929 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1930 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 1931 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_4
# 1932 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1933 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1934 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 1935 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1936 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1937 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1938 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 1939 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1940 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1941 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1942 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 1943 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1944 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 1945 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1946 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1947 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_RecoveryRoomDoor_2
# 1948 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor_1:
# 1949 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1950 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1951 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_RecoveryRoomDoor_5
# 1952 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor_4:
# 1953 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1954 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1955 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor_2:
# 1956 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1957 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 1958 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RecoveryRoomDoor_1
# 1959 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1960 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor_5:
# 1961 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1962 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 1963 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RecoveryRoomDoor_4
# 1964 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1965 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1966 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 1967 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1968 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1969 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1970 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 1971 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1972 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1973 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1974 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 1975 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1976 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 1977 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1978 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1979 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_2
# 1980 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_1:
# 1981 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1982 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1983 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_5
# 1984 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_4:
# 1985 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1986 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1987 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_2:
# 1988 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1989 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 1990 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_1
# 1991 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1992 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_5:
# 1993 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1994 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 1995 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_4
# 1996 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1997 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1998 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 1999 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2000 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 2001 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2002 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 2003 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2004 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 2005 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2006 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 2007 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2008 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 2009 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2010 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 2011 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_2
# 2012 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_1:
# 2013 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2014 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 2015 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_5
# 2016 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_4:
# 2017 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2018 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2019 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_2:
# 2020 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2021 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 2022 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_1
# 2023 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2024 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_5:
# 2025 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2026 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 2027 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_4
# 2028 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2029 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2030 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 2031 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2032 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 2033 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2034 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 2035 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2036 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 2037 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2038 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 2039 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2040 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 2041 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2042 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 2043 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_2
# 2044 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_1:
# 2045 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2046 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 2047 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_5
# 2048 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_4:
# 2049 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2050 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2051 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_2:
# 2052 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2053 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 2054 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_1
# 2055 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2056 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_5:
# 2057 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2058 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 2059 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_4
# 2060 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2061 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2062 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 2063 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2064 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 2065 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2066 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 2067 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2068 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 2069 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2070 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 2071 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2072 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 2073 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2074 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 2075 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_RightOHKORoomDoor_2
# 2076 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor_1:
# 2077 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2078 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 2079 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_RightOHKORoomDoor_5
# 2080 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor_4:
# 2081 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2082 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2083 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor_2:
# 2084 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2085 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 2086 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RightOHKORoomDoor_1
# 2087 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2088 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor_5:
# 2089 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2090 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 2091 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RightOHKORoomDoor_4
# 2092 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2093 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2094 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 2095 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2096 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 2097 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2098 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 2099 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2100 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 2101 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2102 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 2103 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2104 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 2105 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2106 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 2107 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_2
# 2108 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_1:
# 2109 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2110 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 2111 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_5
# 2112 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_4:
# 2113 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_2:
# 2116 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2117 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 2118 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_1
# 2119 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2120 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_5:
# 2121 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2122 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 2123 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_4
# 2124 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2125 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2126 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 2127 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2128 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 2129 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2130 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 2131 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2132 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 2133 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2134 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 2135 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2136 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 2137 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2138 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 2139 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_2
# 2140 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_1:
# 2141 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2142 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 2143 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_5
# 2144 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_4:
# 2145 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2146 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_2:
# 2148 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2149 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 2150 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_1
# 2151 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2152 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_5:
# 2153 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2154 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
# 2155 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_4
# 2156 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2157 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2158 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 2159 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2160 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 2161 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2162 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Randall_2
# 2163 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall_1:
# 2164 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2165 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 2166 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2167 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2168 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall_2:
# 2169 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2170 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RandallPostBadge
# 2171 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Randall_1
# 2172 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2173 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2174 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 2175 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2176 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 2177 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2178 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 2179 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2180 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 2181 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2182 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 2183 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2184 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2185 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2186 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 2187 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2188 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 2189 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2190 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2191 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2192 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 2193 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2194 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 2195 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2196 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Parker_2
# 2197 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker_1:
# 2198 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2199 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 2200 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2201 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2202 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker_2:
# 2203 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2204 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_ParkerPostBadge
# 2205 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Parker_1
# 2206 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2207 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2208 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 2209 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2210 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 2211 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2212 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 2213 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2214 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 2215 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2216 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 2217 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2218 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2219 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2220 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 2221 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2222 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 2223 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2224 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2225 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2226 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 2227 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2228 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 2229 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2230 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_George_2
# 2231 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George_1:
# 2232 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2233 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 2234 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2235 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2236 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George_2:
# 2237 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2238 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GeorgePostBadge
# 2239 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_George_1
# 2240 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2241 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2242 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 2243 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2244 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 2245 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2246 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 2247 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2248 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 2249 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2250 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 2251 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2253 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2254 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 2255 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2256 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 2257 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2258 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2259 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2260 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 2261 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2262 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 2263 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2264 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Berke_2
# 2265 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke_1:
# 2266 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2267 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 2268 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2269 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2270 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke_2:
# 2271 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2272 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BerkePostBadge
# 2273 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Berke_1
# 2274 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 2277 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2278 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 2279 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2280 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 2281 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2282 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 2283 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2284 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 2285 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2286 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 2289 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2290 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 2291 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2293 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2294 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 2295 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2296 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 2297 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2298 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Mary_2
# 2299 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary_1:
# 2300 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2301 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 2302 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2303 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2304 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary_2:
# 2305 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2306 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_MaryPostBadge
# 2307 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Mary_1
# 2308 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2309 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2310 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 2311 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2312 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 2313 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2314 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 2315 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2316 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 2317 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2318 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 2319 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2320 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2321 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2322 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 2323 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2324 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 2325 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2326 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2327 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2328 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 2329 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2330 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 2331 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2332 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Alexia_2
# 2333 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia_1:
# 2334 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2335 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 2336 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia_2:
# 2339 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2340 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 2341 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Alexia_1
# 2342 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2343 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2344 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 2345 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2346 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 2347 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2348 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 2349 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2350 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 2351 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2352 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 2353 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2354 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2355 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2356 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 2357 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2358 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 2359 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2360 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2361 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2362 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 2363 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2364 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 2365 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2366 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Jody_2
# 2367 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody_1:
# 2368 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2369 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 2370 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2371 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2372 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody_2:
# 2373 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2374 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_JodyPostBadge
# 2375 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Jody_1
# 2376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2377 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2378 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 2379 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2380 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 2381 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2382 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 2383 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2384 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 2385 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2386 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 2387 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2388 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2389 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2390 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 2391 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2392 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 2393 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2394 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2395 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2396 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 2397 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2398 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 2399 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2400 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 2401 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_2
# 2402 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_1:
# 2403 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2404 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 2405 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_5
# 2406 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_4:
# 2407 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2408 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 2409 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_2:
# 2412 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2413 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 2414 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_1
# 2415 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2416 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_5:
# 2417 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2418 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 2419 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_4
# 2420 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2421 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2422 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 2423 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2424 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 2425 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2426 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 2427 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_2
# 2428 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_1:
# 2429 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2430 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 2431 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_5
# 2432 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_4:
# 2433 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2434 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 2435 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2436 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2437 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_2:
# 2438 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2439 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 2440 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_1
# 2441 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2442 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_5:
# 2443 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2444 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 2445 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_4
# 2446 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2447 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2448 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 2449 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2450 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 2451 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2452 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 2453 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_2
# 2454 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_1:
# 2455 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2456 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 2457 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_5
# 2458 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_4:
# 2459 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2460 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 2461 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_2:
# 2464 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2465 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 2466 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_1
# 2467 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2468 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_5:
# 2469 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2470 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 2471 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_4
# 2472 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2473 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2474 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 2475 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2476 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 2477 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2478 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 2479 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_2
# 2480 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_1:
# 2481 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2482 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 2483 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_5
# 2484 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_4:
# 2485 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2486 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 2487 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2488 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2489 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_2:
# 2490 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2491 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 2492 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_1
# 2493 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2494 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_5:
# 2495 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2496 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 2497 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_4
# 2498 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2499 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2500 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 2501 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2502 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 2503 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2504 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 2505 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_2
# 2506 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_1:
# 2507 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2508 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 2509 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_5
# 2510 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_4:
# 2511 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2512 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 2513 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2514 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2515 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_2:
# 2516 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2517 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 2518 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_1
# 2519 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2520 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_5:
# 2521 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2522 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 2523 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_4
# 2524 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2525 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2526 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 2527 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2528 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 2529 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2530 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 2531 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_2
# 2532 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_1:
# 2533 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2534 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 2535 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_5
# 2536 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_4:
# 2537 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2538 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 2539 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2540 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2541 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_2:
# 2542 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2543 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 2544 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_1
# 2545 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2546 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_5:
# 2547 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2548 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 2549 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_4
# 2550 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2551 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2552 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 2553 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2554 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 2555 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2556 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 2557 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_2
# 2558 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_1:
# 2559 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2560 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 2561 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_5
# 2562 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_4:
# 2563 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2564 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 2565 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2566 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2567 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_2:
# 2568 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2569 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 2570 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_1
# 2571 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2572 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_5:
# 2573 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2574 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 2575 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_4
# 2576 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2577 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2578 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 2579 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2580 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 2581 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2582 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 2583 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_2
# 2584 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_1:
# 2585 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2586 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 2587 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_5
# 2588 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_4:
# 2589 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2590 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 2591 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2592 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2593 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_2:
# 2594 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2595 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 2596 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_1
# 2597 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2598 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_5:
# 2599 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2600 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 2601 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_4
# 2602 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2603 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2604 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 2605 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2606 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2607 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2608 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2609 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2610 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2611 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2612 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2613 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2614 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2615 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2616 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 2617 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2618 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2619 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2620 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2621 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2622 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2623 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2624 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2625 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2626 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2627 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2628 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 2629 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2630 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2631 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2632 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2633 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2634 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2635 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2636 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2637 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2638 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2639 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2640 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 2641 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2642 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2643 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2644 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2645 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2646 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2647 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2648 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 2649 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2650 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2651 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2652 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2653 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2654 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2655 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2656 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2657 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2658 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2659 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2660 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 2661 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2662 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2663 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2664 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2665 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2666 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2667 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2668 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 2669 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2670 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2671 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2672 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2673 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2674 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2675 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2676 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 2677 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2678 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 2679 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2680 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 2681 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2682 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2683 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2684 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 2685 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2686 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 2687 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2688 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 2689 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2690 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2691 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2692 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 2693 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2694 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 2695 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 2696 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2697 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2698 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 2699 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2700 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 2701 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2702 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 2703 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2704 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuide_2
# 2705 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide_1:
# 2706 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2707 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 2708 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2709 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 2710 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2711 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2712 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide_2:
# 2713 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2714 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 2715 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymGuide_1
# 2716 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2717 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2718 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 2719 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2720 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 2721 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2722 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 2723 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2724 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2725 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2726 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 2727 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2728 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 2729 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2730 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_LeftGymStatue_2
# 2731 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue_1:
# 2732 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2733 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 2734 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2735 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2736 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue_2:
# 2737 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2738 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatueCertified
# 2739 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_LeftGymStatue_1
# 2740 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2741 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2742 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 2743 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2744 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 2745 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2746 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_RightGymStatue_2
# 2747 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue_1:
# 2748 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2749 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 2750 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2751 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2752 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue_2:
# 2753 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2754 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatueCertified
# 2755 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_RightGymStatue_1
# 2756 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2757 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2758 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 2759 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2760 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 2761 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2762 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 2763 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2764 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2765 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2766 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 2767 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2768 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 2769 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2770 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 2771 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 2772 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2773 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2774 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon::
# 2775 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2776 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm?\p"
# 2777 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 2778 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 2779 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 2780 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 2781 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 2782 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your POKéMON.\p"
# 2783 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 2784 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 2785 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 2786 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 2787 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2788 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon::
# 2789 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2790 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 2791 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a POKéMON, please…$"
# 2792 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2793 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight::
# 2794 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2795 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? You're… Uh… Oh, right.\n"
# 2796 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're WALLY, right?$"
# 2797 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2798 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon::
# 2799 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2800 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: I'm going to go stay with my\n"
# 2801 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in VERDANTURF TOWN.\p"
# 2802 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 2803 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a POKéMON along.\p"
# 2804 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a POKéMON before.\n"
# 2805 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 2806 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2807 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee::
# 2808 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2809 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I see.$"
# 2810 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2811 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally::
# 2812 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2813 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you heard that,\n"
# 2814 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 2815 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with WALLY and make sure that he\n"
# 2816 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a POKéMON.$"
# 2817 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2818 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon::
# 2819 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2820 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY, here, I'll loan you my POKéMON.\p"
# 2821 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a ZIGZAGOON!$"
# 2822 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2823 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall::
# 2824 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2825 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 2826 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A POKéMON!\p"
# 2827 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I'll give you a POKé BALL, too.\n"
# 2828 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 2829 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a POKé BALL!$"
# 2830 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2831 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou::
# 2832 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2833 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 2834 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 2835 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2836 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe::
# 2837 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2838 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 2839 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 2840 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2841 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut::
# 2842 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2843 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: So, did it work out?$"
# 2844 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2845 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye::
# 2846 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2847 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Thank you, yes, it did.\n"
# 2848 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your POKéMON back.\p"
# 2849 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 2850 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 2851 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 2852 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my POKéMON.\p"
# 2853 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 2854 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 2855 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 2856 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 2857 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 2858 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2859 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges::
# 2860 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2861 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Now…\p"
# 2862 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 2863 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong TRAINER, here's my advice.\p"
# 2864 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for RUSTBORO CITY beyond this\n"
# 2865 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 2866 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 2867 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER, ROXANNE.\p"
# 2868 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other POKéMON\n"
# 2869 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYMS and defeat their LEADERS.\p"
# 2870 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect BADGES from them,\n"
# 2871 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 2872 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a GYM LEADER, too.\n"
# 2873 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 2874 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 2875 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.$"
# 2876 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2877 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro::
# 2878 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2879 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? Aren't you going to the\n"
# 2880 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
# 2881 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 2882 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 2883 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 2884 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 2885 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 2886 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four GYM BADGES, okay?$"
# 2887 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2888 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford::
# 2889 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2890 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: I see… So, you've beaten\n"
# 2891 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 2892 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 2893 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 2894 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 2895 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER named BRAWLY.\p"
# 2896 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 2897 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2898 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger::
# 2899 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2900 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm… {PLAYER}, you have gotten\n"
# 2901 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 2902 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 2903 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 2904 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2905 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro::
# 2906 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2907 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm…\n"
# 2908 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get four GYM BADGES.\p"
# 2909 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 2910 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON battle.\p"
# 2911 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 2912 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 2913 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 2914 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 2915 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 2916 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a GYM LEADER to win.\p"
# 2917 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 2918 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 2919 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2920 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat::
# 2921 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2922 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 2923 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 2924 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 2925 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 2926 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 2927 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 2928 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2929 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge::
# 2930 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2931 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\n"
# 2932 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from DAD!$"
# 2933 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2934 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis::
# 2935 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2936 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: With that BADGE, the DEFENSE\n"
# 2937 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of all your POKéMON will increase.\p"
# 2938 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON that know the HM move SURF\n"
# 2939 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 2940 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 2941 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use it correctly.$"
# 2942 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2943 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade::
# 2944 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2945 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: TM42 contains FACADE.\p"
# 2946 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It doubles the power of moves if\n"
# 2947 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the POKéMON is poisoned, paralyzed,\l"
# 2948 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or burned.\p"
# 2949 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It might be able to turn a bad\n"
# 2950 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situation into an advantage.$"
# 2951 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2952 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad::
# 2953 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2954 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: As the GYM LEADER, I can't\n"
# 2955 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 2956 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 2957 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 2958 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2959 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe::
# 2960 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1685 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2961 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 2962 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 2963 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 2964 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2965 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer::
# 2966 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1691 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2967 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
# 2968 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 2969 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 2970 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2971 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining::
# 2972 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2973 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\n"
# 2974 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 2975 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 2976 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 2977 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a TRAINER to\n"
# 2978 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 2979 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2980 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough::
# 2981 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1706 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2982 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\p"
# 2983 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of POKéMON is deep.\p"
# 2984 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 2985 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 2986 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2987 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice::
# 2988 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1713 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2989 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 2990 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 2991 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 2992 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 2993 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 2994 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 2995 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The TRAINERS of PETALBURG GYM\n"
# 2996 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 2997 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 2998 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 2999 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 3000 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 3001 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 3002 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 3003 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 3004 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 3005 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3006 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory::
# 3007 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1732 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3008 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 3009 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 3010 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 3011 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 3012 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3013 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro::
# 3014 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1739 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3015 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 3016 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 3017 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 3018 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 3019 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3020 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat::
# 3021 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1746 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3022 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 3023 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3024 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle::
# 3025 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1750 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3026 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 3027 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 3028 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 3029 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 3030 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 3031 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3032 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge::
# 3033 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1758 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3034 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 3035 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 3036 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your POKéMON.\p"
# 3037 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 3038 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 3039 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3040 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro::
# 3041 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3042 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 3043 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 3044 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your POKéMON!$"
# 3045 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3046 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat::
# 3047 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1772 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3048 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 3049 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 3050 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3051 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle::
# 3052 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1777 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3053 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 3054 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 3055 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3056 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge::
# 3057 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1782 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3058 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 3059 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 3060 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3061 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro::
# 3062 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1787 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3063 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 3064 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 3065 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 3066 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 3067 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 3068 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 3069 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3070 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat::
# 3071 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1796 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3072 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 3073 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 3074 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3075 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle::
# 3076 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1801 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3077 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 3078 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our LEADER's kid.\p"
# 3079 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 3080 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 3081 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 3082 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 3083 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 3084 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3085 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge::
# 3086 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1811 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3087 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 3088 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 3089 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3090 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro::
# 3091 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1816 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3092 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 3093 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 3094 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 3095 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON to take a critical hit!$"
# 3096 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3097 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat::
# 3098 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1823 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3099 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 3100 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 3101 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3102 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle::
# 3103 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1828 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3104 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 3105 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 3106 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 3107 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 3108 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 3109 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 3110 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3111 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge::
# 3112 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1837 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3113 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
# 3114 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 3115 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 3116 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3117 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro::
# 3118 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1843 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3119 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 3120 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 3121 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 3122 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 3123 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3124 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat::
# 3125 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1850 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3126 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 3127 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3128 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle::
# 3129 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1854 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3130 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 3131 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 3132 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 3133 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 3134 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your POKéMON's ATTACK power will be\n"
# 3135 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 3136 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3137 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge::
# 3138 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1863 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3139 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 3140 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 3141 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 3142 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our POKéMON.$"
# 3143 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3144 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro::
# 3145 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1870 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3146 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 3147 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 3148 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3149 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat::
# 3150 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1875 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3151 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 3152 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3153 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle::
# 3154 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1879 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3155 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 3156 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 3157 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 3158 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 3159 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 3160 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 3161 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 3162 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 3163 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3164 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge::
# 3165 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1890 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3166 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 3167 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3168 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro::
# 3169 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1894 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3170 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 3171 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 3172 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 3173 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LEADER's kid!$"
# 3174 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3175 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat::
# 3176 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1901 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 3178 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3179 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle::
# 3180 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1905 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
# 3182 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 3183 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The GYM LEADER, your\n"
# 3184 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 3185 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3186 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge::
# 3187 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1912 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
# 3189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 3190 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 3191 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 3192 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their POKéMON.$"
# 3193 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3194 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked::
# 3195 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1920 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 3197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 3198 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3199 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom::
# 3200 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1925 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3201 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 3202 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 3203 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3204 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2::
# 3205 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1930 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 3207 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 3208 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3209 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom::
# 3210 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1935 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3211 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 3212 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 3213 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3214 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom::
# 3215 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1940 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3216 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 3217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 3218 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3219 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom::
# 3220 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1945 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 3222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 3223 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3224 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom::
# 3225 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1950 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 3227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 3228 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3229 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom::
# 3230 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1955 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 3232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 3233 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3234 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom::
# 3235 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1960 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 3237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 3238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom::
# 3240 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1965 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 3242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what POKéMON await\n"
# 3243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 3244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 3245 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3246 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue::
# 3247 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1972 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 3249 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3250 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified::
# 3251 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1976 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 3253 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN'S CERTIFIED TRAINERS:\n"
# 3254 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 3255 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3256 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch::
# 3257 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1982 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 3259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 3260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 3261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 3262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 3263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 3264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 3265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 3266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 3267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 3268 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3269 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat::
# 3270 "data/maps/PetalburgCity_Gym/scripts.pory"
# 1995 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3271 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 3272 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 3273 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3274 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch::
# 3275 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2000 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 3277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 3278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 3279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 3280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 3281 "data/maps/PetalburgCity_Gym/scripts.pory"

# 3282 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons::
# 3283 "data/maps/PetalburgCity_Gym/scripts.pory"
# 2008 "data/maps/PetalburgCity_Gym/scripts.pory"
# 3284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 3285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 3286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 3287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 3288 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 3289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 3290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 3291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 3292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one POKéMON that is\n"
# 3293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 3294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 3295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
