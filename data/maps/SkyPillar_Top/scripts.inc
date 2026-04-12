# 1 "data/maps/SkyPillar_Top/scripts.pory"

# 2 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_MapScripts::
# 3 "data/maps/SkyPillar_Top/scripts.pory"
# 2 "data/maps/SkyPillar_Top/scripts.pory"
# 4 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 5 "data/maps/SkyPillar_Top/scripts.pory"
# 3 "data/maps/SkyPillar_Top/scripts.pory"
# 6 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 7 "data/maps/SkyPillar_Top/scripts.pory"
# 4 "data/maps/SkyPillar_Top/scripts.pory"
# 8 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
# 9 "data/maps/SkyPillar_Top/scripts.pory"
	.byte 0
# 10 "data/maps/SkyPillar_Top/scripts.pory"

# 11 "data/maps/SkyPillar_Top/scripts.pory"

# 12 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume::
# 13 "data/maps/SkyPillar_Top/scripts.pory"
# 8 "data/maps/SkyPillar_Top/scripts.pory"
# 14 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_OnResume_2
# 15 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume_1:
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 17 "data/maps/SkyPillar_Top/scripts.pory"

# 18 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume_2:
# 19 "data/maps/SkyPillar_Top/scripts.pory"
# 9 "data/maps/SkyPillar_Top/scripts.pory"
# 20 "data/maps/SkyPillar_Top/scripts.pory"
	call SkyPillar_Top_EventScript_TryRemoveRayquaza
# 21 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_OnResume_1
# 22 "data/maps/SkyPillar_Top/scripts.pory"

# 23 "data/maps/SkyPillar_Top/scripts.pory"

# 24 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 25 "data/maps/SkyPillar_Top/scripts.pory"
# 15 "data/maps/SkyPillar_Top/scripts.pory"
# 26 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/SkyPillar_Top/scripts.pory"
# 16 "data/maps/SkyPillar_Top/scripts.pory"
# 28 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 29 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne SkyPillar_Top_EventScript_TryRemoveRayquaza_2
# 30 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza_1:
# 31 "data/maps/SkyPillar_Top/scripts.pory"
# 19 "data/maps/SkyPillar_Top/scripts.pory"
# 32 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 33 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 34 "data/maps/SkyPillar_Top/scripts.pory"

# 35 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza_2:
# 36 "data/maps/SkyPillar_Top/scripts.pory"
# 17 "data/maps/SkyPillar_Top/scripts.pory"
# 37 "data/maps/SkyPillar_Top/scripts.pory"
	goto Common_EventScript_NopReturn
# 38 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_TryRemoveRayquaza_1
# 39 "data/maps/SkyPillar_Top/scripts.pory"

# 40 "data/maps/SkyPillar_Top/scripts.pory"

# 41 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition::
# 42 "data/maps/SkyPillar_Top/scripts.pory"
# 24 "data/maps/SkyPillar_Top/scripts.pory"
# 43 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_lt SkyPillar_Top_OnTransition_2
# 45 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition_1:
# 46 "data/maps/SkyPillar_Top/scripts.pory"
# 27 "data/maps/SkyPillar_Top/scripts.pory"
# 47 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 48 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ge SkyPillar_Top_OnTransition_5
# 49 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition_4:
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 51 "data/maps/SkyPillar_Top/scripts.pory"

# 52 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition_2:
# 53 "data/maps/SkyPillar_Top/scripts.pory"
# 25 "data/maps/SkyPillar_Top/scripts.pory"
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	call SkyPillar_Top_EventScript_SetCleanLayout
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_OnTransition_1
# 56 "data/maps/SkyPillar_Top/scripts.pory"

# 57 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition_5:
# 58 "data/maps/SkyPillar_Top/scripts.pory"
# 28 "data/maps/SkyPillar_Top/scripts.pory"
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	call SkyPillar_Top_EventScript_TryShowRayquaza
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_OnTransition_4
# 61 "data/maps/SkyPillar_Top/scripts.pory"

# 62 "data/maps/SkyPillar_Top/scripts.pory"

# 63 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 64 "data/maps/SkyPillar_Top/scripts.pory"
# 34 "data/maps/SkyPillar_Top/scripts.pory"
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 66 "data/maps/SkyPillar_Top/scripts.pory"
# 35 "data/maps/SkyPillar_Top/scripts.pory"
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 69 "data/maps/SkyPillar_Top/scripts.pory"

# 70 "data/maps/SkyPillar_Top/scripts.pory"

# 71 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 72 "data/maps/SkyPillar_Top/scripts.pory"
# 40 "data/maps/SkyPillar_Top/scripts.pory"
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_TryShowRayquaza_2
# 74 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza_1:
# 75 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 76 "data/maps/SkyPillar_Top/scripts.pory"

# 77 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza_2:
# 78 "data/maps/SkyPillar_Top/scripts.pory"
# 41 "data/maps/SkyPillar_Top/scripts.pory"
# 79 "data/maps/SkyPillar_Top/scripts.pory"
	call SkyPillar_Top_EventScript_ShowRayquaza
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_TryShowRayquaza_1
# 81 "data/maps/SkyPillar_Top/scripts.pory"

# 82 "data/maps/SkyPillar_Top/scripts.pory"

# 83 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 84 "data/maps/SkyPillar_Top/scripts.pory"
# 47 "data/maps/SkyPillar_Top/scripts.pory"
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 87 "data/maps/SkyPillar_Top/scripts.pory"

# 88 "data/maps/SkyPillar_Top/scripts.pory"

# 89 "data/maps/SkyPillar_Top/scripts.pory"
# 51 "data/maps/SkyPillar_Top/scripts.pory"
# 90 "data/maps/SkyPillar_Top/scripts.pory"

# 91 "data/maps/SkyPillar_Top/scripts.pory"
# 52 "data/maps/SkyPillar_Top/scripts.pory"
# 92 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 93 "data/maps/SkyPillar_Top/scripts.pory"
# 53 "data/maps/SkyPillar_Top/scripts.pory"
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 95 "data/maps/SkyPillar_Top/scripts.pory"
# 54 "data/maps/SkyPillar_Top/scripts.pory"
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 97 "data/maps/SkyPillar_Top/scripts.pory"

# 98 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 99 "data/maps/SkyPillar_Top/scripts.pory"
# 59 "data/maps/SkyPillar_Top/scripts.pory"
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 102 "data/maps/SkyPillar_Top/scripts.pory"

# 103 "data/maps/SkyPillar_Top/scripts.pory"

# 104 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 105 "data/maps/SkyPillar_Top/scripts.pory"
# 64 "data/maps/SkyPillar_Top/scripts.pory"
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 107 "data/maps/SkyPillar_Top/scripts.pory"
# 65 "data/maps/SkyPillar_Top/scripts.pory"
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 109 "data/maps/SkyPillar_Top/scripts.pory"
# 66 "data/maps/SkyPillar_Top/scripts.pory"
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 111 "data/maps/SkyPillar_Top/scripts.pory"
# 67 "data/maps/SkyPillar_Top/scripts.pory"
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 113 "data/maps/SkyPillar_Top/scripts.pory"
# 68 "data/maps/SkyPillar_Top/scripts.pory"
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 115 "data/maps/SkyPillar_Top/scripts.pory"
# 69 "data/maps/SkyPillar_Top/scripts.pory"
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 117 "data/maps/SkyPillar_Top/scripts.pory"
# 70 "data/maps/SkyPillar_Top/scripts.pory"
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 119 "data/maps/SkyPillar_Top/scripts.pory"
# 71 "data/maps/SkyPillar_Top/scripts.pory"
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 121 "data/maps/SkyPillar_Top/scripts.pory"
# 72 "data/maps/SkyPillar_Top/scripts.pory"
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 123 "data/maps/SkyPillar_Top/scripts.pory"
# 73 "data/maps/SkyPillar_Top/scripts.pory"
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 125 "data/maps/SkyPillar_Top/scripts.pory"
# 74 "data/maps/SkyPillar_Top/scripts.pory"
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 127 "data/maps/SkyPillar_Top/scripts.pory"
# 75 "data/maps/SkyPillar_Top/scripts.pory"
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq SkyPillar_Top_EventScript_Rayquaza_2
# 130 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza_1:
# 131 "data/maps/SkyPillar_Top/scripts.pory"
# 78 "data/maps/SkyPillar_Top/scripts.pory"
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq SkyPillar_Top_EventScript_Rayquaza_5
# 134 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza_4:
# 135 "data/maps/SkyPillar_Top/scripts.pory"
# 81 "data/maps/SkyPillar_Top/scripts.pory"
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq SkyPillar_Top_EventScript_Rayquaza_8
# 138 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza_7:
# 139 "data/maps/SkyPillar_Top/scripts.pory"
# 84 "data/maps/SkyPillar_Top/scripts.pory"
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 141 "data/maps/SkyPillar_Top/scripts.pory"
# 85 "data/maps/SkyPillar_Top/scripts.pory"
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 144 "data/maps/SkyPillar_Top/scripts.pory"

# 145 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza_2:
# 146 "data/maps/SkyPillar_Top/scripts.pory"
# 76 "data/maps/SkyPillar_Top/scripts.pory"
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_Rayquaza_1
# 149 "data/maps/SkyPillar_Top/scripts.pory"

# 150 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza_5:
# 151 "data/maps/SkyPillar_Top/scripts.pory"
# 79 "data/maps/SkyPillar_Top/scripts.pory"
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_Rayquaza_4
# 154 "data/maps/SkyPillar_Top/scripts.pory"

# 155 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza_8:
# 156 "data/maps/SkyPillar_Top/scripts.pory"
# 82 "data/maps/SkyPillar_Top/scripts.pory"
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_Rayquaza_7
# 159 "data/maps/SkyPillar_Top/scripts.pory"

# 160 "data/maps/SkyPillar_Top/scripts.pory"

# 161 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 162 "data/maps/SkyPillar_Top/scripts.pory"
# 90 "data/maps/SkyPillar_Top/scripts.pory"
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 164 "data/maps/SkyPillar_Top/scripts.pory"
# 91 "data/maps/SkyPillar_Top/scripts.pory"
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 167 "data/maps/SkyPillar_Top/scripts.pory"

# 168 "data/maps/SkyPillar_Top/scripts.pory"

# 169 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 170 "data/maps/SkyPillar_Top/scripts.pory"
# 96 "data/maps/SkyPillar_Top/scripts.pory"
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 172 "data/maps/SkyPillar_Top/scripts.pory"
# 97 "data/maps/SkyPillar_Top/scripts.pory"
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 175 "data/maps/SkyPillar_Top/scripts.pory"

# 176 "data/maps/SkyPillar_Top/scripts.pory"

# 177 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 178 "data/maps/SkyPillar_Top/scripts.pory"
# 102 "data/maps/SkyPillar_Top/scripts.pory"
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 180 "data/maps/SkyPillar_Top/scripts.pory"
# 103 "data/maps/SkyPillar_Top/scripts.pory"
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 182 "data/maps/SkyPillar_Top/scripts.pory"
# 104 "data/maps/SkyPillar_Top/scripts.pory"
# 183 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 184 "data/maps/SkyPillar_Top/scripts.pory"
# 105 "data/maps/SkyPillar_Top/scripts.pory"
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 186 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 187 "data/maps/SkyPillar_Top/scripts.pory"

# 188 "data/maps/SkyPillar_Top/scripts.pory"

# 189 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 190 "data/maps/SkyPillar_Top/scripts.pory"
# 110 "data/maps/SkyPillar_Top/scripts.pory"
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 192 "data/maps/SkyPillar_Top/scripts.pory"
# 111 "data/maps/SkyPillar_Top/scripts.pory"
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 194 "data/maps/SkyPillar_Top/scripts.pory"
# 112 "data/maps/SkyPillar_Top/scripts.pory"
# 195 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 196 "data/maps/SkyPillar_Top/scripts.pory"
# 113 "data/maps/SkyPillar_Top/scripts.pory"
# 197 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 198 "data/maps/SkyPillar_Top/scripts.pory"
# 114 "data/maps/SkyPillar_Top/scripts.pory"
# 199 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 200 "data/maps/SkyPillar_Top/scripts.pory"
# 115 "data/maps/SkyPillar_Top/scripts.pory"
# 201 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 202 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 203 "data/maps/SkyPillar_Top/scripts.pory"

# 204 "data/maps/SkyPillar_Top/scripts.pory"

# 205 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 206 "data/maps/SkyPillar_Top/scripts.pory"
# 120 "data/maps/SkyPillar_Top/scripts.pory"
# 207 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 208 "data/maps/SkyPillar_Top/scripts.pory"
# 121 "data/maps/SkyPillar_Top/scripts.pory"
# 209 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 210 "data/maps/SkyPillar_Top/scripts.pory"
# 122 "data/maps/SkyPillar_Top/scripts.pory"
# 211 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 212 "data/maps/SkyPillar_Top/scripts.pory"
# 123 "data/maps/SkyPillar_Top/scripts.pory"
# 213 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 214 "data/maps/SkyPillar_Top/scripts.pory"
# 124 "data/maps/SkyPillar_Top/scripts.pory"
# 215 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 216 "data/maps/SkyPillar_Top/scripts.pory"
# 125 "data/maps/SkyPillar_Top/scripts.pory"
# 217 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 218 "data/maps/SkyPillar_Top/scripts.pory"
# 126 "data/maps/SkyPillar_Top/scripts.pory"
# 219 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 220 "data/maps/SkyPillar_Top/scripts.pory"
# 127 "data/maps/SkyPillar_Top/scripts.pory"
# 221 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 222 "data/maps/SkyPillar_Top/scripts.pory"
# 128 "data/maps/SkyPillar_Top/scripts.pory"
# 223 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 224 "data/maps/SkyPillar_Top/scripts.pory"
# 129 "data/maps/SkyPillar_Top/scripts.pory"
# 225 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 226 "data/maps/SkyPillar_Top/scripts.pory"
# 130 "data/maps/SkyPillar_Top/scripts.pory"
# 227 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 228 "data/maps/SkyPillar_Top/scripts.pory"
# 131 "data/maps/SkyPillar_Top/scripts.pory"
# 229 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 230 "data/maps/SkyPillar_Top/scripts.pory"
# 132 "data/maps/SkyPillar_Top/scripts.pory"
# 231 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1
# 232 "data/maps/SkyPillar_Top/scripts.pory"
# 133 "data/maps/SkyPillar_Top/scripts.pory"
# 233 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1
# 234 "data/maps/SkyPillar_Top/scripts.pory"
# 134 "data/maps/SkyPillar_Top/scripts.pory"
# 235 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8
# 236 "data/maps/SkyPillar_Top/scripts.pory"
# 135 "data/maps/SkyPillar_Top/scripts.pory"
# 237 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3
# 238 "data/maps/SkyPillar_Top/scripts.pory"
# 136 "data/maps/SkyPillar_Top/scripts.pory"
# 239 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 240 "data/maps/SkyPillar_Top/scripts.pory"
# 137 "data/maps/SkyPillar_Top/scripts.pory"
# 241 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 242 "data/maps/SkyPillar_Top/scripts.pory"
# 138 "data/maps/SkyPillar_Top/scripts.pory"
# 243 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 244 "data/maps/SkyPillar_Top/scripts.pory"
# 139 "data/maps/SkyPillar_Top/scripts.pory"
# 245 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 246 "data/maps/SkyPillar_Top/scripts.pory"
# 140 "data/maps/SkyPillar_Top/scripts.pory"
# 247 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1
# 248 "data/maps/SkyPillar_Top/scripts.pory"
# 141 "data/maps/SkyPillar_Top/scripts.pory"
# 249 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2
# 250 "data/maps/SkyPillar_Top/scripts.pory"
# 142 "data/maps/SkyPillar_Top/scripts.pory"
# 251 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8
# 252 "data/maps/SkyPillar_Top/scripts.pory"
# 143 "data/maps/SkyPillar_Top/scripts.pory"
# 253 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5
# 254 "data/maps/SkyPillar_Top/scripts.pory"
# 144 "data/maps/SkyPillar_Top/scripts.pory"
# 255 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 256 "data/maps/SkyPillar_Top/scripts.pory"
# 145 "data/maps/SkyPillar_Top/scripts.pory"
# 257 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 258 "data/maps/SkyPillar_Top/scripts.pory"
# 146 "data/maps/SkyPillar_Top/scripts.pory"
# 259 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 260 "data/maps/SkyPillar_Top/scripts.pory"
# 147 "data/maps/SkyPillar_Top/scripts.pory"
# 261 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 262 "data/maps/SkyPillar_Top/scripts.pory"
# 148 "data/maps/SkyPillar_Top/scripts.pory"
# 263 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 264 "data/maps/SkyPillar_Top/scripts.pory"
# 149 "data/maps/SkyPillar_Top/scripts.pory"
# 265 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 266 "data/maps/SkyPillar_Top/scripts.pory"
# 150 "data/maps/SkyPillar_Top/scripts.pory"
# 267 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 268 "data/maps/SkyPillar_Top/scripts.pory"
# 151 "data/maps/SkyPillar_Top/scripts.pory"
# 269 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 270 "data/maps/SkyPillar_Top/scripts.pory"
# 152 "data/maps/SkyPillar_Top/scripts.pory"
# 271 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 272 "data/maps/SkyPillar_Top/scripts.pory"
# 153 "data/maps/SkyPillar_Top/scripts.pory"
# 273 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 274 "data/maps/SkyPillar_Top/scripts.pory"
# 154 "data/maps/SkyPillar_Top/scripts.pory"
# 275 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 276 "data/maps/SkyPillar_Top/scripts.pory"
# 155 "data/maps/SkyPillar_Top/scripts.pory"
# 277 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 278 "data/maps/SkyPillar_Top/scripts.pory"
# 156 "data/maps/SkyPillar_Top/scripts.pory"
# 279 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 280 "data/maps/SkyPillar_Top/scripts.pory"
# 157 "data/maps/SkyPillar_Top/scripts.pory"
# 281 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 282 "data/maps/SkyPillar_Top/scripts.pory"
# 158 "data/maps/SkyPillar_Top/scripts.pory"
# 283 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 284 "data/maps/SkyPillar_Top/scripts.pory"
# 159 "data/maps/SkyPillar_Top/scripts.pory"
# 285 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 286 "data/maps/SkyPillar_Top/scripts.pory"
# 160 "data/maps/SkyPillar_Top/scripts.pory"
# 287 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 288 "data/maps/SkyPillar_Top/scripts.pory"
# 161 "data/maps/SkyPillar_Top/scripts.pory"
# 289 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 290 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 291 "data/maps/SkyPillar_Top/scripts.pory"

# 292 "data/maps/SkyPillar_Top/scripts.pory"

# 293 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir::
# 294 "data/maps/SkyPillar_Top/scripts.pory"
# 166 "data/maps/SkyPillar_Top/scripts.pory"
# 295 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 296 "data/maps/SkyPillar_Top/scripts.pory"
# 167 "data/maps/SkyPillar_Top/scripts.pory"
# 297 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left
# 298 "data/maps/SkyPillar_Top/scripts.pory"
# 168 "data/maps/SkyPillar_Top/scripts.pory"
# 299 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 300 "data/maps/SkyPillar_Top/scripts.pory"
# 169 "data/maps/SkyPillar_Top/scripts.pory"
# 301 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 302 "data/maps/SkyPillar_Top/scripts.pory"
# 170 "data/maps/SkyPillar_Top/scripts.pory"
# 303 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 304 "data/maps/SkyPillar_Top/scripts.pory"
# 171 "data/maps/SkyPillar_Top/scripts.pory"
# 305 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 306 "data/maps/SkyPillar_Top/scripts.pory"
# 172 "data/maps/SkyPillar_Top/scripts.pory"
# 307 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 308 "data/maps/SkyPillar_Top/scripts.pory"
# 173 "data/maps/SkyPillar_Top/scripts.pory"
# 309 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left
# 310 "data/maps/SkyPillar_Top/scripts.pory"
# 174 "data/maps/SkyPillar_Top/scripts.pory"
# 311 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 312 "data/maps/SkyPillar_Top/scripts.pory"
# 175 "data/maps/SkyPillar_Top/scripts.pory"
# 313 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right
# 314 "data/maps/SkyPillar_Top/scripts.pory"
# 176 "data/maps/SkyPillar_Top/scripts.pory"
# 315 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 316 "data/maps/SkyPillar_Top/scripts.pory"
# 177 "data/maps/SkyPillar_Top/scripts.pory"
# 317 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 318 "data/maps/SkyPillar_Top/scripts.pory"
# 178 "data/maps/SkyPillar_Top/scripts.pory"
# 319 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 320 "data/maps/SkyPillar_Top/scripts.pory"
# 179 "data/maps/SkyPillar_Top/scripts.pory"
# 321 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 322 "data/maps/SkyPillar_Top/scripts.pory"
# 180 "data/maps/SkyPillar_Top/scripts.pory"
# 323 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 324 "data/maps/SkyPillar_Top/scripts.pory"
# 181 "data/maps/SkyPillar_Top/scripts.pory"
# 325 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 326 "data/maps/SkyPillar_Top/scripts.pory"
# 182 "data/maps/SkyPillar_Top/scripts.pory"
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 329 "data/maps/SkyPillar_Top/scripts.pory"

# 330 "data/maps/SkyPillar_Top/scripts.pory"

# 331 "data/maps/SkyPillar_Top/scripts.pory"
# 185 "data/maps/SkyPillar_Top/scripts.pory"
# 332 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 333 "data/maps/SkyPillar_Top/scripts.pory"
# 186 "data/maps/SkyPillar_Top/scripts.pory"
# 334 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 335 "data/maps/SkyPillar_Top/scripts.pory"
# 187 "data/maps/SkyPillar_Top/scripts.pory"
# 336 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down
# 337 "data/maps/SkyPillar_Top/scripts.pory"
# 188 "data/maps/SkyPillar_Top/scripts.pory"
# 338 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 339 "data/maps/SkyPillar_Top/scripts.pory"
# 189 "data/maps/SkyPillar_Top/scripts.pory"
# 340 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right
# 341 "data/maps/SkyPillar_Top/scripts.pory"
# 190 "data/maps/SkyPillar_Top/scripts.pory"
# 342 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 343 "data/maps/SkyPillar_Top/scripts.pory"
# 191 "data/maps/SkyPillar_Top/scripts.pory"
# 344 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up
# 345 "data/maps/SkyPillar_Top/scripts.pory"
# 192 "data/maps/SkyPillar_Top/scripts.pory"
# 346 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 347 "data/maps/SkyPillar_Top/scripts.pory"
# 193 "data/maps/SkyPillar_Top/scripts.pory"
# 348 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 349 "data/maps/SkyPillar_Top/scripts.pory"
# 194 "data/maps/SkyPillar_Top/scripts.pory"
# 350 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 351 "data/maps/SkyPillar_Top/scripts.pory"
# 195 "data/maps/SkyPillar_Top/scripts.pory"
# 352 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 353 "data/maps/SkyPillar_Top/scripts.pory"
# 196 "data/maps/SkyPillar_Top/scripts.pory"
# 354 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 355 "data/maps/SkyPillar_Top/scripts.pory"
# 197 "data/maps/SkyPillar_Top/scripts.pory"
# 356 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 357 "data/maps/SkyPillar_Top/scripts.pory"
# 198 "data/maps/SkyPillar_Top/scripts.pory"
# 358 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 359 "data/maps/SkyPillar_Top/scripts.pory"

# 360 "data/maps/SkyPillar_Top/scripts.pory"
# 201 "data/maps/SkyPillar_Top/scripts.pory"
# 361 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 362 "data/maps/SkyPillar_Top/scripts.pory"
# 202 "data/maps/SkyPillar_Top/scripts.pory"
# 363 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 364 "data/maps/SkyPillar_Top/scripts.pory"
# 203 "data/maps/SkyPillar_Top/scripts.pory"
# 365 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 366 "data/maps/SkyPillar_Top/scripts.pory"
# 204 "data/maps/SkyPillar_Top/scripts.pory"
# 367 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 368 "data/maps/SkyPillar_Top/scripts.pory"
# 205 "data/maps/SkyPillar_Top/scripts.pory"
# 369 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 370 "data/maps/SkyPillar_Top/scripts.pory"

# 371 "data/maps/SkyPillar_Top/scripts.pory"
# 208 "data/maps/SkyPillar_Top/scripts.pory"
# 372 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 373 "data/maps/SkyPillar_Top/scripts.pory"
# 209 "data/maps/SkyPillar_Top/scripts.pory"
# 374 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 375 "data/maps/SkyPillar_Top/scripts.pory"
# 210 "data/maps/SkyPillar_Top/scripts.pory"
# 376 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 377 "data/maps/SkyPillar_Top/scripts.pory"
# 211 "data/maps/SkyPillar_Top/scripts.pory"
# 378 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 379 "data/maps/SkyPillar_Top/scripts.pory"
# 212 "data/maps/SkyPillar_Top/scripts.pory"
# 380 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 381 "data/maps/SkyPillar_Top/scripts.pory"

# 382 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff::
# 383 "data/maps/SkyPillar_Top/scripts.pory"
# 215 "data/maps/SkyPillar_Top/scripts.pory"
# 384 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"
