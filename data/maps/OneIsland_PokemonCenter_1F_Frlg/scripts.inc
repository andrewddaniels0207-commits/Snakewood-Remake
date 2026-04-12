# 1 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_OnTransition
# 5 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 8 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OneIsland_PokemonCenter_1F_OnLoad
# 9 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 5 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 10 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 12 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 13 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene
# 16 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte 0
# 17 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 19 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnLoad::
# 20 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 11 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 21 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 22 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_ge OneIsland_PokemonCenter_1F_OnLoad_2
# 23 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnLoad_1:
# 24 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_OnLoad_5
# 26 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnLoad_4:
# 27 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 28 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 29 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnLoad_2:
# 30 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 31 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 32 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_OnLoad_1
# 33 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnLoad_5:
# 35 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 37 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_OnLoad_4
# 38 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile::
# 41 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 21 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 13, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Ruby, 1
# 43 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 44 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 46 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile::
# 47 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 26 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 16, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Sapphire, 1
# 49 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 50 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 51 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 52 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn::
# 53 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 31 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 54 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 55 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 32 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 56 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 14, 4, METATILE_PokemonCenterFrlg_NetworkMachine_ScreenLeft_On, 1
# 57 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 33 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 58 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 15, 4, METATILE_PokemonCenterFrlg_NetworkMachine_ScreenRight_On, 1
# 59 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 60 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 61 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 62 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnTransition::
# 63 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 38 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 64 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_ONE_ISLAND
# 65 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 39 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 66 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
# 67 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_OnTransition_2
# 68 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnTransition_1:
# 69 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 70 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0
# 71 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_OnTransition_5
# 72 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnTransition_4:
# 73 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 74 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2
# 75 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_OnTransition_8
# 76 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnTransition_7:
# 77 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 78 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 79 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnTransition_2:
# 80 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 40 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 81 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone
# 82 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_OnTransition_1
# 83 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 84 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnTransition_5:
# 85 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 43 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 86 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos
# 87 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_OnTransition_4
# 88 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 89 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_OnTransition_8:
# 90 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 46 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 91 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos
# 92 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_OnTransition_7
# 93 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 94 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 95 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone::
# 96 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 52 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 97 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
# 98 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 99 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 100 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 101 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos::
# 102 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 57 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 103 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 9, 8
# 104 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 58 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 105 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_UP
# 106 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 59 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 107 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 15, 6
# 108 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 60 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 109 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_UP
# 110 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 111 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 112 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 113 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos::
# 114 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 65 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 115 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 14, 7
# 116 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 66 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 117 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_LEFT
# 118 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 67 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 119 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 14, 8
# 120 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 68 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 121 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_LEFT
# 122 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 123 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 124 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 125 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene::
# 126 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 73 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 127 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 128 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 74 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 129 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 130 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 75 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 131 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio
# 132 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 76 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 133 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio
# 134 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 77 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 135 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 136 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 78 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 137 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio
# 138 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 79 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 139 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 140 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 80 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 141 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 142 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 81 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 143 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_PIN
# 144 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 82 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 145 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_ExclamationMark
# 146 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 83 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 147 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 148 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 84 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 149 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 150 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 85 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 151 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 152 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 86 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 153 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_Delay48
# 154 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 87 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 155 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 156 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 88 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 157 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut
# 158 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 89 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 159 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing
# 160 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 90 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 161 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 162 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 91 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 163 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 164 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 92 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 165 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 166 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 93 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 167 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio
# 168 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 94 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 169 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterRight
# 170 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 95 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 171 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 172 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 96 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 173 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 174 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 97 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 175 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 176 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 98 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 177 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_2
# 178 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_1:
# 179 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 101 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 180 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_5
# 181 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_4:
# 182 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 104 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 183 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 184 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 105 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 185 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 186 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 106 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 187 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive
# 188 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 107 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 189 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed
# 190 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 108 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 191 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 192 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 109 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 193 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 194 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 110 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 195 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours
# 196 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 111 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 197 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 198 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 112 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 199 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
# 200 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 113 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 201 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 202 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 114 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 203 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou
# 204 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 115 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 205 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 206 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 116 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 207 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 208 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 117 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 209 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 210 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 118 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 211 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 212 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 119 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 213 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer
# 214 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 120 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 215 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgreceiveditem OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill, ITEM_METEORITE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 216 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 121 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 217 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	additem ITEM_METEORITE
# 218 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 122 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 219 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 220 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 123 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 221 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 222 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 124 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 223 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis
# 224 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 125 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 225 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ObtainedTriPass, ITEM_TRI_PASS, 1, MUS_RG_OBTAIN_KEY_ITEM
# 226 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 126 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 227 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands
# 228 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 127 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 229 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 230 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_ge OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_8
# 231 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_7:
# 232 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 130 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 233 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 234 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_lt OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_11
# 235 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_10:
# 236 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 133 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 237 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_123
# 238 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 134 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 239 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCatchYouLater
# 240 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 135 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 241 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 242 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 136 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 243 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
# 244 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 137 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 245 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 246 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 138 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 247 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 248 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 139 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 249 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 250 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 140 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 251 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_SYS_PC_STORAGE_DISABLED
# 252 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 141 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 253 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
# 254 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 142 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 255 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
# 256 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 257 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 258 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_2:
# 259 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 99 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 260 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp
# 261 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_1
# 262 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 263 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_5:
# 264 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 102 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 265 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp
# 266 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_4
# 267 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 268 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_8:
# 269 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 128 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 270 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage
# 271 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_7
# 272 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 273 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_11:
# 274 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 131 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 275 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap
# 276 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_10
# 277 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 278 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 279 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp::
# 280 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 147 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 281 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp
# 282 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 283 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 284 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 285 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp::
# 286 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 152 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 287 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp
# 288 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 289 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 290 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 291 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage::
# 292 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 157 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 293 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 294 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 158 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 295 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 296 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 159 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 297 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap
# 298 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 160 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 299 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 300 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 161 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 301 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 302 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 162 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 303 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 304 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 305 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 306 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 307 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap::
# 308 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 167 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 309 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 310 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 168 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 311 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 312 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 169 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 313 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ReceivedTownMap, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
# 314 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 315 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 316 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 317 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 173 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 318 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio:
# 319 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 174 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 320 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 321 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 175 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 322 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 323 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 176 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 324 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 325 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 177 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 326 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 327 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 178 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 328 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 329 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 179 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 330 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 331 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 180 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 332 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 333 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 181 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 334 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_up
# 335 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 182 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 336 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 337 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 338 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 185 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 339 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio:
# 340 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 186 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 341 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 342 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 187 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 343 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 344 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 188 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 345 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 346 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 189 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 347 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 348 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 190 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 349 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 350 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 191 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 351 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 352 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 192 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 353 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 354 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 193 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 355 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 356 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 194 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 357 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 358 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 359 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 197 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 360 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkUp:
# 361 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 198 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 362 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 363 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 199 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 364 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 365 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 366 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 202 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 367 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_StepAsideLeft:
# 368 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 203 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 369 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 370 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 204 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 371 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 372 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 205 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 373 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 374 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 375 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Nurse::
# 376 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 209 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 377 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 378 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 210 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 379 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 380 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 211 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 381 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 382 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 212 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 383 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 384 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 385 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 386 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 387 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Bill::
# 388 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 217 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 389 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 390 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 218 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 391 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_Bill_2
# 392 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Bill_1:
# 393 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 221 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 394 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis
# 395 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 222 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 396 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 397 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 398 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Bill_2:
# 400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 219 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 401 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll
# 402 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_Bill_1
# 403 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 404 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 405 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll::
# 406 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 227 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 407 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_FacePlayer
# 408 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 228 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 409 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 410 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 229 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 411 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore
# 412 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 230 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 413 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 414 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 415 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 416 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 417 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio::
# 418 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 235 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 419 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 420 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 236 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 421 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 422 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 237 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 423 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
# 424 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_2
# 425 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_1:
# 426 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 240 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 427 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
# 428 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_5
# 429 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_4:
# 430 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 243 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 431 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_RECOVERED_SAPPHIRE, OneIsland_PokemonCenter_1F_EventScript_Celio_8
# 432 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_7:
# 433 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 246 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 434 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 435 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_11
# 436 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_10:
# 437 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 249 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 438 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_RUBY, OneIsland_PokemonCenter_1F_EventScript_Celio_14
# 439 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_13:
# 440 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 252 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 441 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 442 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_17
# 443 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_16:
# 444 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 255 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 445 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 446 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 256 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 447 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 448 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_20
# 449 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_19:
# 450 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 259 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 451 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
# 452 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_23
# 453 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_22:
# 454 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 262 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 455 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost
# 456 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 263 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 457 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 458 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 264 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 459 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FaceOriginalDirection
# 460 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 265 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 461 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 462 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 266 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 463 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 464 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 465 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 466 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_2:
# 467 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 238 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 468 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact
# 469 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_1
# 470 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 471 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_5:
# 472 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 241 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 473 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire
# 474 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_4
# 475 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 476 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_8:
# 477 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 244 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 478 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire
# 479 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_7
# 480 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 481 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_11:
# 482 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 247 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 483 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 484 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_10
# 485 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 486 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_14:
# 487 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 250 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 488 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby
# 489 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_13
# 490 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 491 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_17:
# 492 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 253 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 493 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby
# 494 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_16
# 495 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 496 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_20:
# 497 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 257 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 498 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby
# 499 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_19
# 500 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 501 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio_23:
# 502 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 260 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 503 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex
# 504 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_22
# 505 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 506 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 507 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact::
# 508 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 271 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 509 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou
# 510 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 272 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 511 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	random 3
# 512 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 273 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 513 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 514 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_2
# 515 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_1:
# 516 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 276 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 517 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 518 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_5
# 519 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_4:
# 520 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 279 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 521 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 5
# 522 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 280 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 523 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk
# 524 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 281 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 525 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 526 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 527 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 528 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_2:
# 529 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 274 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 530 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_BillFact1
# 531 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_1
# 532 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 533 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_5:
# 534 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 277 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 535 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_BillFact2
# 536 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_4
# 537 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 538 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 539 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact1::
# 540 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 286 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 541 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 3
# 542 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 287 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 543 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra
# 544 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 288 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 545 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 546 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 547 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 548 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 549 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact2::
# 550 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 293 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 551 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 4
# 552 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 294 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 553 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod
# 554 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 295 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 555 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 556 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 557 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 558 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 559 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire::
# 560 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 300 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 561 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck
# 562 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 301 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 563 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 564 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 565 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 566 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 567 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire::
# 568 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 306 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 569 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 570 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 307 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 571 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 572 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 308 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 573 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio
# 574 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 309 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 575 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 576 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 310 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 577 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 578 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 311 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 579 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 580 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 312 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 581 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeitem ITEM_SAPPHIRE
# 582 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 313 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 583 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime
# 584 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 314 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 585 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 586 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 315 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 587 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 588 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 316 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 589 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 590 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 317 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 591 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_CLICK
# 592 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 318 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 593 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 594 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 319 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 595 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 596 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 320 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 597 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OkayThisIsGood
# 598 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 321 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 599 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 600 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 322 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 601 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 60
# 602 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 323 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 603 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 604 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 324 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 605 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 606 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 325 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 607 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 30
# 608 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 326 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 609 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 610 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 327 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 611 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 612 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 328 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 613 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 40
# 614 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 329 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 615 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_PC_ON
# 616 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 330 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 617 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 618 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 331 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 619 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 620 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 332 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 621 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette
# 622 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 333 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 623 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 624 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 334 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 625 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 626 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 335 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 627 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou
# 628 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 336 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 629 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special SetPostgameFlags
# 630 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 337 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 631 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 632 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 338 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 633 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
# 634 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 339 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 635 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 636 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 340 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 637 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
# 638 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 341 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 639 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special InitRoamer
# 640 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 342 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 641 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 642 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 643 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 644 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 645 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass::
# 646 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 347 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 647 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
# 648 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 348 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 649 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 650 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 651 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 652 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 653 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby::
# 654 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 353 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 655 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OhThats
# 656 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 354 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 657 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 658 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 355 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 659 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 660 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 356 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 661 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio
# 662 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 357 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 663 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 664 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 358 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 665 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 666 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 359 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 667 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 668 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 360 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 669 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 670 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 361 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 671 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 672 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 362 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 673 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 674 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 363 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 675 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_CLICK
# 676 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 364 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 677 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 678 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 365 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 679 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 680 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 366 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 681 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 30
# 682 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 367 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 683 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 684 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 368 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 685 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 686 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 369 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 687 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor, MSGBOX_YESNO
# 688 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 370 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 689 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 690 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_2
# 691 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_1:
# 692 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 373 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 693 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 694 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 695 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 696 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_2:
# 697 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 371 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 698 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 699 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_1
# 700 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 701 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 702 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio::
# 703 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 378 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 704 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp, MSGBOX_YESNO
# 705 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 379 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 706 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 707 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio_2
# 708 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio_1:
# 709 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 382 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 710 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 711 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 712 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 713 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio_2:
# 714 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 380 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 715 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 716 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio_1
# 717 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 718 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 719 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass::
# 720 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 387 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 721 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands
# 722 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 388 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 723 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeitem ITEM_RUBY
# 724 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 389 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 725 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeitem ITEM_TRI_PASS
# 726 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 390 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 727 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 728 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 391 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 729 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	additem ITEM_RAINBOW_PASS
# 730 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 392 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 731 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_4567
# 732 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 393 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 733 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 734 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 394 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 735 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 736 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 395 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 737 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass
# 738 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 396 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 739 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 740 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 397 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 741 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 742 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 398 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 743 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 744 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 745 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage
# 746 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 747 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 748 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 401 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 749 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 750 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 402 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 751 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 752 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 403 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 753 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 754 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 755 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 756 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 757 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby::
# 758 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 408 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 759 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TryingToFindGem
# 760 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 409 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 761 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 762 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 763 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 764 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 765 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby::
# 766 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 414 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 767 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful
# 768 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 415 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 769 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 770 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 416 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 771 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 772 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 417 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 773 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway
# 774 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 418 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 775 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 776 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 419 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 777 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 778 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 420 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 779 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone
# 780 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 421 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 781 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1
# 782 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 422 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 783 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 784 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 423 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 785 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 786 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 787 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 788 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 789 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex::
# 790 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 428 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 791 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine
# 792 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 429 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 793 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 794 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 795 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 796 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 797 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 433 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 798 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine:
# 799 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 434 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 800 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_up
# 801 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 435 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 802 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 803 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 436 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 804 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_up
# 805 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 437 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 806 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 807 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 808 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 440 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 809 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine:
# 810 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 441 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 811 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_up
# 812 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 442 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 813 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_up
# 814 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 443 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 815 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 816 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 444 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 817 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_up
# 818 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 445 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 819 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_up
# 820 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 446 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 821 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 822 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 823 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
# 824 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 450 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 825 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
# 826 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 827 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 828 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 829 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Hiker::
# 830 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 455 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 831 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
# 832 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 833 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 834 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 835 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirl::
# 836 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 460 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 837 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 838 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 461 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 839 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 840 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 462 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 841 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_BattleGirl_2
# 842 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirl_1:
# 843 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 465 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 844 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend
# 845 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 466 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 846 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 847 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 848 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 849 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirl_2:
# 850 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 463 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 851 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked
# 852 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_BattleGirl_1
# 853 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 854 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 855 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked::
# 856 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 471 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 857 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
# 858 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 472 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 859 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 860 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 861 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 862 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 863 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine::
# 864 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 477 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 865 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 866 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 478 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 867 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_2
# 868 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_1:
# 869 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 481 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 870 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_5
# 871 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_4:
# 872 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 484 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 873 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment
# 874 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 485 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 875 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
# 876 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 877 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 878 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_2:
# 879 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 479 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 880 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn
# 881 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_1
# 882 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 883 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_5:
# 884 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 482 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 885 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto
# 886 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_4
# 887 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 888 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 889 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto::
# 890 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 490 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 891 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto
# 892 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 491 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 893 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
# 894 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 895 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 896 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 897 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn::
# 898 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 496 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 899 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn
# 900 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 497 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 901 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
# 902 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 903 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 904 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 905 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop::
# 906 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 502 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 907 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 908 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 503 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 909 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 910 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 504 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 911 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 912 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 913 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 914 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 915 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop::
# 916 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 509 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 917 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 918 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 510 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 919 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 920 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 511 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 921 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 922 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 923 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 924 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 925 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom::
# 926 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 516 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 927 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 928 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 517 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 929 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 930 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 518 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 931 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 932 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 933 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 934 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 935 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom::
# 936 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 523 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 937 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 938 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 524 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 939 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 940 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 525 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 941 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 942 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 943 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 944 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 945 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene::
# 946 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 530 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 947 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 948 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 531 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 949 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_PIN
# 950 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 532 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 951 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_ExclamationMark
# 952 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 533 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 953 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 954 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 534 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 955 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer
# 956 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 535 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 957 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 958 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 536 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 959 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 960 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_2
# 961 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_1:
# 962 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 539 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 963 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 964 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_5
# 965 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_4:
# 966 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 542 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 967 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 3
# 968 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_8
# 969 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_7:
# 970 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 545 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 971 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 4
# 972 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_11
# 973 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_10:
# 974 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 548 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 975 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 10
# 976 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 549 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 977 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeGotItDone
# 978 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 550 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 979 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 980 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 551 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 981 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 982 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 552 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 983 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick
# 984 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 553 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 985 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 986 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 554 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 987 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 988 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 555 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 989 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 990 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 556 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 991 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 992 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 557 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 993 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot
# 994 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 558 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 995 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe
# 996 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 559 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 997 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 998 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 560 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 999 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterLeft
# 1000 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 561 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1001 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 1002 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 562 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1003 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 10
# 1004 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 563 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1005 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1006 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 564 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1007 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 1008 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 565 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1009 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 15
# 1010 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 566 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1011 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto
# 1012 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 567 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1013 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 1014 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 568 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1015 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 1016 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 569 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1017 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 1018 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 570 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1019 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 15
# 1020 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 571 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1021 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 1022 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 572 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1023 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 1024 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 573 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1025 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1026 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 574 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1027 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 1028 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 575 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1029 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime
# 1030 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 576 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1031 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 1032 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 577 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1033 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 25
# 1034 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 578 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1035 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerExit
# 1036 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 579 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1037 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillExit
# 1038 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 580 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1039 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 1040 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 581 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1041 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_EXIT
# 1042 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 582 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1043 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
# 1044 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 583 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1045 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
# 1046 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 584 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1047 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 1048 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 585 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1049 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 3
# 1050 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 586 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1051 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 1052 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 587 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1053 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_CINNABAR_ISLAND
# 1054 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 588 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1055 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto EventScript_SetSail
# 1056 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 1057 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1058 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_2:
# 1059 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 537 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1060 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop
# 1061 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_1
# 1062 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1063 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_5:
# 1064 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 540 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1065 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop
# 1066 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_4
# 1067 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1068 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_8:
# 1069 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 543 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1070 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom
# 1071 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_7
# 1072 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1073 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_11:
# 1074 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 546 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1075 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom
# 1076 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_10
# 1077 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1078 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1079 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop::
# 1080 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 593 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1081 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop
# 1082 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 594 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1083 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 1084 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 1085 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1086 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1087 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop::
# 1088 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 599 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1089 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop
# 1090 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 600 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1091 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 1092 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 1093 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1094 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1095 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom::
# 1096 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 605 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1097 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom
# 1098 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 606 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1099 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 1100 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 1101 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1102 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1103 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom::
# 1104 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 611 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1105 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom
# 1106 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 612 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1107 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 1108 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 1109 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1110 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1111 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 616 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1112 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop:
# 1113 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 617 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1114 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 1115 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 618 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1116 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 1117 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 619 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1118 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 1119 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 620 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1120 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 1121 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1122 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 623 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1123 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop:
# 1124 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 624 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1125 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 1126 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 625 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1127 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 1128 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1129 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 628 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1130 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom:
# 1131 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 629 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1132 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 1133 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 630 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1134 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 1135 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 631 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1136 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 1137 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 632 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1138 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 1139 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1140 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 635 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1141 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom:
# 1142 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 636 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1143 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 1144 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 637 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1145 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 1146 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 638 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1147 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 1148 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 639 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1149 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 1150 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 640 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1151 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 1152 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1153 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 643 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1154 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_DelayWalkInPlaceLeft:
# 1155 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 644 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1156 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 1157 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 645 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1158 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 1159 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 646 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1160 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_4
# 1161 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 647 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1162 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_left
# 1163 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 648 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1164 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 1165 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1166 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkInPlaceDown::
# 1167 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 652 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1168 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_fast_down
# 1169 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 653 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1170 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 1171 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 1172 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1173 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1174 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 656 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1175 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerExit:
# 1176 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 657 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1177 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 1178 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 658 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1179 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 1180 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 659 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1181 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 1182 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 660 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1183 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 1184 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 661 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1185 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 1186 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 662 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1187 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 1188 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 663 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1189 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 1190 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1191 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 666 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1192 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillExit:
# 1193 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 667 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1194 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 1195 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 668 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1196 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 1197 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 669 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1198 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 1199 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 670 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1200 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 1201 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 671 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1202 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 1203 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 672 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1204 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 1205 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 673 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1206 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 1207 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1208 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio::
# 1209 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 676 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1210 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Hey, there!\n"
# 1211 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO!$"
# 1212 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1213 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut::
# 1214 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 681 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1215 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: BILL!\n"
# 1216 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I can't believe you came out here.$"
# 1217 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1218 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing::
# 1219 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 686 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1220 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Well, absolutely!\n"
# 1221 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "How's your research coming along?\p"
# 1222 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…Oh, wait a sec.$"
# 1223 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1224 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio::
# 1225 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 692 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1226 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, this is my buddy CELIO.\n"
# 1227 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "He's one dedicated PC MANIAC!$"
# 1228 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1229 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp::
# 1230 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 697 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1231 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO, this is {PLAYER}, a rising\n"
# 1232 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "contender as the POKéMON CHAMP!$"
# 1233 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1234 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp::
# 1235 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 702 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1236 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO, this is {PLAYER}, the\n"
# 1237 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "reigning POKéMON CHAMP!$"
# 1238 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1239 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive::
# 1240 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 707 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1241 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: That's really impressive.\p"
# 1242 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I hate to say it, but I have zero\n"
# 1243 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "aptitude for battling.\p"
# 1244 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Anyways, I'm glad to meet you.$"
# 1245 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1246 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed::
# 1247 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 714 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1248 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: So, bring me up to speed.\n"
# 1249 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "How's your machine running?$"
# 1250 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1251 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours::
# 1252 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 719 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1253 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: It's running fine, but we're\n"
# 1254 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "too remote out here.\p"
# 1255 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The PCs on this island just can't\n"
# 1256 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "link with your PC, BILL.$"
# 1257 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1258 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou::
# 1259 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 726 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1260 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Oh, yeah?\n"
# 1261 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Okay, let me take a look-see.\p"
# 1262 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…Hang on here…\n"
# 1263 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I think we can make it work.\l"
# 1264 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Let me help you, okay?$"
# 1265 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1266 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer::
# 1267 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 734 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1268 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, can I get you to wait for\n"
# 1269 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "me just a bit?\p"
# 1270 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…Actually, can I get you to do\n"
# 1271 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "me a favor?\p"
# 1272 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The island next to this one's\n"
# 1273 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "called TWO ISLAND.\p"
# 1274 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's a guy there that runs\n"
# 1275 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "a GAME CORNER.\p"
# 1276 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "He has this thing for rare rocks\n"
# 1277 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "and gems.\p"
# 1278 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "We keep in touch, being fellow\n"
# 1279 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "maniacs.\p"
# 1280 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, can I get you to deliver this\n"
# 1281 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "METEORITE to him?$"
# 1282 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1283 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill::
# 1284 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 751 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1285 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} accepted the METEORITE\n"
# 1286 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "from BILL.$"
# 1287 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1288 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis::
# 1289 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 756 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1290 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: {PLAYER}, if you are going\n"
# 1291 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to TWO ISLAND, please take this.$"
# 1292 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1293 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands::
# 1294 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 761 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1295 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's a PASS for the ferry service\n"
# 1296 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "serving the local islands.\p"
# 1297 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It will let you travel between the\n"
# 1298 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "ISLANDS ONE, TWO, and THREE.\p"
# 1299 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh, you should have this, too.$"
# 1300 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1301 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap::
# 1302 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 769 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1303 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} received an extra page\n"
# 1304 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "for the TOWN MAP!$"
# 1305 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1306 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_ReceivedTownMap::
# 1307 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 774 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1308 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} received\n"
# 1309 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "a TOWN MAP!$"
# 1310 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1311 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillCatchYouLater::
# 1312 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 779 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1313 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: I'll catch you later!\n"
# 1314 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Say hi to the guy for me!$"
# 1315 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1316 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis::
# 1317 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 784 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1318 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Hmm…\p"
# 1319 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "How about we try this like this…$"
# 1320 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1321 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore::
# 1322 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 789 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1323 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh, hey, {PLAYER}!\p"
# 1324 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Did you see?\n"
# 1325 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "We got the PC working!\p"
# 1326 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I've got a few things to show\n"
# 1327 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO here.\p"
# 1328 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Can you go out on a stroll or\n"
# 1329 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "something for a while more?$"
# 1330 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1331 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost::
# 1332 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 799 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1333 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm sorry for taking up so much of\n"
# 1334 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL's time.\p"
# 1335 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm also sorry for being such a \n"
# 1336 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "poor host on your visit here.$"
# 1337 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1338 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_UsualPCServicesUnavailable::
# 1339 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 806 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1340 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The usual PC services aren't\n"
# 1341 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "available…$"
# 1342 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1343 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer::
# 1344 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 811 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1345 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Oh, hey!\n"
# 1346 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}!$"
# 1347 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1348 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillWeGotItDone::
# 1349 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 816 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1350 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: What kept you so long?\n"
# 1351 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Been out having a good time?\p"
# 1352 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "We got it done.\n"
# 1353 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The PCs are up and running!$"
# 1354 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1355 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick::
# 1356 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 823 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1357 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: The job went incredibly\n"
# 1358 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "quick.\p"
# 1359 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL is one amazing guy…$"
# 1360 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1361 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot::
# 1362 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 829 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1363 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: No, no! There was almost\n"
# 1364 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "nothing left for me to do.\p"
# 1365 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO, I have to hand it to you.\n"
# 1366 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You've learned a lot.$"
# 1367 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1368 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe::
# 1369 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 836 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1370 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: Oh, really?\n"
# 1371 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Ehehe…$"
# 1372 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1373 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto::
# 1374 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 841 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1375 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Well, there you have it.\n"
# 1376 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm finished with the job.\l"
# 1377 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "We should head back to KANTO.\p"
# 1378 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO, I'll be seeing you again.$"
# 1379 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1380 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime::
# 1381 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 848 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1382 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: {PLAYER}, I'm really sorry\n"
# 1383 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "that we sent you off alone today.\p"
# 1384 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I promise, I will show you around\n"
# 1385 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "these islands sometime.$"
# 1386 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1387 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine::
# 1388 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 855 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1389 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: Hello!\n"
# 1390 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You look awfully busy as always.\p"
# 1391 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "How am I doing?\p"
# 1392 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Well, I'm modifying my Network\n"
# 1393 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Machine.\p"
# 1394 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "When I get done with the machine,\n"
# 1395 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I hope you'll be first to use it,\l"
# 1396 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}.$"
# 1397 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1398 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful::
# 1399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 866 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: {PLAYER}, how have things\n"
# 1401 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "been for you?\p"
# 1402 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh, is that right?\n"
# 1403 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You've caught more POKéMON.\p"
# 1404 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Do you know what?\n"
# 1405 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Maybe I can be useful to you.$"
# 1406 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1407 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway::
# 1408 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 875 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1409 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm modifying the Network Machine\n"
# 1410 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "right now.\p"
# 1411 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm changing it so it can handle\n"
# 1412 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "trades over long distances.\p"
# 1413 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "When I get finished, you'll be\n"
# 1414 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "trading for exotic POKéMON from\l"
# 1415 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TRAINERS far away.$"
# 1416 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1417 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone::
# 1418 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 885 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1419 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "But, there is a slight catch.\p"
# 1420 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "For the link to work, the Machine\n"
# 1421 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "needs a special gemstone.\p"
# 1422 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's supposed to be on ONE ISLAND,\n"
# 1423 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "but I haven't found one yet.\p"
# 1424 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Who knows where it could be.$"
# 1425 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1426 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_TryingToFindGem::
# 1427 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 894 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1428 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I was trying to find the gem\n"
# 1429 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "even while I was studying.\p"
# 1430 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "As a result, I've made no headway\n"
# 1431 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "in both my search and studies…\p"
# 1432 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If I relied on BILL, I'm sure my\n"
# 1433 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "research would progress.\p"
# 1434 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "But this time, I want to try to do\n"
# 1435 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "things by myself.$"
# 1436 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1437 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_OhThats::
# 1438 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 905 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1439 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh!\n"
# 1440 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Th-that's…$"
# 1441 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1442 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio::
# 1443 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 910 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1444 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} handed the RUBY\n"
# 1445 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to CELIO.$"
# 1446 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1447 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor::
# 1448 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 915 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1449 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Thank you!\n"
# 1450 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, you're simply amazing.\p"
# 1451 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "… … …  … … …\p"
# 1452 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Um… May I ask one more giant favor\n"
# 1453 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "of you?$"
# 1454 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1455 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp::
# 1456 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 923 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1457 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It… It's not anything weird.\n"
# 1458 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Please, I need your help.$"
# 1459 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1460 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands::
# 1461 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 928 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1462 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "While I was studying gemstones,\n"
# 1463 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I discovered something important.\p"
# 1464 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There is another gem that forms\n"
# 1465 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "a pair with this RUBY.\p"
# 1466 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That other gemstone is supposed to\n"
# 1467 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "be in the SEVII ISLANDS.\p"
# 1468 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, please, I need you to go\n"
# 1469 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "find the other gem.\p"
# 1470 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, may I have your ferry\n"
# 1471 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "PASS and the TOWN MAP?$"
# 1472 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1473 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass::
# 1474 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 941 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1475 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} returned the TRI-PASS and\n"
# 1476 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "received the RAINBOW PASS.$"
# 1477 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1478 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage::
# 1479 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 946 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1480 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Obtained an extra page for the\n"
# 1481 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TOWN MAP!$"
# 1482 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1483 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands::
# 1484 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 951 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1485 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "This is my own ferry PASS.\p"
# 1486 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It will let you get to all the\n"
# 1487 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "SEVII ISLANDS.\p"
# 1488 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, please, I can't do\n"
# 1489 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "it without your help.$"
# 1490 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1491 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio::
# 1492 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 959 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1493 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} handed the SAPPHIRE\n"
# 1494 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to CELIO.$"
# 1495 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1496 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime::
# 1497 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 964 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1498 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: So this is the gem that\n"
# 1499 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "forms a pair with the RUBY…\p"
# 1500 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, you've gone through a lot\n"
# 1501 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to get this, didn't you?\p"
# 1502 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You don't have to tell me. I know\n"
# 1503 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "it wasn't easy.\p"
# 1504 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Thank you so much!\p"
# 1505 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Now it's my turn to work for you!\n"
# 1506 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Please give me a little time.$"
# 1507 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1508 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_OkayThisIsGood::
# 1509 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 976 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1510 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Okay, this is good…$"
# 1511 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1512 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette::
# 1513 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 980 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1514 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I did it!\n"
# 1515 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I linked up with LANETTE!$"
# 1516 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1517 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou::
# 1518 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 985 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1519 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}…\n"
# 1520 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, I did it!\p"
# 1521 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I've managed to link up with\n"
# 1522 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TRAINERS in the HOENN region!\p"
# 1523 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Finally, the Network Machine is\n"
# 1524 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "fully operational!\p"
# 1525 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, I owe it all to you!\p"
# 1526 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Thanks to you, my dream came\n"
# 1527 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "true…$"
# 1528 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1529 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck::
# 1530 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 997 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1531 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I…\n"
# 1532 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm not crying.\p"
# 1533 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That's enough about me!\p"
# 1534 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, you're going to keep\n"
# 1535 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "looking for exotic POKéMON, right?\p"
# 1536 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I wish you the best of luck!$"
# 1537 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1538 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou::
# 1539 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1006 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1540 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: Hello!\p"
# 1541 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, I've been hearing rumors\n"
# 1542 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "about you.$"
# 1543 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1544 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra::
# 1545 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1012 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1546 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, what's your favorite kind\n"
# 1547 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "of POKéMON?\p"
# 1548 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL is a POKéMANIAC, so he loves\n"
# 1549 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "every kind.\p"
# 1550 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Apparently, the first one he caught\n"
# 1551 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "was an ABRA.$"
# 1552 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1553 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod::
# 1554 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1021 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1555 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "By the way, {PLAYER}, you're from\n"
# 1556 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "PALLET TOWN, aren't you?\p"
# 1557 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I've heard that it's a quiet and\n"
# 1558 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "pleasant place.\p"
# 1559 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL's hometown is GOLDENROD CITY,\n"
# 1560 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "where his folks still live.\p"
# 1561 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I've heard that it's quite the\n"
# 1562 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "festive, bustling city.\p"
# 1563 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'd like to go there one day.$"
# 1564 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1565 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk::
# 1566 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1033 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1567 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, is there anything that\n"
# 1568 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "you can't stand?\p"
# 1569 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Apparently, BILL simply can't\n"
# 1570 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "stomach milk at all.$"
# 1571 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1572 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt::
# 1573 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1040 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1574 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh, you're a stranger here!\n"
# 1575 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Hi! Where did you come from?\p"
# 1576 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…PALLET TOWN?\n"
# 1577 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I don't know it!$"
# 1578 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1579 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland::
# 1580 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1047 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1581 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "On this island, there's an enormous\n"
# 1582 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "volcano.\p"
# 1583 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It hasn't erupted lately, so why\n"
# 1584 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "not enjoy a hike?$"
# 1585 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1586 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend::
# 1587 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1054 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1588 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I wish I could trade POKéMON with\n"
# 1589 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "my boyfriend who lives far away…$"
# 1590 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1591 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend::
# 1592 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1059 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1593 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I traded POKéMON with my boyfriend\n"
# 1594 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "far away!\p"
# 1595 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Everyone's saying that we can\n"
# 1596 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "thank you and CELIO.\p"
# 1597 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, thank you!$"
# 1598 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1599 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment::
# 1600 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1067 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1601 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Network Machine\n"
# 1602 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Link Level 0\p"
# 1603 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…POKéMON Storage System under\n"
# 1604 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "adjustment…$"
# 1605 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1606 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto::
# 1607 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1074 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1608 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Network Machine\n"
# 1609 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Link Level 1\p"
# 1610 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Link established with the KANTO\n"
# 1611 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "region.$"
# 1612 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1613 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn::
# 1614 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1081 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1615 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Network Machine\n"
# 1616 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Link Level 2\p"
# 1617 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Link established with the KANTO\n"
# 1618 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "and HOENN regions.$"
# 1619 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 1620 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Text_ObtainedTriPass::
# 1621 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1088 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 1622 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Obtained the TRI-PASS!$"
