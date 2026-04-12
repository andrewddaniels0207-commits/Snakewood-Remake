# 1 "data/maps/SootopolisCity/scripts.pory"

# 2 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_MapScripts::
# 3 "data/maps/SootopolisCity/scripts.pory"
# 2 "data/maps/SootopolisCity/scripts.pory"
# 4 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_OnLoad
# 5 "data/maps/SootopolisCity/scripts.pory"
# 3 "data/maps/SootopolisCity/scripts.pory"
# 6 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_OnTransition
# 7 "data/maps/SootopolisCity/scripts.pory"
# 4 "data/maps/SootopolisCity/scripts.pory"
# 8 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_OnResume
# 9 "data/maps/SootopolisCity/scripts.pory"
# 9 "data/maps/SootopolisCity/scripts.pory"
# 10 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_OnWarp
# 11 "data/maps/SootopolisCity/scripts.pory"
# 5 "data/maps/SootopolisCity/scripts.pory"
# 12 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 13 "data/maps/SootopolisCity/scripts.pory"
	.byte 0
# 14 "data/maps/SootopolisCity/scripts.pory"

# 15 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/SootopolisCity/scripts.pory"
# 6 "data/maps/SootopolisCity/scripts.pory"
# 17 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 18 "data/maps/SootopolisCity/scripts.pory"
# 7 "data/maps/SootopolisCity/scripts.pory"
# 19 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
# 20 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 21 "data/maps/SootopolisCity/scripts.pory"

# 22 "data/maps/SootopolisCity/scripts.pory"

# 23 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad::
# 24 "data/maps/SootopolisCity/scripts.pory"
# 13 "data/maps/SootopolisCity/scripts.pory"
# 25 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_OnLoad_2
# 26 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad_1:
# 27 "data/maps/SootopolisCity/scripts.pory"
# 16 "data/maps/SootopolisCity/scripts.pory"
# 28 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_OnLoad_5
# 29 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad_4:
# 30 "data/maps/SootopolisCity/scripts.pory"
# 19 "data/maps/SootopolisCity/scripts.pory"
# 31 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_OnLoad_8
# 32 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad_7:
# 33 "data/maps/SootopolisCity/scripts.pory"
	end
# 34 "data/maps/SootopolisCity/scripts.pory"

# 35 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad_2:
# 36 "data/maps/SootopolisCity/scripts.pory"
# 14 "data/maps/SootopolisCity/scripts.pory"
# 37 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_LockGymDoor
# 38 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnLoad_1
# 39 "data/maps/SootopolisCity/scripts.pory"

# 40 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad_5:
# 41 "data/maps/SootopolisCity/scripts.pory"
# 17 "data/maps/SootopolisCity/scripts.pory"
# 42 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesNotArrived
# 43 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnLoad_4
# 44 "data/maps/SootopolisCity/scripts.pory"

# 45 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad_8:
# 46 "data/maps/SootopolisCity/scripts.pory"
# 20 "data/maps/SootopolisCity/scripts.pory"
# 47 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_LockHouseDoors
# 48 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnLoad_7
# 49 "data/maps/SootopolisCity/scripts.pory"

# 50 "data/maps/SootopolisCity/scripts.pory"

# 51 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesNotArrived::
# 52 "data/maps/SootopolisCity/scripts.pory"
	end
# 53 "data/maps/SootopolisCity/scripts.pory"

# 54 "data/maps/SootopolisCity/scripts.pory"

# 55 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockHouseDoors::
# 56 "data/maps/SootopolisCity/scripts.pory"
# 30 "data/maps/SootopolisCity/scripts.pory"
# 57 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 58 "data/maps/SootopolisCity/scripts.pory"
# 31 "data/maps/SootopolisCity/scripts.pory"
# 59 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 60 "data/maps/SootopolisCity/scripts.pory"
# 32 "data/maps/SootopolisCity/scripts.pory"
# 61 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 62 "data/maps/SootopolisCity/scripts.pory"
# 33 "data/maps/SootopolisCity/scripts.pory"
# 63 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 64 "data/maps/SootopolisCity/scripts.pory"
# 34 "data/maps/SootopolisCity/scripts.pory"
# 65 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
# 66 "data/maps/SootopolisCity/scripts.pory"
# 35 "data/maps/SootopolisCity/scripts.pory"
# 67 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 68 "data/maps/SootopolisCity/scripts.pory"
# 36 "data/maps/SootopolisCity/scripts.pory"
# 69 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 70 "data/maps/SootopolisCity/scripts.pory"
# 37 "data/maps/SootopolisCity/scripts.pory"
# 71 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
# 72 "data/maps/SootopolisCity/scripts.pory"
# 38 "data/maps/SootopolisCity/scripts.pory"
# 73 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 74 "data/maps/SootopolisCity/scripts.pory"
	return
# 75 "data/maps/SootopolisCity/scripts.pory"

# 76 "data/maps/SootopolisCity/scripts.pory"

# 77 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockGymDoor::
# 78 "data/maps/SootopolisCity/scripts.pory"
# 43 "data/maps/SootopolisCity/scripts.pory"
# 79 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
# 80 "data/maps/SootopolisCity/scripts.pory"
	return
# 81 "data/maps/SootopolisCity/scripts.pory"

# 82 "data/maps/SootopolisCity/scripts.pory"

# 83 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition::
# 84 "data/maps/SootopolisCity/scripts.pory"
# 48 "data/maps/SootopolisCity/scripts.pory"
# 85 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 86 "data/maps/SootopolisCity/scripts.pory"
# 49 "data/maps/SootopolisCity/scripts.pory"
# 87 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
# 88 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_2
# 89 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_1:
# 90 "data/maps/SootopolisCity/scripts.pory"
# 52 "data/maps/SootopolisCity/scripts.pory"
# 91 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
# 92 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_5
# 93 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_4:
# 94 "data/maps/SootopolisCity/scripts.pory"
# 55 "data/maps/SootopolisCity/scripts.pory"
# 95 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 96 "data/maps/SootopolisCity/scripts.pory"
# 56 "data/maps/SootopolisCity/scripts.pory"
# 97 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 98 "data/maps/SootopolisCity/scripts.pory"
# 57 "data/maps/SootopolisCity/scripts.pory"
# 99 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
# 100 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_8
# 101 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_7:
# 102 "data/maps/SootopolisCity/scripts.pory"
# 60 "data/maps/SootopolisCity/scripts.pory"
# 103 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
# 104 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_11
# 105 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_10:
# 106 "data/maps/SootopolisCity/scripts.pory"
# 63 "data/maps/SootopolisCity/scripts.pory"
# 107 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
# 108 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_14
# 109 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_13:
# 110 "data/maps/SootopolisCity/scripts.pory"
# 66 "data/maps/SootopolisCity/scripts.pory"
# 111 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
# 112 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_17
# 113 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_16:
# 114 "data/maps/SootopolisCity/scripts.pory"
# 69 "data/maps/SootopolisCity/scripts.pory"
# 115 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 116 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_20
# 117 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_19:
# 118 "data/maps/SootopolisCity/scripts.pory"
# 72 "data/maps/SootopolisCity/scripts.pory"
# 119 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
# 120 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_23
# 121 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_22:
# 122 "data/maps/SootopolisCity/scripts.pory"
# 75 "data/maps/SootopolisCity/scripts.pory"
# 123 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
# 124 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_26
# 125 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_25:
# 126 "data/maps/SootopolisCity/scripts.pory"
# 78 "data/maps/SootopolisCity/scripts.pory"
# 127 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
# 128 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_29
# 129 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_28:
# 130 "data/maps/SootopolisCity/scripts.pory"
# 81 "data/maps/SootopolisCity/scripts.pory"
# 131 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 132 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_32
# 133 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_31:
# 134 "data/maps/SootopolisCity/scripts.pory"
# 84 "data/maps/SootopolisCity/scripts.pory"
# 135 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
# 136 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_OnTransition_35
# 137 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_34:
# 138 "data/maps/SootopolisCity/scripts.pory"
	end
# 139 "data/maps/SootopolisCity/scripts.pory"

# 140 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_2:
# 141 "data/maps/SootopolisCity/scripts.pory"
# 50 "data/maps/SootopolisCity/scripts.pory"
# 142 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_HideMapNamePopup
# 143 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_1
# 144 "data/maps/SootopolisCity/scripts.pory"

# 145 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_5:
# 146 "data/maps/SootopolisCity/scripts.pory"
# 53 "data/maps/SootopolisCity/scripts.pory"
# 147 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_HideMapNamePopup
# 148 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_4
# 149 "data/maps/SootopolisCity/scripts.pory"

# 150 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_8:
# 151 "data/maps/SootopolisCity/scripts.pory"
# 58 "data/maps/SootopolisCity/scripts.pory"
# 152 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetBattleSpectators
# 153 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_7
# 154 "data/maps/SootopolisCity/scripts.pory"

# 155 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_11:
# 156 "data/maps/SootopolisCity/scripts.pory"
# 61 "data/maps/SootopolisCity/scripts.pory"
# 157 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetBattleSpectators
# 158 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_10
# 159 "data/maps/SootopolisCity/scripts.pory"

# 160 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_14:
# 161 "data/maps/SootopolisCity/scripts.pory"
# 64 "data/maps/SootopolisCity/scripts.pory"
# 162 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetBattleSpectators
# 163 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_13
# 164 "data/maps/SootopolisCity/scripts.pory"

# 165 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_17:
# 166 "data/maps/SootopolisCity/scripts.pory"
# 67 "data/maps/SootopolisCity/scripts.pory"
# 167 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetBattleSpectators
# 168 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_16
# 169 "data/maps/SootopolisCity/scripts.pory"

# 170 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_20:
# 171 "data/maps/SootopolisCity/scripts.pory"
# 70 "data/maps/SootopolisCity/scripts.pory"
# 172 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetBattleSpectators
# 173 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_19
# 174 "data/maps/SootopolisCity/scripts.pory"

# 175 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_23:
# 176 "data/maps/SootopolisCity/scripts.pory"
# 73 "data/maps/SootopolisCity/scripts.pory"
# 177 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 178 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_22
# 179 "data/maps/SootopolisCity/scripts.pory"

# 180 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_26:
# 181 "data/maps/SootopolisCity/scripts.pory"
# 76 "data/maps/SootopolisCity/scripts.pory"
# 182 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 183 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_25
# 184 "data/maps/SootopolisCity/scripts.pory"

# 185 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_29:
# 186 "data/maps/SootopolisCity/scripts.pory"
# 79 "data/maps/SootopolisCity/scripts.pory"
# 187 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
# 188 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_28
# 189 "data/maps/SootopolisCity/scripts.pory"

# 190 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_32:
# 191 "data/maps/SootopolisCity/scripts.pory"
# 82 "data/maps/SootopolisCity/scripts.pory"
# 192 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetOutsideGymObjPos
# 193 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_31
# 194 "data/maps/SootopolisCity/scripts.pory"

# 195 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition_35:
# 196 "data/maps/SootopolisCity/scripts.pory"
# 85 "data/maps/SootopolisCity/scripts.pory"
# 197 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetExpertBlockCaveEntrance
# 198 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_OnTransition_34
# 199 "data/maps/SootopolisCity/scripts.pory"

# 200 "data/maps/SootopolisCity/scripts.pory"

# 201 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_HideMapNamePopup::
# 202 "data/maps/SootopolisCity/scripts.pory"
# 91 "data/maps/SootopolisCity/scripts.pory"
# 203 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 204 "data/maps/SootopolisCity/scripts.pory"
	return
# 205 "data/maps/SootopolisCity/scripts.pory"

# 206 "data/maps/SootopolisCity/scripts.pory"

# 207 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetBattleSpectators::
# 208 "data/maps/SootopolisCity/scripts.pory"
# 96 "data/maps/SootopolisCity/scripts.pory"
# 209 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 210 "data/maps/SootopolisCity/scripts.pory"
# 97 "data/maps/SootopolisCity/scripts.pory"
# 211 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_BOY_1, 46, 32
# 212 "data/maps/SootopolisCity/scripts.pory"
# 98 "data/maps/SootopolisCity/scripts.pory"
# 213 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_NINJA_BOY, 48, 41
# 214 "data/maps/SootopolisCity/scripts.pory"
# 99 "data/maps/SootopolisCity/scripts.pory"
# 215 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WOMAN_1, 45, 43
# 216 "data/maps/SootopolisCity/scripts.pory"
# 100 "data/maps/SootopolisCity/scripts.pory"
# 217 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 218 "data/maps/SootopolisCity/scripts.pory"
# 101 "data/maps/SootopolisCity/scripts.pory"
# 219 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 220 "data/maps/SootopolisCity/scripts.pory"
# 102 "data/maps/SootopolisCity/scripts.pory"
# 221 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 222 "data/maps/SootopolisCity/scripts.pory"
# 103 "data/maps/SootopolisCity/scripts.pory"
# 223 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
# 224 "data/maps/SootopolisCity/scripts.pory"
	return
# 225 "data/maps/SootopolisCity/scripts.pory"

# 226 "data/maps/SootopolisCity/scripts.pory"

# 227 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout::
# 228 "data/maps/SootopolisCity/scripts.pory"
# 108 "data/maps/SootopolisCity/scripts.pory"
# 229 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 0
# 230 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_SetLayout_2
# 231 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_1:
# 232 "data/maps/SootopolisCity/scripts.pory"
# 111 "data/maps/SootopolisCity/scripts.pory"
# 233 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
# 234 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge SootopolisCity_EventScript_SetLayout_5
# 235 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_4:
# 236 "data/maps/SootopolisCity/scripts.pory"
# 114 "data/maps/SootopolisCity/scripts.pory"
# 237 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
# 238 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_SetLayout_8
# 239 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_7:
# 240 "data/maps/SootopolisCity/scripts.pory"
# 117 "data/maps/SootopolisCity/scripts.pory"
# 241 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
# 242 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_SetLayout_11
# 243 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_10:
# 244 "data/maps/SootopolisCity/scripts.pory"
# 120 "data/maps/SootopolisCity/scripts.pory"
# 245 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
# 246 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_SetLayout_14
# 247 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_13:
# 248 "data/maps/SootopolisCity/scripts.pory"
# 123 "data/maps/SootopolisCity/scripts.pory"
# 249 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
# 250 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_SetLayout_17
# 251 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_16:
# 252 "data/maps/SootopolisCity/scripts.pory"
# 126 "data/maps/SootopolisCity/scripts.pory"
# 253 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
# 254 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le SootopolisCity_EventScript_SetLayout_20
# 255 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_19:
# 256 "data/maps/SootopolisCity/scripts.pory"
	return
# 257 "data/maps/SootopolisCity/scripts.pory"

# 258 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_2:
# 259 "data/maps/SootopolisCity/scripts.pory"
# 109 "data/maps/SootopolisCity/scripts.pory"
# 260 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetNormalLayout
# 261 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLayout_1
# 262 "data/maps/SootopolisCity/scripts.pory"

# 263 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_5:
# 264 "data/maps/SootopolisCity/scripts.pory"
# 112 "data/maps/SootopolisCity/scripts.pory"
# 265 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetNormalLayout
# 266 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLayout_4
# 267 "data/maps/SootopolisCity/scripts.pory"

# 268 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_8:
# 269 "data/maps/SootopolisCity/scripts.pory"
# 115 "data/maps/SootopolisCity/scripts.pory"
# 270 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLegendariesLayout
# 271 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLayout_7
# 272 "data/maps/SootopolisCity/scripts.pory"

# 273 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_11:
# 274 "data/maps/SootopolisCity/scripts.pory"
# 118 "data/maps/SootopolisCity/scripts.pory"
# 275 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLegendariesLayout
# 276 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLayout_10
# 277 "data/maps/SootopolisCity/scripts.pory"

# 278 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_14:
# 279 "data/maps/SootopolisCity/scripts.pory"
# 121 "data/maps/SootopolisCity/scripts.pory"
# 280 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLegendariesLayout
# 281 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLayout_13
# 282 "data/maps/SootopolisCity/scripts.pory"

# 283 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_17:
# 284 "data/maps/SootopolisCity/scripts.pory"
# 124 "data/maps/SootopolisCity/scripts.pory"
# 285 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLegendariesLayout
# 286 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLayout_16
# 287 "data/maps/SootopolisCity/scripts.pory"

# 288 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout_20:
# 289 "data/maps/SootopolisCity/scripts.pory"
# 127 "data/maps/SootopolisCity/scripts.pory"
# 290 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLegendariesLayout
# 291 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLayout_19
# 292 "data/maps/SootopolisCity/scripts.pory"

# 293 "data/maps/SootopolisCity/scripts.pory"

# 294 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalLayout::
# 295 "data/maps/SootopolisCity/scripts.pory"
	return
# 296 "data/maps/SootopolisCity/scripts.pory"

# 297 "data/maps/SootopolisCity/scripts.pory"

# 298 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLegendariesLayout::
# 299 "data/maps/SootopolisCity/scripts.pory"
# 137 "data/maps/SootopolisCity/scripts.pory"
# 300 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
# 301 "data/maps/SootopolisCity/scripts.pory"
	return
# 302 "data/maps/SootopolisCity/scripts.pory"

# 303 "data/maps/SootopolisCity/scripts.pory"

# 304 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather::
# 305 "data/maps/SootopolisCity/scripts.pory"
# 142 "data/maps/SootopolisCity/scripts.pory"
# 306 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 0
# 307 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_SetWeather_2
# 308 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather_1:
# 309 "data/maps/SootopolisCity/scripts.pory"
# 145 "data/maps/SootopolisCity/scripts.pory"
# 310 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
# 311 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge SootopolisCity_EventScript_SetWeather_5
# 312 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather_4:
# 313 "data/maps/SootopolisCity/scripts.pory"
# 148 "data/maps/SootopolisCity/scripts.pory"
# 314 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
# 315 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_SetWeather_8
# 316 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather_7:
# 317 "data/maps/SootopolisCity/scripts.pory"
# 151 "data/maps/SootopolisCity/scripts.pory"
# 318 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
# 319 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_SetWeather_11
# 320 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather_10:
# 321 "data/maps/SootopolisCity/scripts.pory"
# 154 "data/maps/SootopolisCity/scripts.pory"
# 322 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
# 323 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le SootopolisCity_EventScript_SetWeather_14
# 324 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather_13:
# 325 "data/maps/SootopolisCity/scripts.pory"
	return
# 326 "data/maps/SootopolisCity/scripts.pory"

# 327 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather_2:
# 328 "data/maps/SootopolisCity/scripts.pory"
# 143 "data/maps/SootopolisCity/scripts.pory"
# 329 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetNormalWeather
# 330 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetWeather_1
# 331 "data/maps/SootopolisCity/scripts.pory"

# 332 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather_5:
# 333 "data/maps/SootopolisCity/scripts.pory"
# 146 "data/maps/SootopolisCity/scripts.pory"
# 334 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetNormalWeather
# 335 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetWeather_4
# 336 "data/maps/SootopolisCity/scripts.pory"

# 337 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather_8:
# 338 "data/maps/SootopolisCity/scripts.pory"
# 149 "data/maps/SootopolisCity/scripts.pory"
# 339 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetDownpour
# 340 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetWeather_7
# 341 "data/maps/SootopolisCity/scripts.pory"

# 342 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather_11:
# 343 "data/maps/SootopolisCity/scripts.pory"
# 152 "data/maps/SootopolisCity/scripts.pory"
# 344 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetDownpour
# 345 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetWeather_10
# 346 "data/maps/SootopolisCity/scripts.pory"

# 347 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather_14:
# 348 "data/maps/SootopolisCity/scripts.pory"
# 155 "data/maps/SootopolisCity/scripts.pory"
# 349 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_SetAbnormalWeather
# 350 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetWeather_13
# 351 "data/maps/SootopolisCity/scripts.pory"

# 352 "data/maps/SootopolisCity/scripts.pory"

# 353 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalWeather::
# 354 "data/maps/SootopolisCity/scripts.pory"
	return
# 355 "data/maps/SootopolisCity/scripts.pory"

# 356 "data/maps/SootopolisCity/scripts.pory"

# 357 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetDownpour::
# 358 "data/maps/SootopolisCity/scripts.pory"
# 165 "data/maps/SootopolisCity/scripts.pory"
# 359 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 360 "data/maps/SootopolisCity/scripts.pory"
	return
# 361 "data/maps/SootopolisCity/scripts.pory"

# 362 "data/maps/SootopolisCity/scripts.pory"

# 363 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 364 "data/maps/SootopolisCity/scripts.pory"
# 170 "data/maps/SootopolisCity/scripts.pory"
# 365 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos_2
# 366 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos_1:
# 367 "data/maps/SootopolisCity/scripts.pory"
	return
# 368 "data/maps/SootopolisCity/scripts.pory"

# 369 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos_2:
# 370 "data/maps/SootopolisCity/scripts.pory"
# 171 "data/maps/SootopolisCity/scripts.pory"
# 371 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 372 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos_1
# 373 "data/maps/SootopolisCity/scripts.pory"

# 374 "data/maps/SootopolisCity/scripts.pory"

# 375 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 376 "data/maps/SootopolisCity/scripts.pory"
# 177 "data/maps/SootopolisCity/scripts.pory"
# 377 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 378 "data/maps/SootopolisCity/scripts.pory"
# 178 "data/maps/SootopolisCity/scripts.pory"
# 379 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
# 380 "data/maps/SootopolisCity/scripts.pory"
	return
# 381 "data/maps/SootopolisCity/scripts.pory"

# 382 "data/maps/SootopolisCity/scripts.pory"

# 383 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 384 "data/maps/SootopolisCity/scripts.pory"
# 183 "data/maps/SootopolisCity/scripts.pory"
# 385 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 386 "data/maps/SootopolisCity/scripts.pory"
# 184 "data/maps/SootopolisCity/scripts.pory"
# 387 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 18
# 388 "data/maps/SootopolisCity/scripts.pory"
# 185 "data/maps/SootopolisCity/scripts.pory"
# 389 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
# 390 "data/maps/SootopolisCity/scripts.pory"
	end
# 391 "data/maps/SootopolisCity/scripts.pory"

# 392 "data/maps/SootopolisCity/scripts.pory"

# 393 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos::
# 394 "data/maps/SootopolisCity/scripts.pory"
# 190 "data/maps/SootopolisCity/scripts.pory"
# 395 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
# 396 "data/maps/SootopolisCity/scripts.pory"
# 191 "data/maps/SootopolisCity/scripts.pory"
# 397 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 29, 33
# 398 "data/maps/SootopolisCity/scripts.pory"
# 192 "data/maps/SootopolisCity/scripts.pory"
# 399 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_MAXIE, 33, 35
# 400 "data/maps/SootopolisCity/scripts.pory"
# 193 "data/maps/SootopolisCity/scripts.pory"
# 401 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_ARCHIE, 34, 35
# 402 "data/maps/SootopolisCity/scripts.pory"
# 194 "data/maps/SootopolisCity/scripts.pory"
# 403 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_WALLACE_STATE, 0
# 404 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_SetOutsideGymObjPos_2
# 405 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos_1:
# 406 "data/maps/SootopolisCity/scripts.pory"
# 197 "data/maps/SootopolisCity/scripts.pory"
# 407 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 408 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_SetOutsideGymObjPos_5
# 409 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos_4:
# 410 "data/maps/SootopolisCity/scripts.pory"
# 200 "data/maps/SootopolisCity/scripts.pory"
# 411 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 412 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_SetOutsideGymObjPos_8
# 413 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos_7:
# 414 "data/maps/SootopolisCity/scripts.pory"
	return
# 415 "data/maps/SootopolisCity/scripts.pory"

# 416 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos_2:
# 417 "data/maps/SootopolisCity/scripts.pory"
# 195 "data/maps/SootopolisCity/scripts.pory"
# 418 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWallaceMiddle
# 419 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetOutsideGymObjPos_1
# 420 "data/maps/SootopolisCity/scripts.pory"

# 421 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos_5:
# 422 "data/maps/SootopolisCity/scripts.pory"
# 198 "data/maps/SootopolisCity/scripts.pory"
# 423 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWallaceRight
# 424 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetOutsideGymObjPos_4
# 425 "data/maps/SootopolisCity/scripts.pory"

# 426 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos_8:
# 427 "data/maps/SootopolisCity/scripts.pory"
# 201 "data/maps/SootopolisCity/scripts.pory"
# 428 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWallaceLeft
# 429 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetOutsideGymObjPos_7
# 430 "data/maps/SootopolisCity/scripts.pory"

# 431 "data/maps/SootopolisCity/scripts.pory"

# 432 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceMiddle::
# 433 "data/maps/SootopolisCity/scripts.pory"
# 207 "data/maps/SootopolisCity/scripts.pory"
# 434 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 33
# 435 "data/maps/SootopolisCity/scripts.pory"
# 208 "data/maps/SootopolisCity/scripts.pory"
# 436 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 437 "data/maps/SootopolisCity/scripts.pory"
	return
# 438 "data/maps/SootopolisCity/scripts.pory"

# 439 "data/maps/SootopolisCity/scripts.pory"

# 440 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceRight::
# 441 "data/maps/SootopolisCity/scripts.pory"
# 213 "data/maps/SootopolisCity/scripts.pory"
# 442 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 32, 33
# 443 "data/maps/SootopolisCity/scripts.pory"
# 214 "data/maps/SootopolisCity/scripts.pory"
# 444 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 445 "data/maps/SootopolisCity/scripts.pory"
	return
# 446 "data/maps/SootopolisCity/scripts.pory"

# 447 "data/maps/SootopolisCity/scripts.pory"

# 448 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceLeft::
# 449 "data/maps/SootopolisCity/scripts.pory"
# 219 "data/maps/SootopolisCity/scripts.pory"
# 450 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 30, 33
# 451 "data/maps/SootopolisCity/scripts.pory"
# 220 "data/maps/SootopolisCity/scripts.pory"
# 452 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 453 "data/maps/SootopolisCity/scripts.pory"
	return
# 454 "data/maps/SootopolisCity/scripts.pory"

# 455 "data/maps/SootopolisCity/scripts.pory"

# 456 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 457 "data/maps/SootopolisCity/scripts.pory"
# 225 "data/maps/SootopolisCity/scripts.pory"
# 458 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
# 459 "data/maps/SootopolisCity/scripts.pory"
	return
# 460 "data/maps/SootopolisCity/scripts.pory"

# 461 "data/maps/SootopolisCity/scripts.pory"

# 462 "data/maps/SootopolisCity/scripts.pory"
# 229 "data/maps/SootopolisCity/scripts.pory"
# 463 "data/maps/SootopolisCity/scripts.pory"

# 464 "data/maps/SootopolisCity/scripts.pory"
# 230 "data/maps/SootopolisCity/scripts.pory"
# 465 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 466 "data/maps/SootopolisCity/scripts.pory"
# 231 "data/maps/SootopolisCity/scripts.pory"
# 467 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 468 "data/maps/SootopolisCity/scripts.pory"
# 232 "data/maps/SootopolisCity/scripts.pory"
# 469 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 470 "data/maps/SootopolisCity/scripts.pory"

# 471 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 472 "data/maps/SootopolisCity/scripts.pory"
# 237 "data/maps/SootopolisCity/scripts.pory"
# 473 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
# 474 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_PlayerFaceLegendaries_2
# 475 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries_1:
# 476 "data/maps/SootopolisCity/scripts.pory"
# 240 "data/maps/SootopolisCity/scripts.pory"
# 477 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 478 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_PlayerFaceLegendaries_5
# 479 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries_4:
# 480 "data/maps/SootopolisCity/scripts.pory"
	end
# 481 "data/maps/SootopolisCity/scripts.pory"

# 482 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries_2:
# 483 "data/maps/SootopolisCity/scripts.pory"
# 238 "data/maps/SootopolisCity/scripts.pory"
# 484 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_PlayerFaceLegendaries1
# 485 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_PlayerFaceLegendaries_1
# 486 "data/maps/SootopolisCity/scripts.pory"

# 487 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries_5:
# 488 "data/maps/SootopolisCity/scripts.pory"
# 241 "data/maps/SootopolisCity/scripts.pory"
# 489 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_PlayerFaceLegendaries2
# 490 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_PlayerFaceLegendaries_4
# 491 "data/maps/SootopolisCity/scripts.pory"

# 492 "data/maps/SootopolisCity/scripts.pory"

# 493 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 494 "data/maps/SootopolisCity/scripts.pory"
# 247 "data/maps/SootopolisCity/scripts.pory"
# 495 "data/maps/SootopolisCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 496 "data/maps/SootopolisCity/scripts.pory"
	return
# 497 "data/maps/SootopolisCity/scripts.pory"

# 498 "data/maps/SootopolisCity/scripts.pory"

# 499 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 500 "data/maps/SootopolisCity/scripts.pory"
# 252 "data/maps/SootopolisCity/scripts.pory"
# 501 "data/maps/SootopolisCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 502 "data/maps/SootopolisCity/scripts.pory"
# 253 "data/maps/SootopolisCity/scripts.pory"
# 503 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 504 "data/maps/SootopolisCity/scripts.pory"
	return
# 505 "data/maps/SootopolisCity/scripts.pory"

# 506 "data/maps/SootopolisCity/scripts.pory"

# 507 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume::
# 508 "data/maps/SootopolisCity/scripts.pory"
# 258 "data/maps/SootopolisCity/scripts.pory"
# 509 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 510 "data/maps/SootopolisCity/scripts.pory"
	end
# 511 "data/maps/SootopolisCity/scripts.pory"

# 512 "data/maps/SootopolisCity/scripts.pory"

# 513 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 514 "data/maps/SootopolisCity/scripts.pory"
# 263 "data/maps/SootopolisCity/scripts.pory"
# 515 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 516 "data/maps/SootopolisCity/scripts.pory"
# 264 "data/maps/SootopolisCity/scripts.pory"
# 517 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 518 "data/maps/SootopolisCity/scripts.pory"
# 265 "data/maps/SootopolisCity/scripts.pory"
# 519 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8004, 43
# 520 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne SootopolisCity_EventScript_StartLegendariesScene_2
# 521 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene_1:
# 522 "data/maps/SootopolisCity/scripts.pory"
# 268 "data/maps/SootopolisCity/scripts.pory"
# 523 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8005, 32
# 524 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne SootopolisCity_EventScript_StartLegendariesScene_5
# 525 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene_4:
# 526 "data/maps/SootopolisCity/scripts.pory"
# 271 "data/maps/SootopolisCity/scripts.pory"
# 527 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 528 "data/maps/SootopolisCity/scripts.pory"
	end
# 529 "data/maps/SootopolisCity/scripts.pory"

# 530 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene_2:
# 531 "data/maps/SootopolisCity/scripts.pory"
# 266 "data/maps/SootopolisCity/scripts.pory"
# 532 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromDive
# 533 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StartLegendariesScene_1
# 534 "data/maps/SootopolisCity/scripts.pory"

# 535 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene_5:
# 536 "data/maps/SootopolisCity/scripts.pory"
# 269 "data/maps/SootopolisCity/scripts.pory"
# 537 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromDive
# 538 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StartLegendariesScene_4
# 539 "data/maps/SootopolisCity/scripts.pory"

# 540 "data/maps/SootopolisCity/scripts.pory"

# 541 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 542 "data/maps/SootopolisCity/scripts.pory"
# 276 "data/maps/SootopolisCity/scripts.pory"
# 543 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 544 "data/maps/SootopolisCity/scripts.pory"
# 277 "data/maps/SootopolisCity/scripts.pory"
# 545 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 546 "data/maps/SootopolisCity/scripts.pory"
# 278 "data/maps/SootopolisCity/scripts.pory"
# 547 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 548 "data/maps/SootopolisCity/scripts.pory"
# 279 "data/maps/SootopolisCity/scripts.pory"
# 549 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/SootopolisCity/scripts.pory"
# 280 "data/maps/SootopolisCity/scripts.pory"
# 551 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 552 "data/maps/SootopolisCity/scripts.pory"
# 281 "data/maps/SootopolisCity/scripts.pory"
# 553 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 554 "data/maps/SootopolisCity/scripts.pory"
# 282 "data/maps/SootopolisCity/scripts.pory"
# 555 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 556 "data/maps/SootopolisCity/scripts.pory"
# 283 "data/maps/SootopolisCity/scripts.pory"
# 557 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 558 "data/maps/SootopolisCity/scripts.pory"
# 284 "data/maps/SootopolisCity/scripts.pory"
# 559 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 560 "data/maps/SootopolisCity/scripts.pory"
# 285 "data/maps/SootopolisCity/scripts.pory"
# 561 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE
# 562 "data/maps/SootopolisCity/scripts.pory"
# 286 "data/maps/SootopolisCity/scripts.pory"
# 563 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 564 "data/maps/SootopolisCity/scripts.pory"
# 287 "data/maps/SootopolisCity/scripts.pory"
# 565 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 566 "data/maps/SootopolisCity/scripts.pory"
# 288 "data/maps/SootopolisCity/scripts.pory"
# 567 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 568 "data/maps/SootopolisCity/scripts.pory"
# 289 "data/maps/SootopolisCity/scripts.pory"
# 569 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 570 "data/maps/SootopolisCity/scripts.pory"
# 290 "data/maps/SootopolisCity/scripts.pory"
# 571 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/SootopolisCity/scripts.pory"
# 291 "data/maps/SootopolisCity/scripts.pory"
# 573 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 574 "data/maps/SootopolisCity/scripts.pory"
# 292 "data/maps/SootopolisCity/scripts.pory"
# 575 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 576 "data/maps/SootopolisCity/scripts.pory"
# 293 "data/maps/SootopolisCity/scripts.pory"
# 577 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 578 "data/maps/SootopolisCity/scripts.pory"
# 294 "data/maps/SootopolisCity/scripts.pory"
# 579 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 580 "data/maps/SootopolisCity/scripts.pory"
# 295 "data/maps/SootopolisCity/scripts.pory"
# 581 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 582 "data/maps/SootopolisCity/scripts.pory"
# 296 "data/maps/SootopolisCity/scripts.pory"
# 583 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 584 "data/maps/SootopolisCity/scripts.pory"
# 297 "data/maps/SootopolisCity/scripts.pory"
# 585 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 586 "data/maps/SootopolisCity/scripts.pory"
# 298 "data/maps/SootopolisCity/scripts.pory"
# 587 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 588 "data/maps/SootopolisCity/scripts.pory"
# 299 "data/maps/SootopolisCity/scripts.pory"
# 589 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 590 "data/maps/SootopolisCity/scripts.pory"
# 300 "data/maps/SootopolisCity/scripts.pory"
# 591 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 592 "data/maps/SootopolisCity/scripts.pory"
# 301 "data/maps/SootopolisCity/scripts.pory"
# 593 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 594 "data/maps/SootopolisCity/scripts.pory"
# 302 "data/maps/SootopolisCity/scripts.pory"
# 595 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 596 "data/maps/SootopolisCity/scripts.pory"
# 303 "data/maps/SootopolisCity/scripts.pory"
# 597 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 598 "data/maps/SootopolisCity/scripts.pory"
# 304 "data/maps/SootopolisCity/scripts.pory"
# 599 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 600 "data/maps/SootopolisCity/scripts.pory"
# 305 "data/maps/SootopolisCity/scripts.pory"
# 601 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 602 "data/maps/SootopolisCity/scripts.pory"
# 306 "data/maps/SootopolisCity/scripts.pory"
# 603 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 604 "data/maps/SootopolisCity/scripts.pory"
# 307 "data/maps/SootopolisCity/scripts.pory"
# 605 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 606 "data/maps/SootopolisCity/scripts.pory"
# 308 "data/maps/SootopolisCity/scripts.pory"
# 607 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 608 "data/maps/SootopolisCity/scripts.pory"
# 309 "data/maps/SootopolisCity/scripts.pory"
# 609 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
# 610 "data/maps/SootopolisCity/scripts.pory"
# 310 "data/maps/SootopolisCity/scripts.pory"
# 611 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 612 "data/maps/SootopolisCity/scripts.pory"
# 311 "data/maps/SootopolisCity/scripts.pory"
# 613 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 614 "data/maps/SootopolisCity/scripts.pory"
# 312 "data/maps/SootopolisCity/scripts.pory"
# 615 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 616 "data/maps/SootopolisCity/scripts.pory"
# 313 "data/maps/SootopolisCity/scripts.pory"
# 617 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 618 "data/maps/SootopolisCity/scripts.pory"
# 314 "data/maps/SootopolisCity/scripts.pory"
# 619 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 620 "data/maps/SootopolisCity/scripts.pory"
# 315 "data/maps/SootopolisCity/scripts.pory"
# 621 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 622 "data/maps/SootopolisCity/scripts.pory"
# 316 "data/maps/SootopolisCity/scripts.pory"
# 623 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 624 "data/maps/SootopolisCity/scripts.pory"
# 317 "data/maps/SootopolisCity/scripts.pory"
# 625 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 626 "data/maps/SootopolisCity/scripts.pory"
# 318 "data/maps/SootopolisCity/scripts.pory"
# 627 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 628 "data/maps/SootopolisCity/scripts.pory"
# 319 "data/maps/SootopolisCity/scripts.pory"
# 629 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/SootopolisCity/scripts.pory"
# 320 "data/maps/SootopolisCity/scripts.pory"
# 631 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 632 "data/maps/SootopolisCity/scripts.pory"
# 321 "data/maps/SootopolisCity/scripts.pory"
# 633 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 634 "data/maps/SootopolisCity/scripts.pory"
# 322 "data/maps/SootopolisCity/scripts.pory"
# 635 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 636 "data/maps/SootopolisCity/scripts.pory"
# 323 "data/maps/SootopolisCity/scripts.pory"
# 637 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 638 "data/maps/SootopolisCity/scripts.pory"
# 324 "data/maps/SootopolisCity/scripts.pory"
# 639 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/SootopolisCity/scripts.pory"
# 325 "data/maps/SootopolisCity/scripts.pory"
# 641 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 642 "data/maps/SootopolisCity/scripts.pory"
# 326 "data/maps/SootopolisCity/scripts.pory"
# 643 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 644 "data/maps/SootopolisCity/scripts.pory"
# 327 "data/maps/SootopolisCity/scripts.pory"
# 645 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 646 "data/maps/SootopolisCity/scripts.pory"
# 328 "data/maps/SootopolisCity/scripts.pory"
# 647 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 648 "data/maps/SootopolisCity/scripts.pory"
# 329 "data/maps/SootopolisCity/scripts.pory"
# 649 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 650 "data/maps/SootopolisCity/scripts.pory"
# 330 "data/maps/SootopolisCity/scripts.pory"
# 651 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 652 "data/maps/SootopolisCity/scripts.pory"
# 331 "data/maps/SootopolisCity/scripts.pory"
# 653 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 654 "data/maps/SootopolisCity/scripts.pory"
# 332 "data/maps/SootopolisCity/scripts.pory"
# 655 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 656 "data/maps/SootopolisCity/scripts.pory"
# 333 "data/maps/SootopolisCity/scripts.pory"
# 657 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 658 "data/maps/SootopolisCity/scripts.pory"
# 334 "data/maps/SootopolisCity/scripts.pory"
# 659 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 660 "data/maps/SootopolisCity/scripts.pory"
# 335 "data/maps/SootopolisCity/scripts.pory"
# 661 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 662 "data/maps/SootopolisCity/scripts.pory"
# 336 "data/maps/SootopolisCity/scripts.pory"
# 663 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 664 "data/maps/SootopolisCity/scripts.pory"
# 337 "data/maps/SootopolisCity/scripts.pory"
# 665 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 666 "data/maps/SootopolisCity/scripts.pory"
# 338 "data/maps/SootopolisCity/scripts.pory"
# 667 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/SootopolisCity/scripts.pory"
# 339 "data/maps/SootopolisCity/scripts.pory"
# 669 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 670 "data/maps/SootopolisCity/scripts.pory"
# 340 "data/maps/SootopolisCity/scripts.pory"
# 671 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 672 "data/maps/SootopolisCity/scripts.pory"
# 341 "data/maps/SootopolisCity/scripts.pory"
# 673 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 674 "data/maps/SootopolisCity/scripts.pory"
# 342 "data/maps/SootopolisCity/scripts.pory"
# 675 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 676 "data/maps/SootopolisCity/scripts.pory"
	end
# 677 "data/maps/SootopolisCity/scripts.pory"

# 678 "data/maps/SootopolisCity/scripts.pory"

# 679 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter::
# 680 "data/maps/SootopolisCity/scripts.pory"
# 347 "data/maps/SootopolisCity/scripts.pory"
# 681 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 682 "data/maps/SootopolisCity/scripts.pory"
# 348 "data/maps/SootopolisCity/scripts.pory"
# 683 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 684 "data/maps/SootopolisCity/scripts.pory"
# 349 "data/maps/SootopolisCity/scripts.pory"
# 685 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 686 "data/maps/SootopolisCity/scripts.pory"
# 350 "data/maps/SootopolisCity/scripts.pory"
# 687 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 688 "data/maps/SootopolisCity/scripts.pory"
# 351 "data/maps/SootopolisCity/scripts.pory"
# 689 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 690 "data/maps/SootopolisCity/scripts.pory"
# 352 "data/maps/SootopolisCity/scripts.pory"
# 691 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 692 "data/maps/SootopolisCity/scripts.pory"
# 353 "data/maps/SootopolisCity/scripts.pory"
# 693 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 694 "data/maps/SootopolisCity/scripts.pory"
# 354 "data/maps/SootopolisCity/scripts.pory"
# 695 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 696 "data/maps/SootopolisCity/scripts.pory"
# 355 "data/maps/SootopolisCity/scripts.pory"
# 697 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 698 "data/maps/SootopolisCity/scripts.pory"
# 356 "data/maps/SootopolisCity/scripts.pory"
# 699 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 700 "data/maps/SootopolisCity/scripts.pory"
# 357 "data/maps/SootopolisCity/scripts.pory"
# 701 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 702 "data/maps/SootopolisCity/scripts.pory"
# 358 "data/maps/SootopolisCity/scripts.pory"
# 703 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 704 "data/maps/SootopolisCity/scripts.pory"
# 359 "data/maps/SootopolisCity/scripts.pory"
# 705 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 706 "data/maps/SootopolisCity/scripts.pory"
	return
# 707 "data/maps/SootopolisCity/scripts.pory"

# 708 "data/maps/SootopolisCity/scripts.pory"

# 709 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter::
# 710 "data/maps/SootopolisCity/scripts.pory"
# 363 "data/maps/SootopolisCity/scripts.pory"
# 711 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 712 "data/maps/SootopolisCity/scripts.pory"
# 364 "data/maps/SootopolisCity/scripts.pory"
# 713 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 714 "data/maps/SootopolisCity/scripts.pory"
# 365 "data/maps/SootopolisCity/scripts.pory"
# 715 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 716 "data/maps/SootopolisCity/scripts.pory"
# 366 "data/maps/SootopolisCity/scripts.pory"
# 717 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 718 "data/maps/SootopolisCity/scripts.pory"
# 367 "data/maps/SootopolisCity/scripts.pory"
# 719 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 720 "data/maps/SootopolisCity/scripts.pory"
# 368 "data/maps/SootopolisCity/scripts.pory"
# 721 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 722 "data/maps/SootopolisCity/scripts.pory"
# 369 "data/maps/SootopolisCity/scripts.pory"
# 723 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 724 "data/maps/SootopolisCity/scripts.pory"
# 370 "data/maps/SootopolisCity/scripts.pory"
# 725 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 726 "data/maps/SootopolisCity/scripts.pory"
# 371 "data/maps/SootopolisCity/scripts.pory"
# 727 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 728 "data/maps/SootopolisCity/scripts.pory"
# 372 "data/maps/SootopolisCity/scripts.pory"
# 729 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 730 "data/maps/SootopolisCity/scripts.pory"
# 373 "data/maps/SootopolisCity/scripts.pory"
# 731 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 732 "data/maps/SootopolisCity/scripts.pory"
# 374 "data/maps/SootopolisCity/scripts.pory"
# 733 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 734 "data/maps/SootopolisCity/scripts.pory"
# 375 "data/maps/SootopolisCity/scripts.pory"
# 735 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 736 "data/maps/SootopolisCity/scripts.pory"
	return
# 737 "data/maps/SootopolisCity/scripts.pory"

# 738 "data/maps/SootopolisCity/scripts.pory"

# 739 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 740 "data/maps/SootopolisCity/scripts.pory"
# 379 "data/maps/SootopolisCity/scripts.pory"
# 741 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 742 "data/maps/SootopolisCity/scripts.pory"
# 380 "data/maps/SootopolisCity/scripts.pory"
# 743 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 744 "data/maps/SootopolisCity/scripts.pory"
# 381 "data/maps/SootopolisCity/scripts.pory"
# 745 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 746 "data/maps/SootopolisCity/scripts.pory"
# 382 "data/maps/SootopolisCity/scripts.pory"
# 747 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 748 "data/maps/SootopolisCity/scripts.pory"
# 383 "data/maps/SootopolisCity/scripts.pory"
# 749 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 750 "data/maps/SootopolisCity/scripts.pory"
# 384 "data/maps/SootopolisCity/scripts.pory"
# 751 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 752 "data/maps/SootopolisCity/scripts.pory"
# 385 "data/maps/SootopolisCity/scripts.pory"
# 753 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 754 "data/maps/SootopolisCity/scripts.pory"
# 386 "data/maps/SootopolisCity/scripts.pory"
# 755 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 756 "data/maps/SootopolisCity/scripts.pory"
# 387 "data/maps/SootopolisCity/scripts.pory"
# 757 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 758 "data/maps/SootopolisCity/scripts.pory"
# 388 "data/maps/SootopolisCity/scripts.pory"
# 759 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE
# 760 "data/maps/SootopolisCity/scripts.pory"
# 389 "data/maps/SootopolisCity/scripts.pory"
# 761 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 762 "data/maps/SootopolisCity/scripts.pory"
# 390 "data/maps/SootopolisCity/scripts.pory"
# 763 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 764 "data/maps/SootopolisCity/scripts.pory"
# 391 "data/maps/SootopolisCity/scripts.pory"
# 765 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 766 "data/maps/SootopolisCity/scripts.pory"
# 392 "data/maps/SootopolisCity/scripts.pory"
# 767 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 768 "data/maps/SootopolisCity/scripts.pory"
# 393 "data/maps/SootopolisCity/scripts.pory"
# 769 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 770 "data/maps/SootopolisCity/scripts.pory"
# 394 "data/maps/SootopolisCity/scripts.pory"
# 771 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 772 "data/maps/SootopolisCity/scripts.pory"
# 395 "data/maps/SootopolisCity/scripts.pory"
# 773 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 774 "data/maps/SootopolisCity/scripts.pory"
# 396 "data/maps/SootopolisCity/scripts.pory"
# 775 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 776 "data/maps/SootopolisCity/scripts.pory"
# 397 "data/maps/SootopolisCity/scripts.pory"
# 777 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 778 "data/maps/SootopolisCity/scripts.pory"
# 398 "data/maps/SootopolisCity/scripts.pory"
# 779 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 780 "data/maps/SootopolisCity/scripts.pory"
# 399 "data/maps/SootopolisCity/scripts.pory"
# 781 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/SootopolisCity/scripts.pory"
# 400 "data/maps/SootopolisCity/scripts.pory"
# 783 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 784 "data/maps/SootopolisCity/scripts.pory"
# 401 "data/maps/SootopolisCity/scripts.pory"
# 785 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 786 "data/maps/SootopolisCity/scripts.pory"
# 402 "data/maps/SootopolisCity/scripts.pory"
# 787 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 788 "data/maps/SootopolisCity/scripts.pory"
# 403 "data/maps/SootopolisCity/scripts.pory"
# 789 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 790 "data/maps/SootopolisCity/scripts.pory"
# 404 "data/maps/SootopolisCity/scripts.pory"
# 791 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 792 "data/maps/SootopolisCity/scripts.pory"
# 405 "data/maps/SootopolisCity/scripts.pory"
# 793 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 794 "data/maps/SootopolisCity/scripts.pory"
# 406 "data/maps/SootopolisCity/scripts.pory"
# 795 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 796 "data/maps/SootopolisCity/scripts.pory"
# 407 "data/maps/SootopolisCity/scripts.pory"
# 797 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 798 "data/maps/SootopolisCity/scripts.pory"
# 408 "data/maps/SootopolisCity/scripts.pory"
# 799 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/SootopolisCity/scripts.pory"
# 409 "data/maps/SootopolisCity/scripts.pory"
# 801 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 802 "data/maps/SootopolisCity/scripts.pory"
# 410 "data/maps/SootopolisCity/scripts.pory"
# 803 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 804 "data/maps/SootopolisCity/scripts.pory"
# 411 "data/maps/SootopolisCity/scripts.pory"
# 805 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 806 "data/maps/SootopolisCity/scripts.pory"
# 412 "data/maps/SootopolisCity/scripts.pory"
# 807 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
# 808 "data/maps/SootopolisCity/scripts.pory"
# 413 "data/maps/SootopolisCity/scripts.pory"
# 809 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 810 "data/maps/SootopolisCity/scripts.pory"
# 414 "data/maps/SootopolisCity/scripts.pory"
# 811 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 812 "data/maps/SootopolisCity/scripts.pory"
# 415 "data/maps/SootopolisCity/scripts.pory"
# 813 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 814 "data/maps/SootopolisCity/scripts.pory"
# 416 "data/maps/SootopolisCity/scripts.pory"
# 815 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 816 "data/maps/SootopolisCity/scripts.pory"
# 417 "data/maps/SootopolisCity/scripts.pory"
# 817 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 818 "data/maps/SootopolisCity/scripts.pory"
# 418 "data/maps/SootopolisCity/scripts.pory"
# 819 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 820 "data/maps/SootopolisCity/scripts.pory"
# 419 "data/maps/SootopolisCity/scripts.pory"
# 821 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 822 "data/maps/SootopolisCity/scripts.pory"
# 420 "data/maps/SootopolisCity/scripts.pory"
# 823 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 824 "data/maps/SootopolisCity/scripts.pory"
# 421 "data/maps/SootopolisCity/scripts.pory"
# 825 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 826 "data/maps/SootopolisCity/scripts.pory"
# 422 "data/maps/SootopolisCity/scripts.pory"
# 827 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/SootopolisCity/scripts.pory"
# 423 "data/maps/SootopolisCity/scripts.pory"
# 829 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 830 "data/maps/SootopolisCity/scripts.pory"
# 424 "data/maps/SootopolisCity/scripts.pory"
# 831 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 832 "data/maps/SootopolisCity/scripts.pory"
# 425 "data/maps/SootopolisCity/scripts.pory"
# 833 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 834 "data/maps/SootopolisCity/scripts.pory"
# 426 "data/maps/SootopolisCity/scripts.pory"
# 835 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 836 "data/maps/SootopolisCity/scripts.pory"
# 427 "data/maps/SootopolisCity/scripts.pory"
# 837 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 838 "data/maps/SootopolisCity/scripts.pory"
# 428 "data/maps/SootopolisCity/scripts.pory"
# 839 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 840 "data/maps/SootopolisCity/scripts.pory"
# 429 "data/maps/SootopolisCity/scripts.pory"
# 841 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 842 "data/maps/SootopolisCity/scripts.pory"
# 430 "data/maps/SootopolisCity/scripts.pory"
# 843 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 844 "data/maps/SootopolisCity/scripts.pory"
# 431 "data/maps/SootopolisCity/scripts.pory"
# 845 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 846 "data/maps/SootopolisCity/scripts.pory"
# 432 "data/maps/SootopolisCity/scripts.pory"
# 847 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 848 "data/maps/SootopolisCity/scripts.pory"
# 433 "data/maps/SootopolisCity/scripts.pory"
# 849 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 850 "data/maps/SootopolisCity/scripts.pory"
# 434 "data/maps/SootopolisCity/scripts.pory"
# 851 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 852 "data/maps/SootopolisCity/scripts.pory"
# 435 "data/maps/SootopolisCity/scripts.pory"
# 853 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 854 "data/maps/SootopolisCity/scripts.pory"
# 436 "data/maps/SootopolisCity/scripts.pory"
# 855 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 856 "data/maps/SootopolisCity/scripts.pory"
# 437 "data/maps/SootopolisCity/scripts.pory"
# 857 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 858 "data/maps/SootopolisCity/scripts.pory"
# 438 "data/maps/SootopolisCity/scripts.pory"
# 859 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 860 "data/maps/SootopolisCity/scripts.pory"
# 439 "data/maps/SootopolisCity/scripts.pory"
# 861 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 862 "data/maps/SootopolisCity/scripts.pory"
# 440 "data/maps/SootopolisCity/scripts.pory"
# 863 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 864 "data/maps/SootopolisCity/scripts.pory"
# 441 "data/maps/SootopolisCity/scripts.pory"
# 865 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 866 "data/maps/SootopolisCity/scripts.pory"
# 442 "data/maps/SootopolisCity/scripts.pory"
# 867 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 868 "data/maps/SootopolisCity/scripts.pory"
# 443 "data/maps/SootopolisCity/scripts.pory"
# 869 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 870 "data/maps/SootopolisCity/scripts.pory"
# 444 "data/maps/SootopolisCity/scripts.pory"
# 871 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 872 "data/maps/SootopolisCity/scripts.pory"
# 445 "data/maps/SootopolisCity/scripts.pory"
# 873 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 874 "data/maps/SootopolisCity/scripts.pory"
	end
# 875 "data/maps/SootopolisCity/scripts.pory"

# 876 "data/maps/SootopolisCity/scripts.pory"

# 877 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive::
# 878 "data/maps/SootopolisCity/scripts.pory"
# 450 "data/maps/SootopolisCity/scripts.pory"
# 879 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 880 "data/maps/SootopolisCity/scripts.pory"
# 451 "data/maps/SootopolisCity/scripts.pory"
# 881 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 882 "data/maps/SootopolisCity/scripts.pory"
# 452 "data/maps/SootopolisCity/scripts.pory"
# 883 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 884 "data/maps/SootopolisCity/scripts.pory"
# 453 "data/maps/SootopolisCity/scripts.pory"
# 885 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 886 "data/maps/SootopolisCity/scripts.pory"
# 454 "data/maps/SootopolisCity/scripts.pory"
# 887 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 888 "data/maps/SootopolisCity/scripts.pory"
# 455 "data/maps/SootopolisCity/scripts.pory"
# 889 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 890 "data/maps/SootopolisCity/scripts.pory"
# 456 "data/maps/SootopolisCity/scripts.pory"
# 891 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 892 "data/maps/SootopolisCity/scripts.pory"
# 457 "data/maps/SootopolisCity/scripts.pory"
# 893 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 894 "data/maps/SootopolisCity/scripts.pory"
# 458 "data/maps/SootopolisCity/scripts.pory"
# 895 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 896 "data/maps/SootopolisCity/scripts.pory"
# 459 "data/maps/SootopolisCity/scripts.pory"
# 897 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 898 "data/maps/SootopolisCity/scripts.pory"
	return
# 899 "data/maps/SootopolisCity/scripts.pory"

# 900 "data/maps/SootopolisCity/scripts.pory"

# 901 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive::
# 902 "data/maps/SootopolisCity/scripts.pory"
# 463 "data/maps/SootopolisCity/scripts.pory"
# 903 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 904 "data/maps/SootopolisCity/scripts.pory"
# 464 "data/maps/SootopolisCity/scripts.pory"
# 905 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 906 "data/maps/SootopolisCity/scripts.pory"
# 465 "data/maps/SootopolisCity/scripts.pory"
# 907 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 908 "data/maps/SootopolisCity/scripts.pory"
# 466 "data/maps/SootopolisCity/scripts.pory"
# 909 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 910 "data/maps/SootopolisCity/scripts.pory"
# 467 "data/maps/SootopolisCity/scripts.pory"
# 911 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 912 "data/maps/SootopolisCity/scripts.pory"
# 468 "data/maps/SootopolisCity/scripts.pory"
# 913 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 914 "data/maps/SootopolisCity/scripts.pory"
# 469 "data/maps/SootopolisCity/scripts.pory"
# 915 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 916 "data/maps/SootopolisCity/scripts.pory"
# 470 "data/maps/SootopolisCity/scripts.pory"
# 917 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 918 "data/maps/SootopolisCity/scripts.pory"
# 471 "data/maps/SootopolisCity/scripts.pory"
# 919 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 920 "data/maps/SootopolisCity/scripts.pory"
# 472 "data/maps/SootopolisCity/scripts.pory"
# 921 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 922 "data/maps/SootopolisCity/scripts.pory"
	return
# 923 "data/maps/SootopolisCity/scripts.pory"

# 924 "data/maps/SootopolisCity/scripts.pory"

# 925 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack::
# 926 "data/maps/SootopolisCity/scripts.pory"
# 476 "data/maps/SootopolisCity/scripts.pory"
# 927 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 928 "data/maps/SootopolisCity/scripts.pory"
# 477 "data/maps/SootopolisCity/scripts.pory"
# 929 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 930 "data/maps/SootopolisCity/scripts.pory"
# 478 "data/maps/SootopolisCity/scripts.pory"
# 931 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 932 "data/maps/SootopolisCity/scripts.pory"
# 479 "data/maps/SootopolisCity/scripts.pory"
# 933 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 934 "data/maps/SootopolisCity/scripts.pory"
# 480 "data/maps/SootopolisCity/scripts.pory"
# 935 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 936 "data/maps/SootopolisCity/scripts.pory"
# 481 "data/maps/SootopolisCity/scripts.pory"
# 937 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 938 "data/maps/SootopolisCity/scripts.pory"
# 482 "data/maps/SootopolisCity/scripts.pory"
# 939 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 940 "data/maps/SootopolisCity/scripts.pory"
# 483 "data/maps/SootopolisCity/scripts.pory"
# 941 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 942 "data/maps/SootopolisCity/scripts.pory"
# 484 "data/maps/SootopolisCity/scripts.pory"
# 943 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 944 "data/maps/SootopolisCity/scripts.pory"
# 485 "data/maps/SootopolisCity/scripts.pory"
# 945 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 946 "data/maps/SootopolisCity/scripts.pory"
	return
# 947 "data/maps/SootopolisCity/scripts.pory"

# 948 "data/maps/SootopolisCity/scripts.pory"

# 949 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend::
# 950 "data/maps/SootopolisCity/scripts.pory"
# 489 "data/maps/SootopolisCity/scripts.pory"
# 951 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 952 "data/maps/SootopolisCity/scripts.pory"
# 490 "data/maps/SootopolisCity/scripts.pory"
# 953 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 954 "data/maps/SootopolisCity/scripts.pory"
# 491 "data/maps/SootopolisCity/scripts.pory"
# 955 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 956 "data/maps/SootopolisCity/scripts.pory"
# 492 "data/maps/SootopolisCity/scripts.pory"
# 957 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 958 "data/maps/SootopolisCity/scripts.pory"
# 493 "data/maps/SootopolisCity/scripts.pory"
# 959 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 960 "data/maps/SootopolisCity/scripts.pory"
# 494 "data/maps/SootopolisCity/scripts.pory"
# 961 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 962 "data/maps/SootopolisCity/scripts.pory"
# 495 "data/maps/SootopolisCity/scripts.pory"
# 963 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 964 "data/maps/SootopolisCity/scripts.pory"
# 496 "data/maps/SootopolisCity/scripts.pory"
# 965 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 966 "data/maps/SootopolisCity/scripts.pory"
# 497 "data/maps/SootopolisCity/scripts.pory"
# 967 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 968 "data/maps/SootopolisCity/scripts.pory"
# 498 "data/maps/SootopolisCity/scripts.pory"
# 969 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 970 "data/maps/SootopolisCity/scripts.pory"
# 499 "data/maps/SootopolisCity/scripts.pory"
# 971 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 972 "data/maps/SootopolisCity/scripts.pory"
# 500 "data/maps/SootopolisCity/scripts.pory"
# 973 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 974 "data/maps/SootopolisCity/scripts.pory"
# 501 "data/maps/SootopolisCity/scripts.pory"
# 975 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 976 "data/maps/SootopolisCity/scripts.pory"
	return
# 977 "data/maps/SootopolisCity/scripts.pory"

# 978 "data/maps/SootopolisCity/scripts.pory"

# 979 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack::
# 980 "data/maps/SootopolisCity/scripts.pory"
# 505 "data/maps/SootopolisCity/scripts.pory"
# 981 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 982 "data/maps/SootopolisCity/scripts.pory"
# 506 "data/maps/SootopolisCity/scripts.pory"
# 983 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 984 "data/maps/SootopolisCity/scripts.pory"
# 507 "data/maps/SootopolisCity/scripts.pory"
# 985 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 986 "data/maps/SootopolisCity/scripts.pory"
# 508 "data/maps/SootopolisCity/scripts.pory"
# 987 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 988 "data/maps/SootopolisCity/scripts.pory"
# 509 "data/maps/SootopolisCity/scripts.pory"
# 989 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 990 "data/maps/SootopolisCity/scripts.pory"
# 510 "data/maps/SootopolisCity/scripts.pory"
# 991 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 992 "data/maps/SootopolisCity/scripts.pory"
# 511 "data/maps/SootopolisCity/scripts.pory"
# 993 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 994 "data/maps/SootopolisCity/scripts.pory"
	return
# 995 "data/maps/SootopolisCity/scripts.pory"

# 996 "data/maps/SootopolisCity/scripts.pory"

# 997 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle::
# 998 "data/maps/SootopolisCity/scripts.pory"
# 515 "data/maps/SootopolisCity/scripts.pory"
# 999 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 1000 "data/maps/SootopolisCity/scripts.pory"
# 516 "data/maps/SootopolisCity/scripts.pory"
# 1001 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 1002 "data/maps/SootopolisCity/scripts.pory"
# 517 "data/maps/SootopolisCity/scripts.pory"
# 1003 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 1004 "data/maps/SootopolisCity/scripts.pory"
# 518 "data/maps/SootopolisCity/scripts.pory"
# 1005 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 1006 "data/maps/SootopolisCity/scripts.pory"
# 519 "data/maps/SootopolisCity/scripts.pory"
# 1007 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 1008 "data/maps/SootopolisCity/scripts.pory"
# 520 "data/maps/SootopolisCity/scripts.pory"
# 1009 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 1010 "data/maps/SootopolisCity/scripts.pory"
# 521 "data/maps/SootopolisCity/scripts.pory"
# 1011 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1012 "data/maps/SootopolisCity/scripts.pory"
	return
# 1013 "data/maps/SootopolisCity/scripts.pory"

# 1014 "data/maps/SootopolisCity/scripts.pory"

# 1015 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack::
# 1016 "data/maps/SootopolisCity/scripts.pory"
# 525 "data/maps/SootopolisCity/scripts.pory"
# 1017 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 1018 "data/maps/SootopolisCity/scripts.pory"
# 526 "data/maps/SootopolisCity/scripts.pory"
# 1019 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 1020 "data/maps/SootopolisCity/scripts.pory"
# 527 "data/maps/SootopolisCity/scripts.pory"
# 1021 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 1022 "data/maps/SootopolisCity/scripts.pory"
# 528 "data/maps/SootopolisCity/scripts.pory"
# 1023 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1024 "data/maps/SootopolisCity/scripts.pory"
# 529 "data/maps/SootopolisCity/scripts.pory"
# 1025 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1026 "data/maps/SootopolisCity/scripts.pory"
# 530 "data/maps/SootopolisCity/scripts.pory"
# 1027 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1028 "data/maps/SootopolisCity/scripts.pory"
# 531 "data/maps/SootopolisCity/scripts.pory"
# 1029 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 1030 "data/maps/SootopolisCity/scripts.pory"
# 532 "data/maps/SootopolisCity/scripts.pory"
# 1031 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1032 "data/maps/SootopolisCity/scripts.pory"
	return
# 1033 "data/maps/SootopolisCity/scripts.pory"

# 1034 "data/maps/SootopolisCity/scripts.pory"

# 1035 "data/maps/SootopolisCity/scripts.pory"
# 535 "data/maps/SootopolisCity/scripts.pory"
# 1036 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 1037 "data/maps/SootopolisCity/scripts.pory"
# 536 "data/maps/SootopolisCity/scripts.pory"
# 1038 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1039 "data/maps/SootopolisCity/scripts.pory"
# 537 "data/maps/SootopolisCity/scripts.pory"
# 1040 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1041 "data/maps/SootopolisCity/scripts.pory"
# 538 "data/maps/SootopolisCity/scripts.pory"
# 1042 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1043 "data/maps/SootopolisCity/scripts.pory"
# 539 "data/maps/SootopolisCity/scripts.pory"
# 1044 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1045 "data/maps/SootopolisCity/scripts.pory"
# 540 "data/maps/SootopolisCity/scripts.pory"
# 1046 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1047 "data/maps/SootopolisCity/scripts.pory"
# 541 "data/maps/SootopolisCity/scripts.pory"
# 1048 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1049 "data/maps/SootopolisCity/scripts.pory"
# 542 "data/maps/SootopolisCity/scripts.pory"
# 1050 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1051 "data/maps/SootopolisCity/scripts.pory"
# 543 "data/maps/SootopolisCity/scripts.pory"
# 1052 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1053 "data/maps/SootopolisCity/scripts.pory"
# 544 "data/maps/SootopolisCity/scripts.pory"
# 1054 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1055 "data/maps/SootopolisCity/scripts.pory"
# 545 "data/maps/SootopolisCity/scripts.pory"
# 1056 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 1057 "data/maps/SootopolisCity/scripts.pory"
# 546 "data/maps/SootopolisCity/scripts.pory"
# 1058 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1059 "data/maps/SootopolisCity/scripts.pory"

# 1060 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack::
# 1061 "data/maps/SootopolisCity/scripts.pory"
# 550 "data/maps/SootopolisCity/scripts.pory"
# 1062 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 1063 "data/maps/SootopolisCity/scripts.pory"
# 551 "data/maps/SootopolisCity/scripts.pory"
# 1064 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1065 "data/maps/SootopolisCity/scripts.pory"
# 552 "data/maps/SootopolisCity/scripts.pory"
# 1066 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1067 "data/maps/SootopolisCity/scripts.pory"
# 553 "data/maps/SootopolisCity/scripts.pory"
# 1068 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1069 "data/maps/SootopolisCity/scripts.pory"
# 554 "data/maps/SootopolisCity/scripts.pory"
# 1070 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1071 "data/maps/SootopolisCity/scripts.pory"
# 555 "data/maps/SootopolisCity/scripts.pory"
# 1072 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 1073 "data/maps/SootopolisCity/scripts.pory"
# 556 "data/maps/SootopolisCity/scripts.pory"
# 1074 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1075 "data/maps/SootopolisCity/scripts.pory"
	return
# 1076 "data/maps/SootopolisCity/scripts.pory"

# 1077 "data/maps/SootopolisCity/scripts.pory"

# 1078 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle::
# 1079 "data/maps/SootopolisCity/scripts.pory"
# 560 "data/maps/SootopolisCity/scripts.pory"
# 1080 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 1081 "data/maps/SootopolisCity/scripts.pory"
# 561 "data/maps/SootopolisCity/scripts.pory"
# 1082 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 1083 "data/maps/SootopolisCity/scripts.pory"
# 562 "data/maps/SootopolisCity/scripts.pory"
# 1084 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 1085 "data/maps/SootopolisCity/scripts.pory"
# 563 "data/maps/SootopolisCity/scripts.pory"
# 1086 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 1087 "data/maps/SootopolisCity/scripts.pory"
# 564 "data/maps/SootopolisCity/scripts.pory"
# 1088 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 1089 "data/maps/SootopolisCity/scripts.pory"
# 565 "data/maps/SootopolisCity/scripts.pory"
# 1090 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 1091 "data/maps/SootopolisCity/scripts.pory"
# 566 "data/maps/SootopolisCity/scripts.pory"
# 1092 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1093 "data/maps/SootopolisCity/scripts.pory"
	return
# 1094 "data/maps/SootopolisCity/scripts.pory"

# 1095 "data/maps/SootopolisCity/scripts.pory"

# 1096 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 1097 "data/maps/SootopolisCity/scripts.pory"
# 570 "data/maps/SootopolisCity/scripts.pory"
# 1098 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1099 "data/maps/SootopolisCity/scripts.pory"
# 571 "data/maps/SootopolisCity/scripts.pory"
# 1100 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 1101 "data/maps/SootopolisCity/scripts.pory"
# 572 "data/maps/SootopolisCity/scripts.pory"
# 1102 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8004, 43
# 1103 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne SootopolisCity_EventScript_StartRayquazaScene_2
# 1104 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene_1:
# 1105 "data/maps/SootopolisCity/scripts.pory"
# 575 "data/maps/SootopolisCity/scripts.pory"
# 1106 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8005, 32
# 1107 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne SootopolisCity_EventScript_StartRayquazaScene_5
# 1108 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene_4:
# 1109 "data/maps/SootopolisCity/scripts.pory"
# 578 "data/maps/SootopolisCity/scripts.pory"
# 1110 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 1111 "data/maps/SootopolisCity/scripts.pory"
	end
# 1112 "data/maps/SootopolisCity/scripts.pory"

# 1113 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene_2:
# 1114 "data/maps/SootopolisCity/scripts.pory"
# 573 "data/maps/SootopolisCity/scripts.pory"
# 1115 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromDive
# 1116 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StartRayquazaScene_1
# 1117 "data/maps/SootopolisCity/scripts.pory"

# 1118 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene_5:
# 1119 "data/maps/SootopolisCity/scripts.pory"
# 576 "data/maps/SootopolisCity/scripts.pory"
# 1120 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromDive
# 1121 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StartRayquazaScene_4
# 1122 "data/maps/SootopolisCity/scripts.pory"

# 1123 "data/maps/SootopolisCity/scripts.pory"

# 1124 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 1125 "data/maps/SootopolisCity/scripts.pory"
# 583 "data/maps/SootopolisCity/scripts.pory"
# 1126 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 1127 "data/maps/SootopolisCity/scripts.pory"
# 584 "data/maps/SootopolisCity/scripts.pory"
# 1128 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 1129 "data/maps/SootopolisCity/scripts.pory"
# 585 "data/maps/SootopolisCity/scripts.pory"
# 1130 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 1131 "data/maps/SootopolisCity/scripts.pory"
# 586 "data/maps/SootopolisCity/scripts.pory"
# 1132 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1133 "data/maps/SootopolisCity/scripts.pory"
# 587 "data/maps/SootopolisCity/scripts.pory"
# 1134 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 1135 "data/maps/SootopolisCity/scripts.pory"
# 588 "data/maps/SootopolisCity/scripts.pory"
# 1136 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 1137 "data/maps/SootopolisCity/scripts.pory"
# 589 "data/maps/SootopolisCity/scripts.pory"
# 1138 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1139 "data/maps/SootopolisCity/scripts.pory"
# 590 "data/maps/SootopolisCity/scripts.pory"
# 1140 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 1141 "data/maps/SootopolisCity/scripts.pory"
# 591 "data/maps/SootopolisCity/scripts.pory"
# 1142 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 1143 "data/maps/SootopolisCity/scripts.pory"
# 592 "data/maps/SootopolisCity/scripts.pory"
# 1144 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 1145 "data/maps/SootopolisCity/scripts.pory"
# 593 "data/maps/SootopolisCity/scripts.pory"
# 1146 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 1147 "data/maps/SootopolisCity/scripts.pory"
# 594 "data/maps/SootopolisCity/scripts.pory"
# 1148 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_SOOTOPOLIS_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 1149 "data/maps/SootopolisCity/scripts.pory"
# 595 "data/maps/SootopolisCity/scripts.pory"
# 1150 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 1151 "data/maps/SootopolisCity/scripts.pory"
# 596 "data/maps/SootopolisCity/scripts.pory"
# 1152 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 1153 "data/maps/SootopolisCity/scripts.pory"
# 597 "data/maps/SootopolisCity/scripts.pory"
# 1154 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1155 "data/maps/SootopolisCity/scripts.pory"
# 598 "data/maps/SootopolisCity/scripts.pory"
# 1156 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 1157 "data/maps/SootopolisCity/scripts.pory"
# 599 "data/maps/SootopolisCity/scripts.pory"
# 1158 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 1159 "data/maps/SootopolisCity/scripts.pory"
# 600 "data/maps/SootopolisCity/scripts.pory"
# 1160 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanUp
# 1161 "data/maps/SootopolisCity/scripts.pory"
# 601 "data/maps/SootopolisCity/scripts.pory"
# 1162 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1163 "data/maps/SootopolisCity/scripts.pory"
# 602 "data/maps/SootopolisCity/scripts.pory"
# 1164 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 1165 "data/maps/SootopolisCity/scripts.pory"
# 603 "data/maps/SootopolisCity/scripts.pory"
# 1166 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1167 "data/maps/SootopolisCity/scripts.pory"
# 604 "data/maps/SootopolisCity/scripts.pory"
# 1168 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 1169 "data/maps/SootopolisCity/scripts.pory"
# 605 "data/maps/SootopolisCity/scripts.pory"
# 1170 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 1171 "data/maps/SootopolisCity/scripts.pory"
# 606 "data/maps/SootopolisCity/scripts.pory"
# 1172 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 1173 "data/maps/SootopolisCity/scripts.pory"
# 607 "data/maps/SootopolisCity/scripts.pory"
# 1174 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3
# 1175 "data/maps/SootopolisCity/scripts.pory"
# 608 "data/maps/SootopolisCity/scripts.pory"
# 1176 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 1177 "data/maps/SootopolisCity/scripts.pory"
# 609 "data/maps/SootopolisCity/scripts.pory"
# 1178 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1179 "data/maps/SootopolisCity/scripts.pory"
# 610 "data/maps/SootopolisCity/scripts.pory"
# 1180 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 1181 "data/maps/SootopolisCity/scripts.pory"
# 611 "data/maps/SootopolisCity/scripts.pory"
# 1182 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1183 "data/maps/SootopolisCity/scripts.pory"
# 612 "data/maps/SootopolisCity/scripts.pory"
# 1184 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 1185 "data/maps/SootopolisCity/scripts.pory"
# 613 "data/maps/SootopolisCity/scripts.pory"
# 1186 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2
# 1187 "data/maps/SootopolisCity/scripts.pory"
# 614 "data/maps/SootopolisCity/scripts.pory"
# 1188 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 1189 "data/maps/SootopolisCity/scripts.pory"
# 615 "data/maps/SootopolisCity/scripts.pory"
# 1190 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 1191 "data/maps/SootopolisCity/scripts.pory"
# 616 "data/maps/SootopolisCity/scripts.pory"
# 1192 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 1193 "data/maps/SootopolisCity/scripts.pory"
# 617 "data/maps/SootopolisCity/scripts.pory"
# 1194 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1195 "data/maps/SootopolisCity/scripts.pory"
# 618 "data/maps/SootopolisCity/scripts.pory"
# 1196 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 1197 "data/maps/SootopolisCity/scripts.pory"
# 619 "data/maps/SootopolisCity/scripts.pory"
# 1198 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 1199 "data/maps/SootopolisCity/scripts.pory"
# 620 "data/maps/SootopolisCity/scripts.pory"
# 1200 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 1201 "data/maps/SootopolisCity/scripts.pory"
# 621 "data/maps/SootopolisCity/scripts.pory"
# 1202 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 1203 "data/maps/SootopolisCity/scripts.pory"
# 622 "data/maps/SootopolisCity/scripts.pory"
# 1204 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1205 "data/maps/SootopolisCity/scripts.pory"
# 623 "data/maps/SootopolisCity/scripts.pory"
# 1206 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 1207 "data/maps/SootopolisCity/scripts.pory"
# 624 "data/maps/SootopolisCity/scripts.pory"
# 1208 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 1209 "data/maps/SootopolisCity/scripts.pory"
# 625 "data/maps/SootopolisCity/scripts.pory"
# 1210 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1211 "data/maps/SootopolisCity/scripts.pory"
# 626 "data/maps/SootopolisCity/scripts.pory"
# 1212 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 1213 "data/maps/SootopolisCity/scripts.pory"
# 627 "data/maps/SootopolisCity/scripts.pory"
# 1214 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 1215 "data/maps/SootopolisCity/scripts.pory"
# 628 "data/maps/SootopolisCity/scripts.pory"
# 1216 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 1217 "data/maps/SootopolisCity/scripts.pory"
# 629 "data/maps/SootopolisCity/scripts.pory"
# 1218 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 1219 "data/maps/SootopolisCity/scripts.pory"
# 630 "data/maps/SootopolisCity/scripts.pory"
# 1220 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 1221 "data/maps/SootopolisCity/scripts.pory"
# 631 "data/maps/SootopolisCity/scripts.pory"
# 1222 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1223 "data/maps/SootopolisCity/scripts.pory"
# 632 "data/maps/SootopolisCity/scripts.pory"
# 1224 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
# 1225 "data/maps/SootopolisCity/scripts.pory"
# 633 "data/maps/SootopolisCity/scripts.pory"
# 1226 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1227 "data/maps/SootopolisCity/scripts.pory"
	end
# 1228 "data/maps/SootopolisCity/scripts.pory"

# 1229 "data/maps/SootopolisCity/scripts.pory"

# 1230 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 1231 "data/maps/SootopolisCity/scripts.pory"
# 638 "data/maps/SootopolisCity/scripts.pory"
# 1232 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 1233 "data/maps/SootopolisCity/scripts.pory"
# 639 "data/maps/SootopolisCity/scripts.pory"
# 1234 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 1235 "data/maps/SootopolisCity/scripts.pory"
# 640 "data/maps/SootopolisCity/scripts.pory"
# 1236 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 1237 "data/maps/SootopolisCity/scripts.pory"
# 641 "data/maps/SootopolisCity/scripts.pory"
# 1238 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1239 "data/maps/SootopolisCity/scripts.pory"
# 642 "data/maps/SootopolisCity/scripts.pory"
# 1240 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 1241 "data/maps/SootopolisCity/scripts.pory"
# 643 "data/maps/SootopolisCity/scripts.pory"
# 1242 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 1243 "data/maps/SootopolisCity/scripts.pory"
# 644 "data/maps/SootopolisCity/scripts.pory"
# 1244 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1245 "data/maps/SootopolisCity/scripts.pory"
# 645 "data/maps/SootopolisCity/scripts.pory"
# 1246 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 1247 "data/maps/SootopolisCity/scripts.pory"
# 646 "data/maps/SootopolisCity/scripts.pory"
# 1248 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 1249 "data/maps/SootopolisCity/scripts.pory"
# 647 "data/maps/SootopolisCity/scripts.pory"
# 1250 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 1251 "data/maps/SootopolisCity/scripts.pory"
# 648 "data/maps/SootopolisCity/scripts.pory"
# 1252 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 1253 "data/maps/SootopolisCity/scripts.pory"
# 649 "data/maps/SootopolisCity/scripts.pory"
# 1254 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 1255 "data/maps/SootopolisCity/scripts.pory"
# 650 "data/maps/SootopolisCity/scripts.pory"
# 1256 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 1257 "data/maps/SootopolisCity/scripts.pory"
# 651 "data/maps/SootopolisCity/scripts.pory"
# 1258 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1259 "data/maps/SootopolisCity/scripts.pory"
# 652 "data/maps/SootopolisCity/scripts.pory"
# 1260 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 1261 "data/maps/SootopolisCity/scripts.pory"
# 653 "data/maps/SootopolisCity/scripts.pory"
# 1262 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanUp
# 1263 "data/maps/SootopolisCity/scripts.pory"
# 654 "data/maps/SootopolisCity/scripts.pory"
# 1264 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 1265 "data/maps/SootopolisCity/scripts.pory"
# 655 "data/maps/SootopolisCity/scripts.pory"
# 1266 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1267 "data/maps/SootopolisCity/scripts.pory"
# 656 "data/maps/SootopolisCity/scripts.pory"
# 1268 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 1269 "data/maps/SootopolisCity/scripts.pory"
# 657 "data/maps/SootopolisCity/scripts.pory"
# 1270 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1271 "data/maps/SootopolisCity/scripts.pory"
# 658 "data/maps/SootopolisCity/scripts.pory"
# 1272 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 1273 "data/maps/SootopolisCity/scripts.pory"
# 659 "data/maps/SootopolisCity/scripts.pory"
# 1274 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 1275 "data/maps/SootopolisCity/scripts.pory"
# 660 "data/maps/SootopolisCity/scripts.pory"
# 1276 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 1277 "data/maps/SootopolisCity/scripts.pory"
# 661 "data/maps/SootopolisCity/scripts.pory"
# 1278 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3
# 1279 "data/maps/SootopolisCity/scripts.pory"
# 662 "data/maps/SootopolisCity/scripts.pory"
# 1280 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 1281 "data/maps/SootopolisCity/scripts.pory"
# 663 "data/maps/SootopolisCity/scripts.pory"
# 1282 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1283 "data/maps/SootopolisCity/scripts.pory"
# 664 "data/maps/SootopolisCity/scripts.pory"
# 1284 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 1285 "data/maps/SootopolisCity/scripts.pory"
# 665 "data/maps/SootopolisCity/scripts.pory"
# 1286 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1287 "data/maps/SootopolisCity/scripts.pory"
# 666 "data/maps/SootopolisCity/scripts.pory"
# 1288 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 1289 "data/maps/SootopolisCity/scripts.pory"
# 667 "data/maps/SootopolisCity/scripts.pory"
# 1290 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2
# 1291 "data/maps/SootopolisCity/scripts.pory"
# 668 "data/maps/SootopolisCity/scripts.pory"
# 1292 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 1293 "data/maps/SootopolisCity/scripts.pory"
# 669 "data/maps/SootopolisCity/scripts.pory"
# 1294 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 1295 "data/maps/SootopolisCity/scripts.pory"
# 670 "data/maps/SootopolisCity/scripts.pory"
# 1296 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 1297 "data/maps/SootopolisCity/scripts.pory"
# 671 "data/maps/SootopolisCity/scripts.pory"
# 1298 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1299 "data/maps/SootopolisCity/scripts.pory"
# 672 "data/maps/SootopolisCity/scripts.pory"
# 1300 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 1301 "data/maps/SootopolisCity/scripts.pory"
# 673 "data/maps/SootopolisCity/scripts.pory"
# 1302 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 1303 "data/maps/SootopolisCity/scripts.pory"
# 674 "data/maps/SootopolisCity/scripts.pory"
# 1304 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 1305 "data/maps/SootopolisCity/scripts.pory"
# 675 "data/maps/SootopolisCity/scripts.pory"
# 1306 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 1307 "data/maps/SootopolisCity/scripts.pory"
# 676 "data/maps/SootopolisCity/scripts.pory"
# 1308 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1309 "data/maps/SootopolisCity/scripts.pory"
# 677 "data/maps/SootopolisCity/scripts.pory"
# 1310 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 1311 "data/maps/SootopolisCity/scripts.pory"
# 678 "data/maps/SootopolisCity/scripts.pory"
# 1312 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 1313 "data/maps/SootopolisCity/scripts.pory"
# 679 "data/maps/SootopolisCity/scripts.pory"
# 1314 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1315 "data/maps/SootopolisCity/scripts.pory"
# 680 "data/maps/SootopolisCity/scripts.pory"
# 1316 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 1317 "data/maps/SootopolisCity/scripts.pory"
# 681 "data/maps/SootopolisCity/scripts.pory"
# 1318 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
# 1319 "data/maps/SootopolisCity/scripts.pory"
# 682 "data/maps/SootopolisCity/scripts.pory"
# 1320 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 1321 "data/maps/SootopolisCity/scripts.pory"
# 683 "data/maps/SootopolisCity/scripts.pory"
# 1322 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
# 1323 "data/maps/SootopolisCity/scripts.pory"
# 684 "data/maps/SootopolisCity/scripts.pory"
# 1324 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 1325 "data/maps/SootopolisCity/scripts.pory"
# 685 "data/maps/SootopolisCity/scripts.pory"
# 1326 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1327 "data/maps/SootopolisCity/scripts.pory"
# 686 "data/maps/SootopolisCity/scripts.pory"
# 1328 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
# 1329 "data/maps/SootopolisCity/scripts.pory"
# 687 "data/maps/SootopolisCity/scripts.pory"
# 1330 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1331 "data/maps/SootopolisCity/scripts.pory"
	end
# 1332 "data/maps/SootopolisCity/scripts.pory"

# 1333 "data/maps/SootopolisCity/scripts.pory"

# 1334 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 1335 "data/maps/SootopolisCity/scripts.pory"
# 692 "data/maps/SootopolisCity/scripts.pory"
# 1336 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 1337 "data/maps/SootopolisCity/scripts.pory"
# 693 "data/maps/SootopolisCity/scripts.pory"
# 1338 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 1339 "data/maps/SootopolisCity/scripts.pory"
# 694 "data/maps/SootopolisCity/scripts.pory"
# 1340 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 1341 "data/maps/SootopolisCity/scripts.pory"
# 695 "data/maps/SootopolisCity/scripts.pory"
# 1342 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 1343 "data/maps/SootopolisCity/scripts.pory"
# 696 "data/maps/SootopolisCity/scripts.pory"
# 1344 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 1345 "data/maps/SootopolisCity/scripts.pory"
# 697 "data/maps/SootopolisCity/scripts.pory"
# 1346 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 1347 "data/maps/SootopolisCity/scripts.pory"
# 698 "data/maps/SootopolisCity/scripts.pory"
# 1348 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 1349 "data/maps/SootopolisCity/scripts.pory"
# 699 "data/maps/SootopolisCity/scripts.pory"
# 1350 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 1351 "data/maps/SootopolisCity/scripts.pory"
# 700 "data/maps/SootopolisCity/scripts.pory"
# 1352 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 1353 "data/maps/SootopolisCity/scripts.pory"
# 701 "data/maps/SootopolisCity/scripts.pory"
# 1354 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 1355 "data/maps/SootopolisCity/scripts.pory"
# 702 "data/maps/SootopolisCity/scripts.pory"
# 1356 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 1357 "data/maps/SootopolisCity/scripts.pory"
# 703 "data/maps/SootopolisCity/scripts.pory"
# 1358 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 1359 "data/maps/SootopolisCity/scripts.pory"
# 704 "data/maps/SootopolisCity/scripts.pory"
# 1360 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 1361 "data/maps/SootopolisCity/scripts.pory"
# 705 "data/maps/SootopolisCity/scripts.pory"
# 1362 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 1363 "data/maps/SootopolisCity/scripts.pory"
# 706 "data/maps/SootopolisCity/scripts.pory"
# 1364 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 1365 "data/maps/SootopolisCity/scripts.pory"
# 707 "data/maps/SootopolisCity/scripts.pory"
# 1366 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 1367 "data/maps/SootopolisCity/scripts.pory"
# 708 "data/maps/SootopolisCity/scripts.pory"
# 1368 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 1369 "data/maps/SootopolisCity/scripts.pory"
# 709 "data/maps/SootopolisCity/scripts.pory"
# 1370 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 1371 "data/maps/SootopolisCity/scripts.pory"
# 710 "data/maps/SootopolisCity/scripts.pory"
# 1372 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 1373 "data/maps/SootopolisCity/scripts.pory"
# 711 "data/maps/SootopolisCity/scripts.pory"
# 1374 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 1375 "data/maps/SootopolisCity/scripts.pory"
# 712 "data/maps/SootopolisCity/scripts.pory"
# 1376 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 1377 "data/maps/SootopolisCity/scripts.pory"
# 713 "data/maps/SootopolisCity/scripts.pory"
# 1378 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 1379 "data/maps/SootopolisCity/scripts.pory"
# 714 "data/maps/SootopolisCity/scripts.pory"
# 1380 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 1381 "data/maps/SootopolisCity/scripts.pory"
# 715 "data/maps/SootopolisCity/scripts.pory"
# 1382 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 1383 "data/maps/SootopolisCity/scripts.pory"
	return
# 1384 "data/maps/SootopolisCity/scripts.pory"

# 1385 "data/maps/SootopolisCity/scripts.pory"

# 1386 "data/maps/SootopolisCity/scripts.pory"
# 719 "data/maps/SootopolisCity/scripts.pory"
# 1387 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 1388 "data/maps/SootopolisCity/scripts.pory"
# 720 "data/maps/SootopolisCity/scripts.pory"
# 1389 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 1390 "data/maps/SootopolisCity/scripts.pory"
# 721 "data/maps/SootopolisCity/scripts.pory"
# 1391 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 1392 "data/maps/SootopolisCity/scripts.pory"
# 722 "data/maps/SootopolisCity/scripts.pory"
# 1393 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 1394 "data/maps/SootopolisCity/scripts.pory"
# 723 "data/maps/SootopolisCity/scripts.pory"
# 1395 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 1396 "data/maps/SootopolisCity/scripts.pory"
# 724 "data/maps/SootopolisCity/scripts.pory"
# 1397 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 1398 "data/maps/SootopolisCity/scripts.pory"
# 725 "data/maps/SootopolisCity/scripts.pory"
# 1399 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 1400 "data/maps/SootopolisCity/scripts.pory"
# 726 "data/maps/SootopolisCity/scripts.pory"
# 1401 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 1402 "data/maps/SootopolisCity/scripts.pory"
# 727 "data/maps/SootopolisCity/scripts.pory"
# 1403 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1404 "data/maps/SootopolisCity/scripts.pory"

# 1405 "data/maps/SootopolisCity/scripts.pory"
# 730 "data/maps/SootopolisCity/scripts.pory"
# 1406 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 1407 "data/maps/SootopolisCity/scripts.pory"
# 731 "data/maps/SootopolisCity/scripts.pory"
# 1408 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1409 "data/maps/SootopolisCity/scripts.pory"
# 732 "data/maps/SootopolisCity/scripts.pory"
# 1410 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1411 "data/maps/SootopolisCity/scripts.pory"
# 733 "data/maps/SootopolisCity/scripts.pory"
# 1412 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1413 "data/maps/SootopolisCity/scripts.pory"
# 734 "data/maps/SootopolisCity/scripts.pory"
# 1414 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1415 "data/maps/SootopolisCity/scripts.pory"
# 735 "data/maps/SootopolisCity/scripts.pory"
# 1416 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1417 "data/maps/SootopolisCity/scripts.pory"

# 1418 "data/maps/SootopolisCity/scripts.pory"
# 738 "data/maps/SootopolisCity/scripts.pory"
# 1419 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 1420 "data/maps/SootopolisCity/scripts.pory"
# 739 "data/maps/SootopolisCity/scripts.pory"
# 1421 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1422 "data/maps/SootopolisCity/scripts.pory"
# 740 "data/maps/SootopolisCity/scripts.pory"
# 1423 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1424 "data/maps/SootopolisCity/scripts.pory"
# 741 "data/maps/SootopolisCity/scripts.pory"
# 1425 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1426 "data/maps/SootopolisCity/scripts.pory"
# 742 "data/maps/SootopolisCity/scripts.pory"
# 1427 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1428 "data/maps/SootopolisCity/scripts.pory"
# 743 "data/maps/SootopolisCity/scripts.pory"
# 1429 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1430 "data/maps/SootopolisCity/scripts.pory"

# 1431 "data/maps/SootopolisCity/scripts.pory"
# 746 "data/maps/SootopolisCity/scripts.pory"
# 1432 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 1433 "data/maps/SootopolisCity/scripts.pory"
# 747 "data/maps/SootopolisCity/scripts.pory"
# 1434 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1435 "data/maps/SootopolisCity/scripts.pory"
# 748 "data/maps/SootopolisCity/scripts.pory"
# 1436 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1437 "data/maps/SootopolisCity/scripts.pory"
# 749 "data/maps/SootopolisCity/scripts.pory"
# 1438 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1439 "data/maps/SootopolisCity/scripts.pory"
# 750 "data/maps/SootopolisCity/scripts.pory"
# 1440 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1441 "data/maps/SootopolisCity/scripts.pory"
# 751 "data/maps/SootopolisCity/scripts.pory"
# 1442 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1443 "data/maps/SootopolisCity/scripts.pory"

# 1444 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp::
# 1445 "data/maps/SootopolisCity/scripts.pory"
# 755 "data/maps/SootopolisCity/scripts.pory"
# 1446 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 1447 "data/maps/SootopolisCity/scripts.pory"
# 756 "data/maps/SootopolisCity/scripts.pory"
# 1448 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 1449 "data/maps/SootopolisCity/scripts.pory"
# 757 "data/maps/SootopolisCity/scripts.pory"
# 1450 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 1451 "data/maps/SootopolisCity/scripts.pory"
# 758 "data/maps/SootopolisCity/scripts.pory"
# 1452 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 1453 "data/maps/SootopolisCity/scripts.pory"
# 759 "data/maps/SootopolisCity/scripts.pory"
# 1454 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 1455 "data/maps/SootopolisCity/scripts.pory"
# 760 "data/maps/SootopolisCity/scripts.pory"
# 1456 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 1457 "data/maps/SootopolisCity/scripts.pory"
# 761 "data/maps/SootopolisCity/scripts.pory"
# 1458 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 1459 "data/maps/SootopolisCity/scripts.pory"
# 762 "data/maps/SootopolisCity/scripts.pory"
# 1460 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 1461 "data/maps/SootopolisCity/scripts.pory"
# 763 "data/maps/SootopolisCity/scripts.pory"
# 1462 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1463 "data/maps/SootopolisCity/scripts.pory"
# 764 "data/maps/SootopolisCity/scripts.pory"
# 1464 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1465 "data/maps/SootopolisCity/scripts.pory"
# 765 "data/maps/SootopolisCity/scripts.pory"
# 1466 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1467 "data/maps/SootopolisCity/scripts.pory"
# 766 "data/maps/SootopolisCity/scripts.pory"
# 1468 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1469 "data/maps/SootopolisCity/scripts.pory"
# 767 "data/maps/SootopolisCity/scripts.pory"
# 1470 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1471 "data/maps/SootopolisCity/scripts.pory"
	return
# 1472 "data/maps/SootopolisCity/scripts.pory"

# 1473 "data/maps/SootopolisCity/scripts.pory"

# 1474 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack::
# 1475 "data/maps/SootopolisCity/scripts.pory"
# 771 "data/maps/SootopolisCity/scripts.pory"
# 1476 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1477 "data/maps/SootopolisCity/scripts.pory"
# 772 "data/maps/SootopolisCity/scripts.pory"
# 1478 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1479 "data/maps/SootopolisCity/scripts.pory"
# 773 "data/maps/SootopolisCity/scripts.pory"
# 1480 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1481 "data/maps/SootopolisCity/scripts.pory"
# 774 "data/maps/SootopolisCity/scripts.pory"
# 1482 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1483 "data/maps/SootopolisCity/scripts.pory"
# 775 "data/maps/SootopolisCity/scripts.pory"
# 1484 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1485 "data/maps/SootopolisCity/scripts.pory"
# 776 "data/maps/SootopolisCity/scripts.pory"
# 1486 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1487 "data/maps/SootopolisCity/scripts.pory"
# 777 "data/maps/SootopolisCity/scripts.pory"
# 1488 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1489 "data/maps/SootopolisCity/scripts.pory"
# 778 "data/maps/SootopolisCity/scripts.pory"
# 1490 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1491 "data/maps/SootopolisCity/scripts.pory"
# 779 "data/maps/SootopolisCity/scripts.pory"
# 1492 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1493 "data/maps/SootopolisCity/scripts.pory"
# 780 "data/maps/SootopolisCity/scripts.pory"
# 1494 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1495 "data/maps/SootopolisCity/scripts.pory"
# 781 "data/maps/SootopolisCity/scripts.pory"
# 1496 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1497 "data/maps/SootopolisCity/scripts.pory"
# 782 "data/maps/SootopolisCity/scripts.pory"
# 1498 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 1499 "data/maps/SootopolisCity/scripts.pory"
# 783 "data/maps/SootopolisCity/scripts.pory"
# 1500 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 1501 "data/maps/SootopolisCity/scripts.pory"
# 784 "data/maps/SootopolisCity/scripts.pory"
# 1502 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1503 "data/maps/SootopolisCity/scripts.pory"
	return
# 1504 "data/maps/SootopolisCity/scripts.pory"

# 1505 "data/maps/SootopolisCity/scripts.pory"

# 1506 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 1507 "data/maps/SootopolisCity/scripts.pory"
# 788 "data/maps/SootopolisCity/scripts.pory"
# 1508 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1509 "data/maps/SootopolisCity/scripts.pory"
# 789 "data/maps/SootopolisCity/scripts.pory"
# 1510 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1511 "data/maps/SootopolisCity/scripts.pory"
# 790 "data/maps/SootopolisCity/scripts.pory"
# 1512 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
# 1513 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge SootopolisCity_EventScript_CaveOfOriginExpert_2
# 1514 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert_1:
# 1515 "data/maps/SootopolisCity/scripts.pory"
# 793 "data/maps/SootopolisCity/scripts.pory"
# 1516 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 1517 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_CaveOfOriginExpert_5
# 1518 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert_4:
# 1519 "data/maps/SootopolisCity/scripts.pory"
# 796 "data/maps/SootopolisCity/scripts.pory"
# 1520 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
# 1521 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge SootopolisCity_EventScript_CaveOfOriginExpert_8
# 1522 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert_7:
# 1523 "data/maps/SootopolisCity/scripts.pory"
# 799 "data/maps/SootopolisCity/scripts.pory"
# 1524 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 1525 "data/maps/SootopolisCity/scripts.pory"
# 800 "data/maps/SootopolisCity/scripts.pory"
# 1526 "data/maps/SootopolisCity/scripts.pory"
	release
# 1527 "data/maps/SootopolisCity/scripts.pory"
	end
# 1528 "data/maps/SootopolisCity/scripts.pory"

# 1529 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert_2:
# 1530 "data/maps/SootopolisCity/scripts.pory"
# 791 "data/maps/SootopolisCity/scripts.pory"
# 1531 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ExpertPostLegendaries
# 1532 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_CaveOfOriginExpert_1
# 1533 "data/maps/SootopolisCity/scripts.pory"

# 1534 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert_5:
# 1535 "data/maps/SootopolisCity/scripts.pory"
# 794 "data/maps/SootopolisCity/scripts.pory"
# 1536 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ExpertLegendaries
# 1537 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_CaveOfOriginExpert_4
# 1538 "data/maps/SootopolisCity/scripts.pory"

# 1539 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert_8:
# 1540 "data/maps/SootopolisCity/scripts.pory"
# 797 "data/maps/SootopolisCity/scripts.pory"
# 1541 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ExpertLeadToCave
# 1542 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_CaveOfOriginExpert_7
# 1543 "data/maps/SootopolisCity/scripts.pory"

# 1544 "data/maps/SootopolisCity/scripts.pory"

# 1545 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 1546 "data/maps/SootopolisCity/scripts.pory"
# 805 "data/maps/SootopolisCity/scripts.pory"
# 1547 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 1548 "data/maps/SootopolisCity/scripts.pory"
# 806 "data/maps/SootopolisCity/scripts.pory"
# 1549 "data/maps/SootopolisCity/scripts.pory"
	release
# 1550 "data/maps/SootopolisCity/scripts.pory"
	end
# 1551 "data/maps/SootopolisCity/scripts.pory"

# 1552 "data/maps/SootopolisCity/scripts.pory"

# 1553 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 1554 "data/maps/SootopolisCity/scripts.pory"
# 811 "data/maps/SootopolisCity/scripts.pory"
# 1555 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 1556 "data/maps/SootopolisCity/scripts.pory"
# 812 "data/maps/SootopolisCity/scripts.pory"
# 1557 "data/maps/SootopolisCity/scripts.pory"
	release
# 1558 "data/maps/SootopolisCity/scripts.pory"
	end
# 1559 "data/maps/SootopolisCity/scripts.pory"

# 1560 "data/maps/SootopolisCity/scripts.pory"

# 1561 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 1562 "data/maps/SootopolisCity/scripts.pory"
# 817 "data/maps/SootopolisCity/scripts.pory"
# 1563 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 1564 "data/maps/SootopolisCity/scripts.pory"
# 818 "data/maps/SootopolisCity/scripts.pory"
# 1565 "data/maps/SootopolisCity/scripts.pory"
	release
# 1566 "data/maps/SootopolisCity/scripts.pory"
	end
# 1567 "data/maps/SootopolisCity/scripts.pory"

# 1568 "data/maps/SootopolisCity/scripts.pory"

# 1569 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 1570 "data/maps/SootopolisCity/scripts.pory"
# 823 "data/maps/SootopolisCity/scripts.pory"
# 1571 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1572 "data/maps/SootopolisCity/scripts.pory"
# 824 "data/maps/SootopolisCity/scripts.pory"
# 1573 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1574 "data/maps/SootopolisCity/scripts.pory"
# 825 "data/maps/SootopolisCity/scripts.pory"
# 1575 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
# 1576 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le SootopolisCity_EventScript_Kiri_2
# 1577 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri_1:
# 1578 "data/maps/SootopolisCity/scripts.pory"
# 828 "data/maps/SootopolisCity/scripts.pory"
# 1579 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
# 1580 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge SootopolisCity_EventScript_Kiri_5
# 1581 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri_4:
# 1582 "data/maps/SootopolisCity/scripts.pory"
# 831 "data/maps/SootopolisCity/scripts.pory"
# 1583 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 1584 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Kiri_8
# 1585 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri_7:
# 1586 "data/maps/SootopolisCity/scripts.pory"
# 834 "data/maps/SootopolisCity/scripts.pory"
# 1587 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 1588 "data/maps/SootopolisCity/scripts.pory"
# 835 "data/maps/SootopolisCity/scripts.pory"
# 1589 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1590 "data/maps/SootopolisCity/scripts.pory"
# 836 "data/maps/SootopolisCity/scripts.pory"
# 1591 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 1592 "data/maps/SootopolisCity/scripts.pory"
# 837 "data/maps/SootopolisCity/scripts.pory"
# 1593 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1594 "data/maps/SootopolisCity/scripts.pory"
# 838 "data/maps/SootopolisCity/scripts.pory"
# 1595 "data/maps/SootopolisCity/scripts.pory"
	release
# 1596 "data/maps/SootopolisCity/scripts.pory"
	end
# 1597 "data/maps/SootopolisCity/scripts.pory"

# 1598 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri_2:
# 1599 "data/maps/SootopolisCity/scripts.pory"
# 826 "data/maps/SootopolisCity/scripts.pory"
# 1600 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriGiveBerry
# 1601 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Kiri_1
# 1602 "data/maps/SootopolisCity/scripts.pory"

# 1603 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri_5:
# 1604 "data/maps/SootopolisCity/scripts.pory"
# 829 "data/maps/SootopolisCity/scripts.pory"
# 1605 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriGiveBerry
# 1606 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Kiri_4
# 1607 "data/maps/SootopolisCity/scripts.pory"

# 1608 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri_8:
# 1609 "data/maps/SootopolisCity/scripts.pory"
# 832 "data/maps/SootopolisCity/scripts.pory"
# 1610 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriRayquaza
# 1611 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Kiri_7
# 1612 "data/maps/SootopolisCity/scripts.pory"

# 1613 "data/maps/SootopolisCity/scripts.pory"

# 1614 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 1615 "data/maps/SootopolisCity/scripts.pory"
# 843 "data/maps/SootopolisCity/scripts.pory"
# 1616 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 1617 "data/maps/SootopolisCity/scripts.pory"
# 844 "data/maps/SootopolisCity/scripts.pory"
# 1618 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1619 "data/maps/SootopolisCity/scripts.pory"
# 845 "data/maps/SootopolisCity/scripts.pory"
# 1620 "data/maps/SootopolisCity/scripts.pory"
	release
# 1621 "data/maps/SootopolisCity/scripts.pory"
	end
# 1622 "data/maps/SootopolisCity/scripts.pory"

# 1623 "data/maps/SootopolisCity/scripts.pory"

# 1624 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 1625 "data/maps/SootopolisCity/scripts.pory"
# 850 "data/maps/SootopolisCity/scripts.pory"
# 1626 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 1627 "data/maps/SootopolisCity/scripts.pory"
# 851 "data/maps/SootopolisCity/scripts.pory"
# 1628 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1629 "data/maps/SootopolisCity/scripts.pory"
# 852 "data/maps/SootopolisCity/scripts.pory"
# 1630 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriGiveBerry_2
# 1631 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry_1:
# 1632 "data/maps/SootopolisCity/scripts.pory"
# 855 "data/maps/SootopolisCity/scripts.pory"
# 1633 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 1634 "data/maps/SootopolisCity/scripts.pory"
# 856 "data/maps/SootopolisCity/scripts.pory"
# 1635 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 1636 "data/maps/SootopolisCity/scripts.pory"
# 857 "data/maps/SootopolisCity/scripts.pory"
# 1637 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 1638 "data/maps/SootopolisCity/scripts.pory"
# 858 "data/maps/SootopolisCity/scripts.pory"
# 1639 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 1640 "data/maps/SootopolisCity/scripts.pory"
# 859 "data/maps/SootopolisCity/scripts.pory"
# 1641 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 1642 "data/maps/SootopolisCity/scripts.pory"
# 860 "data/maps/SootopolisCity/scripts.pory"
# 1643 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 1644 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_5
# 1645 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry_4:
# 1646 "data/maps/SootopolisCity/scripts.pory"
# 863 "data/maps/SootopolisCity/scripts.pory"
# 1647 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 1648 "data/maps/SootopolisCity/scripts.pory"
# 864 "data/maps/SootopolisCity/scripts.pory"
# 1649 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 1650 "data/maps/SootopolisCity/scripts.pory"
# 865 "data/maps/SootopolisCity/scripts.pory"
# 1651 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 1652 "data/maps/SootopolisCity/scripts.pory"
# 866 "data/maps/SootopolisCity/scripts.pory"
# 1653 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, 0
# 1654 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_8
# 1655 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry_7:
# 1656 "data/maps/SootopolisCity/scripts.pory"
# 869 "data/maps/SootopolisCity/scripts.pory"
# 1657 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, 1
# 1658 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_11
# 1659 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry_10:
# 1660 "data/maps/SootopolisCity/scripts.pory"
	end
# 1661 "data/maps/SootopolisCity/scripts.pory"

# 1662 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry_2:
# 1663 "data/maps/SootopolisCity/scripts.pory"
# 853 "data/maps/SootopolisCity/scripts.pory"
# 1664 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriReceivedBerry
# 1665 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriGiveBerry_1
# 1666 "data/maps/SootopolisCity/scripts.pory"

# 1667 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry_5:
# 1668 "data/maps/SootopolisCity/scripts.pory"
# 861 "data/maps/SootopolisCity/scripts.pory"
# 1669 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 1670 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriGiveBerry_4
# 1671 "data/maps/SootopolisCity/scripts.pory"

# 1672 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry_8:
# 1673 "data/maps/SootopolisCity/scripts.pory"
# 867 "data/maps/SootopolisCity/scripts.pory"
# 1674 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveFigyBerry
# 1675 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriGiveBerry_7
# 1676 "data/maps/SootopolisCity/scripts.pory"

# 1677 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry_11:
# 1678 "data/maps/SootopolisCity/scripts.pory"
# 870 "data/maps/SootopolisCity/scripts.pory"
# 1679 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveIapapaBerry
# 1680 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriGiveBerry_10
# 1681 "data/maps/SootopolisCity/scripts.pory"

# 1682 "data/maps/SootopolisCity/scripts.pory"

# 1683 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 1684 "data/maps/SootopolisCity/scripts.pory"
# 876 "data/maps/SootopolisCity/scripts.pory"
# 1685 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 1686 "data/maps/SootopolisCity/scripts.pory"
# 877 "data/maps/SootopolisCity/scripts.pory"
# 1687 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 1688 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_GiveFigyBerry_2
# 1689 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry_1:
# 1690 "data/maps/SootopolisCity/scripts.pory"
# 880 "data/maps/SootopolisCity/scripts.pory"
# 1691 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 1692 "data/maps/SootopolisCity/scripts.pory"
# 881 "data/maps/SootopolisCity/scripts.pory"
# 1693 "data/maps/SootopolisCity/scripts.pory"
	release
# 1694 "data/maps/SootopolisCity/scripts.pory"
	end
# 1695 "data/maps/SootopolisCity/scripts.pory"

# 1696 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry_2:
# 1697 "data/maps/SootopolisCity/scripts.pory"
# 878 "data/maps/SootopolisCity/scripts.pory"
# 1698 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 1699 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveFigyBerry_1
# 1700 "data/maps/SootopolisCity/scripts.pory"

# 1701 "data/maps/SootopolisCity/scripts.pory"

# 1702 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 1703 "data/maps/SootopolisCity/scripts.pory"
# 886 "data/maps/SootopolisCity/scripts.pory"
# 1704 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 1705 "data/maps/SootopolisCity/scripts.pory"
# 887 "data/maps/SootopolisCity/scripts.pory"
# 1706 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 1707 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_GiveIapapaBerry_2
# 1708 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry_1:
# 1709 "data/maps/SootopolisCity/scripts.pory"
# 890 "data/maps/SootopolisCity/scripts.pory"
# 1710 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 1711 "data/maps/SootopolisCity/scripts.pory"
# 891 "data/maps/SootopolisCity/scripts.pory"
# 1712 "data/maps/SootopolisCity/scripts.pory"
	release
# 1713 "data/maps/SootopolisCity/scripts.pory"
	end
# 1714 "data/maps/SootopolisCity/scripts.pory"

# 1715 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry_2:
# 1716 "data/maps/SootopolisCity/scripts.pory"
# 888 "data/maps/SootopolisCity/scripts.pory"
# 1717 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 1718 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveIapapaBerry_1
# 1719 "data/maps/SootopolisCity/scripts.pory"

# 1720 "data/maps/SootopolisCity/scripts.pory"

# 1721 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 1722 "data/maps/SootopolisCity/scripts.pory"
# 896 "data/maps/SootopolisCity/scripts.pory"
# 1723 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 1724 "data/maps/SootopolisCity/scripts.pory"
# 897 "data/maps/SootopolisCity/scripts.pory"
# 1725 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, YES
# 1726 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_KiriReceivedBerry_2
# 1727 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry_1:
# 1728 "data/maps/SootopolisCity/scripts.pory"
# 900 "data/maps/SootopolisCity/scripts.pory"
# 1729 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 1730 "data/maps/SootopolisCity/scripts.pory"
# 901 "data/maps/SootopolisCity/scripts.pory"
# 1731 "data/maps/SootopolisCity/scripts.pory"
	release
# 1732 "data/maps/SootopolisCity/scripts.pory"
	end
# 1733 "data/maps/SootopolisCity/scripts.pory"

# 1734 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry_2:
# 1735 "data/maps/SootopolisCity/scripts.pory"
# 898 "data/maps/SootopolisCity/scripts.pory"
# 1736 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 1737 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriReceivedBerry_1
# 1738 "data/maps/SootopolisCity/scripts.pory"

# 1739 "data/maps/SootopolisCity/scripts.pory"

# 1740 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 1741 "data/maps/SootopolisCity/scripts.pory"
# 906 "data/maps/SootopolisCity/scripts.pory"
# 1742 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 1743 "data/maps/SootopolisCity/scripts.pory"
# 907 "data/maps/SootopolisCity/scripts.pory"
# 1744 "data/maps/SootopolisCity/scripts.pory"
	release
# 1745 "data/maps/SootopolisCity/scripts.pory"
	end
# 1746 "data/maps/SootopolisCity/scripts.pory"

# 1747 "data/maps/SootopolisCity/scripts.pory"

# 1748 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 1749 "data/maps/SootopolisCity/scripts.pory"
# 912 "data/maps/SootopolisCity/scripts.pory"
# 1750 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1751 "data/maps/SootopolisCity/scripts.pory"
# 913 "data/maps/SootopolisCity/scripts.pory"
# 1752 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FacePlayer
# 1753 "data/maps/SootopolisCity/scripts.pory"
# 914 "data/maps/SootopolisCity/scripts.pory"
# 1754 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1755 "data/maps/SootopolisCity/scripts.pory"
# 915 "data/maps/SootopolisCity/scripts.pory"
# 1756 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 1757 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Woman2_2
# 1758 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2_1:
# 1759 "data/maps/SootopolisCity/scripts.pory"
# 918 "data/maps/SootopolisCity/scripts.pory"
# 1760 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 1761 "data/maps/SootopolisCity/scripts.pory"
# 919 "data/maps/SootopolisCity/scripts.pory"
# 1762 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1763 "data/maps/SootopolisCity/scripts.pory"
# 920 "data/maps/SootopolisCity/scripts.pory"
# 1764 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FaceOriginalDirection
# 1765 "data/maps/SootopolisCity/scripts.pory"
# 921 "data/maps/SootopolisCity/scripts.pory"
# 1766 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1767 "data/maps/SootopolisCity/scripts.pory"
# 922 "data/maps/SootopolisCity/scripts.pory"
# 1768 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1769 "data/maps/SootopolisCity/scripts.pory"
	end
# 1770 "data/maps/SootopolisCity/scripts.pory"

# 1771 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2_2:
# 1772 "data/maps/SootopolisCity/scripts.pory"
# 916 "data/maps/SootopolisCity/scripts.pory"
# 1773 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman2Rayquaza
# 1774 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman2_1
# 1775 "data/maps/SootopolisCity/scripts.pory"

# 1776 "data/maps/SootopolisCity/scripts.pory"

# 1777 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 1778 "data/maps/SootopolisCity/scripts.pory"
# 927 "data/maps/SootopolisCity/scripts.pory"
# 1779 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 1780 "data/maps/SootopolisCity/scripts.pory"
# 928 "data/maps/SootopolisCity/scripts.pory"
# 1781 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1782 "data/maps/SootopolisCity/scripts.pory"
	end
# 1783 "data/maps/SootopolisCity/scripts.pory"

# 1784 "data/maps/SootopolisCity/scripts.pory"

# 1785 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 1786 "data/maps/SootopolisCity/scripts.pory"
# 933 "data/maps/SootopolisCity/scripts.pory"
# 1787 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1788 "data/maps/SootopolisCity/scripts.pory"
# 934 "data/maps/SootopolisCity/scripts.pory"
# 1789 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1790 "data/maps/SootopolisCity/scripts.pory"
# 935 "data/maps/SootopolisCity/scripts.pory"
# 1791 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
# 1792 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge SootopolisCity_EventScript_Man_2
# 1793 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man_1:
# 1794 "data/maps/SootopolisCity/scripts.pory"
# 938 "data/maps/SootopolisCity/scripts.pory"
# 1795 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 1796 "data/maps/SootopolisCity/scripts.pory"
# 939 "data/maps/SootopolisCity/scripts.pory"
# 1797 "data/maps/SootopolisCity/scripts.pory"
	release
# 1798 "data/maps/SootopolisCity/scripts.pory"
	end
# 1799 "data/maps/SootopolisCity/scripts.pory"

# 1800 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man_2:
# 1801 "data/maps/SootopolisCity/scripts.pory"
# 936 "data/maps/SootopolisCity/scripts.pory"
# 1802 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ManPostLegendaries
# 1803 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Man_1
# 1804 "data/maps/SootopolisCity/scripts.pory"

# 1805 "data/maps/SootopolisCity/scripts.pory"

# 1806 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 1807 "data/maps/SootopolisCity/scripts.pory"
# 944 "data/maps/SootopolisCity/scripts.pory"
# 1808 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 1809 "data/maps/SootopolisCity/scripts.pory"
# 945 "data/maps/SootopolisCity/scripts.pory"
# 1810 "data/maps/SootopolisCity/scripts.pory"
	release
# 1811 "data/maps/SootopolisCity/scripts.pory"
	end
# 1812 "data/maps/SootopolisCity/scripts.pory"

# 1813 "data/maps/SootopolisCity/scripts.pory"

# 1814 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 1815 "data/maps/SootopolisCity/scripts.pory"
# 950 "data/maps/SootopolisCity/scripts.pory"
# 1816 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1817 "data/maps/SootopolisCity/scripts.pory"
# 951 "data/maps/SootopolisCity/scripts.pory"
# 1818 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1819 "data/maps/SootopolisCity/scripts.pory"
# 952 "data/maps/SootopolisCity/scripts.pory"
# 1820 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
# 1821 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge SootopolisCity_EventScript_Woman1_2
# 1822 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1_1:
# 1823 "data/maps/SootopolisCity/scripts.pory"
# 955 "data/maps/SootopolisCity/scripts.pory"
# 1824 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 1825 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Woman1_5
# 1826 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1_4:
# 1827 "data/maps/SootopolisCity/scripts.pory"
# 958 "data/maps/SootopolisCity/scripts.pory"
# 1828 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
# 1829 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge SootopolisCity_EventScript_Woman1_8
# 1830 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1_7:
# 1831 "data/maps/SootopolisCity/scripts.pory"
# 961 "data/maps/SootopolisCity/scripts.pory"
# 1832 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 1833 "data/maps/SootopolisCity/scripts.pory"
# 962 "data/maps/SootopolisCity/scripts.pory"
# 1834 "data/maps/SootopolisCity/scripts.pory"
	release
# 1835 "data/maps/SootopolisCity/scripts.pory"
	end
# 1836 "data/maps/SootopolisCity/scripts.pory"

# 1837 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1_2:
# 1838 "data/maps/SootopolisCity/scripts.pory"
# 953 "data/maps/SootopolisCity/scripts.pory"
# 1839 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman1PostLegendaries
# 1840 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman1_1
# 1841 "data/maps/SootopolisCity/scripts.pory"

# 1842 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1_5:
# 1843 "data/maps/SootopolisCity/scripts.pory"
# 956 "data/maps/SootopolisCity/scripts.pory"
# 1844 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman1Rayquaza
# 1845 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman1_4
# 1846 "data/maps/SootopolisCity/scripts.pory"

# 1847 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1_8:
# 1848 "data/maps/SootopolisCity/scripts.pory"
# 959 "data/maps/SootopolisCity/scripts.pory"
# 1849 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman1Legendaries
# 1850 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman1_7
# 1851 "data/maps/SootopolisCity/scripts.pory"

# 1852 "data/maps/SootopolisCity/scripts.pory"

# 1853 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 1854 "data/maps/SootopolisCity/scripts.pory"
# 967 "data/maps/SootopolisCity/scripts.pory"
# 1855 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 1856 "data/maps/SootopolisCity/scripts.pory"
# 968 "data/maps/SootopolisCity/scripts.pory"
# 1857 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1858 "data/maps/SootopolisCity/scripts.pory"
# 969 "data/maps/SootopolisCity/scripts.pory"
# 1859 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_1, Common_Movement_FaceOriginalDirection
# 1860 "data/maps/SootopolisCity/scripts.pory"
# 970 "data/maps/SootopolisCity/scripts.pory"
# 1861 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1862 "data/maps/SootopolisCity/scripts.pory"
# 971 "data/maps/SootopolisCity/scripts.pory"
# 1863 "data/maps/SootopolisCity/scripts.pory"
	release
# 1864 "data/maps/SootopolisCity/scripts.pory"
	end
# 1865 "data/maps/SootopolisCity/scripts.pory"

# 1866 "data/maps/SootopolisCity/scripts.pory"

# 1867 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 1868 "data/maps/SootopolisCity/scripts.pory"
# 976 "data/maps/SootopolisCity/scripts.pory"
# 1869 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 1870 "data/maps/SootopolisCity/scripts.pory"
# 977 "data/maps/SootopolisCity/scripts.pory"
# 1871 "data/maps/SootopolisCity/scripts.pory"
	release
# 1872 "data/maps/SootopolisCity/scripts.pory"
	end
# 1873 "data/maps/SootopolisCity/scripts.pory"

# 1874 "data/maps/SootopolisCity/scripts.pory"

# 1875 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 1876 "data/maps/SootopolisCity/scripts.pory"
# 982 "data/maps/SootopolisCity/scripts.pory"
# 1877 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 1878 "data/maps/SootopolisCity/scripts.pory"
# 983 "data/maps/SootopolisCity/scripts.pory"
# 1879 "data/maps/SootopolisCity/scripts.pory"
	release
# 1880 "data/maps/SootopolisCity/scripts.pory"
	end
# 1881 "data/maps/SootopolisCity/scripts.pory"

# 1882 "data/maps/SootopolisCity/scripts.pory"

# 1883 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 1884 "data/maps/SootopolisCity/scripts.pory"
# 988 "data/maps/SootopolisCity/scripts.pory"
# 1885 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1886 "data/maps/SootopolisCity/scripts.pory"
# 989 "data/maps/SootopolisCity/scripts.pory"
# 1887 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FacePlayer
# 1888 "data/maps/SootopolisCity/scripts.pory"
# 990 "data/maps/SootopolisCity/scripts.pory"
# 1889 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1890 "data/maps/SootopolisCity/scripts.pory"
# 991 "data/maps/SootopolisCity/scripts.pory"
# 1891 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 1892 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_NinjaBoy_2
# 1893 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy_1:
# 1894 "data/maps/SootopolisCity/scripts.pory"
# 994 "data/maps/SootopolisCity/scripts.pory"
# 1895 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
# 1896 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge SootopolisCity_EventScript_NinjaBoy_5
# 1897 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy_4:
# 1898 "data/maps/SootopolisCity/scripts.pory"
# 997 "data/maps/SootopolisCity/scripts.pory"
# 1899 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
# 1900 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le SootopolisCity_EventScript_NinjaBoy_8
# 1901 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy_7:
# 1902 "data/maps/SootopolisCity/scripts.pory"
# 1000 "data/maps/SootopolisCity/scripts.pory"
# 1903 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 1904 "data/maps/SootopolisCity/scripts.pory"
# 1001 "data/maps/SootopolisCity/scripts.pory"
# 1905 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1906 "data/maps/SootopolisCity/scripts.pory"
# 1002 "data/maps/SootopolisCity/scripts.pory"
# 1907 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 1908 "data/maps/SootopolisCity/scripts.pory"
# 1003 "data/maps/SootopolisCity/scripts.pory"
# 1909 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1910 "data/maps/SootopolisCity/scripts.pory"
# 1004 "data/maps/SootopolisCity/scripts.pory"
# 1911 "data/maps/SootopolisCity/scripts.pory"
	release
# 1912 "data/maps/SootopolisCity/scripts.pory"
	end
# 1913 "data/maps/SootopolisCity/scripts.pory"

# 1914 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy_2:
# 1915 "data/maps/SootopolisCity/scripts.pory"
# 992 "data/maps/SootopolisCity/scripts.pory"
# 1916 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_NinjaBoyRayquaza
# 1917 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_NinjaBoy_1
# 1918 "data/maps/SootopolisCity/scripts.pory"

# 1919 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy_5:
# 1920 "data/maps/SootopolisCity/scripts.pory"
# 995 "data/maps/SootopolisCity/scripts.pory"
# 1921 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_NinjaBoyNormal
# 1922 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_NinjaBoy_4
# 1923 "data/maps/SootopolisCity/scripts.pory"

# 1924 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy_8:
# 1925 "data/maps/SootopolisCity/scripts.pory"
# 998 "data/maps/SootopolisCity/scripts.pory"
# 1926 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_NinjaBoyNormal
# 1927 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_NinjaBoy_7
# 1928 "data/maps/SootopolisCity/scripts.pory"

# 1929 "data/maps/SootopolisCity/scripts.pory"

# 1930 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 1931 "data/maps/SootopolisCity/scripts.pory"
# 1009 "data/maps/SootopolisCity/scripts.pory"
# 1932 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 1933 "data/maps/SootopolisCity/scripts.pory"
# 1010 "data/maps/SootopolisCity/scripts.pory"
# 1934 "data/maps/SootopolisCity/scripts.pory"
	release
# 1935 "data/maps/SootopolisCity/scripts.pory"
	end
# 1936 "data/maps/SootopolisCity/scripts.pory"

# 1937 "data/maps/SootopolisCity/scripts.pory"

# 1938 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 1939 "data/maps/SootopolisCity/scripts.pory"
# 1015 "data/maps/SootopolisCity/scripts.pory"
# 1940 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 1941 "data/maps/SootopolisCity/scripts.pory"
# 1016 "data/maps/SootopolisCity/scripts.pory"
# 1942 "data/maps/SootopolisCity/scripts.pory"
	release
# 1943 "data/maps/SootopolisCity/scripts.pory"
	end
# 1944 "data/maps/SootopolisCity/scripts.pory"

# 1945 "data/maps/SootopolisCity/scripts.pory"

# 1946 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 1947 "data/maps/SootopolisCity/scripts.pory"
# 1021 "data/maps/SootopolisCity/scripts.pory"
# 1948 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1949 "data/maps/SootopolisCity/scripts.pory"
# 1022 "data/maps/SootopolisCity/scripts.pory"
# 1950 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FacePlayer
# 1951 "data/maps/SootopolisCity/scripts.pory"
# 1023 "data/maps/SootopolisCity/scripts.pory"
# 1952 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1953 "data/maps/SootopolisCity/scripts.pory"
# 1024 "data/maps/SootopolisCity/scripts.pory"
# 1954 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 1955 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Boy1_2
# 1956 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1_1:
# 1957 "data/maps/SootopolisCity/scripts.pory"
# 1027 "data/maps/SootopolisCity/scripts.pory"
# 1958 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1_5
# 1959 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1_4:
# 1960 "data/maps/SootopolisCity/scripts.pory"
# 1030 "data/maps/SootopolisCity/scripts.pory"
# 1961 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
# 1962 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge SootopolisCity_EventScript_Boy1_8
# 1963 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1_7:
# 1964 "data/maps/SootopolisCity/scripts.pory"
# 1033 "data/maps/SootopolisCity/scripts.pory"
# 1965 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
# 1966 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le SootopolisCity_EventScript_Boy1_11
# 1967 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1_10:
# 1968 "data/maps/SootopolisCity/scripts.pory"
# 1036 "data/maps/SootopolisCity/scripts.pory"
# 1969 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 1970 "data/maps/SootopolisCity/scripts.pory"
# 1037 "data/maps/SootopolisCity/scripts.pory"
# 1971 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1972 "data/maps/SootopolisCity/scripts.pory"
# 1038 "data/maps/SootopolisCity/scripts.pory"
# 1973 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FaceOriginalDirection
# 1974 "data/maps/SootopolisCity/scripts.pory"
# 1039 "data/maps/SootopolisCity/scripts.pory"
# 1975 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1976 "data/maps/SootopolisCity/scripts.pory"
# 1040 "data/maps/SootopolisCity/scripts.pory"
# 1977 "data/maps/SootopolisCity/scripts.pory"
	release
# 1978 "data/maps/SootopolisCity/scripts.pory"
	end
# 1979 "data/maps/SootopolisCity/scripts.pory"

# 1980 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1_2:
# 1981 "data/maps/SootopolisCity/scripts.pory"
# 1025 "data/maps/SootopolisCity/scripts.pory"
# 1982 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1Rayquaza
# 1983 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1_1
# 1984 "data/maps/SootopolisCity/scripts.pory"

# 1985 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1_5:
# 1986 "data/maps/SootopolisCity/scripts.pory"
# 1028 "data/maps/SootopolisCity/scripts.pory"
# 1987 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1GameClear
# 1988 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1_4
# 1989 "data/maps/SootopolisCity/scripts.pory"

# 1990 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1_8:
# 1991 "data/maps/SootopolisCity/scripts.pory"
# 1031 "data/maps/SootopolisCity/scripts.pory"
# 1992 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1Normal
# 1993 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1_7
# 1994 "data/maps/SootopolisCity/scripts.pory"

# 1995 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1_11:
# 1996 "data/maps/SootopolisCity/scripts.pory"
# 1034 "data/maps/SootopolisCity/scripts.pory"
# 1997 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1Normal
# 1998 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1_10
# 1999 "data/maps/SootopolisCity/scripts.pory"

# 2000 "data/maps/SootopolisCity/scripts.pory"

# 2001 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 2002 "data/maps/SootopolisCity/scripts.pory"
# 1045 "data/maps/SootopolisCity/scripts.pory"
# 2003 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 2004 "data/maps/SootopolisCity/scripts.pory"
# 1046 "data/maps/SootopolisCity/scripts.pory"
# 2005 "data/maps/SootopolisCity/scripts.pory"
	release
# 2006 "data/maps/SootopolisCity/scripts.pory"
	end
# 2007 "data/maps/SootopolisCity/scripts.pory"

# 2008 "data/maps/SootopolisCity/scripts.pory"

# 2009 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 2010 "data/maps/SootopolisCity/scripts.pory"
# 1051 "data/maps/SootopolisCity/scripts.pory"
# 2011 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 2012 "data/maps/SootopolisCity/scripts.pory"
# 1052 "data/maps/SootopolisCity/scripts.pory"
# 2013 "data/maps/SootopolisCity/scripts.pory"
	release
# 2014 "data/maps/SootopolisCity/scripts.pory"
	end
# 2015 "data/maps/SootopolisCity/scripts.pory"

# 2016 "data/maps/SootopolisCity/scripts.pory"

# 2017 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 2018 "data/maps/SootopolisCity/scripts.pory"
# 1057 "data/maps/SootopolisCity/scripts.pory"
# 2019 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 2020 "data/maps/SootopolisCity/scripts.pory"
# 1058 "data/maps/SootopolisCity/scripts.pory"
# 2021 "data/maps/SootopolisCity/scripts.pory"
	release
# 2022 "data/maps/SootopolisCity/scripts.pory"
	end
# 2023 "data/maps/SootopolisCity/scripts.pory"

# 2024 "data/maps/SootopolisCity/scripts.pory"

# 2025 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 2026 "data/maps/SootopolisCity/scripts.pory"
# 1063 "data/maps/SootopolisCity/scripts.pory"
# 2027 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 2028 "data/maps/SootopolisCity/scripts.pory"
	end
# 2029 "data/maps/SootopolisCity/scripts.pory"

# 2030 "data/maps/SootopolisCity/scripts.pory"

# 2031 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 2032 "data/maps/SootopolisCity/scripts.pory"
# 1068 "data/maps/SootopolisCity/scripts.pory"
# 2033 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 2034 "data/maps/SootopolisCity/scripts.pory"
	end
# 2035 "data/maps/SootopolisCity/scripts.pory"

# 2036 "data/maps/SootopolisCity/scripts.pory"

# 2037 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 2038 "data/maps/SootopolisCity/scripts.pory"
# 1073 "data/maps/SootopolisCity/scripts.pory"
# 2039 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 2040 "data/maps/SootopolisCity/scripts.pory"
	end
# 2041 "data/maps/SootopolisCity/scripts.pory"

# 2042 "data/maps/SootopolisCity/scripts.pory"

# 2043 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven::
# 2044 "data/maps/SootopolisCity/scripts.pory"
# 1078 "data/maps/SootopolisCity/scripts.pory"
# 2045 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 2046 "data/maps/SootopolisCity/scripts.pory"
# 1079 "data/maps/SootopolisCity/scripts.pory"
# 2047 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, Common_Movement_FacePlayer
# 2048 "data/maps/SootopolisCity/scripts.pory"
# 1080 "data/maps/SootopolisCity/scripts.pory"
# 2049 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2050 "data/maps/SootopolisCity/scripts.pory"
# 1081 "data/maps/SootopolisCity/scripts.pory"
# 2051 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_Steven_2
# 2052 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven_1:
# 2053 "data/maps/SootopolisCity/scripts.pory"
# 1084 "data/maps/SootopolisCity/scripts.pory"
# 2054 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
# 2055 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Steven_5
# 2056 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven_4:
# 2057 "data/maps/SootopolisCity/scripts.pory"
# 1087 "data/maps/SootopolisCity/scripts.pory"
# 2058 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
# 2059 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Steven_8
# 2060 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven_7:
# 2061 "data/maps/SootopolisCity/scripts.pory"
# 1090 "data/maps/SootopolisCity/scripts.pory"
# 2062 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
# 2063 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Steven_11
# 2064 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven_10:
# 2065 "data/maps/SootopolisCity/scripts.pory"
# 1093 "data/maps/SootopolisCity/scripts.pory"
# 2066 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_Steven_14
# 2067 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven_13:
# 2068 "data/maps/SootopolisCity/scripts.pory"
# 1096 "data/maps/SootopolisCity/scripts.pory"
# 2069 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 2070 "data/maps/SootopolisCity/scripts.pory"
# 1097 "data/maps/SootopolisCity/scripts.pory"
# 2071 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2072 "data/maps/SootopolisCity/scripts.pory"
	end
# 2073 "data/maps/SootopolisCity/scripts.pory"

# 2074 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven_2:
# 2075 "data/maps/SootopolisCity/scripts.pory"
# 1082 "data/maps/SootopolisCity/scripts.pory"
# 2076 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 2077 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Steven_1
# 2078 "data/maps/SootopolisCity/scripts.pory"

# 2079 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven_5:
# 2080 "data/maps/SootopolisCity/scripts.pory"
# 1085 "data/maps/SootopolisCity/scripts.pory"
# 2081 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenHelpWallace
# 2082 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Steven_4
# 2083 "data/maps/SootopolisCity/scripts.pory"

# 2084 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven_8:
# 2085 "data/maps/SootopolisCity/scripts.pory"
# 1088 "data/maps/SootopolisCity/scripts.pory"
# 2086 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenHelpedWallace
# 2087 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Steven_7
# 2088 "data/maps/SootopolisCity/scripts.pory"

# 2089 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven_11:
# 2090 "data/maps/SootopolisCity/scripts.pory"
# 1091 "data/maps/SootopolisCity/scripts.pory"
# 2091 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenHelpedWallace
# 2092 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Steven_10
# 2093 "data/maps/SootopolisCity/scripts.pory"

# 2094 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven_14:
# 2095 "data/maps/SootopolisCity/scripts.pory"
# 1094 "data/maps/SootopolisCity/scripts.pory"
# 2096 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenMaxieArchieLeft
# 2097 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Steven_13
# 2098 "data/maps/SootopolisCity/scripts.pory"

# 2099 "data/maps/SootopolisCity/scripts.pory"

# 2100 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpWallace::
# 2101 "data/maps/SootopolisCity/scripts.pory"
# 1102 "data/maps/SootopolisCity/scripts.pory"
# 2102 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 2103 "data/maps/SootopolisCity/scripts.pory"
# 1103 "data/maps/SootopolisCity/scripts.pory"
# 2104 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2105 "data/maps/SootopolisCity/scripts.pory"
	end
# 2106 "data/maps/SootopolisCity/scripts.pory"

# 2107 "data/maps/SootopolisCity/scripts.pory"

# 2108 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 2109 "data/maps/SootopolisCity/scripts.pory"
# 1108 "data/maps/SootopolisCity/scripts.pory"
# 2110 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 2111 "data/maps/SootopolisCity/scripts.pory"
# 1109 "data/maps/SootopolisCity/scripts.pory"
# 2112 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2113 "data/maps/SootopolisCity/scripts.pory"
	end
# 2114 "data/maps/SootopolisCity/scripts.pory"

# 2115 "data/maps/SootopolisCity/scripts.pory"

# 2116 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpedWallace::
# 2117 "data/maps/SootopolisCity/scripts.pory"
# 1114 "data/maps/SootopolisCity/scripts.pory"
# 2118 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 2119 "data/maps/SootopolisCity/scripts.pory"
# 1115 "data/maps/SootopolisCity/scripts.pory"
# 2120 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2121 "data/maps/SootopolisCity/scripts.pory"
	end
# 2122 "data/maps/SootopolisCity/scripts.pory"

# 2123 "data/maps/SootopolisCity/scripts.pory"

# 2124 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 2125 "data/maps/SootopolisCity/scripts.pory"
# 1120 "data/maps/SootopolisCity/scripts.pory"
# 2126 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 2127 "data/maps/SootopolisCity/scripts.pory"
# 1121 "data/maps/SootopolisCity/scripts.pory"
# 2128 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 2129 "data/maps/SootopolisCity/scripts.pory"
# 1122 "data/maps/SootopolisCity/scripts.pory"
# 2130 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 2131 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_2
# 2132 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_1:
# 2133 "data/maps/SootopolisCity/scripts.pory"
# 1125 "data/maps/SootopolisCity/scripts.pory"
# 2134 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 2135 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_5
# 2136 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_4:
# 2137 "data/maps/SootopolisCity/scripts.pory"
# 1128 "data/maps/SootopolisCity/scripts.pory"
# 2138 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 2139 "data/maps/SootopolisCity/scripts.pory"
# 1129 "data/maps/SootopolisCity/scripts.pory"
# 2140 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 2141 "data/maps/SootopolisCity/scripts.pory"
# 1130 "data/maps/SootopolisCity/scripts.pory"
# 2142 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 2143 "data/maps/SootopolisCity/scripts.pory"
# 1131 "data/maps/SootopolisCity/scripts.pory"
# 2144 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 2145 "data/maps/SootopolisCity/scripts.pory"
# 1132 "data/maps/SootopolisCity/scripts.pory"
# 2146 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2147 "data/maps/SootopolisCity/scripts.pory"
# 1133 "data/maps/SootopolisCity/scripts.pory"
# 2148 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 2149 "data/maps/SootopolisCity/scripts.pory"
# 1134 "data/maps/SootopolisCity/scripts.pory"
# 2150 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 2151 "data/maps/SootopolisCity/scripts.pory"
# 1135 "data/maps/SootopolisCity/scripts.pory"
# 2152 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2153 "data/maps/SootopolisCity/scripts.pory"
# 1136 "data/maps/SootopolisCity/scripts.pory"
# 2154 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 2155 "data/maps/SootopolisCity/scripts.pory"
# 1137 "data/maps/SootopolisCity/scripts.pory"
# 2156 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 2157 "data/maps/SootopolisCity/scripts.pory"
# 1138 "data/maps/SootopolisCity/scripts.pory"
# 2158 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2159 "data/maps/SootopolisCity/scripts.pory"
# 1139 "data/maps/SootopolisCity/scripts.pory"
# 2160 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 2161 "data/maps/SootopolisCity/scripts.pory"
# 1140 "data/maps/SootopolisCity/scripts.pory"
# 2162 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 2163 "data/maps/SootopolisCity/scripts.pory"
# 1141 "data/maps/SootopolisCity/scripts.pory"
# 2164 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 2165 "data/maps/SootopolisCity/scripts.pory"
# 1142 "data/maps/SootopolisCity/scripts.pory"
# 2166 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 2167 "data/maps/SootopolisCity/scripts.pory"
# 1143 "data/maps/SootopolisCity/scripts.pory"
# 2168 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2169 "data/maps/SootopolisCity/scripts.pory"
# 1144 "data/maps/SootopolisCity/scripts.pory"
# 2170 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 2171 "data/maps/SootopolisCity/scripts.pory"
# 1145 "data/maps/SootopolisCity/scripts.pory"
# 2172 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 2173 "data/maps/SootopolisCity/scripts.pory"
	end
# 2174 "data/maps/SootopolisCity/scripts.pory"

# 2175 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_2:
# 2176 "data/maps/SootopolisCity/scripts.pory"
# 1123 "data/maps/SootopolisCity/scripts.pory"
# 2177 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 2178 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_1
# 2179 "data/maps/SootopolisCity/scripts.pory"

# 2180 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_5:
# 2181 "data/maps/SootopolisCity/scripts.pory"
# 1126 "data/maps/SootopolisCity/scripts.pory"
# 2182 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 2183 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_4
# 2184 "data/maps/SootopolisCity/scripts.pory"

# 2185 "data/maps/SootopolisCity/scripts.pory"

# 2186 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 2187 "data/maps/SootopolisCity/scripts.pory"
# 1150 "data/maps/SootopolisCity/scripts.pory"
# 2188 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 2189 "data/maps/SootopolisCity/scripts.pory"
# 1151 "data/maps/SootopolisCity/scripts.pory"
# 2190 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 2191 "data/maps/SootopolisCity/scripts.pory"
# 1152 "data/maps/SootopolisCity/scripts.pory"
# 2192 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2193 "data/maps/SootopolisCity/scripts.pory"
	return
# 2194 "data/maps/SootopolisCity/scripts.pory"

# 2195 "data/maps/SootopolisCity/scripts.pory"

# 2196 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 2197 "data/maps/SootopolisCity/scripts.pory"
# 1157 "data/maps/SootopolisCity/scripts.pory"
# 2198 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 2199 "data/maps/SootopolisCity/scripts.pory"
# 1158 "data/maps/SootopolisCity/scripts.pory"
# 2200 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 2201 "data/maps/SootopolisCity/scripts.pory"
# 1159 "data/maps/SootopolisCity/scripts.pory"
# 2202 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2203 "data/maps/SootopolisCity/scripts.pory"
	return
# 2204 "data/maps/SootopolisCity/scripts.pory"

# 2205 "data/maps/SootopolisCity/scripts.pory"

# 2206 "data/maps/SootopolisCity/scripts.pory"
# 1163 "data/maps/SootopolisCity/scripts.pory"
# 2207 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 2208 "data/maps/SootopolisCity/scripts.pory"
# 1164 "data/maps/SootopolisCity/scripts.pory"
# 2209 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2210 "data/maps/SootopolisCity/scripts.pory"
# 1165 "data/maps/SootopolisCity/scripts.pory"
# 2211 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2212 "data/maps/SootopolisCity/scripts.pory"
# 1166 "data/maps/SootopolisCity/scripts.pory"
# 2213 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2214 "data/maps/SootopolisCity/scripts.pory"
# 1167 "data/maps/SootopolisCity/scripts.pory"
# 2215 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2216 "data/maps/SootopolisCity/scripts.pory"
# 1168 "data/maps/SootopolisCity/scripts.pory"
# 2217 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2218 "data/maps/SootopolisCity/scripts.pory"
# 1169 "data/maps/SootopolisCity/scripts.pory"
# 2219 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2220 "data/maps/SootopolisCity/scripts.pory"
# 1170 "data/maps/SootopolisCity/scripts.pory"
# 2221 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2222 "data/maps/SootopolisCity/scripts.pory"
# 1171 "data/maps/SootopolisCity/scripts.pory"
# 2223 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2224 "data/maps/SootopolisCity/scripts.pory"
# 1172 "data/maps/SootopolisCity/scripts.pory"
# 2225 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2226 "data/maps/SootopolisCity/scripts.pory"
# 1173 "data/maps/SootopolisCity/scripts.pory"
# 2227 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2228 "data/maps/SootopolisCity/scripts.pory"
# 1174 "data/maps/SootopolisCity/scripts.pory"
# 2229 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2230 "data/maps/SootopolisCity/scripts.pory"
# 1175 "data/maps/SootopolisCity/scripts.pory"
# 2231 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2232 "data/maps/SootopolisCity/scripts.pory"
# 1176 "data/maps/SootopolisCity/scripts.pory"
# 2233 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2234 "data/maps/SootopolisCity/scripts.pory"
# 1177 "data/maps/SootopolisCity/scripts.pory"
# 2235 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2236 "data/maps/SootopolisCity/scripts.pory"
# 1178 "data/maps/SootopolisCity/scripts.pory"
# 2237 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2238 "data/maps/SootopolisCity/scripts.pory"
# 1179 "data/maps/SootopolisCity/scripts.pory"
# 2239 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2240 "data/maps/SootopolisCity/scripts.pory"
# 1180 "data/maps/SootopolisCity/scripts.pory"
# 2241 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2242 "data/maps/SootopolisCity/scripts.pory"
# 1181 "data/maps/SootopolisCity/scripts.pory"
# 2243 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2244 "data/maps/SootopolisCity/scripts.pory"
# 1182 "data/maps/SootopolisCity/scripts.pory"
# 2245 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2246 "data/maps/SootopolisCity/scripts.pory"
# 1183 "data/maps/SootopolisCity/scripts.pory"
# 2247 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2248 "data/maps/SootopolisCity/scripts.pory"
# 1184 "data/maps/SootopolisCity/scripts.pory"
# 2249 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2250 "data/maps/SootopolisCity/scripts.pory"
# 1185 "data/maps/SootopolisCity/scripts.pory"
# 2251 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2252 "data/maps/SootopolisCity/scripts.pory"
# 1186 "data/maps/SootopolisCity/scripts.pory"
# 2253 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2254 "data/maps/SootopolisCity/scripts.pory"
# 1187 "data/maps/SootopolisCity/scripts.pory"
# 2255 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2256 "data/maps/SootopolisCity/scripts.pory"
# 1188 "data/maps/SootopolisCity/scripts.pory"
# 2257 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2258 "data/maps/SootopolisCity/scripts.pory"
# 1189 "data/maps/SootopolisCity/scripts.pory"
# 2259 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2260 "data/maps/SootopolisCity/scripts.pory"
# 1190 "data/maps/SootopolisCity/scripts.pory"
# 2261 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2262 "data/maps/SootopolisCity/scripts.pory"
# 1191 "data/maps/SootopolisCity/scripts.pory"
# 2263 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2264 "data/maps/SootopolisCity/scripts.pory"
# 1192 "data/maps/SootopolisCity/scripts.pory"
# 2265 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2266 "data/maps/SootopolisCity/scripts.pory"
# 1193 "data/maps/SootopolisCity/scripts.pory"
# 2267 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2268 "data/maps/SootopolisCity/scripts.pory"
# 1194 "data/maps/SootopolisCity/scripts.pory"
# 2269 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2270 "data/maps/SootopolisCity/scripts.pory"
# 1195 "data/maps/SootopolisCity/scripts.pory"
# 2271 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2272 "data/maps/SootopolisCity/scripts.pory"
# 1196 "data/maps/SootopolisCity/scripts.pory"
# 2273 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2274 "data/maps/SootopolisCity/scripts.pory"
# 1197 "data/maps/SootopolisCity/scripts.pory"
# 2275 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2276 "data/maps/SootopolisCity/scripts.pory"
# 1198 "data/maps/SootopolisCity/scripts.pory"
# 2277 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2278 "data/maps/SootopolisCity/scripts.pory"
# 1199 "data/maps/SootopolisCity/scripts.pory"
# 2279 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 2280 "data/maps/SootopolisCity/scripts.pory"
# 1200 "data/maps/SootopolisCity/scripts.pory"
# 2281 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 2282 "data/maps/SootopolisCity/scripts.pory"

# 2283 "data/maps/SootopolisCity/scripts.pory"
# 1203 "data/maps/SootopolisCity/scripts.pory"
# 2284 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 2285 "data/maps/SootopolisCity/scripts.pory"
# 1204 "data/maps/SootopolisCity/scripts.pory"
# 2286 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2287 "data/maps/SootopolisCity/scripts.pory"
# 1205 "data/maps/SootopolisCity/scripts.pory"
# 2288 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2289 "data/maps/SootopolisCity/scripts.pory"
# 1206 "data/maps/SootopolisCity/scripts.pory"
# 2290 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2291 "data/maps/SootopolisCity/scripts.pory"
# 1207 "data/maps/SootopolisCity/scripts.pory"
# 2292 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2293 "data/maps/SootopolisCity/scripts.pory"
# 1208 "data/maps/SootopolisCity/scripts.pory"
# 2294 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2295 "data/maps/SootopolisCity/scripts.pory"
# 1209 "data/maps/SootopolisCity/scripts.pory"
# 2296 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2297 "data/maps/SootopolisCity/scripts.pory"
# 1210 "data/maps/SootopolisCity/scripts.pory"
# 2298 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2299 "data/maps/SootopolisCity/scripts.pory"
# 1211 "data/maps/SootopolisCity/scripts.pory"
# 2300 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2301 "data/maps/SootopolisCity/scripts.pory"
# 1212 "data/maps/SootopolisCity/scripts.pory"
# 2302 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2303 "data/maps/SootopolisCity/scripts.pory"
# 1213 "data/maps/SootopolisCity/scripts.pory"
# 2304 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2305 "data/maps/SootopolisCity/scripts.pory"
# 1214 "data/maps/SootopolisCity/scripts.pory"
# 2306 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2307 "data/maps/SootopolisCity/scripts.pory"
# 1215 "data/maps/SootopolisCity/scripts.pory"
# 2308 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2309 "data/maps/SootopolisCity/scripts.pory"
# 1216 "data/maps/SootopolisCity/scripts.pory"
# 2310 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2311 "data/maps/SootopolisCity/scripts.pory"
# 1217 "data/maps/SootopolisCity/scripts.pory"
# 2312 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2313 "data/maps/SootopolisCity/scripts.pory"
# 1218 "data/maps/SootopolisCity/scripts.pory"
# 2314 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2315 "data/maps/SootopolisCity/scripts.pory"
# 1219 "data/maps/SootopolisCity/scripts.pory"
# 2316 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2317 "data/maps/SootopolisCity/scripts.pory"
# 1220 "data/maps/SootopolisCity/scripts.pory"
# 2318 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2319 "data/maps/SootopolisCity/scripts.pory"
# 1221 "data/maps/SootopolisCity/scripts.pory"
# 2320 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2321 "data/maps/SootopolisCity/scripts.pory"
# 1222 "data/maps/SootopolisCity/scripts.pory"
# 2322 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2323 "data/maps/SootopolisCity/scripts.pory"
# 1223 "data/maps/SootopolisCity/scripts.pory"
# 2324 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2325 "data/maps/SootopolisCity/scripts.pory"
# 1224 "data/maps/SootopolisCity/scripts.pory"
# 2326 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2327 "data/maps/SootopolisCity/scripts.pory"
# 1225 "data/maps/SootopolisCity/scripts.pory"
# 2328 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2329 "data/maps/SootopolisCity/scripts.pory"
# 1226 "data/maps/SootopolisCity/scripts.pory"
# 2330 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2331 "data/maps/SootopolisCity/scripts.pory"
# 1227 "data/maps/SootopolisCity/scripts.pory"
# 2332 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2333 "data/maps/SootopolisCity/scripts.pory"
# 1228 "data/maps/SootopolisCity/scripts.pory"
# 2334 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2335 "data/maps/SootopolisCity/scripts.pory"
# 1229 "data/maps/SootopolisCity/scripts.pory"
# 2336 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2337 "data/maps/SootopolisCity/scripts.pory"
# 1230 "data/maps/SootopolisCity/scripts.pory"
# 2338 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2339 "data/maps/SootopolisCity/scripts.pory"
# 1231 "data/maps/SootopolisCity/scripts.pory"
# 2340 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2341 "data/maps/SootopolisCity/scripts.pory"
# 1232 "data/maps/SootopolisCity/scripts.pory"
# 2342 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2343 "data/maps/SootopolisCity/scripts.pory"
# 1233 "data/maps/SootopolisCity/scripts.pory"
# 2344 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2345 "data/maps/SootopolisCity/scripts.pory"
# 1234 "data/maps/SootopolisCity/scripts.pory"
# 2346 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2347 "data/maps/SootopolisCity/scripts.pory"
# 1235 "data/maps/SootopolisCity/scripts.pory"
# 2348 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2349 "data/maps/SootopolisCity/scripts.pory"
# 1236 "data/maps/SootopolisCity/scripts.pory"
# 2350 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2351 "data/maps/SootopolisCity/scripts.pory"
# 1237 "data/maps/SootopolisCity/scripts.pory"
# 2352 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2353 "data/maps/SootopolisCity/scripts.pory"
# 1238 "data/maps/SootopolisCity/scripts.pory"
# 2354 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2355 "data/maps/SootopolisCity/scripts.pory"
# 1239 "data/maps/SootopolisCity/scripts.pory"
# 2356 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 2357 "data/maps/SootopolisCity/scripts.pory"

# 2358 "data/maps/SootopolisCity/scripts.pory"
# 1242 "data/maps/SootopolisCity/scripts.pory"
# 2359 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 2360 "data/maps/SootopolisCity/scripts.pory"
# 1243 "data/maps/SootopolisCity/scripts.pory"
# 2361 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2362 "data/maps/SootopolisCity/scripts.pory"
# 1244 "data/maps/SootopolisCity/scripts.pory"
# 2363 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2364 "data/maps/SootopolisCity/scripts.pory"
# 1245 "data/maps/SootopolisCity/scripts.pory"
# 2365 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2366 "data/maps/SootopolisCity/scripts.pory"
# 1246 "data/maps/SootopolisCity/scripts.pory"
# 2367 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2368 "data/maps/SootopolisCity/scripts.pory"
# 1247 "data/maps/SootopolisCity/scripts.pory"
# 2369 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2370 "data/maps/SootopolisCity/scripts.pory"
# 1248 "data/maps/SootopolisCity/scripts.pory"
# 2371 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2372 "data/maps/SootopolisCity/scripts.pory"
# 1249 "data/maps/SootopolisCity/scripts.pory"
# 2373 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2374 "data/maps/SootopolisCity/scripts.pory"
# 1250 "data/maps/SootopolisCity/scripts.pory"
# 2375 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2376 "data/maps/SootopolisCity/scripts.pory"
# 1251 "data/maps/SootopolisCity/scripts.pory"
# 2377 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2378 "data/maps/SootopolisCity/scripts.pory"
# 1252 "data/maps/SootopolisCity/scripts.pory"
# 2379 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2380 "data/maps/SootopolisCity/scripts.pory"
# 1253 "data/maps/SootopolisCity/scripts.pory"
# 2381 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2382 "data/maps/SootopolisCity/scripts.pory"
# 1254 "data/maps/SootopolisCity/scripts.pory"
# 2383 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2384 "data/maps/SootopolisCity/scripts.pory"
# 1255 "data/maps/SootopolisCity/scripts.pory"
# 2385 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2386 "data/maps/SootopolisCity/scripts.pory"
# 1256 "data/maps/SootopolisCity/scripts.pory"
# 2387 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2388 "data/maps/SootopolisCity/scripts.pory"
# 1257 "data/maps/SootopolisCity/scripts.pory"
# 2389 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2390 "data/maps/SootopolisCity/scripts.pory"
# 1258 "data/maps/SootopolisCity/scripts.pory"
# 2391 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2392 "data/maps/SootopolisCity/scripts.pory"
# 1259 "data/maps/SootopolisCity/scripts.pory"
# 2393 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2394 "data/maps/SootopolisCity/scripts.pory"
# 1260 "data/maps/SootopolisCity/scripts.pory"
# 2395 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2396 "data/maps/SootopolisCity/scripts.pory"
# 1261 "data/maps/SootopolisCity/scripts.pory"
# 2397 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2398 "data/maps/SootopolisCity/scripts.pory"
# 1262 "data/maps/SootopolisCity/scripts.pory"
# 2399 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2400 "data/maps/SootopolisCity/scripts.pory"
# 1263 "data/maps/SootopolisCity/scripts.pory"
# 2401 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2402 "data/maps/SootopolisCity/scripts.pory"
# 1264 "data/maps/SootopolisCity/scripts.pory"
# 2403 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2404 "data/maps/SootopolisCity/scripts.pory"
# 1265 "data/maps/SootopolisCity/scripts.pory"
# 2405 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2406 "data/maps/SootopolisCity/scripts.pory"
# 1266 "data/maps/SootopolisCity/scripts.pory"
# 2407 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2408 "data/maps/SootopolisCity/scripts.pory"
# 1267 "data/maps/SootopolisCity/scripts.pory"
# 2409 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2410 "data/maps/SootopolisCity/scripts.pory"
# 1268 "data/maps/SootopolisCity/scripts.pory"
# 2411 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2412 "data/maps/SootopolisCity/scripts.pory"
# 1269 "data/maps/SootopolisCity/scripts.pory"
# 2413 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2414 "data/maps/SootopolisCity/scripts.pory"
# 1270 "data/maps/SootopolisCity/scripts.pory"
# 2415 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2416 "data/maps/SootopolisCity/scripts.pory"
# 1271 "data/maps/SootopolisCity/scripts.pory"
# 2417 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2418 "data/maps/SootopolisCity/scripts.pory"
# 1272 "data/maps/SootopolisCity/scripts.pory"
# 2419 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2420 "data/maps/SootopolisCity/scripts.pory"
# 1273 "data/maps/SootopolisCity/scripts.pory"
# 2421 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2422 "data/maps/SootopolisCity/scripts.pory"
# 1274 "data/maps/SootopolisCity/scripts.pory"
# 2423 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2424 "data/maps/SootopolisCity/scripts.pory"
# 1275 "data/maps/SootopolisCity/scripts.pory"
# 2425 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2426 "data/maps/SootopolisCity/scripts.pory"
# 1276 "data/maps/SootopolisCity/scripts.pory"
# 2427 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2428 "data/maps/SootopolisCity/scripts.pory"
# 1277 "data/maps/SootopolisCity/scripts.pory"
# 2429 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2430 "data/maps/SootopolisCity/scripts.pory"
# 1278 "data/maps/SootopolisCity/scripts.pory"
# 2431 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 2432 "data/maps/SootopolisCity/scripts.pory"

# 2433 "data/maps/SootopolisCity/scripts.pory"
# 1281 "data/maps/SootopolisCity/scripts.pory"
# 2434 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 2435 "data/maps/SootopolisCity/scripts.pory"
# 1282 "data/maps/SootopolisCity/scripts.pory"
# 2436 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2437 "data/maps/SootopolisCity/scripts.pory"
# 1283 "data/maps/SootopolisCity/scripts.pory"
# 2438 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2439 "data/maps/SootopolisCity/scripts.pory"
# 1284 "data/maps/SootopolisCity/scripts.pory"
# 2440 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2441 "data/maps/SootopolisCity/scripts.pory"
# 1285 "data/maps/SootopolisCity/scripts.pory"
# 2442 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2443 "data/maps/SootopolisCity/scripts.pory"
# 1286 "data/maps/SootopolisCity/scripts.pory"
# 2444 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2445 "data/maps/SootopolisCity/scripts.pory"
# 1287 "data/maps/SootopolisCity/scripts.pory"
# 2446 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2447 "data/maps/SootopolisCity/scripts.pory"
# 1288 "data/maps/SootopolisCity/scripts.pory"
# 2448 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2449 "data/maps/SootopolisCity/scripts.pory"
# 1289 "data/maps/SootopolisCity/scripts.pory"
# 2450 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2451 "data/maps/SootopolisCity/scripts.pory"
# 1290 "data/maps/SootopolisCity/scripts.pory"
# 2452 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2453 "data/maps/SootopolisCity/scripts.pory"
# 1291 "data/maps/SootopolisCity/scripts.pory"
# 2454 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2455 "data/maps/SootopolisCity/scripts.pory"
# 1292 "data/maps/SootopolisCity/scripts.pory"
# 2456 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2457 "data/maps/SootopolisCity/scripts.pory"
# 1293 "data/maps/SootopolisCity/scripts.pory"
# 2458 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2459 "data/maps/SootopolisCity/scripts.pory"
# 1294 "data/maps/SootopolisCity/scripts.pory"
# 2460 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2461 "data/maps/SootopolisCity/scripts.pory"
# 1295 "data/maps/SootopolisCity/scripts.pory"
# 2462 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2463 "data/maps/SootopolisCity/scripts.pory"
# 1296 "data/maps/SootopolisCity/scripts.pory"
# 2464 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2465 "data/maps/SootopolisCity/scripts.pory"
# 1297 "data/maps/SootopolisCity/scripts.pory"
# 2466 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2467 "data/maps/SootopolisCity/scripts.pory"
# 1298 "data/maps/SootopolisCity/scripts.pory"
# 2468 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2469 "data/maps/SootopolisCity/scripts.pory"
# 1299 "data/maps/SootopolisCity/scripts.pory"
# 2470 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2471 "data/maps/SootopolisCity/scripts.pory"
# 1300 "data/maps/SootopolisCity/scripts.pory"
# 2472 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2473 "data/maps/SootopolisCity/scripts.pory"
# 1301 "data/maps/SootopolisCity/scripts.pory"
# 2474 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2475 "data/maps/SootopolisCity/scripts.pory"
# 1302 "data/maps/SootopolisCity/scripts.pory"
# 2476 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2477 "data/maps/SootopolisCity/scripts.pory"
# 1303 "data/maps/SootopolisCity/scripts.pory"
# 2478 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2479 "data/maps/SootopolisCity/scripts.pory"
# 1304 "data/maps/SootopolisCity/scripts.pory"
# 2480 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2481 "data/maps/SootopolisCity/scripts.pory"
# 1305 "data/maps/SootopolisCity/scripts.pory"
# 2482 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2483 "data/maps/SootopolisCity/scripts.pory"
# 1306 "data/maps/SootopolisCity/scripts.pory"
# 2484 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2485 "data/maps/SootopolisCity/scripts.pory"
# 1307 "data/maps/SootopolisCity/scripts.pory"
# 2486 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2487 "data/maps/SootopolisCity/scripts.pory"
# 1308 "data/maps/SootopolisCity/scripts.pory"
# 2488 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2489 "data/maps/SootopolisCity/scripts.pory"
# 1309 "data/maps/SootopolisCity/scripts.pory"
# 2490 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2491 "data/maps/SootopolisCity/scripts.pory"
# 1310 "data/maps/SootopolisCity/scripts.pory"
# 2492 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2493 "data/maps/SootopolisCity/scripts.pory"
# 1311 "data/maps/SootopolisCity/scripts.pory"
# 2494 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2495 "data/maps/SootopolisCity/scripts.pory"
# 1312 "data/maps/SootopolisCity/scripts.pory"
# 2496 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2497 "data/maps/SootopolisCity/scripts.pory"
# 1313 "data/maps/SootopolisCity/scripts.pory"
# 2498 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2499 "data/maps/SootopolisCity/scripts.pory"
# 1314 "data/maps/SootopolisCity/scripts.pory"
# 2500 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2501 "data/maps/SootopolisCity/scripts.pory"
# 1315 "data/maps/SootopolisCity/scripts.pory"
# 2502 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2503 "data/maps/SootopolisCity/scripts.pory"
# 1316 "data/maps/SootopolisCity/scripts.pory"
# 2504 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2505 "data/maps/SootopolisCity/scripts.pory"
# 1317 "data/maps/SootopolisCity/scripts.pory"
# 2506 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2507 "data/maps/SootopolisCity/scripts.pory"
# 1318 "data/maps/SootopolisCity/scripts.pory"
# 2508 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2509 "data/maps/SootopolisCity/scripts.pory"
# 1319 "data/maps/SootopolisCity/scripts.pory"
# 2510 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2511 "data/maps/SootopolisCity/scripts.pory"
# 1320 "data/maps/SootopolisCity/scripts.pory"
# 2512 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2513 "data/maps/SootopolisCity/scripts.pory"
# 1321 "data/maps/SootopolisCity/scripts.pory"
# 2514 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2515 "data/maps/SootopolisCity/scripts.pory"
# 1322 "data/maps/SootopolisCity/scripts.pory"
# 2516 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2517 "data/maps/SootopolisCity/scripts.pory"
# 1323 "data/maps/SootopolisCity/scripts.pory"
# 2518 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2519 "data/maps/SootopolisCity/scripts.pory"
# 1324 "data/maps/SootopolisCity/scripts.pory"
# 2520 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2521 "data/maps/SootopolisCity/scripts.pory"
# 1325 "data/maps/SootopolisCity/scripts.pory"
# 2522 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2523 "data/maps/SootopolisCity/scripts.pory"
# 1326 "data/maps/SootopolisCity/scripts.pory"
# 2524 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2525 "data/maps/SootopolisCity/scripts.pory"
# 1327 "data/maps/SootopolisCity/scripts.pory"
# 2526 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2527 "data/maps/SootopolisCity/scripts.pory"
# 1328 "data/maps/SootopolisCity/scripts.pory"
# 2528 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2529 "data/maps/SootopolisCity/scripts.pory"
# 1329 "data/maps/SootopolisCity/scripts.pory"
# 2530 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2531 "data/maps/SootopolisCity/scripts.pory"
# 1330 "data/maps/SootopolisCity/scripts.pory"
# 2532 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2533 "data/maps/SootopolisCity/scripts.pory"
# 1331 "data/maps/SootopolisCity/scripts.pory"
# 2534 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2535 "data/maps/SootopolisCity/scripts.pory"
# 1332 "data/maps/SootopolisCity/scripts.pory"
# 2536 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 2537 "data/maps/SootopolisCity/scripts.pory"
# 1333 "data/maps/SootopolisCity/scripts.pory"
# 2538 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 2539 "data/maps/SootopolisCity/scripts.pory"
# 1334 "data/maps/SootopolisCity/scripts.pory"
# 2540 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 2541 "data/maps/SootopolisCity/scripts.pory"
# 1335 "data/maps/SootopolisCity/scripts.pory"
# 2542 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 2543 "data/maps/SootopolisCity/scripts.pory"
# 1336 "data/maps/SootopolisCity/scripts.pory"
# 2544 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2545 "data/maps/SootopolisCity/scripts.pory"
# 1337 "data/maps/SootopolisCity/scripts.pory"
# 2546 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2547 "data/maps/SootopolisCity/scripts.pory"
# 1338 "data/maps/SootopolisCity/scripts.pory"
# 2548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2549 "data/maps/SootopolisCity/scripts.pory"
# 1339 "data/maps/SootopolisCity/scripts.pory"
# 2550 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 2551 "data/maps/SootopolisCity/scripts.pory"

# 2552 "data/maps/SootopolisCity/scripts.pory"
# 1342 "data/maps/SootopolisCity/scripts.pory"
# 2553 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 2554 "data/maps/SootopolisCity/scripts.pory"
# 1343 "data/maps/SootopolisCity/scripts.pory"
# 2555 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2556 "data/maps/SootopolisCity/scripts.pory"
# 1344 "data/maps/SootopolisCity/scripts.pory"
# 2557 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2558 "data/maps/SootopolisCity/scripts.pory"
# 1345 "data/maps/SootopolisCity/scripts.pory"
# 2559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2560 "data/maps/SootopolisCity/scripts.pory"
# 1346 "data/maps/SootopolisCity/scripts.pory"
# 2561 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2562 "data/maps/SootopolisCity/scripts.pory"
# 1347 "data/maps/SootopolisCity/scripts.pory"
# 2563 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2564 "data/maps/SootopolisCity/scripts.pory"
# 1348 "data/maps/SootopolisCity/scripts.pory"
# 2565 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2566 "data/maps/SootopolisCity/scripts.pory"
# 1349 "data/maps/SootopolisCity/scripts.pory"
# 2567 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2568 "data/maps/SootopolisCity/scripts.pory"
# 1350 "data/maps/SootopolisCity/scripts.pory"
# 2569 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2570 "data/maps/SootopolisCity/scripts.pory"
# 1351 "data/maps/SootopolisCity/scripts.pory"
# 2571 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2572 "data/maps/SootopolisCity/scripts.pory"
# 1352 "data/maps/SootopolisCity/scripts.pory"
# 2573 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2574 "data/maps/SootopolisCity/scripts.pory"
# 1353 "data/maps/SootopolisCity/scripts.pory"
# 2575 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2576 "data/maps/SootopolisCity/scripts.pory"
# 1354 "data/maps/SootopolisCity/scripts.pory"
# 2577 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2578 "data/maps/SootopolisCity/scripts.pory"
# 1355 "data/maps/SootopolisCity/scripts.pory"
# 2579 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2580 "data/maps/SootopolisCity/scripts.pory"
# 1356 "data/maps/SootopolisCity/scripts.pory"
# 2581 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2582 "data/maps/SootopolisCity/scripts.pory"
# 1357 "data/maps/SootopolisCity/scripts.pory"
# 2583 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2584 "data/maps/SootopolisCity/scripts.pory"
# 1358 "data/maps/SootopolisCity/scripts.pory"
# 2585 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2586 "data/maps/SootopolisCity/scripts.pory"
# 1359 "data/maps/SootopolisCity/scripts.pory"
# 2587 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2588 "data/maps/SootopolisCity/scripts.pory"
# 1360 "data/maps/SootopolisCity/scripts.pory"
# 2589 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2590 "data/maps/SootopolisCity/scripts.pory"
# 1361 "data/maps/SootopolisCity/scripts.pory"
# 2591 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2592 "data/maps/SootopolisCity/scripts.pory"
# 1362 "data/maps/SootopolisCity/scripts.pory"
# 2593 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2594 "data/maps/SootopolisCity/scripts.pory"
# 1363 "data/maps/SootopolisCity/scripts.pory"
# 2595 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2596 "data/maps/SootopolisCity/scripts.pory"
# 1364 "data/maps/SootopolisCity/scripts.pory"
# 2597 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2598 "data/maps/SootopolisCity/scripts.pory"
# 1365 "data/maps/SootopolisCity/scripts.pory"
# 2599 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2600 "data/maps/SootopolisCity/scripts.pory"
# 1366 "data/maps/SootopolisCity/scripts.pory"
# 2601 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2602 "data/maps/SootopolisCity/scripts.pory"
# 1367 "data/maps/SootopolisCity/scripts.pory"
# 2603 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2604 "data/maps/SootopolisCity/scripts.pory"
# 1368 "data/maps/SootopolisCity/scripts.pory"
# 2605 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2606 "data/maps/SootopolisCity/scripts.pory"
# 1369 "data/maps/SootopolisCity/scripts.pory"
# 2607 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2608 "data/maps/SootopolisCity/scripts.pory"
# 1370 "data/maps/SootopolisCity/scripts.pory"
# 2609 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2610 "data/maps/SootopolisCity/scripts.pory"
# 1371 "data/maps/SootopolisCity/scripts.pory"
# 2611 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2612 "data/maps/SootopolisCity/scripts.pory"
# 1372 "data/maps/SootopolisCity/scripts.pory"
# 2613 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2614 "data/maps/SootopolisCity/scripts.pory"
# 1373 "data/maps/SootopolisCity/scripts.pory"
# 2615 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2616 "data/maps/SootopolisCity/scripts.pory"
# 1374 "data/maps/SootopolisCity/scripts.pory"
# 2617 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2618 "data/maps/SootopolisCity/scripts.pory"
# 1375 "data/maps/SootopolisCity/scripts.pory"
# 2619 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2620 "data/maps/SootopolisCity/scripts.pory"
# 1376 "data/maps/SootopolisCity/scripts.pory"
# 2621 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2622 "data/maps/SootopolisCity/scripts.pory"
# 1377 "data/maps/SootopolisCity/scripts.pory"
# 2623 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2624 "data/maps/SootopolisCity/scripts.pory"
# 1378 "data/maps/SootopolisCity/scripts.pory"
# 2625 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2626 "data/maps/SootopolisCity/scripts.pory"
# 1379 "data/maps/SootopolisCity/scripts.pory"
# 2627 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2628 "data/maps/SootopolisCity/scripts.pory"
# 1380 "data/maps/SootopolisCity/scripts.pory"
# 2629 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2630 "data/maps/SootopolisCity/scripts.pory"
# 1381 "data/maps/SootopolisCity/scripts.pory"
# 2631 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2632 "data/maps/SootopolisCity/scripts.pory"
# 1382 "data/maps/SootopolisCity/scripts.pory"
# 2633 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2634 "data/maps/SootopolisCity/scripts.pory"
# 1383 "data/maps/SootopolisCity/scripts.pory"
# 2635 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2636 "data/maps/SootopolisCity/scripts.pory"
# 1384 "data/maps/SootopolisCity/scripts.pory"
# 2637 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2638 "data/maps/SootopolisCity/scripts.pory"
# 1385 "data/maps/SootopolisCity/scripts.pory"
# 2639 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2640 "data/maps/SootopolisCity/scripts.pory"
# 1386 "data/maps/SootopolisCity/scripts.pory"
# 2641 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2642 "data/maps/SootopolisCity/scripts.pory"
# 1387 "data/maps/SootopolisCity/scripts.pory"
# 2643 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2644 "data/maps/SootopolisCity/scripts.pory"
# 1388 "data/maps/SootopolisCity/scripts.pory"
# 2645 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2646 "data/maps/SootopolisCity/scripts.pory"
# 1389 "data/maps/SootopolisCity/scripts.pory"
# 2647 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2648 "data/maps/SootopolisCity/scripts.pory"
# 1390 "data/maps/SootopolisCity/scripts.pory"
# 2649 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2650 "data/maps/SootopolisCity/scripts.pory"
# 1391 "data/maps/SootopolisCity/scripts.pory"
# 2651 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2652 "data/maps/SootopolisCity/scripts.pory"
# 1392 "data/maps/SootopolisCity/scripts.pory"
# 2653 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2654 "data/maps/SootopolisCity/scripts.pory"
# 1393 "data/maps/SootopolisCity/scripts.pory"
# 2655 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 2656 "data/maps/SootopolisCity/scripts.pory"

# 2657 "data/maps/SootopolisCity/scripts.pory"
# 1396 "data/maps/SootopolisCity/scripts.pory"
# 2658 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 2659 "data/maps/SootopolisCity/scripts.pory"
# 1397 "data/maps/SootopolisCity/scripts.pory"
# 2660 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 2661 "data/maps/SootopolisCity/scripts.pory"
# 1398 "data/maps/SootopolisCity/scripts.pory"
# 2662 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 2663 "data/maps/SootopolisCity/scripts.pory"
# 1399 "data/maps/SootopolisCity/scripts.pory"
# 2664 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 2665 "data/maps/SootopolisCity/scripts.pory"

# 2666 "data/maps/SootopolisCity/scripts.pory"
# 1402 "data/maps/SootopolisCity/scripts.pory"
# 2667 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 2668 "data/maps/SootopolisCity/scripts.pory"
# 1403 "data/maps/SootopolisCity/scripts.pory"
# 2669 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2670 "data/maps/SootopolisCity/scripts.pory"
# 1404 "data/maps/SootopolisCity/scripts.pory"
# 2671 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 2672 "data/maps/SootopolisCity/scripts.pory"
# 1405 "data/maps/SootopolisCity/scripts.pory"
# 2673 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 2674 "data/maps/SootopolisCity/scripts.pory"
# 1406 "data/maps/SootopolisCity/scripts.pory"
# 2675 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 2676 "data/maps/SootopolisCity/scripts.pory"
# 1407 "data/maps/SootopolisCity/scripts.pory"
# 2677 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2678 "data/maps/SootopolisCity/scripts.pory"
# 1408 "data/maps/SootopolisCity/scripts.pory"
# 2679 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2680 "data/maps/SootopolisCity/scripts.pory"
# 1409 "data/maps/SootopolisCity/scripts.pory"
# 2681 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2682 "data/maps/SootopolisCity/scripts.pory"
# 1410 "data/maps/SootopolisCity/scripts.pory"
# 2683 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2684 "data/maps/SootopolisCity/scripts.pory"
# 1411 "data/maps/SootopolisCity/scripts.pory"
# 2685 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2686 "data/maps/SootopolisCity/scripts.pory"
# 1412 "data/maps/SootopolisCity/scripts.pory"
# 2687 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 2688 "data/maps/SootopolisCity/scripts.pory"
# 1413 "data/maps/SootopolisCity/scripts.pory"
# 2689 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 2690 "data/maps/SootopolisCity/scripts.pory"

# 2691 "data/maps/SootopolisCity/scripts.pory"
# 1416 "data/maps/SootopolisCity/scripts.pory"
# 2692 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 2693 "data/maps/SootopolisCity/scripts.pory"
# 1417 "data/maps/SootopolisCity/scripts.pory"
# 2694 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 2695 "data/maps/SootopolisCity/scripts.pory"
# 1418 "data/maps/SootopolisCity/scripts.pory"
# 2696 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 2697 "data/maps/SootopolisCity/scripts.pory"
# 1419 "data/maps/SootopolisCity/scripts.pory"
# 2698 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 2699 "data/maps/SootopolisCity/scripts.pory"
# 1420 "data/maps/SootopolisCity/scripts.pory"
# 2700 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 2701 "data/maps/SootopolisCity/scripts.pory"
# 1421 "data/maps/SootopolisCity/scripts.pory"
# 2702 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2703 "data/maps/SootopolisCity/scripts.pory"
# 1422 "data/maps/SootopolisCity/scripts.pory"
# 2704 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 2705 "data/maps/SootopolisCity/scripts.pory"
# 1423 "data/maps/SootopolisCity/scripts.pory"
# 2706 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2707 "data/maps/SootopolisCity/scripts.pory"
# 1424 "data/maps/SootopolisCity/scripts.pory"
# 2708 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2709 "data/maps/SootopolisCity/scripts.pory"
# 1425 "data/maps/SootopolisCity/scripts.pory"
# 2710 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2711 "data/maps/SootopolisCity/scripts.pory"
# 1426 "data/maps/SootopolisCity/scripts.pory"
# 2712 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 2713 "data/maps/SootopolisCity/scripts.pory"
# 1427 "data/maps/SootopolisCity/scripts.pory"
# 2714 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 2715 "data/maps/SootopolisCity/scripts.pory"

# 2716 "data/maps/SootopolisCity/scripts.pory"
# 1430 "data/maps/SootopolisCity/scripts.pory"
# 2717 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 2718 "data/maps/SootopolisCity/scripts.pory"
# 1431 "data/maps/SootopolisCity/scripts.pory"
# 2719 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2720 "data/maps/SootopolisCity/scripts.pory"
# 1432 "data/maps/SootopolisCity/scripts.pory"
# 2721 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 2722 "data/maps/SootopolisCity/scripts.pory"
# 1433 "data/maps/SootopolisCity/scripts.pory"
# 2723 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 2724 "data/maps/SootopolisCity/scripts.pory"

# 2725 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 2726 "data/maps/SootopolisCity/scripts.pory"
# 1437 "data/maps/SootopolisCity/scripts.pory"
# 2727 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 2728 "data/maps/SootopolisCity/scripts.pory"
# 1438 "data/maps/SootopolisCity/scripts.pory"
# 2729 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FacePlayer
# 2730 "data/maps/SootopolisCity/scripts.pory"
# 1439 "data/maps/SootopolisCity/scripts.pory"
# 2731 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2732 "data/maps/SootopolisCity/scripts.pory"
# 1440 "data/maps/SootopolisCity/scripts.pory"
# 2733 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 2734 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Boy2_2
# 2735 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2_1:
# 2736 "data/maps/SootopolisCity/scripts.pory"
# 1443 "data/maps/SootopolisCity/scripts.pory"
# 2737 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 2738 "data/maps/SootopolisCity/scripts.pory"
# 1444 "data/maps/SootopolisCity/scripts.pory"
# 2739 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 2740 "data/maps/SootopolisCity/scripts.pory"
# 1445 "data/maps/SootopolisCity/scripts.pory"
# 2741 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FaceOriginalDirection
# 2742 "data/maps/SootopolisCity/scripts.pory"
# 1446 "data/maps/SootopolisCity/scripts.pory"
# 2743 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2744 "data/maps/SootopolisCity/scripts.pory"
# 1447 "data/maps/SootopolisCity/scripts.pory"
# 2745 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2746 "data/maps/SootopolisCity/scripts.pory"
	end
# 2747 "data/maps/SootopolisCity/scripts.pory"

# 2748 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2_2:
# 2749 "data/maps/SootopolisCity/scripts.pory"
# 1441 "data/maps/SootopolisCity/scripts.pory"
# 2750 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy2Rayquaza
# 2751 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy2_1
# 2752 "data/maps/SootopolisCity/scripts.pory"

# 2753 "data/maps/SootopolisCity/scripts.pory"

# 2754 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 2755 "data/maps/SootopolisCity/scripts.pory"
# 1452 "data/maps/SootopolisCity/scripts.pory"
# 2756 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 2757 "data/maps/SootopolisCity/scripts.pory"
# 1453 "data/maps/SootopolisCity/scripts.pory"
# 2758 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 2759 "data/maps/SootopolisCity/scripts.pory"
# 1454 "data/maps/SootopolisCity/scripts.pory"
# 2760 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2761 "data/maps/SootopolisCity/scripts.pory"
	end
# 2762 "data/maps/SootopolisCity/scripts.pory"

# 2763 "data/maps/SootopolisCity/scripts.pory"

# 2764 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 2765 "data/maps/SootopolisCity/scripts.pory"
# 1459 "data/maps/SootopolisCity/scripts.pory"
# 2766 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 2767 "data/maps/SootopolisCity/scripts.pory"
# 1460 "data/maps/SootopolisCity/scripts.pory"
# 2768 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 2769 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_BlackBelt_2
# 2770 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt_1:
# 2771 "data/maps/SootopolisCity/scripts.pory"
# 1463 "data/maps/SootopolisCity/scripts.pory"
# 2772 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 2773 "data/maps/SootopolisCity/scripts.pory"
# 1464 "data/maps/SootopolisCity/scripts.pory"
# 2774 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 2775 "data/maps/SootopolisCity/scripts.pory"
# 1465 "data/maps/SootopolisCity/scripts.pory"
# 2776 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 2777 "data/maps/SootopolisCity/scripts.pory"
# 1466 "data/maps/SootopolisCity/scripts.pory"
# 2778 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2779 "data/maps/SootopolisCity/scripts.pory"
# 1467 "data/maps/SootopolisCity/scripts.pory"
# 2780 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 2781 "data/maps/SootopolisCity/scripts.pory"
# 1468 "data/maps/SootopolisCity/scripts.pory"
# 2782 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 2783 "data/maps/SootopolisCity/scripts.pory"
# 1469 "data/maps/SootopolisCity/scripts.pory"
# 2784 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 2785 "data/maps/SootopolisCity/scripts.pory"
# 1470 "data/maps/SootopolisCity/scripts.pory"
# 2786 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2787 "data/maps/SootopolisCity/scripts.pory"
# 1471 "data/maps/SootopolisCity/scripts.pory"
# 2788 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2789 "data/maps/SootopolisCity/scripts.pory"
	end
# 2790 "data/maps/SootopolisCity/scripts.pory"

# 2791 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt_2:
# 2792 "data/maps/SootopolisCity/scripts.pory"
# 1461 "data/maps/SootopolisCity/scripts.pory"
# 2793 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_BlackBeltRayquaza
# 2794 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_BlackBelt_1
# 2795 "data/maps/SootopolisCity/scripts.pory"

# 2796 "data/maps/SootopolisCity/scripts.pory"

# 2797 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 2798 "data/maps/SootopolisCity/scripts.pory"
# 1476 "data/maps/SootopolisCity/scripts.pory"
# 2799 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 2800 "data/maps/SootopolisCity/scripts.pory"
# 1477 "data/maps/SootopolisCity/scripts.pory"
# 2801 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2802 "data/maps/SootopolisCity/scripts.pory"
# 1478 "data/maps/SootopolisCity/scripts.pory"
# 2803 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 2804 "data/maps/SootopolisCity/scripts.pory"
# 1479 "data/maps/SootopolisCity/scripts.pory"
# 2805 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2806 "data/maps/SootopolisCity/scripts.pory"
	end
# 2807 "data/maps/SootopolisCity/scripts.pory"

# 2808 "data/maps/SootopolisCity/scripts.pory"

# 2809 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 2810 "data/maps/SootopolisCity/scripts.pory"
# 1484 "data/maps/SootopolisCity/scripts.pory"
# 2811 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 2812 "data/maps/SootopolisCity/scripts.pory"
# 1485 "data/maps/SootopolisCity/scripts.pory"
# 2813 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FacePlayer
# 2814 "data/maps/SootopolisCity/scripts.pory"
# 1486 "data/maps/SootopolisCity/scripts.pory"
# 2815 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2816 "data/maps/SootopolisCity/scripts.pory"
# 1487 "data/maps/SootopolisCity/scripts.pory"
# 2817 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 2818 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Girl_2
# 2819 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl_1:
# 2820 "data/maps/SootopolisCity/scripts.pory"
# 1490 "data/maps/SootopolisCity/scripts.pory"
# 2821 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 2822 "data/maps/SootopolisCity/scripts.pory"
# 1491 "data/maps/SootopolisCity/scripts.pory"
# 2823 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 2824 "data/maps/SootopolisCity/scripts.pory"
# 1492 "data/maps/SootopolisCity/scripts.pory"
# 2825 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FaceOriginalDirection
# 2826 "data/maps/SootopolisCity/scripts.pory"
# 1493 "data/maps/SootopolisCity/scripts.pory"
# 2827 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2828 "data/maps/SootopolisCity/scripts.pory"
# 1494 "data/maps/SootopolisCity/scripts.pory"
# 2829 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2830 "data/maps/SootopolisCity/scripts.pory"
	end
# 2831 "data/maps/SootopolisCity/scripts.pory"

# 2832 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl_2:
# 2833 "data/maps/SootopolisCity/scripts.pory"
# 1488 "data/maps/SootopolisCity/scripts.pory"
# 2834 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GirlRayquaza
# 2835 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Girl_1
# 2836 "data/maps/SootopolisCity/scripts.pory"

# 2837 "data/maps/SootopolisCity/scripts.pory"

# 2838 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 2839 "data/maps/SootopolisCity/scripts.pory"
# 1499 "data/maps/SootopolisCity/scripts.pory"
# 2840 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 2841 "data/maps/SootopolisCity/scripts.pory"
# 1500 "data/maps/SootopolisCity/scripts.pory"
# 2842 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 2843 "data/maps/SootopolisCity/scripts.pory"
# 1501 "data/maps/SootopolisCity/scripts.pory"
# 2844 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2845 "data/maps/SootopolisCity/scripts.pory"
	end
# 2846 "data/maps/SootopolisCity/scripts.pory"

# 2847 "data/maps/SootopolisCity/scripts.pory"

# 2848 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 2849 "data/maps/SootopolisCity/scripts.pory"
# 1506 "data/maps/SootopolisCity/scripts.pory"
# 2850 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 2851 "data/maps/SootopolisCity/scripts.pory"
# 1507 "data/maps/SootopolisCity/scripts.pory"
# 2852 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FacePlayer
# 2853 "data/maps/SootopolisCity/scripts.pory"
# 1508 "data/maps/SootopolisCity/scripts.pory"
# 2854 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2855 "data/maps/SootopolisCity/scripts.pory"
# 1509 "data/maps/SootopolisCity/scripts.pory"
# 2856 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 2857 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Maniac_2
# 2858 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac_1:
# 2859 "data/maps/SootopolisCity/scripts.pory"
# 1512 "data/maps/SootopolisCity/scripts.pory"
# 2860 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 2861 "data/maps/SootopolisCity/scripts.pory"
# 1513 "data/maps/SootopolisCity/scripts.pory"
# 2862 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 2863 "data/maps/SootopolisCity/scripts.pory"
# 1514 "data/maps/SootopolisCity/scripts.pory"
# 2864 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FaceOriginalDirection
# 2865 "data/maps/SootopolisCity/scripts.pory"
# 1515 "data/maps/SootopolisCity/scripts.pory"
# 2866 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2867 "data/maps/SootopolisCity/scripts.pory"
# 1516 "data/maps/SootopolisCity/scripts.pory"
# 2868 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2869 "data/maps/SootopolisCity/scripts.pory"
	end
# 2870 "data/maps/SootopolisCity/scripts.pory"

# 2871 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac_2:
# 2872 "data/maps/SootopolisCity/scripts.pory"
# 1510 "data/maps/SootopolisCity/scripts.pory"
# 2873 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ManiacRayquaza
# 2874 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Maniac_1
# 2875 "data/maps/SootopolisCity/scripts.pory"

# 2876 "data/maps/SootopolisCity/scripts.pory"

# 2877 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 2878 "data/maps/SootopolisCity/scripts.pory"
# 1521 "data/maps/SootopolisCity/scripts.pory"
# 2879 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 2880 "data/maps/SootopolisCity/scripts.pory"
# 1522 "data/maps/SootopolisCity/scripts.pory"
# 2881 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 2882 "data/maps/SootopolisCity/scripts.pory"
	end
# 2883 "data/maps/SootopolisCity/scripts.pory"

# 2884 "data/maps/SootopolisCity/scripts.pory"

# 2885 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 2886 "data/maps/SootopolisCity/scripts.pory"
# 1527 "data/maps/SootopolisCity/scripts.pory"
# 2887 "data/maps/SootopolisCity/scripts.pory"
	lock
# 2888 "data/maps/SootopolisCity/scripts.pory"
# 1528 "data/maps/SootopolisCity/scripts.pory"
# 2889 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 2890 "data/maps/SootopolisCity/scripts.pory"
# 1529 "data/maps/SootopolisCity/scripts.pory"
# 2891 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
# 2892 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Wallace_2
# 2893 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace_1:
# 2894 "data/maps/SootopolisCity/scripts.pory"
# 1532 "data/maps/SootopolisCity/scripts.pory"
# 2895 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_Wallace_5
# 2896 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace_4:
# 2897 "data/maps/SootopolisCity/scripts.pory"
# 1535 "data/maps/SootopolisCity/scripts.pory"
# 2898 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_Wallace_8
# 2899 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace_7:
# 2900 "data/maps/SootopolisCity/scripts.pory"
# 1538 "data/maps/SootopolisCity/scripts.pory"
# 2901 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 2902 "data/maps/SootopolisCity/scripts.pory"
# 1539 "data/maps/SootopolisCity/scripts.pory"
# 2903 "data/maps/SootopolisCity/scripts.pory"
	release
# 2904 "data/maps/SootopolisCity/scripts.pory"
	end
# 2905 "data/maps/SootopolisCity/scripts.pory"

# 2906 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace_2:
# 2907 "data/maps/SootopolisCity/scripts.pory"
# 1530 "data/maps/SootopolisCity/scripts.pory"
# 2908 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GoToSkyPillar
# 2909 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Wallace_1
# 2910 "data/maps/SootopolisCity/scripts.pory"

# 2911 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace_5:
# 2912 "data/maps/SootopolisCity/scripts.pory"
# 1533 "data/maps/SootopolisCity/scripts.pory"
# 2913 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GoToGym
# 2914 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Wallace_4
# 2915 "data/maps/SootopolisCity/scripts.pory"

# 2916 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace_8:
# 2917 "data/maps/SootopolisCity/scripts.pory"
# 1536 "data/maps/SootopolisCity/scripts.pory"
# 2918 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveWaterfall
# 2919 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Wallace_7
# 2920 "data/maps/SootopolisCity/scripts.pory"

# 2921 "data/maps/SootopolisCity/scripts.pory"

# 2922 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 2923 "data/maps/SootopolisCity/scripts.pory"
# 1544 "data/maps/SootopolisCity/scripts.pory"
# 2924 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 2925 "data/maps/SootopolisCity/scripts.pory"
# 1545 "data/maps/SootopolisCity/scripts.pory"
# 2926 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 2927 "data/maps/SootopolisCity/scripts.pory"
# 1546 "data/maps/SootopolisCity/scripts.pory"
# 2928 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 2929 "data/maps/SootopolisCity/scripts.pory"
# 1547 "data/maps/SootopolisCity/scripts.pory"
# 2930 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 2931 "data/maps/SootopolisCity/scripts.pory"
# 1548 "data/maps/SootopolisCity/scripts.pory"
# 2932 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 2933 "data/maps/SootopolisCity/scripts.pory"
# 1549 "data/maps/SootopolisCity/scripts.pory"
# 2934 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 2935 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_GiveWaterfall_2
# 2936 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall_1:
# 2937 "data/maps/SootopolisCity/scripts.pory"
# 1552 "data/maps/SootopolisCity/scripts.pory"
# 2938 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 2939 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_GiveWaterfall_5
# 2940 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall_4:
# 2941 "data/maps/SootopolisCity/scripts.pory"
# 1555 "data/maps/SootopolisCity/scripts.pory"
# 2942 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 2943 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_GiveWaterfall_8
# 2944 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall_7:
# 2945 "data/maps/SootopolisCity/scripts.pory"
# 1558 "data/maps/SootopolisCity/scripts.pory"
# 2946 "data/maps/SootopolisCity/scripts.pory"
	release
# 2947 "data/maps/SootopolisCity/scripts.pory"
	end
# 2948 "data/maps/SootopolisCity/scripts.pory"

# 2949 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall_2:
# 2950 "data/maps/SootopolisCity/scripts.pory"
# 1550 "data/maps/SootopolisCity/scripts.pory"
# 2951 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_WallaceMoveFromGym
# 2952 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveWaterfall_1
# 2953 "data/maps/SootopolisCity/scripts.pory"

# 2954 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall_5:
# 2955 "data/maps/SootopolisCity/scripts.pory"
# 1553 "data/maps/SootopolisCity/scripts.pory"
# 2956 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_WallaceMoveFromGym
# 2957 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveWaterfall_4
# 2958 "data/maps/SootopolisCity/scripts.pory"

# 2959 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall_8:
# 2960 "data/maps/SootopolisCity/scripts.pory"
# 1556 "data/maps/SootopolisCity/scripts.pory"
# 2961 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_WallaceMoveFromGymWest
# 2962 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveWaterfall_7
# 2963 "data/maps/SootopolisCity/scripts.pory"

# 2964 "data/maps/SootopolisCity/scripts.pory"

# 2965 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 2966 "data/maps/SootopolisCity/scripts.pory"
# 1563 "data/maps/SootopolisCity/scripts.pory"
# 2967 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 2968 "data/maps/SootopolisCity/scripts.pory"
# 1564 "data/maps/SootopolisCity/scripts.pory"
# 2969 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2970 "data/maps/SootopolisCity/scripts.pory"
# 1565 "data/maps/SootopolisCity/scripts.pory"
# 2971 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 2972 "data/maps/SootopolisCity/scripts.pory"
# 1566 "data/maps/SootopolisCity/scripts.pory"
# 2973 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 2974 "data/maps/SootopolisCity/scripts.pory"
	return
# 2975 "data/maps/SootopolisCity/scripts.pory"

# 2976 "data/maps/SootopolisCity/scripts.pory"

# 2977 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 2978 "data/maps/SootopolisCity/scripts.pory"
# 1571 "data/maps/SootopolisCity/scripts.pory"
# 2979 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 2980 "data/maps/SootopolisCity/scripts.pory"
# 1572 "data/maps/SootopolisCity/scripts.pory"
# 2981 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 2982 "data/maps/SootopolisCity/scripts.pory"
# 1573 "data/maps/SootopolisCity/scripts.pory"
# 2983 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 2984 "data/maps/SootopolisCity/scripts.pory"
# 1574 "data/maps/SootopolisCity/scripts.pory"
# 2985 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 2986 "data/maps/SootopolisCity/scripts.pory"
	return
# 2987 "data/maps/SootopolisCity/scripts.pory"

# 2988 "data/maps/SootopolisCity/scripts.pory"

# 2989 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 2990 "data/maps/SootopolisCity/scripts.pory"
# 1579 "data/maps/SootopolisCity/scripts.pory"
# 2991 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 2992 "data/maps/SootopolisCity/scripts.pory"
# 1580 "data/maps/SootopolisCity/scripts.pory"
# 2993 "data/maps/SootopolisCity/scripts.pory"
	release
# 2994 "data/maps/SootopolisCity/scripts.pory"
	end
# 2995 "data/maps/SootopolisCity/scripts.pory"

# 2996 "data/maps/SootopolisCity/scripts.pory"

# 2997 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 2998 "data/maps/SootopolisCity/scripts.pory"
# 1585 "data/maps/SootopolisCity/scripts.pory"
# 2999 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 3000 "data/maps/SootopolisCity/scripts.pory"
# 1586 "data/maps/SootopolisCity/scripts.pory"
# 3001 "data/maps/SootopolisCity/scripts.pory"
	release
# 3002 "data/maps/SootopolisCity/scripts.pory"
	end
# 3003 "data/maps/SootopolisCity/scripts.pory"

# 3004 "data/maps/SootopolisCity/scripts.pory"

# 3005 "data/maps/SootopolisCity/scripts.pory"
# 1590 "data/maps/SootopolisCity/scripts.pory"
# 3006 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 3007 "data/maps/SootopolisCity/scripts.pory"
# 1591 "data/maps/SootopolisCity/scripts.pory"
# 3008 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 3009 "data/maps/SootopolisCity/scripts.pory"
# 1592 "data/maps/SootopolisCity/scripts.pory"
# 3010 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 3011 "data/maps/SootopolisCity/scripts.pory"
# 1593 "data/maps/SootopolisCity/scripts.pory"
# 3012 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 3013 "data/maps/SootopolisCity/scripts.pory"

# 3014 "data/maps/SootopolisCity/scripts.pory"
# 1596 "data/maps/SootopolisCity/scripts.pory"
# 3015 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 3016 "data/maps/SootopolisCity/scripts.pory"
# 1597 "data/maps/SootopolisCity/scripts.pory"
# 3017 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 3018 "data/maps/SootopolisCity/scripts.pory"
# 1598 "data/maps/SootopolisCity/scripts.pory"
# 3019 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 3020 "data/maps/SootopolisCity/scripts.pory"
# 1599 "data/maps/SootopolisCity/scripts.pory"
# 3021 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 3022 "data/maps/SootopolisCity/scripts.pory"

# 3023 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 3024 "data/maps/SootopolisCity/scripts.pory"
# 1603 "data/maps/SootopolisCity/scripts.pory"
# 3025 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 3026 "data/maps/SootopolisCity/scripts.pory"
# 1604 "data/maps/SootopolisCity/scripts.pory"
# 3027 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 3028 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Maxie_2
# 3029 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie_1:
# 3030 "data/maps/SootopolisCity/scripts.pory"
# 1607 "data/maps/SootopolisCity/scripts.pory"
# 3031 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 3032 "data/maps/SootopolisCity/scripts.pory"
# 1608 "data/maps/SootopolisCity/scripts.pory"
# 3033 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 3034 "data/maps/SootopolisCity/scripts.pory"
# 1609 "data/maps/SootopolisCity/scripts.pory"
# 3035 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 3036 "data/maps/SootopolisCity/scripts.pory"
	end
# 3037 "data/maps/SootopolisCity/scripts.pory"

# 3038 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie_2:
# 3039 "data/maps/SootopolisCity/scripts.pory"
# 1605 "data/maps/SootopolisCity/scripts.pory"
# 3040 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_MaxieRayquaza
# 3041 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Maxie_1
# 3042 "data/maps/SootopolisCity/scripts.pory"

# 3043 "data/maps/SootopolisCity/scripts.pory"

# 3044 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 3045 "data/maps/SootopolisCity/scripts.pory"
# 1614 "data/maps/SootopolisCity/scripts.pory"
# 3046 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 3047 "data/maps/SootopolisCity/scripts.pory"
# 1615 "data/maps/SootopolisCity/scripts.pory"
# 3048 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 3049 "data/maps/SootopolisCity/scripts.pory"
# 1616 "data/maps/SootopolisCity/scripts.pory"
# 3050 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieRayquaza_2
# 3051 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza_1:
# 3052 "data/maps/SootopolisCity/scripts.pory"
# 1619 "data/maps/SootopolisCity/scripts.pory"
# 3053 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 3054 "data/maps/SootopolisCity/scripts.pory"
	end
# 3055 "data/maps/SootopolisCity/scripts.pory"

# 3056 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza_2:
# 3057 "data/maps/SootopolisCity/scripts.pory"
# 1617 "data/maps/SootopolisCity/scripts.pory"
# 3058 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_MaxieArchieLeave
# 3059 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_MaxieRayquaza_1
# 3060 "data/maps/SootopolisCity/scripts.pory"

# 3061 "data/maps/SootopolisCity/scripts.pory"

# 3062 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 3063 "data/maps/SootopolisCity/scripts.pory"
# 1624 "data/maps/SootopolisCity/scripts.pory"
# 3064 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 3065 "data/maps/SootopolisCity/scripts.pory"
# 1625 "data/maps/SootopolisCity/scripts.pory"
# 3066 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
# 3067 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq SootopolisCity_EventScript_Archie_2
# 3068 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie_1:
# 3069 "data/maps/SootopolisCity/scripts.pory"
# 1628 "data/maps/SootopolisCity/scripts.pory"
# 3070 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 3071 "data/maps/SootopolisCity/scripts.pory"
# 1629 "data/maps/SootopolisCity/scripts.pory"
# 3072 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 3073 "data/maps/SootopolisCity/scripts.pory"
# 1630 "data/maps/SootopolisCity/scripts.pory"
# 3074 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 3075 "data/maps/SootopolisCity/scripts.pory"
	end
# 3076 "data/maps/SootopolisCity/scripts.pory"

# 3077 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie_2:
# 3078 "data/maps/SootopolisCity/scripts.pory"
# 1626 "data/maps/SootopolisCity/scripts.pory"
# 3079 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ArchieRayquaza
# 3080 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Archie_1
# 3081 "data/maps/SootopolisCity/scripts.pory"

# 3082 "data/maps/SootopolisCity/scripts.pory"

# 3083 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 3084 "data/maps/SootopolisCity/scripts.pory"
# 1635 "data/maps/SootopolisCity/scripts.pory"
# 3085 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 3086 "data/maps/SootopolisCity/scripts.pory"
# 1636 "data/maps/SootopolisCity/scripts.pory"
# 3087 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 3088 "data/maps/SootopolisCity/scripts.pory"
# 1637 "data/maps/SootopolisCity/scripts.pory"
# 3089 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_ArchieRayquaza_2
# 3090 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza_1:
# 3091 "data/maps/SootopolisCity/scripts.pory"
# 1640 "data/maps/SootopolisCity/scripts.pory"
# 3092 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 3093 "data/maps/SootopolisCity/scripts.pory"
	end
# 3094 "data/maps/SootopolisCity/scripts.pory"

# 3095 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza_2:
# 3096 "data/maps/SootopolisCity/scripts.pory"
# 1638 "data/maps/SootopolisCity/scripts.pory"
# 3097 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_MaxieArchieLeave
# 3098 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ArchieRayquaza_1
# 3099 "data/maps/SootopolisCity/scripts.pory"

# 3100 "data/maps/SootopolisCity/scripts.pory"

# 3101 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 3102 "data/maps/SootopolisCity/scripts.pory"
# 1645 "data/maps/SootopolisCity/scripts.pory"
# 3103 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 3104 "data/maps/SootopolisCity/scripts.pory"
# 1646 "data/maps/SootopolisCity/scripts.pory"
# 3105 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 3106 "data/maps/SootopolisCity/scripts.pory"
# 1647 "data/maps/SootopolisCity/scripts.pory"
# 3107 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 3108 "data/maps/SootopolisCity/scripts.pory"
# 1648 "data/maps/SootopolisCity/scripts.pory"
# 3109 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 3110 "data/maps/SootopolisCity/scripts.pory"
# 1649 "data/maps/SootopolisCity/scripts.pory"
# 3111 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 3112 "data/maps/SootopolisCity/scripts.pory"
# 1650 "data/maps/SootopolisCity/scripts.pory"
# 3113 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 3114 "data/maps/SootopolisCity/scripts.pory"
# 1651 "data/maps/SootopolisCity/scripts.pory"
# 3115 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 3116 "data/maps/SootopolisCity/scripts.pory"
# 1652 "data/maps/SootopolisCity/scripts.pory"
# 3117 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 3118 "data/maps/SootopolisCity/scripts.pory"
# 1653 "data/maps/SootopolisCity/scripts.pory"
# 3119 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 3120 "data/maps/SootopolisCity/scripts.pory"
	end
# 3121 "data/maps/SootopolisCity/scripts.pory"

# 3122 "data/maps/SootopolisCity/scripts.pory"

# 3123 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 3124 "data/maps/SootopolisCity/scripts.pory"
# 1658 "data/maps/SootopolisCity/scripts.pory"
# 3125 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 3126 "data/maps/SootopolisCity/scripts.pory"
# 1659 "data/maps/SootopolisCity/scripts.pory"
# 3127 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 3128 "data/maps/SootopolisCity/scripts.pory"
	return
# 3129 "data/maps/SootopolisCity/scripts.pory"

# 3130 "data/maps/SootopolisCity/scripts.pory"

# 3131 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 3132 "data/maps/SootopolisCity/scripts.pory"
# 1663 "data/maps/SootopolisCity/scripts.pory"
# 3133 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 3134 "data/maps/SootopolisCity/scripts.pory"
# 1664 "data/maps/SootopolisCity/scripts.pory"
# 3135 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 3136 "data/maps/SootopolisCity/scripts.pory"
	return
# 3137 "data/maps/SootopolisCity/scripts.pory"

# 3138 "data/maps/SootopolisCity/scripts.pory"

# 3139 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign::
# 3140 "data/maps/SootopolisCity/scripts.pory"
# 1667 "data/maps/SootopolisCity/scripts.pory"
# 3141 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
# 3142 "data/maps/SootopolisCity/scripts.pory"
	.string "LEADER: JUAN\p"
# 3143 "data/maps/SootopolisCity/scripts.pory"
	.string "“The GYM LEADER with the beauty\n"
# 3144 "data/maps/SootopolisCity/scripts.pory"
	.string "of pure water!”$"
# 3145 "data/maps/SootopolisCity/scripts.pory"

# 3146 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign::
# 3147 "data/maps/SootopolisCity/scripts.pory"
# 1674 "data/maps/SootopolisCity/scripts.pory"
# 3148 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
# 3149 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 3150 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 3151 "data/maps/SootopolisCity/scripts.pory"

# 3152 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed::
# 3153 "data/maps/SootopolisCity/scripts.pory"
# 1680 "data/maps/SootopolisCity/scripts.pory"
# 3154 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 3155 "data/maps/SootopolisCity/scripts.pory"

# 3156 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere::
# 3157 "data/maps/SootopolisCity/scripts.pory"
# 1684 "data/maps/SootopolisCity/scripts.pory"
# 3158 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 3159 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 3160 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 3161 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 3162 "data/maps/SootopolisCity/scripts.pory"

# 3163 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared::
# 3164 "data/maps/SootopolisCity/scripts.pory"
# 1691 "data/maps/SootopolisCity/scripts.pory"
# 3165 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant POKéMON suddenly appeared\n"
# 3166 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 3167 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 3168 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 3169 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 3170 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 3171 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 3172 "data/maps/SootopolisCity/scripts.pory"

# 3173 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon::
# 3174 "data/maps/SootopolisCity/scripts.pory"
# 1701 "data/maps/SootopolisCity/scripts.pory"
# 3175 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 3176 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green POKéMON?!$"
# 3177 "data/maps/SootopolisCity/scripts.pory"

# 3178 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo::
# 3179 "data/maps/SootopolisCity/scripts.pory"
# 1706 "data/maps/SootopolisCity/scripts.pory"
# 3180 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON and KYOGRE…\n"
# 3181 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 3182 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 3183 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 3184 "data/maps/SootopolisCity/scripts.pory"

# 3185 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry::
# 3186 "data/maps/SootopolisCity/scripts.pory"
# 1713 "data/maps/SootopolisCity/scripts.pory"
# 3187 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 3188 "data/maps/SootopolisCity/scripts.pory"
	.string "the two POKéMON aren't angry.\p"
# 3189 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 3190 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 3191 "data/maps/SootopolisCity/scripts.pory"

# 3192 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage::
# 3193 "data/maps/SootopolisCity/scripts.pory"
# 1720 "data/maps/SootopolisCity/scripts.pory"
# 3194 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying POKéMON came down from\n"
# 3195 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 3196 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON…$"
# 3197 "data/maps/SootopolisCity/scripts.pory"

# 3198 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike::
# 3199 "data/maps/SootopolisCity/scripts.pory"
# 1726 "data/maps/SootopolisCity/scripts.pory"
# 3200 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 3201 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 3202 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of this round sky?$"
# 3203 "data/maps/SootopolisCity/scripts.pory"

# 3204 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked::
# 3205 "data/maps/SootopolisCity/scripts.pory"
# 1732 "data/maps/SootopolisCity/scripts.pory"
# 3206 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 3207 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 3208 "data/maps/SootopolisCity/scripts.pory"

# 3209 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked::
# 3210 "data/maps/SootopolisCity/scripts.pory"
# 1737 "data/maps/SootopolisCity/scripts.pory"
# 3211 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 3212 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 3213 "data/maps/SootopolisCity/scripts.pory"

# 3214 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon::
# 3215 "data/maps/SootopolisCity/scripts.pory"
# 1742 "data/maps/SootopolisCity/scripts.pory"
# 3216 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red POKéMON!\n"
# 3217 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue POKéMON!$"
# 3218 "data/maps/SootopolisCity/scripts.pory"

# 3219 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames::
# 3220 "data/maps/SootopolisCity/scripts.pory"
# 1747 "data/maps/SootopolisCity/scripts.pory"
# 3221 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 3222 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 3223 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON fighting over there?$"
# 3224 "data/maps/SootopolisCity/scripts.pory"

# 3225 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings::
# 3226 "data/maps/SootopolisCity/scripts.pory"
# 1753 "data/maps/SootopolisCity/scripts.pory"
# 3227 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 3228 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 3229 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 3230 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 3231 "data/maps/SootopolisCity/scripts.pory"

# 3232 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes::
# 3233 "data/maps/SootopolisCity/scripts.pory"
# 1760 "data/maps/SootopolisCity/scripts.pory"
# 3234 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 3235 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 3236 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 3237 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 3238 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 3239 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 3240 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 3241 "data/maps/SootopolisCity/scripts.pory"

# 3242 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes::
# 3243 "data/maps/SootopolisCity/scripts.pory"
# 1770 "data/maps/SootopolisCity/scripts.pory"
# 3244 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 3245 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 3246 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 3247 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 3248 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 3249 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 3250 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 3251 "data/maps/SootopolisCity/scripts.pory"

# 3252 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting::
# 3253 "data/maps/SootopolisCity/scripts.pory"
# 1780 "data/maps/SootopolisCity/scripts.pory"
# 3254 "data/maps/SootopolisCity/scripts.pory"
	.string "A big POKéMON is fighting with\n"
# 3255 "data/maps/SootopolisCity/scripts.pory"
	.string "another big POKéMON!\p"
# 3256 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 3257 "data/maps/SootopolisCity/scripts.pory"

# 3258 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky::
# 3259 "data/maps/SootopolisCity/scripts.pory"
# 1786 "data/maps/SootopolisCity/scripts.pory"
# 3260 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty POKéMON came down from\n"
# 3261 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 3262 "data/maps/SootopolisCity/scripts.pory"

# 3263 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked::
# 3264 "data/maps/SootopolisCity/scripts.pory"
# 1791 "data/maps/SootopolisCity/scripts.pory"
# 3265 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 3266 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY will get wrecked!$"
# 3267 "data/maps/SootopolisCity/scripts.pory"

# 3268 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked::
# 3269 "data/maps/SootopolisCity/scripts.pory"
# 1796 "data/maps/SootopolisCity/scripts.pory"
# 3270 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY didn't get wrecked!$"
# 3271 "data/maps/SootopolisCity/scripts.pory"

# 3272 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist::
# 3273 "data/maps/SootopolisCity/scripts.pory"
# 1800 "data/maps/SootopolisCity/scripts.pory"
# 3274 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 3275 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to SOOTOPOLIS?\l"
# 3276 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 3277 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 3278 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 3279 "data/maps/SootopolisCity/scripts.pory"

# 3280 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm::
# 3281 "data/maps/SootopolisCity/scripts.pory"
# 1808 "data/maps/SootopolisCity/scripts.pory"
# 3282 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 3283 "data/maps/SootopolisCity/scripts.pory"

# 3284 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave::
# 3285 "data/maps/SootopolisCity/scripts.pory"
# 1812 "data/maps/SootopolisCity/scripts.pory"
# 3286 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
# 3287 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN.\p"
# 3288 "data/maps/SootopolisCity/scripts.pory"
	.string "The spirits of POKéMON, becalmed at\n"
# 3289 "data/maps/SootopolisCity/scripts.pory"
	.string "MT. PYRE, are said to be revived here.\p"
# 3290 "data/maps/SootopolisCity/scripts.pory"
	.string "Please leave.$"
# 3291 "data/maps/SootopolisCity/scripts.pory"

# 3292 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave::
# 3293 "data/maps/SootopolisCity/scripts.pory"
# 1820 "data/maps/SootopolisCity/scripts.pory"
# 3294 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
# 3295 "data/maps/SootopolisCity/scripts.pory"
	.string "superior talent…\p"
# 3296 "data/maps/SootopolisCity/scripts.pory"
	.string "A TRAINER who has knowledge and\n"
# 3297 "data/maps/SootopolisCity/scripts.pory"
	.string "experience of many kinds of POKéMON…\p"
# 3298 "data/maps/SootopolisCity/scripts.pory"
	.string "If such a person were to appear, I was\n"
# 3299 "data/maps/SootopolisCity/scripts.pory"
	.string "instructed by WALLACE to lead that\l"
# 3300 "data/maps/SootopolisCity/scripts.pory"
	.string "TRAINER to this CAVE.$"
# 3301 "data/maps/SootopolisCity/scripts.pory"

# 3302 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash::
# 3303 "data/maps/SootopolisCity/scripts.pory"
# 1830 "data/maps/SootopolisCity/scripts.pory"
# 3304 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
# 3305 "data/maps/SootopolisCity/scripts.pory"
	.string "The clash between the two awakened\n"
# 3306 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON was quelled by the awakening\l"
# 3307 "data/maps/SootopolisCity/scripts.pory"
	.string "of a third POKéMON…$"
# 3308 "data/maps/SootopolisCity/scripts.pory"

# 3309 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo::
# 3310 "data/maps/SootopolisCity/scripts.pory"
# 1837 "data/maps/SootopolisCity/scripts.pory"
# 3311 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN…\p"
# 3312 "data/maps/SootopolisCity/scripts.pory"
	.string "With the passing of the crisis,\n"
# 3313 "data/maps/SootopolisCity/scripts.pory"
	.string "the cave, too, shall sleep…$"
# 3314 "data/maps/SootopolisCity/scripts.pory"

# 3315 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful::
# 3316 "data/maps/SootopolisCity/scripts.pory"
# 1843 "data/maps/SootopolisCity/scripts.pory"
# 3317 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in\n"
# 3318 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 3319 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 3320 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 3321 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 3322 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 3323 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS the most beautiful.$"
# 3324 "data/maps/SootopolisCity/scripts.pory"

# 3325 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight::
# 3326 "data/maps/SootopolisCity/scripts.pory"
# 1853 "data/maps/SootopolisCity/scripts.pory"
# 3327 "data/maps/SootopolisCity/scripts.pory"
	.string "When two POKéMON that gigantic\n"
# 3328 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 3329 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 3330 "data/maps/SootopolisCity/scripts.pory"

# 3331 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown::
# 3332 "data/maps/SootopolisCity/scripts.pory"
# 1859 "data/maps/SootopolisCity/scripts.pory"
# 3333 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third POKéMON flew down,\n"
# 3334 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 3335 "data/maps/SootopolisCity/scripts.pory"

# 3336 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery::
# 3337 "data/maps/SootopolisCity/scripts.pory"
# 1864 "data/maps/SootopolisCity/scripts.pory"
# 3338 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 3339 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 3340 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 3341 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 3342 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 3343 "data/maps/SootopolisCity/scripts.pory"

# 3344 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild::
# 3345 "data/maps/SootopolisCity/scripts.pory"
# 1872 "data/maps/SootopolisCity/scripts.pory"
# 3346 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 3347 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 3348 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 3349 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 3350 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 3351 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 3352 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 3353 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 3354 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 3355 "data/maps/SootopolisCity/scripts.pory"

# 3356 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon::
# 3357 "data/maps/SootopolisCity/scripts.pory"
# 1884 "data/maps/SootopolisCity/scripts.pory"
# 3358 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 3359 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 3360 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON here?\p"
# 3361 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 3362 "data/maps/SootopolisCity/scripts.pory"

# 3363 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop::
# 3364 "data/maps/SootopolisCity/scripts.pory"
# 1891 "data/maps/SootopolisCity/scripts.pory"
# 3365 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: G… GROUDON…\n"
# 3366 "data/maps/SootopolisCity/scripts.pory"
	.string "Please! Stop what you're doing!\p"
# 3367 "data/maps/SootopolisCity/scripts.pory"
	.string "I know the extent of your power now!\p"
# 3368 "data/maps/SootopolisCity/scripts.pory"
	.string "If you keep going, all HOENN, not just\n"
# 3369 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS, will be utterly ruined!$"
# 3370 "data/maps/SootopolisCity/scripts.pory"

# 3371 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming::
# 3372 "data/maps/SootopolisCity/scripts.pory"
# 1899 "data/maps/SootopolisCity/scripts.pory"
# 3373 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: So the super-ancient POKéMON\n"
# 3374 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only GROUDON and KYOGRE…\p"
# 3375 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 3376 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one POKéMON's\l"
# 3377 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 3378 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 3379 "data/maps/SootopolisCity/scripts.pory"
	.string "Fu…\n"
# 3380 "data/maps/SootopolisCity/scripts.pory"
	.string "Fuhahaha…$"
# 3381 "data/maps/SootopolisCity/scripts.pory"

# 3382 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown::
# 3383 "data/maps/SootopolisCity/scripts.pory"
# 1910 "data/maps/SootopolisCity/scripts.pory"
# 3384 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE! What's wrong?!\n"
# 3385 "data/maps/SootopolisCity/scripts.pory"
	.string "Look over here! It's the RED ORB!\l"
# 3386 "data/maps/SootopolisCity/scripts.pory"
	.string "Calm down! KYOGRE!\p"
# 3387 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 3388 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 3389 "data/maps/SootopolisCity/scripts.pory"
	.string "It's no good!\n"
# 3390 "data/maps/SootopolisCity/scripts.pory"
	.string "It's not responding at all!$"
# 3391 "data/maps/SootopolisCity/scripts.pory"

# 3392 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon::
# 3393 "data/maps/SootopolisCity/scripts.pory"
# 1920 "data/maps/SootopolisCity/scripts.pory"
# 3394 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE and GROUDON both\n"
# 3395 "data/maps/SootopolisCity/scripts.pory"
	.string "flew off to who knows where.\p"
# 3396 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in HOENN has returned\n"
# 3397 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 3398 "data/maps/SootopolisCity/scripts.pory"
	.string "Haha…\n"
# 3399 "data/maps/SootopolisCity/scripts.pory"
	.string "Hahaha…\p"
# 3400 "data/maps/SootopolisCity/scripts.pory"
	.string "Maybe what we were trying to do was\n"
# 3401 "data/maps/SootopolisCity/scripts.pory"
	.string "something small, even meaningless,\l"
# 3402 "data/maps/SootopolisCity/scripts.pory"
	.string "to POKéMON…$"
# 3403 "data/maps/SootopolisCity/scripts.pory"

# 3404 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_InvolvedWithCrisisComeWithMe::
# 3405 "data/maps/SootopolisCity/scripts.pory"
# 1932 "data/maps/SootopolisCity/scripts.pory"
# 3406 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Those POKéMON fighting…\n"
# 3407 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON… And KYOGRE…\p"
# 3408 "data/maps/SootopolisCity/scripts.pory"
	.string "The two super-ancient POKéMON\n"
# 3409 "data/maps/SootopolisCity/scripts.pory"
	.string "were awakened from a long sleep…\p"
# 3410 "data/maps/SootopolisCity/scripts.pory"
	.string "And now they are smashing each other\n"
# 3411 "data/maps/SootopolisCity/scripts.pory"
	.string "with their uncontrollable energy…\p"
# 3412 "data/maps/SootopolisCity/scripts.pory"
	.string "…{PLAYER}{KUN}.\p"
# 3413 "data/maps/SootopolisCity/scripts.pory"
	.string "You being here now I'll take to mean\n"
# 3414 "data/maps/SootopolisCity/scripts.pory"
	.string "that you're prepared to become\l"
# 3415 "data/maps/SootopolisCity/scripts.pory"
	.string "involved in this crisis.\p"
# 3416 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, then, there's someone that\n"
# 3417 "data/maps/SootopolisCity/scripts.pory"
	.string "I'd like you to meet.\p"
# 3418 "data/maps/SootopolisCity/scripts.pory"
	.string "Come with me, please.$"
# 3419 "data/maps/SootopolisCity/scripts.pory"

# 3420 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoesThisMakeYourFearPokemon::
# 3421 "data/maps/SootopolisCity/scripts.pory"
# 1948 "data/maps/SootopolisCity/scripts.pory"
# 3422 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Listen, {PLAYER}{KUN}.\p"
# 3423 "data/maps/SootopolisCity/scripts.pory"
	.string "Does seeing GROUDON and KYOGRE make\n"
# 3424 "data/maps/SootopolisCity/scripts.pory"
	.string "you think POKéMON are to be feared?\p"
# 3425 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's not true.\n"
# 3426 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON are really more…\p"
# 3427 "data/maps/SootopolisCity/scripts.pory"
	.string "…Why am I asking you this?\n"
# 3428 "data/maps/SootopolisCity/scripts.pory"
	.string "You already know.$"
# 3429 "data/maps/SootopolisCity/scripts.pory"

# 3430 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HereWereAreHelpWallace::
# 3431 "data/maps/SootopolisCity/scripts.pory"
# 1958 "data/maps/SootopolisCity/scripts.pory"
# 3432 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Okay, here we are!\p"
# 3433 "data/maps/SootopolisCity/scripts.pory"
	.string "Inside here you'll find someone named\n"
# 3434 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE.\p"
# 3435 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's needed to\n"
# 3436 "data/maps/SootopolisCity/scripts.pory"
	.string "help him…$"
# 3437 "data/maps/SootopolisCity/scripts.pory"

# 3438 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KnowWhatsNeededToHelpHim::
# 3439 "data/maps/SootopolisCity/scripts.pory"
# 1966 "data/maps/SootopolisCity/scripts.pory"
# 3440 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: I think you have what's\n"
# 3441 "data/maps/SootopolisCity/scripts.pory"
	.string "needed to help him…$"
# 3442 "data/maps/SootopolisCity/scripts.pory"

# 3443 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NeverBeenToSkyPillar::
# 3444 "data/maps/SootopolisCity/scripts.pory"
# 1971 "data/maps/SootopolisCity/scripts.pory"
# 3445 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: The SKY PILLAR…\p"
# 3446 "data/maps/SootopolisCity/scripts.pory"
	.string "I've never been there.\n"
# 3447 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder where it could be?$"
# 3448 "data/maps/SootopolisCity/scripts.pory"

# 3449 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SoThatsRayquaza::
# 3450 "data/maps/SootopolisCity/scripts.pory"
# 1977 "data/maps/SootopolisCity/scripts.pory"
# 3451 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: So that's RAYQUAZA…\p"
# 3452 "data/maps/SootopolisCity/scripts.pory"
	.string "It's incredible how the two rampaging\n"
# 3453 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON would flee from it in fear…$"
# 3454 "data/maps/SootopolisCity/scripts.pory"

# 3455 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieArchieLeft::
# 3456 "data/maps/SootopolisCity/scripts.pory"
# 1983 "data/maps/SootopolisCity/scripts.pory"
# 3457 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: It looks like both MAXIE and\n"
# 3458 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE have gone away somewhere.\p"
# 3459 "data/maps/SootopolisCity/scripts.pory"
	.string "Perhaps they've gone to MT. PYRE to\n"
# 3460 "data/maps/SootopolisCity/scripts.pory"
	.string "return those ORBS…$"
# 3461 "data/maps/SootopolisCity/scripts.pory"

# 3462 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar::
# 3463 "data/maps/SootopolisCity/scripts.pory"
# 1990 "data/maps/SootopolisCity/scripts.pory"
# 3464 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: Oh?\n"
# 3465 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}?\p"
# 3466 "data/maps/SootopolisCity/scripts.pory"
	.string "Haven't you scaled the SKY PILLAR\n"
# 3467 "data/maps/SootopolisCity/scripts.pory"
	.string "yet?\p"
# 3468 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you can make it to\n"
# 3469 "data/maps/SootopolisCity/scripts.pory"
	.string "the top of the SKY PILLAR…$"
# 3470 "data/maps/SootopolisCity/scripts.pory"

# 3471 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm::
# 3472 "data/maps/SootopolisCity/scripts.pory"
# 1999 "data/maps/SootopolisCity/scripts.pory"
# 3473 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 3474 "data/maps/SootopolisCity/scripts.pory"
	.string "The leaders of TEAM MAGMA and AQUA,\n"
# 3475 "data/maps/SootopolisCity/scripts.pory"
	.string "I don't think they meant harm.\p"
# 3476 "data/maps/SootopolisCity/scripts.pory"
	.string "It wouldn't hurt to hear what they\n"
# 3477 "data/maps/SootopolisCity/scripts.pory"
	.string "have to say for themselves.$"
# 3478 "data/maps/SootopolisCity/scripts.pory"

# 3479 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis::
# 3480 "data/maps/SootopolisCity/scripts.pory"
# 2007 "data/maps/SootopolisCity/scripts.pory"
# 3481 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\n"
# 3482 "data/maps/SootopolisCity/scripts.pory"
	.string "My eyes didn't deceive me.\p"
# 3483 "data/maps/SootopolisCity/scripts.pory"
	.string "Thanks to your help, SOOTOPOLIS…\n"
# 3484 "data/maps/SootopolisCity/scripts.pory"
	.string "No, all of HOENN was saved.\p"
# 3485 "data/maps/SootopolisCity/scripts.pory"
	.string "On behalf of the people, I thank you.\p"
# 3486 "data/maps/SootopolisCity/scripts.pory"
	.string "This is a gift from me.\n"
# 3487 "data/maps/SootopolisCity/scripts.pory"
	.string "Please accept it.$"
# 3488 "data/maps/SootopolisCity/scripts.pory"

# 3489 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym::
# 3490 "data/maps/SootopolisCity/scripts.pory"
# 2017 "data/maps/SootopolisCity/scripts.pory"
# 3491 "data/maps/SootopolisCity/scripts.pory"
	.string "That HIDDEN MACHINE contains\n"
# 3492 "data/maps/SootopolisCity/scripts.pory"
	.string "WATERFALL.\p"
# 3493 "data/maps/SootopolisCity/scripts.pory"
	.string "If you have the RAIN BADGE, a POKéMON\n"
# 3494 "data/maps/SootopolisCity/scripts.pory"
	.string "that has learned that HM move can\l"
# 3495 "data/maps/SootopolisCity/scripts.pory"
	.string "force its way up waterfalls.\p"
# 3496 "data/maps/SootopolisCity/scripts.pory"
	.string "And where does one get the RAIN BADGE?\n"
# 3497 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, don't you?\p"
# 3498 "data/maps/SootopolisCity/scripts.pory"
	.string "That's right! You have to beat\n"
# 3499 "data/maps/SootopolisCity/scripts.pory"
	.string "the SOOTOPOLIS GYM LEADER.\p"
# 3500 "data/maps/SootopolisCity/scripts.pory"
	.string "When you're all set to go, step through\n"
# 3501 "data/maps/SootopolisCity/scripts.pory"
	.string "that door.$"
# 3502 "data/maps/SootopolisCity/scripts.pory"

# 3503 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DazzledByMentor::
# 3504 "data/maps/SootopolisCity/scripts.pory"
# 2031 "data/maps/SootopolisCity/scripts.pory"
# 3505 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: I'm sure that you will be\n"
# 3506 "data/maps/SootopolisCity/scripts.pory"
	.string "dazzled by my mentor's breathtakingly\l"
# 3507 "data/maps/SootopolisCity/scripts.pory"
	.string "elegant battle style.$"
