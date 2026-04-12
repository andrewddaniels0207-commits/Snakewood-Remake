SootopolisCity_MapScripts::
# 2 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_OnLoad
# 3 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_OnTransition
# 4 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_OnResume
# 9 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_OnWarp
# 5 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SootopolisCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 7 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
	.2byte 0


SootopolisCity_OnLoad::
# 13 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_OnLoad_2
SootopolisCity_OnLoad_1:
# 16 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_OnLoad_5
SootopolisCity_OnLoad_4:
# 19 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_OnLoad_8
SootopolisCity_OnLoad_7:
	end

SootopolisCity_OnLoad_2:
# 14 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_LockGymDoor
	goto SootopolisCity_OnLoad_1

SootopolisCity_OnLoad_5:
# 17 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesNotArrived
	goto SootopolisCity_OnLoad_4

SootopolisCity_OnLoad_8:
# 20 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_LockHouseDoors
	goto SootopolisCity_OnLoad_7


SootopolisCity_EventScript_LegendariesNotArrived::
	end


SootopolisCity_EventScript_LockHouseDoors::
# 30 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 31 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 32 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 33 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 34 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
# 35 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 36 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 37 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
# 38 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
	return


SootopolisCity_EventScript_LockGymDoor::
# 43 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
	return


SootopolisCity_OnTransition::
# 48 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 49 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_eq SootopolisCity_OnTransition_2
SootopolisCity_OnTransition_1:
# 52 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_eq SootopolisCity_OnTransition_5
SootopolisCity_OnTransition_4:
# 55 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 56 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 57 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_eq SootopolisCity_OnTransition_8
SootopolisCity_OnTransition_7:
# 60 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_eq SootopolisCity_OnTransition_11
SootopolisCity_OnTransition_10:
# 63 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_eq SootopolisCity_OnTransition_14
SootopolisCity_OnTransition_13:
# 66 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_eq SootopolisCity_OnTransition_17
SootopolisCity_OnTransition_16:
# 69 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_OnTransition_20
SootopolisCity_OnTransition_19:
# 72 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_eq SootopolisCity_OnTransition_23
SootopolisCity_OnTransition_22:
# 75 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_eq SootopolisCity_OnTransition_26
SootopolisCity_OnTransition_25:
# 78 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_eq SootopolisCity_OnTransition_29
SootopolisCity_OnTransition_28:
# 81 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_OnTransition_32
SootopolisCity_OnTransition_31:
# 84 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_OnTransition_35
SootopolisCity_OnTransition_34:
	end

SootopolisCity_OnTransition_2:
# 50 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_HideMapNamePopup
	goto SootopolisCity_OnTransition_1

SootopolisCity_OnTransition_5:
# 53 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_HideMapNamePopup
	goto SootopolisCity_OnTransition_4

SootopolisCity_OnTransition_8:
# 58 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetBattleSpectators
	goto SootopolisCity_OnTransition_7

SootopolisCity_OnTransition_11:
# 61 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetBattleSpectators
	goto SootopolisCity_OnTransition_10

SootopolisCity_OnTransition_14:
# 64 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetBattleSpectators
	goto SootopolisCity_OnTransition_13

SootopolisCity_OnTransition_17:
# 67 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetBattleSpectators
	goto SootopolisCity_OnTransition_16

SootopolisCity_OnTransition_20:
# 70 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetBattleSpectators
	goto SootopolisCity_OnTransition_19

SootopolisCity_OnTransition_23:
# 73 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
	goto SootopolisCity_OnTransition_22

SootopolisCity_OnTransition_26:
# 76 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
	goto SootopolisCity_OnTransition_25

SootopolisCity_OnTransition_29:
# 79 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
	goto SootopolisCity_OnTransition_28

SootopolisCity_OnTransition_32:
# 82 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetOutsideGymObjPos
	goto SootopolisCity_OnTransition_31

SootopolisCity_OnTransition_35:
# 85 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetExpertBlockCaveEntrance
	goto SootopolisCity_OnTransition_34


SootopolisCity_EventScript_HideMapNamePopup::
# 91 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


SootopolisCity_EventScript_SetBattleSpectators::
# 96 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 97 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_BOY_1, 46, 32
# 98 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_NINJA_BOY, 48, 41
# 99 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WOMAN_1, 45, 43
# 100 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 101 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 102 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 103 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
	return


SootopolisCity_EventScript_SetLayout::
# 108 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 0
	goto_if_eq SootopolisCity_EventScript_SetLayout_2
SootopolisCity_EventScript_SetLayout_1:
# 111 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_SetLayout_5
SootopolisCity_EventScript_SetLayout_4:
# 114 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_eq SootopolisCity_EventScript_SetLayout_8
SootopolisCity_EventScript_SetLayout_7:
# 117 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_eq SootopolisCity_EventScript_SetLayout_11
SootopolisCity_EventScript_SetLayout_10:
# 120 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_eq SootopolisCity_EventScript_SetLayout_14
SootopolisCity_EventScript_SetLayout_13:
# 123 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_eq SootopolisCity_EventScript_SetLayout_17
SootopolisCity_EventScript_SetLayout_16:
# 126 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_le SootopolisCity_EventScript_SetLayout_20
SootopolisCity_EventScript_SetLayout_19:
	return

SootopolisCity_EventScript_SetLayout_2:
# 109 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetNormalLayout
	goto SootopolisCity_EventScript_SetLayout_1

SootopolisCity_EventScript_SetLayout_5:
# 112 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetNormalLayout
	goto SootopolisCity_EventScript_SetLayout_4

SootopolisCity_EventScript_SetLayout_8:
# 115 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLegendariesLayout
	goto SootopolisCity_EventScript_SetLayout_7

SootopolisCity_EventScript_SetLayout_11:
# 118 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLegendariesLayout
	goto SootopolisCity_EventScript_SetLayout_10

SootopolisCity_EventScript_SetLayout_14:
# 121 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLegendariesLayout
	goto SootopolisCity_EventScript_SetLayout_13

SootopolisCity_EventScript_SetLayout_17:
# 124 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLegendariesLayout
	goto SootopolisCity_EventScript_SetLayout_16

SootopolisCity_EventScript_SetLayout_20:
# 127 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetLegendariesLayout
	goto SootopolisCity_EventScript_SetLayout_19


SootopolisCity_EventScript_SetNormalLayout::
	return


SootopolisCity_EventScript_SetLegendariesLayout::
# 137 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
	return


SootopolisCity_EventScript_SetWeather::
# 142 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 0
	goto_if_eq SootopolisCity_EventScript_SetWeather_2
SootopolisCity_EventScript_SetWeather_1:
# 145 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_SetWeather_5
SootopolisCity_EventScript_SetWeather_4:
# 148 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_eq SootopolisCity_EventScript_SetWeather_8
SootopolisCity_EventScript_SetWeather_7:
# 151 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_eq SootopolisCity_EventScript_SetWeather_11
SootopolisCity_EventScript_SetWeather_10:
# 154 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_le SootopolisCity_EventScript_SetWeather_14
SootopolisCity_EventScript_SetWeather_13:
	return

SootopolisCity_EventScript_SetWeather_2:
# 143 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetNormalWeather
	goto SootopolisCity_EventScript_SetWeather_1

SootopolisCity_EventScript_SetWeather_5:
# 146 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetNormalWeather
	goto SootopolisCity_EventScript_SetWeather_4

SootopolisCity_EventScript_SetWeather_8:
# 149 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetDownpour
	goto SootopolisCity_EventScript_SetWeather_7

SootopolisCity_EventScript_SetWeather_11:
# 152 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetDownpour
	goto SootopolisCity_EventScript_SetWeather_10

SootopolisCity_EventScript_SetWeather_14:
# 155 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_SetAbnormalWeather
	goto SootopolisCity_EventScript_SetWeather_13


SootopolisCity_EventScript_SetNormalWeather::
	return


SootopolisCity_EventScript_SetDownpour::
# 165 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
	return


SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 170 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos_2
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos_1:
	return

SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos_2:
# 171 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
	goto SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos_1


SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 177 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 178 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
	return


SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 183 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 184 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 18
# 185 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
	end


SootopolisCity_EventScript_SetOutsideGymObjPos::
# 190 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
# 191 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 29, 33
# 192 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_MAXIE, 33, 35
# 193 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_ARCHIE, 34, 35
# 194 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_WALLACE_STATE, 0
	goto_if_eq SootopolisCity_EventScript_SetOutsideGymObjPos_2
SootopolisCity_EventScript_SetOutsideGymObjPos_1:
# 197 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_WALLACE_STATE, 1
	goto_if_eq SootopolisCity_EventScript_SetOutsideGymObjPos_5
SootopolisCity_EventScript_SetOutsideGymObjPos_4:
# 200 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_WALLACE_STATE, 2
	goto_if_eq SootopolisCity_EventScript_SetOutsideGymObjPos_8
SootopolisCity_EventScript_SetOutsideGymObjPos_7:
	return

SootopolisCity_EventScript_SetOutsideGymObjPos_2:
# 195 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWallaceMiddle
	goto SootopolisCity_EventScript_SetOutsideGymObjPos_1

SootopolisCity_EventScript_SetOutsideGymObjPos_5:
# 198 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWallaceRight
	goto SootopolisCity_EventScript_SetOutsideGymObjPos_4

SootopolisCity_EventScript_SetOutsideGymObjPos_8:
# 201 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWallaceLeft
	goto SootopolisCity_EventScript_SetOutsideGymObjPos_7


SootopolisCity_EventScript_SetWallaceMiddle::
# 207 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 33
# 208 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
	return


SootopolisCity_EventScript_SetWallaceRight::
# 213 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 32, 33
# 214 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
	return


SootopolisCity_EventScript_SetWallaceLeft::
# 219 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 30, 33
# 220 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
	return


SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 225 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
	return


# 229 "data/maps/SootopolisCity/scripts.pory"

# 230 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 231 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 232 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0

SootopolisCity_EventScript_PlayerFaceLegendaries::
# 237 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_eq SootopolisCity_EventScript_PlayerFaceLegendaries_2
SootopolisCity_EventScript_PlayerFaceLegendaries_1:
# 240 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_eq SootopolisCity_EventScript_PlayerFaceLegendaries_5
SootopolisCity_EventScript_PlayerFaceLegendaries_4:
	end

SootopolisCity_EventScript_PlayerFaceLegendaries_2:
# 238 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_PlayerFaceLegendaries1
	goto SootopolisCity_EventScript_PlayerFaceLegendaries_1

SootopolisCity_EventScript_PlayerFaceLegendaries_5:
# 241 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_PlayerFaceLegendaries2
	goto SootopolisCity_EventScript_PlayerFaceLegendaries_4


SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 247 "data/maps/SootopolisCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 252 "data/maps/SootopolisCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 253 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
	return


SootopolisCity_OnResume::
# 258 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
	end


SootopolisCity_EventScript_StartLegendariesScene::
# 263 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 264 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 265 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8004, 43
	goto_if_ne SootopolisCity_EventScript_StartLegendariesScene_2
SootopolisCity_EventScript_StartLegendariesScene_1:
# 268 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8005, 32
	goto_if_ne SootopolisCity_EventScript_StartLegendariesScene_5
SootopolisCity_EventScript_StartLegendariesScene_4:
# 271 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
	end

SootopolisCity_EventScript_StartLegendariesScene_2:
# 266 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromDive
	goto SootopolisCity_EventScript_StartLegendariesScene_1

SootopolisCity_EventScript_StartLegendariesScene_5:
# 269 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromDive
	goto SootopolisCity_EventScript_StartLegendariesScene_4


SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 276 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 277 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 278 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 279 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 280 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 281 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 282 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 283 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 284 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 285 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE
# 286 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 287 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 288 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 289 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 290 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 291 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 292 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 293 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 294 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 295 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 296 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 297 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 298 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 299 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 300 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 301 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 302 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 303 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 304 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 305 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 307 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 308 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 309 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
# 310 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 311 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 312 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 313 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 314 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 315 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 316 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 317 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 318 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 319 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 321 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 322 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 323 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 324 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 325 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 326 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 327 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 328 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 329 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 330 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 331 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 332 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 333 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 334 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 335 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 336 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 337 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 338 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 339 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 340 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 341 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 342 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


SootopolisCity_Movement_PanToActionFromPokeCenter::
# 347 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 348 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 349 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 350 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 351 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 352 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 353 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 354 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 355 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 356 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 357 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 358 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 359 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_Movement_PanBackToPokeCenter::
# 363 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 364 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 365 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 366 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 367 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 368 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 369 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 370 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 371 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 372 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 373 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 374 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 375 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_EventScript_LegendariesSceneFromDive::
# 379 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 380 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 381 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 382 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 383 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 384 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 385 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 386 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 387 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 388 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE
# 389 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 390 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 391 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 392 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 393 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 394 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 395 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 396 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 397 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 398 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 399 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 400 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 401 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 402 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 403 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 404 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 405 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 406 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 407 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 408 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 409 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 410 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 411 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 412 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
# 413 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 414 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 415 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 416 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 417 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 418 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 419 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 420 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 421 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 422 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 423 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 424 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 425 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 426 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 427 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 428 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 429 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 430 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 431 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 432 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 433 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 434 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 435 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 436 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 437 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 438 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 439 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 440 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 441 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 442 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 443 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 444 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 445 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


SootopolisCity_Movement_PanToActionFromDive::
# 450 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 451 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 452 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 453 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 454 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 455 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 456 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 457 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 458 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 459 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_Movement_PanBackToDive::
# 463 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 464 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 465 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 466 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 467 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 468 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 469 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 470 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 471 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 472 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_Movement_KyogreAttack::
# 476 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 477 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 478 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 479 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 480 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 481 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 482 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 483 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 484 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 485 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_Movement_KyogreDefend::
# 489 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 490 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 491 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 492 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 493 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 494 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 495 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 496 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 497 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 498 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 499 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 500 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 501 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_Movement_KyogreMoveBack::
# 505 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 506 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 507 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 508 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 509 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 510 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 511 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_Movement_KyogreIdle::
# 515 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 516 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 517 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 518 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 519 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 520 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 521 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_Movement_GroudonAttack::
# 525 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 526 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 527 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 528 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 529 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 530 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 531 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 532 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


# 535 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 536 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 537 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 538 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 539 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 540 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 541 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 542 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 543 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 544 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 545 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 546 "data/maps/SootopolisCity/scripts.pory"
	step_end

SootopolisCity_Movement_GroudonMoveBack::
# 550 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 551 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 552 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 553 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 554 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 555 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 556 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_Movement_GroudonIdle::
# 560 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 561 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 562 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 564 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 565 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 566 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_EventScript_StartRayquazaScene::
# 570 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 571 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 572 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8004, 43
	goto_if_ne SootopolisCity_EventScript_StartRayquazaScene_2
SootopolisCity_EventScript_StartRayquazaScene_1:
# 575 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8005, 32
	goto_if_ne SootopolisCity_EventScript_StartRayquazaScene_5
SootopolisCity_EventScript_StartRayquazaScene_4:
# 578 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
	end

SootopolisCity_EventScript_StartRayquazaScene_2:
# 573 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromDive
	goto SootopolisCity_EventScript_StartRayquazaScene_1

SootopolisCity_EventScript_StartRayquazaScene_5:
# 576 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromDive
	goto SootopolisCity_EventScript_StartRayquazaScene_4


SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 583 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 584 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 585 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 586 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 587 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 588 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 589 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 590 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 591 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 592 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 593 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 594 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_SOOTOPOLIS_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 595 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 596 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 597 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 598 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 599 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 600 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanUp
# 601 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 602 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 603 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 604 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 605 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 606 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 607 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3
# 608 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 609 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 610 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 611 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 612 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 613 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2
# 614 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 615 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 616 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 617 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 618 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 619 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 620 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 621 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 622 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 623 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 624 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 625 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 626 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 627 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 628 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 629 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 630 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 631 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 632 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
# 633 "data/maps/SootopolisCity/scripts.pory"
	waitstate
	end


SootopolisCity_EventScript_RayquazaSceneFromDive::
# 638 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 639 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 640 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 641 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 643 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 644 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 645 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 646 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 647 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 648 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 649 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 650 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 651 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 652 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 653 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_Movement_PanUp
# 654 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 655 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 657 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 658 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 659 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 660 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 661 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3
# 662 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 663 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 664 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 665 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 666 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 667 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2
# 668 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 669 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 670 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 671 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 672 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 673 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 674 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 675 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 676 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 678 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 679 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 680 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 681 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
# 682 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 683 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
# 684 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 685 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 686 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
# 687 "data/maps/SootopolisCity/scripts.pory"
	waitstate
	end


SootopolisCity_EventScript_SetRoughWater::
# 692 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 693 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 694 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 695 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 696 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 697 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 698 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 699 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 700 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 701 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 702 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 703 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 704 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 705 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 706 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 707 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 708 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 709 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 710 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 711 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 712 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 713 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 714 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 715 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
	return


# 719 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 720 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 721 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 722 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 723 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 724 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 725 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 726 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 727 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 730 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 731 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 732 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 733 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 734 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 735 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 738 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 739 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 740 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 741 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 742 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 743 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 746 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 747 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 748 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 749 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 750 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 751 "data/maps/SootopolisCity/scripts.pory"
	step_end

SootopolisCity_Movement_UnusedPanUp::
# 755 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 756 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 757 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 758 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 759 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 760 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 761 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 762 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 763 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 764 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 765 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 766 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 767 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_Movement_UnusedPanBack::
# 771 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 772 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 773 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 774 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 775 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 776 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 777 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 778 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 779 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 780 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 781 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 782 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 783 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 784 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_EventScript_CaveOfOriginExpert::
# 788 "data/maps/SootopolisCity/scripts.pory"
	lock
# 789 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 790 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_CaveOfOriginExpert_2
SootopolisCity_EventScript_CaveOfOriginExpert_1:
# 793 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_CaveOfOriginExpert_5
SootopolisCity_EventScript_CaveOfOriginExpert_4:
# 796 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_ge SootopolisCity_EventScript_CaveOfOriginExpert_8
SootopolisCity_EventScript_CaveOfOriginExpert_7:
# 799 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 800 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_CaveOfOriginExpert_2:
# 791 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ExpertPostLegendaries
	goto SootopolisCity_EventScript_CaveOfOriginExpert_1

SootopolisCity_EventScript_CaveOfOriginExpert_5:
# 794 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ExpertLegendaries
	goto SootopolisCity_EventScript_CaveOfOriginExpert_4

SootopolisCity_EventScript_CaveOfOriginExpert_8:
# 797 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ExpertLeadToCave
	goto SootopolisCity_EventScript_CaveOfOriginExpert_7


SootopolisCity_EventScript_ExpertLeadToCave::
# 805 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 806 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_ExpertPostLegendaries::
# 811 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 812 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_ExpertLegendaries::
# 817 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 818 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_Kiri::
# 823 "data/maps/SootopolisCity/scripts.pory"
	lock
# 824 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 825 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_le SootopolisCity_EventScript_Kiri_2
SootopolisCity_EventScript_Kiri_1:
# 828 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_Kiri_5
SootopolisCity_EventScript_Kiri_4:
# 831 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Kiri_8
SootopolisCity_EventScript_Kiri_7:
# 834 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 835 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 836 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 837 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 838 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_Kiri_2:
# 826 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriGiveBerry
	goto SootopolisCity_EventScript_Kiri_1

SootopolisCity_EventScript_Kiri_5:
# 829 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriGiveBerry
	goto SootopolisCity_EventScript_Kiri_4

SootopolisCity_EventScript_Kiri_8:
# 832 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriRayquaza
	goto SootopolisCity_EventScript_Kiri_7


SootopolisCity_EventScript_KiriRayquaza::
# 843 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 844 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 845 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_KiriGiveBerry::
# 850 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 851 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 852 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriGiveBerry_2
SootopolisCity_EventScript_KiriGiveBerry_1:
# 855 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 856 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 857 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 858 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 859 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 860 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_5
SootopolisCity_EventScript_KiriGiveBerry_4:
# 863 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 864 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 865 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 866 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_8
SootopolisCity_EventScript_KiriGiveBerry_7:
# 869 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_11
SootopolisCity_EventScript_KiriGiveBerry_10:
	end

SootopolisCity_EventScript_KiriGiveBerry_2:
# 853 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriReceivedBerry
	goto SootopolisCity_EventScript_KiriGiveBerry_1

SootopolisCity_EventScript_KiriGiveBerry_5:
# 861 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SootopolisCity_EventScript_KiriGiveBerry_4

SootopolisCity_EventScript_KiriGiveBerry_8:
# 867 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveFigyBerry
	goto SootopolisCity_EventScript_KiriGiveBerry_7

SootopolisCity_EventScript_KiriGiveBerry_11:
# 870 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveIapapaBerry
	goto SootopolisCity_EventScript_KiriGiveBerry_10


SootopolisCity_EventScript_GiveFigyBerry::
# 876 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 877 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_EventScript_GiveFigyBerry_2
SootopolisCity_EventScript_GiveFigyBerry_1:
# 880 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 881 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_GiveFigyBerry_2:
# 878 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SootopolisCity_EventScript_GiveFigyBerry_1


SootopolisCity_EventScript_GiveIapapaBerry::
# 886 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 887 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_EventScript_GiveIapapaBerry_2
SootopolisCity_EventScript_GiveIapapaBerry_1:
# 890 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 891 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_GiveIapapaBerry_2:
# 888 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SootopolisCity_EventScript_GiveIapapaBerry_1


SootopolisCity_EventScript_KiriReceivedBerry::
# 896 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 897 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SootopolisCity_EventScript_KiriReceivedBerry_2
SootopolisCity_EventScript_KiriReceivedBerry_1:
# 900 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 901 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_KiriReceivedBerry_2:
# 898 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriLikeSeasonBornIn
	goto SootopolisCity_EventScript_KiriReceivedBerry_1


SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 906 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 907 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_Woman2::
# 912 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 913 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FacePlayer
# 914 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 915 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Woman2_2
SootopolisCity_EventScript_Woman2_1:
# 918 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 919 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 920 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FaceOriginalDirection
# 921 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 922 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Woman2_2:
# 916 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman2Rayquaza
	goto SootopolisCity_EventScript_Woman2_1


SootopolisCity_EventScript_Woman2Rayquaza::
# 927 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 928 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


SootopolisCity_EventScript_Man::
# 933 "data/maps/SootopolisCity/scripts.pory"
	lock
# 934 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 935 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_Man_2
SootopolisCity_EventScript_Man_1:
# 938 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 939 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_Man_2:
# 936 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ManPostLegendaries
	goto SootopolisCity_EventScript_Man_1


SootopolisCity_EventScript_ManPostLegendaries::
# 944 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 945 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_Woman1::
# 950 "data/maps/SootopolisCity/scripts.pory"
	lock
# 951 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 952 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_Woman1_2
SootopolisCity_EventScript_Woman1_1:
# 955 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Woman1_5
SootopolisCity_EventScript_Woman1_4:
# 958 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_ge SootopolisCity_EventScript_Woman1_8
SootopolisCity_EventScript_Woman1_7:
# 961 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 962 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_Woman1_2:
# 953 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman1PostLegendaries
	goto SootopolisCity_EventScript_Woman1_1

SootopolisCity_EventScript_Woman1_5:
# 956 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman1Rayquaza
	goto SootopolisCity_EventScript_Woman1_4

SootopolisCity_EventScript_Woman1_8:
# 959 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Woman1Legendaries
	goto SootopolisCity_EventScript_Woman1_7


SootopolisCity_EventScript_Woman1Legendaries::
# 967 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 968 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 969 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_1, Common_Movement_FaceOriginalDirection
# 970 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 971 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_Woman1PostLegendaries::
# 976 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 977 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_Woman1Rayquaza::
# 982 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 983 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_NinjaBoy::
# 988 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 989 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FacePlayer
# 990 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 991 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_NinjaBoy_2
SootopolisCity_EventScript_NinjaBoy_1:
# 994 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_NinjaBoy_5
SootopolisCity_EventScript_NinjaBoy_4:
# 997 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_le SootopolisCity_EventScript_NinjaBoy_8
SootopolisCity_EventScript_NinjaBoy_7:
# 1000 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 1001 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1002 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 1003 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1004 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_NinjaBoy_2:
# 992 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_NinjaBoyRayquaza
	goto SootopolisCity_EventScript_NinjaBoy_1

SootopolisCity_EventScript_NinjaBoy_5:
# 995 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_NinjaBoyNormal
	goto SootopolisCity_EventScript_NinjaBoy_4

SootopolisCity_EventScript_NinjaBoy_8:
# 998 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_NinjaBoyNormal
	goto SootopolisCity_EventScript_NinjaBoy_7


SootopolisCity_EventScript_NinjaBoyNormal::
# 1009 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 1010 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_NinjaBoyRayquaza::
# 1015 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 1016 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_Boy1::
# 1021 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1022 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FacePlayer
# 1023 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1024 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Boy1_2
SootopolisCity_EventScript_Boy1_1:
# 1027 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1_5
SootopolisCity_EventScript_Boy1_4:
# 1030 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_Boy1_8
SootopolisCity_EventScript_Boy1_7:
# 1033 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_le SootopolisCity_EventScript_Boy1_11
SootopolisCity_EventScript_Boy1_10:
# 1036 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 1037 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1038 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FaceOriginalDirection
# 1039 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1040 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_Boy1_2:
# 1025 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1Rayquaza
	goto SootopolisCity_EventScript_Boy1_1

SootopolisCity_EventScript_Boy1_5:
# 1028 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1GameClear
	goto SootopolisCity_EventScript_Boy1_4

SootopolisCity_EventScript_Boy1_8:
# 1031 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1Normal
	goto SootopolisCity_EventScript_Boy1_7

SootopolisCity_EventScript_Boy1_11:
# 1034 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy1Normal
	goto SootopolisCity_EventScript_Boy1_10


SootopolisCity_EventScript_Boy1Rayquaza::
# 1045 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 1046 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_Boy1GameClear::
# 1051 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 1052 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_Boy1Normal::
# 1057 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 1058 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_GymSign::
# 1063 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
	end


SootopolisCity_EventScript_CitySign::
# 1068 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
	end


EventScript_ClosedSootopolisDoor::
# 1073 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
	end


SootopolisCity_EventScript_Steven::
# 1078 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1079 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, Common_Movement_FacePlayer
# 1080 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1081 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_Steven_2
SootopolisCity_EventScript_Steven_1:
# 1084 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_eq SootopolisCity_EventScript_Steven_5
SootopolisCity_EventScript_Steven_4:
# 1087 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_eq SootopolisCity_EventScript_Steven_8
SootopolisCity_EventScript_Steven_7:
# 1090 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_eq SootopolisCity_EventScript_Steven_11
SootopolisCity_EventScript_Steven_10:
# 1093 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_Steven_14
SootopolisCity_EventScript_Steven_13:
# 1096 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 1097 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Steven_2:
# 1082 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
	goto SootopolisCity_EventScript_Steven_1

SootopolisCity_EventScript_Steven_5:
# 1085 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenHelpWallace
	goto SootopolisCity_EventScript_Steven_4

SootopolisCity_EventScript_Steven_8:
# 1088 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenHelpedWallace
	goto SootopolisCity_EventScript_Steven_7

SootopolisCity_EventScript_Steven_11:
# 1091 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenHelpedWallace
	goto SootopolisCity_EventScript_Steven_10

SootopolisCity_EventScript_Steven_14:
# 1094 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenMaxieArchieLeft
	goto SootopolisCity_EventScript_Steven_13


SootopolisCity_EventScript_StevenHelpWallace::
# 1102 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 1103 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 1108 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 1109 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


SootopolisCity_EventScript_StevenHelpedWallace::
# 1114 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 1115 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 1120 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 1121 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1122 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_2
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_1:
# 1125 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_5
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_4:
# 1128 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 1129 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1130 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 1131 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 1132 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1133 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 1134 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 1135 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1136 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 1137 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 1138 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1139 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 1140 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1141 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 1142 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 1143 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1144 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 1145 "data/maps/SootopolisCity/scripts.pory"
	waitstate
	end

SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_2:
# 1123 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
	goto SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_1

SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_5:
# 1126 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
	goto SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_4


SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 1150 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 1151 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 1152 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
	return


SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 1157 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 1158 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 1159 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
	return


# 1163 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1165 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1166 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1167 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1168 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1169 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1170 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1171 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1172 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1174 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1175 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1176 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1177 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1178 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1179 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1180 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1181 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1182 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1183 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1184 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1185 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1186 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1187 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1188 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1189 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1190 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1191 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1192 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1193 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1194 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1195 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1196 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1197 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1198 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1199 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1200 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 1203 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1204 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1206 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1207 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1208 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1209 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1210 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1211 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1212 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1213 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1214 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1215 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1216 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1217 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1218 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1219 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1220 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1221 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1222 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1223 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1224 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1225 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1228 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1229 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1230 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1231 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1232 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1233 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1234 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1235 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1236 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1237 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1238 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1239 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 1242 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1243 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1244 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1245 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1246 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1247 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1248 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1249 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1250 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1251 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1252 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1253 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1254 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1255 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1256 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1257 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1258 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1259 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1260 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1261 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1262 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1263 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1264 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1265 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1266 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1267 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1268 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1269 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1270 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1271 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1272 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1273 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1274 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1275 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1276 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1277 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1278 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 1281 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1282 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1283 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1284 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1285 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1286 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1287 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1288 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1289 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1290 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1291 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1292 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1293 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1294 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1295 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1296 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1297 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1298 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1299 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1300 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1301 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1302 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1303 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1304 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1305 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1306 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1307 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1308 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1309 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1310 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1311 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1312 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1313 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1314 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1315 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1316 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1317 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1318 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1319 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1320 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1321 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1322 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1323 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1324 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1325 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1326 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1327 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1328 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1329 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1330 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1331 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1332 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1333 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1334 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1335 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1336 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1337 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1338 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1339 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 1342 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1343 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1344 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1345 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1346 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1347 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1348 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1349 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1350 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1351 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1352 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1353 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1354 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1355 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1356 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1357 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1358 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1359 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1360 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1361 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1362 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1363 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1364 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1365 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1366 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1367 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1368 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1369 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1370 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1371 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1372 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1373 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1374 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1375 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1376 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1377 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1378 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1379 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1380 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1381 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1382 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1383 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1384 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1385 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1386 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1387 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1388 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1389 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1390 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1391 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1392 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1393 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 1396 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1397 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1398 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1399 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 1402 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1403 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1404 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1405 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1406 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1407 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1408 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1409 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1410 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1411 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1412 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1413 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 1416 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1417 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1418 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1419 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1420 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1421 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1422 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1423 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1424 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1425 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1426 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1427 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 1430 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1431 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1432 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1433 "data/maps/SootopolisCity/scripts.pory"
	step_end

SootopolisCity_EventScript_Boy2::
# 1437 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1438 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FacePlayer
# 1439 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1440 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Boy2_2
SootopolisCity_EventScript_Boy2_1:
# 1443 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1444 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1445 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FaceOriginalDirection
# 1446 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1447 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Boy2_2:
# 1441 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_Boy2Rayquaza
	goto SootopolisCity_EventScript_Boy2_1


SootopolisCity_EventScript_Boy2Rayquaza::
# 1452 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1453 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1454 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


SootopolisCity_EventScript_BlackBelt::
# 1459 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1460 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_BlackBelt_2
SootopolisCity_EventScript_BlackBelt_1:
# 1463 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1464 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1465 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 1466 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1467 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1468 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1469 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1470 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1471 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_BlackBelt_2:
# 1461 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_BlackBeltRayquaza
	goto SootopolisCity_EventScript_BlackBelt_1


SootopolisCity_EventScript_BlackBeltRayquaza::
# 1476 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 1477 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1478 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1479 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


SootopolisCity_EventScript_Girl::
# 1484 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1485 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FacePlayer
# 1486 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1487 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Girl_2
SootopolisCity_EventScript_Girl_1:
# 1490 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1491 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1492 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FaceOriginalDirection
# 1493 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1494 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Girl_2:
# 1488 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GirlRayquaza
	goto SootopolisCity_EventScript_Girl_1


SootopolisCity_EventScript_GirlRayquaza::
# 1499 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1500 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1501 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


SootopolisCity_EventScript_Maniac::
# 1506 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1507 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FacePlayer
# 1508 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1509 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Maniac_2
SootopolisCity_EventScript_Maniac_1:
# 1512 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1513 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1514 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FaceOriginalDirection
# 1515 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1516 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Maniac_2:
# 1510 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ManiacRayquaza
	goto SootopolisCity_EventScript_Maniac_1


SootopolisCity_EventScript_ManiacRayquaza::
# 1521 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1522 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


SootopolisCity_EventScript_Wallace::
# 1527 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1528 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1529 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_eq SootopolisCity_EventScript_Wallace_2
SootopolisCity_EventScript_Wallace_1:
# 1532 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_Wallace_5
SootopolisCity_EventScript_Wallace_4:
# 1535 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_Wallace_8
SootopolisCity_EventScript_Wallace_7:
# 1538 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 1539 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_Wallace_2:
# 1530 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GoToSkyPillar
	goto SootopolisCity_EventScript_Wallace_1

SootopolisCity_EventScript_Wallace_5:
# 1533 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GoToGym
	goto SootopolisCity_EventScript_Wallace_4

SootopolisCity_EventScript_Wallace_8:
# 1536 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveWaterfall
	goto SootopolisCity_EventScript_Wallace_7


SootopolisCity_EventScript_GiveWaterfall::
# 1544 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 1545 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 1546 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 1547 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 1548 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1549 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq SootopolisCity_EventScript_GiveWaterfall_2
SootopolisCity_EventScript_GiveWaterfall_1:
# 1552 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq SootopolisCity_EventScript_GiveWaterfall_5
SootopolisCity_EventScript_GiveWaterfall_4:
# 1555 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SootopolisCity_EventScript_GiveWaterfall_8
SootopolisCity_EventScript_GiveWaterfall_7:
# 1558 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_GiveWaterfall_2:
# 1550 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_WallaceMoveFromGym
	goto SootopolisCity_EventScript_GiveWaterfall_1

SootopolisCity_EventScript_GiveWaterfall_5:
# 1553 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_WallaceMoveFromGym
	goto SootopolisCity_EventScript_GiveWaterfall_4

SootopolisCity_EventScript_GiveWaterfall_8:
# 1556 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_WallaceMoveFromGymWest
	goto SootopolisCity_EventScript_GiveWaterfall_7


SootopolisCity_EventScript_WallaceMoveFromGym::
# 1563 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 1564 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1565 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 1566 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
	return


SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 1571 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 1572 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1573 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 1574 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
	return


SootopolisCity_EventScript_GoToSkyPillar::
# 1579 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1580 "data/maps/SootopolisCity/scripts.pory"
	release
	end


SootopolisCity_EventScript_GoToGym::
# 1585 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 1586 "data/maps/SootopolisCity/scripts.pory"
	release
	end


# 1590 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 1591 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1592 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1593 "data/maps/SootopolisCity/scripts.pory"
	step_end

# 1596 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1597 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1598 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1599 "data/maps/SootopolisCity/scripts.pory"
	step_end

SootopolisCity_EventScript_Maxie::
# 1603 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1604 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Maxie_2
SootopolisCity_EventScript_Maxie_1:
# 1607 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1608 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1609 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Maxie_2:
# 1605 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_MaxieRayquaza
	goto SootopolisCity_EventScript_Maxie_1


SootopolisCity_EventScript_MaxieRayquaza::
# 1614 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 1615 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1616 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieRayquaza_2
SootopolisCity_EventScript_MaxieRayquaza_1:
# 1619 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_MaxieRayquaza_2:
# 1617 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_MaxieArchieLeave
	goto SootopolisCity_EventScript_MaxieRayquaza_1


SootopolisCity_EventScript_Archie::
# 1624 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1625 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Archie_2
SootopolisCity_EventScript_Archie_1:
# 1628 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1629 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1630 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Archie_2:
# 1626 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_ArchieRayquaza
	goto SootopolisCity_EventScript_Archie_1


SootopolisCity_EventScript_ArchieRayquaza::
# 1635 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 1636 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1637 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_ArchieRayquaza_2
SootopolisCity_EventScript_ArchieRayquaza_1:
# 1640 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_ArchieRayquaza_2:
# 1638 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_MaxieArchieLeave
	goto SootopolisCity_EventScript_ArchieRayquaza_1


SootopolisCity_EventScript_MaxieArchieLeave::
# 1645 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1646 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1647 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1648 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1649 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1650 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 1651 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1652 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1653 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


SootopolisCity_Movement_Levitate::
# 1658 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1659 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_Movement_DestroyTask::
# 1663 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1664 "data/maps/SootopolisCity/scripts.pory"
	step_end
	return


SootopolisCity_Text_GymSign::
# 1667 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
	.string "LEADER: JUAN\p"
	.string "“The GYM LEADER with the beauty\n"
	.string "of pure water!”$"

SootopolisCity_Text_CitySign::
# 1674 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
	.string "“The mystical city where history\n"
	.string "slumbers.”$"

SootopolisCity_Text_DoorIsClosed::
# 1680 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"

SootopolisCity_Text_PhysicallyFitLivingHere::
# 1684 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
	.string "down stairs all the time…\p"
	.string "If you live in this town, you end up\n"
	.string "getting physically fit.$"

SootopolisCity_Text_GiantPokemonSuddenlyAppeared::
# 1691 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant POKéMON suddenly appeared\n"
	.string "in the middle of the city!\p"
	.string "And, I've never seen them before!\p"
	.string "Why are they smashing into each\n"
	.string "other like that?\p"
	.string "Why can't they be friends, those\n"
	.string "POKéMON?$"

SootopolisCity_Text_WhatIsThatGreenPokemon::
# 1701 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
	.string "What is that green POKéMON?!$"

SootopolisCity_Text_WhereDidLegendariesGo::
# 1706 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON and KYOGRE…\n"
	.string "Where did they go?\p"
	.string "Will they cause droughts or downpours\n"
	.string "somewhere else?$"

SootopolisCity_Text_TwoPokemonArentAngry::
# 1713 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
	.string "the two POKéMON aren't angry.\p"
	.string "I think… They probably can't control\n"
	.string "their own power…$"

SootopolisCity_Text_FlyingMonStoppedRampage::
# 1720 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying POKéMON came down from\n"
	.string "the sky and stopped the rampaging\l"
	.string "POKéMON…$"

SootopolisCity_Text_WonderWhatWorldIsLike::
# 1726 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
	.string "I wonder what the world is like on\n"
	.string "the other side of this round sky?$"

SootopolisCity_Text_ThisIsWicked::
# 1732 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
	.string "This is wicked!$"

SootopolisCity_Text_ThatWasWicked::
# 1737 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
	.string "That was wicked!$"

SootopolisCity_Text_GoRedAndBlueMon::
# 1742 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red POKéMON!\n"
	.string "Don't back off, blue POKéMON!$"

SootopolisCity_Text_DoYouKnowMonNames::
# 1747 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Hi, do you know the names of those\n"
	.string "POKéMON fighting over there?$"

SootopolisCity_Text_GreenOneSettlesThings::
# 1753 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
	.string "the red one or the blue one, but, oh no,\l"
	.string "it's the green one that settles things!\p"
	.string "Talk about a huge turn of events!$"

SootopolisCity_Text_SeeingLegendWithOwnEyes::
# 1760 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
	.string "the land and sea were shaped by\l"
	.string "a colossal battle between POKéMON.\p"
	.string "Well, I'm seeing that happen with\n"
	.string "my very own eyes!\p"
	.string "Whoa! I never expected to be\n"
	.string "witness to something this huge!$"

SootopolisCity_Text_SawLegendWithOwnEyes::
# 1770 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
	.string "the land and sea were shaped by\l"
	.string "a colossal battle between POKéMON.\p"
	.string "Well, I saw that happen with\n"
	.string "my very own eyes!\p"
	.string "Whoa! I never expected to be\n"
	.string "witness to something this huge!$"

SootopolisCity_Text_BigPokemonFighting::
# 1780 "data/maps/SootopolisCity/scripts.pory"
	.string "A big POKéMON is fighting with\n"
	.string "another big POKéMON!\p"
	.string "Please, someone make them stop!$"

SootopolisCity_Text_PrettyMonCameFromSky::
# 1786 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty POKéMON came down from\n"
	.string "the sky…$"

SootopolisCity_Text_SootopolisWillBeWrecked::
# 1791 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
	.string "SOOTOPOLIS CITY will get wrecked!$"

SootopolisCity_Text_SootopolisDidntGetWrecked::
# 1796 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY didn't get wrecked!$"

SootopolisCity_Text_NoOrdinaryTourist::
# 1800 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
	.string "You've come all the way to SOOTOPOLIS?\l"
	.string "You're no ordinary tourist.\p"
	.string "But I suppose that doesn't make you\n"
	.string "an extraordinary tourist, either.$"

SootopolisCity_Text_CityRegainedCalm::
# 1808 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"

SootopolisCity_Text_CaveOfOriginPleaseLeave::
# 1812 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
	.string "This is the CAVE OF ORIGIN.\p"
	.string "The spirits of POKéMON, becalmed at\n"
	.string "MT. PYRE, are said to be revived here.\p"
	.string "Please leave.$"

SootopolisCity_Text_LeadSuperiorTrainerToCave::
# 1820 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
	.string "superior talent…\p"
	.string "A TRAINER who has knowledge and\n"
	.string "experience of many kinds of POKéMON…\p"
	.string "If such a person were to appear, I was\n"
	.string "instructed by WALLACE to lead that\l"
	.string "TRAINER to this CAVE.$"

SootopolisCity_Text_AwakenedPokemonClash::
# 1830 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
	.string "The clash between the two awakened\n"
	.string "POKéMON was quelled by the awakening\l"
	.string "of a third POKéMON…$"

SootopolisCity_Text_CaveOfOriginSleepsToo::
# 1837 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN…\p"
	.string "With the passing of the crisis,\n"
	.string "the cave, too, shall sleep…$"

SootopolisCity_Text_SootopolisSkyBeautiful::
# 1843 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in\n"
	.string "the crater of a volcano.\p"
	.string "If you look up at the sky, the lip of\n"
	.string "the crater is also visible.\l"
	.string "So, all you see is the sky in a circle.\p"
	.string "But that's what makes the sky above\n"
	.string "SOOTOPOLIS the most beautiful.$"

SootopolisCity_Text_GiganticPokemonFight::
# 1853 "data/maps/SootopolisCity/scripts.pory"
	.string "When two POKéMON that gigantic\n"
	.string "are fighting that savagely, there's\l"
	.string "not much that we can do.$"

SootopolisCity_Text_FearedWorstWhenPokemonFlewDown::
# 1859 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third POKéMON flew down,\n"
	.string "I feared the worst.$"

SootopolisCity_Text_NightSkyFavoriteScenery::
# 1864 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
	.string "the crater of a volcano…\p"
	.string "And in that ring, stars flicker and\n"
	.string "blink as if they were alive…\l"
	.string "It's my favorite scenery.$"

SootopolisCity_Text_WeatherWentWild::
# 1872 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
	.string "but…\p"
	.string "All of a sudden, dark clouds brewed up,\n"
	.string "rain started falling in sheets, and\l"
	.string "there was thunder and lightning, too.\p"
	.string "The weather just went completely\n"
	.string "wild!\p"
	.string "Is all of this because of those\n"
	.string "POKéMON?$"

SootopolisCity_Text_YouBroughtFlyingMon::
# 1884 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
	.string "It was you who brought that flying\n"
	.string "POKéMON here?\p"
	.string "Well, aren't you amazing!$"

SootopolisCity_Text_GroudonPleaseStop::
# 1891 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: G… GROUDON…\n"
	.string "Please! Stop what you're doing!\p"
	.string "I know the extent of your power now!\p"
	.string "If you keep going, all HOENN, not just\n"
	.string "SOOTOPOLIS, will be utterly ruined!$"

SootopolisCity_Text_AfterAllOurScheming::
# 1899 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: So the super-ancient POKéMON\n"
	.string "weren't only GROUDON and KYOGRE…\p"
	.string "After all our fruitless scheming and\n"
	.string "frantic efforts, that one POKéMON's\l"
	.string "simple action puts everything right\l"
	.string "again as if nothing had happened…\p"
	.string "Fu…\n"
	.string "Fuhahaha…$"

SootopolisCity_Text_KyogreCalmDown::
# 1910 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE! What's wrong?!\n"
	.string "Look over here! It's the RED ORB!\l"
	.string "Calm down! KYOGRE!\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "It's no good!\n"
	.string "It's not responding at all!$"

SootopolisCity_Text_TryingMeaninglessToPokemon::
# 1920 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE and GROUDON both\n"
	.string "flew off to who knows where.\p"
	.string "The weather in HOENN has returned\n"
	.string "to its normal state…\p"
	.string "Haha…\n"
	.string "Hahaha…\p"
	.string "Maybe what we were trying to do was\n"
	.string "something small, even meaningless,\l"
	.string "to POKéMON…$"

SootopolisCity_Text_InvolvedWithCrisisComeWithMe::
# 1932 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Those POKéMON fighting…\n"
	.string "GROUDON… And KYOGRE…\p"
	.string "The two super-ancient POKéMON\n"
	.string "were awakened from a long sleep…\p"
	.string "And now they are smashing each other\n"
	.string "with their uncontrollable energy…\p"
	.string "…{PLAYER}{KUN}.\p"
	.string "You being here now I'll take to mean\n"
	.string "that you're prepared to become\l"
	.string "involved in this crisis.\p"
	.string "Well, then, there's someone that\n"
	.string "I'd like you to meet.\p"
	.string "Come with me, please.$"

SootopolisCity_Text_DoesThisMakeYourFearPokemon::
# 1948 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Listen, {PLAYER}{KUN}.\p"
	.string "Does seeing GROUDON and KYOGRE make\n"
	.string "you think POKéMON are to be feared?\p"
	.string "But that's not true.\n"
	.string "POKéMON are really more…\p"
	.string "…Why am I asking you this?\n"
	.string "You already know.$"

SootopolisCity_Text_HereWereAreHelpWallace::
# 1958 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Okay, here we are!\p"
	.string "Inside here you'll find someone named\n"
	.string "WALLACE.\p"
	.string "I think you have what's needed to\n"
	.string "help him…$"

SootopolisCity_Text_KnowWhatsNeededToHelpHim::
# 1966 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: I think you have what's\n"
	.string "needed to help him…$"

SootopolisCity_Text_NeverBeenToSkyPillar::
# 1971 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: The SKY PILLAR…\p"
	.string "I've never been there.\n"
	.string "I wonder where it could be?$"

SootopolisCity_Text_SoThatsRayquaza::
# 1977 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: So that's RAYQUAZA…\p"
	.string "It's incredible how the two rampaging\n"
	.string "POKéMON would flee from it in fear…$"

SootopolisCity_Text_MaxieArchieLeft::
# 1983 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: It looks like both MAXIE and\n"
	.string "ARCHIE have gone away somewhere.\p"
	.string "Perhaps they've gone to MT. PYRE to\n"
	.string "return those ORBS…$"

SootopolisCity_Text_HaventYouScaledSkyPillar::
# 1990 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: Oh?\n"
	.string "{PLAYER}{KUN}?\p"
	.string "Haven't you scaled the SKY PILLAR\n"
	.string "yet?\p"
	.string "I'm sure that you can make it to\n"
	.string "the top of the SKY PILLAR…$"

SootopolisCity_Text_AquaMagmaDidntMeanHarm::
# 1999 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
	.string "The leaders of TEAM MAGMA and AQUA,\n"
	.string "I don't think they meant harm.\p"
	.string "It wouldn't hurt to hear what they\n"
	.string "have to say for themselves.$"

SootopolisCity_Text_ThankYouForHelpAcceptThis::
# 2007 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\n"
	.string "My eyes didn't deceive me.\p"
	.string "Thanks to your help, SOOTOPOLIS…\n"
	.string "No, all of HOENN was saved.\p"
	.string "On behalf of the people, I thank you.\p"
	.string "This is a gift from me.\n"
	.string "Please accept it.$"

SootopolisCity_Text_ExplainWaterfallGoToGym::
# 2017 "data/maps/SootopolisCity/scripts.pory"
	.string "That HIDDEN MACHINE contains\n"
	.string "WATERFALL.\p"
	.string "If you have the RAIN BADGE, a POKéMON\n"
	.string "that has learned that HM move can\l"
	.string "force its way up waterfalls.\p"
	.string "And where does one get the RAIN BADGE?\n"
	.string "You know, don't you?\p"
	.string "That's right! You have to beat\n"
	.string "the SOOTOPOLIS GYM LEADER.\p"
	.string "When you're all set to go, step through\n"
	.string "that door.$"

SootopolisCity_Text_DazzledByMentor::
# 2031 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: I'm sure that you will be\n"
	.string "dazzled by my mentor's breathtakingly\l"
	.string "elegant battle style.$"
