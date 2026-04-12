# 1 "data/maps/PowerPlant_Frlg/scripts.pory"

# 2 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_Frlg_MapScripts::
# 3 "data/maps/PowerPlant_Frlg/scripts.pory"
# 2 "data/maps/PowerPlant_Frlg/scripts.pory"
# 4 "data/maps/PowerPlant_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PowerPlant_OnResume
# 5 "data/maps/PowerPlant_Frlg/scripts.pory"
# 3 "data/maps/PowerPlant_Frlg/scripts.pory"
# 6 "data/maps/PowerPlant_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PowerPlant_OnTransition
# 7 "data/maps/PowerPlant_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/PowerPlant_Frlg/scripts.pory"

# 9 "data/maps/PowerPlant_Frlg/scripts.pory"

# 10 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnResume::
# 11 "data/maps/PowerPlant_Frlg/scripts.pory"
# 7 "data/maps/PowerPlant_Frlg/scripts.pory"
# 12 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, PowerPlant_OnResume_2
# 13 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnResume_1:
# 14 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 15 "data/maps/PowerPlant_Frlg/scripts.pory"

# 16 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnResume_2:
# 17 "data/maps/PowerPlant_Frlg/scripts.pory"
# 8 "data/maps/PowerPlant_Frlg/scripts.pory"
# 18 "data/maps/PowerPlant_Frlg/scripts.pory"
	call PowerPlant_EventScript_TryRemoveStaticMon
# 19 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_OnResume_1
# 20 "data/maps/PowerPlant_Frlg/scripts.pory"

# 21 "data/maps/PowerPlant_Frlg/scripts.pory"

# 22 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_TryRemoveStaticMon::
# 23 "data/maps/PowerPlant_Frlg/scripts.pory"
# 14 "data/maps/PowerPlant_Frlg/scripts.pory"
# 24 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/PowerPlant_Frlg/scripts.pory"
# 15 "data/maps/PowerPlant_Frlg/scripts.pory"
# 26 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 27 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_ne PowerPlant_EventScript_TryRemoveStaticMon_2
# 28 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_TryRemoveStaticMon_1:
# 29 "data/maps/PowerPlant_Frlg/scripts.pory"
# 18 "data/maps/PowerPlant_Frlg/scripts.pory"
# 30 "data/maps/PowerPlant_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 31 "data/maps/PowerPlant_Frlg/scripts.pory"
	return
# 32 "data/maps/PowerPlant_Frlg/scripts.pory"

# 33 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_TryRemoveStaticMon_2:
# 34 "data/maps/PowerPlant_Frlg/scripts.pory"
# 16 "data/maps/PowerPlant_Frlg/scripts.pory"
# 35 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 36 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_TryRemoveStaticMon_1
# 37 "data/maps/PowerPlant_Frlg/scripts.pory"

# 38 "data/maps/PowerPlant_Frlg/scripts.pory"

# 39 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnTransition::
# 40 "data/maps/PowerPlant_Frlg/scripts.pory"
# 23 "data/maps/PowerPlant_Frlg/scripts.pory"
# 41 "data/maps/PowerPlant_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POWER_PLANT
# 42 "data/maps/PowerPlant_Frlg/scripts.pory"
# 24 "data/maps/PowerPlant_Frlg/scripts.pory"
# 43 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_ZAPDOS, PowerPlant_OnTransition_2
# 44 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnTransition_1:
# 45 "data/maps/PowerPlant_Frlg/scripts.pory"
# 27 "data/maps/PowerPlant_Frlg/scripts.pory"
# 46 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1, PowerPlant_OnTransition_5
# 47 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnTransition_4:
# 48 "data/maps/PowerPlant_Frlg/scripts.pory"
# 30 "data/maps/PowerPlant_Frlg/scripts.pory"
# 49 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2, PowerPlant_OnTransition_8
# 50 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnTransition_7:
# 51 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 52 "data/maps/PowerPlant_Frlg/scripts.pory"

# 53 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnTransition_2:
# 54 "data/maps/PowerPlant_Frlg/scripts.pory"
# 25 "data/maps/PowerPlant_Frlg/scripts.pory"
# 55 "data/maps/PowerPlant_Frlg/scripts.pory"
	call PowerPlant_EventScript_ShowZapdos
# 56 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_OnTransition_1
# 57 "data/maps/PowerPlant_Frlg/scripts.pory"

# 58 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnTransition_5:
# 59 "data/maps/PowerPlant_Frlg/scripts.pory"
# 28 "data/maps/PowerPlant_Frlg/scripts.pory"
# 60 "data/maps/PowerPlant_Frlg/scripts.pory"
	call PowerPlant_EventScript_ShowElectrode1
# 61 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_OnTransition_4
# 62 "data/maps/PowerPlant_Frlg/scripts.pory"

# 63 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnTransition_8:
# 64 "data/maps/PowerPlant_Frlg/scripts.pory"
# 31 "data/maps/PowerPlant_Frlg/scripts.pory"
# 65 "data/maps/PowerPlant_Frlg/scripts.pory"
	call PowerPlant_EventScript_ShowElectrode2
# 66 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_OnTransition_7
# 67 "data/maps/PowerPlant_Frlg/scripts.pory"

# 68 "data/maps/PowerPlant_Frlg/scripts.pory"

# 69 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_ShowZapdos::
# 70 "data/maps/PowerPlant_Frlg/scripts.pory"
# 37 "data/maps/PowerPlant_Frlg/scripts.pory"
# 71 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_ZAPDOS
# 72 "data/maps/PowerPlant_Frlg/scripts.pory"
	return
# 73 "data/maps/PowerPlant_Frlg/scripts.pory"

# 74 "data/maps/PowerPlant_Frlg/scripts.pory"

# 75 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_ShowElectrode1::
# 76 "data/maps/PowerPlant_Frlg/scripts.pory"
# 42 "data/maps/PowerPlant_Frlg/scripts.pory"
# 77 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_1
# 78 "data/maps/PowerPlant_Frlg/scripts.pory"
	return
# 79 "data/maps/PowerPlant_Frlg/scripts.pory"

# 80 "data/maps/PowerPlant_Frlg/scripts.pory"

# 81 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_ShowElectrode2::
# 82 "data/maps/PowerPlant_Frlg/scripts.pory"
# 47 "data/maps/PowerPlant_Frlg/scripts.pory"
# 83 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_2
# 84 "data/maps/PowerPlant_Frlg/scripts.pory"
	return
# 85 "data/maps/PowerPlant_Frlg/scripts.pory"

# 86 "data/maps/PowerPlant_Frlg/scripts.pory"

# 87 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Zapdos::
# 88 "data/maps/PowerPlant_Frlg/scripts.pory"
# 52 "data/maps/PowerPlant_Frlg/scripts.pory"
# 89 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock
# 90 "data/maps/PowerPlant_Frlg/scripts.pory"
# 53 "data/maps/PowerPlant_Frlg/scripts.pory"
# 91 "data/maps/PowerPlant_Frlg/scripts.pory"
	faceplayer
# 92 "data/maps/PowerPlant_Frlg/scripts.pory"
# 54 "data/maps/PowerPlant_Frlg/scripts.pory"
# 93 "data/maps/PowerPlant_Frlg/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 50
# 94 "data/maps/PowerPlant_Frlg/scripts.pory"
# 55 "data/maps/PowerPlant_Frlg/scripts.pory"
# 95 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitse
# 96 "data/maps/PowerPlant_Frlg/scripts.pory"
# 56 "data/maps/PowerPlant_Frlg/scripts.pory"
# 97 "data/maps/PowerPlant_Frlg/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 98 "data/maps/PowerPlant_Frlg/scripts.pory"
# 57 "data/maps/PowerPlant_Frlg/scripts.pory"
# 99 "data/maps/PowerPlant_Frlg/scripts.pory"
	message Text_Gyaoo
# 100 "data/maps/PowerPlant_Frlg/scripts.pory"
# 58 "data/maps/PowerPlant_Frlg/scripts.pory"
# 101 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmessage
# 102 "data/maps/PowerPlant_Frlg/scripts.pory"
# 59 "data/maps/PowerPlant_Frlg/scripts.pory"
# 103 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmoncry
# 104 "data/maps/PowerPlant_Frlg/scripts.pory"
# 60 "data/maps/PowerPlant_Frlg/scripts.pory"
# 105 "data/maps/PowerPlant_Frlg/scripts.pory"
	delay 10
# 106 "data/maps/PowerPlant_Frlg/scripts.pory"
# 61 "data/maps/PowerPlant_Frlg/scripts.pory"
# 107 "data/maps/PowerPlant_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 108 "data/maps/PowerPlant_Frlg/scripts.pory"
# 62 "data/maps/PowerPlant_Frlg/scripts.pory"
# 109 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitbuttonpress
# 110 "data/maps/PowerPlant_Frlg/scripts.pory"
# 63 "data/maps/PowerPlant_Frlg/scripts.pory"
# 111 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 112 "data/maps/PowerPlant_Frlg/scripts.pory"
# 64 "data/maps/PowerPlant_Frlg/scripts.pory"
# 113 "data/maps/PowerPlant_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 114 "data/maps/PowerPlant_Frlg/scripts.pory"
# 65 "data/maps/PowerPlant_Frlg/scripts.pory"
# 115 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitstate
# 116 "data/maps/PowerPlant_Frlg/scripts.pory"
# 66 "data/maps/PowerPlant_Frlg/scripts.pory"
# 117 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 118 "data/maps/PowerPlant_Frlg/scripts.pory"
# 67 "data/maps/PowerPlant_Frlg/scripts.pory"
# 119 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 120 "data/maps/PowerPlant_Frlg/scripts.pory"
# 68 "data/maps/PowerPlant_Frlg/scripts.pory"
# 121 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 122 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq PowerPlant_EventScript_Zapdos_2
# 123 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Zapdos_1:
# 124 "data/maps/PowerPlant_Frlg/scripts.pory"
# 71 "data/maps/PowerPlant_Frlg/scripts.pory"
# 125 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 126 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq PowerPlant_EventScript_Zapdos_5
# 127 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Zapdos_4:
# 128 "data/maps/PowerPlant_Frlg/scripts.pory"
# 74 "data/maps/PowerPlant_Frlg/scripts.pory"
# 129 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 130 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq PowerPlant_EventScript_Zapdos_8
# 131 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Zapdos_7:
# 132 "data/maps/PowerPlant_Frlg/scripts.pory"
# 77 "data/maps/PowerPlant_Frlg/scripts.pory"
# 133 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
# 134 "data/maps/PowerPlant_Frlg/scripts.pory"
# 78 "data/maps/PowerPlant_Frlg/scripts.pory"
# 135 "data/maps/PowerPlant_Frlg/scripts.pory"
	release
# 136 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 137 "data/maps/PowerPlant_Frlg/scripts.pory"

# 138 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Zapdos_2:
# 139 "data/maps/PowerPlant_Frlg/scripts.pory"
# 69 "data/maps/PowerPlant_Frlg/scripts.pory"
# 140 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_DefeatedZapdos
# 141 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_Zapdos_1
# 142 "data/maps/PowerPlant_Frlg/scripts.pory"

# 143 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Zapdos_5:
# 144 "data/maps/PowerPlant_Frlg/scripts.pory"
# 72 "data/maps/PowerPlant_Frlg/scripts.pory"
# 145 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_RanFromZapdos
# 146 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_Zapdos_4
# 147 "data/maps/PowerPlant_Frlg/scripts.pory"

# 148 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Zapdos_8:
# 149 "data/maps/PowerPlant_Frlg/scripts.pory"
# 75 "data/maps/PowerPlant_Frlg/scripts.pory"
# 150 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_RanFromZapdos
# 151 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_Zapdos_7
# 152 "data/maps/PowerPlant_Frlg/scripts.pory"

# 153 "data/maps/PowerPlant_Frlg/scripts.pory"

# 154 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_DefeatedZapdos::
# 155 "data/maps/PowerPlant_Frlg/scripts.pory"
# 83 "data/maps/PowerPlant_Frlg/scripts.pory"
# 156 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
# 157 "data/maps/PowerPlant_Frlg/scripts.pory"
# 84 "data/maps/PowerPlant_Frlg/scripts.pory"
# 158 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
# 159 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 160 "data/maps/PowerPlant_Frlg/scripts.pory"

# 161 "data/maps/PowerPlant_Frlg/scripts.pory"

# 162 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_RanFromZapdos::
# 163 "data/maps/PowerPlant_Frlg/scripts.pory"
# 89 "data/maps/PowerPlant_Frlg/scripts.pory"
# 164 "data/maps/PowerPlant_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 165 "data/maps/PowerPlant_Frlg/scripts.pory"
# 90 "data/maps/PowerPlant_Frlg/scripts.pory"
# 166 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 167 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 168 "data/maps/PowerPlant_Frlg/scripts.pory"

# 169 "data/maps/PowerPlant_Frlg/scripts.pory"

# 170 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode1::
# 171 "data/maps/PowerPlant_Frlg/scripts.pory"
# 95 "data/maps/PowerPlant_Frlg/scripts.pory"
# 172 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock
# 173 "data/maps/PowerPlant_Frlg/scripts.pory"
# 96 "data/maps/PowerPlant_Frlg/scripts.pory"
# 174 "data/maps/PowerPlant_Frlg/scripts.pory"
	faceplayer
# 175 "data/maps/PowerPlant_Frlg/scripts.pory"
# 97 "data/maps/PowerPlant_Frlg/scripts.pory"
# 176 "data/maps/PowerPlant_Frlg/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 34
# 177 "data/maps/PowerPlant_Frlg/scripts.pory"
# 98 "data/maps/PowerPlant_Frlg/scripts.pory"
# 178 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitse
# 179 "data/maps/PowerPlant_Frlg/scripts.pory"
# 99 "data/maps/PowerPlant_Frlg/scripts.pory"
# 180 "data/maps/PowerPlant_Frlg/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 181 "data/maps/PowerPlant_Frlg/scripts.pory"
# 100 "data/maps/PowerPlant_Frlg/scripts.pory"
# 182 "data/maps/PowerPlant_Frlg/scripts.pory"
	delay 40
# 183 "data/maps/PowerPlant_Frlg/scripts.pory"
# 101 "data/maps/PowerPlant_Frlg/scripts.pory"
# 184 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmoncry
# 185 "data/maps/PowerPlant_Frlg/scripts.pory"
# 102 "data/maps/PowerPlant_Frlg/scripts.pory"
# 186 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 187 "data/maps/PowerPlant_Frlg/scripts.pory"
# 103 "data/maps/PowerPlant_Frlg/scripts.pory"
# 188 "data/maps/PowerPlant_Frlg/scripts.pory"
	dowildbattle
# 189 "data/maps/PowerPlant_Frlg/scripts.pory"
# 104 "data/maps/PowerPlant_Frlg/scripts.pory"
# 190 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 191 "data/maps/PowerPlant_Frlg/scripts.pory"
# 105 "data/maps/PowerPlant_Frlg/scripts.pory"
# 192 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 193 "data/maps/PowerPlant_Frlg/scripts.pory"
# 106 "data/maps/PowerPlant_Frlg/scripts.pory"
# 194 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 195 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq PowerPlant_EventScript_Electrode1_2
# 196 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode1_1:
# 197 "data/maps/PowerPlant_Frlg/scripts.pory"
# 109 "data/maps/PowerPlant_Frlg/scripts.pory"
# 198 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 199 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq PowerPlant_EventScript_Electrode1_5
# 200 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode1_4:
# 201 "data/maps/PowerPlant_Frlg/scripts.pory"
# 112 "data/maps/PowerPlant_Frlg/scripts.pory"
# 202 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 203 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq PowerPlant_EventScript_Electrode1_8
# 204 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode1_7:
# 205 "data/maps/PowerPlant_Frlg/scripts.pory"
# 115 "data/maps/PowerPlant_Frlg/scripts.pory"
# 206 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
# 207 "data/maps/PowerPlant_Frlg/scripts.pory"
# 116 "data/maps/PowerPlant_Frlg/scripts.pory"
# 208 "data/maps/PowerPlant_Frlg/scripts.pory"
	release
# 209 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 210 "data/maps/PowerPlant_Frlg/scripts.pory"

# 211 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode1_2:
# 212 "data/maps/PowerPlant_Frlg/scripts.pory"
# 107 "data/maps/PowerPlant_Frlg/scripts.pory"
# 213 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode1
# 214 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_Electrode1_1
# 215 "data/maps/PowerPlant_Frlg/scripts.pory"

# 216 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode1_5:
# 217 "data/maps/PowerPlant_Frlg/scripts.pory"
# 110 "data/maps/PowerPlant_Frlg/scripts.pory"
# 218 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode1
# 219 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_Electrode1_4
# 220 "data/maps/PowerPlant_Frlg/scripts.pory"

# 221 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode1_8:
# 222 "data/maps/PowerPlant_Frlg/scripts.pory"
# 113 "data/maps/PowerPlant_Frlg/scripts.pory"
# 223 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode1
# 224 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_Electrode1_7
# 225 "data/maps/PowerPlant_Frlg/scripts.pory"

# 226 "data/maps/PowerPlant_Frlg/scripts.pory"

# 227 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_FoughtElectrode1::
# 228 "data/maps/PowerPlant_Frlg/scripts.pory"
# 121 "data/maps/PowerPlant_Frlg/scripts.pory"
# 229 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
# 230 "data/maps/PowerPlant_Frlg/scripts.pory"
# 122 "data/maps/PowerPlant_Frlg/scripts.pory"
# 231 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
# 232 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 233 "data/maps/PowerPlant_Frlg/scripts.pory"

# 234 "data/maps/PowerPlant_Frlg/scripts.pory"

# 235 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode2::
# 236 "data/maps/PowerPlant_Frlg/scripts.pory"
# 127 "data/maps/PowerPlant_Frlg/scripts.pory"
# 237 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock
# 238 "data/maps/PowerPlant_Frlg/scripts.pory"
# 128 "data/maps/PowerPlant_Frlg/scripts.pory"
# 239 "data/maps/PowerPlant_Frlg/scripts.pory"
	faceplayer
# 240 "data/maps/PowerPlant_Frlg/scripts.pory"
# 129 "data/maps/PowerPlant_Frlg/scripts.pory"
# 241 "data/maps/PowerPlant_Frlg/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 34
# 242 "data/maps/PowerPlant_Frlg/scripts.pory"
# 130 "data/maps/PowerPlant_Frlg/scripts.pory"
# 243 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitse
# 244 "data/maps/PowerPlant_Frlg/scripts.pory"
# 131 "data/maps/PowerPlant_Frlg/scripts.pory"
# 245 "data/maps/PowerPlant_Frlg/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 246 "data/maps/PowerPlant_Frlg/scripts.pory"
# 132 "data/maps/PowerPlant_Frlg/scripts.pory"
# 247 "data/maps/PowerPlant_Frlg/scripts.pory"
	delay 40
# 248 "data/maps/PowerPlant_Frlg/scripts.pory"
# 133 "data/maps/PowerPlant_Frlg/scripts.pory"
# 249 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmoncry
# 250 "data/maps/PowerPlant_Frlg/scripts.pory"
# 134 "data/maps/PowerPlant_Frlg/scripts.pory"
# 251 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 252 "data/maps/PowerPlant_Frlg/scripts.pory"
# 135 "data/maps/PowerPlant_Frlg/scripts.pory"
# 253 "data/maps/PowerPlant_Frlg/scripts.pory"
	dowildbattle
# 254 "data/maps/PowerPlant_Frlg/scripts.pory"
# 136 "data/maps/PowerPlant_Frlg/scripts.pory"
# 255 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 256 "data/maps/PowerPlant_Frlg/scripts.pory"
# 137 "data/maps/PowerPlant_Frlg/scripts.pory"
# 257 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 258 "data/maps/PowerPlant_Frlg/scripts.pory"
# 138 "data/maps/PowerPlant_Frlg/scripts.pory"
# 259 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 260 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq PowerPlant_EventScript_Electrode2_2
# 261 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode2_1:
# 262 "data/maps/PowerPlant_Frlg/scripts.pory"
# 141 "data/maps/PowerPlant_Frlg/scripts.pory"
# 263 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 264 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq PowerPlant_EventScript_Electrode2_5
# 265 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode2_4:
# 266 "data/maps/PowerPlant_Frlg/scripts.pory"
# 144 "data/maps/PowerPlant_Frlg/scripts.pory"
# 267 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 268 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq PowerPlant_EventScript_Electrode2_8
# 269 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode2_7:
# 270 "data/maps/PowerPlant_Frlg/scripts.pory"
# 147 "data/maps/PowerPlant_Frlg/scripts.pory"
# 271 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
# 272 "data/maps/PowerPlant_Frlg/scripts.pory"
# 148 "data/maps/PowerPlant_Frlg/scripts.pory"
# 273 "data/maps/PowerPlant_Frlg/scripts.pory"
	release
# 274 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 275 "data/maps/PowerPlant_Frlg/scripts.pory"

# 276 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode2_2:
# 277 "data/maps/PowerPlant_Frlg/scripts.pory"
# 139 "data/maps/PowerPlant_Frlg/scripts.pory"
# 278 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode2
# 279 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_Electrode2_1
# 280 "data/maps/PowerPlant_Frlg/scripts.pory"

# 281 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode2_5:
# 282 "data/maps/PowerPlant_Frlg/scripts.pory"
# 142 "data/maps/PowerPlant_Frlg/scripts.pory"
# 283 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode2
# 284 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_Electrode2_4
# 285 "data/maps/PowerPlant_Frlg/scripts.pory"

# 286 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode2_8:
# 287 "data/maps/PowerPlant_Frlg/scripts.pory"
# 145 "data/maps/PowerPlant_Frlg/scripts.pory"
# 288 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_FoughtElectrode2
# 289 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto PowerPlant_EventScript_Electrode2_7
# 290 "data/maps/PowerPlant_Frlg/scripts.pory"

# 291 "data/maps/PowerPlant_Frlg/scripts.pory"

# 292 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_FoughtElectrode2::
# 293 "data/maps/PowerPlant_Frlg/scripts.pory"
# 153 "data/maps/PowerPlant_Frlg/scripts.pory"
# 294 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
# 295 "data/maps/PowerPlant_Frlg/scripts.pory"
# 154 "data/maps/PowerPlant_Frlg/scripts.pory"
# 296 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
# 297 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
