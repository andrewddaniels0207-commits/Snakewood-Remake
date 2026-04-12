# 1 "data/maps/AquaHideout_B1F/scripts.pory"

# 2 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_MapScripts::
# 3 "data/maps/AquaHideout_B1F/scripts.pory"
# 2 "data/maps/AquaHideout_B1F/scripts.pory"
# 4 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AquaHideout_B1F_OnResume
# 5 "data/maps/AquaHideout_B1F/scripts.pory"
# 3 "data/maps/AquaHideout_B1F/scripts.pory"
# 6 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B1F_OnTransition
# 7 "data/maps/AquaHideout_B1F/scripts.pory"
	.byte 0
# 8 "data/maps/AquaHideout_B1F/scripts.pory"

# 9 "data/maps/AquaHideout_B1F/scripts.pory"

# 10 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnResume::
# 11 "data/maps/AquaHideout_B1F/scripts.pory"
# 8 "data/maps/AquaHideout_B1F/scripts.pory"
# 12 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AquaHideout_B1F_OnResume_1
# 13 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 14 "data/maps/AquaHideout_B1F/scripts.pory"

# 15 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnResume_1:
# 16 "data/maps/AquaHideout_B1F/scripts.pory"
# 9 "data/maps/AquaHideout_B1F/scripts.pory"
# 17 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_OnResume_2
# 18 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 19 "data/maps/AquaHideout_B1F/scripts.pory"

# 20 "data/maps/AquaHideout_B1F/scripts.pory"

# 21 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnResume_1::
# 22 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 23 "data/maps/AquaHideout_B1F/scripts.pory"

# 24 "data/maps/AquaHideout_B1F/scripts.pory"

# 25 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnResume_2::
# 26 "data/maps/AquaHideout_B1F/scripts.pory"
# 19 "data/maps/AquaHideout_B1F/scripts.pory"
# 27 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_TryRemoveElectrode
# 28 "data/maps/AquaHideout_B1F/scripts.pory"
# 20 "data/maps/AquaHideout_B1F/scripts.pory"
# 29 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_OnResume_1
# 30 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 31 "data/maps/AquaHideout_B1F/scripts.pory"

# 32 "data/maps/AquaHideout_B1F/scripts.pory"

# 33 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_TryRemoveElectrode::
# 34 "data/maps/AquaHideout_B1F/scripts.pory"
# 25 "data/maps/AquaHideout_B1F/scripts.pory"
# 35 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 36 "data/maps/AquaHideout_B1F/scripts.pory"
# 27 "data/maps/AquaHideout_B1F/scripts.pory"
# 37 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 38 "data/maps/AquaHideout_B1F/scripts.pory"
# 28 "data/maps/AquaHideout_B1F/scripts.pory"
# 39 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_ne AquaHideout_B1F_EventScript_TryRemoveElectrode_2
# 40 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 41 "data/maps/AquaHideout_B1F/scripts.pory"

# 42 "data/maps/AquaHideout_B1F/scripts.pory"

# 43 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_TryRemoveElectrode_1::
# 44 "data/maps/AquaHideout_B1F/scripts.pory"
# 33 "data/maps/AquaHideout_B1F/scripts.pory"
# 45 "data/maps/AquaHideout_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 46 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 47 "data/maps/AquaHideout_B1F/scripts.pory"

# 48 "data/maps/AquaHideout_B1F/scripts.pory"

# 49 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_TryRemoveElectrode_2::
# 50 "data/maps/AquaHideout_B1F/scripts.pory"
# 39 "data/maps/AquaHideout_B1F/scripts.pory"
# 51 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
# 52 "data/maps/AquaHideout_B1F/scripts.pory"
# 40 "data/maps/AquaHideout_B1F/scripts.pory"
# 53 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_TryRemoveElectrode_1
# 54 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 55 "data/maps/AquaHideout_B1F/scripts.pory"

# 56 "data/maps/AquaHideout_B1F/scripts.pory"

# 57 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnTransition::
# 58 "data/maps/AquaHideout_B1F/scripts.pory"
# 45 "data/maps/AquaHideout_B1F/scripts.pory"
# 59 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT, AquaHideout_B1F_OnTransition_1
# 60 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 61 "data/maps/AquaHideout_B1F/scripts.pory"

# 62 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnTransition_1:
# 63 "data/maps/AquaHideout_B1F/scripts.pory"
# 46 "data/maps/AquaHideout_B1F/scripts.pory"
# 64 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_OnTransition_2
# 65 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 66 "data/maps/AquaHideout_B1F/scripts.pory"

# 67 "data/maps/AquaHideout_B1F/scripts.pory"

# 68 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnTransition_1::
# 69 "data/maps/AquaHideout_B1F/scripts.pory"
# 52 "data/maps/AquaHideout_B1F/scripts.pory"
# 70 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT, AquaHideout_B1F_OnTransition_1_1
# 71 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 72 "data/maps/AquaHideout_B1F/scripts.pory"

# 73 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnTransition_1_1:
# 74 "data/maps/AquaHideout_B1F/scripts.pory"
# 53 "data/maps/AquaHideout_B1F/scripts.pory"
# 75 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_OnTransition_5
# 76 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 77 "data/maps/AquaHideout_B1F/scripts.pory"

# 78 "data/maps/AquaHideout_B1F/scripts.pory"

# 79 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnTransition_4::
# 80 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 81 "data/maps/AquaHideout_B1F/scripts.pory"

# 82 "data/maps/AquaHideout_B1F/scripts.pory"

# 83 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnTransition_2::
# 84 "data/maps/AquaHideout_B1F/scripts.pory"
# 63 "data/maps/AquaHideout_B1F/scripts.pory"
# 85 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_ShowElectrode1
# 86 "data/maps/AquaHideout_B1F/scripts.pory"
# 64 "data/maps/AquaHideout_B1F/scripts.pory"
# 87 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_OnTransition_1
# 88 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 89 "data/maps/AquaHideout_B1F/scripts.pory"

# 90 "data/maps/AquaHideout_B1F/scripts.pory"

# 91 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnTransition_5::
# 92 "data/maps/AquaHideout_B1F/scripts.pory"
# 69 "data/maps/AquaHideout_B1F/scripts.pory"
# 93 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_ShowElectrode2
# 94 "data/maps/AquaHideout_B1F/scripts.pory"
# 70 "data/maps/AquaHideout_B1F/scripts.pory"
# 95 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_OnTransition_4
# 96 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 97 "data/maps/AquaHideout_B1F/scripts.pory"

# 98 "data/maps/AquaHideout_B1F/scripts.pory"

# 99 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_ShowElectrode1::
# 100 "data/maps/AquaHideout_B1F/scripts.pory"
# 75 "data/maps/AquaHideout_B1F/scripts.pory"
# 101 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
# 102 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 103 "data/maps/AquaHideout_B1F/scripts.pory"

# 104 "data/maps/AquaHideout_B1F/scripts.pory"

# 105 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_ShowElectrode2::
# 106 "data/maps/AquaHideout_B1F/scripts.pory"
# 81 "data/maps/AquaHideout_B1F/scripts.pory"
# 107 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2
# 108 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 109 "data/maps/AquaHideout_B1F/scripts.pory"

# 110 "data/maps/AquaHideout_B1F/scripts.pory"

# 111 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode1::
# 112 "data/maps/AquaHideout_B1F/scripts.pory"
# 87 "data/maps/AquaHideout_B1F/scripts.pory"
# 113 "data/maps/AquaHideout_B1F/scripts.pory"
	lock
# 114 "data/maps/AquaHideout_B1F/scripts.pory"
# 89 "data/maps/AquaHideout_B1F/scripts.pory"
# 115 "data/maps/AquaHideout_B1F/scripts.pory"
	faceplayer
# 116 "data/maps/AquaHideout_B1F/scripts.pory"
# 91 "data/maps/AquaHideout_B1F/scripts.pory"
# 117 "data/maps/AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 30
# 118 "data/maps/AquaHideout_B1F/scripts.pory"
# 93 "data/maps/AquaHideout_B1F/scripts.pory"
# 119 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 120 "data/maps/AquaHideout_B1F/scripts.pory"
# 95 "data/maps/AquaHideout_B1F/scripts.pory"
# 121 "data/maps/AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 122 "data/maps/AquaHideout_B1F/scripts.pory"
# 97 "data/maps/AquaHideout_B1F/scripts.pory"
# 123 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 40
# 124 "data/maps/AquaHideout_B1F/scripts.pory"
# 99 "data/maps/AquaHideout_B1F/scripts.pory"
# 125 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmoncry
# 126 "data/maps/AquaHideout_B1F/scripts.pory"
# 101 "data/maps/AquaHideout_B1F/scripts.pory"
# 127 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 128 "data/maps/AquaHideout_B1F/scripts.pory"
# 103 "data/maps/AquaHideout_B1F/scripts.pory"
# 129 "data/maps/AquaHideout_B1F/scripts.pory"
	dowildbattle
# 130 "data/maps/AquaHideout_B1F/scripts.pory"
# 105 "data/maps/AquaHideout_B1F/scripts.pory"
# 131 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 132 "data/maps/AquaHideout_B1F/scripts.pory"
# 107 "data/maps/AquaHideout_B1F/scripts.pory"
# 133 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 134 "data/maps/AquaHideout_B1F/scripts.pory"
# 109 "data/maps/AquaHideout_B1F/scripts.pory"
# 135 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 136 "data/maps/AquaHideout_B1F/scripts.pory"
# 110 "data/maps/AquaHideout_B1F/scripts.pory"
# 137 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq AquaHideout_B1F_EventScript_Electrode1_2
# 138 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 139 "data/maps/AquaHideout_B1F/scripts.pory"

# 140 "data/maps/AquaHideout_B1F/scripts.pory"

# 141 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode1_1::
# 142 "data/maps/AquaHideout_B1F/scripts.pory"
# 115 "data/maps/AquaHideout_B1F/scripts.pory"
# 143 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 144 "data/maps/AquaHideout_B1F/scripts.pory"
# 116 "data/maps/AquaHideout_B1F/scripts.pory"
# 145 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq AquaHideout_B1F_EventScript_Electrode1_5
# 146 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 147 "data/maps/AquaHideout_B1F/scripts.pory"

# 148 "data/maps/AquaHideout_B1F/scripts.pory"

# 149 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode1_4::
# 150 "data/maps/AquaHideout_B1F/scripts.pory"
# 121 "data/maps/AquaHideout_B1F/scripts.pory"
# 151 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 152 "data/maps/AquaHideout_B1F/scripts.pory"
# 122 "data/maps/AquaHideout_B1F/scripts.pory"
# 153 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq AquaHideout_B1F_EventScript_Electrode1_8
# 154 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 155 "data/maps/AquaHideout_B1F/scripts.pory"

# 156 "data/maps/AquaHideout_B1F/scripts.pory"

# 157 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode1_7::
# 158 "data/maps/AquaHideout_B1F/scripts.pory"
# 127 "data/maps/AquaHideout_B1F/scripts.pory"
# 159 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
# 160 "data/maps/AquaHideout_B1F/scripts.pory"
# 129 "data/maps/AquaHideout_B1F/scripts.pory"
# 161 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 162 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 163 "data/maps/AquaHideout_B1F/scripts.pory"

# 164 "data/maps/AquaHideout_B1F/scripts.pory"

# 165 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode1_2::
# 166 "data/maps/AquaHideout_B1F/scripts.pory"
# 135 "data/maps/AquaHideout_B1F/scripts.pory"
# 167 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode1
# 168 "data/maps/AquaHideout_B1F/scripts.pory"
# 136 "data/maps/AquaHideout_B1F/scripts.pory"
# 169 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_Electrode1_1
# 170 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 171 "data/maps/AquaHideout_B1F/scripts.pory"

# 172 "data/maps/AquaHideout_B1F/scripts.pory"

# 173 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode1_5::
# 174 "data/maps/AquaHideout_B1F/scripts.pory"
# 141 "data/maps/AquaHideout_B1F/scripts.pory"
# 175 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode1
# 176 "data/maps/AquaHideout_B1F/scripts.pory"
# 142 "data/maps/AquaHideout_B1F/scripts.pory"
# 177 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_Electrode1_4
# 178 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 179 "data/maps/AquaHideout_B1F/scripts.pory"

# 180 "data/maps/AquaHideout_B1F/scripts.pory"

# 181 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode1_8::
# 182 "data/maps/AquaHideout_B1F/scripts.pory"
# 147 "data/maps/AquaHideout_B1F/scripts.pory"
# 183 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode1
# 184 "data/maps/AquaHideout_B1F/scripts.pory"
# 148 "data/maps/AquaHideout_B1F/scripts.pory"
# 185 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_Electrode1_7
# 186 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 187 "data/maps/AquaHideout_B1F/scripts.pory"

# 188 "data/maps/AquaHideout_B1F/scripts.pory"

# 189 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_DefeatedElectrode1::
# 190 "data/maps/AquaHideout_B1F/scripts.pory"
# 153 "data/maps/AquaHideout_B1F/scripts.pory"
# 191 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
# 192 "data/maps/AquaHideout_B1F/scripts.pory"
# 155 "data/maps/AquaHideout_B1F/scripts.pory"
# 193 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 194 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 195 "data/maps/AquaHideout_B1F/scripts.pory"

# 196 "data/maps/AquaHideout_B1F/scripts.pory"

# 197 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode2::
# 198 "data/maps/AquaHideout_B1F/scripts.pory"
# 161 "data/maps/AquaHideout_B1F/scripts.pory"
# 199 "data/maps/AquaHideout_B1F/scripts.pory"
	lock
# 200 "data/maps/AquaHideout_B1F/scripts.pory"
# 163 "data/maps/AquaHideout_B1F/scripts.pory"
# 201 "data/maps/AquaHideout_B1F/scripts.pory"
	faceplayer
# 202 "data/maps/AquaHideout_B1F/scripts.pory"
# 165 "data/maps/AquaHideout_B1F/scripts.pory"
# 203 "data/maps/AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 30
# 204 "data/maps/AquaHideout_B1F/scripts.pory"
# 167 "data/maps/AquaHideout_B1F/scripts.pory"
# 205 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 206 "data/maps/AquaHideout_B1F/scripts.pory"
# 169 "data/maps/AquaHideout_B1F/scripts.pory"
# 207 "data/maps/AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 208 "data/maps/AquaHideout_B1F/scripts.pory"
# 171 "data/maps/AquaHideout_B1F/scripts.pory"
# 209 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 40
# 210 "data/maps/AquaHideout_B1F/scripts.pory"
# 173 "data/maps/AquaHideout_B1F/scripts.pory"
# 211 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmoncry
# 212 "data/maps/AquaHideout_B1F/scripts.pory"
# 175 "data/maps/AquaHideout_B1F/scripts.pory"
# 213 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 214 "data/maps/AquaHideout_B1F/scripts.pory"
# 177 "data/maps/AquaHideout_B1F/scripts.pory"
# 215 "data/maps/AquaHideout_B1F/scripts.pory"
	dowildbattle
# 216 "data/maps/AquaHideout_B1F/scripts.pory"
# 179 "data/maps/AquaHideout_B1F/scripts.pory"
# 217 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 218 "data/maps/AquaHideout_B1F/scripts.pory"
# 181 "data/maps/AquaHideout_B1F/scripts.pory"
# 219 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 220 "data/maps/AquaHideout_B1F/scripts.pory"
# 183 "data/maps/AquaHideout_B1F/scripts.pory"
# 221 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 222 "data/maps/AquaHideout_B1F/scripts.pory"
# 184 "data/maps/AquaHideout_B1F/scripts.pory"
# 223 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq AquaHideout_B1F_EventScript_Electrode2_2
# 224 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 225 "data/maps/AquaHideout_B1F/scripts.pory"

# 226 "data/maps/AquaHideout_B1F/scripts.pory"

# 227 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode2_1::
# 228 "data/maps/AquaHideout_B1F/scripts.pory"
# 189 "data/maps/AquaHideout_B1F/scripts.pory"
# 229 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 230 "data/maps/AquaHideout_B1F/scripts.pory"
# 190 "data/maps/AquaHideout_B1F/scripts.pory"
# 231 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq AquaHideout_B1F_EventScript_Electrode2_5
# 232 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 233 "data/maps/AquaHideout_B1F/scripts.pory"

# 234 "data/maps/AquaHideout_B1F/scripts.pory"

# 235 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode2_4::
# 236 "data/maps/AquaHideout_B1F/scripts.pory"
# 195 "data/maps/AquaHideout_B1F/scripts.pory"
# 237 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 238 "data/maps/AquaHideout_B1F/scripts.pory"
# 196 "data/maps/AquaHideout_B1F/scripts.pory"
# 239 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq AquaHideout_B1F_EventScript_Electrode2_8
# 240 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 241 "data/maps/AquaHideout_B1F/scripts.pory"

# 242 "data/maps/AquaHideout_B1F/scripts.pory"

# 243 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode2_7::
# 244 "data/maps/AquaHideout_B1F/scripts.pory"
# 201 "data/maps/AquaHideout_B1F/scripts.pory"
# 245 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
# 246 "data/maps/AquaHideout_B1F/scripts.pory"
# 203 "data/maps/AquaHideout_B1F/scripts.pory"
# 247 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 248 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 249 "data/maps/AquaHideout_B1F/scripts.pory"

# 250 "data/maps/AquaHideout_B1F/scripts.pory"

# 251 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode2_2::
# 252 "data/maps/AquaHideout_B1F/scripts.pory"
# 209 "data/maps/AquaHideout_B1F/scripts.pory"
# 253 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode2
# 254 "data/maps/AquaHideout_B1F/scripts.pory"
# 210 "data/maps/AquaHideout_B1F/scripts.pory"
# 255 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_Electrode2_1
# 256 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 257 "data/maps/AquaHideout_B1F/scripts.pory"

# 258 "data/maps/AquaHideout_B1F/scripts.pory"

# 259 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode2_5::
# 260 "data/maps/AquaHideout_B1F/scripts.pory"
# 215 "data/maps/AquaHideout_B1F/scripts.pory"
# 261 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode2
# 262 "data/maps/AquaHideout_B1F/scripts.pory"
# 216 "data/maps/AquaHideout_B1F/scripts.pory"
# 263 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_Electrode2_4
# 264 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 265 "data/maps/AquaHideout_B1F/scripts.pory"

# 266 "data/maps/AquaHideout_B1F/scripts.pory"

# 267 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode2_8::
# 268 "data/maps/AquaHideout_B1F/scripts.pory"
# 221 "data/maps/AquaHideout_B1F/scripts.pory"
# 269 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode2
# 270 "data/maps/AquaHideout_B1F/scripts.pory"
# 222 "data/maps/AquaHideout_B1F/scripts.pory"
# 271 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_Electrode2_7
# 272 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 273 "data/maps/AquaHideout_B1F/scripts.pory"

# 274 "data/maps/AquaHideout_B1F/scripts.pory"

# 275 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_DefeatedElectrode2::
# 276 "data/maps/AquaHideout_B1F/scripts.pory"
# 227 "data/maps/AquaHideout_B1F/scripts.pory"
# 277 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
# 278 "data/maps/AquaHideout_B1F/scripts.pory"
# 229 "data/maps/AquaHideout_B1F/scripts.pory"
# 279 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 280 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 281 "data/maps/AquaHideout_B1F/scripts.pory"

# 282 "data/maps/AquaHideout_B1F/scripts.pory"

# 283 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt2::
# 284 "data/maps/AquaHideout_B1F/scripts.pory"
# 235 "data/maps/AquaHideout_B1F/scripts.pory"
# 285 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, AquaHideout_B1F_Text_Grunt2Intro, AquaHideout_B1F_Text_Grunt2Defeat, AquaHideout_B1F_EventScript_Grunt2Defeated
# 286 "data/maps/AquaHideout_B1F/scripts.pory"
# 237 "data/maps/AquaHideout_B1F/scripts.pory"
# 287 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 289 "data/maps/AquaHideout_B1F/scripts.pory"

# 290 "data/maps/AquaHideout_B1F/scripts.pory"

# 291 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt2Defeated::
# 292 "data/maps/AquaHideout_B1F/scripts.pory"
# 243 "data/maps/AquaHideout_B1F/scripts.pory"
# 293 "data/maps/AquaHideout_B1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 294 "data/maps/AquaHideout_B1F/scripts.pory"
# 245 "data/maps/AquaHideout_B1F/scripts.pory"
# 295 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmovement 0
# 296 "data/maps/AquaHideout_B1F/scripts.pory"
# 247 "data/maps/AquaHideout_B1F/scripts.pory"
# 297 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
# 298 "data/maps/AquaHideout_B1F/scripts.pory"
# 249 "data/maps/AquaHideout_B1F/scripts.pory"
# 299 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 300 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 301 "data/maps/AquaHideout_B1F/scripts.pory"

# 302 "data/maps/AquaHideout_B1F/scripts.pory"

# 303 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt3::
# 304 "data/maps/AquaHideout_B1F/scripts.pory"
# 255 "data/maps/AquaHideout_B1F/scripts.pory"
# 305 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, AquaHideout_B1F_Text_Grunt3Intro, AquaHideout_B1F_Text_Grunt3Defeat, AquaHideout_B1F_EventScript_Grunt3Defeated
# 306 "data/maps/AquaHideout_B1F/scripts.pory"
# 257 "data/maps/AquaHideout_B1F/scripts.pory"
# 307 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 308 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 309 "data/maps/AquaHideout_B1F/scripts.pory"

# 310 "data/maps/AquaHideout_B1F/scripts.pory"

# 311 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt3Defeated::
# 312 "data/maps/AquaHideout_B1F/scripts.pory"
# 263 "data/maps/AquaHideout_B1F/scripts.pory"
# 313 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_DEFAULT
# 314 "data/maps/AquaHideout_B1F/scripts.pory"
# 265 "data/maps/AquaHideout_B1F/scripts.pory"
# 315 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 316 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 317 "data/maps/AquaHideout_B1F/scripts.pory"

# 318 "data/maps/AquaHideout_B1F/scripts.pory"

# 319 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt5::
# 320 "data/maps/AquaHideout_B1F/scripts.pory"
# 271 "data/maps/AquaHideout_B1F/scripts.pory"
# 321 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, AquaHideout_B1F_Text_Grunt5Intro, AquaHideout_B1F_Text_Grunt5Defeat
# 322 "data/maps/AquaHideout_B1F/scripts.pory"
# 273 "data/maps/AquaHideout_B1F/scripts.pory"
# 323 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 324 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 325 "data/maps/AquaHideout_B1F/scripts.pory"

# 326 "data/maps/AquaHideout_B1F/scripts.pory"

# 327 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt7::
# 328 "data/maps/AquaHideout_B1F/scripts.pory"
# 279 "data/maps/AquaHideout_B1F/scripts.pory"
# 329 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, AquaHideout_B1F_Text_Grunt7Intro, AquaHideout_B1F_Text_Grunt7Defeat
# 330 "data/maps/AquaHideout_B1F/scripts.pory"
# 281 "data/maps/AquaHideout_B1F/scripts.pory"
# 331 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
# 332 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 333 "data/maps/AquaHideout_B1F/scripts.pory"

# 334 "data/maps/AquaHideout_B1F/scripts.pory"

# 335 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2Intro::
# 336 "data/maps/AquaHideout_B1F/scripts.pory"
# 285 "data/maps/AquaHideout_B1F/scripts.pory"
# 337 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you want to know the secret about\n"
# 338 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "our HIDEOUT, you have me to beat!$"
# 339 "data/maps/AquaHideout_B1F/scripts.pory"

# 340 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2Defeat::
# 341 "data/maps/AquaHideout_B1F/scripts.pory"
# 290 "data/maps/AquaHideout_B1F/scripts.pory"
# 342 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I can't win at all…$"
# 343 "data/maps/AquaHideout_B1F/scripts.pory"

# 344 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2PostBattle::
# 345 "data/maps/AquaHideout_B1F/scripts.pory"
# 294 "data/maps/AquaHideout_B1F/scripts.pory"
# 346 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Our HIDEOUT's secret?\p"
# 347 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Well, let's just say…\n"
# 348 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "There's a submarine at the far end!\p"
# 349 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "But, by now…\n"
# 350 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Kekekeke…$"
# 351 "data/maps/AquaHideout_B1F/scripts.pory"

# 352 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3Intro::
# 353 "data/maps/AquaHideout_B1F/scripts.pory"
# 302 "data/maps/AquaHideout_B1F/scripts.pory"
# 354 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Fuel supply loaded A-OK!\n"
# 355 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "In-cruise snacks loaded A-OK!\p"
# 356 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Nothing left to do but KO a pesky\n"
# 357 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "meddler!$"
# 358 "data/maps/AquaHideout_B1F/scripts.pory"

# 359 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3Defeat::
# 360 "data/maps/AquaHideout_B1F/scripts.pory"
# 309 "data/maps/AquaHideout_B1F/scripts.pory"
# 361 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I took a serious licking!$"
# 362 "data/maps/AquaHideout_B1F/scripts.pory"

# 363 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3PostBattle::
# 364 "data/maps/AquaHideout_B1F/scripts.pory"
# 313 "data/maps/AquaHideout_B1F/scripts.pory"
# 365 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Humph!\n"
# 366 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "This was supposed to happen!\p"
# 367 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "My mission was to just hold you up!$"
# 368 "data/maps/AquaHideout_B1F/scripts.pory"

# 369 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5Intro::
# 370 "data/maps/AquaHideout_B1F/scripts.pory"
# 319 "data/maps/AquaHideout_B1F/scripts.pory"
# 371 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Yawn… Keeping watch over the\n"
# 372 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "HIDEOUT bores me. I'll take you on.$"
# 373 "data/maps/AquaHideout_B1F/scripts.pory"

# 374 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5Defeat::
# 375 "data/maps/AquaHideout_B1F/scripts.pory"
# 324 "data/maps/AquaHideout_B1F/scripts.pory"
# 376 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Yawn…\n"
# 377 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Oh, I lost…$"
# 378 "data/maps/AquaHideout_B1F/scripts.pory"

# 379 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5PostBattle::
# 380 "data/maps/AquaHideout_B1F/scripts.pory"
# 329 "data/maps/AquaHideout_B1F/scripts.pory"
# 381 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you scurry too much, other TEAM\n"
# 382 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "AQUA members might get you.$"
# 383 "data/maps/AquaHideout_B1F/scripts.pory"

# 384 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7Intro::
# 385 "data/maps/AquaHideout_B1F/scripts.pory"
# 334 "data/maps/AquaHideout_B1F/scripts.pory"
# 386 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Hey!\n"
# 387 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "You there!\p"
# 388 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Which do you think is cooler?\n"
# 389 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "TEAM AQUA's uniform or TEAM MAGMA's?$"
# 390 "data/maps/AquaHideout_B1F/scripts.pory"

# 391 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7Defeat::
# 392 "data/maps/AquaHideout_B1F/scripts.pory"
# 341 "data/maps/AquaHideout_B1F/scripts.pory"
# 393 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I lost in a cool way…$"
# 394 "data/maps/AquaHideout_B1F/scripts.pory"

# 395 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7PostBattle::
# 396 "data/maps/AquaHideout_B1F/scripts.pory"
# 345 "data/maps/AquaHideout_B1F/scripts.pory"
# 397 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you have a cool uniform, you look\n"
# 398 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "good even in a loss, don't you think?$"
