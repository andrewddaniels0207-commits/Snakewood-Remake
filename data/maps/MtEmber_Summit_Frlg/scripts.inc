MtEmber_Summit_Frlg_MapScripts::
# 2 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Summit_OnTransition
# 3 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtEmber_Summit_OnResume
	.byte 0


MtEmber_Summit_OnResume::
# 7 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MtEmber_Summit_OnResume_2
MtEmber_Summit_OnResume_1:
	end

MtEmber_Summit_OnResume_2:
# 8 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	call MtEmber_Summit_EventScript_TryRemoveMoltres
	goto MtEmber_Summit_OnResume_1


MtEmber_Summit_EventScript_TryRemoveMoltres::
# 14 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne MtEmber_Summit_EventScript_TryRemoveMoltres_2
MtEmber_Summit_EventScript_TryRemoveMoltres_1:
# 18 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

MtEmber_Summit_EventScript_TryRemoveMoltres_2:
# 16 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MtEmber_Summit_EventScript_TryRemoveMoltres_1


MtEmber_Summit_OnTransition::
# 23 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_MOLTRES, MtEmber_Summit_OnTransition_2
MtEmber_Summit_OnTransition_1:
	end

MtEmber_Summit_OnTransition_2:
# 24 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	call MtEmber_Summit_EventScript_ShowMoltres
	goto MtEmber_Summit_OnTransition_1


MtEmber_Summit_EventScript_ShowMoltres::
# 30 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	clearflag FLAG_HIDE_MOLTRES
	return


MtEmber_Summit_EventScript_Moltres::
# 35 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	lock
# 36 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	faceplayer
# 37 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 50
# 38 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitse
# 39 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 40 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	message Text_Gyaoo
# 41 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitmessage
# 42 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitmoncry
# 43 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	delay 10
# 44 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 45 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitbuttonpress
# 46 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 47 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 48 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitstate
# 49 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 50 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 51 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtEmber_Summit_EventScript_Moltres_2
MtEmber_Summit_EventScript_Moltres_1:
# 54 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtEmber_Summit_EventScript_Moltres_5
MtEmber_Summit_EventScript_Moltres_4:
# 57 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtEmber_Summit_EventScript_Moltres_8
MtEmber_Summit_EventScript_Moltres_7:
# 60 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 61 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	release
	end

MtEmber_Summit_EventScript_Moltres_2:
# 52 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_EventScript_DefeatedMoltres
	goto MtEmber_Summit_EventScript_Moltres_1

MtEmber_Summit_EventScript_Moltres_5:
# 55 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_EventScript_RanFromMoltres
	goto MtEmber_Summit_EventScript_Moltres_4

MtEmber_Summit_EventScript_Moltres_8:
# 58 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto MtEmber_Summit_EventScript_RanFromMoltres
	goto MtEmber_Summit_EventScript_Moltres_7


MtEmber_Summit_EventScript_DefeatedMoltres::
# 66 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 67 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
	end


MtEmber_Summit_EventScript_RanFromMoltres::
# 72 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES
# 73 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	end

