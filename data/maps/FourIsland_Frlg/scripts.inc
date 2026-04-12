# 1 "data/maps/FourIsland_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Frlg_MapScripts::
# 3 "data/maps/FourIsland_Frlg/scripts.pory"
# 2 "data/maps/FourIsland_Frlg/scripts.pory"
# 4 "data/maps/FourIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_OnTransition
# 5 "data/maps/FourIsland_Frlg/scripts.pory"
# 3 "data/maps/FourIsland_Frlg/scripts.pory"
# 6 "data/maps/FourIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/FourIsland_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/FourIsland_Frlg/scripts.pory"

# 9 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/FourIsland_Frlg/scripts.pory"
# 4 "data/maps/FourIsland_Frlg/scripts.pory"
# 11 "data/maps/FourIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_RivalScene
# 12 "data/maps/FourIsland_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/FourIsland_Frlg/scripts.pory"

# 14 "data/maps/FourIsland_Frlg/scripts.pory"

# 15 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_OnTransition::
# 16 "data/maps/FourIsland_Frlg/scripts.pory"
# 9 "data/maps/FourIsland_Frlg/scripts.pory"
# 17 "data/maps/FourIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FOUR_ISLAND
# 18 "data/maps/FourIsland_Frlg/scripts.pory"
# 10 "data/maps/FourIsland_Frlg/scripts.pory"
# 19 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_FOUR_ISLAND, 0
# 20 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_eq FourIsland_OnTransition_2
# 21 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_OnTransition_1:
# 22 "data/maps/FourIsland_Frlg/scripts.pory"
# 13 "data/maps/FourIsland_Frlg/scripts.pory"
# 23 "data/maps/FourIsland_Frlg/scripts.pory"
	call FourIsland_EventScript_TrySetDayCareManPos
# 24 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 25 "data/maps/FourIsland_Frlg/scripts.pory"

# 26 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_OnTransition_2:
# 27 "data/maps/FourIsland_Frlg/scripts.pory"
# 11 "data/maps/FourIsland_Frlg/scripts.pory"
# 28 "data/maps/FourIsland_Frlg/scripts.pory"
	call FourIsland_EventScript_ShowRival
# 29 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_OnTransition_1
# 30 "data/maps/FourIsland_Frlg/scripts.pory"

# 31 "data/maps/FourIsland_Frlg/scripts.pory"

# 32 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_ShowRival::
# 33 "data/maps/FourIsland_Frlg/scripts.pory"
# 18 "data/maps/FourIsland_Frlg/scripts.pory"
# 34 "data/maps/FourIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FOUR_ISLAND_RIVAL
# 35 "data/maps/FourIsland_Frlg/scripts.pory"
	return
# 36 "data/maps/FourIsland_Frlg/scripts.pory"

# 37 "data/maps/FourIsland_Frlg/scripts.pory"

# 38 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_TrySetDayCareManPos::
# 39 "data/maps/FourIsland_Frlg/scripts.pory"
# 23 "data/maps/FourIsland_Frlg/scripts.pory"
# 40 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, FourIsland_EventScript_TrySetDayCareManPos_2
# 41 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_TrySetDayCareManPos_1:
# 42 "data/maps/FourIsland_Frlg/scripts.pory"
# 26 "data/maps/FourIsland_Frlg/scripts.pory"
# 43 "data/maps/FourIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_FOUR_ISLAND_DAYCARE_MAN, 16, 14
# 44 "data/maps/FourIsland_Frlg/scripts.pory"
	return
# 45 "data/maps/FourIsland_Frlg/scripts.pory"

# 46 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_TrySetDayCareManPos_2:
# 47 "data/maps/FourIsland_Frlg/scripts.pory"
# 24 "data/maps/FourIsland_Frlg/scripts.pory"
# 48 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_EndSetDayCareManPos
# 49 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_TrySetDayCareManPos_1
# 50 "data/maps/FourIsland_Frlg/scripts.pory"

# 51 "data/maps/FourIsland_Frlg/scripts.pory"

# 52 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_EndSetDayCareManPos::
# 53 "data/maps/FourIsland_Frlg/scripts.pory"
	return
# 54 "data/maps/FourIsland_Frlg/scripts.pory"

# 55 "data/maps/FourIsland_Frlg/scripts.pory"

# 56 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_RivalScene::
# 57 "data/maps/FourIsland_Frlg/scripts.pory"
# 34 "data/maps/FourIsland_Frlg/scripts.pory"
# 58 "data/maps/FourIsland_Frlg/scripts.pory"
	lockall
# 59 "data/maps/FourIsland_Frlg/scripts.pory"
# 35 "data/maps/FourIsland_Frlg/scripts.pory"
# 60 "data/maps/FourIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 61 "data/maps/FourIsland_Frlg/scripts.pory"
# 36 "data/maps/FourIsland_Frlg/scripts.pory"
# 62 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 63 "data/maps/FourIsland_Frlg/scripts.pory"
# 37 "data/maps/FourIsland_Frlg/scripts.pory"
# 64 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/FourIsland_Frlg/scripts.pory"
# 38 "data/maps/FourIsland_Frlg/scripts.pory"
# 66 "data/maps/FourIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 67 "data/maps/FourIsland_Frlg/scripts.pory"
# 39 "data/maps/FourIsland_Frlg/scripts.pory"
# 68 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_ExclamationMark
# 69 "data/maps/FourIsland_Frlg/scripts.pory"
# 40 "data/maps/FourIsland_Frlg/scripts.pory"
# 70 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 71 "data/maps/FourIsland_Frlg/scripts.pory"
# 41 "data/maps/FourIsland_Frlg/scripts.pory"
# 72 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_Delay48
# 73 "data/maps/FourIsland_Frlg/scripts.pory"
# 42 "data/maps/FourIsland_Frlg/scripts.pory"
# 74 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 75 "data/maps/FourIsland_Frlg/scripts.pory"
# 43 "data/maps/FourIsland_Frlg/scripts.pory"
# 76 "data/maps/FourIsland_Frlg/scripts.pory"
	delay 25
# 77 "data/maps/FourIsland_Frlg/scripts.pory"
# 44 "data/maps/FourIsland_Frlg/scripts.pory"
# 78 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalApproach
# 79 "data/maps/FourIsland_Frlg/scripts.pory"
# 45 "data/maps/FourIsland_Frlg/scripts.pory"
# 80 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 81 "data/maps/FourIsland_Frlg/scripts.pory"
# 46 "data/maps/FourIsland_Frlg/scripts.pory"
# 82 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_RivalAlreadyGotEggBeSmellingYa
# 83 "data/maps/FourIsland_Frlg/scripts.pory"
# 47 "data/maps/FourIsland_Frlg/scripts.pory"
# 84 "data/maps/FourIsland_Frlg/scripts.pory"
	closemessage
# 85 "data/maps/FourIsland_Frlg/scripts.pory"
# 48 "data/maps/FourIsland_Frlg/scripts.pory"
# 86 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_Movement_PlayerWatchRivalExit
# 87 "data/maps/FourIsland_Frlg/scripts.pory"
# 49 "data/maps/FourIsland_Frlg/scripts.pory"
# 88 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalExit
# 89 "data/maps/FourIsland_Frlg/scripts.pory"
# 50 "data/maps/FourIsland_Frlg/scripts.pory"
# 90 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 91 "data/maps/FourIsland_Frlg/scripts.pory"
# 51 "data/maps/FourIsland_Frlg/scripts.pory"
# 92 "data/maps/FourIsland_Frlg/scripts.pory"
	fadedefaultbgm
# 93 "data/maps/FourIsland_Frlg/scripts.pory"
# 52 "data/maps/FourIsland_Frlg/scripts.pory"
# 94 "data/maps/FourIsland_Frlg/scripts.pory"
	playse SE_EXIT
# 95 "data/maps/FourIsland_Frlg/scripts.pory"
# 53 "data/maps/FourIsland_Frlg/scripts.pory"
# 96 "data/maps/FourIsland_Frlg/scripts.pory"
	delay 35
# 97 "data/maps/FourIsland_Frlg/scripts.pory"
# 54 "data/maps/FourIsland_Frlg/scripts.pory"
# 98 "data/maps/FourIsland_Frlg/scripts.pory"
	removeobject LOCALID_FOUR_ISLAND_RIVAL
# 99 "data/maps/FourIsland_Frlg/scripts.pory"
# 55 "data/maps/FourIsland_Frlg/scripts.pory"
# 100 "data/maps/FourIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
# 101 "data/maps/FourIsland_Frlg/scripts.pory"
# 56 "data/maps/FourIsland_Frlg/scripts.pory"
# 102 "data/maps/FourIsland_Frlg/scripts.pory"
	releaseall
# 103 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 104 "data/maps/FourIsland_Frlg/scripts.pory"

# 105 "data/maps/FourIsland_Frlg/scripts.pory"

# 106 "data/maps/FourIsland_Frlg/scripts.pory"
# 60 "data/maps/FourIsland_Frlg/scripts.pory"
# 107 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Movement_RivalApproach:
# 108 "data/maps/FourIsland_Frlg/scripts.pory"
# 61 "data/maps/FourIsland_Frlg/scripts.pory"
# 109 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_right
# 110 "data/maps/FourIsland_Frlg/scripts.pory"
# 62 "data/maps/FourIsland_Frlg/scripts.pory"
# 111 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_right
# 112 "data/maps/FourIsland_Frlg/scripts.pory"
# 63 "data/maps/FourIsland_Frlg/scripts.pory"
# 113 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_down
# 114 "data/maps/FourIsland_Frlg/scripts.pory"
# 64 "data/maps/FourIsland_Frlg/scripts.pory"
# 115 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_down
# 116 "data/maps/FourIsland_Frlg/scripts.pory"
# 65 "data/maps/FourIsland_Frlg/scripts.pory"
# 117 "data/maps/FourIsland_Frlg/scripts.pory"
	step_end
# 118 "data/maps/FourIsland_Frlg/scripts.pory"

# 119 "data/maps/FourIsland_Frlg/scripts.pory"
# 68 "data/maps/FourIsland_Frlg/scripts.pory"
# 120 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Movement_RivalExit:
# 121 "data/maps/FourIsland_Frlg/scripts.pory"
# 69 "data/maps/FourIsland_Frlg/scripts.pory"
# 122 "data/maps/FourIsland_Frlg/scripts.pory"
	delay_16
# 123 "data/maps/FourIsland_Frlg/scripts.pory"
# 70 "data/maps/FourIsland_Frlg/scripts.pory"
# 124 "data/maps/FourIsland_Frlg/scripts.pory"
	delay_4
# 125 "data/maps/FourIsland_Frlg/scripts.pory"
# 71 "data/maps/FourIsland_Frlg/scripts.pory"
# 126 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_down
# 127 "data/maps/FourIsland_Frlg/scripts.pory"
# 72 "data/maps/FourIsland_Frlg/scripts.pory"
# 128 "data/maps/FourIsland_Frlg/scripts.pory"
	step_end
# 129 "data/maps/FourIsland_Frlg/scripts.pory"

# 130 "data/maps/FourIsland_Frlg/scripts.pory"
# 75 "data/maps/FourIsland_Frlg/scripts.pory"
# 131 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Movement_PlayerWatchRivalExit:
# 132 "data/maps/FourIsland_Frlg/scripts.pory"
# 76 "data/maps/FourIsland_Frlg/scripts.pory"
# 133 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_left
# 134 "data/maps/FourIsland_Frlg/scripts.pory"
# 77 "data/maps/FourIsland_Frlg/scripts.pory"
# 135 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 136 "data/maps/FourIsland_Frlg/scripts.pory"
# 78 "data/maps/FourIsland_Frlg/scripts.pory"
# 137 "data/maps/FourIsland_Frlg/scripts.pory"
	step_end
# 138 "data/maps/FourIsland_Frlg/scripts.pory"

# 139 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareMan::
# 140 "data/maps/FourIsland_Frlg/scripts.pory"
# 82 "data/maps/FourIsland_Frlg/scripts.pory"
# 141 "data/maps/FourIsland_Frlg/scripts.pory"
	lock
# 142 "data/maps/FourIsland_Frlg/scripts.pory"
# 83 "data/maps/FourIsland_Frlg/scripts.pory"
# 143 "data/maps/FourIsland_Frlg/scripts.pory"
	faceplayer
# 144 "data/maps/FourIsland_Frlg/scripts.pory"
# 84 "data/maps/FourIsland_Frlg/scripts.pory"
# 145 "data/maps/FourIsland_Frlg/scripts.pory"
	special GetDaycareMonNicknames
# 146 "data/maps/FourIsland_Frlg/scripts.pory"
# 85 "data/maps/FourIsland_Frlg/scripts.pory"
# 147 "data/maps/FourIsland_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 148 "data/maps/FourIsland_Frlg/scripts.pory"
# 86 "data/maps/FourIsland_Frlg/scripts.pory"
# 149 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 150 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_eq FourIsland_EventScript_DaycareMan_2
# 151 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareMan_1:
# 152 "data/maps/FourIsland_Frlg/scripts.pory"
# 89 "data/maps/FourIsland_Frlg/scripts.pory"
# 153 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 154 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_eq FourIsland_EventScript_DaycareMan_5
# 155 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareMan_4:
# 156 "data/maps/FourIsland_Frlg/scripts.pory"
# 92 "data/maps/FourIsland_Frlg/scripts.pory"
# 157 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 158 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_eq FourIsland_EventScript_DaycareMan_8
# 159 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareMan_7:
# 160 "data/maps/FourIsland_Frlg/scripts.pory"
# 95 "data/maps/FourIsland_Frlg/scripts.pory"
# 161 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_ImDaycareManSpeakToMyWife
# 162 "data/maps/FourIsland_Frlg/scripts.pory"
# 96 "data/maps/FourIsland_Frlg/scripts.pory"
# 163 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 164 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 165 "data/maps/FourIsland_Frlg/scripts.pory"

# 166 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareMan_2:
# 167 "data/maps/FourIsland_Frlg/scripts.pory"
# 87 "data/maps/FourIsland_Frlg/scripts.pory"
# 168 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareEggWaiting
# 169 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareMan_1
# 170 "data/maps/FourIsland_Frlg/scripts.pory"

# 171 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareMan_5:
# 172 "data/maps/FourIsland_Frlg/scripts.pory"
# 90 "data/maps/FourIsland_Frlg/scripts.pory"
# 173 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_CheckOnOneMon
# 174 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareMan_4
# 175 "data/maps/FourIsland_Frlg/scripts.pory"

# 176 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareMan_8:
# 177 "data/maps/FourIsland_Frlg/scripts.pory"
# 93 "data/maps/FourIsland_Frlg/scripts.pory"
# 178 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_CheckOnTwoMons
# 179 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareMan_7
# 180 "data/maps/FourIsland_Frlg/scripts.pory"

# 181 "data/maps/FourIsland_Frlg/scripts.pory"

# 182 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareEggWaiting::
# 183 "data/maps/FourIsland_Frlg/scripts.pory"
# 101 "data/maps/FourIsland_Frlg/scripts.pory"
# 184 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_DoYouWantEgg, MSGBOX_YESNO
# 185 "data/maps/FourIsland_Frlg/scripts.pory"
# 102 "data/maps/FourIsland_Frlg/scripts.pory"
# 186 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 187 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_eq FourIsland_EventScript_DaycareEggWaiting_2
# 188 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareEggWaiting_1:
# 189 "data/maps/FourIsland_Frlg/scripts.pory"
# 105 "data/maps/FourIsland_Frlg/scripts.pory"
# 190 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 191 "data/maps/FourIsland_Frlg/scripts.pory"
# 106 "data/maps/FourIsland_Frlg/scripts.pory"
# 192 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 193 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_eq FourIsland_EventScript_DaycareEggWaiting_5
# 194 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareEggWaiting_4:
# 195 "data/maps/FourIsland_Frlg/scripts.pory"
# 109 "data/maps/FourIsland_Frlg/scripts.pory"
# 196 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_IllKeepIt
# 197 "data/maps/FourIsland_Frlg/scripts.pory"
# 110 "data/maps/FourIsland_Frlg/scripts.pory"
# 198 "data/maps/FourIsland_Frlg/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
# 199 "data/maps/FourIsland_Frlg/scripts.pory"
# 111 "data/maps/FourIsland_Frlg/scripts.pory"
# 200 "data/maps/FourIsland_Frlg/scripts.pory"
	special RejectEggFromDayCare
# 201 "data/maps/FourIsland_Frlg/scripts.pory"
# 112 "data/maps/FourIsland_Frlg/scripts.pory"
# 202 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 203 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 204 "data/maps/FourIsland_Frlg/scripts.pory"

# 205 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareEggWaiting_2:
# 206 "data/maps/FourIsland_Frlg/scripts.pory"
# 103 "data/maps/FourIsland_Frlg/scripts.pory"
# 207 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareAcceptEgg
# 208 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareEggWaiting_1
# 209 "data/maps/FourIsland_Frlg/scripts.pory"

# 210 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareEggWaiting_5:
# 211 "data/maps/FourIsland_Frlg/scripts.pory"
# 107 "data/maps/FourIsland_Frlg/scripts.pory"
# 212 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareAcceptEgg
# 213 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareEggWaiting_4
# 214 "data/maps/FourIsland_Frlg/scripts.pory"

# 215 "data/maps/FourIsland_Frlg/scripts.pory"

# 216 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareAcceptEgg::
# 217 "data/maps/FourIsland_Frlg/scripts.pory"
# 117 "data/maps/FourIsland_Frlg/scripts.pory"
# 218 "data/maps/FourIsland_Frlg/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 219 "data/maps/FourIsland_Frlg/scripts.pory"
# 118 "data/maps/FourIsland_Frlg/scripts.pory"
# 220 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 221 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_ne FourIsland_EventScript_DaycareAcceptEgg_2
# 222 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareAcceptEgg_1:
# 223 "data/maps/FourIsland_Frlg/scripts.pory"
# 121 "data/maps/FourIsland_Frlg/scripts.pory"
# 224 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_YouHaveNoRoomForIt
# 225 "data/maps/FourIsland_Frlg/scripts.pory"
# 122 "data/maps/FourIsland_Frlg/scripts.pory"
# 226 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 227 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 228 "data/maps/FourIsland_Frlg/scripts.pory"

# 229 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareAcceptEgg_2:
# 230 "data/maps/FourIsland_Frlg/scripts.pory"
# 119 "data/maps/FourIsland_Frlg/scripts.pory"
# 231 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareReceivedEgg
# 232 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareAcceptEgg_1
# 233 "data/maps/FourIsland_Frlg/scripts.pory"

# 234 "data/maps/FourIsland_Frlg/scripts.pory"

# 235 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareReceivedEgg::
# 236 "data/maps/FourIsland_Frlg/scripts.pory"
# 127 "data/maps/FourIsland_Frlg/scripts.pory"
# 237 "data/maps/FourIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 238 "data/maps/FourIsland_Frlg/scripts.pory"
# 128 "data/maps/FourIsland_Frlg/scripts.pory"
# 239 "data/maps/FourIsland_Frlg/scripts.pory"
	message DayCare_Text_ReceivedEgg
# 240 "data/maps/FourIsland_Frlg/scripts.pory"
# 129 "data/maps/FourIsland_Frlg/scripts.pory"
# 241 "data/maps/FourIsland_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 242 "data/maps/FourIsland_Frlg/scripts.pory"
# 130 "data/maps/FourIsland_Frlg/scripts.pory"
# 243 "data/maps/FourIsland_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 244 "data/maps/FourIsland_Frlg/scripts.pory"
# 131 "data/maps/FourIsland_Frlg/scripts.pory"
# 245 "data/maps/FourIsland_Frlg/scripts.pory"
	waitfanfare
# 246 "data/maps/FourIsland_Frlg/scripts.pory"
# 132 "data/maps/FourIsland_Frlg/scripts.pory"
# 247 "data/maps/FourIsland_Frlg/scripts.pory"
	waitbuttonpress
# 248 "data/maps/FourIsland_Frlg/scripts.pory"
# 133 "data/maps/FourIsland_Frlg/scripts.pory"
# 249 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeGoodCareOfIt
# 250 "data/maps/FourIsland_Frlg/scripts.pory"
# 134 "data/maps/FourIsland_Frlg/scripts.pory"
# 251 "data/maps/FourIsland_Frlg/scripts.pory"
	special GiveEggFromDaycare
# 252 "data/maps/FourIsland_Frlg/scripts.pory"
# 135 "data/maps/FourIsland_Frlg/scripts.pory"
# 253 "data/maps/FourIsland_Frlg/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
# 254 "data/maps/FourIsland_Frlg/scripts.pory"
# 136 "data/maps/FourIsland_Frlg/scripts.pory"
# 255 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 256 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 257 "data/maps/FourIsland_Frlg/scripts.pory"

# 258 "data/maps/FourIsland_Frlg/scripts.pory"

# 259 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_CheckOnOneMon::
# 260 "data/maps/FourIsland_Frlg/scripts.pory"
# 141 "data/maps/FourIsland_Frlg/scripts.pory"
# 261 "data/maps/FourIsland_Frlg/scripts.pory"
	special GetDaycareMonNicknames
# 262 "data/maps/FourIsland_Frlg/scripts.pory"
# 142 "data/maps/FourIsland_Frlg/scripts.pory"
# 263 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_YourMonIsDoingFine
# 264 "data/maps/FourIsland_Frlg/scripts.pory"
# 143 "data/maps/FourIsland_Frlg/scripts.pory"
# 265 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 266 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 267 "data/maps/FourIsland_Frlg/scripts.pory"

# 268 "data/maps/FourIsland_Frlg/scripts.pory"

# 269 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_CheckOnTwoMons::
# 270 "data/maps/FourIsland_Frlg/scripts.pory"
# 148 "data/maps/FourIsland_Frlg/scripts.pory"
# 271 "data/maps/FourIsland_Frlg/scripts.pory"
	special GetDaycareMonNicknames
# 272 "data/maps/FourIsland_Frlg/scripts.pory"
# 149 "data/maps/FourIsland_Frlg/scripts.pory"
# 273 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_YourMonsAreDoingFine
# 274 "data/maps/FourIsland_Frlg/scripts.pory"
# 150 "data/maps/FourIsland_Frlg/scripts.pory"
# 275 "data/maps/FourIsland_Frlg/scripts.pory"
	special SetDaycareCompatibilityString
# 276 "data/maps/FourIsland_Frlg/scripts.pory"
# 151 "data/maps/FourIsland_Frlg/scripts.pory"
# 277 "data/maps/FourIsland_Frlg/scripts.pory"
	special ShowFieldMessageStringVar4
# 278 "data/maps/FourIsland_Frlg/scripts.pory"
# 152 "data/maps/FourIsland_Frlg/scripts.pory"
# 279 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmessage
# 280 "data/maps/FourIsland_Frlg/scripts.pory"
# 153 "data/maps/FourIsland_Frlg/scripts.pory"
# 281 "data/maps/FourIsland_Frlg/scripts.pory"
	waitbuttonpress
# 282 "data/maps/FourIsland_Frlg/scripts.pory"
# 154 "data/maps/FourIsland_Frlg/scripts.pory"
# 283 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 284 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 285 "data/maps/FourIsland_Frlg/scripts.pory"

# 286 "data/maps/FourIsland_Frlg/scripts.pory"

# 287 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_OldWoman::
# 288 "data/maps/FourIsland_Frlg/scripts.pory"
# 159 "data/maps/FourIsland_Frlg/scripts.pory"
# 289 "data/maps/FourIsland_Frlg/scripts.pory"
	lock
# 290 "data/maps/FourIsland_Frlg/scripts.pory"
# 160 "data/maps/FourIsland_Frlg/scripts.pory"
# 291 "data/maps/FourIsland_Frlg/scripts.pory"
	faceplayer
# 292 "data/maps/FourIsland_Frlg/scripts.pory"
# 161 "data/maps/FourIsland_Frlg/scripts.pory"
# 293 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, FourIsland_EventScript_OldWoman_2
# 294 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_OldWoman_1:
# 295 "data/maps/FourIsland_Frlg/scripts.pory"
# 164 "data/maps/FourIsland_Frlg/scripts.pory"
# 296 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasReturned
# 297 "data/maps/FourIsland_Frlg/scripts.pory"
# 165 "data/maps/FourIsland_Frlg/scripts.pory"
# 298 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 299 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 300 "data/maps/FourIsland_Frlg/scripts.pory"

# 301 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_OldWoman_2:
# 302 "data/maps/FourIsland_Frlg/scripts.pory"
# 162 "data/maps/FourIsland_Frlg/scripts.pory"
# 303 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_OldWomanLoreleiLeft
# 304 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_OldWoman_1
# 305 "data/maps/FourIsland_Frlg/scripts.pory"

# 306 "data/maps/FourIsland_Frlg/scripts.pory"

# 307 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_OldWomanLoreleiLeft::
# 308 "data/maps/FourIsland_Frlg/scripts.pory"
# 170 "data/maps/FourIsland_Frlg/scripts.pory"
# 309 "data/maps/FourIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 5
# 310 "data/maps/FourIsland_Frlg/scripts.pory"
# 171 "data/maps/FourIsland_Frlg/scripts.pory"
# 311 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleiMetLaprasAsChild
# 312 "data/maps/FourIsland_Frlg/scripts.pory"
# 172 "data/maps/FourIsland_Frlg/scripts.pory"
# 313 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 314 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 315 "data/maps/FourIsland_Frlg/scripts.pory"

# 316 "data/maps/FourIsland_Frlg/scripts.pory"

# 317 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_LittleGirl::
# 318 "data/maps/FourIsland_Frlg/scripts.pory"
# 177 "data/maps/FourIsland_Frlg/scripts.pory"
# 319 "data/maps/FourIsland_Frlg/scripts.pory"
	lock
# 320 "data/maps/FourIsland_Frlg/scripts.pory"
# 178 "data/maps/FourIsland_Frlg/scripts.pory"
# 321 "data/maps/FourIsland_Frlg/scripts.pory"
	faceplayer
# 322 "data/maps/FourIsland_Frlg/scripts.pory"
# 179 "data/maps/FourIsland_Frlg/scripts.pory"
# 323 "data/maps/FourIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 4
# 324 "data/maps/FourIsland_Frlg/scripts.pory"
# 180 "data/maps/FourIsland_Frlg/scripts.pory"
# 325 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasLotsOfStuffedDolls
# 326 "data/maps/FourIsland_Frlg/scripts.pory"
# 181 "data/maps/FourIsland_Frlg/scripts.pory"
# 327 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 328 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 329 "data/maps/FourIsland_Frlg/scripts.pory"

# 330 "data/maps/FourIsland_Frlg/scripts.pory"

# 331 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_FatMan::
# 332 "data/maps/FourIsland_Frlg/scripts.pory"
# 186 "data/maps/FourIsland_Frlg/scripts.pory"
# 333 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_MadeSlushieUsingIcefallCaveIce, MSGBOX_NPC
# 334 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 335 "data/maps/FourIsland_Frlg/scripts.pory"

# 336 "data/maps/FourIsland_Frlg/scripts.pory"

# 337 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_IslandSign::
# 338 "data/maps/FourIsland_Frlg/scripts.pory"
# 191 "data/maps/FourIsland_Frlg/scripts.pory"
# 339 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_IslandSign, MSGBOX_SIGN
# 340 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 341 "data/maps/FourIsland_Frlg/scripts.pory"

# 342 "data/maps/FourIsland_Frlg/scripts.pory"

# 343 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_LoreleisHouseSign::
# 344 "data/maps/FourIsland_Frlg/scripts.pory"
# 196 "data/maps/FourIsland_Frlg/scripts.pory"
# 345 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleisHouse, MSGBOX_SIGN
# 346 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 347 "data/maps/FourIsland_Frlg/scripts.pory"

# 348 "data/maps/FourIsland_Frlg/scripts.pory"

# 349 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_IslandSign::
# 350 "data/maps/FourIsland_Frlg/scripts.pory"
# 200 "data/maps/FourIsland_Frlg/scripts.pory"
# 351 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "FOUR ISLAND\n"
# 352 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "The Warm, Blue, Floe Island$"
# 353 "data/maps/FourIsland_Frlg/scripts.pory"

# 354 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_LoreleiHasReturned::
# 355 "data/maps/FourIsland_Frlg/scripts.pory"
# 205 "data/maps/FourIsland_Frlg/scripts.pory"
# 356 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "LORELEI has returned.\p"
# 357 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Did she find the city life too\n"
# 358 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "stressful, I wonder?$"
# 359 "data/maps/FourIsland_Frlg/scripts.pory"

# 360 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_LoreleiMetLaprasAsChild::
# 361 "data/maps/FourIsland_Frlg/scripts.pory"
# 211 "data/maps/FourIsland_Frlg/scripts.pory"
# 362 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "LORELEI has gone back.\p"
# 363 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "The LAPRAS she has, I imagine it\n"
# 364 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "to be the one she met as a child.\p"
# 365 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "I believe it was in ICEFALL CAVE\n"
# 366 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "that she caught it.\p"
# 367 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Perhaps that POKéMON has been with\n"
# 368 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "her ever since.$"
# 369 "data/maps/FourIsland_Frlg/scripts.pory"

# 370 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_RivalAlreadyGotEggBeSmellingYa::
# 371 "data/maps/FourIsland_Frlg/scripts.pory"
# 221 "data/maps/FourIsland_Frlg/scripts.pory"
# 372 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "{RIVAL}: Hey!\n"
# 373 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 374 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "What are you doing here in the\n"
# 375 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "SEVII ISLANDS?\p"
# 376 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "You should quit copying me,\n"
# 377 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "you know?\p"
# 378 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Anyways, I already got my POKéMON\n"
# 379 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "EGG, so I'm done with this island.\p"
# 380 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Heh, I bet you don't even know\n"
# 381 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "about POKéMON EGGS.\p"
# 382 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "You'll never fill your NATIONAL\n"
# 383 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "POKéDEX that way.\p"
# 384 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "By the way, I saw someone we both\n"
# 385 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "know on this island.\p"
# 386 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Why don't you go look around if\n"
# 387 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "it makes you curious?\p"
# 388 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Me, I don't have the time to\n"
# 389 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "waste.\p"
# 390 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Be smelling ya!$"
# 391 "data/maps/FourIsland_Frlg/scripts.pory"

# 392 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_LoreleiHasLotsOfStuffedDolls::
# 393 "data/maps/FourIsland_Frlg/scripts.pory"
# 243 "data/maps/FourIsland_Frlg/scripts.pory"
# 394 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Oh, you found me!\n"
# 395 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Please don't tell LORELEI.\p"
# 396 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Did you know that LORELEI has lots\n"
# 397 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "and lots of stuffed dolls?\p"
# 398 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Every time she comes back to\n"
# 399 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "FOUR ISLAND, her collection grows!$"
# 400 "data/maps/FourIsland_Frlg/scripts.pory"

# 401 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_MadeSlushieUsingIcefallCaveIce::
# 402 "data/maps/FourIsland_Frlg/scripts.pory"
# 252 "data/maps/FourIsland_Frlg/scripts.pory"
# 403 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Ooh, chilly!\p"
# 404 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "I made a slushie using ice I\n"
# 405 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "shaved inside ICEFALL CAVE.\p"
# 406 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "It's chilly and tasty!$"
# 407 "data/maps/FourIsland_Frlg/scripts.pory"

# 408 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_LoreleisHouse::
# 409 "data/maps/FourIsland_Frlg/scripts.pory"
# 259 "data/maps/FourIsland_Frlg/scripts.pory"
# 410 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "LORELEI'S HOUSE$"
