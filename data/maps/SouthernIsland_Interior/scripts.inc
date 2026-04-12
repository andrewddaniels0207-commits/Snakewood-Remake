# 1 "data/maps/SouthernIsland_Interior/scripts.pory"

# 2 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_MapScripts::
# 3 "data/maps/SouthernIsland_Interior/scripts.pory"
# 2 "data/maps/SouthernIsland_Interior/scripts.pory"
# 4 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SouthernIsland_Interior_OnResume
# 5 "data/maps/SouthernIsland_Interior/scripts.pory"
# 3 "data/maps/SouthernIsland_Interior/scripts.pory"
# 6 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Interior_OnTransition
# 7 "data/maps/SouthernIsland_Interior/scripts.pory"
	.byte 0
# 8 "data/maps/SouthernIsland_Interior/scripts.pory"

# 9 "data/maps/SouthernIsland_Interior/scripts.pory"

# 10 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnResume::
# 11 "data/maps/SouthernIsland_Interior/scripts.pory"
# 7 "data/maps/SouthernIsland_Interior/scripts.pory"
# 12 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SouthernIsland_Interior_OnResume_2
# 13 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnResume_1:
# 14 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 15 "data/maps/SouthernIsland_Interior/scripts.pory"

# 16 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnResume_2:
# 17 "data/maps/SouthernIsland_Interior/scripts.pory"
# 8 "data/maps/SouthernIsland_Interior/scripts.pory"
# 18 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_Interior_EventScript_TryRemoveLati
# 19 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_OnResume_1
# 20 "data/maps/SouthernIsland_Interior/scripts.pory"

# 21 "data/maps/SouthernIsland_Interior/scripts.pory"

# 22 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_TryRemoveLati::
# 23 "data/maps/SouthernIsland_Interior/scripts.pory"
# 14 "data/maps/SouthernIsland_Interior/scripts.pory"
# 24 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/SouthernIsland_Interior/scripts.pory"
# 15 "data/maps/SouthernIsland_Interior/scripts.pory"
# 26 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 27 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_ne SouthernIsland_Interior_EventScript_TryRemoveLati_2
# 28 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_TryRemoveLati_1:
# 29 "data/maps/SouthernIsland_Interior/scripts.pory"
# 18 "data/maps/SouthernIsland_Interior/scripts.pory"
# 30 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject LOCALID_SOUTHERN_ISLAND_LATI
# 31 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 32 "data/maps/SouthernIsland_Interior/scripts.pory"

# 33 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_TryRemoveLati_2:
# 34 "data/maps/SouthernIsland_Interior/scripts.pory"
# 16 "data/maps/SouthernIsland_Interior/scripts.pory"
# 35 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_NopReturn
# 36 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_TryRemoveLati_1
# 37 "data/maps/SouthernIsland_Interior/scripts.pory"

# 38 "data/maps/SouthernIsland_Interior/scripts.pory"

# 39 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnTransition::
# 40 "data/maps/SouthernIsland_Interior/scripts.pory"
# 23 "data/maps/SouthernIsland_Interior/scripts.pory"
# 41 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_ROAMER_POKEMON, 0
# 42 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_OnTransition_2
# 43 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnTransition_1:
# 44 "data/maps/SouthernIsland_Interior/scripts.pory"
# 26 "data/maps/SouthernIsland_Interior/scripts.pory"
# 45 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_ROAMER_POKEMON, 0
# 46 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_ne SouthernIsland_Interior_OnTransition_5
# 47 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnTransition_4:
# 48 "data/maps/SouthernIsland_Interior/scripts.pory"
# 29 "data/maps/SouthernIsland_Interior/scripts.pory"
# 49 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_Interior_EventScript_SetUpPlayerGfx
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"

# 52 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnTransition_2:
# 53 "data/maps/SouthernIsland_Interior/scripts.pory"
# 24 "data/maps/SouthernIsland_Interior/scripts.pory"
# 54 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_Interior_EventScript_SetUpLatios
# 55 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_OnTransition_1
# 56 "data/maps/SouthernIsland_Interior/scripts.pory"

# 57 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnTransition_5:
# 58 "data/maps/SouthernIsland_Interior/scripts.pory"
# 27 "data/maps/SouthernIsland_Interior/scripts.pory"
# 59 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_Interior_EventScript_SetUpLatias
# 60 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_OnTransition_4
# 61 "data/maps/SouthernIsland_Interior/scripts.pory"

# 62 "data/maps/SouthernIsland_Interior/scripts.pory"

# 63 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpLatios::
# 64 "data/maps/SouthernIsland_Interior/scripts.pory"
# 34 "data/maps/SouthernIsland_Interior/scripts.pory"
# 65 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIOS
# 66 "data/maps/SouthernIsland_Interior/scripts.pory"
# 35 "data/maps/SouthernIsland_Interior/scripts.pory"
# 67 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIOS
# 68 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 69 "data/maps/SouthernIsland_Interior/scripts.pory"

# 70 "data/maps/SouthernIsland_Interior/scripts.pory"

# 71 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpLatias::
# 72 "data/maps/SouthernIsland_Interior/scripts.pory"
# 40 "data/maps/SouthernIsland_Interior/scripts.pory"
# 73 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIAS
# 74 "data/maps/SouthernIsland_Interior/scripts.pory"
# 41 "data/maps/SouthernIsland_Interior/scripts.pory"
# 75 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIAS
# 76 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 77 "data/maps/SouthernIsland_Interior/scripts.pory"

# 78 "data/maps/SouthernIsland_Interior/scripts.pory"

# 79 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpPlayerGfx::
# 80 "data/maps/SouthernIsland_Interior/scripts.pory"
# 46 "data/maps/SouthernIsland_Interior/scripts.pory"
# 81 "data/maps/SouthernIsland_Interior/scripts.pory"
	checkplayergender
# 82 "data/maps/SouthernIsland_Interior/scripts.pory"
# 47 "data/maps/SouthernIsland_Interior/scripts.pory"
# 83 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, MALE
# 84 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_SetUpPlayerGfx_2
# 85 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpPlayerGfx_1:
# 86 "data/maps/SouthernIsland_Interior/scripts.pory"
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
# 87 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, FEMALE
# 88 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_SetUpPlayerGfx_5
# 89 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpPlayerGfx_4:
# 90 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 91 "data/maps/SouthernIsland_Interior/scripts.pory"

# 92 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpPlayerGfx_2:
# 93 "data/maps/SouthernIsland_Interior/scripts.pory"
# 48 "data/maps/SouthernIsland_Interior/scripts.pory"
# 94 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_SetBrendanGfx
# 95 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_SetUpPlayerGfx_1
# 96 "data/maps/SouthernIsland_Interior/scripts.pory"

# 97 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpPlayerGfx_5:
# 98 "data/maps/SouthernIsland_Interior/scripts.pory"
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
# 99 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_SetMayGfx
# 100 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_SetUpPlayerGfx_4
# 101 "data/maps/SouthernIsland_Interior/scripts.pory"

# 102 "data/maps/SouthernIsland_Interior/scripts.pory"

# 103 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetBrendanGfx::
# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
# 57 "data/maps/SouthernIsland_Interior/scripts.pory"
# 105 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 106 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 107 "data/maps/SouthernIsland_Interior/scripts.pory"

# 108 "data/maps/SouthernIsland_Interior/scripts.pory"

# 109 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetMayGfx::
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
# 62 "data/maps/SouthernIsland_Interior/scripts.pory"
# 111 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 112 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 113 "data/maps/SouthernIsland_Interior/scripts.pory"

# 114 "data/maps/SouthernIsland_Interior/scripts.pory"

# 115 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_TryLatiEncounter::
# 116 "data/maps/SouthernIsland_Interior/scripts.pory"
# 67 "data/maps/SouthernIsland_Interior/scripts.pory"
# 117 "data/maps/SouthernIsland_Interior/scripts.pory"
	lockall
# 118 "data/maps/SouthernIsland_Interior/scripts.pory"
# 68 "data/maps/SouthernIsland_Interior/scripts.pory"
# 119 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8008, 12
# 120 "data/maps/SouthernIsland_Interior/scripts.pory"
# 69 "data/maps/SouthernIsland_Interior/scripts.pory"
# 121 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati
# 122 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 123 "data/maps/SouthernIsland_Interior/scripts.pory"

# 124 "data/maps/SouthernIsland_Interior/scripts.pory"

# 125 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati::
# 126 "data/maps/SouthernIsland_Interior/scripts.pory"
# 74 "data/maps/SouthernIsland_Interior/scripts.pory"
# 127 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_TEMP_2, SouthernIsland_Interior_EventScript_Lati_2
# 128 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_1:
# 129 "data/maps/SouthernIsland_Interior/scripts.pory"
# 77 "data/maps/SouthernIsland_Interior/scripts.pory"
# 130 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_DEFEATED_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Lati_5
# 131 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_4:
# 132 "data/maps/SouthernIsland_Interior/scripts.pory"
# 80 "data/maps/SouthernIsland_Interior/scripts.pory"
# 133 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Lati_8
# 134 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_7:
# 135 "data/maps/SouthernIsland_Interior/scripts.pory"
# 83 "data/maps/SouthernIsland_Interior/scripts.pory"
# 136 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, SouthernIsland_Interior_EventScript_Lati_11
# 137 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_10:
# 138 "data/maps/SouthernIsland_Interior/scripts.pory"
# 86 "data/maps/SouthernIsland_Interior/scripts.pory"
# 139 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_ENCOUNTERED_LATIAS_OR_LATIOS
# 140 "data/maps/SouthernIsland_Interior/scripts.pory"
# 87 "data/maps/SouthernIsland_Interior/scripts.pory"
# 141 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_2
# 142 "data/maps/SouthernIsland_Interior/scripts.pory"
# 88 "data/maps/SouthernIsland_Interior/scripts.pory"
# 143 "data/maps/SouthernIsland_Interior/scripts.pory"
	special SpawnCameraObject
# 144 "data/maps/SouthernIsland_Interior/scripts.pory"
# 89 "data/maps/SouthernIsland_Interior/scripts.pory"
# 145 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement LOCALID_CAMERA, SouthernIsland_Interior_Movement_CameraPanUp
# 146 "data/maps/SouthernIsland_Interior/scripts.pory"
# 90 "data/maps/SouthernIsland_Interior/scripts.pory"
# 147 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 148 "data/maps/SouthernIsland_Interior/scripts.pory"
# 91 "data/maps/SouthernIsland_Interior/scripts.pory"
# 149 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 150 "data/maps/SouthernIsland_Interior/scripts.pory"
# 92 "data/maps/SouthernIsland_Interior/scripts.pory"
# 151 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 152 "data/maps/SouthernIsland_Interior/scripts.pory"
# 93 "data/maps/SouthernIsland_Interior/scripts.pory"
# 153 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry VAR_TEMP_4, CRY_MODE_NORMAL
# 154 "data/maps/SouthernIsland_Interior/scripts.pory"
# 94 "data/maps/SouthernIsland_Interior/scripts.pory"
# 155 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 156 "data/maps/SouthernIsland_Interior/scripts.pory"
# 95 "data/maps/SouthernIsland_Interior/scripts.pory"
# 157 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 158 "data/maps/SouthernIsland_Interior/scripts.pory"
# 96 "data/maps/SouthernIsland_Interior/scripts.pory"
# 159 "data/maps/SouthernIsland_Interior/scripts.pory"
	addobject LOCALID_SOUTHERN_ISLAND_LATI
# 160 "data/maps/SouthernIsland_Interior/scripts.pory"
# 97 "data/maps/SouthernIsland_Interior/scripts.pory"
# 161 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 162 "data/maps/SouthernIsland_Interior/scripts.pory"
# 98 "data/maps/SouthernIsland_Interior/scripts.pory"
# 163 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement LOCALID_CAMERA, SouthernIsland_Interior_Movement_CameraPanDown
# 164 "data/maps/SouthernIsland_Interior/scripts.pory"
# 99 "data/maps/SouthernIsland_Interior/scripts.pory"
# 165 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement LOCALID_SOUTHERN_ISLAND_LATI, SouthernIsland_Interior_Movement_LatiApproach
# 166 "data/maps/SouthernIsland_Interior/scripts.pory"
# 100 "data/maps/SouthernIsland_Interior/scripts.pory"
# 167 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 168 "data/maps/SouthernIsland_Interior/scripts.pory"
# 101 "data/maps/SouthernIsland_Interior/scripts.pory"
# 169 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 170 "data/maps/SouthernIsland_Interior/scripts.pory"
# 102 "data/maps/SouthernIsland_Interior/scripts.pory"
# 171 "data/maps/SouthernIsland_Interior/scripts.pory"
	special RemoveCameraObject
# 172 "data/maps/SouthernIsland_Interior/scripts.pory"
# 103 "data/maps/SouthernIsland_Interior/scripts.pory"
# 173 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SOUTHERN_ISLAND_LATI
# 174 "data/maps/SouthernIsland_Interior/scripts.pory"
# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
# 175 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_ROAMER_POKEMON, 0
# 176 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_Lati_14
# 177 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_13:
# 178 "data/maps/SouthernIsland_Interior/scripts.pory"
# 107 "data/maps/SouthernIsland_Interior/scripts.pory"
# 179 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_ROAMER_POKEMON, 0
# 180 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_ne SouthernIsland_Interior_EventScript_Lati_17
# 181 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_16:
# 182 "data/maps/SouthernIsland_Interior/scripts.pory"
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
# 183 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 184 "data/maps/SouthernIsland_Interior/scripts.pory"
# 111 "data/maps/SouthernIsland_Interior/scripts.pory"
# 185 "data/maps/SouthernIsland_Interior/scripts.pory"
	special BattleSetup_StartLatiBattle
# 186 "data/maps/SouthernIsland_Interior/scripts.pory"
# 112 "data/maps/SouthernIsland_Interior/scripts.pory"
# 187 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitstate
# 188 "data/maps/SouthernIsland_Interior/scripts.pory"
# 113 "data/maps/SouthernIsland_Interior/scripts.pory"
# 189 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 190 "data/maps/SouthernIsland_Interior/scripts.pory"
# 114 "data/maps/SouthernIsland_Interior/scripts.pory"
# 191 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 192 "data/maps/SouthernIsland_Interior/scripts.pory"
# 115 "data/maps/SouthernIsland_Interior/scripts.pory"
# 193 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 194 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_Lati_20
# 195 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_19:
# 196 "data/maps/SouthernIsland_Interior/scripts.pory"
# 118 "data/maps/SouthernIsland_Interior/scripts.pory"
# 197 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 198 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_Lati_23
# 199 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_22:
# 200 "data/maps/SouthernIsland_Interior/scripts.pory"
# 121 "data/maps/SouthernIsland_Interior/scripts.pory"
# 201 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 202 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_Lati_26
# 203 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_25:
# 204 "data/maps/SouthernIsland_Interior/scripts.pory"
# 124 "data/maps/SouthernIsland_Interior/scripts.pory"
# 205 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS_OR_LATIOS
# 206 "data/maps/SouthernIsland_Interior/scripts.pory"
# 125 "data/maps/SouthernIsland_Interior/scripts.pory"
# 207 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
# 208 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 209 "data/maps/SouthernIsland_Interior/scripts.pory"

# 210 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_2:
# 211 "data/maps/SouthernIsland_Interior/scripts.pory"
# 75 "data/maps/SouthernIsland_Interior/scripts.pory"
# 212 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Sign
# 213 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati_1
# 214 "data/maps/SouthernIsland_Interior/scripts.pory"

# 215 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_5:
# 216 "data/maps/SouthernIsland_Interior/scripts.pory"
# 78 "data/maps/SouthernIsland_Interior/scripts.pory"
# 217 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Sign
# 218 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati_4
# 219 "data/maps/SouthernIsland_Interior/scripts.pory"

# 220 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_8:
# 221 "data/maps/SouthernIsland_Interior/scripts.pory"
# 81 "data/maps/SouthernIsland_Interior/scripts.pory"
# 222 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Sign
# 223 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati_7
# 224 "data/maps/SouthernIsland_Interior/scripts.pory"

# 225 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_11:
# 226 "data/maps/SouthernIsland_Interior/scripts.pory"
# 84 "data/maps/SouthernIsland_Interior/scripts.pory"
# 227 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Sign
# 228 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati_10
# 229 "data/maps/SouthernIsland_Interior/scripts.pory"

# 230 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_14:
# 231 "data/maps/SouthernIsland_Interior/scripts.pory"
# 105 "data/maps/SouthernIsland_Interior/scripts.pory"
# 232 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_Interior_EventScript_SetLatiosBattleVars
# 233 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati_13
# 234 "data/maps/SouthernIsland_Interior/scripts.pory"

# 235 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_17:
# 236 "data/maps/SouthernIsland_Interior/scripts.pory"
# 108 "data/maps/SouthernIsland_Interior/scripts.pory"
# 237 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_Interior_EventScript_SetLatiasBattleVars
# 238 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati_16
# 239 "data/maps/SouthernIsland_Interior/scripts.pory"

# 240 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_20:
# 241 "data/maps/SouthernIsland_Interior/scripts.pory"
# 116 "data/maps/SouthernIsland_Interior/scripts.pory"
# 242 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_LatiDefeated
# 243 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati_19
# 244 "data/maps/SouthernIsland_Interior/scripts.pory"

# 245 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_23:
# 246 "data/maps/SouthernIsland_Interior/scripts.pory"
# 119 "data/maps/SouthernIsland_Interior/scripts.pory"
# 247 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_RanFromLati
# 248 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati_22
# 249 "data/maps/SouthernIsland_Interior/scripts.pory"

# 250 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_26:
# 251 "data/maps/SouthernIsland_Interior/scripts.pory"
# 122 "data/maps/SouthernIsland_Interior/scripts.pory"
# 252 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_RanFromLati
# 253 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati_25
# 254 "data/maps/SouthernIsland_Interior/scripts.pory"

# 255 "data/maps/SouthernIsland_Interior/scripts.pory"

# 256 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_LatiDefeated::
# 257 "data/maps/SouthernIsland_Interior/scripts.pory"
# 130 "data/maps/SouthernIsland_Interior/scripts.pory"
# 258 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIAS_OR_LATIOS
# 259 "data/maps/SouthernIsland_Interior/scripts.pory"
# 131 "data/maps/SouthernIsland_Interior/scripts.pory"
# 260 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 261 "data/maps/SouthernIsland_Interior/scripts.pory"
# 132 "data/maps/SouthernIsland_Interior/scripts.pory"
# 262 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 263 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 264 "data/maps/SouthernIsland_Interior/scripts.pory"

# 265 "data/maps/SouthernIsland_Interior/scripts.pory"

# 266 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_RanFromLati::
# 267 "data/maps/SouthernIsland_Interior/scripts.pory"
# 137 "data/maps/SouthernIsland_Interior/scripts.pory"
# 268 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 269 "data/maps/SouthernIsland_Interior/scripts.pory"
# 138 "data/maps/SouthernIsland_Interior/scripts.pory"
# 270 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 271 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 272 "data/maps/SouthernIsland_Interior/scripts.pory"

# 273 "data/maps/SouthernIsland_Interior/scripts.pory"

# 274 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Sign::
# 275 "data/maps/SouthernIsland_Interior/scripts.pory"
# 143 "data/maps/SouthernIsland_Interior/scripts.pory"
# 276 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_Text_Sign, MSGBOX_DEFAULT
# 277 "data/maps/SouthernIsland_Interior/scripts.pory"
# 144 "data/maps/SouthernIsland_Interior/scripts.pory"
# 278 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
# 279 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 280 "data/maps/SouthernIsland_Interior/scripts.pory"

# 281 "data/maps/SouthernIsland_Interior/scripts.pory"

# 282 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetLatiosBattleVars::
# 283 "data/maps/SouthernIsland_Interior/scripts.pory"
# 149 "data/maps/SouthernIsland_Interior/scripts.pory"
# 284 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIOS, 50, ITEM_SOUL_DEW
# 285 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 286 "data/maps/SouthernIsland_Interior/scripts.pory"

# 287 "data/maps/SouthernIsland_Interior/scripts.pory"

# 288 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetLatiasBattleVars::
# 289 "data/maps/SouthernIsland_Interior/scripts.pory"
# 154 "data/maps/SouthernIsland_Interior/scripts.pory"
# 290 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIAS, 50, ITEM_SOUL_DEW
# 291 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 292 "data/maps/SouthernIsland_Interior/scripts.pory"

# 293 "data/maps/SouthernIsland_Interior/scripts.pory"

# 294 "data/maps/SouthernIsland_Interior/scripts.pory"
# 158 "data/maps/SouthernIsland_Interior/scripts.pory"
# 295 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraPanUp:
# 296 "data/maps/SouthernIsland_Interior/scripts.pory"
# 159 "data/maps/SouthernIsland_Interior/scripts.pory"
# 297 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 298 "data/maps/SouthernIsland_Interior/scripts.pory"
# 160 "data/maps/SouthernIsland_Interior/scripts.pory"
# 299 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 300 "data/maps/SouthernIsland_Interior/scripts.pory"
# 161 "data/maps/SouthernIsland_Interior/scripts.pory"
# 301 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 302 "data/maps/SouthernIsland_Interior/scripts.pory"
# 162 "data/maps/SouthernIsland_Interior/scripts.pory"
# 303 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end
# 304 "data/maps/SouthernIsland_Interior/scripts.pory"

# 305 "data/maps/SouthernIsland_Interior/scripts.pory"
# 165 "data/maps/SouthernIsland_Interior/scripts.pory"
# 306 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraPanDown:
# 307 "data/maps/SouthernIsland_Interior/scripts.pory"
# 166 "data/maps/SouthernIsland_Interior/scripts.pory"
# 308 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 309 "data/maps/SouthernIsland_Interior/scripts.pory"
# 167 "data/maps/SouthernIsland_Interior/scripts.pory"
# 310 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 311 "data/maps/SouthernIsland_Interior/scripts.pory"
# 168 "data/maps/SouthernIsland_Interior/scripts.pory"
# 312 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 313 "data/maps/SouthernIsland_Interior/scripts.pory"
# 169 "data/maps/SouthernIsland_Interior/scripts.pory"
# 314 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 315 "data/maps/SouthernIsland_Interior/scripts.pory"
# 170 "data/maps/SouthernIsland_Interior/scripts.pory"
# 316 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 317 "data/maps/SouthernIsland_Interior/scripts.pory"
# 171 "data/maps/SouthernIsland_Interior/scripts.pory"
# 318 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 319 "data/maps/SouthernIsland_Interior/scripts.pory"
# 172 "data/maps/SouthernIsland_Interior/scripts.pory"
# 320 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 321 "data/maps/SouthernIsland_Interior/scripts.pory"
# 173 "data/maps/SouthernIsland_Interior/scripts.pory"
# 322 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 323 "data/maps/SouthernIsland_Interior/scripts.pory"
# 174 "data/maps/SouthernIsland_Interior/scripts.pory"
# 324 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 325 "data/maps/SouthernIsland_Interior/scripts.pory"
# 175 "data/maps/SouthernIsland_Interior/scripts.pory"
# 326 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 327 "data/maps/SouthernIsland_Interior/scripts.pory"
# 176 "data/maps/SouthernIsland_Interior/scripts.pory"
# 328 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_in_place_faster_up
# 329 "data/maps/SouthernIsland_Interior/scripts.pory"
# 177 "data/maps/SouthernIsland_Interior/scripts.pory"
# 330 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end
# 331 "data/maps/SouthernIsland_Interior/scripts.pory"

# 332 "data/maps/SouthernIsland_Interior/scripts.pory"
# 180 "data/maps/SouthernIsland_Interior/scripts.pory"
# 333 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_LatiApproach:
# 334 "data/maps/SouthernIsland_Interior/scripts.pory"
# 181 "data/maps/SouthernIsland_Interior/scripts.pory"
# 335 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 336 "data/maps/SouthernIsland_Interior/scripts.pory"
# 182 "data/maps/SouthernIsland_Interior/scripts.pory"
# 337 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 338 "data/maps/SouthernIsland_Interior/scripts.pory"
# 183 "data/maps/SouthernIsland_Interior/scripts.pory"
# 339 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 340 "data/maps/SouthernIsland_Interior/scripts.pory"
# 184 "data/maps/SouthernIsland_Interior/scripts.pory"
# 341 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 342 "data/maps/SouthernIsland_Interior/scripts.pory"
# 185 "data/maps/SouthernIsland_Interior/scripts.pory"
# 343 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 344 "data/maps/SouthernIsland_Interior/scripts.pory"
# 186 "data/maps/SouthernIsland_Interior/scripts.pory"
# 345 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 346 "data/maps/SouthernIsland_Interior/scripts.pory"
# 187 "data/maps/SouthernIsland_Interior/scripts.pory"
# 347 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 348 "data/maps/SouthernIsland_Interior/scripts.pory"
# 188 "data/maps/SouthernIsland_Interior/scripts.pory"
# 349 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 350 "data/maps/SouthernIsland_Interior/scripts.pory"
# 189 "data/maps/SouthernIsland_Interior/scripts.pory"
# 351 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 352 "data/maps/SouthernIsland_Interior/scripts.pory"
# 190 "data/maps/SouthernIsland_Interior/scripts.pory"
# 353 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 354 "data/maps/SouthernIsland_Interior/scripts.pory"
# 191 "data/maps/SouthernIsland_Interior/scripts.pory"
# 355 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 356 "data/maps/SouthernIsland_Interior/scripts.pory"
# 192 "data/maps/SouthernIsland_Interior/scripts.pory"
# 357 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end
