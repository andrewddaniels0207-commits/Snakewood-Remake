# 1 "data/maps/Route111/scripts.pory"

# 2 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 3 "data/maps/Route111/scripts.pory"
# 2 "data/maps/Route111/scripts.pory"
# 4 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 5 "data/maps/Route111/scripts.pory"
# 3 "data/maps/Route111/scripts.pory"
# 6 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 7 "data/maps/Route111/scripts.pory"
# 4 "data/maps/Route111/scripts.pory"
# 8 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 9 "data/maps/Route111/scripts.pory"
# 5 "data/maps/Route111/scripts.pory"
# 10 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/Route111/scripts.pory"
	.byte 0
# 12 "data/maps/Route111/scripts.pory"

# 13 "data/maps/Route111/scripts.pory"
Route111_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/Route111/scripts.pory"
# 6 "data/maps/Route111/scripts.pory"
# 15 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 16 "data/maps/Route111/scripts.pory"
	.2byte 0
# 17 "data/maps/Route111/scripts.pory"

# 18 "data/maps/Route111/scripts.pory"

# 19 "data/maps/Route111/scripts.pory"
Route111_OnLoad::
# 20 "data/maps/Route111/scripts.pory"
# 11 "data/maps/Route111/scripts.pory"
# 21 "data/maps/Route111/scripts.pory"
	goto_if_unset FLAG_REGI_DOORS_OPENED, Route111_OnLoad_2
# 22 "data/maps/Route111/scripts.pory"
Route111_OnLoad_1:
# 23 "data/maps/Route111/scripts.pory"
# 14 "data/maps/Route111/scripts.pory"
# 24 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 1
# 25 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_OnLoad_5
# 26 "data/maps/Route111/scripts.pory"
Route111_OnLoad_4:
# 27 "data/maps/Route111/scripts.pory"
	end
# 28 "data/maps/Route111/scripts.pory"

# 29 "data/maps/Route111/scripts.pory"
Route111_OnLoad_2:
# 30 "data/maps/Route111/scripts.pory"
# 12 "data/maps/Route111/scripts.pory"
# 31 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseDesertRuins
# 32 "data/maps/Route111/scripts.pory"
	goto Route111_OnLoad_1
# 33 "data/maps/Route111/scripts.pory"

# 34 "data/maps/Route111/scripts.pory"
Route111_OnLoad_5:
# 35 "data/maps/Route111/scripts.pory"
# 15 "data/maps/Route111/scripts.pory"
# 36 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_ShowTemporaryMirageTower
# 37 "data/maps/Route111/scripts.pory"
	goto Route111_OnLoad_4
# 38 "data/maps/Route111/scripts.pory"

# 39 "data/maps/Route111/scripts.pory"

# 40 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 41 "data/maps/Route111/scripts.pory"
# 21 "data/maps/Route111/scripts.pory"
# 42 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 43 "data/maps/Route111/scripts.pory"
# 22 "data/maps/Route111/scripts.pory"
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 45 "data/maps/Route111/scripts.pory"
	return
# 46 "data/maps/Route111/scripts.pory"

# 47 "data/maps/Route111/scripts.pory"

# 48 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 49 "data/maps/Route111/scripts.pory"
# 27 "data/maps/Route111/scripts.pory"
# 50 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 51 "data/maps/Route111/scripts.pory"
# 28 "data/maps/Route111/scripts.pory"
# 52 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 53 "data/maps/Route111/scripts.pory"
# 29 "data/maps/Route111/scripts.pory"
# 54 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 55 "data/maps/Route111/scripts.pory"
# 30 "data/maps/Route111/scripts.pory"
# 56 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 57 "data/maps/Route111/scripts.pory"
# 31 "data/maps/Route111/scripts.pory"
# 58 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 59 "data/maps/Route111/scripts.pory"
# 32 "data/maps/Route111/scripts.pory"
# 60 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 61 "data/maps/Route111/scripts.pory"
# 33 "data/maps/Route111/scripts.pory"
# 62 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 63 "data/maps/Route111/scripts.pory"
# 34 "data/maps/Route111/scripts.pory"
# 64 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 65 "data/maps/Route111/scripts.pory"
# 35 "data/maps/Route111/scripts.pory"
# 66 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 67 "data/maps/Route111/scripts.pory"
# 36 "data/maps/Route111/scripts.pory"
# 68 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 69 "data/maps/Route111/scripts.pory"
# 37 "data/maps/Route111/scripts.pory"
# 70 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 71 "data/maps/Route111/scripts.pory"
# 38 "data/maps/Route111/scripts.pory"
# 72 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 73 "data/maps/Route111/scripts.pory"
# 39 "data/maps/Route111/scripts.pory"
# 74 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 75 "data/maps/Route111/scripts.pory"
# 40 "data/maps/Route111/scripts.pory"
# 76 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 77 "data/maps/Route111/scripts.pory"
# 41 "data/maps/Route111/scripts.pory"
# 78 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 79 "data/maps/Route111/scripts.pory"
# 42 "data/maps/Route111/scripts.pory"
# 80 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 81 "data/maps/Route111/scripts.pory"
# 43 "data/maps/Route111/scripts.pory"
# 82 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 83 "data/maps/Route111/scripts.pory"
# 44 "data/maps/Route111/scripts.pory"
# 84 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 85 "data/maps/Route111/scripts.pory"
	return
# 86 "data/maps/Route111/scripts.pory"

# 87 "data/maps/Route111/scripts.pory"

# 88 "data/maps/Route111/scripts.pory"
Route111_OnTransition::
# 89 "data/maps/Route111/scripts.pory"
# 49 "data/maps/Route111/scripts.pory"
# 90 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 91 "data/maps/Route111/scripts.pory"
# 50 "data/maps/Route111/scripts.pory"
# 92 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 93 "data/maps/Route111/scripts.pory"
# 51 "data/maps/Route111/scripts.pory"
# 94 "data/maps/Route111/scripts.pory"
	goto_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_OnTransition_2
# 95 "data/maps/Route111/scripts.pory"
Route111_OnTransition_1:
# 96 "data/maps/Route111/scripts.pory"
# 54 "data/maps/Route111/scripts.pory"
# 97 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 1
# 98 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_OnTransition_5
# 99 "data/maps/Route111/scripts.pory"
Route111_OnTransition_4:
# 100 "data/maps/Route111/scripts.pory"
# 57 "data/maps/Route111/scripts.pory"
# 101 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 2
# 102 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_OnTransition_8
# 103 "data/maps/Route111/scripts.pory"
Route111_OnTransition_7:
# 104 "data/maps/Route111/scripts.pory"
# 60 "data/maps/Route111/scripts.pory"
# 105 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 106 "data/maps/Route111/scripts.pory"
# 61 "data/maps/Route111/scripts.pory"
# 107 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 108 "data/maps/Route111/scripts.pory"
# 62 "data/maps/Route111/scripts.pory"
# 109 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 110 "data/maps/Route111/scripts.pory"
	end
# 111 "data/maps/Route111/scripts.pory"

# 112 "data/maps/Route111/scripts.pory"
Route111_OnTransition_2:
# 113 "data/maps/Route111/scripts.pory"
# 52 "data/maps/Route111/scripts.pory"
# 114 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_SetLayoutNoMirageTower
# 115 "data/maps/Route111/scripts.pory"
	goto Route111_OnTransition_1
# 116 "data/maps/Route111/scripts.pory"

# 117 "data/maps/Route111/scripts.pory"
Route111_OnTransition_5:
# 118 "data/maps/Route111/scripts.pory"
# 55 "data/maps/Route111/scripts.pory"
# 119 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_SetFallingPlayerGfx
# 120 "data/maps/Route111/scripts.pory"
	goto Route111_OnTransition_4
# 121 "data/maps/Route111/scripts.pory"

# 122 "data/maps/Route111/scripts.pory"
Route111_OnTransition_8:
# 123 "data/maps/Route111/scripts.pory"
# 58 "data/maps/Route111/scripts.pory"
# 124 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_SetMirageTowerGone
# 125 "data/maps/Route111/scripts.pory"
	goto Route111_OnTransition_7
# 126 "data/maps/Route111/scripts.pory"

# 127 "data/maps/Route111/scripts.pory"

# 128 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 129 "data/maps/Route111/scripts.pory"
# 67 "data/maps/Route111/scripts.pory"
# 130 "data/maps/Route111/scripts.pory"
	checkplayergender
# 131 "data/maps/Route111/scripts.pory"
# 68 "data/maps/Route111/scripts.pory"
# 132 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, MALE
# 133 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_SetFallingPlayerGfx_2
# 134 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx_1:
# 135 "data/maps/Route111/scripts.pory"
# 71 "data/maps/Route111/scripts.pory"
# 136 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FEMALE
# 137 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_SetFallingPlayerGfx_5
# 138 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx_4:
# 139 "data/maps/Route111/scripts.pory"
	return
# 140 "data/maps/Route111/scripts.pory"

# 141 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx_2:
# 142 "data/maps/Route111/scripts.pory"
# 69 "data/maps/Route111/scripts.pory"
# 143 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SetFallingPlayerGfxMale
# 144 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SetFallingPlayerGfx_1
# 145 "data/maps/Route111/scripts.pory"

# 146 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx_5:
# 147 "data/maps/Route111/scripts.pory"
# 72 "data/maps/Route111/scripts.pory"
# 148 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SetFallingPlayerGfxFemale
# 149 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SetFallingPlayerGfx_4
# 150 "data/maps/Route111/scripts.pory"

# 151 "data/maps/Route111/scripts.pory"

# 152 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 153 "data/maps/Route111/scripts.pory"
# 78 "data/maps/Route111/scripts.pory"
# 154 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 155 "data/maps/Route111/scripts.pory"
	return
# 156 "data/maps/Route111/scripts.pory"

# 157 "data/maps/Route111/scripts.pory"

# 158 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 159 "data/maps/Route111/scripts.pory"
# 83 "data/maps/Route111/scripts.pory"
# 160 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 161 "data/maps/Route111/scripts.pory"
	return
# 162 "data/maps/Route111/scripts.pory"

# 163 "data/maps/Route111/scripts.pory"

# 164 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 165 "data/maps/Route111/scripts.pory"
# 88 "data/maps/Route111/scripts.pory"
# 166 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 167 "data/maps/Route111/scripts.pory"
# 89 "data/maps/Route111/scripts.pory"
# 168 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_1, 34
# 169 "data/maps/Route111/scripts.pory"
	goto_if_lt Route111_EventScript_CheckSetSandstorm_2
# 170 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm_1:
# 171 "data/maps/Route111/scripts.pory"
# 92 "data/maps/Route111/scripts.pory"
# 172 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_1, 107
# 173 "data/maps/Route111/scripts.pory"
	goto_if_gt Route111_EventScript_CheckSetSandstorm_5
# 174 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm_4:
# 175 "data/maps/Route111/scripts.pory"
# 95 "data/maps/Route111/scripts.pory"
# 176 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_1, 72
# 177 "data/maps/Route111/scripts.pory"
	goto_if_gt Route111_EventScript_CheckSetSandstorm_8
# 178 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm_7:
# 179 "data/maps/Route111/scripts.pory"
# 98 "data/maps/Route111/scripts.pory"
# 180 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_0, 2000
# 181 "data/maps/Route111/scripts.pory"
	goto_if_gt Route111_EventScript_CheckSetSandstorm_11
# 182 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm_10:
# 183 "data/maps/Route111/scripts.pory"
# 101 "data/maps/Route111/scripts.pory"
# 184 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_0, 8
# 185 "data/maps/Route111/scripts.pory"
	goto_if_lt Route111_EventScript_CheckSetSandstorm_13
# 186 "data/maps/Route111/scripts.pory"
	return
# 187 "data/maps/Route111/scripts.pory"

# 188 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm_2:
# 189 "data/maps/Route111/scripts.pory"
# 90 "data/maps/Route111/scripts.pory"
# 190 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_EndCheckSetSandstorm
# 191 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_CheckSetSandstorm_1
# 192 "data/maps/Route111/scripts.pory"

# 193 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm_5:
# 194 "data/maps/Route111/scripts.pory"
# 93 "data/maps/Route111/scripts.pory"
# 195 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_EndCheckSetSandstorm
# 196 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_CheckSetSandstorm_4
# 197 "data/maps/Route111/scripts.pory"

# 198 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm_8:
# 199 "data/maps/Route111/scripts.pory"
# 96 "data/maps/Route111/scripts.pory"
# 200 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SetSandstorm
# 201 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_CheckSetSandstorm_7
# 202 "data/maps/Route111/scripts.pory"

# 203 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm_11:
# 204 "data/maps/Route111/scripts.pory"
# 99 "data/maps/Route111/scripts.pory"
# 205 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_EndCheckSetSandstorm
# 206 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_CheckSetSandstorm_10
# 207 "data/maps/Route111/scripts.pory"

# 208 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm_13:
# 209 "data/maps/Route111/scripts.pory"
# 102 "data/maps/Route111/scripts.pory"
# 210 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_EndCheckSetSandstorm
# 211 "data/maps/Route111/scripts.pory"
	return
# 212 "data/maps/Route111/scripts.pory"

# 213 "data/maps/Route111/scripts.pory"

# 214 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 215 "data/maps/Route111/scripts.pory"
# 107 "data/maps/Route111/scripts.pory"
# 216 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 217 "data/maps/Route111/scripts.pory"
	return
# 218 "data/maps/Route111/scripts.pory"

# 219 "data/maps/Route111/scripts.pory"

# 220 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 221 "data/maps/Route111/scripts.pory"
	return
# 222 "data/maps/Route111/scripts.pory"

# 223 "data/maps/Route111/scripts.pory"

# 224 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 225 "data/maps/Route111/scripts.pory"
# 115 "data/maps/Route111/scripts.pory"
# 226 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 227 "data/maps/Route111/scripts.pory"
# 116 "data/maps/Route111/scripts.pory"
# 228 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 229 "data/maps/Route111/scripts.pory"
# 117 "data/maps/Route111/scripts.pory"
# 230 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 231 "data/maps/Route111/scripts.pory"
# 118 "data/maps/Route111/scripts.pory"
# 232 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 233 "data/maps/Route111/scripts.pory"
# 119 "data/maps/Route111/scripts.pory"
# 234 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 235 "data/maps/Route111/scripts.pory"
# 120 "data/maps/Route111/scripts.pory"
# 236 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 237 "data/maps/Route111/scripts.pory"
# 121 "data/maps/Route111/scripts.pory"
# 238 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 239 "data/maps/Route111/scripts.pory"
	end
# 240 "data/maps/Route111/scripts.pory"

# 241 "data/maps/Route111/scripts.pory"

# 242 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 243 "data/maps/Route111/scripts.pory"
# 126 "data/maps/Route111/scripts.pory"
# 244 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 245 "data/maps/Route111/scripts.pory"
	return
# 246 "data/maps/Route111/scripts.pory"

# 247 "data/maps/Route111/scripts.pory"

# 248 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 249 "data/maps/Route111/scripts.pory"
# 131 "data/maps/Route111/scripts.pory"
# 250 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 251 "data/maps/Route111/scripts.pory"
	return
# 252 "data/maps/Route111/scripts.pory"

# 253 "data/maps/Route111/scripts.pory"

# 254 "data/maps/Route111/scripts.pory"
# 135 "data/maps/Route111/scripts.pory"
# 255 "data/maps/Route111/scripts.pory"

# 256 "data/maps/Route111/scripts.pory"
# 136 "data/maps/Route111/scripts.pory"
# 257 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 258 "data/maps/Route111/scripts.pory"
# 137 "data/maps/Route111/scripts.pory"
# 259 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 260 "data/maps/Route111/scripts.pory"
# 138 "data/maps/Route111/scripts.pory"
# 261 "data/maps/Route111/scripts.pory"
	.2byte 0
# 262 "data/maps/Route111/scripts.pory"

# 263 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 264 "data/maps/Route111/scripts.pory"
# 143 "data/maps/Route111/scripts.pory"
# 265 "data/maps/Route111/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 266 "data/maps/Route111/scripts.pory"
	end
# 267 "data/maps/Route111/scripts.pory"

# 268 "data/maps/Route111/scripts.pory"

# 269 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 270 "data/maps/Route111/scripts.pory"
# 148 "data/maps/Route111/scripts.pory"
# 271 "data/maps/Route111/scripts.pory"
	lockall
# 272 "data/maps/Route111/scripts.pory"
# 149 "data/maps/Route111/scripts.pory"
# 273 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 274 "data/maps/Route111/scripts.pory"
# 150 "data/maps/Route111/scripts.pory"
# 275 "data/maps/Route111/scripts.pory"
	waitstate
# 276 "data/maps/Route111/scripts.pory"
# 151 "data/maps/Route111/scripts.pory"
# 277 "data/maps/Route111/scripts.pory"
	delay 24
# 278 "data/maps/Route111/scripts.pory"
# 152 "data/maps/Route111/scripts.pory"
# 279 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 280 "data/maps/Route111/scripts.pory"
# 153 "data/maps/Route111/scripts.pory"
# 281 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 282 "data/maps/Route111/scripts.pory"
# 154 "data/maps/Route111/scripts.pory"
# 283 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 284 "data/maps/Route111/scripts.pory"
# 155 "data/maps/Route111/scripts.pory"
# 285 "data/maps/Route111/scripts.pory"
	waitstate
# 286 "data/maps/Route111/scripts.pory"
# 156 "data/maps/Route111/scripts.pory"
# 287 "data/maps/Route111/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 288 "data/maps/Route111/scripts.pory"
# 157 "data/maps/Route111/scripts.pory"
# 289 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 290 "data/maps/Route111/scripts.pory"
# 158 "data/maps/Route111/scripts.pory"
# 291 "data/maps/Route111/scripts.pory"
	delay 16
# 292 "data/maps/Route111/scripts.pory"
# 159 "data/maps/Route111/scripts.pory"
# 293 "data/maps/Route111/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 294 "data/maps/Route111/scripts.pory"
# 160 "data/maps/Route111/scripts.pory"
# 295 "data/maps/Route111/scripts.pory"
	delay 16
# 296 "data/maps/Route111/scripts.pory"
# 161 "data/maps/Route111/scripts.pory"
# 297 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 298 "data/maps/Route111/scripts.pory"
# 162 "data/maps/Route111/scripts.pory"
# 299 "data/maps/Route111/scripts.pory"
	waitstate
# 300 "data/maps/Route111/scripts.pory"
# 163 "data/maps/Route111/scripts.pory"
# 301 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 302 "data/maps/Route111/scripts.pory"
# 164 "data/maps/Route111/scripts.pory"
# 303 "data/maps/Route111/scripts.pory"
	waitstate
# 304 "data/maps/Route111/scripts.pory"
# 165 "data/maps/Route111/scripts.pory"
# 305 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 306 "data/maps/Route111/scripts.pory"
# 166 "data/maps/Route111/scripts.pory"
# 307 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 308 "data/maps/Route111/scripts.pory"
# 167 "data/maps/Route111/scripts.pory"
# 309 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_MirageTowerDisappear_2
# 310 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear_1:
# 311 "data/maps/Route111/scripts.pory"
# 170 "data/maps/Route111/scripts.pory"
# 312 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 313 "data/maps/Route111/scripts.pory"
# 171 "data/maps/Route111/scripts.pory"
# 314 "data/maps/Route111/scripts.pory"
	releaseall
# 315 "data/maps/Route111/scripts.pory"
	end
# 316 "data/maps/Route111/scripts.pory"

# 317 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear_2:
# 318 "data/maps/Route111/scripts.pory"
# 168 "data/maps/Route111/scripts.pory"
# 319 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_RootFossilDisappeared
# 320 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_MirageTowerDisappear_1
# 321 "data/maps/Route111/scripts.pory"

# 322 "data/maps/Route111/scripts.pory"

# 323 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 324 "data/maps/Route111/scripts.pory"
# 176 "data/maps/Route111/scripts.pory"
# 325 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 326 "data/maps/Route111/scripts.pory"
# 177 "data/maps/Route111/scripts.pory"
# 327 "data/maps/Route111/scripts.pory"
	releaseall
# 328 "data/maps/Route111/scripts.pory"
	end
# 329 "data/maps/Route111/scripts.pory"

# 330 "data/maps/Route111/scripts.pory"

# 331 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 332 "data/maps/Route111/scripts.pory"
# 182 "data/maps/Route111/scripts.pory"
# 333 "data/maps/Route111/scripts.pory"
	lock_anim
# 334 "data/maps/Route111/scripts.pory"
# 183 "data/maps/Route111/scripts.pory"
# 335 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 336 "data/maps/Route111/scripts.pory"
# 184 "data/maps/Route111/scripts.pory"
# 337 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 338 "data/maps/Route111/scripts.pory"
# 185 "data/maps/Route111/scripts.pory"
# 339 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 340 "data/maps/Route111/scripts.pory"
# 186 "data/maps/Route111/scripts.pory"
# 341 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 342 "data/maps/Route111/scripts.pory"
# 187 "data/maps/Route111/scripts.pory"
# 343 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 344 "data/maps/Route111/scripts.pory"
# 188 "data/maps/Route111/scripts.pory"
# 345 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 346 "data/maps/Route111/scripts.pory"
# 189 "data/maps/Route111/scripts.pory"
# 347 "data/maps/Route111/scripts.pory"
	step_end
# 348 "data/maps/Route111/scripts.pory"
	return
# 349 "data/maps/Route111/scripts.pory"

# 350 "data/maps/Route111/scripts.pory"

# 351 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 352 "data/maps/Route111/scripts.pory"
# 193 "data/maps/Route111/scripts.pory"
# 353 "data/maps/Route111/scripts.pory"
	lock
# 354 "data/maps/Route111/scripts.pory"
# 194 "data/maps/Route111/scripts.pory"
# 355 "data/maps/Route111/scripts.pory"
	faceplayer
# 356 "data/maps/Route111/scripts.pory"
# 195 "data/maps/Route111/scripts.pory"
# 357 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 358 "data/maps/Route111/scripts.pory"
# 196 "data/maps/Route111/scripts.pory"
# 359 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_Girl_2
# 360 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl_1:
# 361 "data/maps/Route111/scripts.pory"
# 199 "data/maps/Route111/scripts.pory"
# 362 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 363 "data/maps/Route111/scripts.pory"
# 200 "data/maps/Route111/scripts.pory"
# 364 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 365 "data/maps/Route111/scripts.pory"
# 201 "data/maps/Route111/scripts.pory"
# 366 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
# 367 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_Girl_5
# 368 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl_4:
# 369 "data/maps/Route111/scripts.pory"
# 204 "data/maps/Route111/scripts.pory"
# 370 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 371 "data/maps/Route111/scripts.pory"
# 205 "data/maps/Route111/scripts.pory"
# 372 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 373 "data/maps/Route111/scripts.pory"
# 206 "data/maps/Route111/scripts.pory"
# 374 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 375 "data/maps/Route111/scripts.pory"
# 207 "data/maps/Route111/scripts.pory"
# 376 "data/maps/Route111/scripts.pory"
	release
# 377 "data/maps/Route111/scripts.pory"
	end
# 378 "data/maps/Route111/scripts.pory"

# 379 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl_2:
# 380 "data/maps/Route111/scripts.pory"
# 197 "data/maps/Route111/scripts.pory"
# 381 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ReceivedBerry
# 382 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Girl_1
# 383 "data/maps/Route111/scripts.pory"

# 384 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl_5:
# 385 "data/maps/Route111/scripts.pory"
# 202 "data/maps/Route111/scripts.pory"
# 386 "data/maps/Route111/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 387 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Girl_4
# 388 "data/maps/Route111/scripts.pory"

# 389 "data/maps/Route111/scripts.pory"

# 390 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 391 "data/maps/Route111/scripts.pory"
# 212 "data/maps/Route111/scripts.pory"
# 392 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 393 "data/maps/Route111/scripts.pory"
# 213 "data/maps/Route111/scripts.pory"
# 394 "data/maps/Route111/scripts.pory"
	release
# 395 "data/maps/Route111/scripts.pory"
	end
# 396 "data/maps/Route111/scripts.pory"

# 397 "data/maps/Route111/scripts.pory"

# 398 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 399 "data/maps/Route111/scripts.pory"
# 218 "data/maps/Route111/scripts.pory"
# 400 "data/maps/Route111/scripts.pory"
	lockall
# 401 "data/maps/Route111/scripts.pory"
# 219 "data/maps/Route111/scripts.pory"
# 402 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 403 "data/maps/Route111/scripts.pory"
# 220 "data/maps/Route111/scripts.pory"
# 404 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 405 "data/maps/Route111/scripts.pory"
	end
# 406 "data/maps/Route111/scripts.pory"

# 407 "data/maps/Route111/scripts.pory"

# 408 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 409 "data/maps/Route111/scripts.pory"
# 225 "data/maps/Route111/scripts.pory"
# 410 "data/maps/Route111/scripts.pory"
	lockall
# 411 "data/maps/Route111/scripts.pory"
# 226 "data/maps/Route111/scripts.pory"
# 412 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 413 "data/maps/Route111/scripts.pory"
# 227 "data/maps/Route111/scripts.pory"
# 414 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 415 "data/maps/Route111/scripts.pory"
	end
# 416 "data/maps/Route111/scripts.pory"

# 417 "data/maps/Route111/scripts.pory"

# 418 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 419 "data/maps/Route111/scripts.pory"
# 232 "data/maps/Route111/scripts.pory"
# 420 "data/maps/Route111/scripts.pory"
	lockall
# 421 "data/maps/Route111/scripts.pory"
# 233 "data/maps/Route111/scripts.pory"
# 422 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 423 "data/maps/Route111/scripts.pory"
# 234 "data/maps/Route111/scripts.pory"
# 424 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 425 "data/maps/Route111/scripts.pory"
	end
# 426 "data/maps/Route111/scripts.pory"

# 427 "data/maps/Route111/scripts.pory"

# 428 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 429 "data/maps/Route111/scripts.pory"
# 239 "data/maps/Route111/scripts.pory"
# 430 "data/maps/Route111/scripts.pory"
	lockall
# 431 "data/maps/Route111/scripts.pory"
# 240 "data/maps/Route111/scripts.pory"
# 432 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 433 "data/maps/Route111/scripts.pory"
# 241 "data/maps/Route111/scripts.pory"
# 434 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 435 "data/maps/Route111/scripts.pory"
	end
# 436 "data/maps/Route111/scripts.pory"

# 437 "data/maps/Route111/scripts.pory"

# 438 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 439 "data/maps/Route111/scripts.pory"
# 246 "data/maps/Route111/scripts.pory"
# 440 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 441 "data/maps/Route111/scripts.pory"
# 247 "data/maps/Route111/scripts.pory"
# 442 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
# 443 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_ViciousSandstormTrigger_2
# 444 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger_1:
# 445 "data/maps/Route111/scripts.pory"
# 250 "data/maps/Route111/scripts.pory"
# 446 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 447 "data/maps/Route111/scripts.pory"
# 251 "data/maps/Route111/scripts.pory"
# 448 "data/maps/Route111/scripts.pory"
	releaseall
# 449 "data/maps/Route111/scripts.pory"
	end
# 450 "data/maps/Route111/scripts.pory"

# 451 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger_2:
# 452 "data/maps/Route111/scripts.pory"
# 248 "data/maps/Route111/scripts.pory"
# 453 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_PreventRouteAccess
# 454 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger_1
# 455 "data/maps/Route111/scripts.pory"

# 456 "data/maps/Route111/scripts.pory"

# 457 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 458 "data/maps/Route111/scripts.pory"
# 256 "data/maps/Route111/scripts.pory"
# 459 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 460 "data/maps/Route111/scripts.pory"
# 257 "data/maps/Route111/scripts.pory"
# 461 "data/maps/Route111/scripts.pory"
	closemessage
# 462 "data/maps/Route111/scripts.pory"
# 258 "data/maps/Route111/scripts.pory"
# 463 "data/maps/Route111/scripts.pory"
	compare VAR_0x8004, 0
# 464 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_PreventRouteAccess_2
# 465 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess_1:
# 466 "data/maps/Route111/scripts.pory"
# 261 "data/maps/Route111/scripts.pory"
# 467 "data/maps/Route111/scripts.pory"
	compare VAR_0x8004, 1
# 468 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_PreventRouteAccess_5
# 469 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess_4:
# 470 "data/maps/Route111/scripts.pory"
# 264 "data/maps/Route111/scripts.pory"
# 471 "data/maps/Route111/scripts.pory"
	compare VAR_0x8004, 2
# 472 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_PreventRouteAccess_8
# 473 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess_7:
# 474 "data/maps/Route111/scripts.pory"
# 267 "data/maps/Route111/scripts.pory"
# 475 "data/maps/Route111/scripts.pory"
	compare VAR_0x8004, 3
# 476 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_PreventRouteAccess_11
# 477 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess_10:
# 478 "data/maps/Route111/scripts.pory"
# 270 "data/maps/Route111/scripts.pory"
# 479 "data/maps/Route111/scripts.pory"
	releaseall
# 480 "data/maps/Route111/scripts.pory"
	end
# 481 "data/maps/Route111/scripts.pory"

# 482 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess_2:
# 483 "data/maps/Route111/scripts.pory"
# 259 "data/maps/Route111/scripts.pory"
# 484 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_PushUpFromRoute
# 485 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_PreventRouteAccess_1
# 486 "data/maps/Route111/scripts.pory"

# 487 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess_5:
# 488 "data/maps/Route111/scripts.pory"
# 262 "data/maps/Route111/scripts.pory"
# 489 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_PushDownFromRoute
# 490 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_PreventRouteAccess_4
# 491 "data/maps/Route111/scripts.pory"

# 492 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess_8:
# 493 "data/maps/Route111/scripts.pory"
# 265 "data/maps/Route111/scripts.pory"
# 494 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_PushLeftFromRoute
# 495 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_PreventRouteAccess_7
# 496 "data/maps/Route111/scripts.pory"

# 497 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess_11:
# 498 "data/maps/Route111/scripts.pory"
# 268 "data/maps/Route111/scripts.pory"
# 499 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_PushRightFromRoute
# 500 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_PreventRouteAccess_10
# 501 "data/maps/Route111/scripts.pory"

# 502 "data/maps/Route111/scripts.pory"

# 503 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 504 "data/maps/Route111/scripts.pory"
# 275 "data/maps/Route111/scripts.pory"
# 505 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushUpFromRoute
# 506 "data/maps/Route111/scripts.pory"
# 276 "data/maps/Route111/scripts.pory"
# 507 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 508 "data/maps/Route111/scripts.pory"
	return
# 509 "data/maps/Route111/scripts.pory"

# 510 "data/maps/Route111/scripts.pory"

# 511 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 512 "data/maps/Route111/scripts.pory"
# 281 "data/maps/Route111/scripts.pory"
# 513 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushDownFromRoute
# 514 "data/maps/Route111/scripts.pory"
# 282 "data/maps/Route111/scripts.pory"
# 515 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 516 "data/maps/Route111/scripts.pory"
	return
# 517 "data/maps/Route111/scripts.pory"

# 518 "data/maps/Route111/scripts.pory"

# 519 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 520 "data/maps/Route111/scripts.pory"
# 287 "data/maps/Route111/scripts.pory"
# 521 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushLeftFromRoute
# 522 "data/maps/Route111/scripts.pory"
# 288 "data/maps/Route111/scripts.pory"
# 523 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 524 "data/maps/Route111/scripts.pory"
	return
# 525 "data/maps/Route111/scripts.pory"

# 526 "data/maps/Route111/scripts.pory"

# 527 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 528 "data/maps/Route111/scripts.pory"
# 293 "data/maps/Route111/scripts.pory"
# 529 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushRightFromRoute
# 530 "data/maps/Route111/scripts.pory"
# 294 "data/maps/Route111/scripts.pory"
# 531 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 532 "data/maps/Route111/scripts.pory"
	return
# 533 "data/maps/Route111/scripts.pory"

# 534 "data/maps/Route111/scripts.pory"

# 535 "data/maps/Route111/scripts.pory"
# 298 "data/maps/Route111/scripts.pory"
# 536 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 537 "data/maps/Route111/scripts.pory"
# 299 "data/maps/Route111/scripts.pory"
# 538 "data/maps/Route111/scripts.pory"
	walk_up
# 539 "data/maps/Route111/scripts.pory"
# 300 "data/maps/Route111/scripts.pory"
# 540 "data/maps/Route111/scripts.pory"
	step_end
# 541 "data/maps/Route111/scripts.pory"

# 542 "data/maps/Route111/scripts.pory"
# 303 "data/maps/Route111/scripts.pory"
# 543 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 544 "data/maps/Route111/scripts.pory"
# 304 "data/maps/Route111/scripts.pory"
# 545 "data/maps/Route111/scripts.pory"
	walk_down
# 546 "data/maps/Route111/scripts.pory"
# 305 "data/maps/Route111/scripts.pory"
# 547 "data/maps/Route111/scripts.pory"
	step_end
# 548 "data/maps/Route111/scripts.pory"

# 549 "data/maps/Route111/scripts.pory"
# 308 "data/maps/Route111/scripts.pory"
# 550 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 551 "data/maps/Route111/scripts.pory"
# 309 "data/maps/Route111/scripts.pory"
# 552 "data/maps/Route111/scripts.pory"
	walk_left
# 553 "data/maps/Route111/scripts.pory"
# 310 "data/maps/Route111/scripts.pory"
# 554 "data/maps/Route111/scripts.pory"
	step_end
# 555 "data/maps/Route111/scripts.pory"

# 556 "data/maps/Route111/scripts.pory"
# 313 "data/maps/Route111/scripts.pory"
# 557 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 558 "data/maps/Route111/scripts.pory"
# 314 "data/maps/Route111/scripts.pory"
# 559 "data/maps/Route111/scripts.pory"
	walk_right
# 560 "data/maps/Route111/scripts.pory"
# 315 "data/maps/Route111/scripts.pory"
# 561 "data/maps/Route111/scripts.pory"
	step_end
# 562 "data/maps/Route111/scripts.pory"

# 563 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 564 "data/maps/Route111/scripts.pory"
# 319 "data/maps/Route111/scripts.pory"
# 565 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 566 "data/maps/Route111/scripts.pory"
# 320 "data/maps/Route111/scripts.pory"
# 567 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 568 "data/maps/Route111/scripts.pory"
# 321 "data/maps/Route111/scripts.pory"
# 569 "data/maps/Route111/scripts.pory"
	doweather
# 570 "data/maps/Route111/scripts.pory"
# 322 "data/maps/Route111/scripts.pory"
# 571 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 572 "data/maps/Route111/scripts.pory"
	end
# 573 "data/maps/Route111/scripts.pory"

# 574 "data/maps/Route111/scripts.pory"

# 575 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 576 "data/maps/Route111/scripts.pory"
# 327 "data/maps/Route111/scripts.pory"
# 577 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 578 "data/maps/Route111/scripts.pory"
# 328 "data/maps/Route111/scripts.pory"
# 579 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 580 "data/maps/Route111/scripts.pory"
# 329 "data/maps/Route111/scripts.pory"
# 581 "data/maps/Route111/scripts.pory"
	doweather
# 582 "data/maps/Route111/scripts.pory"
	end
# 583 "data/maps/Route111/scripts.pory"

# 584 "data/maps/Route111/scripts.pory"

# 585 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 586 "data/maps/Route111/scripts.pory"
# 334 "data/maps/Route111/scripts.pory"
# 587 "data/maps/Route111/scripts.pory"
	lock
# 588 "data/maps/Route111/scripts.pory"
# 335 "data/maps/Route111/scripts.pory"
# 589 "data/maps/Route111/scripts.pory"
	faceplayer
# 590 "data/maps/Route111/scripts.pory"
# 336 "data/maps/Route111/scripts.pory"
# 591 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 592 "data/maps/Route111/scripts.pory"
# 337 "data/maps/Route111/scripts.pory"
# 593 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 594 "data/maps/Route111/scripts.pory"
# 338 "data/maps/Route111/scripts.pory"
# 595 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, YES
# 596 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_Victor_2
# 597 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor_1:
# 598 "data/maps/Route111/scripts.pory"
# 341 "data/maps/Route111/scripts.pory"
# 599 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 600 "data/maps/Route111/scripts.pory"
# 342 "data/maps/Route111/scripts.pory"
# 601 "data/maps/Route111/scripts.pory"
	release
# 602 "data/maps/Route111/scripts.pory"
	end
# 603 "data/maps/Route111/scripts.pory"

# 604 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor_2:
# 605 "data/maps/Route111/scripts.pory"
# 339 "data/maps/Route111/scripts.pory"
# 606 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_BattleWinstrates
# 607 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Victor_1
# 608 "data/maps/Route111/scripts.pory"

# 609 "data/maps/Route111/scripts.pory"

# 610 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 611 "data/maps/Route111/scripts.pory"
# 347 "data/maps/Route111/scripts.pory"
# 612 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 613 "data/maps/Route111/scripts.pory"
# 348 "data/maps/Route111/scripts.pory"
# 614 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 615 "data/maps/Route111/scripts.pory"
# 349 "data/maps/Route111/scripts.pory"
# 616 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 617 "data/maps/Route111/scripts.pory"
# 350 "data/maps/Route111/scripts.pory"
# 618 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 619 "data/maps/Route111/scripts.pory"
# 351 "data/maps/Route111/scripts.pory"
# 620 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 621 "data/maps/Route111/scripts.pory"
# 352 "data/maps/Route111/scripts.pory"
# 622 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 623 "data/maps/Route111/scripts.pory"
# 353 "data/maps/Route111/scripts.pory"
# 624 "data/maps/Route111/scripts.pory"
	closemessage
# 625 "data/maps/Route111/scripts.pory"
# 354 "data/maps/Route111/scripts.pory"
# 626 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Route111_Movement_WinstrateEnterHouse
# 627 "data/maps/Route111/scripts.pory"
# 355 "data/maps/Route111/scripts.pory"
# 628 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 629 "data/maps/Route111/scripts.pory"
# 356 "data/maps/Route111/scripts.pory"
# 630 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTOR
# 631 "data/maps/Route111/scripts.pory"
# 357 "data/maps/Route111/scripts.pory"
# 632 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 633 "data/maps/Route111/scripts.pory"
# 358 "data/maps/Route111/scripts.pory"
# 634 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 635 "data/maps/Route111/scripts.pory"
# 359 "data/maps/Route111/scripts.pory"
# 636 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 637 "data/maps/Route111/scripts.pory"
# 360 "data/maps/Route111/scripts.pory"
# 638 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 639 "data/maps/Route111/scripts.pory"
# 361 "data/maps/Route111/scripts.pory"
# 640 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICTORIA
# 641 "data/maps/Route111/scripts.pory"
# 362 "data/maps/Route111/scripts.pory"
# 642 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateExitHouse
# 643 "data/maps/Route111/scripts.pory"
# 363 "data/maps/Route111/scripts.pory"
# 644 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 645 "data/maps/Route111/scripts.pory"
# 364 "data/maps/Route111/scripts.pory"
# 646 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 647 "data/maps/Route111/scripts.pory"
# 365 "data/maps/Route111/scripts.pory"
# 648 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 649 "data/maps/Route111/scripts.pory"
# 366 "data/maps/Route111/scripts.pory"
# 650 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 651 "data/maps/Route111/scripts.pory"
# 367 "data/maps/Route111/scripts.pory"
# 652 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 653 "data/maps/Route111/scripts.pory"
# 368 "data/maps/Route111/scripts.pory"
# 654 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 655 "data/maps/Route111/scripts.pory"
# 369 "data/maps/Route111/scripts.pory"
# 656 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 657 "data/maps/Route111/scripts.pory"
# 370 "data/maps/Route111/scripts.pory"
# 658 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 659 "data/maps/Route111/scripts.pory"
# 371 "data/maps/Route111/scripts.pory"
# 660 "data/maps/Route111/scripts.pory"
	closemessage
# 661 "data/maps/Route111/scripts.pory"
# 372 "data/maps/Route111/scripts.pory"
# 662 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 663 "data/maps/Route111/scripts.pory"
# 373 "data/maps/Route111/scripts.pory"
# 664 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 665 "data/maps/Route111/scripts.pory"
# 374 "data/maps/Route111/scripts.pory"
# 666 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTORIA
# 667 "data/maps/Route111/scripts.pory"
# 375 "data/maps/Route111/scripts.pory"
# 668 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 669 "data/maps/Route111/scripts.pory"
# 376 "data/maps/Route111/scripts.pory"
# 670 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 671 "data/maps/Route111/scripts.pory"
# 377 "data/maps/Route111/scripts.pory"
# 672 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 673 "data/maps/Route111/scripts.pory"
# 378 "data/maps/Route111/scripts.pory"
# 674 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 675 "data/maps/Route111/scripts.pory"
# 379 "data/maps/Route111/scripts.pory"
# 676 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VIVI
# 677 "data/maps/Route111/scripts.pory"
# 380 "data/maps/Route111/scripts.pory"
# 678 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateExitHouse
# 679 "data/maps/Route111/scripts.pory"
# 381 "data/maps/Route111/scripts.pory"
# 680 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 681 "data/maps/Route111/scripts.pory"
# 382 "data/maps/Route111/scripts.pory"
# 682 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 683 "data/maps/Route111/scripts.pory"
# 383 "data/maps/Route111/scripts.pory"
# 684 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 685 "data/maps/Route111/scripts.pory"
# 384 "data/maps/Route111/scripts.pory"
# 686 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 687 "data/maps/Route111/scripts.pory"
# 385 "data/maps/Route111/scripts.pory"
# 688 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_WalkInPlaceFasterUp
# 689 "data/maps/Route111/scripts.pory"
# 386 "data/maps/Route111/scripts.pory"
# 690 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 691 "data/maps/Route111/scripts.pory"
# 387 "data/maps/Route111/scripts.pory"
# 692 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 693 "data/maps/Route111/scripts.pory"
# 388 "data/maps/Route111/scripts.pory"
# 694 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 695 "data/maps/Route111/scripts.pory"
# 389 "data/maps/Route111/scripts.pory"
# 696 "data/maps/Route111/scripts.pory"
	closemessage
# 697 "data/maps/Route111/scripts.pory"
# 390 "data/maps/Route111/scripts.pory"
# 698 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateEnterHouse
# 699 "data/maps/Route111/scripts.pory"
# 391 "data/maps/Route111/scripts.pory"
# 700 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 701 "data/maps/Route111/scripts.pory"
# 392 "data/maps/Route111/scripts.pory"
# 702 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VIVI
# 703 "data/maps/Route111/scripts.pory"
# 393 "data/maps/Route111/scripts.pory"
# 704 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 705 "data/maps/Route111/scripts.pory"
# 394 "data/maps/Route111/scripts.pory"
# 706 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 707 "data/maps/Route111/scripts.pory"
# 395 "data/maps/Route111/scripts.pory"
# 708 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 709 "data/maps/Route111/scripts.pory"
# 396 "data/maps/Route111/scripts.pory"
# 710 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 711 "data/maps/Route111/scripts.pory"
# 397 "data/maps/Route111/scripts.pory"
# 712 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICKY
# 713 "data/maps/Route111/scripts.pory"
# 398 "data/maps/Route111/scripts.pory"
# 714 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateExitHouse
# 715 "data/maps/Route111/scripts.pory"
# 399 "data/maps/Route111/scripts.pory"
# 716 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 717 "data/maps/Route111/scripts.pory"
# 400 "data/maps/Route111/scripts.pory"
# 718 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 719 "data/maps/Route111/scripts.pory"
# 401 "data/maps/Route111/scripts.pory"
# 720 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 721 "data/maps/Route111/scripts.pory"
# 402 "data/maps/Route111/scripts.pory"
# 722 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 723 "data/maps/Route111/scripts.pory"
# 403 "data/maps/Route111/scripts.pory"
# 724 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 725 "data/maps/Route111/scripts.pory"
# 404 "data/maps/Route111/scripts.pory"
# 726 "data/maps/Route111/scripts.pory"
	closemessage
# 727 "data/maps/Route111/scripts.pory"
# 405 "data/maps/Route111/scripts.pory"
# 728 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_WalkInPlaceFasterUp
# 729 "data/maps/Route111/scripts.pory"
# 406 "data/maps/Route111/scripts.pory"
# 730 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 731 "data/maps/Route111/scripts.pory"
# 407 "data/maps/Route111/scripts.pory"
# 732 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 733 "data/maps/Route111/scripts.pory"
# 408 "data/maps/Route111/scripts.pory"
# 734 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateEnterHouse
# 735 "data/maps/Route111/scripts.pory"
# 409 "data/maps/Route111/scripts.pory"
# 736 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 737 "data/maps/Route111/scripts.pory"
# 410 "data/maps/Route111/scripts.pory"
# 738 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICKY
# 739 "data/maps/Route111/scripts.pory"
# 411 "data/maps/Route111/scripts.pory"
# 740 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 741 "data/maps/Route111/scripts.pory"
# 412 "data/maps/Route111/scripts.pory"
# 742 "data/maps/Route111/scripts.pory"
	release
# 743 "data/maps/Route111/scripts.pory"
	end
# 744 "data/maps/Route111/scripts.pory"

# 745 "data/maps/Route111/scripts.pory"

# 746 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 747 "data/maps/Route111/scripts.pory"
# 417 "data/maps/Route111/scripts.pory"
# 748 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 749 "data/maps/Route111/scripts.pory"
# 418 "data/maps/Route111/scripts.pory"
# 750 "data/maps/Route111/scripts.pory"
	waitdooranim
# 751 "data/maps/Route111/scripts.pory"
	return
# 752 "data/maps/Route111/scripts.pory"

# 753 "data/maps/Route111/scripts.pory"

# 754 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 755 "data/maps/Route111/scripts.pory"
# 423 "data/maps/Route111/scripts.pory"
# 756 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 757 "data/maps/Route111/scripts.pory"
# 424 "data/maps/Route111/scripts.pory"
# 758 "data/maps/Route111/scripts.pory"
	waitdooranim
# 759 "data/maps/Route111/scripts.pory"
	return
# 760 "data/maps/Route111/scripts.pory"

# 761 "data/maps/Route111/scripts.pory"

# 762 "data/maps/Route111/scripts.pory"
# 428 "data/maps/Route111/scripts.pory"
# 763 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 764 "data/maps/Route111/scripts.pory"
# 429 "data/maps/Route111/scripts.pory"
# 765 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 766 "data/maps/Route111/scripts.pory"
# 430 "data/maps/Route111/scripts.pory"
# 767 "data/maps/Route111/scripts.pory"
	walk_up
# 768 "data/maps/Route111/scripts.pory"
# 431 "data/maps/Route111/scripts.pory"
# 769 "data/maps/Route111/scripts.pory"
	step_end
# 770 "data/maps/Route111/scripts.pory"

# 771 "data/maps/Route111/scripts.pory"
# 434 "data/maps/Route111/scripts.pory"
# 772 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 773 "data/maps/Route111/scripts.pory"
# 435 "data/maps/Route111/scripts.pory"
# 774 "data/maps/Route111/scripts.pory"
	walk_down
# 775 "data/maps/Route111/scripts.pory"
# 436 "data/maps/Route111/scripts.pory"
# 776 "data/maps/Route111/scripts.pory"
	step_end
# 777 "data/maps/Route111/scripts.pory"

# 778 "data/maps/Route111/scripts.pory"
# 439 "data/maps/Route111/scripts.pory"
# 779 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 780 "data/maps/Route111/scripts.pory"
# 440 "data/maps/Route111/scripts.pory"
# 781 "data/maps/Route111/scripts.pory"
	delay_16
# 782 "data/maps/Route111/scripts.pory"
# 441 "data/maps/Route111/scripts.pory"
# 783 "data/maps/Route111/scripts.pory"
	delay_16
# 784 "data/maps/Route111/scripts.pory"
# 442 "data/maps/Route111/scripts.pory"
# 785 "data/maps/Route111/scripts.pory"
	delay_16
# 786 "data/maps/Route111/scripts.pory"
# 443 "data/maps/Route111/scripts.pory"
# 787 "data/maps/Route111/scripts.pory"
	step_end
# 788 "data/maps/Route111/scripts.pory"

# 789 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 790 "data/maps/Route111/scripts.pory"
# 447 "data/maps/Route111/scripts.pory"
# 791 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 792 "data/maps/Route111/scripts.pory"
	end
# 793 "data/maps/Route111/scripts.pory"

# 794 "data/maps/Route111/scripts.pory"

# 795 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 796 "data/maps/Route111/scripts.pory"
# 452 "data/maps/Route111/scripts.pory"
# 797 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 798 "data/maps/Route111/scripts.pory"
	end
# 799 "data/maps/Route111/scripts.pory"

# 800 "data/maps/Route111/scripts.pory"

# 801 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 802 "data/maps/Route111/scripts.pory"
# 457 "data/maps/Route111/scripts.pory"
# 803 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 804 "data/maps/Route111/scripts.pory"
	end
# 805 "data/maps/Route111/scripts.pory"

# 806 "data/maps/Route111/scripts.pory"

# 807 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 808 "data/maps/Route111/scripts.pory"
# 462 "data/maps/Route111/scripts.pory"
# 809 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 810 "data/maps/Route111/scripts.pory"
	end
# 811 "data/maps/Route111/scripts.pory"

# 812 "data/maps/Route111/scripts.pory"

# 813 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 814 "data/maps/Route111/scripts.pory"
# 467 "data/maps/Route111/scripts.pory"
# 815 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 816 "data/maps/Route111/scripts.pory"
	end
# 817 "data/maps/Route111/scripts.pory"

# 818 "data/maps/Route111/scripts.pory"

# 819 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 820 "data/maps/Route111/scripts.pory"
# 472 "data/maps/Route111/scripts.pory"
# 821 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 822 "data/maps/Route111/scripts.pory"
	end
# 823 "data/maps/Route111/scripts.pory"

# 824 "data/maps/Route111/scripts.pory"

# 825 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 826 "data/maps/Route111/scripts.pory"
# 477 "data/maps/Route111/scripts.pory"
# 827 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 828 "data/maps/Route111/scripts.pory"
	end
# 829 "data/maps/Route111/scripts.pory"

# 830 "data/maps/Route111/scripts.pory"

# 831 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 832 "data/maps/Route111/scripts.pory"
# 482 "data/maps/Route111/scripts.pory"
# 833 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 834 "data/maps/Route111/scripts.pory"
	end
# 835 "data/maps/Route111/scripts.pory"

# 836 "data/maps/Route111/scripts.pory"

# 837 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 838 "data/maps/Route111/scripts.pory"
# 487 "data/maps/Route111/scripts.pory"
# 839 "data/maps/Route111/scripts.pory"
	lock
# 840 "data/maps/Route111/scripts.pory"
# 488 "data/maps/Route111/scripts.pory"
# 841 "data/maps/Route111/scripts.pory"
	faceplayer
# 842 "data/maps/Route111/scripts.pory"
# 489 "data/maps/Route111/scripts.pory"
# 843 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 3
# 844 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_Hiker_2
# 845 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker_1:
# 846 "data/maps/Route111/scripts.pory"
# 492 "data/maps/Route111/scripts.pory"
# 847 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 2
# 848 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_Hiker_5
# 849 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker_4:
# 850 "data/maps/Route111/scripts.pory"
# 495 "data/maps/Route111/scripts.pory"
# 851 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_Hiker_8
# 852 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker_7:
# 853 "data/maps/Route111/scripts.pory"
# 498 "data/maps/Route111/scripts.pory"
# 854 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 855 "data/maps/Route111/scripts.pory"
# 499 "data/maps/Route111/scripts.pory"
# 856 "data/maps/Route111/scripts.pory"
	release
# 857 "data/maps/Route111/scripts.pory"
	end
# 858 "data/maps/Route111/scripts.pory"

# 859 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker_2:
# 860 "data/maps/Route111/scripts.pory"
# 490 "data/maps/Route111/scripts.pory"
# 861 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_HikerMirageTowerGone
# 862 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Hiker_1
# 863 "data/maps/Route111/scripts.pory"

# 864 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker_5:
# 865 "data/maps/Route111/scripts.pory"
# 493 "data/maps/Route111/scripts.pory"
# 866 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_HikerMirageTowerDisintegrated
# 867 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Hiker_4
# 868 "data/maps/Route111/scripts.pory"

# 869 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker_8:
# 870 "data/maps/Route111/scripts.pory"
# 496 "data/maps/Route111/scripts.pory"
# 871 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_HikerMirageTowerVisible
# 872 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Hiker_7
# 873 "data/maps/Route111/scripts.pory"

# 874 "data/maps/Route111/scripts.pory"

# 875 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 876 "data/maps/Route111/scripts.pory"
# 504 "data/maps/Route111/scripts.pory"
# 877 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 878 "data/maps/Route111/scripts.pory"
# 505 "data/maps/Route111/scripts.pory"
# 879 "data/maps/Route111/scripts.pory"
	release
# 880 "data/maps/Route111/scripts.pory"
	end
# 881 "data/maps/Route111/scripts.pory"

# 882 "data/maps/Route111/scripts.pory"

# 883 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 884 "data/maps/Route111/scripts.pory"
# 510 "data/maps/Route111/scripts.pory"
# 885 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 886 "data/maps/Route111/scripts.pory"
# 511 "data/maps/Route111/scripts.pory"
# 887 "data/maps/Route111/scripts.pory"
	release
# 888 "data/maps/Route111/scripts.pory"
	end
# 889 "data/maps/Route111/scripts.pory"

# 890 "data/maps/Route111/scripts.pory"

# 891 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 892 "data/maps/Route111/scripts.pory"
# 516 "data/maps/Route111/scripts.pory"
# 893 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 894 "data/maps/Route111/scripts.pory"
# 517 "data/maps/Route111/scripts.pory"
# 895 "data/maps/Route111/scripts.pory"
	release
# 896 "data/maps/Route111/scripts.pory"
	end
# 897 "data/maps/Route111/scripts.pory"

# 898 "data/maps/Route111/scripts.pory"

# 899 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 900 "data/maps/Route111/scripts.pory"
# 522 "data/maps/Route111/scripts.pory"
# 901 "data/maps/Route111/scripts.pory"
	lockall
# 902 "data/maps/Route111/scripts.pory"
# 523 "data/maps/Route111/scripts.pory"
# 903 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 904 "data/maps/Route111/scripts.pory"
# 524 "data/maps/Route111/scripts.pory"
# 905 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 906 "data/maps/Route111/scripts.pory"
# 525 "data/maps/Route111/scripts.pory"
# 907 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 908 "data/maps/Route111/scripts.pory"
# 526 "data/maps/Route111/scripts.pory"
# 909 "data/maps/Route111/scripts.pory"
	closemessage
# 910 "data/maps/Route111/scripts.pory"
# 527 "data/maps/Route111/scripts.pory"
# 911 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 912 "data/maps/Route111/scripts.pory"
# 528 "data/maps/Route111/scripts.pory"
# 913 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 914 "data/maps/Route111/scripts.pory"
# 529 "data/maps/Route111/scripts.pory"
# 915 "data/maps/Route111/scripts.pory"
	releaseall
# 916 "data/maps/Route111/scripts.pory"
	end
# 917 "data/maps/Route111/scripts.pory"

# 918 "data/maps/Route111/scripts.pory"

# 919 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 920 "data/maps/Route111/scripts.pory"
# 534 "data/maps/Route111/scripts.pory"
# 921 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 922 "data/maps/Route111/scripts.pory"
# 535 "data/maps/Route111/scripts.pory"
# 923 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 924 "data/maps/Route111/scripts.pory"
	end
# 925 "data/maps/Route111/scripts.pory"

# 926 "data/maps/Route111/scripts.pory"

# 927 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 928 "data/maps/Route111/scripts.pory"
# 540 "data/maps/Route111/scripts.pory"
# 929 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 930 "data/maps/Route111/scripts.pory"
# 541 "data/maps/Route111/scripts.pory"
# 931 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 932 "data/maps/Route111/scripts.pory"
	end
# 933 "data/maps/Route111/scripts.pory"

# 934 "data/maps/Route111/scripts.pory"

# 935 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 936 "data/maps/Route111/scripts.pory"
# 546 "data/maps/Route111/scripts.pory"
# 937 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 938 "data/maps/Route111/scripts.pory"
# 547 "data/maps/Route111/scripts.pory"
# 939 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 940 "data/maps/Route111/scripts.pory"
	end
# 941 "data/maps/Route111/scripts.pory"

# 942 "data/maps/Route111/scripts.pory"

# 943 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 944 "data/maps/Route111/scripts.pory"
# 552 "data/maps/Route111/scripts.pory"
# 945 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 946 "data/maps/Route111/scripts.pory"
# 553 "data/maps/Route111/scripts.pory"
# 947 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 948 "data/maps/Route111/scripts.pory"
	end
# 949 "data/maps/Route111/scripts.pory"

# 950 "data/maps/Route111/scripts.pory"

# 951 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 952 "data/maps/Route111/scripts.pory"
# 558 "data/maps/Route111/scripts.pory"
# 953 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 954 "data/maps/Route111/scripts.pory"
# 559 "data/maps/Route111/scripts.pory"
# 955 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 956 "data/maps/Route111/scripts.pory"
# 560 "data/maps/Route111/scripts.pory"
# 957 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
# 958 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_Dusty_2
# 959 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty_1:
# 960 "data/maps/Route111/scripts.pory"
# 563 "data/maps/Route111/scripts.pory"
# 961 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 962 "data/maps/Route111/scripts.pory"
# 564 "data/maps/Route111/scripts.pory"
# 963 "data/maps/Route111/scripts.pory"
	release
# 964 "data/maps/Route111/scripts.pory"
	end
# 965 "data/maps/Route111/scripts.pory"

# 966 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty_2:
# 967 "data/maps/Route111/scripts.pory"
# 561 "data/maps/Route111/scripts.pory"
# 968 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_RematchDusty
# 969 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Dusty_1
# 970 "data/maps/Route111/scripts.pory"

# 971 "data/maps/Route111/scripts.pory"

# 972 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 973 "data/maps/Route111/scripts.pory"
# 569 "data/maps/Route111/scripts.pory"
# 974 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 975 "data/maps/Route111/scripts.pory"
# 570 "data/maps/Route111/scripts.pory"
# 976 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 977 "data/maps/Route111/scripts.pory"
# 571 "data/maps/Route111/scripts.pory"
# 978 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 979 "data/maps/Route111/scripts.pory"
# 572 "data/maps/Route111/scripts.pory"
# 980 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 981 "data/maps/Route111/scripts.pory"
# 573 "data/maps/Route111/scripts.pory"
# 982 "data/maps/Route111/scripts.pory"
	release
# 983 "data/maps/Route111/scripts.pory"
	end
# 984 "data/maps/Route111/scripts.pory"

# 985 "data/maps/Route111/scripts.pory"

# 986 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 987 "data/maps/Route111/scripts.pory"
# 578 "data/maps/Route111/scripts.pory"
# 988 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 989 "data/maps/Route111/scripts.pory"
# 579 "data/maps/Route111/scripts.pory"
# 990 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 991 "data/maps/Route111/scripts.pory"
	end
# 992 "data/maps/Route111/scripts.pory"

# 993 "data/maps/Route111/scripts.pory"

# 994 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 995 "data/maps/Route111/scripts.pory"
# 584 "data/maps/Route111/scripts.pory"
# 996 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 997 "data/maps/Route111/scripts.pory"
# 585 "data/maps/Route111/scripts.pory"
# 998 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 999 "data/maps/Route111/scripts.pory"
	end
# 1000 "data/maps/Route111/scripts.pory"

# 1001 "data/maps/Route111/scripts.pory"

# 1002 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 1003 "data/maps/Route111/scripts.pory"
# 590 "data/maps/Route111/scripts.pory"
# 1004 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 1005 "data/maps/Route111/scripts.pory"
# 591 "data/maps/Route111/scripts.pory"
# 1006 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 1007 "data/maps/Route111/scripts.pory"
	end
# 1008 "data/maps/Route111/scripts.pory"

# 1009 "data/maps/Route111/scripts.pory"

# 1010 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 1011 "data/maps/Route111/scripts.pory"
# 596 "data/maps/Route111/scripts.pory"
# 1012 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 1013 "data/maps/Route111/scripts.pory"
# 597 "data/maps/Route111/scripts.pory"
# 1014 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 1015 "data/maps/Route111/scripts.pory"
	end
# 1016 "data/maps/Route111/scripts.pory"

# 1017 "data/maps/Route111/scripts.pory"

# 1018 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 1019 "data/maps/Route111/scripts.pory"
# 602 "data/maps/Route111/scripts.pory"
# 1020 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 1021 "data/maps/Route111/scripts.pory"
# 603 "data/maps/Route111/scripts.pory"
# 1022 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1023 "data/maps/Route111/scripts.pory"
# 604 "data/maps/Route111/scripts.pory"
# 1024 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
# 1025 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_Wilton_2
# 1026 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton_1:
# 1027 "data/maps/Route111/scripts.pory"
# 607 "data/maps/Route111/scripts.pory"
# 1028 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 1029 "data/maps/Route111/scripts.pory"
# 608 "data/maps/Route111/scripts.pory"
# 1030 "data/maps/Route111/scripts.pory"
	release
# 1031 "data/maps/Route111/scripts.pory"
	end
# 1032 "data/maps/Route111/scripts.pory"

# 1033 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton_2:
# 1034 "data/maps/Route111/scripts.pory"
# 605 "data/maps/Route111/scripts.pory"
# 1035 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_RematchWilton
# 1036 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Wilton_1
# 1037 "data/maps/Route111/scripts.pory"

# 1038 "data/maps/Route111/scripts.pory"

# 1039 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 1040 "data/maps/Route111/scripts.pory"
# 613 "data/maps/Route111/scripts.pory"
# 1041 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1042 "data/maps/Route111/scripts.pory"
# 614 "data/maps/Route111/scripts.pory"
# 1043 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1044 "data/maps/Route111/scripts.pory"
# 615 "data/maps/Route111/scripts.pory"
# 1045 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 1046 "data/maps/Route111/scripts.pory"
# 616 "data/maps/Route111/scripts.pory"
# 1047 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 1048 "data/maps/Route111/scripts.pory"
# 617 "data/maps/Route111/scripts.pory"
# 1049 "data/maps/Route111/scripts.pory"
	release
# 1050 "data/maps/Route111/scripts.pory"
	end
# 1051 "data/maps/Route111/scripts.pory"

# 1052 "data/maps/Route111/scripts.pory"

# 1053 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 1054 "data/maps/Route111/scripts.pory"
# 622 "data/maps/Route111/scripts.pory"
# 1055 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 1056 "data/maps/Route111/scripts.pory"
# 623 "data/maps/Route111/scripts.pory"
# 1057 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 1058 "data/maps/Route111/scripts.pory"
	end
# 1059 "data/maps/Route111/scripts.pory"

# 1060 "data/maps/Route111/scripts.pory"

# 1061 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 1062 "data/maps/Route111/scripts.pory"
# 628 "data/maps/Route111/scripts.pory"
# 1063 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 1064 "data/maps/Route111/scripts.pory"
# 629 "data/maps/Route111/scripts.pory"
# 1065 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1066 "data/maps/Route111/scripts.pory"
# 630 "data/maps/Route111/scripts.pory"
# 1067 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
# 1068 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_Brooke_2
# 1069 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke_1:
# 1070 "data/maps/Route111/scripts.pory"
# 633 "data/maps/Route111/scripts.pory"
# 1071 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 1072 "data/maps/Route111/scripts.pory"
# 634 "data/maps/Route111/scripts.pory"
# 1073 "data/maps/Route111/scripts.pory"
	release
# 1074 "data/maps/Route111/scripts.pory"
	end
# 1075 "data/maps/Route111/scripts.pory"

# 1076 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke_2:
# 1077 "data/maps/Route111/scripts.pory"
# 631 "data/maps/Route111/scripts.pory"
# 1078 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_RematchBrooke
# 1079 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Brooke_1
# 1080 "data/maps/Route111/scripts.pory"

# 1081 "data/maps/Route111/scripts.pory"

# 1082 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 1083 "data/maps/Route111/scripts.pory"
# 639 "data/maps/Route111/scripts.pory"
# 1084 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1085 "data/maps/Route111/scripts.pory"
# 640 "data/maps/Route111/scripts.pory"
# 1086 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1087 "data/maps/Route111/scripts.pory"
# 641 "data/maps/Route111/scripts.pory"
# 1088 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 1089 "data/maps/Route111/scripts.pory"
# 642 "data/maps/Route111/scripts.pory"
# 1090 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 1091 "data/maps/Route111/scripts.pory"
# 643 "data/maps/Route111/scripts.pory"
# 1092 "data/maps/Route111/scripts.pory"
	release
# 1093 "data/maps/Route111/scripts.pory"
	end
# 1094 "data/maps/Route111/scripts.pory"

# 1095 "data/maps/Route111/scripts.pory"

# 1096 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 1097 "data/maps/Route111/scripts.pory"
# 648 "data/maps/Route111/scripts.pory"
# 1098 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 1099 "data/maps/Route111/scripts.pory"
# 649 "data/maps/Route111/scripts.pory"
# 1100 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 1101 "data/maps/Route111/scripts.pory"
	end
# 1102 "data/maps/Route111/scripts.pory"

# 1103 "data/maps/Route111/scripts.pory"

# 1104 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 1105 "data/maps/Route111/scripts.pory"
# 654 "data/maps/Route111/scripts.pory"
# 1106 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 1107 "data/maps/Route111/scripts.pory"
# 655 "data/maps/Route111/scripts.pory"
# 1108 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 1109 "data/maps/Route111/scripts.pory"
	end
# 1110 "data/maps/Route111/scripts.pory"

# 1111 "data/maps/Route111/scripts.pory"

# 1112 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 1113 "data/maps/Route111/scripts.pory"
# 660 "data/maps/Route111/scripts.pory"
# 1114 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 1115 "data/maps/Route111/scripts.pory"
# 661 "data/maps/Route111/scripts.pory"
# 1116 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 1117 "data/maps/Route111/scripts.pory"
	end
# 1118 "data/maps/Route111/scripts.pory"

# 1119 "data/maps/Route111/scripts.pory"

# 1120 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 1121 "data/maps/Route111/scripts.pory"
# 666 "data/maps/Route111/scripts.pory"
# 1122 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 1123 "data/maps/Route111/scripts.pory"
# 667 "data/maps/Route111/scripts.pory"
# 1124 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 1125 "data/maps/Route111/scripts.pory"
	end
# 1126 "data/maps/Route111/scripts.pory"

# 1127 "data/maps/Route111/scripts.pory"

# 1128 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 1129 "data/maps/Route111/scripts.pory"
# 672 "data/maps/Route111/scripts.pory"
# 1130 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 1131 "data/maps/Route111/scripts.pory"
# 673 "data/maps/Route111/scripts.pory"
# 1132 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 1133 "data/maps/Route111/scripts.pory"
	end
# 1134 "data/maps/Route111/scripts.pory"

# 1135 "data/maps/Route111/scripts.pory"

# 1136 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 1137 "data/maps/Route111/scripts.pory"
# 678 "data/maps/Route111/scripts.pory"
# 1138 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 1139 "data/maps/Route111/scripts.pory"
# 679 "data/maps/Route111/scripts.pory"
# 1140 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 1141 "data/maps/Route111/scripts.pory"
	end
# 1142 "data/maps/Route111/scripts.pory"

# 1143 "data/maps/Route111/scripts.pory"

# 1144 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 1145 "data/maps/Route111/scripts.pory"
# 684 "data/maps/Route111/scripts.pory"
# 1146 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 1147 "data/maps/Route111/scripts.pory"
# 685 "data/maps/Route111/scripts.pory"
# 1148 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 1149 "data/maps/Route111/scripts.pory"
	end
# 1150 "data/maps/Route111/scripts.pory"

# 1151 "data/maps/Route111/scripts.pory"

# 1152 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 1153 "data/maps/Route111/scripts.pory"
# 690 "data/maps/Route111/scripts.pory"
# 1154 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 1155 "data/maps/Route111/scripts.pory"
# 691 "data/maps/Route111/scripts.pory"
# 1156 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 1157 "data/maps/Route111/scripts.pory"
	end
# 1158 "data/maps/Route111/scripts.pory"

# 1159 "data/maps/Route111/scripts.pory"

# 1160 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 1161 "data/maps/Route111/scripts.pory"
# 696 "data/maps/Route111/scripts.pory"
# 1162 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 1163 "data/maps/Route111/scripts.pory"
	end
# 1164 "data/maps/Route111/scripts.pory"

# 1165 "data/maps/Route111/scripts.pory"

# 1166 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily::
# 1167 "data/maps/Route111/scripts.pory"
# 700 "data/maps/Route111/scripts.pory"
# 1168 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 1169 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 1170 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 1171 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 1172 "data/maps/Route111/scripts.pory"

# 1173 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo::
# 1174 "data/maps/Route111/scripts.pory"
# 707 "data/maps/Route111/scripts.pory"
# 1175 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 1176 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 1177 "data/maps/Route111/scripts.pory"

# 1178 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro::
# 1179 "data/maps/Route111/scripts.pory"
# 712 "data/maps/Route111/scripts.pory"
# 1180 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 1181 "data/maps/Route111/scripts.pory"

# 1182 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat::
# 1183 "data/maps/Route111/scripts.pory"
# 716 "data/maps/Route111/scripts.pory"
# 1184 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 1185 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 1186 "data/maps/Route111/scripts.pory"

# 1187 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle::
# 1188 "data/maps/Route111/scripts.pory"
# 721 "data/maps/Route111/scripts.pory"
# 1189 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 1190 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 1191 "data/maps/Route111/scripts.pory"

# 1192 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro::
# 1193 "data/maps/Route111/scripts.pory"
# 726 "data/maps/Route111/scripts.pory"
# 1194 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 1195 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 1196 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 1197 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 1198 "data/maps/Route111/scripts.pory"

# 1199 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat::
# 1200 "data/maps/Route111/scripts.pory"
# 733 "data/maps/Route111/scripts.pory"
# 1201 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 1202 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 1203 "data/maps/Route111/scripts.pory"

# 1204 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle::
# 1205 "data/maps/Route111/scripts.pory"
# 738 "data/maps/Route111/scripts.pory"
# 1206 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 1207 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 1208 "data/maps/Route111/scripts.pory"

# 1209 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro::
# 1210 "data/maps/Route111/scripts.pory"
# 743 "data/maps/Route111/scripts.pory"
# 1211 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 1212 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 1213 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 1214 "data/maps/Route111/scripts.pory"

# 1215 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat::
# 1216 "data/maps/Route111/scripts.pory"
# 749 "data/maps/Route111/scripts.pory"
# 1217 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 1218 "data/maps/Route111/scripts.pory"

# 1219 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle::
# 1220 "data/maps/Route111/scripts.pory"
# 753 "data/maps/Route111/scripts.pory"
# 1221 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 1222 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 1223 "data/maps/Route111/scripts.pory"

# 1224 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro::
# 1225 "data/maps/Route111/scripts.pory"
# 758 "data/maps/Route111/scripts.pory"
# 1226 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 1227 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 1228 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 1229 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 1230 "data/maps/Route111/scripts.pory"

# 1231 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat::
# 1232 "data/maps/Route111/scripts.pory"
# 765 "data/maps/Route111/scripts.pory"
# 1233 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 1234 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 1235 "data/maps/Route111/scripts.pory"

# 1236 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle::
# 1237 "data/maps/Route111/scripts.pory"
# 770 "data/maps/Route111/scripts.pory"
# 1238 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 1239 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 1240 "data/maps/Route111/scripts.pory"

# 1241 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks::
# 1242 "data/maps/Route111/scripts.pory"
# 775 "data/maps/Route111/scripts.pory"
# 1243 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 1244 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 1245 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 1246 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 1247 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 1248 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 1249 "data/maps/Route111/scripts.pory"

# 1250 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe::
# 1251 "data/maps/Route111/scripts.pory"
# 784 "data/maps/Route111/scripts.pory"
# 1252 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 1253 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 1254 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 1255 "data/maps/Route111/scripts.pory"

# 1256 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville::
# 1257 "data/maps/Route111/scripts.pory"
# 790 "data/maps/Route111/scripts.pory"
# 1258 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 1259 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 1260 "data/maps/Route111/scripts.pory"

# 1261 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign::
# 1262 "data/maps/Route111/scripts.pory"
# 795 "data/maps/Route111/scripts.pory"
# 1263 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 1264 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 1265 "data/maps/Route111/scripts.pory"

# 1266 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112::
# 1267 "data/maps/Route111/scripts.pory"
# 800 "data/maps/Route111/scripts.pory"
# 1268 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 1269 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 1270 "data/maps/Route111/scripts.pory"

# 1271 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113::
# 1272 "data/maps/Route111/scripts.pory"
# 805 "data/maps/Route111/scripts.pory"
# 1273 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 1274 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 1275 "data/maps/Route111/scripts.pory"

# 1276 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign::
# 1277 "data/maps/Route111/scripts.pory"
# 810 "data/maps/Route111/scripts.pory"
# 1278 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 1279 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 1280 "data/maps/Route111/scripts.pory"

# 1281 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef::
# 1282 "data/maps/Route111/scripts.pory"
# 815 "data/maps/Route111/scripts.pory"
# 1283 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 1284 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 1285 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 1286 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 1287 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 1288 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 1289 "data/maps/Route111/scripts.pory"

# 1290 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere::
# 1291 "data/maps/Route111/scripts.pory"
# 824 "data/maps/Route111/scripts.pory"
# 1292 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 1293 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 1294 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 1295 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 1296 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 1297 "data/maps/Route111/scripts.pory"

# 1298 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible::
# 1299 "data/maps/Route111/scripts.pory"
# 832 "data/maps/Route111/scripts.pory"
# 1300 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 1301 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 1302 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 1303 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 1304 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 1305 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 1306 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 1307 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 1308 "data/maps/Route111/scripts.pory"

# 1309 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown::
# 1310 "data/maps/Route111/scripts.pory"
# 843 "data/maps/Route111/scripts.pory"
# 1311 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 1312 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 1313 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 1314 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 1315 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 1316 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 1317 "data/maps/Route111/scripts.pory"

# 1318 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince::
# 1319 "data/maps/Route111/scripts.pory"
# 852 "data/maps/Route111/scripts.pory"
# 1320 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 1321 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 1322 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 1323 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 1324 "data/maps/Route111/scripts.pory"

# 1325 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared::
# 1326 "data/maps/Route111/scripts.pory"
# 859 "data/maps/Route111/scripts.pory"
# 1327 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 1328 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 1329 "data/maps/Route111/scripts.pory"

# 1330 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared::
# 1331 "data/maps/Route111/scripts.pory"
# 864 "data/maps/Route111/scripts.pory"
# 1332 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 1333 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 1334 "data/maps/Route111/scripts.pory"

# 1335 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash::
# 1336 "data/maps/Route111/scripts.pory"
# 869 "data/maps/Route111/scripts.pory"
# 1337 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 1338 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 1339 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 1340 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 1341 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 1342 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 1343 "data/maps/Route111/scripts.pory"

# 1344 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign::
# 1345 "data/maps/Route111/scripts.pory"
# 878 "data/maps/Route111/scripts.pory"
# 1346 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 1347 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 1348 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"
