# 1 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 2 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 4 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_ChampionsRoom_OnWarp
# 5 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 3 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 6 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_ChampionsRoom_OnResume
# 7 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 4 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 8 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.byte 0
# 10 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 11 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 5 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 13 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_EventScript_EnterRoom
# 14 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.2byte 0
# 15 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 16 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 17 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnResume::
# 18 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 10 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 19 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 20 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 11 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 21 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 22 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 12 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 23 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
# 24 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_ChampionsRoom_OnResume_2
# 25 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnResume_1:
# 26 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 15 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 27 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
# 28 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_ChampionsRoom_OnResume_5
# 29 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnResume_4:
# 30 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 18 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 31 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
# 32 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_ChampionsRoom_OnResume_8
# 33 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnResume_7:
# 34 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	end
# 35 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnResume_2:
# 37 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 13 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 38 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerSquirtle
# 39 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_OnResume_1
# 40 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 41 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnResume_5:
# 42 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 16 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 43 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerBulbasaur
# 44 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_OnResume_4
# 45 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 46 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnResume_8:
# 47 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 19 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 48 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerCharmander
# 49 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_OnResume_7
# 50 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 51 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 52 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerSquirtle::
# 53 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 25 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 54 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 55 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 26 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 56 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 57 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 58 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 59 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 60 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerBulbasaur::
# 61 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 31 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 62 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 63 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 32 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 64 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 65 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 66 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 67 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 68 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerCharmander::
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 37 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 71 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 38 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 72 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 73 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 74 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 75 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 76 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger::
# 77 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 43 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 78 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 79 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 80 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 81 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 82 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 47 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 83 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 84 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 48 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 85 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnWarp:
# 86 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 49 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 87 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_EventScript_TurnPlayerNorth
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 50 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 89 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.2byte 0
# 90 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 91 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_TurnPlayerNorth::
# 92 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 55 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 93 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 94 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	end
# 95 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 96 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 97 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom::
# 98 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 60 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 99 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	lockall
# 100 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 61 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 101 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 102 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 62 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 103 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 104 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 63 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 105 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerEnter
# 106 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 64 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 107 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 108 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 65 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 109 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 20
# 110 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 66 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 111 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_2
# 112 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_1:
# 113 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 114 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5
# 115 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_4:
# 116 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 72 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 117 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 118 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 73 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 119 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 120 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 74 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 121 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	savebgm MUS_VICTORY_GYM_LEADER
# 122 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 75 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 123 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_8
# 124 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_7:
# 125 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 78 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 126 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_11
# 127 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_10:
# 128 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 81 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 129 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_4
# 130 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 82 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 131 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 132 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 83 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 133 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_CHAMP
# 134 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 84 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 135 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_4
# 136 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 85 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 137 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_PostBattle
# 138 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 86 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 139 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	playbgm MUS_RG_SLOW_PALLET, 0
# 140 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 87 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 141 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_PROF_OAK
# 142 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 143 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayer
# 144 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 89 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 145 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 146 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 90 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 147 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerWatchOakEnter
# 148 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 91 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 149 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_KANTO_CHAMPIONS_ROOM_RIVAL, PokemonLeague_ChampionsRoom_Movement_RivalWatchOakEnter
# 150 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 92 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 151 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, PokemonLeague_ChampionsRoom_Movement_OakEnter
# 152 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 93 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 153 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 154 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 94 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 155 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 25
# 156 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 95 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 157 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetStarterPokemon
# 158 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 96 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 159 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_RESULT
# 160 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 97 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 161 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakCongratulations
# 162 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 98 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 163 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, Common_Movement_WalkInPlaceFasterRight
# 164 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 99 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 165 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_KANTO_CHAMPIONS_ROOM_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 166 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 100 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 167 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 168 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 101 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 169 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival
# 170 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 102 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 171 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 172 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 103 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 173 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 174 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 104 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 175 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 176 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 105 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 177 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 20
# 178 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 106 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 179 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe
# 180 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 107 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 181 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 182 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 108 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 183 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 13
# 184 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 109 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 185 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, PokemonLeague_ChampionsRoom_Movement_OakExit
# 186 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 110 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 187 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerExit
# 188 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 111 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 189 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 190 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 112 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 191 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 192 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 113 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 193 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	warp MAP_POKEMON_LEAGUE_HALL_OF_FAME, 5, 12
# 194 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 114 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 195 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitstate
# 196 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 115 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 197 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	releaseall
# 198 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	end
# 199 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 200 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_2:
# 201 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 67 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 202 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_Intro
# 203 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_1
# 204 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 205 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5:
# 206 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 207 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_RematchIntro
# 208 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_4
# 209 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 210 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_8:
# 211 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 76 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 212 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_Battle
# 213 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_7
# 214 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 215 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_11:
# 216 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 79 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 217 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_Rematch
# 218 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_10
# 219 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 220 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 221 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_QuestLogEnd::
# 222 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 120 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 223 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 224 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 121 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 225 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	releaseall
# 226 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	end
# 227 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 228 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 229 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Battle::
# 230 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 126 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 231 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
# 232 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Battle_2
# 233 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Battle_1:
# 234 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 129 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 235 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
# 236 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Battle_5
# 237 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Battle_4:
# 238 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 132 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 239 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
# 240 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Battle_8
# 241 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Battle_7:
# 242 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 243 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 244 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Battle_2:
# 245 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 127 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 246 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_BattleSquirtle
# 247 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_EventScript_Battle_1
# 248 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 249 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Battle_5:
# 250 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 130 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 251 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_BattleBulbasaur
# 252 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_EventScript_Battle_4
# 253 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 254 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Battle_8:
# 255 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 133 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 256 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_BattleCharmander
# 257 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_EventScript_Battle_7
# 258 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 259 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 260 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Rematch::
# 261 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 139 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 262 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
# 263 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Rematch_2
# 264 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Rematch_1:
# 265 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 142 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 266 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
# 267 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Rematch_5
# 268 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Rematch_4:
# 269 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 145 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 270 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
# 271 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Rematch_8
# 272 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Rematch_7:
# 273 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 274 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 275 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Rematch_2:
# 276 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 140 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 277 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_RematchSquirtle
# 278 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_EventScript_Rematch_1
# 279 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 280 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Rematch_5:
# 281 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 143 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 282 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_RematchBulbasaur
# 283 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_EventScript_Rematch_4
# 284 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 285 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Rematch_8:
# 286 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 146 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 287 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_RematchCharmander
# 288 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto PokemonLeague_ChampionsRoom_EventScript_Rematch_7
# 289 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 290 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 291 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Intro::
# 292 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 152 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 293 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_Intro
# 294 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 295 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 296 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 297 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchIntro::
# 298 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 157 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 299 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_RematchIntro
# 300 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 301 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 302 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 303 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleSquirtle::
# 304 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 162 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 305 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat
# 306 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 307 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 308 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 309 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleBulbasaur::
# 310 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 167 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 311 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat
# 312 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 313 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 314 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 315 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleCharmander::
# 316 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 172 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 317 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat
# 318 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 319 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 320 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 321 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchSquirtle::
# 322 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 177 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 323 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat
# 324 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 325 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 326 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 327 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchBulbasaur::
# 328 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 182 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 329 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat
# 330 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 331 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 332 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 333 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchCharmander::
# 334 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 187 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 335 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat
# 336 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 337 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 338 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 339 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 191 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 340 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerEnter:
# 341 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 192 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 342 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 343 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 193 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 344 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 345 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 194 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 346 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 347 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 195 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 348 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 349 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 196 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 350 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 351 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 197 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 352 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 353 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 198 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 354 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 355 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 199 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 356 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 357 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 200 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 358 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 359 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 201 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 360 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 361 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 202 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 362 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 363 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 364 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 205 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 365 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerExit:
# 366 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 206 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 367 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 368 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 207 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 369 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_left
# 370 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 208 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 371 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 372 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 209 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 373 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 374 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 210 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 375 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 376 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 211 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 377 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_right
# 378 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 212 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 379 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 380 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 213 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 381 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 382 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 214 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 383 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 384 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 215 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 385 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 386 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 216 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 387 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 388 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 217 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 389 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	set_invisible
# 390 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 218 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 391 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 392 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 393 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 221 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 394 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerWatchOakEnter:
# 395 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 222 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 396 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 397 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 223 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 398 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_down
# 399 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 224 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 400 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 401 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 225 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 402 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 403 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 226 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 404 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 405 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 227 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 406 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 407 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 228 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 408 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 409 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 229 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 410 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 411 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 230 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 412 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 413 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 231 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 414 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_left
# 415 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 232 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 416 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 417 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 418 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 235 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 419 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_OakEnter:
# 420 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 236 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 421 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 422 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 237 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 423 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 424 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 238 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 425 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 426 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 239 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 427 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 428 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 240 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 429 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 430 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 241 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 431 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 432 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 242 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 433 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 434 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 243 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 435 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_left
# 436 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 244 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 437 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 438 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 245 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 439 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 440 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 246 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 441 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_down
# 442 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 247 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 443 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 444 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 248 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 445 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 446 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 447 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 251 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 448 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_OakExit:
# 449 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 252 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 450 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 451 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 253 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 452 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 453 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 254 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 454 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_right
# 455 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 255 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 456 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 457 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 256 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 458 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 459 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 257 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 460 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 461 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 258 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 462 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 463 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 259 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 464 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 465 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 260 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 466 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	set_invisible
# 467 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 261 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 468 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 469 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 470 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 264 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 471 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_RivalWatchOakEnter:
# 472 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 265 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 473 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 474 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 266 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 475 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 476 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 267 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 477 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 478 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 268 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 479 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 480 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 269 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 481 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 482 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 270 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 483 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 484 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 271 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 485 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 486 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 272 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 487 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 488 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 273 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 489 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 490 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 274 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 491 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_left
# 492 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 275 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 493 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 494 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 495 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_Intro::
# 496 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 278 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 497 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
# 498 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I was looking forward to seeing\n"
# 499 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "you, {PLAYER}.\p"
# 500 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "My rival should be strong to keep\n"
# 501 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "me sharp.\p"
# 502 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "While working on my POKéDEX, I\n"
# 503 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "looked all over for POKéMON.\p"
# 504 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Not only that, I assembled teams\n"
# 505 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "that would beat any POKéMON type.\p"
# 506 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "And now…\p"
# 507 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I'm the POKéMON LEAGUE CHAMPION!\p"
# 508 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
# 509 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Do you know what that means?\p"
# 510 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I'll tell you.\p"
# 511 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I am the most powerful TRAINER in\n"
# 512 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "the world!$"
# 513 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 514 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_RematchIntro::
# 515 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 297 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 516 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
# 517 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You came back, {PLAYER}!\n"
# 518 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Hahah, that is so great!\p"
# 519 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "My rival should be strong to keep\n"
# 520 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "me sharp.\p"
# 521 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "While working on my POKéDEX, I\n"
# 522 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "looked all over for POKéMON.\p"
# 523 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Not only that, I assembled teams\n"
# 524 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "that would beat any POKéMON type.\p"
# 525 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "And now…\p"
# 526 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I'm the POKéMON LEAGUE CHAMPION!\p"
# 527 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
# 528 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Do you know what that means?\p"
# 529 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I'll tell you.\p"
# 530 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I am the most powerful TRAINER in\n"
# 531 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "the world!$"
# 532 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 533 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_Defeat::
# 534 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 316 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 535 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "NO!\n"
# 536 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "That can't be!\l"
# 537 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You beat me at my best!\p"
# 538 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "After all that work to become\n"
# 539 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "the LEAGUE CHAMP?\p"
# 540 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "My reign is over already?\n"
# 541 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "It's not fair!$"
# 542 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 543 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_Victory::
# 544 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 326 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 545 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "はーはッ！\n"
# 546 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "かった！　かった！　かった！\p"
# 547 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{PLAYER}に　まける　ような\n"
# 548 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "おれさま　では　なーい！\p"
# 549 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "ま！　ポケモンの\n"
# 550 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "てんさい　{RIVAL}さま　あいてに\l"
# 551 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "ここまで　よく　がんばった！\p"
# 552 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "ほめて　つかわす！\n"
# 553 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "はーッ！　はーはッはッ！$"
# 554 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 555 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_PostBattle::
# 556 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 338 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 557 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Why?\n"
# 558 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Why did I lose?\p"
# 559 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I never made any mistakes raising\n"
# 560 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "my POKéMON…\p"
# 561 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Darn it! You're the new POKéMON\n"
# 562 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "LEAGUE CHAMPION!\p"
# 563 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Although I don't like to admit it…$"
# 564 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 565 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_OakPlayer::
# 566 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 348 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 567 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {PLAYER}!$"
# 568 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 569 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_OakCongratulations::
# 570 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 352 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 571 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: So, you've won!\n"
# 572 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Sincerely, congratulations!\p"
# 573 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You're the new POKéMON LEAGUE\n"
# 574 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "CHAMPION!\p"
# 575 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You've grown up so much since you\n"
# 576 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "first left with {STR_VAR_1} to work\l"
# 577 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "on the POKéDEX.\p"
# 578 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{PLAYER}, you have come of age!$"
# 579 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 580 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival::
# 581 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 363 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 582 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {RIVAL}…\n"
# 583 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I'm disappointed in you.\p"
# 584 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I came when I heard you'd beaten\n"
# 585 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "the ELITE FOUR.\p"
# 586 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "But, when I got here, you had\n"
# 587 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "already lost!\p"
# 588 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{RIVAL}, do you understand why\n"
# 589 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "you lost?\p"
# 590 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You have forgotten to treat your\n"
# 591 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "POKéMON with love and trust.\p"
# 592 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Without them, you will never\n"
# 593 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "become a CHAMP again!$"
# 594 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 595 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe::
# 596 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 378 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
# 597 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {PLAYER}.\p"
# 598 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You understand that your victory\n"
# 599 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "was not just your own doing.\p"
# 600 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "The bond you share with your\n"
# 601 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "POKéMON is marvelous.\p"
# 602 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
# 603 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Come with me!$"
