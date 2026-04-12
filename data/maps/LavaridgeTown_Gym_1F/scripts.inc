# 1 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_MapScripts::
# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.byte 0
# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnTransition::
# 9 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery::
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_2
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery_1:
# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_Flannery_5
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery_4:
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery_2:
# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_1
# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery_5:
# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_4
# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_2
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_1:
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_2:
# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_1
# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_GiveOverheat2_2
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2_1:
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2_2:
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GiveOverheat2_1
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_GiveOverheat_2
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat_1:
# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat_2:
# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto Common_EventScript_BagIsFull
# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GiveOverheat_1
# 222 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 224 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 225 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 226 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_COLE, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 238 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 241 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 242 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, 1
# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq LavaridgeTown_Gym_EventScript_CheckTrainerScript_2
# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript_1:
# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript_2:
# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto EventScript_GotoTrainerScript
# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_EventScript_CheckTrainerScript_1
# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_AXLE, TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_KEEGAN, TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 275 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 277 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_DANIELLE, TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 279 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald::
# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_GERALD, TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JACE, TRAINER_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff::
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JEFF, TRAINER_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 302 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ELI, TRAINER_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 321 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuide_2
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide_1:
# 323 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 324 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 326 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 328 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 329 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide_2:
# 330 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 332 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymGuide_1
# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 334 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 335 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 337 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 339 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 340 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 343 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 344 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 345 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 347 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_LeftGymStatue_2
# 348 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue_1:
# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 350 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 351 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 353 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue_2:
# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 355 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 356 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_LeftGymStatue_1
# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 358 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 360 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 362 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 363 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_RightGymStatue_2
# 364 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue_1:
# 365 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 368 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 369 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue_2:
# 370 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_RightGymStatue_1
# 373 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 374 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 376 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 378 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 379 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 381 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 382 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 384 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 385 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 386 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 387 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 388 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 389 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 390 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 391 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice::
# 392 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 393 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 394 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 395 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE's GYM LEADER FLANNERY\n"
# 396 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "uses FIRE-type POKéMON.\p"
# 397 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Her passion for POKéMON burns stronger\n"
# 398 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "and hotter than a volcano.\p"
# 399 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't get too close to her--you'll burn!\n"
# 400 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hose her down with water and then\l"
# 401 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "go for it!$"
# 402 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 403 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory::
# 404 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 405 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yow! That was a scorching-hot battle!$"
# 406 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 407 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro::
# 408 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 409 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Owowowowow!\n"
# 410 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yikes, it's hot!$"
# 411 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 412 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat::
# 413 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 414 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm blinded by sweat in my eyes…$"
# 415 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 416 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle::
# 417 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 418 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Being buried in hot sand promotes\n"
# 419 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "circulation.\p"
# 420 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's effective for healing pain in\n"
# 421 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your joints.$"
# 422 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 423 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro::
# 424 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 425 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm trying to relieve my stress.\n"
# 426 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't come along and stress me out!$"
# 427 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 428 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat::
# 429 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 430 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hope FLANNERY flames you good!$"
# 431 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 432 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle::
# 433 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 434 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Haaah… Whew…\p"
# 435 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you spend too much time buried in\n"
# 436 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot sand, it tuckers you out…$"
# 437 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 438 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganIntro::
# 439 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 440 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You must be getting tired by now.\n"
# 441 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You'd like to rest in the hot sand,\l"
# 442 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "wouldn't you?\p"
# 443 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But you should know that maintaining\n"
# 444 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your willpower is an important ability\l"
# 445 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "for all TRAINERS.$"
# 446 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 447 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganDefeat::
# 448 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 449 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Play with fire, and be burned…$"
# 450 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 451 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganPostBattle::
# 452 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 453 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your skill is real…\n"
# 454 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But our LEADER FLANNERY is strong.\p"
# 455 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you don't watch yourself, you'll be\n"
# 456 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "burned seriously.$"
# 457 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 458 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro::
# 459 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 460 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Can your POKéMON withstand\n"
# 461 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392-degree heat?$"
# 462 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 463 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat::
# 464 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 465 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It didn't burn hotly enough…$"
# 466 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 467 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle::
# 468 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 469 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The temperature of magma is\n"
# 470 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392 degrees.\p"
# 471 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your POKéMON beat me, so they should\n"
# 472 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "easily survive in magma.$"
# 473 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 474 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro::
# 475 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 476 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Um…\n"
# 477 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Okay, I'll battle with you.$"
# 478 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 479 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat::
# 480 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 481 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, but you're too strong.$"
# 482 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 483 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle::
# 484 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 485 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm going to be a pretty and strong\n"
# 486 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "TRAINER just like FLANNERY.$"
# 487 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 488 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro::
# 489 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 490 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Come on, get with it!\n"
# 491 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's go before my feelings cool!$"
# 492 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 493 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat::
# 494 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 495 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's so hot, and yet my heart is\n"
# 496 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "clutched by ice…$"
# 497 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 498 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle::
# 499 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 500 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The way the battling spirit burns\n"
# 501 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "within you, you may stand a chance\l"
# 502 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "against our LEADER.$"
# 503 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 504 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffIntro::
# 505 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 506 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "See how the flames blaze wildly?\n"
# 507 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "They flare in anticipation of my win!$"
# 508 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 509 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffDefeat::
# 510 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 511 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Something didn't go right.$"
# 512 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 513 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffPostBattle::
# 514 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 515 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, so what? I say so what?\n"
# 516 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I can walk on hot coals barefoot!\p"
# 517 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "…Don't even think about trying it!$"
# 518 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 519 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro::
# 520 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 521 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "As much as I love mountains,\n"
# 522 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I especially love volcanoes.$"
# 523 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 524 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat::
# 525 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 526 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, it seems to me I lost without\n"
# 527 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ever being in control.$"
# 528 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 529 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle::
# 530 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 531 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I stay here because I became a fan\n"
# 532 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of FLANNERY's power.\p"
# 533 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hehehehe.$"
# 534 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 535 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro::
# 536 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 537 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Welcome… No, wait.\p"
# 538 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Puny TRAINER, how good to see you've\n"
# 539 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "made it here!\p"
# 540 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been entrusted with the…\n"
# 541 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No, wait.\p"
# 542 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I am FLANNERY, and I'm the GYM\n"
# 543 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LEADER here!\p"
# 544 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Uh…\n"
# 545 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Dare not underestimate me, though\l"
# 546 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been LEADER only a short time!\p"
# 547 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "With skills inherited from my grand-\n"
# 548 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "father, I shall, uh…demonstrate the\l"
# 549 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot moves we have honed on this land!$"
# 550 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 551 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat::
# 552 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 399 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 553 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh…\n"
# 554 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I guess I was trying too hard…\p"
# 555 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I… I've only recently become\n"
# 556 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "a GYM LEADER.\p"
# 557 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I tried too hard to be someone\n"
# 558 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm not.\p"
# 559 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have to do things my natural way. If\n"
# 560 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I don't, my POKéMON will be confused.\p"
# 561 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Thanks for teaching me that.\n"
# 562 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "For that, you deserve this.$"
# 563 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 564 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge::
# 565 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 412 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 566 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} received the HEAT BADGE\n"
# 567 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "from FLANNERY.$"
# 568 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 569 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis::
# 570 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 417 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 571 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you have a HEAT BADGE, all POKéMON\n"
# 572 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "up to Level 50, even those you get in\l"
# 573 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "trades from other people, will obey\l"
# 574 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "you completely.\p"
# 575 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And, it lets POKéMON use the HM move\n"
# 576 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "STRENGTH outside of battle.\p"
# 577 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "This is a token of my appreciation.\n"
# 578 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't be shy about taking it!$"
# 579 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 580 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat::
# 581 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 428 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 582 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That TM50 contains OVERHEAT.\p"
# 583 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That move inflicts serious damage on\n"
# 584 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the opponent.\p"
# 585 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But it also sharply cuts the SP. ATK\n"
# 586 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of the POKéMON using it. It might not\l"
# 587 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "be suitable for longer battles.$"
# 588 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 589 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery::
# 590 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 437 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 591 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER FLANNERY\n"
# 592 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 593 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 594 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle::
# 595 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 442 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 596 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your power reminds me of someone…\p"
# 597 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh! I know! You battle like NORMAN,\n"
# 598 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the GYM LEADER of PETALBURG.$"
# 599 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 600 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue::
# 601 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 448 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 602 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM$"
# 603 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 604 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified::
# 605 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 452 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 606 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\p"
# 607 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY'S CERTIFIED TRAINERS:\n"
# 608 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 609 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 610 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch::
# 611 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 458 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 612 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 613 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 614 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 615 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 616 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 617 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 618 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!$"
# 619 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 620 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat::
# 621 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 468 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 622 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Whew!\n"
# 623 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "On the verge of eruption!$"
# 624 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 625 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch::
# 626 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 473 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 627 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: I lost the match,\n"
# 628 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "but I'm completely satisfied.\p"
# 629 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's not often I get to enjoy a battle\n"
# 630 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "this heated.\p"
# 631 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's have another one like this\n"
# 632 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "again sometime!$"
# 633 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 634 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons::
# 635 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 482 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
# 636 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 637 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 638 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 639 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 640 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 641 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 642 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!\p"
# 643 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, wait. Do you only have one POKéMON\n"
# 644 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "that can battle?\p"
# 645 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hate to say this, but when you come\n"
# 646 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "see me, bring at least two POKéMON.$"
