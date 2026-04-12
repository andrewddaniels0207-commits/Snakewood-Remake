# 1 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 2 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 4 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 5 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 3 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 6 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 7 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 4 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 8 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 11 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 5 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition::
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp4
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Defeated_2
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated_1:
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Defeated_5
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated_4:
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_RIVAL
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Defeated_8
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated_7:
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Defeated_11
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated_10:
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated_2:
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated_1
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated_5:
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated_4
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated_8:
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated_7
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated_11:
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated_10
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_BIRCH
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_2
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_1:
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_5
# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_4:
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_2:
# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_1
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_5:
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_4
# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 352 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 353 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 354 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 356 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 358 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 359 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 360 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 361 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 362 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 363 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 365 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 366 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 367 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 369 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 370 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 371 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 373 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 374 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 375 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 376 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 377 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 378 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 379 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 380 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 381 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 382 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 383 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 384 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 385 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 386 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 387 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 388 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 389 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 390 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 391 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 392 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 393 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 394 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 395 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 396 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 397 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 398 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 399 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 400 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 401 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 402 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 403 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 404 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 405 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 406 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 407 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 408 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 409 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 410 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 411 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 412 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 413 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 414 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 415 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 416 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 417 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 418 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 419 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 420 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 421 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 422 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 423 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 424 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 425 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 426 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 427 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 428 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 429 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 430 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 431 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 432 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 433 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 434 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 435 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 436 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 437 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 438 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 439 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 440 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 441 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 442 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 443 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 444 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 445 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_IntroSpeech::
# 446 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 447 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: Welcome, {PLAYER}{KUN}.\p"
# 448 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That incident in SOOTOPOLIS CITY…\n"
# 449 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was superb work, putting an end\l"
# 450 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to that crisis all by yourself.\p"
# 451 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Oops!\p"
# 452 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It wouldn't be fair to say that you\n"
# 453 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "alone ended the crisis.\p"
# 454 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You overcame that difficult situation\n"
# 455 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "by working as one with your POKéMON.\p"
# 456 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "We TRAINERS raise POKéMON by giving\n"
# 457 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "them items and by teaching them new\l"
# 458 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "techniques for battle.\p"
# 459 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But we ourselves also learn many\n"
# 460 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "things from POKéMON.\p"
# 461 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And this is where your achievements\n"
# 462 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "are put to the test against what\l"
# 463 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "others like you have achieved.\p"
# 464 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now!\p"
# 465 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Who can most elegantly dance with\n"
# 466 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "their POKéMON in HOENN?\p"
# 467 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Show me right here and now!$"
# 468 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 469 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_Defeat::
# 470 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 471 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the CHAMPION, fall in defeat…\p"
# 472 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was wonderful work.\n"
# 473 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You were elegant, infuriatingly so.\l"
# 474 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And yet it was utterly glorious!\p"
# 475 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 476 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are a truly noble POKéMON\n"
# 477 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TRAINER!$"
# 478 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 479 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech::
# 480 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 481 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: The POKéMON you sent into\n"
# 482 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle…\p"
# 483 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "At times they danced like a spring\n"
# 484 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "breeze, and at times they struck\l"
# 485 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "like lightning.\p"
# 486 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It was with light, yet surefooted,\n"
# 487 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "elegance that you led your POKéMON.\p"
# 488 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Even I felt bedazzled by your\n"
# 489 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "masterful performance!\p"
# 490 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the glorious peak\n"
# 491 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of the POKéMON LEAGUE.\p"
# 492 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I now proclaim you to be the new\n"
# 493 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "HOENN region…$"
# 494 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 495 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice::
# 496 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 497 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 498 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 499 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION…$"
# 500 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 501 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver::
# 502 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 503 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Huh?\n"
# 504 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 505 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 506 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 507 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?$"
# 508 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 509 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice::
# 510 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 511 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}!\p"
# 512 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 513 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the CHAMPION?…$"
# 514 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 515 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon::
# 516 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 517 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}…\p"
# 518 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Are you trying to tell me…\n"
# 519 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You've beaten the CHAMPION?$"
# 520 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 521 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex::
# 522 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 523 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: See?\n"
# 524 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 525 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 526 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 527 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 528 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 529 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 530 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the PETALBURG GYM,\l"
# 531 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 532 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 533 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION!\p"
# 534 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 535 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your POKéDEX?\n"
# 536 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 537 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 538 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations::
# 539 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 540 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: Anyways,\n"
# 541 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 542 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 543 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 544 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe::
# 545 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 546 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 547 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 548 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new CHAMPION!\p"
# 549 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 550 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 551 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside::
# 552 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 553 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: I'm sorry, but…\p"
# 554 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 555 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 556 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 557 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 558 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 559 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations::
# 560 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 561 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Groan…\p"
# 562 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 563 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 564 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 565 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 566 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 567 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 568 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 569 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations::
# 570 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 382 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
# 571 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: Whaaaat?! … … … … …\n"
# 572 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 573 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 574 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 575 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
