# 1 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 2 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_Frlg_MapScripts::
# 3 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 2 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 4 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Summit_OnTransition
# 5 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 3 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 6 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtEmber_Summit_OnResume
# 7 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 9 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 10 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_OnResume::
# 11 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 7 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 12 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MtEmber_Summit_OnResume_2
# 13 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_OnResume_1:
# 14 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	end
# 15 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 16 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_OnResume_2:
# 17 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 8 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 18 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	call MtEmber_Summit_EventScript_TryRemoveMoltres
# 19 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_OnResume_1
# 20 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 21 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 22 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_TryRemoveMoltres::
# 23 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 14 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 24 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 15 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 26 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 27 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_ne MtEmber_Summit_EventScript_TryRemoveMoltres_2
# 28 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_TryRemoveMoltres_1:
# 29 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 18 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 30 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 31 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	return
# 32 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 33 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_TryRemoveMoltres_2:
# 34 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 16 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 35 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 36 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_EventScript_TryRemoveMoltres_1
# 37 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 38 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 39 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_OnTransition::
# 40 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 23 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 41 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_MOLTRES, MtEmber_Summit_OnTransition_2
# 42 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_OnTransition_1:
# 43 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	end
# 44 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 45 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_OnTransition_2:
# 46 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 24 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 47 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	call MtEmber_Summit_EventScript_ShowMoltres
# 48 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_OnTransition_1
# 49 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 50 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 51 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_ShowMoltres::
# 52 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 30 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 53 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	clearflag FLAG_HIDE_MOLTRES
# 54 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	return
# 55 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 56 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 57 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_Moltres::
# 58 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 35 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 59 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	lock
# 60 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 36 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 61 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	faceplayer
# 62 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 37 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 63 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 50
# 64 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 38 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 65 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitse
# 66 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 39 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 67 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 68 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 40 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 69 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	message Text_Gyaoo
# 70 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 41 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 71 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitmessage
# 72 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 42 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 73 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitmoncry
# 74 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 43 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 75 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	delay 10
# 76 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 44 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 77 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 78 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 45 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 79 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitbuttonpress
# 80 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 46 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 81 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 82 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 47 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 83 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 84 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 48 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 85 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitstate
# 86 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 49 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 87 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 88 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 50 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 89 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 90 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 51 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 91 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 92 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_eq MtEmber_Summit_EventScript_Moltres_2
# 93 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_Moltres_1:
# 94 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 54 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 95 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 96 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_eq MtEmber_Summit_EventScript_Moltres_5
# 97 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_Moltres_4:
# 98 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 57 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 99 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 100 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_eq MtEmber_Summit_EventScript_Moltres_8
# 101 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_Moltres_7:
# 102 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 60 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 103 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 104 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 61 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 105 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	release
# 106 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	end
# 107 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 108 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_Moltres_2:
# 109 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 52 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 110 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_EventScript_DefeatedMoltres
# 111 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_EventScript_Moltres_1
# 112 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 113 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_Moltres_5:
# 114 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 55 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 115 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_EventScript_RanFromMoltres
# 116 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_EventScript_Moltres_4
# 117 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 118 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_Moltres_8:
# 119 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 58 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 120 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_EventScript_RanFromMoltres
# 121 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_EventScript_Moltres_7
# 122 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 123 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 124 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_DefeatedMoltres::
# 125 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 66 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 126 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 127 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 67 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 128 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
# 129 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	end
# 130 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 131 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 132 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_RanFromMoltres::
# 133 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 72 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 134 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES
# 135 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 73 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
# 136 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 137 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	end
