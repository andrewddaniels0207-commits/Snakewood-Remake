PokemonLeague_ChampionsRoom_Frlg_MapScripts::
# 2 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_ChampionsRoom_OnWarp
# 3 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_ChampionsRoom_OnResume
# 4 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_EventScript_EnterRoom
	.2byte 0


PokemonLeague_ChampionsRoom_OnResume::
# 10 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 11 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 12 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq PokemonLeague_ChampionsRoom_OnResume_2
PokemonLeague_ChampionsRoom_OnResume_1:
# 15 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq PokemonLeague_ChampionsRoom_OnResume_5
PokemonLeague_ChampionsRoom_OnResume_4:
# 18 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq PokemonLeague_ChampionsRoom_OnResume_8
PokemonLeague_ChampionsRoom_OnResume_7:
	end

PokemonLeague_ChampionsRoom_OnResume_2:
# 13 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerSquirtle
	goto PokemonLeague_ChampionsRoom_OnResume_1

PokemonLeague_ChampionsRoom_OnResume_5:
# 16 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerBulbasaur
	goto PokemonLeague_ChampionsRoom_OnResume_4

PokemonLeague_ChampionsRoom_OnResume_8:
# 19 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerCharmander
	goto PokemonLeague_ChampionsRoom_OnResume_7


PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerSquirtle::
# 25 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 26 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
	return


PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerBulbasaur::
# 31 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 32 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
	return


PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerCharmander::
# 37 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 38 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
	return


PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger::
# 43 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


# 47 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 48 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnWarp:
# 49 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_EventScript_TurnPlayerNorth
# 50 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.2byte 0

PokemonLeague_ChampionsRoom_EventScript_TurnPlayerNorth::
# 55 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


PokemonLeague_ChampionsRoom_EventScript_EnterRoom::
# 60 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	lockall
# 61 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 62 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 63 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerEnter
# 64 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 20
# 66 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_2
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_1:
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_4:
# 72 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 73 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 74 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	savebgm MUS_VICTORY_GYM_LEADER
# 75 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_8
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_7:
# 78 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_11
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_10:
# 81 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_4
# 82 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 83 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_CHAMP
# 84 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_4
# 85 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_PostBattle
# 86 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	playbgm MUS_RG_SLOW_PALLET, 0
# 87 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_PROF_OAK
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayer
# 89 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 90 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerWatchOakEnter
# 91 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_KANTO_CHAMPIONS_ROOM_RIVAL, PokemonLeague_ChampionsRoom_Movement_RivalWatchOakEnter
# 92 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, PokemonLeague_ChampionsRoom_Movement_OakEnter
# 93 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 94 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 25
# 95 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetStarterPokemon
# 96 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_RESULT
# 97 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakCongratulations
# 98 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, Common_Movement_WalkInPlaceFasterRight
# 99 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_KANTO_CHAMPIONS_ROOM_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 100 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 101 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival
# 102 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 103 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 104 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 105 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 20
# 106 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe
# 107 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 108 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 13
# 109 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, PokemonLeague_ChampionsRoom_Movement_OakExit
# 110 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerExit
# 111 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 112 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 113 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	warp MAP_POKEMON_LEAGUE_HALL_OF_FAME, 5, 12
# 114 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitstate
# 115 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	releaseall
	end

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_2:
# 67 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_Intro
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_1

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5:
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_RematchIntro
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_4

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_8:
# 76 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_Battle
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_7

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_11:
# 79 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_Rematch
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_10


PokemonLeague_ChampionsRoom_EventScript_QuestLogEnd::
# 120 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 121 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	releaseall
	end


PokemonLeague_ChampionsRoom_EventScript_Battle::
# 126 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Battle_2
PokemonLeague_ChampionsRoom_EventScript_Battle_1:
# 129 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Battle_5
PokemonLeague_ChampionsRoom_EventScript_Battle_4:
# 132 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Battle_8
PokemonLeague_ChampionsRoom_EventScript_Battle_7:
	return

PokemonLeague_ChampionsRoom_EventScript_Battle_2:
# 127 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_BattleSquirtle
	goto PokemonLeague_ChampionsRoom_EventScript_Battle_1

PokemonLeague_ChampionsRoom_EventScript_Battle_5:
# 130 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_BattleBulbasaur
	goto PokemonLeague_ChampionsRoom_EventScript_Battle_4

PokemonLeague_ChampionsRoom_EventScript_Battle_8:
# 133 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_BattleCharmander
	goto PokemonLeague_ChampionsRoom_EventScript_Battle_7


PokemonLeague_ChampionsRoom_EventScript_Rematch::
# 139 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Rematch_2
PokemonLeague_ChampionsRoom_EventScript_Rematch_1:
# 142 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Rematch_5
PokemonLeague_ChampionsRoom_EventScript_Rematch_4:
# 145 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq PokemonLeague_ChampionsRoom_EventScript_Rematch_8
PokemonLeague_ChampionsRoom_EventScript_Rematch_7:
	return

PokemonLeague_ChampionsRoom_EventScript_Rematch_2:
# 140 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_RematchSquirtle
	goto PokemonLeague_ChampionsRoom_EventScript_Rematch_1

PokemonLeague_ChampionsRoom_EventScript_Rematch_5:
# 143 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_RematchBulbasaur
	goto PokemonLeague_ChampionsRoom_EventScript_Rematch_4

PokemonLeague_ChampionsRoom_EventScript_Rematch_8:
# 146 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_RematchCharmander
	goto PokemonLeague_ChampionsRoom_EventScript_Rematch_7


PokemonLeague_ChampionsRoom_EventScript_Intro::
# 152 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_Intro
	return


PokemonLeague_ChampionsRoom_EventScript_RematchIntro::
# 157 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_RematchIntro
	return


PokemonLeague_ChampionsRoom_EventScript_BattleSquirtle::
# 162 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat
	return


PokemonLeague_ChampionsRoom_EventScript_BattleBulbasaur::
# 167 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat
	return


PokemonLeague_ChampionsRoom_EventScript_BattleCharmander::
# 172 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat
	return


PokemonLeague_ChampionsRoom_EventScript_RematchSquirtle::
# 177 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat
	return


PokemonLeague_ChampionsRoom_EventScript_RematchBulbasaur::
# 182 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat
	return


PokemonLeague_ChampionsRoom_EventScript_RematchCharmander::
# 187 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat
	return


# 191 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerEnter:
# 192 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 193 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 194 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 195 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 196 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 197 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 198 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 199 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 200 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 201 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 202 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end

# 205 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerExit:
# 206 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 207 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_left
# 208 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 209 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 210 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 211 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_right
# 212 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 213 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 214 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 215 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 216 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 217 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	set_invisible
# 218 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end

# 221 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerWatchOakEnter:
# 222 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 223 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_down
# 224 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 225 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 226 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 227 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 228 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 229 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 230 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 231 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_left
# 232 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end

# 235 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_OakEnter:
# 236 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 237 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 238 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 239 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 240 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 241 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 242 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 243 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 245 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 246 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_down
# 247 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 248 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end

# 251 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_OakExit:
# 252 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 253 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 254 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_right
# 255 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 256 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 257 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 258 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 259 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 260 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	set_invisible
# 261 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end

# 264 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_RivalWatchOakEnter:
# 265 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 266 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 267 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 268 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 269 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 270 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 271 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 272 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 273 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 274 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_left
# 275 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end

PokemonLeague_ChampionsRoom_Text_Intro::
# 278 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
	.string "I was looking forward to seeing\n"
	.string "you, {PLAYER}.\p"
	.string "My rival should be strong to keep\n"
	.string "me sharp.\p"
	.string "While working on my POKéDEX, I\n"
	.string "looked all over for POKéMON.\p"
	.string "Not only that, I assembled teams\n"
	.string "that would beat any POKéMON type.\p"
	.string "And now…\p"
	.string "I'm the POKéMON LEAGUE CHAMPION!\p"
	.string "{PLAYER}!\n"
	.string "Do you know what that means?\p"
	.string "I'll tell you.\p"
	.string "I am the most powerful TRAINER in\n"
	.string "the world!$"

PokemonLeague_ChampionsRoom_Text_RematchIntro::
# 297 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
	.string "You came back, {PLAYER}!\n"
	.string "Hahah, that is so great!\p"
	.string "My rival should be strong to keep\n"
	.string "me sharp.\p"
	.string "While working on my POKéDEX, I\n"
	.string "looked all over for POKéMON.\p"
	.string "Not only that, I assembled teams\n"
	.string "that would beat any POKéMON type.\p"
	.string "And now…\p"
	.string "I'm the POKéMON LEAGUE CHAMPION!\p"
	.string "{PLAYER}!\n"
	.string "Do you know what that means?\p"
	.string "I'll tell you.\p"
	.string "I am the most powerful TRAINER in\n"
	.string "the world!$"

PokemonLeague_ChampionsRoom_Text_Defeat::
# 316 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "NO!\n"
	.string "That can't be!\l"
	.string "You beat me at my best!\p"
	.string "After all that work to become\n"
	.string "the LEAGUE CHAMP?\p"
	.string "My reign is over already?\n"
	.string "It's not fair!$"

PokemonLeague_ChampionsRoom_Text_Victory::
# 326 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "はーはッ！\n"
	.string "かった！　かった！　かった！\p"
	.string "{PLAYER}に　まける　ような\n"
	.string "おれさま　では　なーい！\p"
	.string "ま！　ポケモンの\n"
	.string "てんさい　{RIVAL}さま　あいてに\l"
	.string "ここまで　よく　がんばった！\p"
	.string "ほめて　つかわす！\n"
	.string "はーッ！　はーはッはッ！$"

PokemonLeague_ChampionsRoom_Text_PostBattle::
# 338 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Why?\n"
	.string "Why did I lose?\p"
	.string "I never made any mistakes raising\n"
	.string "my POKéMON…\p"
	.string "Darn it! You're the new POKéMON\n"
	.string "LEAGUE CHAMPION!\p"
	.string "Although I don't like to admit it…$"

PokemonLeague_ChampionsRoom_Text_OakPlayer::
# 348 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {PLAYER}!$"

PokemonLeague_ChampionsRoom_Text_OakCongratulations::
# 352 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: So, you've won!\n"
	.string "Sincerely, congratulations!\p"
	.string "You're the new POKéMON LEAGUE\n"
	.string "CHAMPION!\p"
	.string "You've grown up so much since you\n"
	.string "first left with {STR_VAR_1} to work\l"
	.string "on the POKéDEX.\p"
	.string "{PLAYER}, you have come of age!$"

PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival::
# 363 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {RIVAL}…\n"
	.string "I'm disappointed in you.\p"
	.string "I came when I heard you'd beaten\n"
	.string "the ELITE FOUR.\p"
	.string "But, when I got here, you had\n"
	.string "already lost!\p"
	.string "{RIVAL}, do you understand why\n"
	.string "you lost?\p"
	.string "You have forgotten to treat your\n"
	.string "POKéMON with love and trust.\p"
	.string "Without them, you will never\n"
	.string "become a CHAMP again!$"

PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe::
# 378 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {PLAYER}.\p"
	.string "You understand that your victory\n"
	.string "was not just your own doing.\p"
	.string "The bond you share with your\n"
	.string "POKéMON is marvelous.\p"
	.string "{PLAYER}!\n"
	.string "Come with me!$"
