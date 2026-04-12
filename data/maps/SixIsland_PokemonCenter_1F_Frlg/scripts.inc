# 1 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PokemonCenter_1F_OnTransition
# 5 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 8 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SixIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 10 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 5 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_RivalScene
# 14 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte 0
# 15 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 17 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_OnTransition::
# 18 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 10 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 19 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SIX_ISLAND
# 20 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 11 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 21 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0
# 22 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq SixIsland_PokemonCenter_1F_OnTransition_2
# 23 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_OnTransition_1:
# 24 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_OnTransition_2:
# 27 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 28 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call SixIsland_PokemonCenter_1F_EventScript_ShowRival
# 29 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto SixIsland_PokemonCenter_1F_OnTransition_1
# 30 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 31 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 32 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_ShowRival::
# 33 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 34 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SIX_ISLAND_POKECENTER_RIVAL
# 35 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 36 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 37 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 38 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_RivalScene::
# 39 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 23 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 40 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 41 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 43 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 44 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 45 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 26 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 46 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 47 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 27 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 49 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 28 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 50 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_ExclamationMark
# 51 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 29 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 52 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 53 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 54 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_Delay48
# 55 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 31 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 56 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 57 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 32 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 58 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 25
# 59 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 33 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 60 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalApproach
# 61 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 34 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 62 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 63 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 35 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 64 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere
# 65 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 66 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 67 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 37 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 68 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit
# 69 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 38 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 70 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalExit
# 71 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 39 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 72 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 40 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 74 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	fadedefaultbgm
# 75 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 41 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 76 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_EXIT
# 77 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 78 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 35
# 79 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 43 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 80 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeobject LOCALID_SIX_ISLAND_RIVAL
# 81 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 44 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 82 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 1
# 83 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 45 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 84 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
# 85 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 46 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 86 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
# 87 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 88 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 89 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 90 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 50 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 91 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_RivalApproach:
# 92 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 51 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 93 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 94 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 52 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 95 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 96 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 53 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 97 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 98 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 54 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 99 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 100 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 55 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 101 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 102 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 103 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 58 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 104 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_RivalExit:
# 105 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 59 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 106 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 107 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 60 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 108 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_4
# 109 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 61 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 110 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 111 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 62 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 112 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 113 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 114 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 65 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 115 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit:
# 116 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 66 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 117 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 118 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 67 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 119 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 120 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 68 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 121 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 122 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 123 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_Nurse::
# 124 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 72 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 125 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 126 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 73 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 127 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 128 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 74 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 129 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 130 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 75 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 131 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 132 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 133 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 134 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 135 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_Hiker::
# 136 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 80 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 137 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland, MSGBOX_NPC
# 138 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 139 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 140 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 141 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_OldMan::
# 142 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 85 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 143 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem, MSGBOX_NPC
# 144 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 145 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 146 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 147 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland::
# 148 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 89 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 149 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "For ten years, I've searched for\n"
# 150 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "RUINS.\p"
# 151 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "No, make that twenty years.\p"
# 152 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I get this feeling that there's\n"
# 153 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "something hidden on this island.$"
# 154 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 155 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem::
# 156 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 97 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 157 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You know of POKéMON that evolve\n"
# 158 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "only upon trading, yes?\p"
# 159 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "But did you know that there are\n"
# 160 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "still others?\p"
# 161 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Some POKéMON evolve only when\n"
# 162 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "traded while holding specific items.$"
# 163 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 164 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere::
# 165 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 106 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 166 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\n"
# 167 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "How's your POKéDEX filling up?\p"
# 168 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It looks like it's impossible to get\n"
# 169 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "all the POKéMON by hanging around\l"
# 170 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "just these parts.\p"
# 171 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Maybe there are POKéMON we don't\n"
# 172 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "know about somewhere far away…\p"
# 173 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "… … …  … … …  … … …\p"
# 174 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Well, if I can't do it, there's no\n"
# 175 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "way for you to get it done.\p"
# 176 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm not going to get all desperate\n"
# 177 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "over this.\p"
# 178 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'll keep collecting POKéMON at my\n"
# 179 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "own pace while I train them.\p"
# 180 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That's what I'll do.\n"
# 181 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So there's no point staying here.\l"
# 182 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I may as well leave for home.\p"
# 183 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That's that, then!\n"
# 184 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Smell ya later!$"
