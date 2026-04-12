Route117_MapScripts::
# 2 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
	.byte 0


Route117_OnTransition::
# 6 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 7 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 8 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 10 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 11 "data/maps/Route117/scripts.pory"
	case 2, Route117_OnTransition_3
# 13 "data/maps/Route117/scripts.pory"
	case 1, Route117_OnTransition_4
Route117_OnTransition_1:
	end

Route117_OnTransition_3:
# 12 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_ShowDaycareMon1
	goto Route117_OnTransition_1

Route117_OnTransition_4:
# 14 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_ShowDaycareMon0
	goto Route117_OnTransition_1


Route117_EventScript_ShowDaycareMon1::
# 20 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 21 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, PARENTS_INCOMPATIBLE
	goto_if_eq Route117_EventScript_ShowDaycareMon1_2
Route117_EventScript_ShowDaycareMon1_1:
# 24 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, PARENTS_MED_COMPATIBILITY
	goto_if_eq Route117_EventScript_ShowDaycareMon1_5
Route117_EventScript_ShowDaycareMon1_4:
# 27 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, PARENTS_MAX_COMPATIBILITY
	goto_if_eq Route117_EventScript_ShowDaycareMon1_8
Route117_EventScript_ShowDaycareMon1_7:
# 30 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
	return

Route117_EventScript_ShowDaycareMon1_2:
# 22 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_DaycareMonIncompatible
	goto Route117_EventScript_ShowDaycareMon1_1

Route117_EventScript_ShowDaycareMon1_5:
# 25 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_DaycareMonMedCompatibility
	goto Route117_EventScript_ShowDaycareMon1_4

Route117_EventScript_ShowDaycareMon1_8:
# 28 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_DaycareMonMaxCompatibility
	goto Route117_EventScript_ShowDaycareMon1_7


Route117_EventScript_ShowDaycareMon0::
# 34 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
	end


Route117_EventScript_DaycareMonIncompatible::
# 39 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 40 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
	return


Route117_EventScript_DaycareMonMedCompatibility::
# 45 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 46 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
	return


Route117_EventScript_DaycareMonMaxCompatibility::
# 51 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 52 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


Route117_EventScript_TryMoveDayCareMan::
# 57 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_TryMoveDayCareMan_2
Route117_EventScript_TryMoveDayCareMan_1:
# 60 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
	return

Route117_EventScript_TryMoveDayCareMan_2:
# 58 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_StopMoveDayCareMan
	goto Route117_EventScript_TryMoveDayCareMan_1


Route117_EventScript_StopMoveDayCareMan::
	return


Route117_EventScript_Woman::
# 68 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
	end


Route117_EventScript_LittleBoy::
# 73 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
	end


Route117_EventScript_Girl::
# 78 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
	end


Route117_EventScript_RouteSignVerdanturf::
# 83 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
	end


Route117_EventScript_RouteSignMauville::
# 88 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
	end


Route117_EventScript_DayCareSign::
# 93 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
	end


Route117_EventScript_Isaac::
# 98 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 99 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 100 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Isaac_2
Route117_EventScript_Isaac_1:
# 103 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 104 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_Isaac_2:
# 101 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchIsaac
	goto Route117_EventScript_Isaac_1


Route117_EventScript_RegisterIsaac::
# 109 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 110 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 112 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 113 "data/maps/Route117/scripts.pory"
	release
	end


Route117_EventScript_RematchIsaac::
# 118 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 119 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Lydia::
# 124 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 125 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 126 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Lydia_2
Route117_EventScript_Lydia_1:
# 129 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 130 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_Lydia_2:
# 127 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchLydia
	goto Route117_EventScript_Lydia_1


Route117_EventScript_RegisterLydia::
# 135 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 136 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 138 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 139 "data/maps/Route117/scripts.pory"
	release
	end


Route117_EventScript_RematchLydia::
# 144 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 145 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Dylan::
# 150 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 151 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 152 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Dylan_2
Route117_EventScript_Dylan_1:
# 155 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 156 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_Dylan_2:
# 153 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchDylan
	goto Route117_EventScript_Dylan_1


Route117_EventScript_RegisterDylan::
# 161 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 162 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 164 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 165 "data/maps/Route117/scripts.pory"
	release
	end


Route117_EventScript_RematchDylan::
# 170 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 171 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Maria::
# 176 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 177 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 178 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Maria_2
Route117_EventScript_Maria_1:
# 181 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 182 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_Maria_2:
# 179 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchMaria
	goto Route117_EventScript_Maria_1


Route117_EventScript_RegisterMaria::
# 187 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 188 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 190 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 191 "data/maps/Route117/scripts.pory"
	release
	end


Route117_EventScript_RematchMaria::
# 196 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 197 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Derek::
# 202 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 203 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Anna::
# 208 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 209 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 210 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Anna_2
Route117_EventScript_Anna_1:
# 213 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 214 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_Anna_2:
# 211 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchAnna
	goto Route117_EventScript_Anna_1


Route117_EventScript_RegisterAnna::
# 219 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 220 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 221 "data/maps/Route117/scripts.pory"
	release
	end


Route117_EventScript_RematchAnna::
# 226 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 227 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Meg::
# 232 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 233 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 234 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Meg_2
Route117_EventScript_Meg_1:
# 237 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 238 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_Meg_2:
# 235 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_RematchMeg
	goto Route117_EventScript_Meg_1


Route117_EventScript_RegisterMeg::
# 243 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 244 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 245 "data/maps/Route117/scripts.pory"
	release
	end


Route117_EventScript_RematchMeg::
# 250 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 251 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Melina::
# 256 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 257 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Brandi::
# 262 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 263 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Aisha::
# 268 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 269 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
	end


Route117_Text_DayCarePokemonHadNewMove::
# 273 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
	.string "When I got it back, it had a new move\n"
	.string "that I didn't teach it.\l"
	.string "I was really, really surprised.$"

Route117_Text_ArentTheseFlowersPretty::
# 280 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
	.string "Aren't these flowers pretty?\p"
	.string "I planted them all!$"

Route117_Text_AirIsTastyHere::
# 286 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"

Route117_Text_RouteSignVerdanturf::
# 290 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"

Route117_Text_RouteSignMauville::
# 295 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"

Route117_Text_DayCareSign::
# 300 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
	.string "“Let us raise your POKéMON.”$"
