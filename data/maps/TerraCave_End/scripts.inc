# 1 "data/maps/TerraCave_End/scripts.pory"

# 2 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_MapScripts::
# 3 "data/maps/TerraCave_End/scripts.pory"
# 2 "data/maps/TerraCave_End/scripts.pory"
# 4 "data/maps/TerraCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TerraCave_End_OnResume
# 5 "data/maps/TerraCave_End/scripts.pory"
# 3 "data/maps/TerraCave_End/scripts.pory"
# 6 "data/maps/TerraCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TerraCave_End_OnTransition
# 7 "data/maps/TerraCave_End/scripts.pory"
	.byte 0
# 8 "data/maps/TerraCave_End/scripts.pory"

# 9 "data/maps/TerraCave_End/scripts.pory"

# 10 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_OnResume::
# 11 "data/maps/TerraCave_End/scripts.pory"
# 7 "data/maps/TerraCave_End/scripts.pory"
# 12 "data/maps/TerraCave_End/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, TerraCave_End_OnResume_2
# 13 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_OnResume_1:
# 14 "data/maps/TerraCave_End/scripts.pory"
	end
# 15 "data/maps/TerraCave_End/scripts.pory"

# 16 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_OnResume_2:
# 17 "data/maps/TerraCave_End/scripts.pory"
# 8 "data/maps/TerraCave_End/scripts.pory"
# 18 "data/maps/TerraCave_End/scripts.pory"
	call TerraCave_End_EventScript_TryRemoveGroudon
# 19 "data/maps/TerraCave_End/scripts.pory"
	goto TerraCave_End_OnResume_1
# 20 "data/maps/TerraCave_End/scripts.pory"

# 21 "data/maps/TerraCave_End/scripts.pory"

# 22 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_TryRemoveGroudon::
# 23 "data/maps/TerraCave_End/scripts.pory"
# 14 "data/maps/TerraCave_End/scripts.pory"
# 24 "data/maps/TerraCave_End/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/TerraCave_End/scripts.pory"
# 15 "data/maps/TerraCave_End/scripts.pory"
# 26 "data/maps/TerraCave_End/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 27 "data/maps/TerraCave_End/scripts.pory"
	goto_if_ne TerraCave_End_EventScript_TryRemoveGroudon_2
# 28 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_TryRemoveGroudon_1:
# 29 "data/maps/TerraCave_End/scripts.pory"
# 18 "data/maps/TerraCave_End/scripts.pory"
# 30 "data/maps/TerraCave_End/scripts.pory"
	removeobject LOCALID_TERRA_CAVE_GROUDON
# 31 "data/maps/TerraCave_End/scripts.pory"
	return
# 32 "data/maps/TerraCave_End/scripts.pory"

# 33 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_TryRemoveGroudon_2:
# 34 "data/maps/TerraCave_End/scripts.pory"
# 16 "data/maps/TerraCave_End/scripts.pory"
# 35 "data/maps/TerraCave_End/scripts.pory"
	goto Common_EventScript_NopReturn
# 36 "data/maps/TerraCave_End/scripts.pory"
	goto TerraCave_End_EventScript_TryRemoveGroudon_1
# 37 "data/maps/TerraCave_End/scripts.pory"

# 38 "data/maps/TerraCave_End/scripts.pory"

# 39 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_OnTransition::
# 40 "data/maps/TerraCave_End/scripts.pory"
# 23 "data/maps/TerraCave_End/scripts.pory"
# 41 "data/maps/TerraCave_End/scripts.pory"
	goto_if_unset FLAG_DEFEATED_GROUDON, TerraCave_End_OnTransition_2
# 42 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_OnTransition_1:
# 43 "data/maps/TerraCave_End/scripts.pory"
	end
# 44 "data/maps/TerraCave_End/scripts.pory"

# 45 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_OnTransition_2:
# 46 "data/maps/TerraCave_End/scripts.pory"
# 24 "data/maps/TerraCave_End/scripts.pory"
# 47 "data/maps/TerraCave_End/scripts.pory"
	call TerraCave_End_EventScript_ShowGroudon
# 48 "data/maps/TerraCave_End/scripts.pory"
	goto TerraCave_End_OnTransition_1
# 49 "data/maps/TerraCave_End/scripts.pory"

# 50 "data/maps/TerraCave_End/scripts.pory"

# 51 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_ShowGroudon::
# 52 "data/maps/TerraCave_End/scripts.pory"
# 30 "data/maps/TerraCave_End/scripts.pory"
# 53 "data/maps/TerraCave_End/scripts.pory"
	clearflag FLAG_HIDE_TERRA_CAVE_GROUDON
# 54 "data/maps/TerraCave_End/scripts.pory"
# 31 "data/maps/TerraCave_End/scripts.pory"
# 55 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_TEMP_1, 1
# 56 "data/maps/TerraCave_End/scripts.pory"
	return
# 57 "data/maps/TerraCave_End/scripts.pory"

# 58 "data/maps/TerraCave_End/scripts.pory"

# 59 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_Groudon::
# 60 "data/maps/TerraCave_End/scripts.pory"
# 36 "data/maps/TerraCave_End/scripts.pory"
# 61 "data/maps/TerraCave_End/scripts.pory"
	lockall
# 62 "data/maps/TerraCave_End/scripts.pory"
# 37 "data/maps/TerraCave_End/scripts.pory"
# 63 "data/maps/TerraCave_End/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 64 "data/maps/TerraCave_End/scripts.pory"
# 38 "data/maps/TerraCave_End/scripts.pory"
# 65 "data/maps/TerraCave_End/scripts.pory"
	waitmovement 0
# 66 "data/maps/TerraCave_End/scripts.pory"
# 39 "data/maps/TerraCave_End/scripts.pory"
# 67 "data/maps/TerraCave_End/scripts.pory"
	applymovement LOCALID_TERRA_CAVE_GROUDON, TerraCave_End_Movement_GroudonApproach
# 68 "data/maps/TerraCave_End/scripts.pory"
# 40 "data/maps/TerraCave_End/scripts.pory"
# 69 "data/maps/TerraCave_End/scripts.pory"
	waitmovement 0
# 70 "data/maps/TerraCave_End/scripts.pory"
# 41 "data/maps/TerraCave_End/scripts.pory"
# 71 "data/maps/TerraCave_End/scripts.pory"
	waitse
# 72 "data/maps/TerraCave_End/scripts.pory"
# 42 "data/maps/TerraCave_End/scripts.pory"
# 73 "data/maps/TerraCave_End/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 74 "data/maps/TerraCave_End/scripts.pory"
# 43 "data/maps/TerraCave_End/scripts.pory"
# 75 "data/maps/TerraCave_End/scripts.pory"
	delay 40
# 76 "data/maps/TerraCave_End/scripts.pory"
# 44 "data/maps/TerraCave_End/scripts.pory"
# 77 "data/maps/TerraCave_End/scripts.pory"
	waitmoncry
# 78 "data/maps/TerraCave_End/scripts.pory"
# 45 "data/maps/TerraCave_End/scripts.pory"
# 79 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TERRA_CAVE_GROUDON
# 80 "data/maps/TerraCave_End/scripts.pory"
# 46 "data/maps/TerraCave_End/scripts.pory"
# 81 "data/maps/TerraCave_End/scripts.pory"
	setwildbattle SPECIES_GROUDON, 70
# 82 "data/maps/TerraCave_End/scripts.pory"
# 47 "data/maps/TerraCave_End/scripts.pory"
# 83 "data/maps/TerraCave_End/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 84 "data/maps/TerraCave_End/scripts.pory"
# 48 "data/maps/TerraCave_End/scripts.pory"
# 85 "data/maps/TerraCave_End/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 86 "data/maps/TerraCave_End/scripts.pory"
# 49 "data/maps/TerraCave_End/scripts.pory"
# 87 "data/maps/TerraCave_End/scripts.pory"
	waitstate
# 88 "data/maps/TerraCave_End/scripts.pory"
# 50 "data/maps/TerraCave_End/scripts.pory"
# 89 "data/maps/TerraCave_End/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 90 "data/maps/TerraCave_End/scripts.pory"
# 51 "data/maps/TerraCave_End/scripts.pory"
# 91 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_TEMP_1, 0
# 92 "data/maps/TerraCave_End/scripts.pory"
# 52 "data/maps/TerraCave_End/scripts.pory"
# 93 "data/maps/TerraCave_End/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 94 "data/maps/TerraCave_End/scripts.pory"
# 53 "data/maps/TerraCave_End/scripts.pory"
# 95 "data/maps/TerraCave_End/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 96 "data/maps/TerraCave_End/scripts.pory"
	goto_if_eq TerraCave_End_EventScript_Groudon_2
# 97 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_Groudon_1:
# 98 "data/maps/TerraCave_End/scripts.pory"
# 56 "data/maps/TerraCave_End/scripts.pory"
# 99 "data/maps/TerraCave_End/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 100 "data/maps/TerraCave_End/scripts.pory"
	goto_if_eq TerraCave_End_EventScript_Groudon_5
# 101 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_Groudon_4:
# 102 "data/maps/TerraCave_End/scripts.pory"
# 59 "data/maps/TerraCave_End/scripts.pory"
# 103 "data/maps/TerraCave_End/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 104 "data/maps/TerraCave_End/scripts.pory"
	goto_if_eq TerraCave_End_EventScript_Groudon_8
# 105 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_Groudon_7:
# 106 "data/maps/TerraCave_End/scripts.pory"
# 62 "data/maps/TerraCave_End/scripts.pory"
# 107 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 108 "data/maps/TerraCave_End/scripts.pory"
# 63 "data/maps/TerraCave_End/scripts.pory"
# 109 "data/maps/TerraCave_End/scripts.pory"
	setflag FLAG_DEFEATED_GROUDON
# 110 "data/maps/TerraCave_End/scripts.pory"
# 64 "data/maps/TerraCave_End/scripts.pory"
# 111 "data/maps/TerraCave_End/scripts.pory"
	releaseall
# 112 "data/maps/TerraCave_End/scripts.pory"
	end
# 113 "data/maps/TerraCave_End/scripts.pory"

# 114 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_Groudon_2:
# 115 "data/maps/TerraCave_End/scripts.pory"
# 54 "data/maps/TerraCave_End/scripts.pory"
# 116 "data/maps/TerraCave_End/scripts.pory"
	goto TerraCave_End_EventScript_DefeatedGroudon
# 117 "data/maps/TerraCave_End/scripts.pory"
	goto TerraCave_End_EventScript_Groudon_1
# 118 "data/maps/TerraCave_End/scripts.pory"

# 119 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_Groudon_5:
# 120 "data/maps/TerraCave_End/scripts.pory"
# 57 "data/maps/TerraCave_End/scripts.pory"
# 121 "data/maps/TerraCave_End/scripts.pory"
	goto TerraCave_End_EventScript_RanFromGroudon
# 122 "data/maps/TerraCave_End/scripts.pory"
	goto TerraCave_End_EventScript_Groudon_4
# 123 "data/maps/TerraCave_End/scripts.pory"

# 124 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_Groudon_8:
# 125 "data/maps/TerraCave_End/scripts.pory"
# 60 "data/maps/TerraCave_End/scripts.pory"
# 126 "data/maps/TerraCave_End/scripts.pory"
	goto TerraCave_End_EventScript_RanFromGroudon
# 127 "data/maps/TerraCave_End/scripts.pory"
	goto TerraCave_End_EventScript_Groudon_7
# 128 "data/maps/TerraCave_End/scripts.pory"

# 129 "data/maps/TerraCave_End/scripts.pory"

# 130 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_DefeatedGroudon::
# 131 "data/maps/TerraCave_End/scripts.pory"
# 69 "data/maps/TerraCave_End/scripts.pory"
# 132 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 133 "data/maps/TerraCave_End/scripts.pory"
# 70 "data/maps/TerraCave_End/scripts.pory"
# 134 "data/maps/TerraCave_End/scripts.pory"
	setflag FLAG_DEFEATED_GROUDON
# 135 "data/maps/TerraCave_End/scripts.pory"
# 71 "data/maps/TerraCave_End/scripts.pory"
# 136 "data/maps/TerraCave_End/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 137 "data/maps/TerraCave_End/scripts.pory"
	end
# 138 "data/maps/TerraCave_End/scripts.pory"

# 139 "data/maps/TerraCave_End/scripts.pory"

# 140 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_RanFromGroudon::
# 141 "data/maps/TerraCave_End/scripts.pory"
# 76 "data/maps/TerraCave_End/scripts.pory"
# 142 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_0x8004, SPECIES_GROUDON
# 143 "data/maps/TerraCave_End/scripts.pory"
# 77 "data/maps/TerraCave_End/scripts.pory"
# 144 "data/maps/TerraCave_End/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 145 "data/maps/TerraCave_End/scripts.pory"
	end
# 146 "data/maps/TerraCave_End/scripts.pory"

# 147 "data/maps/TerraCave_End/scripts.pory"

# 148 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_Movement_GroudonApproach::
# 149 "data/maps/TerraCave_End/scripts.pory"
# 82 "data/maps/TerraCave_End/scripts.pory"
# 150 "data/maps/TerraCave_End/scripts.pory"
	init_affine_anim
# 151 "data/maps/TerraCave_End/scripts.pory"
# 83 "data/maps/TerraCave_End/scripts.pory"
# 152 "data/maps/TerraCave_End/scripts.pory"
	walk_down_start_affine
# 153 "data/maps/TerraCave_End/scripts.pory"
# 84 "data/maps/TerraCave_End/scripts.pory"
# 154 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 155 "data/maps/TerraCave_End/scripts.pory"
# 85 "data/maps/TerraCave_End/scripts.pory"
# 156 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 157 "data/maps/TerraCave_End/scripts.pory"
# 86 "data/maps/TerraCave_End/scripts.pory"
# 158 "data/maps/TerraCave_End/scripts.pory"
	walk_down_affine
# 159 "data/maps/TerraCave_End/scripts.pory"
# 87 "data/maps/TerraCave_End/scripts.pory"
# 160 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 161 "data/maps/TerraCave_End/scripts.pory"
# 88 "data/maps/TerraCave_End/scripts.pory"
# 162 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 163 "data/maps/TerraCave_End/scripts.pory"
# 89 "data/maps/TerraCave_End/scripts.pory"
# 164 "data/maps/TerraCave_End/scripts.pory"
	walk_down_affine
# 165 "data/maps/TerraCave_End/scripts.pory"
# 90 "data/maps/TerraCave_End/scripts.pory"
# 166 "data/maps/TerraCave_End/scripts.pory"
	step_end
# 167 "data/maps/TerraCave_End/scripts.pory"
	return
