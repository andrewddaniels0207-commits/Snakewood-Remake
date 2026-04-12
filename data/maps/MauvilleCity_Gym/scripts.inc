# 1 "data/maps/MauvilleCity_Gym/scripts.pory"

# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_MapScripts::
# 3 "data/maps/MauvilleCity_Gym/scripts.pory"
# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
# 4 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
# 5 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/MauvilleCity_Gym/scripts.pory"

# 7 "data/maps/MauvilleCity_Gym/scripts.pory"

# 8 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad::
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
# 6 "data/maps/MauvilleCity_Gym/scripts.pory"
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_OnLoad_2
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad_1:
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_MAUVILLE_GYM_STATE
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_OnLoad_6
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_OnLoad_7
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_OnLoad_8
# 20 "data/maps/MauvilleCity_Gym/scripts.pory"
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_OnLoad_9
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_OnLoad_10
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad_4:
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"

# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad_2:
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
# 7 "data/maps/MauvilleCity_Gym/scripts.pory"
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_OnLoad_1
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"

# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad_6:
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_OnLoad_4
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"

# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad_7:
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch1Pressed
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_OnLoad_4
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"

# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad_8:
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch2Pressed
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_OnLoad_4
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"

# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad_9:
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch3Pressed
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_OnLoad_4
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"

# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad_10:
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch4Pressed
# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_OnLoad_4
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"

# 57 "data/maps/MauvilleCity_Gym/scripts.pory"

# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_UpdateBarriers_2
# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers_1:
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"

# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers_2:
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_SetAltBarriers
# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers_1
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"

# 69 "data/maps/MauvilleCity_Gym/scripts.pory"

# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"

# 125 "data/maps/MauvilleCity_Gym/scripts.pory"

# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"

# 135 "data/maps/MauvilleCity_Gym/scripts.pory"

# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"

# 145 "data/maps/MauvilleCity_Gym/scripts.pory"

# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"

# 155 "data/maps/MauvilleCity_Gym/scripts.pory"

# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"

# 165 "data/maps/MauvilleCity_Gym/scripts.pory"

# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"

# 171 "data/maps/MauvilleCity_Gym/scripts.pory"

# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_2
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson_1:
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, MauvilleCity_Gym_EventScript_Wattson_5
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson_4:
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_8
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson_7:
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"

# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson_2:
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematch
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Wattson_1
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"

# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson_5:
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GiveShockWave2
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Wattson_4
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"

# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson_8:
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_CompletedNewMauville
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Wattson_7
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"

# 209 "data/maps/MauvilleCity_Gym/scripts.pory"

# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_WattsonDefeated_2
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated_1:
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"

# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated_2:
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonDefeated_1
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"

# 270 "data/maps/MauvilleCity_Gym/scripts.pory"

# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_GiveShockWave2_2
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2_1:
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"

# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2_2:
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GiveShockWave2_1
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"

# 291 "data/maps/MauvilleCity_Gym/scripts.pory"

# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_GiveShockWave_2
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave_1:
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"

# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave_2:
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto Common_EventScript_BagIsFull
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GiveShockWave_1
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"

# 310 "data/maps/MauvilleCity_Gym/scripts.pory"

# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"

# 318 "data/maps/MauvilleCity_Gym/scripts.pory"

# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"

# 326 "data/maps/MauvilleCity_Gym/scripts.pory"

# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_Switch1_2
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1_1:
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_MAUVILLE_GYM_STATE, 1
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_Switch1_5
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1_4:
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"

# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1_2:
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_SwitchDoNothing
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch1_1
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"

# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1_5:
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_SwitchDoNothing
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch1_4
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"

# 355 "data/maps/MauvilleCity_Gym/scripts.pory"

# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_Switch2_2
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2_1:
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_MAUVILLE_GYM_STATE, 2
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_Switch2_5
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2_4:
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"

# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2_2:
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_SwitchDoNothing
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch2_1
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"

# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2_5:
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_SwitchDoNothing
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch2_4
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"

# 384 "data/maps/MauvilleCity_Gym/scripts.pory"

# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_Switch3_2
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3_1:
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_MAUVILLE_GYM_STATE, 3
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_Switch3_5
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3_4:
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"

# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3_2:
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_SwitchDoNothing
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch3_1
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"

# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3_5:
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_SwitchDoNothing
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch3_4
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"

# 413 "data/maps/MauvilleCity_Gym/scripts.pory"

# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_Switch4_2
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4_1:
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_MAUVILLE_GYM_STATE, 4
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_Switch4_5
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4_4:
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 430 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"

# 432 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4_2:
# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_SwitchDoNothing
# 435 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch4_1
# 436 "data/maps/MauvilleCity_Gym/scripts.pory"

# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4_5:
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_SwitchDoNothing
# 440 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Switch4_4
# 441 "data/maps/MauvilleCity_Gym/scripts.pory"

# 442 "data/maps/MauvilleCity_Gym/scripts.pory"

# 443 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 446 "data/maps/MauvilleCity_Gym/scripts.pory"
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 448 "data/maps/MauvilleCity_Gym/scripts.pory"
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
# 449 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 450 "data/maps/MauvilleCity_Gym/scripts.pory"
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
# 451 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_PressFloorSwitch_2
# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch_1:
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
# 456 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_PressFloorSwitch_5
# 457 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch_4:
# 458 "data/maps/MauvilleCity_Gym/scripts.pory"
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
# 459 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 460 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 461 "data/maps/MauvilleCity_Gym/scripts.pory"

# 462 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch_2:
# 463 "data/maps/MauvilleCity_Gym/scripts.pory"
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
# 464 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 465 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch_1
# 466 "data/maps/MauvilleCity_Gym/scripts.pory"

# 467 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch_5:
# 468 "data/maps/MauvilleCity_Gym/scripts.pory"
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
# 469 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_SetBarriersAltState
# 470 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch_4
# 471 "data/maps/MauvilleCity_Gym/scripts.pory"

# 472 "data/maps/MauvilleCity_Gym/scripts.pory"

# 473 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 474 "data/maps/MauvilleCity_Gym/scripts.pory"
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
# 475 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 476 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 477 "data/maps/MauvilleCity_Gym/scripts.pory"

# 478 "data/maps/MauvilleCity_Gym/scripts.pory"

# 479 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
# 481 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 482 "data/maps/MauvilleCity_Gym/scripts.pory"
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
# 483 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 484 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 485 "data/maps/MauvilleCity_Gym/scripts.pory"

# 486 "data/maps/MauvilleCity_Gym/scripts.pory"

# 487 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 488 "data/maps/MauvilleCity_Gym/scripts.pory"
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
# 489 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 490 "data/maps/MauvilleCity_Gym/scripts.pory"
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
# 491 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 492 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 493 "data/maps/MauvilleCity_Gym/scripts.pory"

# 494 "data/maps/MauvilleCity_Gym/scripts.pory"

# 495 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 496 "data/maps/MauvilleCity_Gym/scripts.pory"
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
# 497 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 498 "data/maps/MauvilleCity_Gym/scripts.pory"
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
# 499 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 500 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 501 "data/maps/MauvilleCity_Gym/scripts.pory"

# 502 "data/maps/MauvilleCity_Gym/scripts.pory"

# 503 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 504 "data/maps/MauvilleCity_Gym/scripts.pory"
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
# 505 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 506 "data/maps/MauvilleCity_Gym/scripts.pory"
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
# 507 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 509 "data/maps/MauvilleCity_Gym/scripts.pory"

# 510 "data/maps/MauvilleCity_Gym/scripts.pory"

# 511 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 512 "data/maps/MauvilleCity_Gym/scripts.pory"
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
# 513 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 514 "data/maps/MauvilleCity_Gym/scripts.pory"
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
# 515 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 516 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 517 "data/maps/MauvilleCity_Gym/scripts.pory"

# 518 "data/maps/MauvilleCity_Gym/scripts.pory"

# 519 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 520 "data/maps/MauvilleCity_Gym/scripts.pory"
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
# 521 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 522 "data/maps/MauvilleCity_Gym/scripts.pory"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
# 523 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 524 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 525 "data/maps/MauvilleCity_Gym/scripts.pory"

# 526 "data/maps/MauvilleCity_Gym/scripts.pory"

# 527 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 528 "data/maps/MauvilleCity_Gym/scripts.pory"
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
# 529 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 530 "data/maps/MauvilleCity_Gym/scripts.pory"
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
# 531 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 532 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 533 "data/maps/MauvilleCity_Gym/scripts.pory"

# 534 "data/maps/MauvilleCity_Gym/scripts.pory"

# 535 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 536 "data/maps/MauvilleCity_Gym/scripts.pory"
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
# 537 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 538 "data/maps/MauvilleCity_Gym/scripts.pory"
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
# 539 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 540 "data/maps/MauvilleCity_Gym/scripts.pory"
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
# 541 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuide_2
# 542 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide_1:
# 543 "data/maps/MauvilleCity_Gym/scripts.pory"
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
# 544 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 545 "data/maps/MauvilleCity_Gym/scripts.pory"
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
# 546 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 547 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 548 "data/maps/MauvilleCity_Gym/scripts.pory"

# 549 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide_2:
# 550 "data/maps/MauvilleCity_Gym/scripts.pory"
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
# 551 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 552 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymGuide_1
# 553 "data/maps/MauvilleCity_Gym/scripts.pory"

# 554 "data/maps/MauvilleCity_Gym/scripts.pory"

# 555 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 556 "data/maps/MauvilleCity_Gym/scripts.pory"
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
# 557 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 558 "data/maps/MauvilleCity_Gym/scripts.pory"
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
# 559 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 560 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 561 "data/maps/MauvilleCity_Gym/scripts.pory"

# 562 "data/maps/MauvilleCity_Gym/scripts.pory"

# 563 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 564 "data/maps/MauvilleCity_Gym/scripts.pory"
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
# 565 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 566 "data/maps/MauvilleCity_Gym/scripts.pory"
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
# 567 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_LeftGymStatue_2
# 568 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue_1:
# 569 "data/maps/MauvilleCity_Gym/scripts.pory"
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
# 570 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 571 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 572 "data/maps/MauvilleCity_Gym/scripts.pory"

# 573 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue_2:
# 574 "data/maps/MauvilleCity_Gym/scripts.pory"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
# 575 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatueCertified
# 576 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_LeftGymStatue_1
# 577 "data/maps/MauvilleCity_Gym/scripts.pory"

# 578 "data/maps/MauvilleCity_Gym/scripts.pory"

# 579 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 580 "data/maps/MauvilleCity_Gym/scripts.pory"
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
# 581 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 582 "data/maps/MauvilleCity_Gym/scripts.pory"
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
# 583 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_RightGymStatue_2
# 584 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue_1:
# 585 "data/maps/MauvilleCity_Gym/scripts.pory"
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
# 586 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 587 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 588 "data/maps/MauvilleCity_Gym/scripts.pory"

# 589 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue_2:
# 590 "data/maps/MauvilleCity_Gym/scripts.pory"
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
# 591 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatueCertified
# 592 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_RightGymStatue_1
# 593 "data/maps/MauvilleCity_Gym/scripts.pory"

# 594 "data/maps/MauvilleCity_Gym/scripts.pory"

# 595 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 596 "data/maps/MauvilleCity_Gym/scripts.pory"
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
# 597 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 598 "data/maps/MauvilleCity_Gym/scripts.pory"
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
# 599 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 600 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 601 "data/maps/MauvilleCity_Gym/scripts.pory"

# 602 "data/maps/MauvilleCity_Gym/scripts.pory"

# 603 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 604 "data/maps/MauvilleCity_Gym/scripts.pory"
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
# 605 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 606 "data/maps/MauvilleCity_Gym/scripts.pory"
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
# 607 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 608 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 609 "data/maps/MauvilleCity_Gym/scripts.pory"

# 610 "data/maps/MauvilleCity_Gym/scripts.pory"

# 611 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice::
# 612 "data/maps/MauvilleCity_Gym/scripts.pory"
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
# 613 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 614 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 615 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 616 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 617 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 618 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 619 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 620 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 621 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 622 "data/maps/MauvilleCity_Gym/scripts.pory"

# 623 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory::
# 624 "data/maps/MauvilleCity_Gym/scripts.pory"
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
# 625 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 626 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 627 "data/maps/MauvilleCity_Gym/scripts.pory"

# 628 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro::
# 629 "data/maps/MauvilleCity_Gym/scripts.pory"
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
# 630 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 631 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 632 "data/maps/MauvilleCity_Gym/scripts.pory"

# 633 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat::
# 634 "data/maps/MauvilleCity_Gym/scripts.pory"
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
# 635 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 636 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 637 "data/maps/MauvilleCity_Gym/scripts.pory"

# 638 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle::
# 639 "data/maps/MauvilleCity_Gym/scripts.pory"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
# 640 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 641 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 642 "data/maps/MauvilleCity_Gym/scripts.pory"

# 643 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro::
# 644 "data/maps/MauvilleCity_Gym/scripts.pory"
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
# 645 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 646 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 647 "data/maps/MauvilleCity_Gym/scripts.pory"

# 648 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat::
# 649 "data/maps/MauvilleCity_Gym/scripts.pory"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
# 650 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 651 "data/maps/MauvilleCity_Gym/scripts.pory"

# 652 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle::
# 653 "data/maps/MauvilleCity_Gym/scripts.pory"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
# 654 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 655 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 656 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 657 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 658 "data/maps/MauvilleCity_Gym/scripts.pory"

# 659 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro::
# 660 "data/maps/MauvilleCity_Gym/scripts.pory"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
# 661 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 662 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 663 "data/maps/MauvilleCity_Gym/scripts.pory"

# 664 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat::
# 665 "data/maps/MauvilleCity_Gym/scripts.pory"
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
# 666 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 667 "data/maps/MauvilleCity_Gym/scripts.pory"

# 668 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle::
# 669 "data/maps/MauvilleCity_Gym/scripts.pory"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
# 670 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 671 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 672 "data/maps/MauvilleCity_Gym/scripts.pory"

# 673 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro::
# 674 "data/maps/MauvilleCity_Gym/scripts.pory"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
# 675 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 676 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 677 "data/maps/MauvilleCity_Gym/scripts.pory"

# 678 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat::
# 679 "data/maps/MauvilleCity_Gym/scripts.pory"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
# 680 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 681 "data/maps/MauvilleCity_Gym/scripts.pory"

# 682 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle::
# 683 "data/maps/MauvilleCity_Gym/scripts.pory"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
# 684 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 685 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 686 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 687 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 688 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 689 "data/maps/MauvilleCity_Gym/scripts.pory"

# 690 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro::
# 691 "data/maps/MauvilleCity_Gym/scripts.pory"
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
# 692 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 693 "data/maps/MauvilleCity_Gym/scripts.pory"

# 694 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat::
# 695 "data/maps/MauvilleCity_Gym/scripts.pory"
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
# 696 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 697 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 698 "data/maps/MauvilleCity_Gym/scripts.pory"

# 699 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle::
# 700 "data/maps/MauvilleCity_Gym/scripts.pory"
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
# 701 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 702 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 703 "data/maps/MauvilleCity_Gym/scripts.pory"

# 704 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro::
# 705 "data/maps/MauvilleCity_Gym/scripts.pory"
# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
# 706 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 707 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 708 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 709 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 710 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 711 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 712 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 713 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 714 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 715 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 716 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 717 "data/maps/MauvilleCity_Gym/scripts.pory"

# 718 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat::
# 719 "data/maps/MauvilleCity_Gym/scripts.pory"
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"
# 720 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 721 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 722 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 723 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 724 "data/maps/MauvilleCity_Gym/scripts.pory"

# 725 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge::
# 726 "data/maps/MauvilleCity_Gym/scripts.pory"
# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
# 727 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 728 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 729 "data/maps/MauvilleCity_Gym/scripts.pory"

# 730 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis::
# 731 "data/maps/MauvilleCity_Gym/scripts.pory"
# 459 "data/maps/MauvilleCity_Gym/scripts.pory"
# 732 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 733 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 734 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, it will make your POKéMON a little\n"
# 735 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bit faster, too.\p"
# 736 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 737 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 738 "data/maps/MauvilleCity_Gym/scripts.pory"

# 739 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave::
# 740 "data/maps/MauvilleCity_Gym/scripts.pory"
# 468 "data/maps/MauvilleCity_Gym/scripts.pory"
# 741 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains SHOCK WAVE.\p"
# 742 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that never\n"
# 743 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "misses! You can count on it!\p"
# 744 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 745 "data/maps/MauvilleCity_Gym/scripts.pory"

# 746 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson::
# 747 "data/maps/MauvilleCity_Gym/scripts.pory"
# 475 "data/maps/MauvilleCity_Gym/scripts.pory"
# 748 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 749 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 750 "data/maps/MauvilleCity_Gym/scripts.pory"

# 751 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle::
# 752 "data/maps/MauvilleCity_Gym/scripts.pory"
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"
# 753 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 754 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 755 "data/maps/MauvilleCity_Gym/scripts.pory"

# 756 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor::
# 757 "data/maps/MauvilleCity_Gym/scripts.pory"
# 485 "data/maps/MauvilleCity_Gym/scripts.pory"
# 758 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 759 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 760 "data/maps/MauvilleCity_Gym/scripts.pory"

# 761 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue::
# 762 "data/maps/MauvilleCity_Gym/scripts.pory"
# 490 "data/maps/MauvilleCity_Gym/scripts.pory"
# 763 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 764 "data/maps/MauvilleCity_Gym/scripts.pory"

# 765 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified::
# 766 "data/maps/MauvilleCity_Gym/scripts.pory"
# 494 "data/maps/MauvilleCity_Gym/scripts.pory"
# 767 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 768 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 769 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 770 "data/maps/MauvilleCity_Gym/scripts.pory"

# 771 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch::
# 772 "data/maps/MauvilleCity_Gym/scripts.pory"
# 500 "data/maps/MauvilleCity_Gym/scripts.pory"
# 773 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 774 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 775 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 776 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 777 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 778 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 779 "data/maps/MauvilleCity_Gym/scripts.pory"

# 780 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat::
# 781 "data/maps/MauvilleCity_Gym/scripts.pory"
# 509 "data/maps/MauvilleCity_Gym/scripts.pory"
# 782 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 783 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 784 "data/maps/MauvilleCity_Gym/scripts.pory"

# 785 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch::
# 786 "data/maps/MauvilleCity_Gym/scripts.pory"
# 514 "data/maps/MauvilleCity_Gym/scripts.pory"
# 787 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 788 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 789 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 790 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 791 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 792 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 793 "data/maps/MauvilleCity_Gym/scripts.pory"

# 794 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons::
# 795 "data/maps/MauvilleCity_Gym/scripts.pory"
# 523 "data/maps/MauvilleCity_Gym/scripts.pory"
# 796 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 797 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 798 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 799 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 800 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 801 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 802 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 803 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"
