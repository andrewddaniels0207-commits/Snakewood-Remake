# 1 "data/maps/ViridianCity_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_Frlg/scripts.pory"
# 2 "data/maps/ViridianCity_Frlg/scripts.pory"
# 4 "data/maps/ViridianCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
# 5 "data/maps/ViridianCity_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/ViridianCity_Frlg/scripts.pory"

# 7 "data/maps/ViridianCity_Frlg/scripts.pory"

# 8 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_OnTransition::
# 9 "data/maps/ViridianCity_Frlg/scripts.pory"
# 6 "data/maps/ViridianCity_Frlg/scripts.pory"
# 10 "data/maps/ViridianCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 11 "data/maps/ViridianCity_Frlg/scripts.pory"
# 7 "data/maps/ViridianCity_Frlg/scripts.pory"
# 12 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0
# 13 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq ViridianCity_OnTransition_2
# 14 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_OnTransition_1:
# 15 "data/maps/ViridianCity_Frlg/scripts.pory"
# 10 "data/maps/ViridianCity_Frlg/scripts.pory"
# 16 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 17 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq ViridianCity_OnTransition_5
# 18 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_OnTransition_4:
# 19 "data/maps/ViridianCity_Frlg/scripts.pory"
# 13 "data/maps/ViridianCity_Frlg/scripts.pory"
# 20 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 21 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_ge ViridianCity_OnTransition_8
# 22 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_OnTransition_7:
# 23 "data/maps/ViridianCity_Frlg/scripts.pory"
# 16 "data/maps/ViridianCity_Frlg/scripts.pory"
# 24 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0
# 25 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq ViridianCity_OnTransition_11
# 26 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_OnTransition_10:
# 27 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 28 "data/maps/ViridianCity_Frlg/scripts.pory"

# 29 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_OnTransition_2:
# 30 "data/maps/ViridianCity_Frlg/scripts.pory"
# 8 "data/maps/ViridianCity_Frlg/scripts.pory"
# 31 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_SetOldManBlockingRoad
# 32 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_OnTransition_1
# 33 "data/maps/ViridianCity_Frlg/scripts.pory"

# 34 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_OnTransition_5:
# 35 "data/maps/ViridianCity_Frlg/scripts.pory"
# 11 "data/maps/ViridianCity_Frlg/scripts.pory"
# 36 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_SetOldManStandingByRoad
# 37 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_OnTransition_4
# 38 "data/maps/ViridianCity_Frlg/scripts.pory"

# 39 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_OnTransition_8:
# 40 "data/maps/ViridianCity_Frlg/scripts.pory"
# 14 "data/maps/ViridianCity_Frlg/scripts.pory"
# 41 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_SetOldManNormal
# 42 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_OnTransition_7
# 43 "data/maps/ViridianCity_Frlg/scripts.pory"

# 44 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_OnTransition_11:
# 45 "data/maps/ViridianCity_Frlg/scripts.pory"
# 17 "data/maps/ViridianCity_Frlg/scripts.pory"
# 46 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_TryUnlockGym
# 47 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_OnTransition_10
# 48 "data/maps/ViridianCity_Frlg/scripts.pory"

# 49 "data/maps/ViridianCity_Frlg/scripts.pory"

# 50 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_SetOldManNormal::
# 51 "data/maps/ViridianCity_Frlg/scripts.pory"
# 23 "data/maps/ViridianCity_Frlg/scripts.pory"
# 52 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 53 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 54 "data/maps/ViridianCity_Frlg/scripts.pory"

# 55 "data/maps/ViridianCity_Frlg/scripts.pory"

# 56 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_SetOldManStandingByRoad::
# 57 "data/maps/ViridianCity_Frlg/scripts.pory"
# 28 "data/maps/ViridianCity_Frlg/scripts.pory"
# 58 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 59 "data/maps/ViridianCity_Frlg/scripts.pory"
# 29 "data/maps/ViridianCity_Frlg/scripts.pory"
# 60 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 8
# 61 "data/maps/ViridianCity_Frlg/scripts.pory"
# 30 "data/maps/ViridianCity_Frlg/scripts.pory"
# 62 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_LOOK_AROUND
# 63 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 64 "data/maps/ViridianCity_Frlg/scripts.pory"

# 65 "data/maps/ViridianCity_Frlg/scripts.pory"

# 66 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_SetOldManBlockingRoad::
# 67 "data/maps/ViridianCity_Frlg/scripts.pory"
# 35 "data/maps/ViridianCity_Frlg/scripts.pory"
# 68 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_LYING_DOWN
# 69 "data/maps/ViridianCity_Frlg/scripts.pory"
# 36 "data/maps/ViridianCity_Frlg/scripts.pory"
# 70 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 11
# 71 "data/maps/ViridianCity_Frlg/scripts.pory"
# 37 "data/maps/ViridianCity_Frlg/scripts.pory"
# 72 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_FACE_DOWN
# 73 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 74 "data/maps/ViridianCity_Frlg/scripts.pory"

# 75 "data/maps/ViridianCity_Frlg/scripts.pory"

# 76 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym::
# 77 "data/maps/ViridianCity_Frlg/scripts.pory"
# 42 "data/maps/ViridianCity_Frlg/scripts.pory"
# 78 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ViridianCity_EventScript_TryUnlockGym_2
# 79 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_1:
# 80 "data/maps/ViridianCity_Frlg/scripts.pory"
# 45 "data/maps/ViridianCity_Frlg/scripts.pory"
# 81 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, ViridianCity_EventScript_TryUnlockGym_5
# 82 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_4:
# 83 "data/maps/ViridianCity_Frlg/scripts.pory"
# 48 "data/maps/ViridianCity_Frlg/scripts.pory"
# 84 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, ViridianCity_EventScript_TryUnlockGym_8
# 85 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_7:
# 86 "data/maps/ViridianCity_Frlg/scripts.pory"
# 51 "data/maps/ViridianCity_Frlg/scripts.pory"
# 87 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, ViridianCity_EventScript_TryUnlockGym_11
# 88 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_10:
# 89 "data/maps/ViridianCity_Frlg/scripts.pory"
# 54 "data/maps/ViridianCity_Frlg/scripts.pory"
# 90 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, ViridianCity_EventScript_TryUnlockGym_14
# 91 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_13:
# 92 "data/maps/ViridianCity_Frlg/scripts.pory"
# 57 "data/maps/ViridianCity_Frlg/scripts.pory"
# 93 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, ViridianCity_EventScript_TryUnlockGym_17
# 94 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_16:
# 95 "data/maps/ViridianCity_Frlg/scripts.pory"
# 60 "data/maps/ViridianCity_Frlg/scripts.pory"
# 96 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
# 97 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 98 "data/maps/ViridianCity_Frlg/scripts.pory"

# 99 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_2:
# 100 "data/maps/ViridianCity_Frlg/scripts.pory"
# 43 "data/maps/ViridianCity_Frlg/scripts.pory"
# 101 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 102 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TryUnlockGym_1
# 103 "data/maps/ViridianCity_Frlg/scripts.pory"

# 104 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_5:
# 105 "data/maps/ViridianCity_Frlg/scripts.pory"
# 46 "data/maps/ViridianCity_Frlg/scripts.pory"
# 106 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 107 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TryUnlockGym_4
# 108 "data/maps/ViridianCity_Frlg/scripts.pory"

# 109 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_8:
# 110 "data/maps/ViridianCity_Frlg/scripts.pory"
# 49 "data/maps/ViridianCity_Frlg/scripts.pory"
# 111 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 112 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TryUnlockGym_7
# 113 "data/maps/ViridianCity_Frlg/scripts.pory"

# 114 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_11:
# 115 "data/maps/ViridianCity_Frlg/scripts.pory"
# 52 "data/maps/ViridianCity_Frlg/scripts.pory"
# 116 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 117 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TryUnlockGym_10
# 118 "data/maps/ViridianCity_Frlg/scripts.pory"

# 119 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_14:
# 120 "data/maps/ViridianCity_Frlg/scripts.pory"
# 55 "data/maps/ViridianCity_Frlg/scripts.pory"
# 121 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 122 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TryUnlockGym_13
# 123 "data/maps/ViridianCity_Frlg/scripts.pory"

# 124 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym_17:
# 125 "data/maps/ViridianCity_Frlg/scripts.pory"
# 58 "data/maps/ViridianCity_Frlg/scripts.pory"
# 126 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 127 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TryUnlockGym_16
# 128 "data/maps/ViridianCity_Frlg/scripts.pory"

# 129 "data/maps/ViridianCity_Frlg/scripts.pory"

# 130 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_GymDoorLocked::
# 131 "data/maps/ViridianCity_Frlg/scripts.pory"
# 65 "data/maps/ViridianCity_Frlg/scripts.pory"
# 132 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 133 "data/maps/ViridianCity_Frlg/scripts.pory"
# 66 "data/maps/ViridianCity_Frlg/scripts.pory"
# 134 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 135 "data/maps/ViridianCity_Frlg/scripts.pory"
# 67 "data/maps/ViridianCity_Frlg/scripts.pory"
# 136 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 137 "data/maps/ViridianCity_Frlg/scripts.pory"
# 68 "data/maps/ViridianCity_Frlg/scripts.pory"
# 138 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 139 "data/maps/ViridianCity_Frlg/scripts.pory"
# 69 "data/maps/ViridianCity_Frlg/scripts.pory"
# 140 "data/maps/ViridianCity_Frlg/scripts.pory"
	delay 20
# 141 "data/maps/ViridianCity_Frlg/scripts.pory"
# 70 "data/maps/ViridianCity_Frlg/scripts.pory"
# 142 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked
# 143 "data/maps/ViridianCity_Frlg/scripts.pory"
# 71 "data/maps/ViridianCity_Frlg/scripts.pory"
# 144 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 145 "data/maps/ViridianCity_Frlg/scripts.pory"
# 72 "data/maps/ViridianCity_Frlg/scripts.pory"
# 146 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_JumpDownLedge
# 147 "data/maps/ViridianCity_Frlg/scripts.pory"
# 73 "data/maps/ViridianCity_Frlg/scripts.pory"
# 148 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 149 "data/maps/ViridianCity_Frlg/scripts.pory"
# 74 "data/maps/ViridianCity_Frlg/scripts.pory"
# 150 "data/maps/ViridianCity_Frlg/scripts.pory"
	releaseall
# 151 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 152 "data/maps/ViridianCity_Frlg/scripts.pory"

# 153 "data/maps/ViridianCity_Frlg/scripts.pory"

# 154 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Movement_JumpDownLedge::
# 155 "data/maps/ViridianCity_Frlg/scripts.pory"
# 79 "data/maps/ViridianCity_Frlg/scripts.pory"
# 156 "data/maps/ViridianCity_Frlg/scripts.pory"
	jump_2_down
# 157 "data/maps/ViridianCity_Frlg/scripts.pory"
# 80 "data/maps/ViridianCity_Frlg/scripts.pory"
# 158 "data/maps/ViridianCity_Frlg/scripts.pory"
	step_end
# 159 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 160 "data/maps/ViridianCity_Frlg/scripts.pory"

# 161 "data/maps/ViridianCity_Frlg/scripts.pory"

# 162 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_CitySign::
# 163 "data/maps/ViridianCity_Frlg/scripts.pory"
# 84 "data/maps/ViridianCity_Frlg/scripts.pory"
# 164 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
# 165 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 166 "data/maps/ViridianCity_Frlg/scripts.pory"

# 167 "data/maps/ViridianCity_Frlg/scripts.pory"

# 168 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TrainerTips1::
# 169 "data/maps/ViridianCity_Frlg/scripts.pory"
# 89 "data/maps/ViridianCity_Frlg/scripts.pory"
# 170 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
# 171 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 172 "data/maps/ViridianCity_Frlg/scripts.pory"

# 173 "data/maps/ViridianCity_Frlg/scripts.pory"

# 174 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TrainerTips2::
# 175 "data/maps/ViridianCity_Frlg/scripts.pory"
# 94 "data/maps/ViridianCity_Frlg/scripts.pory"
# 176 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
# 177 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 178 "data/maps/ViridianCity_Frlg/scripts.pory"

# 179 "data/maps/ViridianCity_Frlg/scripts.pory"

# 180 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_GymSign::
# 181 "data/maps/ViridianCity_Frlg/scripts.pory"
# 99 "data/maps/ViridianCity_Frlg/scripts.pory"
# 182 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
# 183 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 184 "data/maps/ViridianCity_Frlg/scripts.pory"

# 185 "data/maps/ViridianCity_Frlg/scripts.pory"

# 186 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_GymDoor::
# 187 "data/maps/ViridianCity_Frlg/scripts.pory"
# 104 "data/maps/ViridianCity_Frlg/scripts.pory"
# 188 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
# 189 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 190 "data/maps/ViridianCity_Frlg/scripts.pory"

# 191 "data/maps/ViridianCity_Frlg/scripts.pory"

# 192 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Boy::
# 193 "data/maps/ViridianCity_Frlg/scripts.pory"
# 109 "data/maps/ViridianCity_Frlg/scripts.pory"
# 194 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
# 195 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 196 "data/maps/ViridianCity_Frlg/scripts.pory"

# 197 "data/maps/ViridianCity_Frlg/scripts.pory"

# 198 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_OldMan::
# 199 "data/maps/ViridianCity_Frlg/scripts.pory"
# 114 "data/maps/ViridianCity_Frlg/scripts.pory"
# 200 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 201 "data/maps/ViridianCity_Frlg/scripts.pory"
# 115 "data/maps/ViridianCity_Frlg/scripts.pory"
# 202 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 203 "data/maps/ViridianCity_Frlg/scripts.pory"
# 116 "data/maps/ViridianCity_Frlg/scripts.pory"
# 204 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
# 205 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq ViridianCity_EventScript_OldMan_2
# 206 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_OldMan_1:
# 207 "data/maps/ViridianCity_Frlg/scripts.pory"
# 119 "data/maps/ViridianCity_Frlg/scripts.pory"
# 208 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 209 "data/maps/ViridianCity_Frlg/scripts.pory"
# 120 "data/maps/ViridianCity_Frlg/scripts.pory"
# 210 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 211 "data/maps/ViridianCity_Frlg/scripts.pory"
# 121 "data/maps/ViridianCity_Frlg/scripts.pory"
# 212 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_OLD_MAN, Common_Movement_FaceOriginalDirection
# 213 "data/maps/ViridianCity_Frlg/scripts.pory"
# 122 "data/maps/ViridianCity_Frlg/scripts.pory"
# 214 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 215 "data/maps/ViridianCity_Frlg/scripts.pory"
# 123 "data/maps/ViridianCity_Frlg/scripts.pory"
# 216 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 217 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 218 "data/maps/ViridianCity_Frlg/scripts.pory"

# 219 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_OldMan_2:
# 220 "data/maps/ViridianCity_Frlg/scripts.pory"
# 117 "data/maps/ViridianCity_Frlg/scripts.pory"
# 221 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_OldManGymLeaderReturned
# 222 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_OldMan_1
# 223 "data/maps/ViridianCity_Frlg/scripts.pory"

# 224 "data/maps/ViridianCity_Frlg/scripts.pory"

# 225 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_OldManGymLeaderReturned::
# 226 "data/maps/ViridianCity_Frlg/scripts.pory"
# 128 "data/maps/ViridianCity_Frlg/scripts.pory"
# 227 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
# 228 "data/maps/ViridianCity_Frlg/scripts.pory"
# 129 "data/maps/ViridianCity_Frlg/scripts.pory"
# 229 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 230 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 231 "data/maps/ViridianCity_Frlg/scripts.pory"

# 232 "data/maps/ViridianCity_Frlg/scripts.pory"

# 233 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialOldMan::
# 234 "data/maps/ViridianCity_Frlg/scripts.pory"
# 134 "data/maps/ViridianCity_Frlg/scripts.pory"
# 235 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 236 "data/maps/ViridianCity_Frlg/scripts.pory"
# 135 "data/maps/ViridianCity_Frlg/scripts.pory"
# 237 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 238 "data/maps/ViridianCity_Frlg/scripts.pory"
# 136 "data/maps/ViridianCity_Frlg/scripts.pory"
# 239 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ViridianCity_EventScript_TutorialOldMan_2
# 240 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialOldMan_1:
# 241 "data/maps/ViridianCity_Frlg/scripts.pory"
# 139 "data/maps/ViridianCity_Frlg/scripts.pory"
# 242 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 243 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_ge ViridianCity_EventScript_TutorialOldMan_5
# 244 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialOldMan_4:
# 245 "data/maps/ViridianCity_Frlg/scripts.pory"
# 142 "data/maps/ViridianCity_Frlg/scripts.pory"
# 246 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 247 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq ViridianCity_EventScript_TutorialOldMan_8
# 248 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialOldMan_7:
# 249 "data/maps/ViridianCity_Frlg/scripts.pory"
# 145 "data/maps/ViridianCity_Frlg/scripts.pory"
# 250 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0
# 251 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq ViridianCity_EventScript_TutorialOldMan_11
# 252 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialOldMan_10:
# 253 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 254 "data/maps/ViridianCity_Frlg/scripts.pory"

# 255 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialOldMan_2:
# 256 "data/maps/ViridianCity_Frlg/scripts.pory"
# 137 "data/maps/ViridianCity_Frlg/scripts.pory"
# 257 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_AskIfTeachyTVHelpful
# 258 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TutorialOldMan_1
# 259 "data/maps/ViridianCity_Frlg/scripts.pory"

# 260 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialOldMan_5:
# 261 "data/maps/ViridianCity_Frlg/scripts.pory"
# 140 "data/maps/ViridianCity_Frlg/scripts.pory"
# 262 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TutorialCompleted
# 263 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TutorialOldMan_4
# 264 "data/maps/ViridianCity_Frlg/scripts.pory"

# 265 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialOldMan_8:
# 266 "data/maps/ViridianCity_Frlg/scripts.pory"
# 143 "data/maps/ViridianCity_Frlg/scripts.pory"
# 267 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TutorialStart
# 268 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TutorialOldMan_7
# 269 "data/maps/ViridianCity_Frlg/scripts.pory"

# 270 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialOldMan_11:
# 271 "data/maps/ViridianCity_Frlg/scripts.pory"
# 146 "data/maps/ViridianCity_Frlg/scripts.pory"
# 272 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TutorialNotReady
# 273 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TutorialOldMan_10
# 274 "data/maps/ViridianCity_Frlg/scripts.pory"

# 275 "data/maps/ViridianCity_Frlg/scripts.pory"

# 276 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_AskIfTeachyTVHelpful::
# 277 "data/maps/ViridianCity_Frlg/scripts.pory"
# 152 "data/maps/ViridianCity_Frlg/scripts.pory"
# 278 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
# 279 "data/maps/ViridianCity_Frlg/scripts.pory"
# 153 "data/maps/ViridianCity_Frlg/scripts.pory"
# 280 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 281 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq ViridianCity_EventScript_AskIfTeachyTVHelpful_2
# 282 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_AskIfTeachyTVHelpful_1:
# 283 "data/maps/ViridianCity_Frlg/scripts.pory"
# 156 "data/maps/ViridianCity_Frlg/scripts.pory"
# 284 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
# 285 "data/maps/ViridianCity_Frlg/scripts.pory"
# 157 "data/maps/ViridianCity_Frlg/scripts.pory"
# 286 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 287 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 288 "data/maps/ViridianCity_Frlg/scripts.pory"

# 289 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_AskIfTeachyTVHelpful_2:
# 290 "data/maps/ViridianCity_Frlg/scripts.pory"
# 154 "data/maps/ViridianCity_Frlg/scripts.pory"
# 291 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_TeachyTVNotHelpful
# 292 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_AskIfTeachyTVHelpful_1
# 293 "data/maps/ViridianCity_Frlg/scripts.pory"

# 294 "data/maps/ViridianCity_Frlg/scripts.pory"

# 295 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TeachyTVNotHelpful::
# 296 "data/maps/ViridianCity_Frlg/scripts.pory"
# 162 "data/maps/ViridianCity_Frlg/scripts.pory"
# 297 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_TooBusyForTeachyTV
# 298 "data/maps/ViridianCity_Frlg/scripts.pory"
# 163 "data/maps/ViridianCity_Frlg/scripts.pory"
# 299 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 300 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 301 "data/maps/ViridianCity_Frlg/scripts.pory"

# 302 "data/maps/ViridianCity_Frlg/scripts.pory"

# 303 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialCompleted::
# 304 "data/maps/ViridianCity_Frlg/scripts.pory"
# 168 "data/maps/ViridianCity_Frlg/scripts.pory"
# 305 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
# 306 "data/maps/ViridianCity_Frlg/scripts.pory"
# 169 "data/maps/ViridianCity_Frlg/scripts.pory"
# 307 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 308 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 309 "data/maps/ViridianCity_Frlg/scripts.pory"

# 310 "data/maps/ViridianCity_Frlg/scripts.pory"

# 311 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialStart::
# 312 "data/maps/ViridianCity_Frlg/scripts.pory"
# 174 "data/maps/ViridianCity_Frlg/scripts.pory"
# 313 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 314 "data/maps/ViridianCity_Frlg/scripts.pory"
# 175 "data/maps/ViridianCity_Frlg/scripts.pory"
# 315 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 316 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 317 "data/maps/ViridianCity_Frlg/scripts.pory"

# 318 "data/maps/ViridianCity_Frlg/scripts.pory"

# 319 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_WatchToLearnBasics::
# 320 "data/maps/ViridianCity_Frlg/scripts.pory"
# 180 "data/maps/ViridianCity_Frlg/scripts.pory"
# 321 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 322 "data/maps/ViridianCity_Frlg/scripts.pory"
# 181 "data/maps/ViridianCity_Frlg/scripts.pory"
# 323 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 324 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 325 "data/maps/ViridianCity_Frlg/scripts.pory"

# 326 "data/maps/ViridianCity_Frlg/scripts.pory"

# 327 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialUnused::
# 328 "data/maps/ViridianCity_Frlg/scripts.pory"
# 186 "data/maps/ViridianCity_Frlg/scripts.pory"
# 329 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 330 "data/maps/ViridianCity_Frlg/scripts.pory"
# 187 "data/maps/ViridianCity_Frlg/scripts.pory"
# 331 "data/maps/ViridianCity_Frlg/scripts.pory"
	special StartOldManTutorialBattle
# 332 "data/maps/ViridianCity_Frlg/scripts.pory"
# 188 "data/maps/ViridianCity_Frlg/scripts.pory"
# 333 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitstate
# 334 "data/maps/ViridianCity_Frlg/scripts.pory"
# 189 "data/maps/ViridianCity_Frlg/scripts.pory"
# 335 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 336 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 337 "data/maps/ViridianCity_Frlg/scripts.pory"

# 338 "data/maps/ViridianCity_Frlg/scripts.pory"

# 339 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialNotReady::
# 340 "data/maps/ViridianCity_Frlg/scripts.pory"
# 194 "data/maps/ViridianCity_Frlg/scripts.pory"
# 341 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 342 "data/maps/ViridianCity_Frlg/scripts.pory"
# 195 "data/maps/ViridianCity_Frlg/scripts.pory"
# 343 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 344 "data/maps/ViridianCity_Frlg/scripts.pory"
# 196 "data/maps/ViridianCity_Frlg/scripts.pory"
# 345 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 346 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 347 "data/maps/ViridianCity_Frlg/scripts.pory"

# 348 "data/maps/ViridianCity_Frlg/scripts.pory"

# 349 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Youngster::
# 350 "data/maps/ViridianCity_Frlg/scripts.pory"
# 201 "data/maps/ViridianCity_Frlg/scripts.pory"
# 351 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 352 "data/maps/ViridianCity_Frlg/scripts.pory"
# 202 "data/maps/ViridianCity_Frlg/scripts.pory"
# 353 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 354 "data/maps/ViridianCity_Frlg/scripts.pory"
# 203 "data/maps/ViridianCity_Frlg/scripts.pory"
# 355 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 356 "data/maps/ViridianCity_Frlg/scripts.pory"
# 204 "data/maps/ViridianCity_Frlg/scripts.pory"
# 357 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 358 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq ViridianCity_EventScript_Youngster_2
# 359 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Youngster_1:
# 360 "data/maps/ViridianCity_Frlg/scripts.pory"
# 207 "data/maps/ViridianCity_Frlg/scripts.pory"
# 361 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 362 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq ViridianCity_EventScript_Youngster_5
# 363 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Youngster_4:
# 364 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 365 "data/maps/ViridianCity_Frlg/scripts.pory"

# 366 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Youngster_2:
# 367 "data/maps/ViridianCity_Frlg/scripts.pory"
# 205 "data/maps/ViridianCity_Frlg/scripts.pory"
# 368 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_YoungsterExplainCaterpillars
# 369 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_Youngster_1
# 370 "data/maps/ViridianCity_Frlg/scripts.pory"

# 371 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Youngster_5:
# 372 "data/maps/ViridianCity_Frlg/scripts.pory"
# 208 "data/maps/ViridianCity_Frlg/scripts.pory"
# 373 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_YoungsterDeclineExplanation
# 374 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_Youngster_4
# 375 "data/maps/ViridianCity_Frlg/scripts.pory"

# 376 "data/maps/ViridianCity_Frlg/scripts.pory"

# 377 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_YoungsterExplainCaterpillars::
# 378 "data/maps/ViridianCity_Frlg/scripts.pory"
# 214 "data/maps/ViridianCity_Frlg/scripts.pory"
# 379 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
# 380 "data/maps/ViridianCity_Frlg/scripts.pory"
# 215 "data/maps/ViridianCity_Frlg/scripts.pory"
# 381 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 382 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 383 "data/maps/ViridianCity_Frlg/scripts.pory"

# 384 "data/maps/ViridianCity_Frlg/scripts.pory"

# 385 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_YoungsterDeclineExplanation::
# 386 "data/maps/ViridianCity_Frlg/scripts.pory"
# 220 "data/maps/ViridianCity_Frlg/scripts.pory"
# 387 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
# 388 "data/maps/ViridianCity_Frlg/scripts.pory"
# 221 "data/maps/ViridianCity_Frlg/scripts.pory"
# 389 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 390 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 391 "data/maps/ViridianCity_Frlg/scripts.pory"

# 392 "data/maps/ViridianCity_Frlg/scripts.pory"

# 393 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Woman::
# 394 "data/maps/ViridianCity_Frlg/scripts.pory"
# 226 "data/maps/ViridianCity_Frlg/scripts.pory"
# 395 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 396 "data/maps/ViridianCity_Frlg/scripts.pory"
# 227 "data/maps/ViridianCity_Frlg/scripts.pory"
# 397 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 398 "data/maps/ViridianCity_Frlg/scripts.pory"
# 228 "data/maps/ViridianCity_Frlg/scripts.pory"
# 399 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0
# 400 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq ViridianCity_EventScript_Woman_2
# 401 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Woman_1:
# 402 "data/maps/ViridianCity_Frlg/scripts.pory"
# 231 "data/maps/ViridianCity_Frlg/scripts.pory"
# 403 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
# 404 "data/maps/ViridianCity_Frlg/scripts.pory"
# 232 "data/maps/ViridianCity_Frlg/scripts.pory"
# 405 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 406 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 407 "data/maps/ViridianCity_Frlg/scripts.pory"

# 408 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Woman_2:
# 409 "data/maps/ViridianCity_Frlg/scripts.pory"
# 229 "data/maps/ViridianCity_Frlg/scripts.pory"
# 410 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_WomanRoadBlocked
# 411 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto ViridianCity_EventScript_Woman_1
# 412 "data/maps/ViridianCity_Frlg/scripts.pory"

# 413 "data/maps/ViridianCity_Frlg/scripts.pory"

# 414 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_WomanRoadBlocked::
# 415 "data/maps/ViridianCity_Frlg/scripts.pory"
# 237 "data/maps/ViridianCity_Frlg/scripts.pory"
# 416 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
# 417 "data/maps/ViridianCity_Frlg/scripts.pory"
# 238 "data/maps/ViridianCity_Frlg/scripts.pory"
# 418 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 419 "data/maps/ViridianCity_Frlg/scripts.pory"
# 239 "data/maps/ViridianCity_Frlg/scripts.pory"
# 420 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_WOMAN, Common_Movement_FaceOriginalDirection
# 421 "data/maps/ViridianCity_Frlg/scripts.pory"
# 240 "data/maps/ViridianCity_Frlg/scripts.pory"
# 422 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 423 "data/maps/ViridianCity_Frlg/scripts.pory"
# 241 "data/maps/ViridianCity_Frlg/scripts.pory"
# 424 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 425 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 426 "data/maps/ViridianCity_Frlg/scripts.pory"

# 427 "data/maps/ViridianCity_Frlg/scripts.pory"

# 428 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_DreamEaterTutor::
# 429 "data/maps/ViridianCity_Frlg/scripts.pory"
# 246 "data/maps/ViridianCity_Frlg/scripts.pory"
# 430 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto EventScript_DreamEaterTutor
# 431 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 432 "data/maps/ViridianCity_Frlg/scripts.pory"

# 433 "data/maps/ViridianCity_Frlg/scripts.pory"

# 434 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_RoadBlocked::
# 435 "data/maps/ViridianCity_Frlg/scripts.pory"
# 251 "data/maps/ViridianCity_Frlg/scripts.pory"
# 436 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 437 "data/maps/ViridianCity_Frlg/scripts.pory"
# 252 "data/maps/ViridianCity_Frlg/scripts.pory"
# 438 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 439 "data/maps/ViridianCity_Frlg/scripts.pory"
# 253 "data/maps/ViridianCity_Frlg/scripts.pory"
# 440 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 441 "data/maps/ViridianCity_Frlg/scripts.pory"
# 254 "data/maps/ViridianCity_Frlg/scripts.pory"
# 442 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 443 "data/maps/ViridianCity_Frlg/scripts.pory"
# 255 "data/maps/ViridianCity_Frlg/scripts.pory"
# 444 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_WalkDown
# 445 "data/maps/ViridianCity_Frlg/scripts.pory"
# 256 "data/maps/ViridianCity_Frlg/scripts.pory"
# 446 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 447 "data/maps/ViridianCity_Frlg/scripts.pory"
# 257 "data/maps/ViridianCity_Frlg/scripts.pory"
# 448 "data/maps/ViridianCity_Frlg/scripts.pory"
	releaseall
# 449 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 450 "data/maps/ViridianCity_Frlg/scripts.pory"

# 451 "data/maps/ViridianCity_Frlg/scripts.pory"

# 452 "data/maps/ViridianCity_Frlg/scripts.pory"
# 261 "data/maps/ViridianCity_Frlg/scripts.pory"
# 453 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Movement_WalkDown:
# 454 "data/maps/ViridianCity_Frlg/scripts.pory"
# 262 "data/maps/ViridianCity_Frlg/scripts.pory"
# 455 "data/maps/ViridianCity_Frlg/scripts.pory"
	walk_down
# 456 "data/maps/ViridianCity_Frlg/scripts.pory"
# 263 "data/maps/ViridianCity_Frlg/scripts.pory"
# 457 "data/maps/ViridianCity_Frlg/scripts.pory"
	step_end
# 458 "data/maps/ViridianCity_Frlg/scripts.pory"

# 459 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialTriggerLeft::
# 460 "data/maps/ViridianCity_Frlg/scripts.pory"
# 267 "data/maps/ViridianCity_Frlg/scripts.pory"
# 461 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 462 "data/maps/ViridianCity_Frlg/scripts.pory"
# 268 "data/maps/ViridianCity_Frlg/scripts.pory"
# 463 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 464 "data/maps/ViridianCity_Frlg/scripts.pory"
# 269 "data/maps/ViridianCity_Frlg/scripts.pory"
# 465 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterLeft
# 466 "data/maps/ViridianCity_Frlg/scripts.pory"
# 270 "data/maps/ViridianCity_Frlg/scripts.pory"
# 467 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 468 "data/maps/ViridianCity_Frlg/scripts.pory"
# 271 "data/maps/ViridianCity_Frlg/scripts.pory"
# 469 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 470 "data/maps/ViridianCity_Frlg/scripts.pory"
# 272 "data/maps/ViridianCity_Frlg/scripts.pory"
# 471 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 472 "data/maps/ViridianCity_Frlg/scripts.pory"
# 273 "data/maps/ViridianCity_Frlg/scripts.pory"
# 473 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 474 "data/maps/ViridianCity_Frlg/scripts.pory"
# 274 "data/maps/ViridianCity_Frlg/scripts.pory"
# 475 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 476 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 477 "data/maps/ViridianCity_Frlg/scripts.pory"

# 478 "data/maps/ViridianCity_Frlg/scripts.pory"

# 479 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialTriggerRight::
# 480 "data/maps/ViridianCity_Frlg/scripts.pory"
# 279 "data/maps/ViridianCity_Frlg/scripts.pory"
# 481 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 482 "data/maps/ViridianCity_Frlg/scripts.pory"
# 280 "data/maps/ViridianCity_Frlg/scripts.pory"
# 483 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 484 "data/maps/ViridianCity_Frlg/scripts.pory"
# 281 "data/maps/ViridianCity_Frlg/scripts.pory"
# 485 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 486 "data/maps/ViridianCity_Frlg/scripts.pory"
# 282 "data/maps/ViridianCity_Frlg/scripts.pory"
# 487 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 488 "data/maps/ViridianCity_Frlg/scripts.pory"
# 283 "data/maps/ViridianCity_Frlg/scripts.pory"
# 489 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 490 "data/maps/ViridianCity_Frlg/scripts.pory"
# 284 "data/maps/ViridianCity_Frlg/scripts.pory"
# 491 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 492 "data/maps/ViridianCity_Frlg/scripts.pory"
# 285 "data/maps/ViridianCity_Frlg/scripts.pory"
# 493 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 494 "data/maps/ViridianCity_Frlg/scripts.pory"
# 286 "data/maps/ViridianCity_Frlg/scripts.pory"
# 495 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 496 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 497 "data/maps/ViridianCity_Frlg/scripts.pory"

# 498 "data/maps/ViridianCity_Frlg/scripts.pory"

# 499 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_DoTutorialBattle::
# 500 "data/maps/ViridianCity_Frlg/scripts.pory"
# 291 "data/maps/ViridianCity_Frlg/scripts.pory"
# 501 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
# 502 "data/maps/ViridianCity_Frlg/scripts.pory"
# 292 "data/maps/ViridianCity_Frlg/scripts.pory"
# 503 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 504 "data/maps/ViridianCity_Frlg/scripts.pory"
# 293 "data/maps/ViridianCity_Frlg/scripts.pory"
# 505 "data/maps/ViridianCity_Frlg/scripts.pory"
	special StartOldManTutorialBattle
# 506 "data/maps/ViridianCity_Frlg/scripts.pory"
# 294 "data/maps/ViridianCity_Frlg/scripts.pory"
# 507 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitstate
# 508 "data/maps/ViridianCity_Frlg/scripts.pory"
# 295 "data/maps/ViridianCity_Frlg/scripts.pory"
# 509 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 510 "data/maps/ViridianCity_Frlg/scripts.pory"
# 296 "data/maps/ViridianCity_Frlg/scripts.pory"
# 511 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 512 "data/maps/ViridianCity_Frlg/scripts.pory"
# 297 "data/maps/ViridianCity_Frlg/scripts.pory"
# 513 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 514 "data/maps/ViridianCity_Frlg/scripts.pory"
# 298 "data/maps/ViridianCity_Frlg/scripts.pory"
# 515 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 516 "data/maps/ViridianCity_Frlg/scripts.pory"
# 299 "data/maps/ViridianCity_Frlg/scripts.pory"
# 517 "data/maps/ViridianCity_Frlg/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 518 "data/maps/ViridianCity_Frlg/scripts.pory"
# 300 "data/maps/ViridianCity_Frlg/scripts.pory"
# 519 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 520 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 521 "data/maps/ViridianCity_Frlg/scripts.pory"

# 522 "data/maps/ViridianCity_Frlg/scripts.pory"

# 523 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_CanCarryMonsAnywhere::
# 524 "data/maps/ViridianCity_Frlg/scripts.pory"
# 304 "data/maps/ViridianCity_Frlg/scripts.pory"
# 525 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Those POKé BALLS at your waist!\n"
# 526 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "You have POKéMON, don't you?\p"
# 527 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It's great that you can carry and\n"
# 528 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "use POKéMON anytime, anywhere.$"
# 529 "data/maps/ViridianCity_Frlg/scripts.pory"

# 530 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GymClosedWonderWhoLeaderIs::
# 531 "data/maps/ViridianCity_Frlg/scripts.pory"
# 311 "data/maps/ViridianCity_Frlg/scripts.pory"
# 532 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "This POKéMON GYM is always closed.\p"
# 533 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I wonder who the LEADER is?$"
# 534 "data/maps/ViridianCity_Frlg/scripts.pory"

# 535 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ViridiansGymLeaderReturned::
# 536 "data/maps/ViridianCity_Frlg/scripts.pory"
# 316 "data/maps/ViridianCity_Frlg/scripts.pory"
# 537 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN GYM's LEADER returned!$"
# 538 "data/maps/ViridianCity_Frlg/scripts.pory"

# 539 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_WantToKnowAboutCaterpillarMons::
# 540 "data/maps/ViridianCity_Frlg/scripts.pory"
# 320 "data/maps/ViridianCity_Frlg/scripts.pory"
# 541 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "You want to know about the two\n"
# 542 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "kinds of caterpillar POKéMON?$"
# 543 "data/maps/ViridianCity_Frlg/scripts.pory"

# 544 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_OhOkayThen::
# 545 "data/maps/ViridianCity_Frlg/scripts.pory"
# 325 "data/maps/ViridianCity_Frlg/scripts.pory"
# 546 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Oh, okay then!$"
# 547 "data/maps/ViridianCity_Frlg/scripts.pory"

# 548 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ExplainCaterpieWeedle::
# 549 "data/maps/ViridianCity_Frlg/scripts.pory"
# 329 "data/maps/ViridianCity_Frlg/scripts.pory"
# 550 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "CATERPIE has no poison,\n"
# 551 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "but WEEDLE does.\p"
# 552 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Watch that your POKéMON aren't\n"
# 553 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "stabbed by WEEDLE's POISON STING.$"
# 554 "data/maps/ViridianCity_Frlg/scripts.pory"

# 555 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GrandpaHasntHadCoffeeYet::
# 556 "data/maps/ViridianCity_Frlg/scripts.pory"
# 336 "data/maps/ViridianCity_Frlg/scripts.pory"
# 557 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Oh, Grandpa!\n"
# 558 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Don't be so mean!\p"
# 559 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I'm so sorry.\n"
# 560 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "He hasn't had his coffee yet.$"
# 561 "data/maps/ViridianCity_Frlg/scripts.pory"

# 562 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GoShoppingInPewterOccasionally::
# 563 "data/maps/ViridianCity_Frlg/scripts.pory"
# 343 "data/maps/ViridianCity_Frlg/scripts.pory"
# 564 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I go shopping in PEWTER CITY\n"
# 565 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "occasionally.\p"
# 566 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I have to take the winding trail in\n"
# 567 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN FOREST when I go.$"
# 568 "data/maps/ViridianCity_Frlg/scripts.pory"

# 569 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ThisIsPrivateProperty::
# 570 "data/maps/ViridianCity_Frlg/scripts.pory"
# 350 "data/maps/ViridianCity_Frlg/scripts.pory"
# 571 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I absolutely forbid you from\n"
# 572 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "going through here!\p"
# 573 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "This is private property!$"
# 574 "data/maps/ViridianCity_Frlg/scripts.pory"

# 575 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ShowYouHowToCatchMons::
# 576 "data/maps/ViridianCity_Frlg/scripts.pory"
# 356 "data/maps/ViridianCity_Frlg/scripts.pory"
# 577 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
# 578 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "that's what I need to get going!\p"
# 579 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Hm?\n"
# 580 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "What is that red box you have?\p"
# 581 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Ah, so you're working on your\n"
# 582 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéDEX.\p"
# 583 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Then let me give you a word of\n"
# 584 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "advice.\p"
# 585 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Whenever you catch a POKéMON,\n"
# 586 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "the POKéDEX automatically updates\l"
# 587 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "its data.\p"
# 588 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "…You don't know how to catch\n"
# 589 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "a POKéMON?\p"
# 590 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I suppose I had better show you\n"
# 591 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "then!$"
# 592 "data/maps/ViridianCity_Frlg/scripts.pory"

# 593 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ThatWasEducationalTakeThis::
# 594 "data/maps/ViridianCity_Frlg/scripts.pory"
# 374 "data/maps/ViridianCity_Frlg/scripts.pory"
# 595 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "There! Now tell me, that was\n"
# 596 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "educational, was it not?\p"
# 597 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "And here, take this, too.$"
# 598 "data/maps/ViridianCity_Frlg/scripts.pory"

# 599 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_WatchThatToLearnBasics::
# 600 "data/maps/ViridianCity_Frlg/scripts.pory"
# 380 "data/maps/ViridianCity_Frlg/scripts.pory"
# 601 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "If there's something you don't\n"
# 602 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "understand, watch that.\p"
# 603 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It will teach you about the basics\n"
# 604 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "of being a POKéMON TRAINER.$"
# 605 "data/maps/ViridianCity_Frlg/scripts.pory"

# 606 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_WeakenMonsFirstToCatch::
# 607 "data/maps/ViridianCity_Frlg/scripts.pory"
# 387 "data/maps/ViridianCity_Frlg/scripts.pory"
# 608 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
# 609 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "that's what I need to get going!\p"
# 610 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "But I made it too strong.\n"
# 611 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It gave me a headache…\p"
# 612 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Incidentally, are you filling your\n"
# 613 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéDEX?\p"
# 614 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "At first, focus on weakening the\n"
# 615 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéMON before trying to catch it.$"
# 616 "data/maps/ViridianCity_Frlg/scripts.pory"

# 617 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_HowsTeachyTVHelping::
# 618 "data/maps/ViridianCity_Frlg/scripts.pory"
# 398 "data/maps/ViridianCity_Frlg/scripts.pory"
# 619 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
# 620 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "that's what I need to get going!\p"
# 621 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "But I made it too strong.\n"
# 622 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It gave me a headache…\p"
# 623 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Incidentally, is my old TEACHY TV\n"
# 624 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "helping you?$"
# 625 "data/maps/ViridianCity_Frlg/scripts.pory"

# 626 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_MyGrandsonOnTheShow::
# 627 "data/maps/ViridianCity_Frlg/scripts.pory"
# 407 "data/maps/ViridianCity_Frlg/scripts.pory"
# 628 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Wahaha!\n"
# 629 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It's my grandson on the show!\p"
# 630 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Since he's the one doing the\n"
# 631 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "teaching, you're bound to learn.$"
# 632 "data/maps/ViridianCity_Frlg/scripts.pory"

# 633 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_TooBusyForTeachyTV::
# 634 "data/maps/ViridianCity_Frlg/scripts.pory"
# 414 "data/maps/ViridianCity_Frlg/scripts.pory"
# 635 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Hm… You're too busy to not even\n"
# 636 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "have the time for TEACHY TV…\p"
# 637 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Time is money, and neither should\n"
# 638 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "be ill spent…$"
# 639 "data/maps/ViridianCity_Frlg/scripts.pory"

# 640 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_CitySign::
# 641 "data/maps/ViridianCity_Frlg/scripts.pory"
# 421 "data/maps/ViridianCity_Frlg/scripts.pory"
# 642 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN CITY \n"
# 643 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "The Eternally Green Paradise$"
# 644 "data/maps/ViridianCity_Frlg/scripts.pory"

# 645 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_CatchMonsForEasierBattles::
# 646 "data/maps/ViridianCity_Frlg/scripts.pory"
# 426 "data/maps/ViridianCity_Frlg/scripts.pory"
# 647 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 648 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Catch POKéMON and expand your\n"
# 649 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "collection.\p"
# 650 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "The more you have, the easier it\n"
# 651 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "is to battle.$"
# 652 "data/maps/ViridianCity_Frlg/scripts.pory"

# 653 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_MovesLimitedByPP::
# 654 "data/maps/ViridianCity_Frlg/scripts.pory"
# 434 "data/maps/ViridianCity_Frlg/scripts.pory"
# 655 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 656 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "The battle moves of POKéMON are\n"
# 657 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "limited by their POWER POINTS, PP.\p"
# 658 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "To replenish PP, rest your tired\n"
# 659 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéMON at a POKéMON CENTER.$"
# 660 "data/maps/ViridianCity_Frlg/scripts.pory"

# 661 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GymSign::
# 662 "data/maps/ViridianCity_Frlg/scripts.pory"
# 442 "data/maps/ViridianCity_Frlg/scripts.pory"
# 663 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN CITY POKéMON GYM$"
# 664 "data/maps/ViridianCity_Frlg/scripts.pory"

# 665 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GymDoorsAreLocked::
# 666 "data/maps/ViridianCity_Frlg/scripts.pory"
# 446 "data/maps/ViridianCity_Frlg/scripts.pory"
# 667 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN GYM's doors are locked…$"
