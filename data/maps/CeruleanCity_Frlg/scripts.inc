# 1 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 2 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 4 "data/maps/CeruleanCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
# 5 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 7 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 8 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_OnTransition::
# 9 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 6 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CERULEAN_CITY
# 11 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 7 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_SS_TICKET, CeruleanCity_OnTransition_2
# 13 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_OnTransition_1:
# 14 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 15 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 16 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_OnTransition_2:
# 17 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 8 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_BlockExits
# 19 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_OnTransition_1
# 20 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 21 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 22 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_BlockExits::
# 23 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 24 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_POLICEMAN, 30, 12
# 25 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_SLOWBRO, 26, 31
# 27 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 16 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_LASS, 27, 31
# 29 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 30 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 31 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 32 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_RivalTriggerLeft::
# 33 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 21 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 34 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 35 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 37 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 23 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 38 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 39 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 40 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 41 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 42 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_RivalTriggerMid::
# 43 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 45 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 29 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 46 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 47 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 48 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 23, 0
# 49 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 31 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 50 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 51 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 52 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 53 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 54 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_RivalTriggerRight::
# 55 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 56 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 37 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 58 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 59 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 38 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 24, 0
# 61 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 39 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 62 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 63 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 64 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 65 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 66 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival::
# 67 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 68 "data/maps/CeruleanCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 69 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 45 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 70 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 71 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 46 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 72 "data/maps/CeruleanCity_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 73 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 47 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 74 "data/maps/CeruleanCity_Frlg/scripts.pory"
	addobject LOCALID_CERULEAN_RIVAL
# 75 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 48 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 76 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalEnter
# 77 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 49 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 78 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 79 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 50 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 80 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_RivalIntro
# 81 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 51 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 82 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_RIVAL
# 83 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 52 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 84 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
# 85 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Rival_2
# 86 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_1:
# 87 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 55 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 88 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
# 89 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Rival_5
# 90 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_4:
# 91 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 58 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 92 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
# 93 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Rival_8
# 94 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_7:
# 95 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 61 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 96 "data/maps/CeruleanCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 0
# 97 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 62 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 98 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_RivalPostBattle
# 99 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 63 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 100 "data/maps/CeruleanCity_Frlg/scripts.pory"
	closemessage
# 101 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 64 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 102 "data/maps/CeruleanCity_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 103 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 65 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 104 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 105 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Rival_11
# 106 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_10:
# 107 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 68 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 108 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 109 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Rival_14
# 110 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_13:
# 111 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 71 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 112 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 113 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Rival_17
# 114 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_16:
# 115 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 74 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 116 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_OhRightLittlePresentAsFavor
# 117 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 75 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 118 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 119 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 76 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 120 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setflag FLAG_GOT_FAME_CHECKER
# 121 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 77 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 122 "data/maps/CeruleanCity_Frlg/scripts.pory"
	giveitem ITEM_FAME_CHECKER
# 123 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 78 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 124 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_ExplainFameCheckerSmellYa
# 125 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 79 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 126 "data/maps/CeruleanCity_Frlg/scripts.pory"
	closemessage
# 127 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 80 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 128 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalExit
# 129 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 81 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 130 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 131 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 82 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 132 "data/maps/CeruleanCity_Frlg/scripts.pory"
	fadedefaultbgm
# 133 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 83 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 134 "data/maps/CeruleanCity_Frlg/scripts.pory"
	removeobject LOCALID_CERULEAN_RIVAL
# 135 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 84 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 136 "data/maps/CeruleanCity_Frlg/scripts.pory"
	releaseall
# 137 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 138 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 139 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_2:
# 140 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 53 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 141 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_RivalSquirtle
# 142 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival_1
# 143 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 144 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_5:
# 145 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 56 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 146 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_RivalBulbasaur
# 147 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival_4
# 148 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 149 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_8:
# 150 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 59 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 151 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_RivalCharmander
# 152 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival_7
# 153 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 154 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_11:
# 155 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 66 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 156 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_RivalStartExit
# 157 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival_10
# 158 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 159 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_14:
# 160 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 69 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 161 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_RivalStartExit
# 162 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival_13
# 163 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 164 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_17:
# 165 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 72 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 166 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_RivalStartExitRight
# 167 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival_16
# 168 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 169 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 170 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_RivalSquirtle::
# 171 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 89 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 172 "data/maps/CeruleanCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_SQUIRTLE, CeruleanCity_Text_RivalDefeat
# 173 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 174 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 175 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 176 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_RivalBulbasaur::
# 177 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 94 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 178 "data/maps/CeruleanCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_BULBASAUR, CeruleanCity_Text_RivalDefeat
# 179 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 180 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 181 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 182 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_RivalCharmander::
# 183 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 99 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 184 "data/maps/CeruleanCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_CHARMANDER, CeruleanCity_Text_RivalDefeat
# 185 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 186 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 187 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 188 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_RivalStartExit::
# 189 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 104 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 190 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExit
# 191 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 105 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 192 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExit
# 193 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 106 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 194 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 195 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 196 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 197 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 198 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_RivalStartExitRight::
# 199 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 111 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 200 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExitRight
# 201 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 112 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 202 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExitRight
# 203 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 113 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 204 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 205 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 206 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 207 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 208 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 117 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 209 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExit:
# 210 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 118 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 211 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 212 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 119 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 213 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_8
# 214 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 120 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 215 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_in_place_faster_right
# 216 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 121 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 217 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 218 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 122 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 219 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_in_place_faster_down
# 220 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 123 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 221 "data/maps/CeruleanCity_Frlg/scripts.pory"
	step_end
# 222 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 223 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 126 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 224 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExitRight:
# 225 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 127 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 226 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 227 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 128 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 228 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_8
# 229 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 129 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 230 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 231 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 130 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 232 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 233 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 131 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 234 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_in_place_faster_down
# 235 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 132 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 236 "data/maps/CeruleanCity_Frlg/scripts.pory"
	step_end
# 237 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 238 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 135 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 239 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Movement_RivalEnter:
# 240 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 136 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 241 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 242 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 137 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 243 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 244 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 138 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 245 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 246 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 139 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 247 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 248 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 140 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 249 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 250 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 141 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 251 "data/maps/CeruleanCity_Frlg/scripts.pory"
	step_end
# 252 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 253 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 144 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 254 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Movement_RivalStartExit:
# 255 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 145 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 256 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_right
# 257 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 146 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 258 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 259 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 147 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 260 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 261 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 148 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 262 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 263 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 149 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 264 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 265 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 150 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 266 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 267 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 151 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 268 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 269 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 152 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 270 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 271 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 153 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 272 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 273 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 154 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 274 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 275 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 155 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 276 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_left
# 277 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 156 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 278 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 279 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 157 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 280 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 281 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 158 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 282 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 283 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 159 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 284 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 285 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 160 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 286 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 287 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 161 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 288 "data/maps/CeruleanCity_Frlg/scripts.pory"
	step_end
# 289 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 290 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 164 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 291 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Movement_RivalStartExitRight:
# 292 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 165 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 293 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_left
# 294 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 166 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 295 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 296 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 167 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 297 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 298 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 168 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 299 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 300 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 169 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 301 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 302 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 170 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 303 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 304 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 171 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 305 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 306 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 172 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 307 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 308 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 173 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 309 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 310 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 174 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 311 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 312 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 175 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 313 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_right
# 314 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 176 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 315 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 316 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 177 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 317 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 318 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 178 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 319 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 320 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 179 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 321 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 322 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 180 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 323 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 324 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 181 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 325 "data/maps/CeruleanCity_Frlg/scripts.pory"
	step_end
# 326 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 327 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 184 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 328 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Movement_RivalExit:
# 329 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 185 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 330 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 331 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 186 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 332 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 333 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 187 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 334 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 335 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 188 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 336 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 337 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 189 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 338 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 339 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 190 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 340 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 341 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 191 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 342 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 343 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 192 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 344 "data/maps/CeruleanCity_Frlg/scripts.pory"
	step_end
# 345 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 346 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Grunt::
# 347 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 196 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 348 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock
# 349 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 197 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 350 "data/maps/CeruleanCity_Frlg/scripts.pory"
	faceplayer
# 351 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 198 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 352 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_EventScript_GruntDefeated
# 353 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 199 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 354 "data/maps/CeruleanCity_Frlg/scripts.pory"
	message CeruleanCity_Text_GruntIntro
# 355 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 200 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 356 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmessage
# 357 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 201 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 358 "data/maps/CeruleanCity_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 359 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 202 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 360 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitbuttonpress
# 361 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 203 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 362 "data/maps/CeruleanCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 363 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 204 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 364 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 365 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 205 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 366 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 367 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 368 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 369 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 370 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_GruntDefeated::
# 371 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 210 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 372 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_OkayIllReturnStolenTM
# 373 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 211 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 374 "data/maps/CeruleanCity_Frlg/scripts.pory"
	checkitemspace ITEM_TM28
# 375 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 212 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 376 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 377 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_GruntDefeated_2
# 378 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_GruntDefeated_1:
# 379 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 215 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 380 "data/maps/CeruleanCity_Frlg/scripts.pory"
	giveitem_msg CeruleanCity_Text_RecoveredTM28FromGrunt, ITEM_TM28
# 381 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 216 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 382 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_BetterGetMovingBye
# 383 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 217 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 384 "data/maps/CeruleanCity_Frlg/scripts.pory"
	closemessage
# 385 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 218 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 386 "data/maps/CeruleanCity_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 387 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 219 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 388 "data/maps/CeruleanCity_Frlg/scripts.pory"
	removeobject LOCALID_CERULEAN_GRUNT
# 389 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 220 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 390 "data/maps/CeruleanCity_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 391 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 221 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 392 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setflag FLAG_GOT_TM28_FROM_ROCKET
# 393 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 222 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 394 "data/maps/CeruleanCity_Frlg/scripts.pory"
	release
# 395 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 396 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 397 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_GruntDefeated_2:
# 398 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 213 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 399 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_NoRoomForTM28
# 400 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated_1
# 401 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 402 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 403 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_NoRoomForTM28::
# 404 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 227 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 405 "data/maps/CeruleanCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 406 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 228 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 407 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_MakeRoomForThisCantRun
# 408 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 229 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 409 "data/maps/CeruleanCity_Frlg/scripts.pory"
	release
# 410 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 411 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 412 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 413 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_GruntTriggerTop::
# 414 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 234 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 415 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 416 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 235 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 417 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 418 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 236 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 419 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 420 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 237 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 421 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 422 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 238 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 423 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 424 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 239 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 425 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 426 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 240 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 427 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 428 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 429 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 430 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 431 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_GruntTriggerBottom::
# 432 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 245 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 433 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 434 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 246 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 435 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 436 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 247 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 437 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 438 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 248 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 439 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 440 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 249 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 441 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 442 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 250 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 443 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 444 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 251 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 445 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 446 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 447 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 448 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 449 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_GruntTrigger::
# 450 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 256 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 451 "data/maps/CeruleanCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 452 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 257 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 453 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_GruntIntro
# 454 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 258 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 455 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_GRUNT
# 456 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 259 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 457 "data/maps/CeruleanCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 458 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 260 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 459 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 460 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 261 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 461 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 462 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 463 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 464 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 465 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Policeman::
# 466 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 266 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 467 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock
# 468 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 267 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 469 "data/maps/CeruleanCity_Frlg/scripts.pory"
	faceplayer
# 470 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 268 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 471 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_PeopleHereWereRobbed
# 472 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 269 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 473 "data/maps/CeruleanCity_Frlg/scripts.pory"
	closemessage
# 474 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 270 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 475 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_POLICEMAN, Common_Movement_FaceOriginalDirection
# 476 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 271 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 477 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 478 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 272 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 479 "data/maps/CeruleanCity_Frlg/scripts.pory"
	release
# 480 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 481 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 482 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 483 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_LittleBoy::
# 484 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 277 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 485 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock
# 486 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 278 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 487 "data/maps/CeruleanCity_Frlg/scripts.pory"
	faceplayer
# 488 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 279 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 489 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_LittleBoy_2
# 490 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_LittleBoy_1:
# 491 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 282 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 492 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree
# 493 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 283 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 494 "data/maps/CeruleanCity_Frlg/scripts.pory"
	release
# 495 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 496 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 497 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_LittleBoy_2:
# 498 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 280 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 499 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_LittleBoySlowbroMoved
# 500 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_LittleBoy_1
# 501 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 502 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 503 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_LittleBoySlowbroMoved::
# 504 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 288 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 505 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_YouCanCutDownSmallTrees
# 506 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 289 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 507 "data/maps/CeruleanCity_Frlg/scripts.pory"
	release
# 508 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 509 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 510 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 511 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_BaldingMan::
# 512 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 294 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 513 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_PokemonEncyclopediaAmusing, MSGBOX_NPC
# 514 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 515 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 516 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 517 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Youngster::
# 518 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 299 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 519 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_TrainerLifeIsToughIsntIt, MSGBOX_NPC
# 520 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 521 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 522 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 523 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_CeruleanCaveGuard::
# 524 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 304 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 525 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
# 526 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 527 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 528 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 529 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Woman::
# 530 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 309 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 531 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock
# 532 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 310 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 533 "data/maps/CeruleanCity_Frlg/scripts.pory"
	faceplayer
# 534 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 311 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 535 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_WantBrightRedBicycle
# 536 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 312 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 537 "data/maps/CeruleanCity_Frlg/scripts.pory"
	closemessage
# 538 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 313 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 539 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_WOMAN, Common_Movement_FaceOriginalDirection
# 540 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 314 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 541 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 542 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 315 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 543 "data/maps/CeruleanCity_Frlg/scripts.pory"
	release
# 544 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 545 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 546 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 547 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass::
# 548 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 320 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 549 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock
# 550 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 321 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 551 "data/maps/CeruleanCity_Frlg/scripts.pory"
	random 3
# 552 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 322 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 553 "data/maps/CeruleanCity_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 554 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 323 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 555 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_0x8008, 0
# 556 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Lass_2
# 557 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_1:
# 558 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 326 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 559 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_0x8008, 1
# 560 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Lass_5
# 561 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_4:
# 562 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 329 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 563 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_0x8008, 2
# 564 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Lass_8
# 565 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_7:
# 566 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 332 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 567 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmessage
# 568 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 333 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 569 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay 40
# 570 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 334 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 571 "data/maps/CeruleanCity_Frlg/scripts.pory"
	playse SE_PIN
# 572 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 335 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 573 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_SLOWBRO, Common_Movement_QuestionMark
# 574 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 336 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 575 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 576 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 337 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 577 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay 30
# 578 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 338 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 579 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_0x8008, 0
# 580 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Lass_11
# 581 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_10:
# 582 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 341 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 583 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_0x8008, 1
# 584 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Lass_14
# 585 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_13:
# 586 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 344 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 587 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_0x8008, 2
# 588 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Lass_17
# 589 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_16:
# 590 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 347 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 591 "data/maps/CeruleanCity_Frlg/scripts.pory"
	release
# 592 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 593 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 594 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_2:
# 595 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 324 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 596 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_SlowbroCommand1
# 597 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Lass_1
# 598 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 599 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_5:
# 600 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 327 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 601 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_SlowbroCommand2
# 602 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Lass_4
# 603 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 604 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_8:
# 605 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 330 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 606 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_SlowbroCommand3
# 607 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Lass_7
# 608 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 609 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_11:
# 610 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 339 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 611 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_SlowbroFailed1
# 612 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Lass_10
# 613 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 614 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_14:
# 615 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 342 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 616 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_SlowbroFailed2
# 617 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Lass_13
# 618 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 619 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Lass_17:
# 620 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 345 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 621 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_SlowbroFailed3
# 622 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Lass_16
# 623 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 624 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 625 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand1::
# 626 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 352 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 627 "data/maps/CeruleanCity_Frlg/scripts.pory"
	message CeruleanCity_Text_SlowbroUseSonicboom
# 628 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 629 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 630 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 631 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand2::
# 632 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 357 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 633 "data/maps/CeruleanCity_Frlg/scripts.pory"
	message CeruleanCity_Text_SlowbroPunch
# 634 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 635 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 636 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 637 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand3::
# 638 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 362 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 639 "data/maps/CeruleanCity_Frlg/scripts.pory"
	message CeruleanCity_Text_SlowbroWithdraw
# 640 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 641 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 642 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 643 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed1::
# 644 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 367 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 645 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroPayAttention
# 646 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 647 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 648 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 649 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed2::
# 650 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 372 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 651 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_NoYouBlewItAgain
# 652 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 653 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 654 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 655 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed3::
# 656 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 377 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 657 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_HardToControlMonsObedience
# 658 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 659 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 660 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 661 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Slowbro::
# 662 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 382 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 663 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock
# 664 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 383 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 665 "data/maps/CeruleanCity_Frlg/scripts.pory"
	random 4
# 666 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 384 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 667 "data/maps/CeruleanCity_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 668 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 385 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 669 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_0x8008, 0
# 670 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Slowbro_2
# 671 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Slowbro_1:
# 672 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 388 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 673 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_0x8008, 1
# 674 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Slowbro_5
# 675 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Slowbro_4:
# 676 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 391 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 677 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_0x8008, 2
# 678 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Slowbro_8
# 679 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Slowbro_7:
# 680 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 394 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 681 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_0x8008, 3
# 682 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_EventScript_Slowbro_11
# 683 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Slowbro_10:
# 684 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 397 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 685 "data/maps/CeruleanCity_Frlg/scripts.pory"
	release
# 686 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 687 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 688 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Slowbro_2:
# 689 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 386 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 690 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_SlowbroText1
# 691 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Slowbro_1
# 692 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 693 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Slowbro_5:
# 694 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 389 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 695 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_SlowbroText2
# 696 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Slowbro_4
# 697 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 698 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Slowbro_8:
# 699 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 392 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 700 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_SlowbroText3
# 701 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Slowbro_7
# 702 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 703 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Slowbro_11:
# 704 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 395 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 705 "data/maps/CeruleanCity_Frlg/scripts.pory"
	call CeruleanCity_EventScript_SlowbroText4
# 706 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Slowbro_10
# 707 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 708 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 709 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_SlowbroText1::
# 710 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 402 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 711 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTookSnooze
# 712 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 713 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 714 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 715 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_SlowbroText2::
# 716 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 407 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 717 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroLoafingAround
# 718 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 719 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 720 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 721 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_SlowbroText3::
# 722 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 412 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 723 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTurnedAway
# 724 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 725 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 726 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 727 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_SlowbroText4::
# 728 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 417 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 729 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroIgnoredOrders
# 730 "data/maps/CeruleanCity_Frlg/scripts.pory"
	return
# 731 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 732 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 733 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_CitySign::
# 734 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 422 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 735 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_CitySign, MSGBOX_SIGN
# 736 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 737 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 738 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 739 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_TrainerTips::
# 740 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 427 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 741 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_TrainerTipsHeldItems, MSGBOX_SIGN
# 742 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 743 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 744 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 745 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_BikeShopSign::
# 746 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 432 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 747 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
# 748 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 749 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 750 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 751 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_GymSign::
# 752 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 437 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 753 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 754 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 438 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 755 "data/maps/CeruleanCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 0
# 756 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 439 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 757 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_GymSign
# 758 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 440 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 759 "data/maps/CeruleanCity_Frlg/scripts.pory"
	releaseall
# 760 "data/maps/CeruleanCity_Frlg/scripts.pory"
	end
# 761 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 762 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 763 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_RivalIntro::
# 764 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 444 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 765 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "{RIVAL}: Yo! {PLAYER}!\p"
# 766 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "You're still struggling along back\n"
# 767 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "here?\p"
# 768 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I'm doing great! I caught a bunch\n"
# 769 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "of strong and smart POKéMON!\p"
# 770 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Here, let me see what you caught,\n"
# 771 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "{PLAYER}!$"
# 772 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 773 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_RivalDefeat::
# 774 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 454 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 775 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Hey!\n"
# 776 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Take it easy!\l"
# 777 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "You won already!$"
# 778 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 779 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_RivalPostBattle::
# 780 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 460 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 781 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, guess what?\p"
# 782 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I went to BILL's and got him to\n"
# 783 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "show me his rare POKéMON.\p"
# 784 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "That added a lot of pages to my\n"
# 785 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "POKéDEX!\p"
# 786 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "After all, BILL's world famous as a\n"
# 787 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "POKéMANIAC.\p"
# 788 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "He invented the POKéMON Storage\n"
# 789 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "System on PC, too.\p"
# 790 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Since you're using his system,\n"
# 791 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "you should go thank him.\p"
# 792 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Well, I better get rolling!\n"
# 793 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Smell ya later!$"
# 794 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 795 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_OhRightLittlePresentAsFavor::
# 796 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 476 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 797 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Oh, yeah, right.\p"
# 798 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I feel sorry for you. No, really.\n"
# 799 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "You're always plodding behind me.\p"
# 800 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "So here, I'll give you a little\n"
# 801 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "present as a favor.$"
# 802 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 803 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_ExplainFameCheckerSmellYa::
# 804 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 484 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 805 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "A chatty gossip like you…\n"
# 806 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "That thing's perfect.\p"
# 807 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I don't need it because I don't\n"
# 808 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "give a hoot about others.\p"
# 809 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "All right, this time I really am\n"
# 810 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "gone. Smell ya!$"
# 811 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 812 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_GruntIntro::
# 813 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 493 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 814 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Hey! Stay out!\n"
# 815 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "It's not your yard!\p"
# 816 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "…Huh?\n"
# 817 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Me?\p"
# 818 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I'm an innocent bystander!\n"
# 819 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Don't you believe me?{PLAY_BGM}{MUS_RG_ENCOUNTER_ROCKET}$"
# 820 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 821 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_GruntDefeat::
# 822 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 502 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 823 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "GRUNT: Stop! I give up!\n"
# 824 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I'll leave quietly!$"
# 825 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 826 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_OkayIllReturnStolenTM::
# 827 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 507 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 828 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "…Okay.\n"
# 829 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I'll return the TM I stole.$"
# 830 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 831 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_RecoveredTM28FromGrunt::
# 832 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 512 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 833 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "{PLAYER} recovered TM28 from\n"
# 834 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "the TEAM ROCKET GRUNT.$"
# 835 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 836 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_BetterGetMovingBye::
# 837 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 517 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 838 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I better get moving!\n"
# 839 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Bye!$"
# 840 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 841 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_MakeRoomForThisCantRun::
# 842 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 522 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 843 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Make room for this!\n"
# 844 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I can't run until I give it to you!$"
# 845 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 846 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_TrainerLifeIsToughIsntIt::
# 847 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 527 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 848 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "You're a TRAINER, too?\p"
# 849 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Collecting, battling…\n"
# 850 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "It's a tough life, isn't it?$"
# 851 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 852 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_YouCanCutDownSmallTrees::
# 853 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 533 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 854 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Did you know that you can CUT down\n"
# 855 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "small trees?\p"
# 856 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Even that small tree in front of\n"
# 857 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "the shop can be CUT down.\p"
# 858 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I think there's a way around it,\n"
# 859 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "though.$"
# 860 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 861 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree::
# 862 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 542 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 863 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "If that SLOWBRO wasn't there, you\n"
# 864 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "could CUT down the small tree.\p"
# 865 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "That way, you could get to the\n"
# 866 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "other side.\p"
# 867 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I think there's a way around it,\n"
# 868 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "though.$"
# 869 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 870 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_PokemonEncyclopediaAmusing::
# 871 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 551 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 872 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "You're making an encyclopedia on\n"
# 873 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "POKéMON? That sounds amusing.$"
# 874 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 875 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_PeopleHereWereRobbed::
# 876 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 556 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 877 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "The people here were robbed.\p"
# 878 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "It's obvious that TEAM ROCKET is\n"
# 879 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "behind this most heinous crime!\p"
# 880 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Even our POLICE FORCE has\n"
# 881 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "trouble with the ROCKETS!$"
# 882 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 883 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_SlowbroUseSonicboom::
# 884 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 564 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 885 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Okay! SLOWBRO!\n"
# 886 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Use SONICBOOM!$"
# 887 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 888 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_SlowbroPayAttention::
# 889 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 569 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 890 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Come on, SLOWBRO, pay attention!$"
# 891 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 892 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_SlowbroPunch::
# 893 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 573 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 894 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO, punch!$"
# 895 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 896 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_NoYouBlewItAgain::
# 897 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 577 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 898 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "No!\n"
# 899 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "You blew it again!$"
# 900 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 901 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_SlowbroWithdraw::
# 902 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 582 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 903 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO, WITHDRAW!$"
# 904 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 905 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_HardToControlMonsObedience::
# 906 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 586 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 907 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "No! That's wrong!\n"
# 908 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "It's so hard to control POKéMON!\p"
# 909 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Your POKéMON's obedience depends\n"
# 910 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "on your abilities as a TRAINER.$"
# 911 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 912 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_SlowbroTookSnooze::
# 913 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 593 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 914 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO took a snooze…$"
# 915 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 916 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_SlowbroLoafingAround::
# 917 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 597 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 918 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO is loafing around…$"
# 919 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 920 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_SlowbroTurnedAway::
# 921 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 601 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 922 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO turned away…$"
# 923 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 924 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_SlowbroIgnoredOrders::
# 925 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 605 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 926 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO ignored orders…$"
# 927 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 928 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_WantBrightRedBicycle::
# 929 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 609 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 930 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I want a bright red bicycle.\p"
# 931 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I'll keep it at home, so it won't\n"
# 932 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "get dirty.$"
# 933 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 934 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_ThisIsCeruleanCave::
# 935 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 615 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 936 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "This is CERULEAN CAVE.\p"
# 937 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Horribly strong POKéMON live inside\n"
# 938 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "there.\p"
# 939 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "It takes a very special TRAINER to\n"
# 940 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "be allowed inside there.\p"
# 941 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "You'd have to be strong enough to\n"
# 942 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "become the POKéMON LEAGUE\l"
# 943 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "CHAMPION for starters.\p"
# 944 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "And, you would have to have\n"
# 945 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "made a great achievement.$"
# 946 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 947 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_CitySign::
# 948 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 628 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 949 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "CERULEAN CITY\n"
# 950 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "A Mysterious, Blue Aura Surrounds\l"
# 951 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "It$"
# 952 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 953 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_TrainerTipsHeldItems::
# 954 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 634 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 955 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 956 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "A POKéMON can be made to hold\n"
# 957 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "an item.\p"
# 958 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Some items can even be used by\n"
# 959 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "the holding POKéMON in battle.$"
# 960 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 961 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_BikeShopSign::
# 962 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 642 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 963 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Grass and caves handled easily!\n"
# 964 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "BIKE SHOP$"
# 965 "data/maps/CeruleanCity_Frlg/scripts.pory"

# 966 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_Text_GymSign::
# 967 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 647 "data/maps/CeruleanCity_Frlg/scripts.pory"
# 968 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "CERULEAN CITY POKéMON GYM\n"
# 969 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "LEADER: MISTY\l"
# 970 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "The Tomboyish Mermaid!$"
