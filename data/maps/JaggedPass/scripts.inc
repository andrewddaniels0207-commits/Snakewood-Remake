# 1 "data/maps/JaggedPass/scripts.pory"

# 2 "data/maps/JaggedPass/scripts.pory"
JaggedPass_MapScripts::
# 3 "data/maps/JaggedPass/scripts.pory"
# 2 "data/maps/JaggedPass/scripts.pory"
# 4 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
# 5 "data/maps/JaggedPass/scripts.pory"
# 3 "data/maps/JaggedPass/scripts.pory"
# 6 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
# 7 "data/maps/JaggedPass/scripts.pory"
# 4 "data/maps/JaggedPass/scripts.pory"
# 8 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
# 9 "data/maps/JaggedPass/scripts.pory"
	.byte 0
# 10 "data/maps/JaggedPass/scripts.pory"

# 11 "data/maps/JaggedPass/scripts.pory"

# 12 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume::
# 13 "data/maps/JaggedPass/scripts.pory"
# 8 "data/maps/JaggedPass/scripts.pory"
# 14 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 15 "data/maps/JaggedPass/scripts.pory"
# 9 "data/maps/JaggedPass/scripts.pory"
# 16 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_STATE, 0
# 17 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq JaggedPass_OnResume_2
# 18 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume_1:
# 19 "data/maps/JaggedPass/scripts.pory"
	end
# 20 "data/maps/JaggedPass/scripts.pory"

# 21 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume_2:
# 22 "data/maps/JaggedPass/scripts.pory"
# 10 "data/maps/JaggedPass/scripts.pory"
# 23 "data/maps/JaggedPass/scripts.pory"
	call JaggedPass_EventScript_CheckHasMagmaEmblem
# 24 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_OnResume_1
# 25 "data/maps/JaggedPass/scripts.pory"

# 26 "data/maps/JaggedPass/scripts.pory"

# 27 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem::
# 28 "data/maps/JaggedPass/scripts.pory"
# 16 "data/maps/JaggedPass/scripts.pory"
# 29 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM
# 30 "data/maps/JaggedPass/scripts.pory"
# 17 "data/maps/JaggedPass/scripts.pory"
# 31 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
# 32 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq JaggedPass_EventScript_CheckHasMagmaEmblem_2
# 33 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem_1:
# 34 "data/maps/JaggedPass/scripts.pory"
	return
# 35 "data/maps/JaggedPass/scripts.pory"

# 36 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem_2:
# 37 "data/maps/JaggedPass/scripts.pory"
# 18 "data/maps/JaggedPass/scripts.pory"
# 38 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_SetReadyToOpenHideout
# 39 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_CheckHasMagmaEmblem_1
# 40 "data/maps/JaggedPass/scripts.pory"

# 41 "data/maps/JaggedPass/scripts.pory"

# 42 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetReadyToOpenHideout::
# 43 "data/maps/JaggedPass/scripts.pory"
# 24 "data/maps/JaggedPass/scripts.pory"
# 44 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 1
# 45 "data/maps/JaggedPass/scripts.pory"
	return
# 46 "data/maps/JaggedPass/scripts.pory"

# 47 "data/maps/JaggedPass/scripts.pory"

# 48 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition::
# 49 "data/maps/JaggedPass/scripts.pory"
# 29 "data/maps/JaggedPass/scripts.pory"
# 50 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_ASH_WEATHER, 1
# 51 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq JaggedPass_OnTransition_2
# 52 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition_1:
# 53 "data/maps/JaggedPass/scripts.pory"
	end
# 54 "data/maps/JaggedPass/scripts.pory"

# 55 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition_2:
# 56 "data/maps/JaggedPass/scripts.pory"
# 30 "data/maps/JaggedPass/scripts.pory"
# 57 "data/maps/JaggedPass/scripts.pory"
	call JaggedPass_EventScript_SetWeatherAsh
# 58 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_OnTransition_1
# 59 "data/maps/JaggedPass/scripts.pory"

# 60 "data/maps/JaggedPass/scripts.pory"

# 61 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherAsh::
# 62 "data/maps/JaggedPass/scripts.pory"
# 36 "data/maps/JaggedPass/scripts.pory"
# 63 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 64 "data/maps/JaggedPass/scripts.pory"
# 37 "data/maps/JaggedPass/scripts.pory"
# 65 "data/maps/JaggedPass/scripts.pory"
	doweather
# 66 "data/maps/JaggedPass/scripts.pory"
	return
# 67 "data/maps/JaggedPass/scripts.pory"

# 68 "data/maps/JaggedPass/scripts.pory"

# 69 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad::
# 70 "data/maps/JaggedPass/scripts.pory"
# 42 "data/maps/JaggedPass/scripts.pory"
# 71 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_STATE, 1
# 72 "data/maps/JaggedPass/scripts.pory"
	goto_if_le JaggedPass_OnLoad_2
# 73 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad_1:
# 74 "data/maps/JaggedPass/scripts.pory"
	end
# 75 "data/maps/JaggedPass/scripts.pory"

# 76 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad_2:
# 77 "data/maps/JaggedPass/scripts.pory"
# 43 "data/maps/JaggedPass/scripts.pory"
# 78 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_ConcealHideoutEntrance
# 79 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_OnLoad_1
# 80 "data/maps/JaggedPass/scripts.pory"

# 81 "data/maps/JaggedPass/scripts.pory"

# 82 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ConcealHideoutEntrance::
# 83 "data/maps/JaggedPass/scripts.pory"
# 49 "data/maps/JaggedPass/scripts.pory"
# 84 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
# 85 "data/maps/JaggedPass/scripts.pory"
# 50 "data/maps/JaggedPass/scripts.pory"
# 86 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
# 87 "data/maps/JaggedPass/scripts.pory"
	end
# 88 "data/maps/JaggedPass/scripts.pory"

# 89 "data/maps/JaggedPass/scripts.pory"

# 90 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout::
# 91 "data/maps/JaggedPass/scripts.pory"
# 55 "data/maps/JaggedPass/scripts.pory"
# 92 "data/maps/JaggedPass/scripts.pory"
	lockall
# 93 "data/maps/JaggedPass/scripts.pory"
# 56 "data/maps/JaggedPass/scripts.pory"
# 94 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1
# 95 "data/maps/JaggedPass/scripts.pory"
# 57 "data/maps/JaggedPass/scripts.pory"
# 96 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1
# 97 "data/maps/JaggedPass/scripts.pory"
# 58 "data/maps/JaggedPass/scripts.pory"
# 98 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8
# 99 "data/maps/JaggedPass/scripts.pory"
# 59 "data/maps/JaggedPass/scripts.pory"
# 100 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5
# 101 "data/maps/JaggedPass/scripts.pory"
# 60 "data/maps/JaggedPass/scripts.pory"
# 102 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 103 "data/maps/JaggedPass/scripts.pory"
# 61 "data/maps/JaggedPass/scripts.pory"
# 104 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 105 "data/maps/JaggedPass/scripts.pory"
# 62 "data/maps/JaggedPass/scripts.pory"
# 106 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 107 "data/maps/JaggedPass/scripts.pory"
# 63 "data/maps/JaggedPass/scripts.pory"
# 108 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 109 "data/maps/JaggedPass/scripts.pory"
# 64 "data/maps/JaggedPass/scripts.pory"
# 110 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1
# 111 "data/maps/JaggedPass/scripts.pory"
# 65 "data/maps/JaggedPass/scripts.pory"
# 112 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1
# 113 "data/maps/JaggedPass/scripts.pory"
# 66 "data/maps/JaggedPass/scripts.pory"
# 114 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16
# 115 "data/maps/JaggedPass/scripts.pory"
# 67 "data/maps/JaggedPass/scripts.pory"
# 116 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3
# 117 "data/maps/JaggedPass/scripts.pory"
# 68 "data/maps/JaggedPass/scripts.pory"
# 118 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 119 "data/maps/JaggedPass/scripts.pory"
# 69 "data/maps/JaggedPass/scripts.pory"
# 120 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 121 "data/maps/JaggedPass/scripts.pory"
# 70 "data/maps/JaggedPass/scripts.pory"
# 122 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 123 "data/maps/JaggedPass/scripts.pory"
# 71 "data/maps/JaggedPass/scripts.pory"
# 124 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 125 "data/maps/JaggedPass/scripts.pory"
# 72 "data/maps/JaggedPass/scripts.pory"
# 126 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 127 "data/maps/JaggedPass/scripts.pory"
# 73 "data/maps/JaggedPass/scripts.pory"
# 128 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 129 "data/maps/JaggedPass/scripts.pory"
# 74 "data/maps/JaggedPass/scripts.pory"
# 130 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 131 "data/maps/JaggedPass/scripts.pory"
# 75 "data/maps/JaggedPass/scripts.pory"
# 132 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 2
# 133 "data/maps/JaggedPass/scripts.pory"
# 76 "data/maps/JaggedPass/scripts.pory"
# 134 "data/maps/JaggedPass/scripts.pory"
	waitse
# 135 "data/maps/JaggedPass/scripts.pory"
# 77 "data/maps/JaggedPass/scripts.pory"
# 136 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 137 "data/maps/JaggedPass/scripts.pory"
	end
# 138 "data/maps/JaggedPass/scripts.pory"

# 139 "data/maps/JaggedPass/scripts.pory"

# 140 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard::
# 141 "data/maps/JaggedPass/scripts.pory"
# 82 "data/maps/JaggedPass/scripts.pory"
# 142 "data/maps/JaggedPass/scripts.pory"
	lockall
# 143 "data/maps/JaggedPass/scripts.pory"
# 83 "data/maps/JaggedPass/scripts.pory"
# 144 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_MagmaHideoutGuard_2
# 145 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard_1:
# 146 "data/maps/JaggedPass/scripts.pory"
# 86 "data/maps/JaggedPass/scripts.pory"
# 147 "data/maps/JaggedPass/scripts.pory"
	waitse
# 148 "data/maps/JaggedPass/scripts.pory"
# 87 "data/maps/JaggedPass/scripts.pory"
# 149 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 150 "data/maps/JaggedPass/scripts.pory"
# 88 "data/maps/JaggedPass/scripts.pory"
# 151 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 152 "data/maps/JaggedPass/scripts.pory"
# 89 "data/maps/JaggedPass/scripts.pory"
# 153 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 154 "data/maps/JaggedPass/scripts.pory"
# 90 "data/maps/JaggedPass/scripts.pory"
# 155 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_Delay48
# 156 "data/maps/JaggedPass/scripts.pory"
# 91 "data/maps/JaggedPass/scripts.pory"
# 157 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 158 "data/maps/JaggedPass/scripts.pory"
# 92 "data/maps/JaggedPass/scripts.pory"
# 159 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 160 "data/maps/JaggedPass/scripts.pory"
# 93 "data/maps/JaggedPass/scripts.pory"
# 161 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 162 "data/maps/JaggedPass/scripts.pory"
# 94 "data/maps/JaggedPass/scripts.pory"
# 163 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 164 "data/maps/JaggedPass/scripts.pory"
# 95 "data/maps/JaggedPass/scripts.pory"
# 165 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 166 "data/maps/JaggedPass/scripts.pory"
# 96 "data/maps/JaggedPass/scripts.pory"
# 167 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
# 168 "data/maps/JaggedPass/scripts.pory"
# 97 "data/maps/JaggedPass/scripts.pory"
# 169 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 170 "data/maps/JaggedPass/scripts.pory"
# 98 "data/maps/JaggedPass/scripts.pory"
# 171 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 172 "data/maps/JaggedPass/scripts.pory"
# 99 "data/maps/JaggedPass/scripts.pory"
# 173 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 174 "data/maps/JaggedPass/scripts.pory"
# 100 "data/maps/JaggedPass/scripts.pory"
# 175 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 176 "data/maps/JaggedPass/scripts.pory"
	end
# 177 "data/maps/JaggedPass/scripts.pory"

# 178 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard_2:
# 179 "data/maps/JaggedPass/scripts.pory"
# 84 "data/maps/JaggedPass/scripts.pory"
# 180 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_GuardDefeated
# 181 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_MagmaHideoutGuard_1
# 182 "data/maps/JaggedPass/scripts.pory"

# 183 "data/maps/JaggedPass/scripts.pory"

# 184 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated::
# 185 "data/maps/JaggedPass/scripts.pory"
# 105 "data/maps/JaggedPass/scripts.pory"
# 186 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 187 "data/maps/JaggedPass/scripts.pory"
# 106 "data/maps/JaggedPass/scripts.pory"
# 188 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 189 "data/maps/JaggedPass/scripts.pory"
# 107 "data/maps/JaggedPass/scripts.pory"
# 190 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 191 "data/maps/JaggedPass/scripts.pory"
# 108 "data/maps/JaggedPass/scripts.pory"
# 192 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 193 "data/maps/JaggedPass/scripts.pory"
# 109 "data/maps/JaggedPass/scripts.pory"
# 194 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 195 "data/maps/JaggedPass/scripts.pory"
# 110 "data/maps/JaggedPass/scripts.pory"
# 196 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 197 "data/maps/JaggedPass/scripts.pory"
# 111 "data/maps/JaggedPass/scripts.pory"
# 198 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 199 "data/maps/JaggedPass/scripts.pory"
	end
# 200 "data/maps/JaggedPass/scripts.pory"

# 201 "data/maps/JaggedPass/scripts.pory"

# 202 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric::
# 203 "data/maps/JaggedPass/scripts.pory"
# 116 "data/maps/JaggedPass/scripts.pory"
# 204 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
# 205 "data/maps/JaggedPass/scripts.pory"
# 117 "data/maps/JaggedPass/scripts.pory"
# 206 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/JaggedPass/scripts.pory"
	end
# 208 "data/maps/JaggedPass/scripts.pory"

# 209 "data/maps/JaggedPass/scripts.pory"

# 210 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana::
# 211 "data/maps/JaggedPass/scripts.pory"
# 122 "data/maps/JaggedPass/scripts.pory"
# 212 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
# 213 "data/maps/JaggedPass/scripts.pory"
# 123 "data/maps/JaggedPass/scripts.pory"
# 214 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 215 "data/maps/JaggedPass/scripts.pory"
# 124 "data/maps/JaggedPass/scripts.pory"
# 216 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
# 217 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq JaggedPass_EventScript_Diana_2
# 218 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana_1:
# 219 "data/maps/JaggedPass/scripts.pory"
# 127 "data/maps/JaggedPass/scripts.pory"
# 220 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 221 "data/maps/JaggedPass/scripts.pory"
# 128 "data/maps/JaggedPass/scripts.pory"
# 222 "data/maps/JaggedPass/scripts.pory"
	release
# 223 "data/maps/JaggedPass/scripts.pory"
	end
# 224 "data/maps/JaggedPass/scripts.pory"

# 225 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana_2:
# 226 "data/maps/JaggedPass/scripts.pory"
# 125 "data/maps/JaggedPass/scripts.pory"
# 227 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_DianaRematch
# 228 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_Diana_1
# 229 "data/maps/JaggedPass/scripts.pory"

# 230 "data/maps/JaggedPass/scripts.pory"

# 231 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana::
# 232 "data/maps/JaggedPass/scripts.pory"
# 133 "data/maps/JaggedPass/scripts.pory"
# 233 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 234 "data/maps/JaggedPass/scripts.pory"
# 134 "data/maps/JaggedPass/scripts.pory"
# 235 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 236 "data/maps/JaggedPass/scripts.pory"
# 135 "data/maps/JaggedPass/scripts.pory"
# 237 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 238 "data/maps/JaggedPass/scripts.pory"
# 136 "data/maps/JaggedPass/scripts.pory"
# 239 "data/maps/JaggedPass/scripts.pory"
	release
# 240 "data/maps/JaggedPass/scripts.pory"
	end
# 241 "data/maps/JaggedPass/scripts.pory"

# 242 "data/maps/JaggedPass/scripts.pory"

# 243 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch::
# 244 "data/maps/JaggedPass/scripts.pory"
# 141 "data/maps/JaggedPass/scripts.pory"
# 245 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 246 "data/maps/JaggedPass/scripts.pory"
# 142 "data/maps/JaggedPass/scripts.pory"
# 247 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 248 "data/maps/JaggedPass/scripts.pory"
	end
# 249 "data/maps/JaggedPass/scripts.pory"

# 250 "data/maps/JaggedPass/scripts.pory"

# 251 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan::
# 252 "data/maps/JaggedPass/scripts.pory"
# 147 "data/maps/JaggedPass/scripts.pory"
# 253 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 254 "data/maps/JaggedPass/scripts.pory"
# 148 "data/maps/JaggedPass/scripts.pory"
# 255 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 256 "data/maps/JaggedPass/scripts.pory"
# 149 "data/maps/JaggedPass/scripts.pory"
# 257 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
# 258 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq JaggedPass_EventScript_Ethan_2
# 259 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan_1:
# 260 "data/maps/JaggedPass/scripts.pory"
# 152 "data/maps/JaggedPass/scripts.pory"
# 261 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 262 "data/maps/JaggedPass/scripts.pory"
# 153 "data/maps/JaggedPass/scripts.pory"
# 263 "data/maps/JaggedPass/scripts.pory"
	release
# 264 "data/maps/JaggedPass/scripts.pory"
	end
# 265 "data/maps/JaggedPass/scripts.pory"

# 266 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan_2:
# 267 "data/maps/JaggedPass/scripts.pory"
# 150 "data/maps/JaggedPass/scripts.pory"
# 268 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_EthanRematch
# 269 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_Ethan_1
# 270 "data/maps/JaggedPass/scripts.pory"

# 271 "data/maps/JaggedPass/scripts.pory"

# 272 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan::
# 273 "data/maps/JaggedPass/scripts.pory"
# 158 "data/maps/JaggedPass/scripts.pory"
# 274 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 275 "data/maps/JaggedPass/scripts.pory"
# 159 "data/maps/JaggedPass/scripts.pory"
# 276 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 277 "data/maps/JaggedPass/scripts.pory"
# 160 "data/maps/JaggedPass/scripts.pory"
# 278 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 279 "data/maps/JaggedPass/scripts.pory"
# 161 "data/maps/JaggedPass/scripts.pory"
# 280 "data/maps/JaggedPass/scripts.pory"
	release
# 281 "data/maps/JaggedPass/scripts.pory"
	end
# 282 "data/maps/JaggedPass/scripts.pory"

# 283 "data/maps/JaggedPass/scripts.pory"

# 284 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch::
# 285 "data/maps/JaggedPass/scripts.pory"
# 166 "data/maps/JaggedPass/scripts.pory"
# 286 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 287 "data/maps/JaggedPass/scripts.pory"
# 167 "data/maps/JaggedPass/scripts.pory"
# 288 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 289 "data/maps/JaggedPass/scripts.pory"
	end
# 290 "data/maps/JaggedPass/scripts.pory"

# 291 "data/maps/JaggedPass/scripts.pory"

# 292 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Julio::
# 293 "data/maps/JaggedPass/scripts.pory"
# 172 "data/maps/JaggedPass/scripts.pory"
# 294 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
# 295 "data/maps/JaggedPass/scripts.pory"
# 173 "data/maps/JaggedPass/scripts.pory"
# 296 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 297 "data/maps/JaggedPass/scripts.pory"
	end
# 298 "data/maps/JaggedPass/scripts.pory"

# 299 "data/maps/JaggedPass/scripts.pory"

# 300 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn::
# 301 "data/maps/JaggedPass/scripts.pory"
# 178 "data/maps/JaggedPass/scripts.pory"
# 302 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
# 303 "data/maps/JaggedPass/scripts.pory"
# 179 "data/maps/JaggedPass/scripts.pory"
# 304 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 305 "data/maps/JaggedPass/scripts.pory"
	end
# 306 "data/maps/JaggedPass/scripts.pory"

# 307 "data/maps/JaggedPass/scripts.pory"

# 308 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro::
# 309 "data/maps/JaggedPass/scripts.pory"
# 183 "data/maps/JaggedPass/scripts.pory"
# 310 "data/maps/JaggedPass/scripts.pory"
	.string "MT. CHIMNEY's JAGGED PASS…\p"
# 311 "data/maps/JaggedPass/scripts.pory"
	.string "Now this is what I've always wanted\n"
# 312 "data/maps/JaggedPass/scripts.pory"
	.string "in a mountain.\p"
# 313 "data/maps/JaggedPass/scripts.pory"
	.string "This jagged bumpiness…\n"
# 314 "data/maps/JaggedPass/scripts.pory"
	.string "It rocks my soul!$"
# 315 "data/maps/JaggedPass/scripts.pory"

# 316 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat::
# 317 "data/maps/JaggedPass/scripts.pory"
# 191 "data/maps/JaggedPass/scripts.pory"
# 318 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"
# 319 "data/maps/JaggedPass/scripts.pory"

# 320 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle::
# 321 "data/maps/JaggedPass/scripts.pory"
# 195 "data/maps/JaggedPass/scripts.pory"
# 322 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at POKéMON…\p"
# 323 "data/maps/JaggedPass/scripts.pory"
	.string "But, when it comes to the love of\n"
# 324 "data/maps/JaggedPass/scripts.pory"
	.string "the mountains, I have you beat!$"
# 325 "data/maps/JaggedPass/scripts.pory"

# 326 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro::
# 327 "data/maps/JaggedPass/scripts.pory"
# 201 "data/maps/JaggedPass/scripts.pory"
# 328 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
# 329 "data/maps/JaggedPass/scripts.pory"
	.string "It's not suited for a picnic.$"
# 330 "data/maps/JaggedPass/scripts.pory"

# 331 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat::
# 332 "data/maps/JaggedPass/scripts.pory"
# 206 "data/maps/JaggedPass/scripts.pory"
# 333 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
# 334 "data/maps/JaggedPass/scripts.pory"
	.string "The ground is too bumpy…$"
# 335 "data/maps/JaggedPass/scripts.pory"

# 336 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle::
# 337 "data/maps/JaggedPass/scripts.pory"
# 211 "data/maps/JaggedPass/scripts.pory"
# 338 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
# 339 "data/maps/JaggedPass/scripts.pory"
	.string "Some people cleverly ride their\n"
# 340 "data/maps/JaggedPass/scripts.pory"
	.string "bicycles up this horribly bumpy pass.$"
# 341 "data/maps/JaggedPass/scripts.pory"

# 342 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister::
# 343 "data/maps/JaggedPass/scripts.pory"
# 217 "data/maps/JaggedPass/scripts.pory"
# 344 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
# 345 "data/maps/JaggedPass/scripts.pory"
	.string "If you do return, I'd like a rematch.$"
# 346 "data/maps/JaggedPass/scripts.pory"

# 347 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro::
# 348 "data/maps/JaggedPass/scripts.pory"
# 222 "data/maps/JaggedPass/scripts.pory"
# 349 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
# 350 "data/maps/JaggedPass/scripts.pory"
	.string "Just like POKéMON!$"
# 351 "data/maps/JaggedPass/scripts.pory"

# 352 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat::
# 353 "data/maps/JaggedPass/scripts.pory"
# 227 "data/maps/JaggedPass/scripts.pory"
# 354 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
# 355 "data/maps/JaggedPass/scripts.pory"
	.string "too bumpy!$"
# 356 "data/maps/JaggedPass/scripts.pory"

# 357 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch::
# 358 "data/maps/JaggedPass/scripts.pory"
# 232 "data/maps/JaggedPass/scripts.pory"
# 359 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
# 360 "data/maps/JaggedPass/scripts.pory"
	.string "enjoy this bumpy hike.$"
# 361 "data/maps/JaggedPass/scripts.pory"

# 362 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro::
# 363 "data/maps/JaggedPass/scripts.pory"
# 237 "data/maps/JaggedPass/scripts.pory"
# 364 "data/maps/JaggedPass/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\n"
# 365 "data/maps/JaggedPass/scripts.pory"
	.string "It's a good place for training.$"
# 366 "data/maps/JaggedPass/scripts.pory"

# 367 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat::
# 368 "data/maps/JaggedPass/scripts.pory"
# 242 "data/maps/JaggedPass/scripts.pory"
# 369 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
# 370 "data/maps/JaggedPass/scripts.pory"
	.string "trying to find a good footing…$"
# 371 "data/maps/JaggedPass/scripts.pory"

# 372 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle::
# 373 "data/maps/JaggedPass/scripts.pory"
# 247 "data/maps/JaggedPass/scripts.pory"
# 374 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an ACRO BIKE, I'd be able to\n"
# 375 "data/maps/JaggedPass/scripts.pory"
	.string "jump ledges.$"
# 376 "data/maps/JaggedPass/scripts.pory"

# 377 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister::
# 378 "data/maps/JaggedPass/scripts.pory"
# 252 "data/maps/JaggedPass/scripts.pory"
# 379 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
# 380 "data/maps/JaggedPass/scripts.pory"
	.string "I'll be sure to win!\p"
# 381 "data/maps/JaggedPass/scripts.pory"
	.string "Can you register me in your POKéNAV?$"
# 382 "data/maps/JaggedPass/scripts.pory"

# 383 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro::
# 384 "data/maps/JaggedPass/scripts.pory"
# 258 "data/maps/JaggedPass/scripts.pory"
# 385 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
# 386 "data/maps/JaggedPass/scripts.pory"
	.string "I sing while I climb now.$"
# 387 "data/maps/JaggedPass/scripts.pory"

# 388 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat::
# 389 "data/maps/JaggedPass/scripts.pory"
# 263 "data/maps/JaggedPass/scripts.pory"
# 390 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
# 391 "data/maps/JaggedPass/scripts.pory"
	.string "bumpy ground…$"
# 392 "data/maps/JaggedPass/scripts.pory"

# 393 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch::
# 394 "data/maps/JaggedPass/scripts.pory"
# 268 "data/maps/JaggedPass/scripts.pory"
# 395 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\n"
# 396 "data/maps/JaggedPass/scripts.pory"
	.string "in MAUVILLE CITY…$"
# 397 "data/maps/JaggedPass/scripts.pory"

# 398 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro::
# 399 "data/maps/JaggedPass/scripts.pory"
# 273 "data/maps/JaggedPass/scripts.pory"
# 400 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
# 401 "data/maps/JaggedPass/scripts.pory"
	.string "What are you doing here?\p"
# 402 "data/maps/JaggedPass/scripts.pory"
	.string "What am I doing in a place like this?\p"
# 403 "data/maps/JaggedPass/scripts.pory"
	.string "What business is it of yours?$"
# 404 "data/maps/JaggedPass/scripts.pory"

# 405 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat::
# 406 "data/maps/JaggedPass/scripts.pory"
# 280 "data/maps/JaggedPass/scripts.pory"
# 407 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
# 408 "data/maps/JaggedPass/scripts.pory"
	.string "I should've ducked into our HIDEOUT\n"
# 409 "data/maps/JaggedPass/scripts.pory"
	.string "right away…$"
# 410 "data/maps/JaggedPass/scripts.pory"

# 411 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant::
# 412 "data/maps/JaggedPass/scripts.pory"
# 286 "data/maps/JaggedPass/scripts.pory"
# 413 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
# 414 "data/maps/JaggedPass/scripts.pory"
	.string "I admit it--you're strong!\p"
# 415 "data/maps/JaggedPass/scripts.pory"
	.string "Don't worry about me.\n"
# 416 "data/maps/JaggedPass/scripts.pory"
	.string "Go wherever you want!$"
# 417 "data/maps/JaggedPass/scripts.pory"

# 418 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem::
# 419 "data/maps/JaggedPass/scripts.pory"
# 293 "data/maps/JaggedPass/scripts.pory"
# 420 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
# 421 "data/maps/JaggedPass/scripts.pory"
	.string "to the MAGMA EMBLEM!$"
# 422 "data/maps/JaggedPass/scripts.pory"

# 423 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioIntro::
# 424 "data/maps/JaggedPass/scripts.pory"
# 298 "data/maps/JaggedPass/scripts.pory"
# 425 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
# 426 "data/maps/JaggedPass/scripts.pory"
	.string "down the mountain in one go!$"
# 427 "data/maps/JaggedPass/scripts.pory"

# 428 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioDefeat::
# 429 "data/maps/JaggedPass/scripts.pory"
# 303 "data/maps/JaggedPass/scripts.pory"
# 430 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"
# 431 "data/maps/JaggedPass/scripts.pory"

# 432 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioPostBattle::
# 433 "data/maps/JaggedPass/scripts.pory"
# 307 "data/maps/JaggedPass/scripts.pory"
# 434 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
# 435 "data/maps/JaggedPass/scripts.pory"
	.string "my rear end's sore…$"
# 436 "data/maps/JaggedPass/scripts.pory"

# 437 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro::
# 438 "data/maps/JaggedPass/scripts.pory"
# 312 "data/maps/JaggedPass/scripts.pory"
# 439 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
# 440 "data/maps/JaggedPass/scripts.pory"
	.string "I have confidence in my strength!$"
# 441 "data/maps/JaggedPass/scripts.pory"

# 442 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat::
# 443 "data/maps/JaggedPass/scripts.pory"
# 317 "data/maps/JaggedPass/scripts.pory"
# 444 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
# 445 "data/maps/JaggedPass/scripts.pory"
	.string "What went wrong?$"
# 446 "data/maps/JaggedPass/scripts.pory"

# 447 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle::
# 448 "data/maps/JaggedPass/scripts.pory"
# 322 "data/maps/JaggedPass/scripts.pory"
# 449 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
# 450 "data/maps/JaggedPass/scripts.pory"
	.string "a little up the hill from here?$"
