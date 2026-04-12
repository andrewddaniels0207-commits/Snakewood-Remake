# 1 "data/maps/FarawayIsland_Interior/scripts.pory"

# 2 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_MapScripts::
# 3 "data/maps/FarawayIsland_Interior/scripts.pory"
# 2 "data/maps/FarawayIsland_Interior/scripts.pory"
# 4 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FarawayIsland_Interior_OnResume
# 5 "data/maps/FarawayIsland_Interior/scripts.pory"
# 3 "data/maps/FarawayIsland_Interior/scripts.pory"
# 6 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FarawayIsland_Interior_OnTransition
# 7 "data/maps/FarawayIsland_Interior/scripts.pory"
# 7 "data/maps/FarawayIsland_Interior/scripts.pory"
# 8 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, FarawayIsland_Interior_OnReturnToField
# 9 "data/maps/FarawayIsland_Interior/scripts.pory"
# 4 "data/maps/FarawayIsland_Interior/scripts.pory"
# 10 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/FarawayIsland_Interior/scripts.pory"
	.byte 0
# 12 "data/maps/FarawayIsland_Interior/scripts.pory"

# 13 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/FarawayIsland_Interior/scripts.pory"
# 5 "data/maps/FarawayIsland_Interior/scripts.pory"
# 15 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, FarawayIsland_Interior_EventScript_FindMew
# 16 "data/maps/FarawayIsland_Interior/scripts.pory"
	.2byte 0
# 17 "data/maps/FarawayIsland_Interior/scripts.pory"

# 18 "data/maps/FarawayIsland_Interior/scripts.pory"

# 19 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnReturnToField::
# 20 "data/maps/FarawayIsland_Interior/scripts.pory"
# 11 "data/maps/FarawayIsland_Interior/scripts.pory"
# 21 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, FarawayIsland_Interior_OnReturnToField_2
# 22 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnReturnToField_1:
# 23 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 24 "data/maps/FarawayIsland_Interior/scripts.pory"

# 25 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnReturnToField_2:
# 26 "data/maps/FarawayIsland_Interior/scripts.pory"
# 12 "data/maps/FarawayIsland_Interior/scripts.pory"
# 27 "data/maps/FarawayIsland_Interior/scripts.pory"
	call FarawayIsland_Interior_EventScript_TrySetMewAboveGrass
# 28 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_OnReturnToField_1
# 29 "data/maps/FarawayIsland_Interior/scripts.pory"

# 30 "data/maps/FarawayIsland_Interior/scripts.pory"

# 31 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TrySetMewAboveGrass::
# 32 "data/maps/FarawayIsland_Interior/scripts.pory"
# 18 "data/maps/FarawayIsland_Interior/scripts.pory"
# 33 "data/maps/FarawayIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/FarawayIsland_Interior/scripts.pory"
# 19 "data/maps/FarawayIsland_Interior/scripts.pory"
# 35 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 36 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_2
# 37 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_1:
# 38 "data/maps/FarawayIsland_Interior/scripts.pory"
# 22 "data/maps/FarawayIsland_Interior/scripts.pory"
# 39 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 40 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_5
# 41 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_4:
# 42 "data/maps/FarawayIsland_Interior/scripts.pory"
# 25 "data/maps/FarawayIsland_Interior/scripts.pory"
# 43 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 44 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_8
# 45 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_7:
# 46 "data/maps/FarawayIsland_Interior/scripts.pory"
# 28 "data/maps/FarawayIsland_Interior/scripts.pory"
# 47 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_MON_TELEPORTED
# 48 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_11
# 49 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_10:
# 50 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 51 "data/maps/FarawayIsland_Interior/scripts.pory"

# 52 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_2:
# 53 "data/maps/FarawayIsland_Interior/scripts.pory"
# 20 "data/maps/FarawayIsland_Interior/scripts.pory"
# 54 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_SetMewAboveGrass
# 55 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_1
# 56 "data/maps/FarawayIsland_Interior/scripts.pory"

# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_5:
# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
# 23 "data/maps/FarawayIsland_Interior/scripts.pory"
# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_SetMewAboveGrass
# 60 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_4
# 61 "data/maps/FarawayIsland_Interior/scripts.pory"

# 62 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_8:
# 63 "data/maps/FarawayIsland_Interior/scripts.pory"
# 26 "data/maps/FarawayIsland_Interior/scripts.pory"
# 64 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_SetMewAboveGrass
# 65 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_7
# 66 "data/maps/FarawayIsland_Interior/scripts.pory"

# 67 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_11:
# 68 "data/maps/FarawayIsland_Interior/scripts.pory"
# 29 "data/maps/FarawayIsland_Interior/scripts.pory"
# 69 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_SetMewAboveGrass
# 70 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_TrySetMewAboveGrass_10
# 71 "data/maps/FarawayIsland_Interior/scripts.pory"

# 72 "data/maps/FarawayIsland_Interior/scripts.pory"

# 73 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_SetMewAboveGrass::
# 74 "data/maps/FarawayIsland_Interior/scripts.pory"
# 35 "data/maps/FarawayIsland_Interior/scripts.pory"
# 75 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, 1
# 76 "data/maps/FarawayIsland_Interior/scripts.pory"
# 36 "data/maps/FarawayIsland_Interior/scripts.pory"
# 77 "data/maps/FarawayIsland_Interior/scripts.pory"
	special SetMewAboveGrass
# 78 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 79 "data/maps/FarawayIsland_Interior/scripts.pory"

# 80 "data/maps/FarawayIsland_Interior/scripts.pory"

# 81 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnResume::
# 82 "data/maps/FarawayIsland_Interior/scripts.pory"
# 41 "data/maps/FarawayIsland_Interior/scripts.pory"
# 83 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, FarawayIsland_Interior_OnResume_2
# 84 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnResume_1:
# 85 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 86 "data/maps/FarawayIsland_Interior/scripts.pory"

# 87 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnResume_2:
# 88 "data/maps/FarawayIsland_Interior/scripts.pory"
# 42 "data/maps/FarawayIsland_Interior/scripts.pory"
# 89 "data/maps/FarawayIsland_Interior/scripts.pory"
	call FarawayIsland_Interior_EventScript_TryRemoveMew
# 90 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_OnResume_1
# 91 "data/maps/FarawayIsland_Interior/scripts.pory"

# 92 "data/maps/FarawayIsland_Interior/scripts.pory"

# 93 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TryRemoveMew::
# 94 "data/maps/FarawayIsland_Interior/scripts.pory"
# 48 "data/maps/FarawayIsland_Interior/scripts.pory"
# 95 "data/maps/FarawayIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 96 "data/maps/FarawayIsland_Interior/scripts.pory"
# 49 "data/maps/FarawayIsland_Interior/scripts.pory"
# 97 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 98 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_ne FarawayIsland_Interior_EventScript_TryRemoveMew_2
# 99 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TryRemoveMew_1:
# 100 "data/maps/FarawayIsland_Interior/scripts.pory"
# 52 "data/maps/FarawayIsland_Interior/scripts.pory"
# 101 "data/maps/FarawayIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 102 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 103 "data/maps/FarawayIsland_Interior/scripts.pory"

# 104 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TryRemoveMew_2:
# 105 "data/maps/FarawayIsland_Interior/scripts.pory"
# 50 "data/maps/FarawayIsland_Interior/scripts.pory"
# 106 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto Common_EventScript_NopReturn
# 107 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_TryRemoveMew_1
# 108 "data/maps/FarawayIsland_Interior/scripts.pory"

# 109 "data/maps/FarawayIsland_Interior/scripts.pory"

# 110 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnTransition::
# 111 "data/maps/FarawayIsland_Interior/scripts.pory"
# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
# 112 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_FARAWAY_ISLAND_STEP_COUNTER, 0
# 113 "data/maps/FarawayIsland_Interior/scripts.pory"
# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
# 114 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
# 115 "data/maps/FarawayIsland_Interior/scripts.pory"
# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
# 116 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_unset FLAG_CAUGHT_MEW, FarawayIsland_Interior_OnTransition_2
# 117 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnTransition_1:
# 118 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 119 "data/maps/FarawayIsland_Interior/scripts.pory"

# 120 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnTransition_2:
# 121 "data/maps/FarawayIsland_Interior/scripts.pory"
# 60 "data/maps/FarawayIsland_Interior/scripts.pory"
# 122 "data/maps/FarawayIsland_Interior/scripts.pory"
	call FarawayIsland_Interior_EventScript_TryShowMew
# 123 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_OnTransition_1
# 124 "data/maps/FarawayIsland_Interior/scripts.pory"

# 125 "data/maps/FarawayIsland_Interior/scripts.pory"

# 126 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TryShowMew::
# 127 "data/maps/FarawayIsland_Interior/scripts.pory"
# 66 "data/maps/FarawayIsland_Interior/scripts.pory"
# 128 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_set FLAG_DEFEATED_MEW, FarawayIsland_Interior_EventScript_TryShowMew_2
# 129 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TryShowMew_1:
# 130 "data/maps/FarawayIsland_Interior/scripts.pory"
# 69 "data/maps/FarawayIsland_Interior/scripts.pory"
# 131 "data/maps/FarawayIsland_Interior/scripts.pory"
	clearflag FLAG_HIDE_MEW
# 132 "data/maps/FarawayIsland_Interior/scripts.pory"
# 70 "data/maps/FarawayIsland_Interior/scripts.pory"
# 133 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_TEMP_1, 0
# 134 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 135 "data/maps/FarawayIsland_Interior/scripts.pory"

# 136 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TryShowMew_2:
# 137 "data/maps/FarawayIsland_Interior/scripts.pory"
# 67 "data/maps/FarawayIsland_Interior/scripts.pory"
# 138 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto Common_EventScript_NopReturn
# 139 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_TryShowMew_1
# 140 "data/maps/FarawayIsland_Interior/scripts.pory"

# 141 "data/maps/FarawayIsland_Interior/scripts.pory"

# 142 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_FindMew::
# 143 "data/maps/FarawayIsland_Interior/scripts.pory"
# 75 "data/maps/FarawayIsland_Interior/scripts.pory"
# 144 "data/maps/FarawayIsland_Interior/scripts.pory"
	lockall
# 145 "data/maps/FarawayIsland_Interior/scripts.pory"
# 76 "data/maps/FarawayIsland_Interior/scripts.pory"
# 146 "data/maps/FarawayIsland_Interior/scripts.pory"
	playse SE_PIN
# 147 "data/maps/FarawayIsland_Interior/scripts.pory"
# 77 "data/maps/FarawayIsland_Interior/scripts.pory"
# 148 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, Common_Movement_ExclamationMark
# 149 "data/maps/FarawayIsland_Interior/scripts.pory"
# 78 "data/maps/FarawayIsland_Interior/scripts.pory"
# 150 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 151 "data/maps/FarawayIsland_Interior/scripts.pory"
# 79 "data/maps/FarawayIsland_Interior/scripts.pory"
# 152 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, Common_Movement_Delay48
# 153 "data/maps/FarawayIsland_Interior/scripts.pory"
# 80 "data/maps/FarawayIsland_Interior/scripts.pory"
# 154 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 155 "data/maps/FarawayIsland_Interior/scripts.pory"
# 81 "data/maps/FarawayIsland_Interior/scripts.pory"
# 156 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewMoveAndHide
# 157 "data/maps/FarawayIsland_Interior/scripts.pory"
# 82 "data/maps/FarawayIsland_Interior/scripts.pory"
# 158 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 159 "data/maps/FarawayIsland_Interior/scripts.pory"
# 83 "data/maps/FarawayIsland_Interior/scripts.pory"
# 160 "data/maps/FarawayIsland_Interior/scripts.pory"
	copyobjectxytoperm LOCALID_FARAWAY_ISLAND_MEW
# 161 "data/maps/FarawayIsland_Interior/scripts.pory"
# 84 "data/maps/FarawayIsland_Interior/scripts.pory"
# 162 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
# 163 "data/maps/FarawayIsland_Interior/scripts.pory"
# 85 "data/maps/FarawayIsland_Interior/scripts.pory"
# 164 "data/maps/FarawayIsland_Interior/scripts.pory"
	releaseall
# 165 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 166 "data/maps/FarawayIsland_Interior/scripts.pory"

# 167 "data/maps/FarawayIsland_Interior/scripts.pory"

# 168 "data/maps/FarawayIsland_Interior/scripts.pory"
# 89 "data/maps/FarawayIsland_Interior/scripts.pory"
# 169 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewMoveAndHide:
# 170 "data/maps/FarawayIsland_Interior/scripts.pory"
# 90 "data/maps/FarawayIsland_Interior/scripts.pory"
# 171 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_up
# 172 "data/maps/FarawayIsland_Interior/scripts.pory"
# 91 "data/maps/FarawayIsland_Interior/scripts.pory"
# 173 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_up
# 174 "data/maps/FarawayIsland_Interior/scripts.pory"
# 92 "data/maps/FarawayIsland_Interior/scripts.pory"
# 175 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_up
# 176 "data/maps/FarawayIsland_Interior/scripts.pory"
# 93 "data/maps/FarawayIsland_Interior/scripts.pory"
# 177 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_faster_down
# 178 "data/maps/FarawayIsland_Interior/scripts.pory"
# 94 "data/maps/FarawayIsland_Interior/scripts.pory"
# 179 "data/maps/FarawayIsland_Interior/scripts.pory"
	set_invisible
# 180 "data/maps/FarawayIsland_Interior/scripts.pory"
# 95 "data/maps/FarawayIsland_Interior/scripts.pory"
# 181 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 182 "data/maps/FarawayIsland_Interior/scripts.pory"

# 183 "data/maps/FarawayIsland_Interior/scripts.pory"
# 98 "data/maps/FarawayIsland_Interior/scripts.pory"
# 184 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewAppear:
# 185 "data/maps/FarawayIsland_Interior/scripts.pory"
# 99 "data/maps/FarawayIsland_Interior/scripts.pory"
# 186 "data/maps/FarawayIsland_Interior/scripts.pory"
	set_visible
# 187 "data/maps/FarawayIsland_Interior/scripts.pory"
# 100 "data/maps/FarawayIsland_Interior/scripts.pory"
# 188 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 189 "data/maps/FarawayIsland_Interior/scripts.pory"

# 190 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewFloatUpNorth::
# 191 "data/maps/FarawayIsland_Interior/scripts.pory"
# 104 "data/maps/FarawayIsland_Interior/scripts.pory"
# 192 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_facing_direction
# 193 "data/maps/FarawayIsland_Interior/scripts.pory"
# 105 "data/maps/FarawayIsland_Interior/scripts.pory"
# 194 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 195 "data/maps/FarawayIsland_Interior/scripts.pory"
# 106 "data/maps/FarawayIsland_Interior/scripts.pory"
# 196 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 197 "data/maps/FarawayIsland_Interior/scripts.pory"
# 107 "data/maps/FarawayIsland_Interior/scripts.pory"
# 198 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_facing_direction
# 199 "data/maps/FarawayIsland_Interior/scripts.pory"
# 108 "data/maps/FarawayIsland_Interior/scripts.pory"
# 200 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_down
# 201 "data/maps/FarawayIsland_Interior/scripts.pory"
# 109 "data/maps/FarawayIsland_Interior/scripts.pory"
# 202 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_down
# 203 "data/maps/FarawayIsland_Interior/scripts.pory"
# 110 "data/maps/FarawayIsland_Interior/scripts.pory"
# 204 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 205 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 206 "data/maps/FarawayIsland_Interior/scripts.pory"

# 207 "data/maps/FarawayIsland_Interior/scripts.pory"

# 208 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewFloatUpSouth::
# 209 "data/maps/FarawayIsland_Interior/scripts.pory"
# 114 "data/maps/FarawayIsland_Interior/scripts.pory"
# 210 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_facing_direction
# 211 "data/maps/FarawayIsland_Interior/scripts.pory"
# 115 "data/maps/FarawayIsland_Interior/scripts.pory"
# 212 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 213 "data/maps/FarawayIsland_Interior/scripts.pory"
# 116 "data/maps/FarawayIsland_Interior/scripts.pory"
# 214 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 215 "data/maps/FarawayIsland_Interior/scripts.pory"
# 117 "data/maps/FarawayIsland_Interior/scripts.pory"
# 216 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_facing_direction
# 217 "data/maps/FarawayIsland_Interior/scripts.pory"
# 118 "data/maps/FarawayIsland_Interior/scripts.pory"
# 218 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_up
# 219 "data/maps/FarawayIsland_Interior/scripts.pory"
# 119 "data/maps/FarawayIsland_Interior/scripts.pory"
# 220 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_up
# 221 "data/maps/FarawayIsland_Interior/scripts.pory"
# 120 "data/maps/FarawayIsland_Interior/scripts.pory"
# 222 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 223 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 224 "data/maps/FarawayIsland_Interior/scripts.pory"

# 225 "data/maps/FarawayIsland_Interior/scripts.pory"

# 226 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewFloatUpWest::
# 227 "data/maps/FarawayIsland_Interior/scripts.pory"
# 124 "data/maps/FarawayIsland_Interior/scripts.pory"
# 228 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_facing_direction
# 229 "data/maps/FarawayIsland_Interior/scripts.pory"
# 125 "data/maps/FarawayIsland_Interior/scripts.pory"
# 230 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 231 "data/maps/FarawayIsland_Interior/scripts.pory"
# 126 "data/maps/FarawayIsland_Interior/scripts.pory"
# 232 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 233 "data/maps/FarawayIsland_Interior/scripts.pory"
# 127 "data/maps/FarawayIsland_Interior/scripts.pory"
# 234 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_facing_direction
# 235 "data/maps/FarawayIsland_Interior/scripts.pory"
# 128 "data/maps/FarawayIsland_Interior/scripts.pory"
# 236 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_right
# 237 "data/maps/FarawayIsland_Interior/scripts.pory"
# 129 "data/maps/FarawayIsland_Interior/scripts.pory"
# 238 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_right
# 239 "data/maps/FarawayIsland_Interior/scripts.pory"
# 130 "data/maps/FarawayIsland_Interior/scripts.pory"
# 240 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 241 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 242 "data/maps/FarawayIsland_Interior/scripts.pory"

# 243 "data/maps/FarawayIsland_Interior/scripts.pory"

# 244 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewFloatUpEast::
# 245 "data/maps/FarawayIsland_Interior/scripts.pory"
# 134 "data/maps/FarawayIsland_Interior/scripts.pory"
# 246 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_facing_direction
# 247 "data/maps/FarawayIsland_Interior/scripts.pory"
# 135 "data/maps/FarawayIsland_Interior/scripts.pory"
# 248 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 249 "data/maps/FarawayIsland_Interior/scripts.pory"
# 136 "data/maps/FarawayIsland_Interior/scripts.pory"
# 250 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 251 "data/maps/FarawayIsland_Interior/scripts.pory"
# 137 "data/maps/FarawayIsland_Interior/scripts.pory"
# 252 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_facing_direction
# 253 "data/maps/FarawayIsland_Interior/scripts.pory"
# 138 "data/maps/FarawayIsland_Interior/scripts.pory"
# 254 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_left
# 255 "data/maps/FarawayIsland_Interior/scripts.pory"
# 139 "data/maps/FarawayIsland_Interior/scripts.pory"
# 256 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_left
# 257 "data/maps/FarawayIsland_Interior/scripts.pory"
# 140 "data/maps/FarawayIsland_Interior/scripts.pory"
# 258 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 259 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 260 "data/maps/FarawayIsland_Interior/scripts.pory"

# 261 "data/maps/FarawayIsland_Interior/scripts.pory"

# 262 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew::
# 263 "data/maps/FarawayIsland_Interior/scripts.pory"
# 144 "data/maps/FarawayIsland_Interior/scripts.pory"
# 264 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock
# 265 "data/maps/FarawayIsland_Interior/scripts.pory"
# 145 "data/maps/FarawayIsland_Interior/scripts.pory"
# 266 "data/maps/FarawayIsland_Interior/scripts.pory"
	faceplayer
# 267 "data/maps/FarawayIsland_Interior/scripts.pory"
# 146 "data/maps/FarawayIsland_Interior/scripts.pory"
# 268 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewAppear
# 269 "data/maps/FarawayIsland_Interior/scripts.pory"
# 147 "data/maps/FarawayIsland_Interior/scripts.pory"
# 270 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 271 "data/maps/FarawayIsland_Interior/scripts.pory"
# 148 "data/maps/FarawayIsland_Interior/scripts.pory"
# 272 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, 0
# 273 "data/maps/FarawayIsland_Interior/scripts.pory"
# 149 "data/maps/FarawayIsland_Interior/scripts.pory"
# 274 "data/maps/FarawayIsland_Interior/scripts.pory"
	special SetMewAboveGrass
# 275 "data/maps/FarawayIsland_Interior/scripts.pory"
# 150 "data/maps/FarawayIsland_Interior/scripts.pory"
# 276 "data/maps/FarawayIsland_Interior/scripts.pory"
	message FarawayIsland_Interior_Text_Mew
# 277 "data/maps/FarawayIsland_Interior/scripts.pory"
# 151 "data/maps/FarawayIsland_Interior/scripts.pory"
# 278 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitse
# 279 "data/maps/FarawayIsland_Interior/scripts.pory"
# 152 "data/maps/FarawayIsland_Interior/scripts.pory"
# 280 "data/maps/FarawayIsland_Interior/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 281 "data/maps/FarawayIsland_Interior/scripts.pory"
# 153 "data/maps/FarawayIsland_Interior/scripts.pory"
# 282 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 283 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_Mew_2
# 284 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_1:
# 285 "data/maps/FarawayIsland_Interior/scripts.pory"
# 156 "data/maps/FarawayIsland_Interior/scripts.pory"
# 286 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 287 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_Mew_5
# 288 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_4:
# 289 "data/maps/FarawayIsland_Interior/scripts.pory"
# 159 "data/maps/FarawayIsland_Interior/scripts.pory"
# 290 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 291 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_Mew_8
# 292 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_7:
# 293 "data/maps/FarawayIsland_Interior/scripts.pory"
# 162 "data/maps/FarawayIsland_Interior/scripts.pory"
# 294 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 295 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_Mew_11
# 296 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_10:
# 297 "data/maps/FarawayIsland_Interior/scripts.pory"
# 165 "data/maps/FarawayIsland_Interior/scripts.pory"
# 298 "data/maps/FarawayIsland_Interior/scripts.pory"
	special DestroyMewEmergingGrassSprite
# 299 "data/maps/FarawayIsland_Interior/scripts.pory"
# 166 "data/maps/FarawayIsland_Interior/scripts.pory"
# 300 "data/maps/FarawayIsland_Interior/scripts.pory"
	delay 40
# 301 "data/maps/FarawayIsland_Interior/scripts.pory"
# 167 "data/maps/FarawayIsland_Interior/scripts.pory"
# 302 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmoncry
# 303 "data/maps/FarawayIsland_Interior/scripts.pory"
# 168 "data/maps/FarawayIsland_Interior/scripts.pory"
# 304 "data/maps/FarawayIsland_Interior/scripts.pory"
	seteventmon SPECIES_MEW, 30
# 305 "data/maps/FarawayIsland_Interior/scripts.pory"
# 169 "data/maps/FarawayIsland_Interior/scripts.pory"
# 306 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 307 "data/maps/FarawayIsland_Interior/scripts.pory"
# 170 "data/maps/FarawayIsland_Interior/scripts.pory"
# 308 "data/maps/FarawayIsland_Interior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 309 "data/maps/FarawayIsland_Interior/scripts.pory"
# 171 "data/maps/FarawayIsland_Interior/scripts.pory"
# 310 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitstate
# 311 "data/maps/FarawayIsland_Interior/scripts.pory"
# 172 "data/maps/FarawayIsland_Interior/scripts.pory"
# 312 "data/maps/FarawayIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 313 "data/maps/FarawayIsland_Interior/scripts.pory"
# 173 "data/maps/FarawayIsland_Interior/scripts.pory"
# 314 "data/maps/FarawayIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 315 "data/maps/FarawayIsland_Interior/scripts.pory"
# 174 "data/maps/FarawayIsland_Interior/scripts.pory"
# 316 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 317 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_Mew_14
# 318 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_13:
# 319 "data/maps/FarawayIsland_Interior/scripts.pory"
# 177 "data/maps/FarawayIsland_Interior/scripts.pory"
# 320 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 321 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_Mew_17
# 322 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_16:
# 323 "data/maps/FarawayIsland_Interior/scripts.pory"
# 180 "data/maps/FarawayIsland_Interior/scripts.pory"
# 324 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 325 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_Mew_20
# 326 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_19:
# 327 "data/maps/FarawayIsland_Interior/scripts.pory"
# 183 "data/maps/FarawayIsland_Interior/scripts.pory"
# 328 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_MON_TELEPORTED
# 329 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq FarawayIsland_Interior_EventScript_Mew_23
# 330 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_22:
# 331 "data/maps/FarawayIsland_Interior/scripts.pory"
# 186 "data/maps/FarawayIsland_Interior/scripts.pory"
# 332 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_MEW
# 333 "data/maps/FarawayIsland_Interior/scripts.pory"
# 187 "data/maps/FarawayIsland_Interior/scripts.pory"
# 334 "data/maps/FarawayIsland_Interior/scripts.pory"
	release
# 335 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 336 "data/maps/FarawayIsland_Interior/scripts.pory"

# 337 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_2:
# 338 "data/maps/FarawayIsland_Interior/scripts.pory"
# 154 "data/maps/FarawayIsland_Interior/scripts.pory"
# 339 "data/maps/FarawayIsland_Interior/scripts.pory"
	call FarawayIsland_Interior_EventScript_FoundMewNorth
# 340 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_Mew_1
# 341 "data/maps/FarawayIsland_Interior/scripts.pory"

# 342 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_5:
# 343 "data/maps/FarawayIsland_Interior/scripts.pory"
# 157 "data/maps/FarawayIsland_Interior/scripts.pory"
# 344 "data/maps/FarawayIsland_Interior/scripts.pory"
	call FarawayIsland_Interior_EventScript_FoundMewSouth
# 345 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_Mew_4
# 346 "data/maps/FarawayIsland_Interior/scripts.pory"

# 347 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_8:
# 348 "data/maps/FarawayIsland_Interior/scripts.pory"
# 160 "data/maps/FarawayIsland_Interior/scripts.pory"
# 349 "data/maps/FarawayIsland_Interior/scripts.pory"
	call FarawayIsland_Interior_EventScript_FoundMewWest
# 350 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_Mew_7
# 351 "data/maps/FarawayIsland_Interior/scripts.pory"

# 352 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_11:
# 353 "data/maps/FarawayIsland_Interior/scripts.pory"
# 163 "data/maps/FarawayIsland_Interior/scripts.pory"
# 354 "data/maps/FarawayIsland_Interior/scripts.pory"
	call FarawayIsland_Interior_EventScript_FoundMewEast
# 355 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_Mew_10
# 356 "data/maps/FarawayIsland_Interior/scripts.pory"

# 357 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_14:
# 358 "data/maps/FarawayIsland_Interior/scripts.pory"
# 175 "data/maps/FarawayIsland_Interior/scripts.pory"
# 359 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_MewDefeated
# 360 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_Mew_13
# 361 "data/maps/FarawayIsland_Interior/scripts.pory"

# 362 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_17:
# 363 "data/maps/FarawayIsland_Interior/scripts.pory"
# 178 "data/maps/FarawayIsland_Interior/scripts.pory"
# 364 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_PlayerOrMewRan
# 365 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_Mew_16
# 366 "data/maps/FarawayIsland_Interior/scripts.pory"

# 367 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_20:
# 368 "data/maps/FarawayIsland_Interior/scripts.pory"
# 181 "data/maps/FarawayIsland_Interior/scripts.pory"
# 369 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_PlayerOrMewRan
# 370 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_Mew_19
# 371 "data/maps/FarawayIsland_Interior/scripts.pory"

# 372 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_23:
# 373 "data/maps/FarawayIsland_Interior/scripts.pory"
# 184 "data/maps/FarawayIsland_Interior/scripts.pory"
# 374 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_PlayerOrMewRan
# 375 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto FarawayIsland_Interior_EventScript_Mew_22
# 376 "data/maps/FarawayIsland_Interior/scripts.pory"

# 377 "data/maps/FarawayIsland_Interior/scripts.pory"

# 378 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_MewDefeated::
# 379 "data/maps/FarawayIsland_Interior/scripts.pory"
# 192 "data/maps/FarawayIsland_Interior/scripts.pory"
# 380 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_MEW
# 381 "data/maps/FarawayIsland_Interior/scripts.pory"
# 193 "data/maps/FarawayIsland_Interior/scripts.pory"
# 382 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEW
# 383 "data/maps/FarawayIsland_Interior/scripts.pory"
# 194 "data/maps/FarawayIsland_Interior/scripts.pory"
# 384 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 385 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 386 "data/maps/FarawayIsland_Interior/scripts.pory"

# 387 "data/maps/FarawayIsland_Interior/scripts.pory"

# 388 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_PlayerOrMewRan::
# 389 "data/maps/FarawayIsland_Interior/scripts.pory"
# 199 "data/maps/FarawayIsland_Interior/scripts.pory"
# 390 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEW
# 391 "data/maps/FarawayIsland_Interior/scripts.pory"
# 200 "data/maps/FarawayIsland_Interior/scripts.pory"
# 392 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 393 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 394 "data/maps/FarawayIsland_Interior/scripts.pory"

# 395 "data/maps/FarawayIsland_Interior/scripts.pory"

# 396 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_FoundMewNorth::
# 397 "data/maps/FarawayIsland_Interior/scripts.pory"
# 205 "data/maps/FarawayIsland_Interior/scripts.pory"
# 398 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewFloatUpNorth
# 399 "data/maps/FarawayIsland_Interior/scripts.pory"
# 206 "data/maps/FarawayIsland_Interior/scripts.pory"
# 400 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 401 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 402 "data/maps/FarawayIsland_Interior/scripts.pory"

# 403 "data/maps/FarawayIsland_Interior/scripts.pory"

# 404 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_FoundMewSouth::
# 405 "data/maps/FarawayIsland_Interior/scripts.pory"
# 211 "data/maps/FarawayIsland_Interior/scripts.pory"
# 406 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewFloatUpSouth
# 407 "data/maps/FarawayIsland_Interior/scripts.pory"
# 212 "data/maps/FarawayIsland_Interior/scripts.pory"
# 408 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 409 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 410 "data/maps/FarawayIsland_Interior/scripts.pory"

# 411 "data/maps/FarawayIsland_Interior/scripts.pory"

# 412 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_FoundMewWest::
# 413 "data/maps/FarawayIsland_Interior/scripts.pory"
# 217 "data/maps/FarawayIsland_Interior/scripts.pory"
# 414 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewFloatUpWest
# 415 "data/maps/FarawayIsland_Interior/scripts.pory"
# 218 "data/maps/FarawayIsland_Interior/scripts.pory"
# 416 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 417 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 418 "data/maps/FarawayIsland_Interior/scripts.pory"

# 419 "data/maps/FarawayIsland_Interior/scripts.pory"

# 420 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_FoundMewEast::
# 421 "data/maps/FarawayIsland_Interior/scripts.pory"
# 223 "data/maps/FarawayIsland_Interior/scripts.pory"
# 422 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewFloatUpEast
# 423 "data/maps/FarawayIsland_Interior/scripts.pory"
# 224 "data/maps/FarawayIsland_Interior/scripts.pory"
# 424 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 425 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 426 "data/maps/FarawayIsland_Interior/scripts.pory"

# 427 "data/maps/FarawayIsland_Interior/scripts.pory"

# 428 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_HideMewWhenGrassCut::
# 429 "data/maps/FarawayIsland_Interior/scripts.pory"
# 229 "data/maps/FarawayIsland_Interior/scripts.pory"
# 430 "data/maps/FarawayIsland_Interior/scripts.pory"
	lockall
# 431 "data/maps/FarawayIsland_Interior/scripts.pory"
# 230 "data/maps/FarawayIsland_Interior/scripts.pory"
# 432 "data/maps/FarawayIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 433 "data/maps/FarawayIsland_Interior/scripts.pory"
# 231 "data/maps/FarawayIsland_Interior/scripts.pory"
# 434 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_HIDE_MEW
# 435 "data/maps/FarawayIsland_Interior/scripts.pory"
# 232 "data/maps/FarawayIsland_Interior/scripts.pory"
# 436 "data/maps/FarawayIsland_Interior/scripts.pory"
	removeobject LOCALID_FARAWAY_ISLAND_MEW
# 437 "data/maps/FarawayIsland_Interior/scripts.pory"
# 233 "data/maps/FarawayIsland_Interior/scripts.pory"
# 438 "data/maps/FarawayIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 439 "data/maps/FarawayIsland_Interior/scripts.pory"
# 234 "data/maps/FarawayIsland_Interior/scripts.pory"
# 440 "data/maps/FarawayIsland_Interior/scripts.pory"
	msgbox FarawayIsland_Interior_Text_TheFeelingOfBeingWatchedFaded, MSGBOX_DEFAULT
# 441 "data/maps/FarawayIsland_Interior/scripts.pory"
# 235 "data/maps/FarawayIsland_Interior/scripts.pory"
# 442 "data/maps/FarawayIsland_Interior/scripts.pory"
	closemessage
# 443 "data/maps/FarawayIsland_Interior/scripts.pory"
# 236 "data/maps/FarawayIsland_Interior/scripts.pory"
# 444 "data/maps/FarawayIsland_Interior/scripts.pory"
	releaseall
# 445 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 446 "data/maps/FarawayIsland_Interior/scripts.pory"

# 447 "data/maps/FarawayIsland_Interior/scripts.pory"

# 448 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Text_TheFeelingOfBeingWatchedFaded::
# 449 "data/maps/FarawayIsland_Interior/scripts.pory"
# 240 "data/maps/FarawayIsland_Interior/scripts.pory"
# 450 "data/maps/FarawayIsland_Interior/scripts.pory"
	.string "The feeling of being watched faded…$"
