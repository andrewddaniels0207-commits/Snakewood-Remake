# 1 "data/maps/DewfordTown_Gym/scripts.pory"

# 2 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
# 2 "data/maps/DewfordTown_Gym/scripts.pory"
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 5 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/DewfordTown_Gym/scripts.pory"

# 7 "data/maps/DewfordTown_Gym/scripts.pory"

# 8 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition::
# 9 "data/maps/DewfordTown_Gym/scripts.pory"
# 6 "data/maps/DewfordTown_Gym/scripts.pory"
# 10 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 12 "data/maps/DewfordTown_Gym/scripts.pory"

# 13 "data/maps/DewfordTown_Gym/scripts.pory"

# 14 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 0
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashLevel_2
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_1:
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 1
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashLevel_5
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_4:
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 2
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashLevel_8
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_7:
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
# 34 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 3
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashLevel_11
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_10:
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 4
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashLevel_14
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_13:
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 5
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashLevel_17
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_16:
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 48 "data/maps/DewfordTown_Gym/scripts.pory"

# 49 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_2:
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel7
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel_1
# 53 "data/maps/DewfordTown_Gym/scripts.pory"

# 54 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_5:
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel6
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel_4
# 58 "data/maps/DewfordTown_Gym/scripts.pory"

# 59 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_8:
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel5
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel_7
# 63 "data/maps/DewfordTown_Gym/scripts.pory"

# 64 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_11:
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel4
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel_10
# 68 "data/maps/DewfordTown_Gym/scripts.pory"

# 69 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_14:
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel3
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel_13
# 73 "data/maps/DewfordTown_Gym/scripts.pory"

# 74 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel_17:
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel2
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel_16
# 78 "data/maps/DewfordTown_Gym/scripts.pory"

# 79 "data/maps/DewfordTown_Gym/scripts.pory"

# 80 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 84 "data/maps/DewfordTown_Gym/scripts.pory"

# 85 "data/maps/DewfordTown_Gym/scripts.pory"

# 86 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 90 "data/maps/DewfordTown_Gym/scripts.pory"

# 91 "data/maps/DewfordTown_Gym/scripts.pory"

# 92 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 96 "data/maps/DewfordTown_Gym/scripts.pory"

# 97 "data/maps/DewfordTown_Gym/scripts.pory"

# 98 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 102 "data/maps/DewfordTown_Gym/scripts.pory"

# 103 "data/maps/DewfordTown_Gym/scripts.pory"

# 104 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 108 "data/maps/DewfordTown_Gym/scripts.pory"

# 109 "data/maps/DewfordTown_Gym/scripts.pory"

# 110 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 114 "data/maps/DewfordTown_Gym/scripts.pory"

# 115 "data/maps/DewfordTown_Gym/scripts.pory"

# 116 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 120 "data/maps/DewfordTown_Gym/scripts.pory"

# 121 "data/maps/DewfordTown_Gym/scripts.pory"

# 122 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 126 "data/maps/DewfordTown_Gym/scripts.pory"

# 127 "data/maps/DewfordTown_Gym/scripts.pory"

# 128 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, VAR_0x8001
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_BrightenRoom_2
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_1:
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 1
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_BrightenRoom_5
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_4:
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 2
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_BrightenRoom_8
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_7:
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 3
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_BrightenRoom_11
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_10:
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 4
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_BrightenRoom_14
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_13:
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 5
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_BrightenRoom_17
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_16:
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 6
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_BrightenRoom_19
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 163 "data/maps/DewfordTown_Gym/scripts.pory"

# 164 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_2:
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_NoLightChange
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrightenRoom_1
# 168 "data/maps/DewfordTown_Gym/scripts.pory"

# 169 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_5:
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrightenRoom_4
# 173 "data/maps/DewfordTown_Gym/scripts.pory"

# 174 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_8:
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrightenRoom_7
# 178 "data/maps/DewfordTown_Gym/scripts.pory"

# 179 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_11:
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrightenRoom_10
# 183 "data/maps/DewfordTown_Gym/scripts.pory"

# 184 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_14:
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrightenRoom_13
# 188 "data/maps/DewfordTown_Gym/scripts.pory"

# 189 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_17:
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrightenRoom_16
# 193 "data/maps/DewfordTown_Gym/scripts.pory"

# 194 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom_19:
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 198 "data/maps/DewfordTown_Gym/scripts.pory"

# 199 "data/maps/DewfordTown_Gym/scripts.pory"

# 200 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 202 "data/maps/DewfordTown_Gym/scripts.pory"

# 203 "data/maps/DewfordTown_Gym/scripts.pory"

# 204 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 212 "data/maps/DewfordTown_Gym/scripts.pory"

# 213 "data/maps/DewfordTown_Gym/scripts.pory"

# 214 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 222 "data/maps/DewfordTown_Gym/scripts.pory"

# 223 "data/maps/DewfordTown_Gym/scripts.pory"

# 224 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 232 "data/maps/DewfordTown_Gym/scripts.pory"

# 233 "data/maps/DewfordTown_Gym/scripts.pory"

# 234 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 242 "data/maps/DewfordTown_Gym/scripts.pory"

# 243 "data/maps/DewfordTown_Gym/scripts.pory"

# 244 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 252 "data/maps/DewfordTown_Gym/scripts.pory"

# 253 "data/maps/DewfordTown_Gym/scripts.pory"

# 254 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 262 "data/maps/DewfordTown_Gym/scripts.pory"

# 263 "data/maps/DewfordTown_Gym/scripts.pory"

# 264 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 272 "data/maps/DewfordTown_Gym/scripts.pory"

# 273 "data/maps/DewfordTown_Gym/scripts.pory"

# 274 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 282 "data/maps/DewfordTown_Gym/scripts.pory"

# 283 "data/maps/DewfordTown_Gym/scripts.pory"

# 284 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 290 "data/maps/DewfordTown_Gym/scripts.pory"

# 291 "data/maps/DewfordTown_Gym/scripts.pory"

# 292 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 298 "data/maps/DewfordTown_Gym/scripts.pory"

# 299 "data/maps/DewfordTown_Gym/scripts.pory"

# 300 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 306 "data/maps/DewfordTown_Gym/scripts.pory"

# 307 "data/maps/DewfordTown_Gym/scripts.pory"

# 308 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 314 "data/maps/DewfordTown_Gym/scripts.pory"

# 315 "data/maps/DewfordTown_Gym/scripts.pory"

# 316 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 322 "data/maps/DewfordTown_Gym/scripts.pory"

# 323 "data/maps/DewfordTown_Gym/scripts.pory"

# 324 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 326 "data/maps/DewfordTown_Gym/scripts.pory"

# 327 "data/maps/DewfordTown_Gym/scripts.pory"

# 328 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_2
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_1:
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_Brawly_5
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_4:
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 345 "data/maps/DewfordTown_Gym/scripts.pory"

# 346 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_2:
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematch
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Brawly_1
# 350 "data/maps/DewfordTown_Gym/scripts.pory"

# 351 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_5:
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GiveBulkUp2
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Brawly_4
# 355 "data/maps/DewfordTown_Gym/scripts.pory"

# 356 "data/maps/DewfordTown_Gym/scripts.pory"

# 357 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_BrawlyDefeated_2
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated_1:
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 407 "data/maps/DewfordTown_Gym/scripts.pory"

# 408 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated_2:
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyDefeated_1
# 412 "data/maps/DewfordTown_Gym/scripts.pory"

# 413 "data/maps/DewfordTown_Gym/scripts.pory"

# 414 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, 0
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_GiveBulkUp_2
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp_1:
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 426 "data/maps/DewfordTown_Gym/scripts.pory"

# 427 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp_2:
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	goto Common_EventScript_BagIsFull
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GiveBulkUp_1
# 431 "data/maps/DewfordTown_Gym/scripts.pory"

# 432 "data/maps/DewfordTown_Gym/scripts.pory"

# 433 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2::
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, 0
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq DewfordTown_Gym_EventScript_GiveBulkUp2_2
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2_1:
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 447 "data/maps/DewfordTown_Gym/scripts.pory"

# 448 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2_2:
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GiveBulkUp2_1
# 452 "data/maps/DewfordTown_Gym/scripts.pory"

# 453 "data/maps/DewfordTown_Gym/scripts.pory"

# 454 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 460 "data/maps/DewfordTown_Gym/scripts.pory"

# 461 "data/maps/DewfordTown_Gym/scripts.pory"

# 462 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
# 464 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 465 "data/maps/DewfordTown_Gym/scripts.pory"
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 467 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 468 "data/maps/DewfordTown_Gym/scripts.pory"

# 469 "data/maps/DewfordTown_Gym/scripts.pory"

# 470 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
# 472 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 473 "data/maps/DewfordTown_Gym/scripts.pory"
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
# 474 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 476 "data/maps/DewfordTown_Gym/scripts.pory"

# 477 "data/maps/DewfordTown_Gym/scripts.pory"

# 478 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 479 "data/maps/DewfordTown_Gym/scripts.pory"
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
# 480 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 481 "data/maps/DewfordTown_Gym/scripts.pory"
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 483 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 484 "data/maps/DewfordTown_Gym/scripts.pory"

# 485 "data/maps/DewfordTown_Gym/scripts.pory"

# 486 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 487 "data/maps/DewfordTown_Gym/scripts.pory"
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
# 488 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 489 "data/maps/DewfordTown_Gym/scripts.pory"
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
# 490 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 491 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 492 "data/maps/DewfordTown_Gym/scripts.pory"

# 493 "data/maps/DewfordTown_Gym/scripts.pory"

# 494 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 495 "data/maps/DewfordTown_Gym/scripts.pory"
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 497 "data/maps/DewfordTown_Gym/scripts.pory"
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
# 498 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 499 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 500 "data/maps/DewfordTown_Gym/scripts.pory"

# 501 "data/maps/DewfordTown_Gym/scripts.pory"

# 502 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 503 "data/maps/DewfordTown_Gym/scripts.pory"
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 505 "data/maps/DewfordTown_Gym/scripts.pory"
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
# 506 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 507 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 508 "data/maps/DewfordTown_Gym/scripts.pory"

# 509 "data/maps/DewfordTown_Gym/scripts.pory"

# 510 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 511 "data/maps/DewfordTown_Gym/scripts.pory"
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
# 512 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 513 "data/maps/DewfordTown_Gym/scripts.pory"
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
# 514 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 515 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 516 "data/maps/DewfordTown_Gym/scripts.pory"

# 517 "data/maps/DewfordTown_Gym/scripts.pory"

# 518 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 519 "data/maps/DewfordTown_Gym/scripts.pory"
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
# 520 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 521 "data/maps/DewfordTown_Gym/scripts.pory"
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
# 522 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 523 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 524 "data/maps/DewfordTown_Gym/scripts.pory"

# 525 "data/maps/DewfordTown_Gym/scripts.pory"

# 526 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 527 "data/maps/DewfordTown_Gym/scripts.pory"
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
# 528 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 529 "data/maps/DewfordTown_Gym/scripts.pory"
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
# 530 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 531 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 532 "data/maps/DewfordTown_Gym/scripts.pory"

# 533 "data/maps/DewfordTown_Gym/scripts.pory"

# 534 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 535 "data/maps/DewfordTown_Gym/scripts.pory"
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 537 "data/maps/DewfordTown_Gym/scripts.pory"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
# 538 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 539 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 540 "data/maps/DewfordTown_Gym/scripts.pory"

# 541 "data/maps/DewfordTown_Gym/scripts.pory"

# 542 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 543 "data/maps/DewfordTown_Gym/scripts.pory"
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
# 544 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 545 "data/maps/DewfordTown_Gym/scripts.pory"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
# 546 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 547 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 548 "data/maps/DewfordTown_Gym/scripts.pory"

# 549 "data/maps/DewfordTown_Gym/scripts.pory"

# 550 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 551 "data/maps/DewfordTown_Gym/scripts.pory"
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
# 552 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 553 "data/maps/DewfordTown_Gym/scripts.pory"
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
# 554 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 555 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 556 "data/maps/DewfordTown_Gym/scripts.pory"

# 557 "data/maps/DewfordTown_Gym/scripts.pory"

# 558 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 559 "data/maps/DewfordTown_Gym/scripts.pory"
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
# 560 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 561 "data/maps/DewfordTown_Gym/scripts.pory"
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
# 562 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 563 "data/maps/DewfordTown_Gym/scripts.pory"
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
# 564 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuide_2
# 565 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide_1:
# 566 "data/maps/DewfordTown_Gym/scripts.pory"
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
# 567 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 568 "data/maps/DewfordTown_Gym/scripts.pory"
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
# 569 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 570 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 571 "data/maps/DewfordTown_Gym/scripts.pory"

# 572 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide_2:
# 573 "data/maps/DewfordTown_Gym/scripts.pory"
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
# 574 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymGuidePostVictory
# 575 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymGuide_1
# 576 "data/maps/DewfordTown_Gym/scripts.pory"

# 577 "data/maps/DewfordTown_Gym/scripts.pory"

# 578 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 579 "data/maps/DewfordTown_Gym/scripts.pory"
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
# 580 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 581 "data/maps/DewfordTown_Gym/scripts.pory"
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
# 582 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 583 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 584 "data/maps/DewfordTown_Gym/scripts.pory"

# 585 "data/maps/DewfordTown_Gym/scripts.pory"

# 586 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 587 "data/maps/DewfordTown_Gym/scripts.pory"
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
# 588 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 589 "data/maps/DewfordTown_Gym/scripts.pory"
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
# 590 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_LeftGymStatue_2
# 591 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue_1:
# 592 "data/maps/DewfordTown_Gym/scripts.pory"
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
# 593 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 594 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 595 "data/maps/DewfordTown_Gym/scripts.pory"

# 596 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue_2:
# 597 "data/maps/DewfordTown_Gym/scripts.pory"
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
# 598 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatueCertified
# 599 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_LeftGymStatue_1
# 600 "data/maps/DewfordTown_Gym/scripts.pory"

# 601 "data/maps/DewfordTown_Gym/scripts.pory"

# 602 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 603 "data/maps/DewfordTown_Gym/scripts.pory"
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
# 604 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 605 "data/maps/DewfordTown_Gym/scripts.pory"
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
# 606 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_RightGymStatue_2
# 607 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue_1:
# 608 "data/maps/DewfordTown_Gym/scripts.pory"
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
# 609 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 610 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 611 "data/maps/DewfordTown_Gym/scripts.pory"

# 612 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue_2:
# 613 "data/maps/DewfordTown_Gym/scripts.pory"
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
# 614 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatueCertified
# 615 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_RightGymStatue_1
# 616 "data/maps/DewfordTown_Gym/scripts.pory"

# 617 "data/maps/DewfordTown_Gym/scripts.pory"

# 618 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 619 "data/maps/DewfordTown_Gym/scripts.pory"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
# 620 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 621 "data/maps/DewfordTown_Gym/scripts.pory"
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
# 622 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 623 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 624 "data/maps/DewfordTown_Gym/scripts.pory"

# 625 "data/maps/DewfordTown_Gym/scripts.pory"

# 626 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 627 "data/maps/DewfordTown_Gym/scripts.pory"
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
# 628 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 629 "data/maps/DewfordTown_Gym/scripts.pory"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
# 630 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 631 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 632 "data/maps/DewfordTown_Gym/scripts.pory"

# 633 "data/maps/DewfordTown_Gym/scripts.pory"

# 634 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice::
# 635 "data/maps/DewfordTown_Gym/scripts.pory"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
# 636 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 637 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 638 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 639 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 640 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 641 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 642 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 643 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 644 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 645 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 646 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 647 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 648 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 649 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 650 "data/maps/DewfordTown_Gym/scripts.pory"

# 651 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory::
# 652 "data/maps/DewfordTown_Gym/scripts.pory"
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
# 653 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 654 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 655 "data/maps/DewfordTown_Gym/scripts.pory"

# 656 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro::
# 657 "data/maps/DewfordTown_Gym/scripts.pory"
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
# 658 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 659 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 660 "data/maps/DewfordTown_Gym/scripts.pory"

# 661 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat::
# 662 "data/maps/DewfordTown_Gym/scripts.pory"
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
# 663 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 664 "data/maps/DewfordTown_Gym/scripts.pory"

# 665 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle::
# 666 "data/maps/DewfordTown_Gym/scripts.pory"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
# 667 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 668 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 669 "data/maps/DewfordTown_Gym/scripts.pory"

# 670 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro::
# 671 "data/maps/DewfordTown_Gym/scripts.pory"
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
# 672 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 673 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 674 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 675 "data/maps/DewfordTown_Gym/scripts.pory"

# 676 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat::
# 677 "data/maps/DewfordTown_Gym/scripts.pory"
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
# 678 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 679 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 680 "data/maps/DewfordTown_Gym/scripts.pory"

# 681 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle::
# 682 "data/maps/DewfordTown_Gym/scripts.pory"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
# 683 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 684 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 685 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 686 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 687 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 688 "data/maps/DewfordTown_Gym/scripts.pory"

# 689 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro::
# 690 "data/maps/DewfordTown_Gym/scripts.pory"
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
# 691 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 692 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 693 "data/maps/DewfordTown_Gym/scripts.pory"

# 694 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat::
# 695 "data/maps/DewfordTown_Gym/scripts.pory"
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
# 696 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 697 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 698 "data/maps/DewfordTown_Gym/scripts.pory"

# 699 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle::
# 700 "data/maps/DewfordTown_Gym/scripts.pory"
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
# 701 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 702 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 703 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 704 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 705 "data/maps/DewfordTown_Gym/scripts.pory"

# 706 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro::
# 707 "data/maps/DewfordTown_Gym/scripts.pory"
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
# 708 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 709 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 710 "data/maps/DewfordTown_Gym/scripts.pory"

# 711 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat::
# 712 "data/maps/DewfordTown_Gym/scripts.pory"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
# 713 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 714 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 715 "data/maps/DewfordTown_Gym/scripts.pory"

# 716 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle::
# 717 "data/maps/DewfordTown_Gym/scripts.pory"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
# 718 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 719 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 720 "data/maps/DewfordTown_Gym/scripts.pory"

# 721 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro::
# 722 "data/maps/DewfordTown_Gym/scripts.pory"
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
# 723 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 724 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 725 "data/maps/DewfordTown_Gym/scripts.pory"

# 726 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat::
# 727 "data/maps/DewfordTown_Gym/scripts.pory"
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
# 728 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 729 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 730 "data/maps/DewfordTown_Gym/scripts.pory"

# 731 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle::
# 732 "data/maps/DewfordTown_Gym/scripts.pory"
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
# 733 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 734 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 735 "data/maps/DewfordTown_Gym/scripts.pory"

# 736 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro::
# 737 "data/maps/DewfordTown_Gym/scripts.pory"
# 481 "data/maps/DewfordTown_Gym/scripts.pory"
# 738 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 739 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 740 "data/maps/DewfordTown_Gym/scripts.pory"

# 741 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat::
# 742 "data/maps/DewfordTown_Gym/scripts.pory"
# 486 "data/maps/DewfordTown_Gym/scripts.pory"
# 743 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 744 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 745 "data/maps/DewfordTown_Gym/scripts.pory"

# 746 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle::
# 747 "data/maps/DewfordTown_Gym/scripts.pory"
# 491 "data/maps/DewfordTown_Gym/scripts.pory"
# 748 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 749 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 750 "data/maps/DewfordTown_Gym/scripts.pory"

# 751 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro::
# 752 "data/maps/DewfordTown_Gym/scripts.pory"
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
# 753 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 754 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 755 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 756 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 757 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 758 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 759 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 760 "data/maps/DewfordTown_Gym/scripts.pory"

# 761 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat::
# 762 "data/maps/DewfordTown_Gym/scripts.pory"
# 506 "data/maps/DewfordTown_Gym/scripts.pory"
# 763 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 764 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 765 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 766 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 767 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 768 "data/maps/DewfordTown_Gym/scripts.pory"

# 769 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge::
# 770 "data/maps/DewfordTown_Gym/scripts.pory"
# 514 "data/maps/DewfordTown_Gym/scripts.pory"
# 771 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 772 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 773 "data/maps/DewfordTown_Gym/scripts.pory"

# 774 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis::
# 775 "data/maps/DewfordTown_Gym/scripts.pory"
# 519 "data/maps/DewfordTown_Gym/scripts.pory"
# 776 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 777 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 778 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 779 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 780 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 781 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 782 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 783 "data/maps/DewfordTown_Gym/scripts.pory"

# 784 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp::
# 785 "data/maps/DewfordTown_Gym/scripts.pory"
# 529 "data/maps/DewfordTown_Gym/scripts.pory"
# 786 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 787 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 788 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 789 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 790 "data/maps/DewfordTown_Gym/scripts.pory"

# 791 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly::
# 792 "data/maps/DewfordTown_Gym/scripts.pory"
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
# 793 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 794 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 795 "data/maps/DewfordTown_Gym/scripts.pory"

# 796 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle::
# 797 "data/maps/DewfordTown_Gym/scripts.pory"
# 541 "data/maps/DewfordTown_Gym/scripts.pory"
# 798 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 799 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 800 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 801 "data/maps/DewfordTown_Gym/scripts.pory"

# 802 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue::
# 803 "data/maps/DewfordTown_Gym/scripts.pory"
# 547 "data/maps/DewfordTown_Gym/scripts.pory"
# 804 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 805 "data/maps/DewfordTown_Gym/scripts.pory"

# 806 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified::
# 807 "data/maps/DewfordTown_Gym/scripts.pory"
# 551 "data/maps/DewfordTown_Gym/scripts.pory"
# 808 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 809 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 810 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 811 "data/maps/DewfordTown_Gym/scripts.pory"

# 812 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch::
# 813 "data/maps/DewfordTown_Gym/scripts.pory"
# 557 "data/maps/DewfordTown_Gym/scripts.pory"
# 814 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 815 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 816 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 817 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 818 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 819 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 820 "data/maps/DewfordTown_Gym/scripts.pory"

# 821 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat::
# 822 "data/maps/DewfordTown_Gym/scripts.pory"
# 566 "data/maps/DewfordTown_Gym/scripts.pory"
# 823 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 824 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 825 "data/maps/DewfordTown_Gym/scripts.pory"

# 826 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch::
# 827 "data/maps/DewfordTown_Gym/scripts.pory"
# 571 "data/maps/DewfordTown_Gym/scripts.pory"
# 828 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 829 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 830 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 831 "data/maps/DewfordTown_Gym/scripts.pory"

# 832 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons::
# 833 "data/maps/DewfordTown_Gym/scripts.pory"
# 577 "data/maps/DewfordTown_Gym/scripts.pory"
# 834 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 835 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 836 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 837 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 838 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 839 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 840 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 841 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
