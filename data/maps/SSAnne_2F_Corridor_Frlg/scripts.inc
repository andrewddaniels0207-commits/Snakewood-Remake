# 1 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Frlg_MapScripts::
# 3 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 6 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTriggerLeft::
# 7 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 4 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 8 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	lockall
# 9 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 5 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 10 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 6 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 12 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
# 13 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	end
# 14 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 15 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 16 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTriggerMid::
# 17 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 11 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 18 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	lockall
# 19 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 12 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 20 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 13 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 22 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
# 23 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	end
# 24 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 25 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 26 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTriggerRight::
# 27 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 18 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 28 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	lockall
# 29 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 19 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 30 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 31 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 20 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 32 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
# 33 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	end
# 34 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 35 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 36 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger::
# 37 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 25 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 38 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 39 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 26 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 40 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	playse SE_EXIT
# 41 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 27 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 42 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 5
# 43 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 28 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 44 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 45 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 29 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 46 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	addobject LOCALID_SS_ANNE_RIVAL
# 47 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 30 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 48 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 10
# 49 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 31 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 50 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 51 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 32 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 52 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
# 53 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 33 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 54 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 20
# 55 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 34 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_2
# 58 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_1:
# 59 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 37 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 60 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 61 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_5
# 62 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_4:
# 63 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 40 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 64 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 65 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_8
# 66 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_7:
# 67 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 43 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 68 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalIntro
# 69 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 44 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 70 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SS_ANNE_RIVAL
# 71 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 45 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 72 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
# 73 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_11
# 74 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_10:
# 75 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 48 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 76 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
# 77 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_14
# 78 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_13:
# 79 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 51 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 80 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
# 81 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_17
# 82 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_16:
# 83 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 54 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 84 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalPostBattle
# 85 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 55 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 86 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	closemessage
# 87 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 88 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 10
# 89 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 90 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 91 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 58 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 92 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 93 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_20
# 94 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_19:
# 95 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 61 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 96 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 97 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_23
# 98 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_22:
# 99 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 64 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 100 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 101 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_26
# 102 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_25:
# 103 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 67 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 104 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	fadedefaultbgm
# 105 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 68 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 106 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	removeobject LOCALID_SS_ANNE_RIVAL
# 107 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 69 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 108 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
# 109 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 70 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 110 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	releaseall
# 111 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	end
# 112 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 113 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_2:
# 114 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 35 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 115 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalApproachLeft
# 116 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_1
# 117 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 118 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_5:
# 119 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 38 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 120 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalApproachMid
# 121 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_4
# 122 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 123 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_8:
# 124 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 41 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 125 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalApproachRight
# 126 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_7
# 127 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 128 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_11:
# 129 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 46 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 130 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalSquirtle
# 131 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_10
# 132 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 133 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_14:
# 134 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 49 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 135 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalBulbasaur
# 136 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_13
# 137 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 138 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_17:
# 139 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 52 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 140 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalCharmander
# 141 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_16
# 142 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 143 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_20:
# 144 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 59 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 145 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalExitLeft
# 146 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_19
# 147 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 148 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_23:
# 149 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 62 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 150 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalExitMid
# 151 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_22
# 152 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 153 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_26:
# 154 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 65 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 155 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalExitRight
# 156 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_25
# 157 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 158 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 159 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalApproachLeft::
# 160 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 75 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 161 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachLeft
# 162 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 76 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 163 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
# 164 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	return
# 165 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 166 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 167 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalApproachMid::
# 168 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 81 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 169 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachMid
# 170 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 82 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 171 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_2F_Corridor_Movement_PlayerFaceRivalMid
# 172 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 83 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 173 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
# 174 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	return
# 175 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 176 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 177 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalApproachRight::
# 178 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 88 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 179 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_2F_Corridor_Movement_PlayerFaceRivalRight
# 180 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 89 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 181 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachRight
# 182 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 90 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 183 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
# 184 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	return
# 185 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 186 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 187 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalSquirtle::
# 188 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 95 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 189 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_SQUIRTLE, SSAnne_2F_Corridor_Text_RivalDefeat
# 190 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	return
# 191 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 192 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 193 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalBulbasaur::
# 194 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 100 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 195 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_BULBASAUR, SSAnne_2F_Corridor_Text_RivalDefeat
# 196 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	return
# 197 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 198 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 199 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalCharmander::
# 200 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 105 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 201 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_CHARMANDER, SSAnne_2F_Corridor_Text_RivalDefeat
# 202 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	return
# 203 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 204 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 205 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalExitLeft::
# 206 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 110 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 207 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitLeft
# 208 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 111 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 209 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
# 210 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	return
# 211 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 212 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 213 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalExitMid::
# 214 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 116 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 215 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitMid
# 216 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 117 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 217 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
# 218 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	return
# 219 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 220 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 221 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalExitRight::
# 222 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 122 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 223 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitRight
# 224 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 123 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 225 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
# 226 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	return
# 227 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 228 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 229 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 127 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 230 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_PlayerFaceRivalRight:
# 231 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 128 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 232 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 233 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 129 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 234 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 235 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 130 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 236 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 237 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 131 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 238 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 239 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 132 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 240 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_in_place_faster_left
# 241 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 133 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 242 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end
# 243 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 244 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 136 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 245 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_PlayerFaceRivalMid:
# 246 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 137 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 247 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 248 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 138 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 249 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 250 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 139 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 251 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 252 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 140 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 253 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 254 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 141 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 255 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_in_place_faster_left
# 256 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 142 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 257 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end
# 258 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 259 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 145 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 260 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachLeft:
# 261 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 146 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 262 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 263 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 147 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 264 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 265 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 148 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 266 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 267 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 149 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 268 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end
# 269 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 270 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 152 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 271 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachMid:
# 272 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 153 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 273 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 274 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 154 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 275 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 276 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 155 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 277 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 278 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 156 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 279 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 280 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 157 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 281 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_in_place_faster_right
# 282 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 158 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 283 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end
# 284 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 285 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 161 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 286 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachRight:
# 287 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 162 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 288 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 289 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 163 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 290 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 291 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 164 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 292 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 293 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 165 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 294 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 295 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 166 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 296 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_right
# 297 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 167 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 298 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_4
# 299 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 168 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 300 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end
# 301 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 302 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 171 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 303 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitLeft:
# 304 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 172 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 305 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_right
# 306 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 173 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 307 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 308 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 174 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 309 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 310 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 175 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 311 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 312 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 176 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 313 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 314 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 177 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 315 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 316 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 178 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 317 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 318 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 179 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 319 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 320 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 180 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 321 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end
# 322 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 323 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 183 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 324 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitMid:
# 325 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 184 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 326 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 327 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 185 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 328 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 329 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 186 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 330 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 331 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 187 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 332 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 333 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 188 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 334 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 335 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 189 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 336 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 337 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 190 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 338 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 339 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 191 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 340 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end
# 341 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 342 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 194 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 343 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitRight:
# 344 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 195 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 345 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 346 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 196 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 347 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 348 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 197 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 349 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 350 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 198 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 351 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 352 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 199 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 353 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 354 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 200 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 355 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 356 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 201 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 357 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 358 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 202 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 359 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end
# 360 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 361 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_Sailor::
# 362 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 206 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 363 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_ThisShipIsLuxuryLiner, MSGBOX_NPC
# 364 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	end
# 365 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 366 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 367 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Text_ThisShipIsLuxuryLiner::
# 368 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 210 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 369 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "This ship, she is a luxury liner for\n"
# 370 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "TRAINERS of the world!\p"
# 371 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "At every port, we hold parties with\n"
# 372 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "invited TRAINERS.$"
# 373 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 374 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Text_RivalIntro::
# 375 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 217 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 376 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "{RIVAL}: Bonjour!\n"
# 377 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 378 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "Imagine seeing you here!\n"
# 379 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "{PLAYER}, were you really invited?\p"
# 380 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "So how's your POKéDEX coming?\p"
# 381 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "I already caught 40 kinds, pal.\n"
# 382 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "Different kinds are everywhere.\p"
# 383 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "Crawl around in grassy areas, and\n"
# 384 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "look hard for them.$"
# 385 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 386 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Text_RivalDefeat::
# 387 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 229 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 388 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "Humph!\p"
# 389 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "At least you're raising your\n"
# 390 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "POKéMON!$"
# 391 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 392 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Text_RivalVictory::
# 393 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 235 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 394 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "{PLAYER}..！\n"
# 395 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "ふなよい　してるのか！\p"
# 396 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "もっと　からだ\n"
# 397 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "きたえた　ほうが　いいぜ！$"
# 398 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"

# 399 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Text_RivalPostBattle::
# 400 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 242 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
# 401 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "{RIVAL}: I heard there was a CUT\n"
# 402 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "master on board.\p"
# 403 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "But he was just a seasick old man!\p"
# 404 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "CUT itself is really useful.\n"
# 405 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "Yup, it'll be handy.\p"
# 406 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "You should go see him, too.\n"
# 407 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "Smell ya!$"
