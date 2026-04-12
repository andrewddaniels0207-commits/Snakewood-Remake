PowerPlant_Frlg_MapScripts::
# 2 "data/maps/PowerPlant_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PowerPlant_OnResume
# 3 "data/maps/PowerPlant_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PowerPlant_OnTransition
	.byte 0


PowerPlant_OnResume::
# 7 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, PowerPlant_OnResume_2
PowerPlant_OnResume_1:
	end

PowerPlant_OnResume_2:
# 8 "data/maps/PowerPlant_Frlg/scripts.pory"
	call PowerPlant_EventScript_TryRemoveStaticMon
	goto PowerPlant_OnResume_1


PowerPlant_EventScript_TryRemoveStaticMon::
# 14 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne PowerPlant_EventScript_TryRemoveStaticMon_2
PowerPlant_EventScript_TryRemoveStaticMon_1:
# 18 "data/maps/PowerPlant_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

PowerPlant_EventScript_TryRemoveStaticMon_2:
# 16 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto PowerPlant_EventScript_TryRemoveStaticMon_1


PowerPlant_OnTransition::
# 23 "data/maps/PowerPlant_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POWER_PLANT
# 24 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_ZAPDOS, PowerPlant_OnTransition_2
PowerPlant_OnTransition_1:
# 27 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1, PowerPlant_OnTransition_5
PowerPlant_OnTransition_4:
# 30 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2, PowerPlant_OnTransition_8
PowerPlant_OnTransition_7:
	end

PowerPlant_OnTransition_2:
# 25 "data/maps/PowerPlant_Frlg/scripts.pory"
	call PowerPlant_EventScript_ShowZapdos
	goto PowerPlant_OnTransition_1

PowerPlant_OnTransition_5:
# 28 "data/maps/PowerPlant_Frlg/scripts.pory"
	call PowerPlant_EventScript_ShowElectrode1
	goto PowerPlant_OnTransition_4

PowerPlant_OnTransition_8:
# 31 "data/maps/PowerPlant_Frlg/scripts.pory"
	call PowerPlant_EventScript_ShowElectrode2
	goto PowerPlant_OnTransition_7


PowerPlant_EventScript_ShowZapdos::
# 37 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_ZAPDOS
	return


PowerPlant_EventScript_ShowElectrode1::
# 42 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_1
	return


PowerPlant_EventScript_ShowElectrode2::
# 47 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_2
	return


PowerPlant_EventScript_Zapdos::
# 52 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock
# 53 "data/maps/PowerPlant_Frlg/scripts.pory"
	faceplayer
# 54 "data/maps/PowerPlant_Frlg/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 50
# 55 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitse
# 56 "data/maps/PowerPlant_Frlg/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 57 "data/maps/PowerPlant_Frlg/scripts.pory"
	message Text_Gyaoo
# 58 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmessage
# 59 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmoncry
# 60 "data/maps/PowerPlant_Frlg/scripts.pory"
	delay 10
# 61 "data/maps/PowerPlant_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 62 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitbuttonpress
# 63 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 64 "data/maps/PowerPlant_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 65 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitstate
# 66 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 67 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 68 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PowerPlant_EventScript_Zapdos_2
PowerPlant_EventScript_Zapdos_1:
# 71 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq PowerPlant_EventScript_Zapdos_5
PowerPlant_EventScript_Zapdos_4:
# 74 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq PowerPlant_EventScript_Zapdos_8
PowerPlant_EventScript_Zapdos_7:
# 77 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
# 78 "data/maps/PowerPlant_Frlg/scripts.pory"
	release
	end

PowerPlant_EventScript_Zapdos_2:
# 69 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_DefeatedZapdos
	goto PowerPlant_EventScript_Zapdos_1

PowerPlant_EventScript_Zapdos_5:
# 72 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_RanFromZapdos
	goto PowerPlant_EventScript_Zapdos_4

PowerPlant_EventScript_Zapdos_8:
# 75 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_RanFromZapdos
	goto PowerPlant_EventScript_Zapdos_7


PowerPlant_EventScript_DefeatedZapdos::
# 83 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
# 84 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
	end


PowerPlant_EventScript_RanFromZapdos::
# 89 "data/maps/PowerPlant_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 90 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	end


PowerPlant_EventScript_Electrode1::
# 95 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock
# 96 "data/maps/PowerPlant_Frlg/scripts.pory"
	faceplayer
# 97 "data/maps/PowerPlant_Frlg/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 34
# 98 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitse
# 99 "data/maps/PowerPlant_Frlg/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 100 "data/maps/PowerPlant_Frlg/scripts.pory"
	delay 40
# 101 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmoncry
# 102 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 103 "data/maps/PowerPlant_Frlg/scripts.pory"
	dowildbattle
# 104 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 105 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 106 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PowerPlant_EventScript_Electrode1_2
PowerPlant_EventScript_Electrode1_1:
# 109 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq PowerPlant_EventScript_Electrode1_5
PowerPlant_EventScript_Electrode1_4:
# 112 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq PowerPlant_EventScript_Electrode1_8
PowerPlant_EventScript_Electrode1_7:
# 115 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
# 116 "data/maps/PowerPlant_Frlg/scripts.pory"
	release
	end

PowerPlant_EventScript_Electrode1_2:
# 107 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode1
	goto PowerPlant_EventScript_Electrode1_1

PowerPlant_EventScript_Electrode1_5:
# 110 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode1
	goto PowerPlant_EventScript_Electrode1_4

PowerPlant_EventScript_Electrode1_8:
# 113 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode1
	goto PowerPlant_EventScript_Electrode1_7


PowerPlant_EventScript_FoughtElectrode1::
# 121 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
# 122 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
	end


PowerPlant_EventScript_Electrode2::
# 127 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock
# 128 "data/maps/PowerPlant_Frlg/scripts.pory"
	faceplayer
# 129 "data/maps/PowerPlant_Frlg/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 34
# 130 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitse
# 131 "data/maps/PowerPlant_Frlg/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 132 "data/maps/PowerPlant_Frlg/scripts.pory"
	delay 40
# 133 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmoncry
# 134 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 135 "data/maps/PowerPlant_Frlg/scripts.pory"
	dowildbattle
# 136 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 137 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 138 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PowerPlant_EventScript_Electrode2_2
PowerPlant_EventScript_Electrode2_1:
# 141 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq PowerPlant_EventScript_Electrode2_5
PowerPlant_EventScript_Electrode2_4:
# 144 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq PowerPlant_EventScript_Electrode2_8
PowerPlant_EventScript_Electrode2_7:
# 147 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
# 148 "data/maps/PowerPlant_Frlg/scripts.pory"
	release
	end

PowerPlant_EventScript_Electrode2_2:
# 139 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode2
	goto PowerPlant_EventScript_Electrode2_1

PowerPlant_EventScript_Electrode2_5:
# 142 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode2
	goto PowerPlant_EventScript_Electrode2_4

PowerPlant_EventScript_Electrode2_8:
# 145 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode2
	goto PowerPlant_EventScript_Electrode2_7


PowerPlant_EventScript_FoughtElectrode2::
# 153 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
# 154 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
	end

