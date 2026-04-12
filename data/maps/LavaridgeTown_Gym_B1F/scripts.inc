# 1 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_MapScripts::
# 3 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 2 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 4 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_B1F_OnTransition
# 5 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 7 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 8 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_OnTransition::
# 9 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 6 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 10 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	call LavaridgeTown_Gym_B1F_EventScript_SetTrainerTempVars
# 11 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 7 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 12 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	call LavaridgeTown_Gym_B1F_EventScript_CheckBuryTrainers
# 13 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 15 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 16 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetTrainerTempVars::
# 17 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 12 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 18 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_7, 0
# 19 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 13 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 20 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_8, 0
# 21 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 14 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 22 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_9, 0
# 23 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 15 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 24 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_A, 0
# 25 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 16 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 26 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_EventScript_SetJaceTempVar
# 27 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 17 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 28 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_7, 1
# 29 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 30 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 31 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 32 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetJaceTempVar::
# 33 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 21 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 34 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JACE, LavaridgeTown_Gym_B1F_EventScript_SetJeffTempVar
# 35 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 22 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 36 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_8, 1
# 37 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 38 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 39 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 40 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetJeffTempVar::
# 41 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 26 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 42 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JEFF, LavaridgeTown_Gym_B1F_EventScript_SetEliTempVar
# 43 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 27 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 44 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_9, 1
# 45 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 46 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 47 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 48 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetEliTempVar::
# 49 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 31 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 50 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_ELI, LavaridgeTown_Gym_B1F_EventScript_EndSetTrainerTempVars
# 51 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 32 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 52 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_A, 1
# 53 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 54 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 55 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 56 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_EndSetTrainerTempVars::
# 57 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 58 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 59 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 60 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryTrainers::
# 61 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 40 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 62 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_EventScript_CheckBuryJace
# 63 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 41 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 64 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_KEEGAN, MOVEMENT_TYPE_BURIED
# 65 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 66 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 67 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 68 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryJace::
# 69 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 45 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 70 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JACE, LavaridgeTown_Gym_B1F_EventScript_CheckBuryJeff
# 71 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 46 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 72 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_JACE, MOVEMENT_TYPE_BURIED
# 73 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 74 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 75 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 76 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryJeff::
# 77 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 50 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 78 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JEFF, LavaridgeTown_Gym_B1F_EventScript_CheckBuryEli
# 79 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 51 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 80 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_JEFF, MOVEMENT_TYPE_BURIED
# 81 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 82 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 83 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 84 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryEli::
# 85 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 55 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 86 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_ELI, LavaridgeTown_Gym_B1F_EventScript_EndCheckBuryTrainers
# 87 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 56 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
# 88 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_ELI, MOVEMENT_TYPE_BURIED
# 89 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 90 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 91 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 92 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_EndCheckBuryTrainers::
# 93 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
