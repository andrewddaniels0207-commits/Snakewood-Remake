CeruleanCave_B1F_Frlg_MapScripts::
# 2 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CeruleanCave_B1F_OnResume
# 3 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCave_B1F_OnTransition
	.byte 0


CeruleanCave_B1F_OnResume::
# 7 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, CeruleanCave_B1F_OnResume_2
CeruleanCave_B1F_OnResume_1:
	end

CeruleanCave_B1F_OnResume_2:
# 8 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	call CeruleanCave_B1F_EventScript_TryRemoveMewtwo
	goto CeruleanCave_B1F_OnResume_1


CeruleanCave_B1F_EventScript_TryRemoveMewtwo::
# 14 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne CeruleanCave_B1F_EventScript_TryRemoveMewtwo_2
CeruleanCave_B1F_EventScript_TryRemoveMewtwo_1:
# 18 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

CeruleanCave_B1F_EventScript_TryRemoveMewtwo_2:
# 16 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto CeruleanCave_B1F_EventScript_TryRemoveMewtwo_1


CeruleanCave_B1F_OnTransition::
# 23 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_MEWTWO, CeruleanCave_B1F_OnTransition_2
CeruleanCave_B1F_OnTransition_1:
	end

CeruleanCave_B1F_OnTransition_2:
# 24 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	call CeruleanCave_B1F_EventScript_ShowMewtwo
	goto CeruleanCave_B1F_OnTransition_1


CeruleanCave_B1F_EventScript_ShowMewtwo::
# 30 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_MEWTWO
	return


CeruleanCave_B1F_EventScript_Mewtwo::
# 35 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	lock
# 36 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	faceplayer
# 37 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitse
# 38 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 39 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	message CeruleanCave_B1F_Text_Mew
# 40 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitmessage
# 41 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitmoncry
# 42 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	delay 20
# 43 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 44 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitbuttonpress
# 45 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setwildbattle SPECIES_MEWTWO, 70
# 46 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 47 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 48 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitstate
# 49 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 50 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 51 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CeruleanCave_B1F_EventScript_Mewtwo_2
CeruleanCave_B1F_EventScript_Mewtwo_1:
# 54 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CeruleanCave_B1F_EventScript_Mewtwo_5
CeruleanCave_B1F_EventScript_Mewtwo_4:
# 57 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq CeruleanCave_B1F_EventScript_Mewtwo_8
CeruleanCave_B1F_EventScript_Mewtwo_7:
# 60 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
# 61 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	release
	end

CeruleanCave_B1F_EventScript_Mewtwo_2:
# 52 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_EventScript_DefeatedMewtwo
	goto CeruleanCave_B1F_EventScript_Mewtwo_1

CeruleanCave_B1F_EventScript_Mewtwo_5:
# 55 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_EventScript_RanFromMewtwo
	goto CeruleanCave_B1F_EventScript_Mewtwo_4

CeruleanCave_B1F_EventScript_Mewtwo_8:
# 58 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_EventScript_RanFromMewtwo
	goto CeruleanCave_B1F_EventScript_Mewtwo_7


CeruleanCave_B1F_EventScript_DefeatedMewtwo::
# 66 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
# 67 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
	end


CeruleanCave_B1F_EventScript_RanFromMewtwo::
# 72 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEWTWO
# 73 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	end


CeruleanCave_B1F_Text_Mew::
# 77 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	.string "Mew!$"
