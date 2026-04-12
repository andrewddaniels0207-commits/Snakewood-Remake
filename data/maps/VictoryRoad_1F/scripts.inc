# 1 "data/maps/VictoryRoad_1F/scripts.pory"

# 2 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts::
# 3 "data/maps/VictoryRoad_1F/scripts.pory"
# 2 "data/maps/VictoryRoad_1F/scripts.pory"
# 4 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 5 "data/maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 6 "data/maps/VictoryRoad_1F/scripts.pory"

# 7 "data/maps/VictoryRoad_1F/scripts.pory"

# 8 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition::
# 9 "data/maps/VictoryRoad_1F/scripts.pory"
# 6 "data/maps/VictoryRoad_1F/scripts.pory"
# 10 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_VICTORY_ROAD_1F_STATE, 1
# 11 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VictoryRoad_1F_OnTransition_2
# 12 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition_1:
# 13 "data/maps/VictoryRoad_1F/scripts.pory"
# 9 "data/maps/VictoryRoad_1F/scripts.pory"
# 14 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_VICTORY_ROAD_1F_STATE, 2
# 15 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VictoryRoad_1F_OnTransition_5
# 16 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition_4:
# 17 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 18 "data/maps/VictoryRoad_1F/scripts.pory"

# 19 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition_2:
# 20 "data/maps/VictoryRoad_1F/scripts.pory"
# 7 "data/maps/VictoryRoad_1F/scripts.pory"
# 21 "data/maps/VictoryRoad_1F/scripts.pory"
	call VictoryRoad_1F_EventScript_SetEntranceWallyPos1
# 22 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_OnTransition_1
# 23 "data/maps/VictoryRoad_1F/scripts.pory"

# 24 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition_5:
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
# 10 "data/maps/VictoryRoad_1F/scripts.pory"
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	call VictoryRoad_1F_EventScript_SetEntranceWallyPos2
# 27 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_OnTransition_4
# 28 "data/maps/VictoryRoad_1F/scripts.pory"

# 29 "data/maps/VictoryRoad_1F/scripts.pory"

# 30 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos1::
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
# 16 "data/maps/VictoryRoad_1F/scripts.pory"
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 2, 24
# 33 "data/maps/VictoryRoad_1F/scripts.pory"
# 17 "data/maps/VictoryRoad_1F/scripts.pory"
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
# 35 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 36 "data/maps/VictoryRoad_1F/scripts.pory"

# 37 "data/maps/VictoryRoad_1F/scripts.pory"

# 38 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos2::
# 39 "data/maps/VictoryRoad_1F/scripts.pory"
# 22 "data/maps/VictoryRoad_1F/scripts.pory"
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 3, 24
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
# 23 "data/maps/VictoryRoad_1F/scripts.pory"
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 44 "data/maps/VictoryRoad_1F/scripts.pory"

# 45 "data/maps/VictoryRoad_1F/scripts.pory"

# 46 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger1::
# 47 "data/maps/VictoryRoad_1F/scripts.pory"
# 28 "data/maps/VictoryRoad_1F/scripts.pory"
# 48 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 49 "data/maps/VictoryRoad_1F/scripts.pory"
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
# 30 "data/maps/VictoryRoad_1F/scripts.pory"
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
# 33 "data/maps/VictoryRoad_1F/scripts.pory"
# 58 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 60 "data/maps/VictoryRoad_1F/scripts.pory"

# 61 "data/maps/VictoryRoad_1F/scripts.pory"

# 62 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
# 38 "data/maps/VictoryRoad_1F/scripts.pory"
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
# 39 "data/maps/VictoryRoad_1F/scripts.pory"
# 66 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
# 72 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 76 "data/maps/VictoryRoad_1F/scripts.pory"

# 77 "data/maps/VictoryRoad_1F/scripts.pory"

# 78 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 79 "data/maps/VictoryRoad_1F/scripts.pory"
# 48 "data/maps/VictoryRoad_1F/scripts.pory"
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
# 49 "data/maps/VictoryRoad_1F/scripts.pory"
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/VictoryRoad_1F/scripts.pory"
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
# 84 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
# 88 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 89 "data/maps/VictoryRoad_1F/scripts.pory"
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
# 90 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 91 "data/maps/VictoryRoad_1F/scripts.pory"
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
# 92 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 93 "data/maps/VictoryRoad_1F/scripts.pory"
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
# 94 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 95 "data/maps/VictoryRoad_1F/scripts.pory"
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
# 96 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 97 "data/maps/VictoryRoad_1F/scripts.pory"
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
# 98 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 100 "data/maps/VictoryRoad_1F/scripts.pory"

# 101 "data/maps/VictoryRoad_1F/scripts.pory"

# 102 "data/maps/VictoryRoad_1F/scripts.pory"
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
# 103 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 104 "data/maps/VictoryRoad_1F/scripts.pory"
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
# 105 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 106 "data/maps/VictoryRoad_1F/scripts.pory"
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
# 107 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 108 "data/maps/VictoryRoad_1F/scripts.pory"
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
# 109 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
# 111 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 112 "data/maps/VictoryRoad_1F/scripts.pory"
# 66 "data/maps/VictoryRoad_1F/scripts.pory"
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 114 "data/maps/VictoryRoad_1F/scripts.pory"
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
# 115 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 116 "data/maps/VictoryRoad_1F/scripts.pory"
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
# 117 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 120 "data/maps/VictoryRoad_1F/scripts.pory"
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
# 121 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 122 "data/maps/VictoryRoad_1F/scripts.pory"
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
# 123 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
# 72 "data/maps/VictoryRoad_1F/scripts.pory"
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 126 "data/maps/VictoryRoad_1F/scripts.pory"
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
# 127 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 128 "data/maps/VictoryRoad_1F/scripts.pory"

# 129 "data/maps/VictoryRoad_1F/scripts.pory"
# 76 "data/maps/VictoryRoad_1F/scripts.pory"
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 131 "data/maps/VictoryRoad_1F/scripts.pory"
# 77 "data/maps/VictoryRoad_1F/scripts.pory"
# 132 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 133 "data/maps/VictoryRoad_1F/scripts.pory"
# 78 "data/maps/VictoryRoad_1F/scripts.pory"
# 134 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 135 "data/maps/VictoryRoad_1F/scripts.pory"
# 79 "data/maps/VictoryRoad_1F/scripts.pory"
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 137 "data/maps/VictoryRoad_1F/scripts.pory"
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
# 138 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 139 "data/maps/VictoryRoad_1F/scripts.pory"
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
# 140 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 141 "data/maps/VictoryRoad_1F/scripts.pory"
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
# 142 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 143 "data/maps/VictoryRoad_1F/scripts.pory"
# 83 "data/maps/VictoryRoad_1F/scripts.pory"
# 144 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 145 "data/maps/VictoryRoad_1F/scripts.pory"
# 84 "data/maps/VictoryRoad_1F/scripts.pory"
# 146 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 147 "data/maps/VictoryRoad_1F/scripts.pory"
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 149 "data/maps/VictoryRoad_1F/scripts.pory"
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
# 150 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 151 "data/maps/VictoryRoad_1F/scripts.pory"
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
# 152 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 153 "data/maps/VictoryRoad_1F/scripts.pory"

# 154 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 155 "data/maps/VictoryRoad_1F/scripts.pory"
# 91 "data/maps/VictoryRoad_1F/scripts.pory"
# 156 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 158 "data/maps/VictoryRoad_1F/scripts.pory"

# 159 "data/maps/VictoryRoad_1F/scripts.pory"

# 160 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 161 "data/maps/VictoryRoad_1F/scripts.pory"
# 96 "data/maps/VictoryRoad_1F/scripts.pory"
# 162 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 163 "data/maps/VictoryRoad_1F/scripts.pory"
# 97 "data/maps/VictoryRoad_1F/scripts.pory"
# 164 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 165 "data/maps/VictoryRoad_1F/scripts.pory"
# 98 "data/maps/VictoryRoad_1F/scripts.pory"
# 166 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 167 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VictoryRoad_1F_EventScript_ExitWally_2
# 168 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally_1:
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
# 101 "data/maps/VictoryRoad_1F/scripts.pory"
# 170 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 171 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 172 "data/maps/VictoryRoad_1F/scripts.pory"

# 173 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally_2:
# 174 "data/maps/VictoryRoad_1F/scripts.pory"
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
# 175 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_RematchWally
# 176 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_ExitWally_1
# 177 "data/maps/VictoryRoad_1F/scripts.pory"

# 178 "data/maps/VictoryRoad_1F/scripts.pory"

# 179 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 180 "data/maps/VictoryRoad_1F/scripts.pory"
# 106 "data/maps/VictoryRoad_1F/scripts.pory"
# 181 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 182 "data/maps/VictoryRoad_1F/scripts.pory"
# 107 "data/maps/VictoryRoad_1F/scripts.pory"
# 183 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 185 "data/maps/VictoryRoad_1F/scripts.pory"

# 186 "data/maps/VictoryRoad_1F/scripts.pory"

# 187 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar::
# 188 "data/maps/VictoryRoad_1F/scripts.pory"
# 112 "data/maps/VictoryRoad_1F/scripts.pory"
# 189 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 190 "data/maps/VictoryRoad_1F/scripts.pory"
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
# 191 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 193 "data/maps/VictoryRoad_1F/scripts.pory"

# 194 "data/maps/VictoryRoad_1F/scripts.pory"

# 195 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 196 "data/maps/VictoryRoad_1F/scripts.pory"
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
# 197 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 198 "data/maps/VictoryRoad_1F/scripts.pory"
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
# 199 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 201 "data/maps/VictoryRoad_1F/scripts.pory"

# 202 "data/maps/VictoryRoad_1F/scripts.pory"

# 203 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 204 "data/maps/VictoryRoad_1F/scripts.pory"
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
# 205 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 206 "data/maps/VictoryRoad_1F/scripts.pory"
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
# 207 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 209 "data/maps/VictoryRoad_1F/scripts.pory"

# 210 "data/maps/VictoryRoad_1F/scripts.pory"

# 211 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 212 "data/maps/VictoryRoad_1F/scripts.pory"
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
# 213 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 214 "data/maps/VictoryRoad_1F/scripts.pory"
# 131 "data/maps/VictoryRoad_1F/scripts.pory"
# 215 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 216 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 217 "data/maps/VictoryRoad_1F/scripts.pory"

# 218 "data/maps/VictoryRoad_1F/scripts.pory"

# 219 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 220 "data/maps/VictoryRoad_1F/scripts.pory"
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
# 221 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 222 "data/maps/VictoryRoad_1F/scripts.pory"
# 137 "data/maps/VictoryRoad_1F/scripts.pory"
# 223 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 225 "data/maps/VictoryRoad_1F/scripts.pory"

# 226 "data/maps/VictoryRoad_1F/scripts.pory"

# 227 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore::
# 228 "data/maps/VictoryRoad_1F/scripts.pory"
# 141 "data/maps/VictoryRoad_1F/scripts.pory"
# 229 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 230 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I bet you're surprised to see me here!\p"
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I made it all the way here, and it's\n"
# 232 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "all thanks to you!\p"
# 233 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, losing to you that time\n"
# 234 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "made me stronger!\p"
# 235 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "But I'm not going to lose anymore!\p"
# 236 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to win! For the POKéMON who\n"
# 237 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "gave me courage and strength!\p"
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 239 "data/maps/VictoryRoad_1F/scripts.pory"

# 240 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat::
# 241 "data/maps/VictoryRoad_1F/scripts.pory"
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 243 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 244 "data/maps/VictoryRoad_1F/scripts.pory"

# 245 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle::
# 246 "data/maps/VictoryRoad_1F/scripts.pory"
# 159 "data/maps/VictoryRoad_1F/scripts.pory"
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you today,\n"
# 248 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, but one of these days, I'll\l"
# 249 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "catch up to you!$"
# 250 "data/maps/VictoryRoad_1F/scripts.pory"

# 251 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro::
# 252 "data/maps/VictoryRoad_1F/scripts.pory"
# 165 "data/maps/VictoryRoad_1F/scripts.pory"
# 253 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 254 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've gotten stronger since that last\n"
# 255 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "time! I wanted to show you, {PLAYER}!\p"
# 256 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 257 "data/maps/VictoryRoad_1F/scripts.pory"

# 258 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat::
# 259 "data/maps/VictoryRoad_1F/scripts.pory"
# 172 "data/maps/VictoryRoad_1F/scripts.pory"
# 260 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 261 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 262 "data/maps/VictoryRoad_1F/scripts.pory"

# 263 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle::
# 264 "data/maps/VictoryRoad_1F/scripts.pory"
# 177 "data/maps/VictoryRoad_1F/scripts.pory"
# 265 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you this time,\n"
# 266 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "too… But one of these days, {PLAYER},\l"
# 267 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to catch up to you…\p"
# 268 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "And challenge the POKéMON LEAGUE!$"
# 269 "data/maps/VictoryRoad_1F/scripts.pory"

# 270 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro::
# 271 "data/maps/VictoryRoad_1F/scripts.pory"
# 184 "data/maps/VictoryRoad_1F/scripts.pory"
# 272 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've made it this far a couple times,\n"
# 273 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "but the last stretch is so long…$"
# 274 "data/maps/VictoryRoad_1F/scripts.pory"

# 275 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat::
# 276 "data/maps/VictoryRoad_1F/scripts.pory"
# 189 "data/maps/VictoryRoad_1F/scripts.pory"
# 277 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "My dream ends here again…$"
# 278 "data/maps/VictoryRoad_1F/scripts.pory"

# 279 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle::
# 280 "data/maps/VictoryRoad_1F/scripts.pory"
# 193 "data/maps/VictoryRoad_1F/scripts.pory"
# 281 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You've made it this far. Keep the\n"
# 282 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "momentum going and become the\l"
# 283 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "CHAMPION! If anyone can, it's you!$"
# 284 "data/maps/VictoryRoad_1F/scripts.pory"

# 285 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro::
# 286 "data/maps/VictoryRoad_1F/scripts.pory"
# 199 "data/maps/VictoryRoad_1F/scripts.pory"
# 287 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I didn't come all this way to lose now.\n"
# 288 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That possibility doesn't exist!$"
# 289 "data/maps/VictoryRoad_1F/scripts.pory"

# 290 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat::
# 291 "data/maps/VictoryRoad_1F/scripts.pory"
# 204 "data/maps/VictoryRoad_1F/scripts.pory"
# 292 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Impossible…\n"
# 293 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost?$"
# 294 "data/maps/VictoryRoad_1F/scripts.pory"

# 295 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle::
# 296 "data/maps/VictoryRoad_1F/scripts.pory"
# 209 "data/maps/VictoryRoad_1F/scripts.pory"
# 297 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost here…\p"
# 298 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That means I lack the qualifications\n"
# 299 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the CHAMPION…$"
# 300 "data/maps/VictoryRoad_1F/scripts.pory"

# 301 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro::
# 302 "data/maps/VictoryRoad_1F/scripts.pory"
# 215 "data/maps/VictoryRoad_1F/scripts.pory"
# 303 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This seemingly infinite and harsh road\n"
# 304 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "lives up to its name of VICTORY.$"
# 305 "data/maps/VictoryRoad_1F/scripts.pory"

# 306 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat::
# 307 "data/maps/VictoryRoad_1F/scripts.pory"
# 220 "data/maps/VictoryRoad_1F/scripts.pory"
# 308 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Your battle style is fantastic…$"
# 309 "data/maps/VictoryRoad_1F/scripts.pory"

# 310 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle::
# 311 "data/maps/VictoryRoad_1F/scripts.pory"
# 224 "data/maps/VictoryRoad_1F/scripts.pory"
# 312 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You seem to have the potential for\n"
# 313 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "becoming the CHAMPION.$"
# 314 "data/maps/VictoryRoad_1F/scripts.pory"

# 315 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro::
# 316 "data/maps/VictoryRoad_1F/scripts.pory"
# 229 "data/maps/VictoryRoad_1F/scripts.pory"
# 317 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What is the VICTORY ROAD?\n"
# 318 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll tell you if you win!$"
# 319 "data/maps/VictoryRoad_1F/scripts.pory"

# 320 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat::
# 321 "data/maps/VictoryRoad_1F/scripts.pory"
# 234 "data/maps/VictoryRoad_1F/scripts.pory"
# 322 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
# 323 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Well done!$"
# 324 "data/maps/VictoryRoad_1F/scripts.pory"

# 325 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle::
# 326 "data/maps/VictoryRoad_1F/scripts.pory"
# 239 "data/maps/VictoryRoad_1F/scripts.pory"
# 327 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Getting through here safely--that's\n"
# 328 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "the final test for any TRAINER aiming\l"
# 329 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the POKéMON CHAMPION.\p"
# 330 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That's why it's called the VICTORY\n"
# 331 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "ROAD.$"
# 332 "data/maps/VictoryRoad_1F/scripts.pory"

# 333 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro::
# 334 "data/maps/VictoryRoad_1F/scripts.pory"
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
# 335 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have nothing to say to anyone\n"
# 336 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "that's come this far. Come on!$"
# 337 "data/maps/VictoryRoad_1F/scripts.pory"

# 338 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat::
# 339 "data/maps/VictoryRoad_1F/scripts.pory"
# 252 "data/maps/VictoryRoad_1F/scripts.pory"
# 340 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This is a disgrace…$"
# 341 "data/maps/VictoryRoad_1F/scripts.pory"

# 342 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle::
# 343 "data/maps/VictoryRoad_1F/scripts.pory"
# 256 "data/maps/VictoryRoad_1F/scripts.pory"
# 344 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Humph, go right on ahead.\n"
# 345 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "See if I care.$"
