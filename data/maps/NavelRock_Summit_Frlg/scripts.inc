# 1 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 2 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_Frlg_MapScripts::
# 3 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 2 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 4 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Summit_OnTransition
# 5 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 3 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 6 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Summit_OnResume
# 7 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 9 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 10 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_OnTransition::
# 11 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 7 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 12 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto_if_set FLAG_FOUGHT_HO_OH, NavelRock_Summit_OnTransition_2
# 13 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_OnTransition_1:
# 14 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 10 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 15 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_HO_OH, NavelRock_Summit_OnTransition_5
# 16 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_OnTransition_4:
# 17 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	end
# 18 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 19 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_OnTransition_2:
# 20 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 8 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 21 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	call NavelRock_Summit_EventScript_HideHoOh
# 22 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto NavelRock_Summit_OnTransition_1
# 23 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 24 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_OnTransition_5:
# 25 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 11 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 26 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	call NavelRock_Summit_EventScript_TryShowHoOh
# 27 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto NavelRock_Summit_OnTransition_4
# 28 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 29 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 30 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HideHoOh::
# 31 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 17 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 32 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 18 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 34 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setflag FLAG_HIDE_HO_OH
# 35 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	return
# 36 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 37 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 38 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_TryShowHoOh::
# 39 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 23 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 40 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 24 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 42 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto_if_set FLAG_HO_OH_FLEW_AWAY, NavelRock_Summit_EventScript_TryShowHoOh_2
# 43 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_TryShowHoOh_1:
# 44 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 27 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 45 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 46 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 28 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 47 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	clearflag FLAG_HIDE_HO_OH
# 48 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	return
# 49 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 50 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_TryShowHoOh_2:
# 51 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 25 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 52 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 53 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto NavelRock_Summit_EventScript_TryShowHoOh_1
# 54 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 55 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 56 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_OnResume::
# 57 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 33 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 58 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, NavelRock_Summit_OnResume_2
# 59 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_OnResume_1:
# 60 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	end
# 61 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 62 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_OnResume_2:
# 63 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 34 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 64 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	call NavelRock_Summit_EventScript_TryRemoveHoOh
# 65 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto NavelRock_Summit_OnResume_1
# 66 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 67 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 68 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_TryRemoveHoOh::
# 69 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 40 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 70 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 71 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 41 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 72 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 73 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto_if_ne NavelRock_Summit_EventScript_TryRemoveHoOh_2
# 74 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_TryRemoveHoOh_1:
# 75 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 44 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 76 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	removeobject LOCALID_NAVEL_ROCK_HO_OH
# 77 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	return
# 78 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 79 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_TryRemoveHoOh_2:
# 80 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 42 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 81 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 82 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto NavelRock_Summit_EventScript_TryRemoveHoOh_1
# 83 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 84 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 85 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HoOh::
# 86 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 49 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 87 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	lockall
# 88 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 50 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 89 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 90 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 51 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 91 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	special SpawnCameraObject
# 92 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 52 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 93 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 94 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 53 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 95 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8005, 35
# 96 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 54 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 97 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	special LoopWingFlapSE
# 98 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 55 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 99 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	applymovement LOCALID_NAVEL_ROCK_HO_OH, Movement_HoOhAppear
# 100 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 56 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 101 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, Movement_CameraPanUp
# 102 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 57 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 103 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	waitmovement 0
# 104 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 58 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 105 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay 50
# 106 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 59 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 107 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setweather 0
# 108 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 60 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 109 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	doweather
# 110 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 61 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 111 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	waitse
# 112 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 62 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 113 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 114 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 63 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 115 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay 30
# 116 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 64 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 117 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	waitmoncry
# 118 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 65 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 119 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay 60
# 120 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 66 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 121 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 122 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 67 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 123 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8005, 35
# 124 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 68 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 125 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	special LoopWingFlapSE
# 126 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 69 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 127 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, Movement_CameraPanDown
# 128 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 70 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 129 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	applymovement LOCALID_NAVEL_ROCK_HO_OH, Movement_HoOhApproach
# 130 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 71 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 131 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	waitmovement 0
# 132 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 72 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 133 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	special RemoveCameraObject
# 134 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 73 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 135 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	seteventmon SPECIES_HO_OH, 70
# 136 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 74 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 137 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 138 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 75 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 139 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 140 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 76 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 141 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	waitstate
# 142 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 77 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 143 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 144 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 78 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 145 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_NAVEL_ROCK_HO_OH
# 146 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 79 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 147 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 148 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 80 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 149 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 150 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto_if_eq NavelRock_Summit_EventScript_HoOh_2
# 151 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HoOh_1:
# 152 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 83 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 153 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 154 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto_if_eq NavelRock_Summit_EventScript_HoOh_5
# 155 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HoOh_4:
# 156 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 86 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 157 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 158 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto_if_eq NavelRock_Summit_EventScript_HoOh_8
# 159 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HoOh_7:
# 160 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 89 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 161 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_HO_OH
# 162 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 90 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 163 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	releaseall
# 164 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	end
# 165 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 166 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HoOh_2:
# 167 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 81 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 168 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto NavelRock_Summit_EventScript_DefeatedHoOh
# 169 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto NavelRock_Summit_EventScript_HoOh_1
# 170 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 171 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HoOh_5:
# 172 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 84 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 173 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto NavelRock_Summit_EventScript_RanFromHoOh
# 174 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto NavelRock_Summit_EventScript_HoOh_4
# 175 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 176 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HoOh_8:
# 177 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 87 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 178 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto NavelRock_Summit_EventScript_RanFromHoOh
# 179 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto NavelRock_Summit_EventScript_HoOh_7
# 180 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 181 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 182 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_DefeatedHoOh::
# 183 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 95 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 184 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setflag FLAG_HO_OH_FLEW_AWAY
# 185 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 96 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 186 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 187 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 97 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 188 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 189 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	end
# 190 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 191 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 192 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_RanFromHoOh::
# 193 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 102 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 194 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 195 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 103 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 196 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 197 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	end
# 198 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 199 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 200 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 107 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 201 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
Movement_CameraPanUp:
# 202 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 108 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 203 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_up
# 204 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 109 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 205 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 110 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 207 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_up
# 208 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 111 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 209 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	step_end
# 210 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 211 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 114 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 212 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
Movement_CameraPanDown:
# 213 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 115 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 214 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
# 215 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 116 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 216 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
# 217 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 117 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 218 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 219 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 118 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 220 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 221 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 119 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 222 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 223 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 120 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 224 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	step_end
# 225 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 226 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 123 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 227 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
Movement_HoOhApproach:
# 228 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 124 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 229 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 230 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 125 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 231 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 232 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 126 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 233 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 234 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 127 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 235 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 236 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 128 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 237 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 238 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 129 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 239 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_in_place_down
# 240 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 130 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 241 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
# 242 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 131 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 243 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
# 244 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 132 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 245 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	step_end
# 246 "data/maps/NavelRock_Summit_Frlg/scripts.pory"

# 247 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 135 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 248 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
Movement_HoOhAppear:
# 249 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 136 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 250 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
# 251 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 137 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 252 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
# 253 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 138 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 254 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_in_place_down
# 255 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 139 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 256 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_in_place_down
# 257 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 140 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 258 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_in_place_down
# 259 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 141 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 260 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_in_place_down
# 261 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 142 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
# 262 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	step_end
