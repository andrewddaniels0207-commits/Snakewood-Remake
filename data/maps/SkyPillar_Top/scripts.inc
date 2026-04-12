SkyPillar_Top_MapScripts::
# 2 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 3 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 4 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
	.byte 0


SkyPillar_Top_OnResume::
# 8 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_OnResume_2
SkyPillar_Top_OnResume_1:
	end

SkyPillar_Top_OnResume_2:
# 9 "data/maps/SkyPillar_Top/scripts.pory"
	call SkyPillar_Top_EventScript_TryRemoveRayquaza
	goto SkyPillar_Top_OnResume_1


SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 15 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne SkyPillar_Top_EventScript_TryRemoveRayquaza_2
SkyPillar_Top_EventScript_TryRemoveRayquaza_1:
# 19 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

SkyPillar_Top_EventScript_TryRemoveRayquaza_2:
# 17 "data/maps/SkyPillar_Top/scripts.pory"
	goto Common_EventScript_NopReturn
	goto SkyPillar_Top_EventScript_TryRemoveRayquaza_1


SkyPillar_Top_OnTransition::
# 24 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_lt SkyPillar_Top_OnTransition_2
SkyPillar_Top_OnTransition_1:
# 27 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge SkyPillar_Top_OnTransition_5
SkyPillar_Top_OnTransition_4:
	end

SkyPillar_Top_OnTransition_2:
# 25 "data/maps/SkyPillar_Top/scripts.pory"
	call SkyPillar_Top_EventScript_SetCleanLayout
	goto SkyPillar_Top_OnTransition_1

SkyPillar_Top_OnTransition_5:
# 28 "data/maps/SkyPillar_Top/scripts.pory"
	call SkyPillar_Top_EventScript_TryShowRayquaza
	goto SkyPillar_Top_OnTransition_4


SkyPillar_Top_EventScript_SetCleanLayout::
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 35 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
	return


SkyPillar_Top_EventScript_TryShowRayquaza::
# 40 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_TryShowRayquaza_2
SkyPillar_Top_EventScript_TryShowRayquaza_1:
	return

SkyPillar_Top_EventScript_TryShowRayquaza_2:
# 41 "data/maps/SkyPillar_Top/scripts.pory"
	call SkyPillar_Top_EventScript_ShowRayquaza
	goto SkyPillar_Top_EventScript_TryShowRayquaza_1


SkyPillar_Top_EventScript_ShowRayquaza::
# 47 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
	return


# 51 "data/maps/SkyPillar_Top/scripts.pory"

# 52 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0

SkyPillar_Top_EventScript_RayquazaFaceDown::
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
	end


SkyPillar_Top_EventScript_Rayquaza::
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 66 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 71 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 75 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SkyPillar_Top_EventScript_Rayquaza_2
SkyPillar_Top_EventScript_Rayquaza_1:
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SkyPillar_Top_EventScript_Rayquaza_5
SkyPillar_Top_EventScript_Rayquaza_4:
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SkyPillar_Top_EventScript_Rayquaza_8
SkyPillar_Top_EventScript_Rayquaza_7:
# 84 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
	end

SkyPillar_Top_EventScript_Rayquaza_2:
# 76 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza
	goto SkyPillar_Top_EventScript_Rayquaza_1

SkyPillar_Top_EventScript_Rayquaza_5:
# 79 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza
	goto SkyPillar_Top_EventScript_Rayquaza_4

SkyPillar_Top_EventScript_Rayquaza_8:
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza
	goto SkyPillar_Top_EventScript_Rayquaza_7


SkyPillar_Top_EventScript_DefeatedRayquaza::
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
	end


SkyPillar_Top_EventScript_RanFromRayquaza::
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
	end


SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
	end


SkyPillar_Top_EventScript_RanFromRayquaza2::
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
	end


SkyPillar_Top_EventScript_AwakenRayquaza::
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
	end


SkyPillar_Top_Movement_RayquazaStir::
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 182 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
	return


# 185 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 186 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 187 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 189 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 195 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 196 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 197 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 198 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 201 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 202 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 203 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 204 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 205 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 208 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 209 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 210 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 211 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 212 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

SkyPillar_Top_Text_RayquazaFlewOff::
# 215 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"
