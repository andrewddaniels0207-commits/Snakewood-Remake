# 1 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_MapScripts::
# 3 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 8 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 4 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
# 5 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 9 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 6 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
# 7 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 10 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 8 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
# 9 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 2 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 10 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.byte 0
# 12 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 13 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 3 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 15 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
# 16 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 4 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 17 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
# 18 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 5 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 19 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
# 20 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 6 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 21 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
# 22 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.2byte 0
# 23 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 24 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 25 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnTransition::
# 26 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 14 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 27 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
# 28 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 29 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 30 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 31 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnResume::
# 32 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 19 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 33 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
# 34 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 35 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 36 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 37 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnLoad::
# 38 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 24 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 39 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 40 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 25 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 41 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
# 42 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 43 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 44 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 45 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
# 46 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 30 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 47 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 8
# 48 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_2
# 49 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_1:
# 50 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 33 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 51 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 28
# 52 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_5
# 53 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_4:
# 54 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 36 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 55 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 67
# 56 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_8
# 57 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_7:
# 58 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 39 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 59 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
# 60 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 40 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 61 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
# 62 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 63 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 64 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_2:
# 65 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 31 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 66 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_StopCheckingStairs
# 67 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_1
# 68 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 69 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_5:
# 70 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 34 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 71 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
# 72 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_4
# 73 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 74 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_8:
# 75 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 37 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 76 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
# 77 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_7
# 78 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 79 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 80 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
# 81 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 44 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 82 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
# 83 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 45 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 84 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
# 85 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 86 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 87 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 88 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
# 89 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 49 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 90 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
# 91 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 50 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 92 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
# 93 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 94 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 95 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 96 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
# 97 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 98 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 99 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 100 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
# 101 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 58 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 102 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 103 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 59 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 104 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 105 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 60 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 106 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 107 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 61 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 108 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 109 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 62 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 110 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 111 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 112 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 113 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 114 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
# 115 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 67 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 116 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 117 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 68 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 118 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 119 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 69 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 120 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 121 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 70 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 122 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 123 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 71 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 124 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 125 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 126 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 127 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 128 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
# 129 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 76 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 130 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 131 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 77 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 132 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 133 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 78 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 134 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 135 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 79 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 136 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 137 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 80 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 138 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 139 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 140 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 141 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 142 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_FallThroughIce::
# 143 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 85 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 144 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 145 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 86 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 146 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 20
# 147 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 87 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 148 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 149 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 88 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 150 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 151 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 89 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 152 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_FALL
# 153 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 90 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 154 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 60
# 155 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 91 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 156 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
# 157 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 92 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 158 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitstate
# 159 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 160 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 161 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 162 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 96 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 163 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Movement_FallThroughIce:
# 164 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 97 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 165 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	set_invisible
# 166 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 98 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 167 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	step_end
# 168 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 169 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan::
# 170 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 102 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 171 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 172 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 103 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 173 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 174 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 104 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 175 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 176 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_2
# 177 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan_1:
# 178 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 107 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 179 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_WATER_PULSE, SootopolisCity_Gym_1F_EventScript_Juan_5
# 180 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan_4:
# 181 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 110 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 182 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_Juan_8
# 183 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan_7:
# 184 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 113 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 185 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 186 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 114 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 187 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 188 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 189 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 190 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan_2:
# 191 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 105 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 192 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematch
# 193 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_Juan_1
# 194 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 195 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan_5:
# 196 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 108 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 197 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
# 198 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_Juan_4
# 199 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 200 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan_8:
# 201 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 111 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 202 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
# 203 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_Juan_7
# 204 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 205 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 206 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanDefeated::
# 207 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 119 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 208 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 209 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 120 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 210 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 211 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 121 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 212 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 213 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 122 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 214 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 215 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 123 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 216 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 217 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 124 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 218 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 219 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 125 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 220 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 221 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 126 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 222 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 223 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 127 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 224 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 225 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 128 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 226 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 227 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 129 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 228 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 229 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 130 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 230 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 231 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 131 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 232 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 233 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 132 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 234 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
# 235 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 133 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 236 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 237 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 134 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 238 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 239 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 135 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 240 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 241 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 136 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 242 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 243 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 137 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 244 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 245 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 138 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 246 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 247 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 139 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 248 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 249 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 140 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 250 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 251 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 141 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 252 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 253 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 254 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 255 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 256 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
# 257 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 146 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 258 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 259 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 147 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 260 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 261 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq SootopolisCity_Gym_1F_EventScript_GiveWaterPulse_2
# 262 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse_1:
# 263 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 150 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 264 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 265 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 151 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 266 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 267 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 268 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 269 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse_2:
# 270 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 148 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 271 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto Common_EventScript_BagIsFull
# 272 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GiveWaterPulse_1
# 273 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 274 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 275 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
# 276 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 156 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 277 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 278 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 157 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 279 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 280 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2_2
# 281 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2_1:
# 282 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 160 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 283 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 284 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 161 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 285 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 286 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 162 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 287 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 288 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 289 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 290 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2_2:
# 291 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 158 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 292 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 293 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2_1
# 294 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 295 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 296 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
# 297 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 167 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 298 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 299 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 168 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 300 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 301 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 302 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 303 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 304 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanRematch::
# 305 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 173 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 306 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
# 307 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 174 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 308 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
# 309 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 310 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 311 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 312 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide::
# 313 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 179 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 314 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 315 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 180 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 316 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 317 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 181 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 318 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuide_2
# 319 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide_1:
# 320 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 184 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 321 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 322 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 185 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 323 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 324 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 325 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 326 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide_2:
# 327 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 182 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 328 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
# 329 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymGuide_1
# 330 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 331 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 332 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
# 333 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 190 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 334 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 335 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 191 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 336 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 337 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 338 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 339 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 340 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
# 341 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 196 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 342 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 343 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 197 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 344 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_LeftGymStatue_2
# 345 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue_1:
# 346 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 200 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 347 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 348 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 349 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 350 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue_2:
# 351 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 198 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 352 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 353 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_LeftGymStatue_1
# 354 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 355 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 356 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue::
# 357 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 205 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 358 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 359 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 206 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 360 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_RightGymStatue_2
# 361 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue_1:
# 362 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 209 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 363 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 364 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 365 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 366 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue_2:
# 367 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 207 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 368 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 369 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_RightGymStatue_1
# 370 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 371 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 372 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
# 373 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 214 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 374 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 375 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 215 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 376 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 377 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 378 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 379 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 380 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatue::
# 381 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 220 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 382 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 383 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 221 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 384 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 385 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 386 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 387 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 388 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuideAdvice::
# 389 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 225 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 390 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yo! How's it going, CHAMPION-\n"
# 391 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 392 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS's GYM LEADER JUAN is\n"
# 393 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "a master of WATER-type POKéMON.\p"
# 394 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And, to get to JUAN, an icy floor\n"
# 395 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "will hamper your progress…\p"
# 396 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Listen, I'm sorry, but that's all the\n"
# 397 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "advice that I have for you.\p"
# 398 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The rest of the way, you have to\n"
# 399 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "go for it yourself!$"
# 400 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 401 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuidePostVictory::
# 402 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 238 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 403 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yow! You've beaten even JUAN, who\n"
# 404 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "was supposedly the best in all HOENN!\p"
# 405 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Okay! Check out your TRAINER CARD.\p"
# 406 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you've gotten all the BADGES, you're\n"
# 407 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "set for the POKéMON LEAGUE challenge!$"
# 408 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 409 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanIntro::
# 410 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 246 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 411 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Let me ask you.\n"
# 412 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Did you know?\l"
# 413 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, I should not be so coy.\p"
# 414 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "It was I who taught WALLACE everything\n"
# 415 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "there is to know about POKéMON.\p"
# 416 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Once, I had given up my position as\n"
# 417 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "the GYM LEADER.\p"
# 418 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "In my place, I had entrusted WALLACE\n"
# 419 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "with the GYM.\p"
# 420 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "However, a compelling reason arose for\n"
# 421 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "me to make a comeback.\p"
# 422 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, but enough chatter.\n"
# 423 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Let us begin our match, shall we?\p"
# 424 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Please, you shall bear witness to\n"
# 425 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "our artistry.\p"
# 426 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "A grand illusion of water sculpted\n"
# 427 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "by POKéMON and myself!$"
# 428 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 429 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanDefeat::
# 430 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 266 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 431 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, excellent!\n"
# 432 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Very well, you are the winner.\p"
# 433 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "From you, I sense the brilliant shine\n"
# 434 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of skill that will overcome all.\p"
# 435 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "However, compared with me or even\n"
# 436 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "WALLACE, you are lacking in elegance.\p"
# 437 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Perhaps I should make you a loan\n"
# 438 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of my outfit?\p"
# 439 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …\n"
# 440 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …\p"
# 441 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Hahaha, I merely jest!\p"
# 442 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Rather than my clothes, I shall reward\n"
# 443 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "you with this, the RAIN BADGE!$"
# 444 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 445 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ReceivedRainBadge::
# 446 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 282 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 447 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER} received the RAIN BADGE\n"
# 448 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "from JUAN.$"
# 449 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 450 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis::
# 451 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 287 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 452 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Having the RAIN BADGE shall assure you\n"
# 453 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "the full obedience of all your POKéMON\l"
# 454 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to your every command.\p"
# 455 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The RAIN BADGE also allows the use\n"
# 456 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of the HM move WATERFALL to scale\l"
# 457 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "walls of cascading water.\p"
# 458 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And, so that you never forget the\n"
# 459 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "battle we shared, take this…$"
# 460 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 461 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainWaterPulse::
# 462 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 298 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 463 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The TECHNICAL MACHINE I handed you\n"
# 464 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "contains WATER PULSE.\p"
# 465 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "In use, it will occasionally confuse\n"
# 466 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "the target with ultrasonic waves.\p"
# 467 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …$"
# 468 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 469 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_RegisteredJuan::
# 470 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 306 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 471 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER JUAN\n"
# 472 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 473 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 474 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostBattle::
# 475 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 311 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 476 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The TRAINERS who have gathered all\n"
# 477 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "the GYM BADGES of HOENN should make\l"
# 478 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "way to the ultimate destination.\p"
# 479 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The POKéMON LEAGUE.\p"
# 480 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Travel to the easternmost reaches\n"
# 481 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of HOENN, to the island EVER GRANDE.\p"
# 482 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "There, you shall find the POKéMON\n"
# 483 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "LEAGUE.$"
# 484 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 485 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GoGetFortreeBadge::
# 486 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 322 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 487 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "There remains but one BADGE to\n"
# 488 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "obtain in HOENN.\p"
# 489 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you wish to challenge the POKéMON\n"
# 490 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "LEAGUE, you must obtain the last\l"
# 491 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "BADGE from the GYM in FORTREE.$"
# 492 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 493 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatue::
# 494 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 330 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 495 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM$"
# 496 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 497 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatueCertified::
# 498 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 334 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 499 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\p"
# 500 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN'S CERTIFIED TRAINERS:\n"
# 501 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 502 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 503 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPreRematch::
# 504 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 340 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 505 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
# 506 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 507 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 508 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 509 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\p"
# 510 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you\n"
# 511 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "as often as you wish!$"
# 512 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 513 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchDefeat::
# 514 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 350 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 515 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, you are the winner!\n"
# 516 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have defeated me again!$"
# 517 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 518 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostRematch::
# 519 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 355 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 520 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: If I told you to become my\n"
# 521 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "apprentice, you will refuse, I am sure.\p"
# 522 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I would like to make a gift of my coat\n"
# 523 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to you.\p"
# 524 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But again, you will refuse.\n"
# 525 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I imagine that to be so.\p"
# 526 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And that, my friend, is a certain sign\n"
# 527 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of nobility!$"
# 528 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 529 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons::
# 530 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 366 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
# 531 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
# 532 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 533 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 534 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 535 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\n"
# 536 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you…\p"
# 537 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, no, no, no.\n"
# 538 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have with you but one POKéMON.\p"
# 539 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I wish that you would return with\n"
# 540 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "two, perhaps more, POKéMON, please.$"
