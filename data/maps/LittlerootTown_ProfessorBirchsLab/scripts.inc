# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.byte 0
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition::
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge LittlerootTown_ProfessorBirchsLab_OnTransition_2
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition_1:
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge LittlerootTown_ProfessorBirchsLab_OnTransition_5
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition_4:
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_OnTransition_8
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition_7:
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition_2:
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_OnTransition_1
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition_5:
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_OnTransition_4
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition_8:
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_OnTransition_7
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, TRUE
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter_2
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter_1:
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_BIRCHS_LAB_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_BIRCHS_LAB_RIVAL, 5, 10
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter_2:
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter_1
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_BIRCHS_LAB_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_BIRCHS_LAB_RIVAL, 5, 10
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_BIRCH
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_RIVAL, DIR_NORTH
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_RIVAL, 5, 5
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_BIRCH, DIR_SOUTH
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_BIRCH, 6, 4
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_AIDE, DIR_EAST
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_AIDE, 10, 10
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL, DIR_SOUTH
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL, 8, 4
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_TOTODILE_BALL, DIR_SOUTH
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_TOTODILE_BALL, 9, 4
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL, DIR_SOUTH
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_CHIKORITA_BALL, 10, 4
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_BIRCH, DIR_SOUTH
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_BIRCH, 6, 4
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_RIVAL, DIR_EAST
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_RIVAL, 5, 5
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_2
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_1:
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_5
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_4:
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_2:
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_1
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_5:
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_4
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_2
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_1:
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_5
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_4:
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_2:
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_1
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_5:
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_4
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival_2
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival_1:
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival_5
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival_4:
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival_2:
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival_1
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival_5:
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival_4
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex_2
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex_1:
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, FEMALE
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex_5
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex_4:
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex_2:
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex_1
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex_5:
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex_4
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge LittlerootTown_ProfessorBirchsLab_EventScript_Aide_2
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1:
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_5
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_4:
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_2:
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_5:
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_4
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil_2
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil_1:
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil_5
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil_4:
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil_2:
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil_1
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil_5:
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil_4
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge LittlerootTown_ProfessorBirchsLab_EventScript_Totodile_2
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile_1:
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Totodile_5
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile_4:
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile_2:
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Totodile_1
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile_5:
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Totodile_4
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita_2
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita_1:
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita_5
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita_4:
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita_2:
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita_1
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita_5:
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita_4
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil_2
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil_1:
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil_5
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil_4:
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil_2:
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil_1
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil_5:
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil_4
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty_2
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty_1:
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty_2:
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty_1
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC_2
# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC_1:
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC_2:
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC_1
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile_2
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile_1:
# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile_5
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile_4:
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile_2:
# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile_1
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile_5:
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile_4
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty_2
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty_1:
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty_2:
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty_1
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC_2
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC_1:
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC_2:
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC_1
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita_2
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita_1:
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita_5
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita_4:
# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita_2:
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita_1
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita_5:
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita_4
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty_2
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty_1:
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty_2:
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty_1
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC_2
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC_1:
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC_2:
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC_1
# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 997 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1011 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1015 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 1016 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1017 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1018 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1019 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 1020 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1021 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1022 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1023 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 1024 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1025 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1026 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1027 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 1028 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1029 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 1030 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Birch_2
# 1031 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch_1:
# 1032 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1033 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 1034 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Birch_5
# 1035 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch_4:
# 1036 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1037 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_Birch_8
# 1038 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch_7:
# 1039 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1040 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_Birch_11
# 1041 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch_10:
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1043 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 1044 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1045 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1046 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch_2:
# 1047 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1048 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 1049 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Birch_1
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1051 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch_5:
# 1052 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 1054 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Birch_4
# 1055 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1056 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch_8:
# 1057 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1058 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 1059 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Birch_7
# 1060 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1061 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch_11:
# 1062 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1063 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto EventScript_RegisterProfBirch
# 1064 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Birch_10
# 1065 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1066 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1067 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 1068 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1069 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 1070 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1071 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 1072 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1073 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1074 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1075 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 1076 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1077 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 1078 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1079 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 1080 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1081 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1082 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1083 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 1084 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1085 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_2
# 1086 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_1:
# 1087 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1088 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 1089 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_5
# 1090 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_4:
# 1091 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1092 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 1093 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_8
# 1094 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_7:
# 1095 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1096 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 5
# 1097 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_11
# 1098 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_10:
# 1099 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 1101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 1103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_2:
# 1106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto ProfBirch_EventScript_RatePokedexOrRegister
# 1108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_1
# 1109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_5:
# 1111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto ProfBirch_EventScript_RatePokedexOrRegister
# 1113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_4
# 1114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_8:
# 1116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto ProfBirch_EventScript_RatePokedexOrRegister
# 1118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_7
# 1119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_11:
# 1121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 1123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_10
# 1124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 1127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 1129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 1133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 1137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 1139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 1143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 1145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 1147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 1149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 1153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 1155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 1157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 1159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 1163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 1171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
# 1173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_2
# 1174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_1:
# 1175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, FEMALE
# 1177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_5
# 1178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_4:
# 1179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 1181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 1183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 1185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 1187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 1189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 1191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_2:
# 1194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 1196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_1
# 1197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_5:
# 1199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 1201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_4
# 1202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 1205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 1207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 1209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, FALSE
# 1211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls_2
# 1212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls_1:
# 1213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 1215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 1217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls_2:
# 1220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 1222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls_1
# 1223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 1226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 1228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 1230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, FALSE
# 1232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls_2
# 1233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls_1:
# 1234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 1236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 1238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls_2:
# 1241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 1243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls_1
# 1244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 1247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 1251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 1253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 1255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 1257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 1259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 1261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 1265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 1267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 1269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 1273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 1275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 1279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 1281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 1286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 1288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 1290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 1292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 1294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 1296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 1300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 1304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 1306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Rival_2
# 1307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival_1:
# 1308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 1310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge LittlerootTown_ProfessorBirchsLab_EventScript_Rival_5
# 1311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival_4:
# 1312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 1314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge LittlerootTown_ProfessorBirchsLab_EventScript_Rival_8
# 1315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival_7:
# 1316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 1318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
# 1320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Rival_11
# 1321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival_10:
# 1322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, FEMALE
# 1324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Rival_14
# 1325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival_13:
# 1326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 1328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival_2:
# 1331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 1333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Rival_1
# 1334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival_5:
# 1336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 1338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Rival_4
# 1339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival_8:
# 1341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 1343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Rival_7
# 1344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival_11:
# 1346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 1348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Rival_10
# 1349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival_14:
# 1351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 1353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Rival_13
# 1354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 1357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 1359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 1363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 1365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 1369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 1371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
# 1373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans_2
# 1374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans_1:
# 1375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, FEMALE
# 1377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans_5
# 1378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans_4:
# 1379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 1381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans_2:
# 1384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 1386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans_1
# 1387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans_5:
# 1389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 1391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans_4
# 1392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 1395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 1397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly::
# 1401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 1403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 1407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 1409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
# 1411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier_2
# 1412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier_1:
# 1413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, FEMALE
# 1415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier_5
# 1416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier_4:
# 1417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 1419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier_2:
# 1422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 1424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier_1
# 1425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier_5:
# 1427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 1429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier_4
# 1430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 1433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 1435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 1439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 1441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 1445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 1447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
# 1449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork_2
# 1450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork_1:
# 1451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, FEMALE
# 1453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork_5
# 1454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork_4:
# 1455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 1457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork_2:
# 1460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 1462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork_1
# 1463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork_5:
# 1465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 1467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork_4
# 1468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 1471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 1473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 1477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 1479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 1480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 1483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 1485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 1489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 1491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 1495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 1497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 1501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 1505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 1509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 1511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 1512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork::
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? PROF. BIRCH?\p"
# 1517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF's away on fieldwork.\n"
# 1518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 1519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 1520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 1521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 1522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 1523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 1524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 1525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 1526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 1527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork::
# 1529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 1531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 1532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 1533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 1534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo::
# 1536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH is studying the habitats\n"
# 1538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of POKéMON.\p"
# 1539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF enjoys {RIVAL}'s help, too.\n"
# 1540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 1541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon::
# 1543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: So, {PLAYER}{KUN}.\p"
# 1545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard so much about you from\n"
# 1546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your father.\p"
# 1547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 1548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "own POKéMON yet.\p"
# 1549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 1550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 1551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess you have your father's blood\n"
# 1552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in your veins after all!\p"
# 1553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 1554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the POKéMON you\l"
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.\p"
# 1556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 1557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon::
# 1559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: While you're at it, why not\n"
# 1561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "give a nickname to that {STR_VAR_1}?$"
# 1562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival::
# 1564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: If you work at POKéMON\n"
# 1566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and gain experience, I think you'll make\l"
# 1567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good TRAINER.\p"
# 1568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 1569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON while helping me out.\p"
# 1570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, don't you think it might be\n"
# 1571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a good idea to go see {RIVAL}?$"
# 1572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou::
# 1574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Great!\n"
# 1576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} should be happy, too.\p"
# 1577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 1578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a TRAINER.$"
# 1579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay::
# 1581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, don't be that way.\n"
# 1583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You should go meet my kid.$"
# 1584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome::
# 1586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: {RIVAL}?\n"
# 1588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 1589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 1590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 1591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your POKéMON get tired,\n"
# 1592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 1593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex::
# 1595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, hi, {PLAYER}{KUN}!\p"
# 1597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 1598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 1599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 1600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 1601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 1602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a TRAINER already.\p"
# 1603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 1604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "research, but I think you should have\l"
# 1605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéDEX.$"
# 1606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex::
# 1608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"
# 1610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex::
# 1612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The POKéDEX is a high-tech\n"
# 1614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 1615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of any POKéMON you meet or catch.\p"
# 1616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 1617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with it.\p"
# 1618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Whenever my kid catches a rare POKéMON\n"
# 1619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and records its data in the POKéDEX,\l"
# 1620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "why, {RIVAL} looks for me while I'm out\l"
# 1621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "doing fieldwork, and shows me.$"
# 1622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait::
# 1624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Countless POKéMON\n"
# 1626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "await you!\p"
# 1627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 1628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 1629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese::
# 1631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
# 1633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You got a POKéDEX, too!\p"
# 1634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 1635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 1636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls::
# 1638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: It's fun if you can get a lot of\n"
# 1640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON!\p"
# 1641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 1642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different POKéMON.\p"
# 1643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute POKéMON, I'll catch\n"
# 1644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with POKé BALLS!$"
# 1645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull::
# 1647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your BAG's full.$"
# 1649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext::
# 1651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I wonder where I should go look\n"
# 1653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for POKéMON next?$"
# 1654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese::
# 1656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Huh…\n"
# 1658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you got a POKéDEX, too.\p"
# 1659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 1660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 1661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls::
# 1663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: You know it's more fun to\n"
# 1665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of POKéMON.\p"
# 1666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 1667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different POKéMON.\p"
# 1668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool POKéMON, you bet\n"
# 1669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with POKé BALLS.$"
# 1670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull::
# 1672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your BAG's full.$"
# 1674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext::
# 1676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Where should I look for\n"
# 1678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON next…$"
# 1679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine::
# 1681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 1683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF must use this for research.$"
# 1684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch::
# 1686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 1688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 1689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon::
# 1691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on POKéMON.$"
# 1693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead::
# 1695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 1697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational::
# 1699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 1701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 1702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study POKéMON.\p"
# 1703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 1704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 1705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 1706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also POKéMON from other\l"
# 1707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 1708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 1709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 1710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 1711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 1712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 1713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode.\p"
# 1714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 1715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool::
# 1717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1032 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 1719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 1720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 1721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 1722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many POKéMON, {PLAYER}{KUN}!$"
# 1723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe::
# 1725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1040 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 1727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out POKéMON.\p"
# 1728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 1729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode POKéDEX.\p"
# 1730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 1731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone::
# 1733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1048 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 1735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational::
# 1737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1052 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 1739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the NATIONAL Mode!$"
# 1740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2::
# 1742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1057 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 1744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 1745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 1746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 1747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 1748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 1749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 1750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork::
# 1752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1067 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 1754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 1755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 1756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 1757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork::
# 1759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1074 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 1761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 1762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 1763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 1764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon::
# 1766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1081 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 1768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 1769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 1771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 1772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 1773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's POKéDEX.\p"
# 1774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 1775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 1776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 1777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 1778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare POKéMON only found\n"
# 1779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 1780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 1781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 1782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon::
# 1784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1099 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: These are rare POKéMON\n"
# 1786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "only found in another region!\p"
# 1787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 1788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 1789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil::
# 1791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The FIRE POKéMON\n"
# 1793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CYNDAQUIL caught your eye!\p"
# 1794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 1795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the CYNDAQUIL is your choice?$"
# 1796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile::
# 1798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The WATER POKéMON\n"
# 1800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TOTODILE is your choice!\p"
# 1801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 1802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the TOTODILE?$"
# 1803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita::
# 1805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The GRASS POKéMON\n"
# 1807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CHIKORITA is your choice!\p"
# 1808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 1809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the CHIKORITA?$"
# 1810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable::
# 1812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Take your time before\n"
# 1814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you decide.\p"
# 1815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable POKéMON.$"
# 1816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon::
# 1818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 1820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine POKéMON!$"
# 1821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter::
# 1823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 1825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from PROF. BIRCH!$"
# 1826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter::
# 1828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 1830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 1831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting::
# 1833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 1835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 1836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 1837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 1838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 1839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 1840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 1841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone::
# 1843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised POKéMON.\n"
# 1845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 1846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon::
# 1848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 1850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéMON.$"
# 1851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere::
# 1853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 1855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 1856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 1857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 1858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 1859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 1860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 1861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly::
# 1863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 1865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON, I prefer slowly and \l"
# 1866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 1867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier::
# 1869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 1871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 1872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier::
# 1875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 1877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 1878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall::
# 1881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
# 1882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 1884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 1885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 1886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 1887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 1888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 1889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 1890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 1891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 1892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 1893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 1894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 1895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"
