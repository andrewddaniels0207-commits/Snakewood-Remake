# 1 "data/maps/TrainerHill_Entrance/scripts.pory"

# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts::
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 11 "data/maps/TrainerHill_Entrance/scripts.pory"
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"
# 12 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	.byte 0
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"

# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
# 19 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"

# 26 "data/maps/TrainerHill_Entrance/scripts.pory"

# 27 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition::
# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 33 "data/maps/TrainerHill_Entrance/scripts.pory"

# 34 "data/maps/TrainerHill_Entrance/scripts.pory"

# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp::
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 37 "data/maps/TrainerHill_Entrance/scripts.pory"

# 38 "data/maps/TrainerHill_Entrance/scripts.pory"

# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume::
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 48 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_OnResume_2
# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume_1:
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 6
# 52 "data/maps/TrainerHill_Entrance/scripts.pory"
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"
# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 54 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 55 "data/maps/TrainerHill_Entrance/scripts.pory"

# 56 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume_2:
# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_TryFaceAttendant
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_OnResume_1
# 60 "data/maps/TrainerHill_Entrance/scripts.pory"

# 61 "data/maps/TrainerHill_Entrance/scripts.pory"

# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"
# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_EventScript_TryFaceAttendant_2
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant_1:
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"

# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant_2:
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_TryFaceAttendant_1
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"

# 78 "data/maps/TrainerHill_Entrance/scripts.pory"

# 79 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"

# 82 "data/maps/TrainerHill_Entrance/scripts.pory"

# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn::
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_NURSE
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_ATTENDANT
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
# 52 "data/maps/TrainerHill_Entrance/scripts.pory"
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_MAN
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_GIRL
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"

# 94 "data/maps/TrainerHill_Entrance/scripts.pory"

# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad::
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_TEMP_D, 17
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_OnLoad_2
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad_1:
# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"

# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad_2:
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
	call TrainerHill_Entrance_EventScript_OpenCounterDoor
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_OnLoad_1
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"

# 107 "data/maps/TrainerHill_Entrance/scripts.pory"

# 108 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"

# 113 "data/maps/TrainerHill_Entrance/scripts.pory"

# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
# 116 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
# 120 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
# 122 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"

# 135 "data/maps/TrainerHill_Entrance/scripts.pory"

# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallenge_2
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallenge_3
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_ExitChallenge_4
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"

# 151 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge_2:
# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ExitChallengeLost
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"

# 156 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge_3:
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ExitChallengeECard
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"

# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge_4:
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_EndExitChallenge
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"

# 166 "data/maps/TrainerHill_Entrance/scripts.pory"

# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"

# 178 "data/maps/TrainerHill_Entrance/scripts.pory"

# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"

# 188 "data/maps/TrainerHill_Entrance/scripts.pory"

# 189 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 190 "data/maps/TrainerHill_Entrance/scripts.pory"
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 202 "data/maps/TrainerHill_Entrance/scripts.pory"
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"

# 206 "data/maps/TrainerHill_Entrance/scripts.pory"

# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"

# 210 "data/maps/TrainerHill_Entrance/scripts.pory"

# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_TRAINER_HILL_NURSE
# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"

# 224 "data/maps/TrainerHill_Entrance/scripts.pory"

# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
# 233 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_EventScript_Attendant_2
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant_1:
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 238 "data/maps/TrainerHill_Entrance/scripts.pory"
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"

# 242 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant_2:
# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ThanksForPlaying
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_Attendant_1
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"

# 247 "data/maps/TrainerHill_Entrance/scripts.pory"

# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"

# 253 "data/maps/TrainerHill_Entrance/scripts.pory"

# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"

# 259 "data/maps/TrainerHill_Entrance/scripts.pory"

# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger::
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_EntryTrigger_2
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger_1:
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_EventScript_EntryTrigger_5
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger_4:
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_EventScript_EntryTrigger_8
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger_7:
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"

# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger_2:
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_Closed
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_EntryTrigger_1
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"

# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger_5:
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
	call TrainerHill_Entrance_EventScript_SaveGame
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_EntryTrigger_4
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"

# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger_8:
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AllFloorsUsed
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_EntryTrigger_7
# 302 "data/maps/TrainerHill_Entrance/scripts.pory"

# 303 "data/maps/TrainerHill_Entrance/scripts.pory"

# 304 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"

# 309 "data/maps/TrainerHill_Entrance/scripts.pory"

# 310 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_AskChallengeTrainers_3
# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_AskChallengeTrainers_4
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_AskChallengeTrainers_5
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_AskChallengeTrainers_6
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers_1:
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"

# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers_3:
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ChooseChallenge
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers_1
# 334 "data/maps/TrainerHill_Entrance/scripts.pory"

# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers_4:
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers_1
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"

# 340 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers_5:
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_Info
# 343 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers_1
# 344 "data/maps/TrainerHill_Entrance/scripts.pory"

# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers_6:
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers_1
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"

# 350 "data/maps/TrainerHill_Entrance/scripts.pory"

# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 356 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 357 "data/maps/TrainerHill_Entrance/scripts.pory"

# 358 "data/maps/TrainerHill_Entrance/scripts.pory"

# 359 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_ChooseChallenge_3
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
# 202 "data/maps/TrainerHill_Entrance/scripts.pory"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_ChooseChallenge_4
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge_1:
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"
# 370 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
# 206 "data/maps/TrainerHill_Entrance/scripts.pory"
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"
# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"

# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge_3:
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ChooseChallenge_1
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"

# 392 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge_4:
# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ChooseChallenge_1
# 396 "data/maps/TrainerHill_Entrance/scripts.pory"

# 397 "data/maps/TrainerHill_Entrance/scripts.pory"

# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 412 "data/maps/TrainerHill_Entrance/scripts.pory"

# 413 "data/maps/TrainerHill_Entrance/scripts.pory"

# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"
# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
# 420 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_EventScript_SaveGame_2
# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame_1:
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
# 428 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 429 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 430 "data/maps/TrainerHill_Entrance/scripts.pory"

# 431 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame_2:
# 432 "data/maps/TrainerHill_Entrance/scripts.pory"
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_SaveFailed
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_SaveGame_1
# 435 "data/maps/TrainerHill_Entrance/scripts.pory"

# 436 "data/maps/TrainerHill_Entrance/scripts.pory"

# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
# 439 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 442 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 443 "data/maps/TrainerHill_Entrance/scripts.pory"

# 444 "data/maps/TrainerHill_Entrance/scripts.pory"

# 445 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 448 "data/maps/TrainerHill_Entrance/scripts.pory"
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 452 "data/maps/TrainerHill_Entrance/scripts.pory"
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
# 453 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 454 "data/maps/TrainerHill_Entrance/scripts.pory"
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
# 455 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 456 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 457 "data/maps/TrainerHill_Entrance/scripts.pory"

# 458 "data/maps/TrainerHill_Entrance/scripts.pory"

# 459 "data/maps/TrainerHill_Entrance/scripts.pory"
# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
# 460 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 461 "data/maps/TrainerHill_Entrance/scripts.pory"
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
# 462 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 463 "data/maps/TrainerHill_Entrance/scripts.pory"
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
# 464 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 465 "data/maps/TrainerHill_Entrance/scripts.pory"

# 466 "data/maps/TrainerHill_Entrance/scripts.pory"
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
# 467 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 468 "data/maps/TrainerHill_Entrance/scripts.pory"
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
# 469 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 470 "data/maps/TrainerHill_Entrance/scripts.pory"
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
# 471 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 472 "data/maps/TrainerHill_Entrance/scripts.pory"

# 473 "data/maps/TrainerHill_Entrance/scripts.pory"
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
# 474 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 475 "data/maps/TrainerHill_Entrance/scripts.pory"
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
# 476 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 477 "data/maps/TrainerHill_Entrance/scripts.pory"
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
# 478 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 479 "data/maps/TrainerHill_Entrance/scripts.pory"

# 480 "data/maps/TrainerHill_Entrance/scripts.pory"
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
# 481 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 482 "data/maps/TrainerHill_Entrance/scripts.pory"
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
# 483 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 484 "data/maps/TrainerHill_Entrance/scripts.pory"
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
# 485 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 486 "data/maps/TrainerHill_Entrance/scripts.pory"
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
# 487 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 488 "data/maps/TrainerHill_Entrance/scripts.pory"

# 489 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 490 "data/maps/TrainerHill_Entrance/scripts.pory"
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
# 491 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 492 "data/maps/TrainerHill_Entrance/scripts.pory"
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
# 493 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 494 "data/maps/TrainerHill_Entrance/scripts.pory"
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
# 495 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x8004, 0
# 496 "data/maps/TrainerHill_Entrance/scripts.pory"
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
# 497 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 498 "data/maps/TrainerHill_Entrance/scripts.pory"
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
# 499 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 500 "data/maps/TrainerHill_Entrance/scripts.pory"
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
# 501 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 502 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 503 "data/maps/TrainerHill_Entrance/scripts.pory"

# 504 "data/maps/TrainerHill_Entrance/scripts.pory"

# 505 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 506 "data/maps/TrainerHill_Entrance/scripts.pory"
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
# 507 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Man_2
# 508 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man_1:
# 509 "data/maps/TrainerHill_Entrance/scripts.pory"
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
# 510 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 511 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 512 "data/maps/TrainerHill_Entrance/scripts.pory"

# 513 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man_2:
# 514 "data/maps/TrainerHill_Entrance/scripts.pory"
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
# 515 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 516 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_Man_1
# 517 "data/maps/TrainerHill_Entrance/scripts.pory"

# 518 "data/maps/TrainerHill_Entrance/scripts.pory"

# 519 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 520 "data/maps/TrainerHill_Entrance/scripts.pory"
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
# 521 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 522 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 523 "data/maps/TrainerHill_Entrance/scripts.pory"

# 524 "data/maps/TrainerHill_Entrance/scripts.pory"

# 525 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 526 "data/maps/TrainerHill_Entrance/scripts.pory"
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
# 527 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Girl_2
# 528 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl_1:
# 529 "data/maps/TrainerHill_Entrance/scripts.pory"
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
# 530 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 531 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 532 "data/maps/TrainerHill_Entrance/scripts.pory"

# 533 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl_2:
# 534 "data/maps/TrainerHill_Entrance/scripts.pory"
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
# 535 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 536 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_Girl_1
# 537 "data/maps/TrainerHill_Entrance/scripts.pory"

# 538 "data/maps/TrainerHill_Entrance/scripts.pory"

# 539 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 540 "data/maps/TrainerHill_Entrance/scripts.pory"
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
# 541 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 542 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 543 "data/maps/TrainerHill_Entrance/scripts.pory"

# 544 "data/maps/TrainerHill_Entrance/scripts.pory"

# 545 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk::
# 546 "data/maps/TrainerHill_Entrance/scripts.pory"
# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
# 547 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 548 "data/maps/TrainerHill_Entrance/scripts.pory"
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
# 549 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 550 "data/maps/TrainerHill_Entrance/scripts.pory"
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
# 551 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 552 "data/maps/TrainerHill_Entrance/scripts.pory"
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
# 553 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 554 "data/maps/TrainerHill_Entrance/scripts.pory"
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
# 555 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Clerk_2
# 556 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk_1:
# 557 "data/maps/TrainerHill_Entrance/scripts.pory"
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
# 558 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Basic
# 559 "data/maps/TrainerHill_Entrance/scripts.pory"
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
# 560 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 561 "data/maps/TrainerHill_Entrance/scripts.pory"
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
# 562 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 563 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 564 "data/maps/TrainerHill_Entrance/scripts.pory"

# 565 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk_2:
# 566 "data/maps/TrainerHill_Entrance/scripts.pory"
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
# 567 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ExpandedPokemart
# 568 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_Clerk_1
# 569 "data/maps/TrainerHill_Entrance/scripts.pory"

# 570 "data/maps/TrainerHill_Entrance/scripts.pory"

# 571 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic::
# 572 "data/maps/TrainerHill_Entrance/scripts.pory"
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
# 573 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartlistend
# 574 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 575 "data/maps/TrainerHill_Entrance/scripts.pory"

# 576 "data/maps/TrainerHill_Entrance/scripts.pory"

# 577 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 578 "data/maps/TrainerHill_Entrance/scripts.pory"
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
# 579 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 580 "data/maps/TrainerHill_Entrance/scripts.pory"
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
# 581 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 582 "data/maps/TrainerHill_Entrance/scripts.pory"
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
# 583 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 584 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 585 "data/maps/TrainerHill_Entrance/scripts.pory"

# 586 "data/maps/TrainerHill_Entrance/scripts.pory"

# 587 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded::
# 588 "data/maps/TrainerHill_Entrance/scripts.pory"
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
# 589 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartlistend
# 590 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 591 "data/maps/TrainerHill_Entrance/scripts.pory"

# 592 "data/maps/TrainerHill_Entrance/scripts.pory"

# 593 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady::
# 594 "data/maps/TrainerHill_Entrance/scripts.pory"
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"
# 595 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 596 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 597 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS.\p"
# 598 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Unfortunately, we're still getting\n"
# 599 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "things ready. Please come back later!$"
# 600 "data/maps/TrainerHill_Entrance/scripts.pory"

# 601 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill::
# 602 "data/maps/TrainerHill_Entrance/scripts.pory"
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
# 603 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
# 604 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 605 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 606 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS!$"
# 607 "data/maps/TrainerHill_Entrance/scripts.pory"

# 608 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter::
# 609 "data/maps/TrainerHill_Entrance/scripts.pory"
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
# 610 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
# 611 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Before you enter, please save\n"
# 612 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your game.$"
# 613 "data/maps/TrainerHill_Entrance/scripts.pory"

# 614 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX::
# 615 "data/maps/TrainerHill_Entrance/scripts.pory"
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
# 616 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 617 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 618 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Up to floor no. {STR_VAR_1}.$"
# 619 "data/maps/TrainerHill_Entrance/scripts.pory"

# 620 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom::
# 621 "data/maps/TrainerHill_Entrance/scripts.pory"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
# 622 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 623 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 624 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "There appear to be TRAINERS gathered\n"
# 625 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in every room.$"
# 626 "data/maps/TrainerHill_Entrance/scripts.pory"

# 627 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers::
# 628 "data/maps/TrainerHill_Entrance/scripts.pory"
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
# 629 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
# 630 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "waiting TRAINERS?$"
# 631 "data/maps/TrainerHill_Entrance/scripts.pory"

# 632 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo::
# 633 "data/maps/TrainerHill_Entrance/scripts.pory"
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
# 634 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
# 635 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Best of luck!\p"
# 636 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "On your marks…\p"
# 637 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Get set…\p"
# 638 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Go!$"
# 639 "data/maps/TrainerHill_Entrance/scripts.pory"

# 640 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain::
# 641 "data/maps/TrainerHill_Entrance/scripts.pory"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
# 642 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"
# 643 "data/maps/TrainerHill_Entrance/scripts.pory"

# 644 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort::
# 645 "data/maps/TrainerHill_Entrance/scripts.pory"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
# 646 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
# 647 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I think you put in a tremendous\n"
# 648 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "effort in your battling.\p"
# 649 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please come back and try again!$"
# 650 "data/maps/TrainerHill_Entrance/scripts.pory"

# 651 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest::
# 652 "data/maps/TrainerHill_Entrance/scripts.pory"
# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
# 653 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"
# 654 "data/maps/TrainerHill_Entrance/scripts.pory"

# 655 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch::
# 656 "data/maps/TrainerHill_Entrance/scripts.pory"
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
# 657 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the TRAINERS switch places,\n"
# 658 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the movement can be hectic.\p"
# 659 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 660 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter here.\p"
# 661 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 662 "data/maps/TrainerHill_Entrance/scripts.pory"

# 663 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying::
# 664 "data/maps/TrainerHill_Entrance/scripts.pory"
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
# 665 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"
# 666 "data/maps/TrainerHill_Entrance/scripts.pory"

# 667 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill::
# 668 "data/maps/TrainerHill_Entrance/scripts.pory"
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"
# 669 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the TRAINER HILL, we conduct\n"
# 670 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "an event called the Time Attack.\p"
# 671 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It is a race that measures how long\n"
# 672 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you take to reach our owner on\l"
# 673 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the rooftop from this counter.\p"
# 674 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The fastest times are posted on\n"
# 675 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the Time Board--try competing with\l"
# 676 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your friends.\p"
# 677 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In TRAINER battles along the way,\n"
# 678 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "neither Exp. Points nor money will\l"
# 679 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "be awarded.$"
# 680 "data/maps/TrainerHill_Entrance/scripts.pory"

# 681 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon::
# 682 "data/maps/TrainerHill_Entrance/scripts.pory"
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
# 683 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
# 684 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one POKéMON with you.\p"
# 685 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two POKéMON\n"
# 686 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 687 "data/maps/TrainerHill_Entrance/scripts.pory"

# 688 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo::
# 689 "data/maps/TrainerHill_Entrance/scripts.pory"
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
# 690 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
# 691 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You finally came!\n"
# 692 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Yes, you have arrived!\p"
# 693 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wait! Don't say it!\n"
# 694 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I know why you came all the way\l"
# 695 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here by yourself!\p"
# 696 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You wanted to see me, the owner\n"
# 697 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of the TRAINER HILL, because…\p"
# 698 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You want to form a tag team with me!\n"
# 699 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wa-hoo!\p"
# 700 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "…Uh?\n"
# 701 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That's not it?\p"
# 702 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Anyway, I watched you on your way up.\n"
# 703 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Marvelous battling! Bravo, indeed!$"
# 704 "data/maps/TrainerHill_Entrance/scripts.pory"

# 705 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift::
# 706 "data/maps/TrainerHill_Entrance/scripts.pory"
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"
# 707 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
# 708 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I have the most marvelous gift!$"
# 709 "data/maps/TrainerHill_Entrance/scripts.pory"

# 710 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis::
# 711 "data/maps/TrainerHill_Entrance/scripts.pory"
# 456 "data/maps/TrainerHill_Entrance/scripts.pory"
# 712 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
# 713 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You'll be back later for this!$"
# 714 "data/maps/TrainerHill_Entrance/scripts.pory"

# 715 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly::
# 716 "data/maps/TrainerHill_Entrance/scripts.pory"
# 461 "data/maps/TrainerHill_Entrance/scripts.pory"
# 717 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
# 718 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here marvelously quickly?\p"
# 719 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "How splendid! You needn't have\n"
# 720 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hurried so to see me!\p"
# 721 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That is so delightful. I'll have the Time\n"
# 722 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Board at the reception updated!$"
# 723 "data/maps/TrainerHill_Entrance/scripts.pory"

# 724 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick::
# 725 "data/maps/TrainerHill_Entrance/scripts.pory"
# 470 "data/maps/TrainerHill_Entrance/scripts.pory"
# 726 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
# 727 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You weren't very quick getting here.$"
# 728 "data/maps/TrainerHill_Entrance/scripts.pory"

# 729 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime::
# 730 "data/maps/TrainerHill_Entrance/scripts.pory"
# 475 "data/maps/TrainerHill_Entrance/scripts.pory"
# 731 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
# 732 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "arrived zippier next time.\p"
# 733 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Then, I should be pleased to form\n"
# 734 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a tag team with you!\p"
# 735 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Until we meet again, amigo!$"
# 736 "data/maps/TrainerHill_Entrance/scripts.pory"

# 737 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner::
# 738 "data/maps/TrainerHill_Entrance/scripts.pory"
# 483 "data/maps/TrainerHill_Entrance/scripts.pory"
# 739 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the TRAINER HILL built for but\n"
# 740 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 741 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 742 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 743 "data/maps/TrainerHill_Entrance/scripts.pory"

# 744 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime::
# 745 "data/maps/TrainerHill_Entrance/scripts.pory"
# 490 "data/maps/TrainerHill_Entrance/scripts.pory"
# 746 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 747 "data/maps/TrainerHill_Entrance/scripts.pory"

# 748 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead::
# 749 "data/maps/TrainerHill_Entrance/scripts.pory"
# 494 "data/maps/TrainerHill_Entrance/scripts.pory"
# 750 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of TRAINERS\n"
# 751 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "and POKéMON combos are ahead?\p"
# 752 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "All I know is that I'll knock aside\n"
# 753 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "anyone that stands in my way!$"
# 754 "data/maps/TrainerHill_Entrance/scripts.pory"

# 755 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters::
# 756 "data/maps/TrainerHill_Entrance/scripts.pory"
# 501 "data/maps/TrainerHill_Entrance/scripts.pory"
# 757 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough TRAINERS come to this\n"
# 758 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINER HILL from all over.\p"
# 759 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I can't wait to test the waters!\p"
# 760 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'll knock aside anyone that stands\n"
# 761 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in my way!$"
# 762 "data/maps/TrainerHill_Entrance/scripts.pory"

# 763 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop::
# 764 "data/maps/TrainerHill_Entrance/scripts.pory"
# 509 "data/maps/TrainerHill_Entrance/scripts.pory"
# 765 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
# 766 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "My friends and I are trying to see who\n"
# 767 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "can reach the top in the least time.$"
# 768 "data/maps/TrainerHill_Entrance/scripts.pory"

# 769 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen::
# 770 "data/maps/TrainerHill_Entrance/scripts.pory"
# 515 "data/maps/TrainerHill_Entrance/scripts.pory"
# 771 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
# 772 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "this place up?\p"
# 773 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm waiting here to be the first\n"
# 774 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "challenger ever!$"
# 775 "data/maps/TrainerHill_Entrance/scripts.pory"

# 776 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception::
# 777 "data/maps/TrainerHill_Entrance/scripts.pory"
# 522 "data/maps/TrainerHill_Entrance/scripts.pory"
# 778 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
# 779 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter?$"
