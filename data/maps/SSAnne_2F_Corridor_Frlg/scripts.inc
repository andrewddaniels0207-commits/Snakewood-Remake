SSAnne_2F_Corridor_Frlg_MapScripts::
	.byte 0


SSAnne_2F_Corridor_EventScript_RivalTriggerLeft::
# 4 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	lockall
# 5 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 6 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
	end


SSAnne_2F_Corridor_EventScript_RivalTriggerMid::
# 11 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	lockall
# 12 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
	end


SSAnne_2F_Corridor_EventScript_RivalTriggerRight::
# 18 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	lockall
# 19 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 20 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
	end


SSAnne_2F_Corridor_EventScript_RivalTrigger::
# 25 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 26 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	playse SE_EXIT
# 27 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 5
# 28 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 29 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	addobject LOCALID_SS_ANNE_RIVAL
# 30 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 10
# 31 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 32 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
# 33 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 20
# 34 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_2
SSAnne_2F_Corridor_EventScript_RivalTrigger_1:
# 37 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_5
SSAnne_2F_Corridor_EventScript_RivalTrigger_4:
# 40 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_8
SSAnne_2F_Corridor_EventScript_RivalTrigger_7:
# 43 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalIntro
# 44 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SS_ANNE_RIVAL
# 45 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_11
SSAnne_2F_Corridor_EventScript_RivalTrigger_10:
# 48 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_14
SSAnne_2F_Corridor_EventScript_RivalTrigger_13:
# 51 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_17
SSAnne_2F_Corridor_EventScript_RivalTrigger_16:
# 54 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalPostBattle
# 55 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	closemessage
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 10
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 58 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_20
SSAnne_2F_Corridor_EventScript_RivalTrigger_19:
# 61 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_23
SSAnne_2F_Corridor_EventScript_RivalTrigger_22:
# 64 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SSAnne_2F_Corridor_EventScript_RivalTrigger_26
SSAnne_2F_Corridor_EventScript_RivalTrigger_25:
# 67 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	fadedefaultbgm
# 68 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	removeobject LOCALID_SS_ANNE_RIVAL
# 69 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
# 70 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	releaseall
	end

SSAnne_2F_Corridor_EventScript_RivalTrigger_2:
# 35 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalApproachLeft
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_1

SSAnne_2F_Corridor_EventScript_RivalTrigger_5:
# 38 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalApproachMid
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_4

SSAnne_2F_Corridor_EventScript_RivalTrigger_8:
# 41 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalApproachRight
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_7

SSAnne_2F_Corridor_EventScript_RivalTrigger_11:
# 46 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalSquirtle
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_10

SSAnne_2F_Corridor_EventScript_RivalTrigger_14:
# 49 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalBulbasaur
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_13

SSAnne_2F_Corridor_EventScript_RivalTrigger_17:
# 52 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalCharmander
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_16

SSAnne_2F_Corridor_EventScript_RivalTrigger_20:
# 59 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalExitLeft
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_19

SSAnne_2F_Corridor_EventScript_RivalTrigger_23:
# 62 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalExitMid
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_22

SSAnne_2F_Corridor_EventScript_RivalTrigger_26:
# 65 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	call SSAnne_2F_Corridor_EventScript_RivalExitRight
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_25


SSAnne_2F_Corridor_EventScript_RivalApproachLeft::
# 75 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachLeft
# 76 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
	return


SSAnne_2F_Corridor_EventScript_RivalApproachMid::
# 81 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachMid
# 82 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_2F_Corridor_Movement_PlayerFaceRivalMid
# 83 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
	return


SSAnne_2F_Corridor_EventScript_RivalApproachRight::
# 88 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_2F_Corridor_Movement_PlayerFaceRivalRight
# 89 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachRight
# 90 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
	return


SSAnne_2F_Corridor_EventScript_RivalSquirtle::
# 95 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_SQUIRTLE, SSAnne_2F_Corridor_Text_RivalDefeat
	return


SSAnne_2F_Corridor_EventScript_RivalBulbasaur::
# 100 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_BULBASAUR, SSAnne_2F_Corridor_Text_RivalDefeat
	return


SSAnne_2F_Corridor_EventScript_RivalCharmander::
# 105 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_CHARMANDER, SSAnne_2F_Corridor_Text_RivalDefeat
	return


SSAnne_2F_Corridor_EventScript_RivalExitLeft::
# 110 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitLeft
# 111 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
	return


SSAnne_2F_Corridor_EventScript_RivalExitMid::
# 116 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitMid
# 117 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
	return


SSAnne_2F_Corridor_EventScript_RivalExitRight::
# 122 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitRight
# 123 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
	return


# 127 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_PlayerFaceRivalRight:
# 128 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 129 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 130 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 131 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 132 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_in_place_faster_left
# 133 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end

# 136 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_PlayerFaceRivalMid:
# 137 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 138 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 139 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 140 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 141 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_in_place_faster_left
# 142 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end

# 145 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachLeft:
# 146 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 147 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 148 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 149 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end

# 152 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachMid:
# 153 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 154 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 155 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 156 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 157 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_in_place_faster_right
# 158 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end

# 161 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachRight:
# 162 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 163 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 164 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 165 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 166 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_right
# 167 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_4
# 168 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end

# 171 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitLeft:
# 172 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_right
# 173 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 174 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 175 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 176 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 177 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 178 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 179 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 180 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end

# 183 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitMid:
# 184 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 185 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 186 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 187 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 188 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 189 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 190 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 191 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end

# 194 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitRight:
# 195 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 196 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 197 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 198 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 199 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 200 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 201 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 202 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_end

SSAnne_2F_Corridor_EventScript_Sailor::
# 206 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_ThisShipIsLuxuryLiner, MSGBOX_NPC
	end


SSAnne_2F_Corridor_Text_ThisShipIsLuxuryLiner::
# 210 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "This ship, she is a luxury liner for\n"
	.string "TRAINERS of the world!\p"
	.string "At every port, we hold parties with\n"
	.string "invited TRAINERS.$"

SSAnne_2F_Corridor_Text_RivalIntro::
# 217 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "{RIVAL}: Bonjour!\n"
	.string "{PLAYER}!\p"
	.string "Imagine seeing you here!\n"
	.string "{PLAYER}, were you really invited?\p"
	.string "So how's your POKéDEX coming?\p"
	.string "I already caught 40 kinds, pal.\n"
	.string "Different kinds are everywhere.\p"
	.string "Crawl around in grassy areas, and\n"
	.string "look hard for them.$"

SSAnne_2F_Corridor_Text_RivalDefeat::
# 229 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "Humph!\p"
	.string "At least you're raising your\n"
	.string "POKéMON!$"

SSAnne_2F_Corridor_Text_RivalVictory::
# 235 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "{PLAYER}..！\n"
	.string "ふなよい　してるのか！\p"
	.string "もっと　からだ\n"
	.string "きたえた　ほうが　いいぜ！$"

SSAnne_2F_Corridor_Text_RivalPostBattle::
# 242 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "{RIVAL}: I heard there was a CUT\n"
	.string "master on board.\p"
	.string "But he was just a seasick old man!\p"
	.string "CUT itself is really useful.\n"
	.string "Yup, it'll be handy.\p"
	.string "You should go see him, too.\n"
	.string "Smell ya!$"
