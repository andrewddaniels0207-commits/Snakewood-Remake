# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 3 "data/maps/Route117/scripts.pory"
# 2 "data/maps/Route117/scripts.pory"
# 4 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 5 "data/maps/Route117/scripts.pory"
	.byte 0
# 6 "data/maps/Route117/scripts.pory"

# 7 "data/maps/Route117/scripts.pory"

# 8 "data/maps/Route117/scripts.pory"
Route117_OnTransition::
# 9 "data/maps/Route117/scripts.pory"
# 6 "data/maps/Route117/scripts.pory"
# 10 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 11 "data/maps/Route117/scripts.pory"
# 7 "data/maps/Route117/scripts.pory"
# 12 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 13 "data/maps/Route117/scripts.pory"
# 8 "data/maps/Route117/scripts.pory"
# 14 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 15 "data/maps/Route117/scripts.pory"
# 9 "data/maps/Route117/scripts.pory"
# 16 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 17 "data/maps/Route117/scripts.pory"
# 10 "data/maps/Route117/scripts.pory"
# 18 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/Route117/scripts.pory"
# 11 "data/maps/Route117/scripts.pory"
# 20 "data/maps/Route117/scripts.pory"
	case 2, Route117_OnTransition_3
# 21 "data/maps/Route117/scripts.pory"
# 13 "data/maps/Route117/scripts.pory"
# 22 "data/maps/Route117/scripts.pory"
	case 1, Route117_OnTransition_4
# 23 "data/maps/Route117/scripts.pory"
Route117_OnTransition_1:
# 24 "data/maps/Route117/scripts.pory"
	end
# 25 "data/maps/Route117/scripts.pory"

# 26 "data/maps/Route117/scripts.pory"
Route117_OnTransition_3:
# 27 "data/maps/Route117/scripts.pory"
# 12 "data/maps/Route117/scripts.pory"
# 28 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_ShowDaycareMon1
# 29 "data/maps/Route117/scripts.pory"
	goto Route117_OnTransition_1
# 30 "data/maps/Route117/scripts.pory"

# 31 "data/maps/Route117/scripts.pory"
Route117_OnTransition_4:
# 32 "data/maps/Route117/scripts.pory"
# 14 "data/maps/Route117/scripts.pory"
# 33 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_ShowDaycareMon0
# 34 "data/maps/Route117/scripts.pory"
	goto Route117_OnTransition_1
# 35 "data/maps/Route117/scripts.pory"

# 36 "data/maps/Route117/scripts.pory"

# 37 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1::
# 38 "data/maps/Route117/scripts.pory"
# 20 "data/maps/Route117/scripts.pory"
# 39 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 40 "data/maps/Route117/scripts.pory"
# 21 "data/maps/Route117/scripts.pory"
# 41 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, PARENTS_INCOMPATIBLE
# 42 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_ShowDaycareMon1_2
# 43 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1_1:
# 44 "data/maps/Route117/scripts.pory"
# 24 "data/maps/Route117/scripts.pory"
# 45 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, PARENTS_MED_COMPATIBILITY
# 46 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_ShowDaycareMon1_5
# 47 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1_4:
# 48 "data/maps/Route117/scripts.pory"
# 27 "data/maps/Route117/scripts.pory"
# 49 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, PARENTS_MAX_COMPATIBILITY
# 50 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_ShowDaycareMon1_8
# 51 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1_7:
# 52 "data/maps/Route117/scripts.pory"
# 30 "data/maps/Route117/scripts.pory"
# 53 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 54 "data/maps/Route117/scripts.pory"
	return
# 55 "data/maps/Route117/scripts.pory"

# 56 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1_2:
# 57 "data/maps/Route117/scripts.pory"
# 22 "data/maps/Route117/scripts.pory"
# 58 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_DaycareMonIncompatible
# 59 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_ShowDaycareMon1_1
# 60 "data/maps/Route117/scripts.pory"

# 61 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1_5:
# 62 "data/maps/Route117/scripts.pory"
# 25 "data/maps/Route117/scripts.pory"
# 63 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_DaycareMonMedCompatibility
# 64 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_ShowDaycareMon1_4
# 65 "data/maps/Route117/scripts.pory"

# 66 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1_8:
# 67 "data/maps/Route117/scripts.pory"
# 28 "data/maps/Route117/scripts.pory"
# 68 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_DaycareMonMaxCompatibility
# 69 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_ShowDaycareMon1_7
# 70 "data/maps/Route117/scripts.pory"

# 71 "data/maps/Route117/scripts.pory"

# 72 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0::
# 73 "data/maps/Route117/scripts.pory"
# 34 "data/maps/Route117/scripts.pory"
# 74 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 75 "data/maps/Route117/scripts.pory"
	end
# 76 "data/maps/Route117/scripts.pory"

# 77 "data/maps/Route117/scripts.pory"

# 78 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible::
# 79 "data/maps/Route117/scripts.pory"
# 39 "data/maps/Route117/scripts.pory"
# 80 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 81 "data/maps/Route117/scripts.pory"
# 40 "data/maps/Route117/scripts.pory"
# 82 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 83 "data/maps/Route117/scripts.pory"
	return
# 84 "data/maps/Route117/scripts.pory"

# 85 "data/maps/Route117/scripts.pory"

# 86 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility::
# 87 "data/maps/Route117/scripts.pory"
# 45 "data/maps/Route117/scripts.pory"
# 88 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 89 "data/maps/Route117/scripts.pory"
# 46 "data/maps/Route117/scripts.pory"
# 90 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 91 "data/maps/Route117/scripts.pory"
	return
# 92 "data/maps/Route117/scripts.pory"

# 93 "data/maps/Route117/scripts.pory"

# 94 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility::
# 95 "data/maps/Route117/scripts.pory"
# 51 "data/maps/Route117/scripts.pory"
# 96 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 97 "data/maps/Route117/scripts.pory"
# 52 "data/maps/Route117/scripts.pory"
# 98 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 99 "data/maps/Route117/scripts.pory"
	return
# 100 "data/maps/Route117/scripts.pory"

# 101 "data/maps/Route117/scripts.pory"

# 102 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 103 "data/maps/Route117/scripts.pory"
# 57 "data/maps/Route117/scripts.pory"
# 104 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_TryMoveDayCareMan_2
# 105 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan_1:
# 106 "data/maps/Route117/scripts.pory"
# 60 "data/maps/Route117/scripts.pory"
# 107 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 108 "data/maps/Route117/scripts.pory"
	return
# 109 "data/maps/Route117/scripts.pory"

# 110 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan_2:
# 111 "data/maps/Route117/scripts.pory"
# 58 "data/maps/Route117/scripts.pory"
# 112 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_StopMoveDayCareMan
# 113 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_TryMoveDayCareMan_1
# 114 "data/maps/Route117/scripts.pory"

# 115 "data/maps/Route117/scripts.pory"

# 116 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 117 "data/maps/Route117/scripts.pory"
	return
# 118 "data/maps/Route117/scripts.pory"

# 119 "data/maps/Route117/scripts.pory"

# 120 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 121 "data/maps/Route117/scripts.pory"
# 68 "data/maps/Route117/scripts.pory"
# 122 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 123 "data/maps/Route117/scripts.pory"
	end
# 124 "data/maps/Route117/scripts.pory"

# 125 "data/maps/Route117/scripts.pory"

# 126 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 127 "data/maps/Route117/scripts.pory"
# 73 "data/maps/Route117/scripts.pory"
# 128 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 129 "data/maps/Route117/scripts.pory"
	end
# 130 "data/maps/Route117/scripts.pory"

# 131 "data/maps/Route117/scripts.pory"

# 132 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 133 "data/maps/Route117/scripts.pory"
# 78 "data/maps/Route117/scripts.pory"
# 134 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 135 "data/maps/Route117/scripts.pory"
	end
# 136 "data/maps/Route117/scripts.pory"

# 137 "data/maps/Route117/scripts.pory"

# 138 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 139 "data/maps/Route117/scripts.pory"
# 83 "data/maps/Route117/scripts.pory"
# 140 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 141 "data/maps/Route117/scripts.pory"
	end
# 142 "data/maps/Route117/scripts.pory"

# 143 "data/maps/Route117/scripts.pory"

# 144 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 145 "data/maps/Route117/scripts.pory"
# 88 "data/maps/Route117/scripts.pory"
# 146 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 147 "data/maps/Route117/scripts.pory"
	end
# 148 "data/maps/Route117/scripts.pory"

# 149 "data/maps/Route117/scripts.pory"

# 150 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 151 "data/maps/Route117/scripts.pory"
# 93 "data/maps/Route117/scripts.pory"
# 152 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 153 "data/maps/Route117/scripts.pory"
	end
# 154 "data/maps/Route117/scripts.pory"

# 155 "data/maps/Route117/scripts.pory"

# 156 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 157 "data/maps/Route117/scripts.pory"
# 98 "data/maps/Route117/scripts.pory"
# 158 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 159 "data/maps/Route117/scripts.pory"
# 99 "data/maps/Route117/scripts.pory"
# 160 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 161 "data/maps/Route117/scripts.pory"
# 100 "data/maps/Route117/scripts.pory"
# 162 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 163 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_Isaac_2
# 164 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac_1:
# 165 "data/maps/Route117/scripts.pory"
# 103 "data/maps/Route117/scripts.pory"
# 166 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 167 "data/maps/Route117/scripts.pory"
# 104 "data/maps/Route117/scripts.pory"
# 168 "data/maps/Route117/scripts.pory"
	release
# 169 "data/maps/Route117/scripts.pory"
	end
# 170 "data/maps/Route117/scripts.pory"

# 171 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac_2:
# 172 "data/maps/Route117/scripts.pory"
# 101 "data/maps/Route117/scripts.pory"
# 173 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchIsaac
# 174 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_Isaac_1
# 175 "data/maps/Route117/scripts.pory"

# 176 "data/maps/Route117/scripts.pory"

# 177 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 178 "data/maps/Route117/scripts.pory"
# 109 "data/maps/Route117/scripts.pory"
# 179 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 180 "data/maps/Route117/scripts.pory"
# 110 "data/maps/Route117/scripts.pory"
# 181 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 182 "data/maps/Route117/scripts.pory"
# 111 "data/maps/Route117/scripts.pory"
# 183 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 184 "data/maps/Route117/scripts.pory"
# 112 "data/maps/Route117/scripts.pory"
# 185 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 186 "data/maps/Route117/scripts.pory"
# 113 "data/maps/Route117/scripts.pory"
# 187 "data/maps/Route117/scripts.pory"
	release
# 188 "data/maps/Route117/scripts.pory"
	end
# 189 "data/maps/Route117/scripts.pory"

# 190 "data/maps/Route117/scripts.pory"

# 191 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 192 "data/maps/Route117/scripts.pory"
# 118 "data/maps/Route117/scripts.pory"
# 193 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 194 "data/maps/Route117/scripts.pory"
# 119 "data/maps/Route117/scripts.pory"
# 195 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 196 "data/maps/Route117/scripts.pory"
	end
# 197 "data/maps/Route117/scripts.pory"

# 198 "data/maps/Route117/scripts.pory"

# 199 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 200 "data/maps/Route117/scripts.pory"
# 124 "data/maps/Route117/scripts.pory"
# 201 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 202 "data/maps/Route117/scripts.pory"
# 125 "data/maps/Route117/scripts.pory"
# 203 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 204 "data/maps/Route117/scripts.pory"
# 126 "data/maps/Route117/scripts.pory"
# 205 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 206 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_Lydia_2
# 207 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia_1:
# 208 "data/maps/Route117/scripts.pory"
# 129 "data/maps/Route117/scripts.pory"
# 209 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 210 "data/maps/Route117/scripts.pory"
# 130 "data/maps/Route117/scripts.pory"
# 211 "data/maps/Route117/scripts.pory"
	release
# 212 "data/maps/Route117/scripts.pory"
	end
# 213 "data/maps/Route117/scripts.pory"

# 214 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia_2:
# 215 "data/maps/Route117/scripts.pory"
# 127 "data/maps/Route117/scripts.pory"
# 216 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchLydia
# 217 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_Lydia_1
# 218 "data/maps/Route117/scripts.pory"

# 219 "data/maps/Route117/scripts.pory"

# 220 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 221 "data/maps/Route117/scripts.pory"
# 135 "data/maps/Route117/scripts.pory"
# 222 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 223 "data/maps/Route117/scripts.pory"
# 136 "data/maps/Route117/scripts.pory"
# 224 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route117/scripts.pory"
# 137 "data/maps/Route117/scripts.pory"
# 226 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 227 "data/maps/Route117/scripts.pory"
# 138 "data/maps/Route117/scripts.pory"
# 228 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 229 "data/maps/Route117/scripts.pory"
# 139 "data/maps/Route117/scripts.pory"
# 230 "data/maps/Route117/scripts.pory"
	release
# 231 "data/maps/Route117/scripts.pory"
	end
# 232 "data/maps/Route117/scripts.pory"

# 233 "data/maps/Route117/scripts.pory"

# 234 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 235 "data/maps/Route117/scripts.pory"
# 144 "data/maps/Route117/scripts.pory"
# 236 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 237 "data/maps/Route117/scripts.pory"
# 145 "data/maps/Route117/scripts.pory"
# 238 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route117/scripts.pory"
	end
# 240 "data/maps/Route117/scripts.pory"

# 241 "data/maps/Route117/scripts.pory"

# 242 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 243 "data/maps/Route117/scripts.pory"
# 150 "data/maps/Route117/scripts.pory"
# 244 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 245 "data/maps/Route117/scripts.pory"
# 151 "data/maps/Route117/scripts.pory"
# 246 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 247 "data/maps/Route117/scripts.pory"
# 152 "data/maps/Route117/scripts.pory"
# 248 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 249 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_Dylan_2
# 250 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan_1:
# 251 "data/maps/Route117/scripts.pory"
# 155 "data/maps/Route117/scripts.pory"
# 252 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 253 "data/maps/Route117/scripts.pory"
# 156 "data/maps/Route117/scripts.pory"
# 254 "data/maps/Route117/scripts.pory"
	release
# 255 "data/maps/Route117/scripts.pory"
	end
# 256 "data/maps/Route117/scripts.pory"

# 257 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan_2:
# 258 "data/maps/Route117/scripts.pory"
# 153 "data/maps/Route117/scripts.pory"
# 259 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchDylan
# 260 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_Dylan_1
# 261 "data/maps/Route117/scripts.pory"

# 262 "data/maps/Route117/scripts.pory"

# 263 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 264 "data/maps/Route117/scripts.pory"
# 161 "data/maps/Route117/scripts.pory"
# 265 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 266 "data/maps/Route117/scripts.pory"
# 162 "data/maps/Route117/scripts.pory"
# 267 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route117/scripts.pory"
# 163 "data/maps/Route117/scripts.pory"
# 269 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 270 "data/maps/Route117/scripts.pory"
# 164 "data/maps/Route117/scripts.pory"
# 271 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 272 "data/maps/Route117/scripts.pory"
# 165 "data/maps/Route117/scripts.pory"
# 273 "data/maps/Route117/scripts.pory"
	release
# 274 "data/maps/Route117/scripts.pory"
	end
# 275 "data/maps/Route117/scripts.pory"

# 276 "data/maps/Route117/scripts.pory"

# 277 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 278 "data/maps/Route117/scripts.pory"
# 170 "data/maps/Route117/scripts.pory"
# 279 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 280 "data/maps/Route117/scripts.pory"
# 171 "data/maps/Route117/scripts.pory"
# 281 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 282 "data/maps/Route117/scripts.pory"
	end
# 283 "data/maps/Route117/scripts.pory"

# 284 "data/maps/Route117/scripts.pory"

# 285 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 286 "data/maps/Route117/scripts.pory"
# 176 "data/maps/Route117/scripts.pory"
# 287 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 288 "data/maps/Route117/scripts.pory"
# 177 "data/maps/Route117/scripts.pory"
# 289 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 290 "data/maps/Route117/scripts.pory"
# 178 "data/maps/Route117/scripts.pory"
# 291 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 292 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_Maria_2
# 293 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria_1:
# 294 "data/maps/Route117/scripts.pory"
# 181 "data/maps/Route117/scripts.pory"
# 295 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 296 "data/maps/Route117/scripts.pory"
# 182 "data/maps/Route117/scripts.pory"
# 297 "data/maps/Route117/scripts.pory"
	release
# 298 "data/maps/Route117/scripts.pory"
	end
# 299 "data/maps/Route117/scripts.pory"

# 300 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria_2:
# 301 "data/maps/Route117/scripts.pory"
# 179 "data/maps/Route117/scripts.pory"
# 302 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchMaria
# 303 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_Maria_1
# 304 "data/maps/Route117/scripts.pory"

# 305 "data/maps/Route117/scripts.pory"

# 306 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 307 "data/maps/Route117/scripts.pory"
# 187 "data/maps/Route117/scripts.pory"
# 308 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 309 "data/maps/Route117/scripts.pory"
# 188 "data/maps/Route117/scripts.pory"
# 310 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 311 "data/maps/Route117/scripts.pory"
# 189 "data/maps/Route117/scripts.pory"
# 312 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 313 "data/maps/Route117/scripts.pory"
# 190 "data/maps/Route117/scripts.pory"
# 314 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 315 "data/maps/Route117/scripts.pory"
# 191 "data/maps/Route117/scripts.pory"
# 316 "data/maps/Route117/scripts.pory"
	release
# 317 "data/maps/Route117/scripts.pory"
	end
# 318 "data/maps/Route117/scripts.pory"

# 319 "data/maps/Route117/scripts.pory"

# 320 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 321 "data/maps/Route117/scripts.pory"
# 196 "data/maps/Route117/scripts.pory"
# 322 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 323 "data/maps/Route117/scripts.pory"
# 197 "data/maps/Route117/scripts.pory"
# 324 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 325 "data/maps/Route117/scripts.pory"
	end
# 326 "data/maps/Route117/scripts.pory"

# 327 "data/maps/Route117/scripts.pory"

# 328 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 329 "data/maps/Route117/scripts.pory"
# 202 "data/maps/Route117/scripts.pory"
# 330 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 331 "data/maps/Route117/scripts.pory"
# 203 "data/maps/Route117/scripts.pory"
# 332 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 333 "data/maps/Route117/scripts.pory"
	end
# 334 "data/maps/Route117/scripts.pory"

# 335 "data/maps/Route117/scripts.pory"

# 336 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 337 "data/maps/Route117/scripts.pory"
# 208 "data/maps/Route117/scripts.pory"
# 338 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 339 "data/maps/Route117/scripts.pory"
# 209 "data/maps/Route117/scripts.pory"
# 340 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 341 "data/maps/Route117/scripts.pory"
# 210 "data/maps/Route117/scripts.pory"
# 342 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 343 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_Anna_2
# 344 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna_1:
# 345 "data/maps/Route117/scripts.pory"
# 213 "data/maps/Route117/scripts.pory"
# 346 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 347 "data/maps/Route117/scripts.pory"
# 214 "data/maps/Route117/scripts.pory"
# 348 "data/maps/Route117/scripts.pory"
	release
# 349 "data/maps/Route117/scripts.pory"
	end
# 350 "data/maps/Route117/scripts.pory"

# 351 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna_2:
# 352 "data/maps/Route117/scripts.pory"
# 211 "data/maps/Route117/scripts.pory"
# 353 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchAnna
# 354 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_Anna_1
# 355 "data/maps/Route117/scripts.pory"

# 356 "data/maps/Route117/scripts.pory"

# 357 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 358 "data/maps/Route117/scripts.pory"
# 219 "data/maps/Route117/scripts.pory"
# 359 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 360 "data/maps/Route117/scripts.pory"
# 220 "data/maps/Route117/scripts.pory"
# 361 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 362 "data/maps/Route117/scripts.pory"
# 221 "data/maps/Route117/scripts.pory"
# 363 "data/maps/Route117/scripts.pory"
	release
# 364 "data/maps/Route117/scripts.pory"
	end
# 365 "data/maps/Route117/scripts.pory"

# 366 "data/maps/Route117/scripts.pory"

# 367 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 368 "data/maps/Route117/scripts.pory"
# 226 "data/maps/Route117/scripts.pory"
# 369 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 370 "data/maps/Route117/scripts.pory"
# 227 "data/maps/Route117/scripts.pory"
# 371 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 372 "data/maps/Route117/scripts.pory"
	end
# 373 "data/maps/Route117/scripts.pory"

# 374 "data/maps/Route117/scripts.pory"

# 375 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 376 "data/maps/Route117/scripts.pory"
# 232 "data/maps/Route117/scripts.pory"
# 377 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 378 "data/maps/Route117/scripts.pory"
# 233 "data/maps/Route117/scripts.pory"
# 379 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 380 "data/maps/Route117/scripts.pory"
# 234 "data/maps/Route117/scripts.pory"
# 381 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 382 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_Meg_2
# 383 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg_1:
# 384 "data/maps/Route117/scripts.pory"
# 237 "data/maps/Route117/scripts.pory"
# 385 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 386 "data/maps/Route117/scripts.pory"
# 238 "data/maps/Route117/scripts.pory"
# 387 "data/maps/Route117/scripts.pory"
	release
# 388 "data/maps/Route117/scripts.pory"
	end
# 389 "data/maps/Route117/scripts.pory"

# 390 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg_2:
# 391 "data/maps/Route117/scripts.pory"
# 235 "data/maps/Route117/scripts.pory"
# 392 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchMeg
# 393 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_Meg_1
# 394 "data/maps/Route117/scripts.pory"

# 395 "data/maps/Route117/scripts.pory"

# 396 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 397 "data/maps/Route117/scripts.pory"
# 243 "data/maps/Route117/scripts.pory"
# 398 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 399 "data/maps/Route117/scripts.pory"
# 244 "data/maps/Route117/scripts.pory"
# 400 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 401 "data/maps/Route117/scripts.pory"
# 245 "data/maps/Route117/scripts.pory"
# 402 "data/maps/Route117/scripts.pory"
	release
# 403 "data/maps/Route117/scripts.pory"
	end
# 404 "data/maps/Route117/scripts.pory"

# 405 "data/maps/Route117/scripts.pory"

# 406 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 407 "data/maps/Route117/scripts.pory"
# 250 "data/maps/Route117/scripts.pory"
# 408 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 409 "data/maps/Route117/scripts.pory"
# 251 "data/maps/Route117/scripts.pory"
# 410 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 411 "data/maps/Route117/scripts.pory"
	end
# 412 "data/maps/Route117/scripts.pory"

# 413 "data/maps/Route117/scripts.pory"

# 414 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 415 "data/maps/Route117/scripts.pory"
# 256 "data/maps/Route117/scripts.pory"
# 416 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 417 "data/maps/Route117/scripts.pory"
# 257 "data/maps/Route117/scripts.pory"
# 418 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 419 "data/maps/Route117/scripts.pory"
	end
# 420 "data/maps/Route117/scripts.pory"

# 421 "data/maps/Route117/scripts.pory"

# 422 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 423 "data/maps/Route117/scripts.pory"
# 262 "data/maps/Route117/scripts.pory"
# 424 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 425 "data/maps/Route117/scripts.pory"
# 263 "data/maps/Route117/scripts.pory"
# 426 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 427 "data/maps/Route117/scripts.pory"
	end
# 428 "data/maps/Route117/scripts.pory"

# 429 "data/maps/Route117/scripts.pory"

# 430 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 431 "data/maps/Route117/scripts.pory"
# 268 "data/maps/Route117/scripts.pory"
# 432 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 433 "data/maps/Route117/scripts.pory"
# 269 "data/maps/Route117/scripts.pory"
# 434 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 435 "data/maps/Route117/scripts.pory"
	end
# 436 "data/maps/Route117/scripts.pory"

# 437 "data/maps/Route117/scripts.pory"

# 438 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove::
# 439 "data/maps/Route117/scripts.pory"
# 273 "data/maps/Route117/scripts.pory"
# 440 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 441 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 442 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 443 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 444 "data/maps/Route117/scripts.pory"

# 445 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty::
# 446 "data/maps/Route117/scripts.pory"
# 280 "data/maps/Route117/scripts.pory"
# 447 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 448 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 449 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 450 "data/maps/Route117/scripts.pory"

# 451 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere::
# 452 "data/maps/Route117/scripts.pory"
# 286 "data/maps/Route117/scripts.pory"
# 453 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 454 "data/maps/Route117/scripts.pory"

# 455 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf::
# 456 "data/maps/Route117/scripts.pory"
# 290 "data/maps/Route117/scripts.pory"
# 457 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 458 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 459 "data/maps/Route117/scripts.pory"

# 460 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville::
# 461 "data/maps/Route117/scripts.pory"
# 295 "data/maps/Route117/scripts.pory"
# 462 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 463 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 464 "data/maps/Route117/scripts.pory"

# 465 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign::
# 466 "data/maps/Route117/scripts.pory"
# 300 "data/maps/Route117/scripts.pory"
# 467 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 468 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"
