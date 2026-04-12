VermilionCity_Gym_Frlg_MapScripts::
# 2 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_OnLoad
# 3 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_OnTransition
	.byte 0


VermilionCity_Gym_OnLoad::
# 7 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_OnLoad_2
VermilionCity_Gym_OnLoad_1:
# 10 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_OnLoad_5
VermilionCity_Gym_OnLoad_4:
	end

VermilionCity_Gym_OnLoad_2:
# 8 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetOneBeamOff
	goto VermilionCity_Gym_OnLoad_1

VermilionCity_Gym_OnLoad_5:
# 11 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOff
	goto VermilionCity_Gym_OnLoad_4


VermilionCity_Gym_EventScript_SetOneBeamOff::
# 17 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
# 18 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
# 19 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
# 20 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
# 21 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
# 22 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
# 23 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
# 24 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
# 25 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
# 26 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
	return


VermilionCity_Gym_EventScript_SetBeamsOff::
# 31 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
# 32 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
# 33 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Floor, 0
# 34 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
# 35 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
# 36 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
# 37 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
# 38 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Floor, 0
# 39 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
# 40 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
	return


VermilionCity_Gym_OnTransition::
# 45 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_InitTrashCans
	end


VermilionCity_Gym_EventScript_InitTrashCans::
# 50 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_InitTrashCans_2
VermilionCity_Gym_EventScript_InitTrashCans_1:
# 53 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special SetVermilionTrashCans
# 54 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_0, SWITCH1_ID
# 55 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, SWITCH2_ID
	return

VermilionCity_Gym_EventScript_InitTrashCans_2:
# 51 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto VermilionCity_Gym_EventScript_InitTrashCans_1


VermilionCity_Gym_EventScript_TrashCan1::
# 60 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 61 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 1
# 62 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan2::
# 67 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 68 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 2
# 69 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan3::
# 74 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 75 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 3
# 76 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan4::
# 81 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 82 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 4
# 83 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan5::
# 88 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 89 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 5
# 90 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan6::
# 95 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 96 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 6
# 97 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan7::
# 102 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 103 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 7
# 104 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan8::
# 109 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 110 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 8
# 111 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan9::
# 116 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 117 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 9
# 118 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan10::
# 123 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 124 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 10
# 125 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan11::
# 130 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 131 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 11
# 132 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan12::
# 137 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 138 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 12
# 139 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan13::
# 144 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 145 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 13
# 146 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan14::
# 151 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 152 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 14
# 153 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan15::
# 158 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 159 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 15
# 160 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan::
# 165 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar SWITCH1_ID, VAR_TEMP_0
# 166 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar SWITCH2_ID, VAR_TEMP_1
# 167 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_TrashCan_2
VermilionCity_Gym_EventScript_TrashCan_1:
# 170 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_TrashCan_5
VermilionCity_Gym_EventScript_TrashCan_4:
# 173 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	compare SWITCH1_ID, TRASH_CAN_ID
	goto_if_eq VermilionCity_Gym_EventScript_TrashCan_8
VermilionCity_Gym_EventScript_TrashCan_7:
# 176 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 177 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	end

VermilionCity_Gym_EventScript_TrashCan_2:
# 168 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_LocksAlreadyOpen
	goto VermilionCity_Gym_EventScript_TrashCan_1

VermilionCity_Gym_EventScript_TrashCan_5:
# 171 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrySwitchTwo
	goto VermilionCity_Gym_EventScript_TrashCan_4

VermilionCity_Gym_EventScript_TrashCan_8:
# 174 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_FoundSwitchOne
	goto VermilionCity_Gym_EventScript_TrashCan_7


VermilionCity_Gym_EventScript_FoundSwitchOne::
# 182 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened
# 183 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	playse SE_PIN
# 184 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitse
# 185 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetOneBeamOff
# 186 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 187 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FOUND_FIRST_SWITCH
# 188 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	end


VermilionCity_Gym_EventScript_TrySwitchTwo::
# 193 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	compare SWITCH2_ID, TRASH_CAN_ID
	goto_if_eq VermilionCity_Gym_EventScript_TrySwitchTwo_2
VermilionCity_Gym_EventScript_TrySwitchTwo_1:
# 196 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_OnlyTrashLocksWereReset
# 197 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FOUND_FIRST_SWITCH
# 198 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special SetVermilionTrashCans
# 199 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_0, SWITCH1_ID
# 200 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, SWITCH2_ID
# 201 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOn
# 202 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 203 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	end

VermilionCity_Gym_EventScript_TrySwitchTwo_2:
# 194 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_FoundSwitchTwo
	goto VermilionCity_Gym_EventScript_TrySwitchTwo_1


VermilionCity_Gym_EventScript_FoundSwitchTwo::
# 208 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_SecondLockOpened
# 209 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	closemessage
# 210 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOff
# 211 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 212 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 213 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitse
# 214 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
# 215 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	end


VermilionCity_Gym_EventScript_LocksAlreadyOpen::
# 220 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 221 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	end


VermilionCity_Gym_EventScript_SetBeamsOn::
# 226 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
# 227 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
# 228 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop, 1
# 229 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
# 230 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
# 231 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
# 232 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
# 233 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom, 1
# 234 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
# 235 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
	return


VermilionCity_Gym_EventScript_LtSurge::
# 240 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 241 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 242 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM34_FROM_SURGE, VermilionCity_Gym_EventScript_LtSurge_2
VermilionCity_Gym_EventScript_LtSurge_1:
# 245 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_LtSurgePostBattle
# 246 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
	end

VermilionCity_Gym_EventScript_LtSurge_2:
# 243 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34
	goto VermilionCity_Gym_EventScript_LtSurge_1


VermilionCity_Gym_EventScript_DefeatedLtSurge::
# 251 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 1
# 252 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_HM05, VermilionCity_Gym_EventScript_DefeatedLtSurge_2
VermilionCity_Gym_EventScript_DefeatedLtSurge_1:
# 255 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL
# 256 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LT_SURGE
# 257 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE03_GET
# 258 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 3
# 259 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34
	end

VermilionCity_Gym_EventScript_DefeatedLtSurge_2:
# 253 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_ShowOaksAide
	goto VermilionCity_Gym_EventScript_DefeatedLtSurge_1


VermilionCity_Gym_EventScript_ShowOaksAide::
# 264 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
	return


VermilionCity_Gym_EventScript_GiveTM34::
# 269 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis
# 270 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM34
# 271 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VermilionCity_Gym_EventScript_GiveTM34_2
VermilionCity_Gym_EventScript_GiveTM34_1:
# 274 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	giveitem_msg VermilionCity_Gym_Text_ReceivedTM34FromLtSurge, ITEM_TM34
# 275 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM34_FROM_SURGE
# 276 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainTM34
# 277 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
	end

VermilionCity_Gym_EventScript_GiveTM34_2:
# 272 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_NoRoomForTM34
	goto VermilionCity_Gym_EventScript_GiveTM34_1


VermilionCity_Gym_EventScript_NoRoomForTM34::
# 282 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_MakeRoomInYourBag
# 283 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
	end


VermilionCity_Gym_EventScript_Dwayne::
# 288 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DWAYNE, VermilionCity_Gym_Text_DwayneIntro, VermilionCity_Gym_Text_DwayneDefeat
# 289 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 4
# 290 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCity_Gym_EventScript_Baily::
# 295 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_ENGINEER_BAILY, VermilionCity_Gym_Text_BailyIntro, VermilionCity_Gym_Text_BailyDefeat
# 296 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_BailyPostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCity_Gym_EventScript_Tucker::
# 301 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_TUCKER, VermilionCity_Gym_Text_TuckerIntro, VermilionCity_Gym_Text_TuckerDefeat, VermilionCity_Gym_EventScript_DefeatedTucker
# 302 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 3
# 303 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_TuckerPostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCity_Gym_EventScript_DefeatedTucker::
# 308 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 2
# 309 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
	end


VermilionCity_Gym_EventScript_GymGuy::
# 314 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lock
# 315 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	faceplayer
# 316 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_EventScript_GymGuy_2
VermilionCity_Gym_EventScript_GymGuy_1:
# 319 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyAdvice
# 320 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
	end

VermilionCity_Gym_EventScript_GymGuy_2:
# 317 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GymGuyPostVictory
	goto VermilionCity_Gym_EventScript_GymGuy_1


VermilionCity_Gym_EventScript_GymGuyPostVictory::
# 325 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory
# 326 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
	end


VermilionCity_Gym_EventScript_GymStatue::
# 331 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 332 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_EventScript_GymStatue_2
VermilionCity_Gym_EventScript_GymStatue_1:
# 335 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatue
# 336 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	end

VermilionCity_Gym_EventScript_GymStatue_2:
# 333 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GymStatuePostVictory
	goto VermilionCity_Gym_EventScript_GymStatue_1


VermilionCity_Gym_EventScript_GymStatuePostVictory::
# 341 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatuePlayerWon
# 342 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	end


VermilionCity_Gym_Text_LtSurgeIntro::
# 346 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey, kid! What do you think you're\n"
	.string "doing here?\p"
	.string "You won't live long in combat!\n"
	.string "Not with your puny power!\p"
	.string "I tell you, kid, electric POKéMON\n"
	.string "saved me during the war!\p"
	.string "They zapped my enemies into\n"
	.string "paralysis!\p"
	.string "The same as I'll do to you!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

VermilionCity_Gym_Text_LtSurgePostBattle::
# 358 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "A little word of advice, kid!\p"
	.string "Electricity is sure powerful!\p"
	.string "But, it's useless against GROUND-\n"
	.string "type POKéMON!$"

VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis::
# 365 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The THUNDERBADGE cranks up your\n"
	.string "POKéMON's SPEED!\p"
	.string "It also lets your POKéMON FLY\n"
	.string "lightning-quick anytime, kid!\p"
	.string "You're special, kid!\n"
	.string "Take this!$"

VermilionCity_Gym_Text_ReceivedTM34FromLtSurge::
# 374 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM34\n"
	.string "from LT. SURGE.$"

VermilionCity_Gym_Text_ExplainTM34::
# 379 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "TM34 contains SHOCK WAVE!\p"
	.string "Teach it to an ELECTRIC POKéMON!$"

VermilionCity_Gym_Text_MakeRoomInYourBag::
# 384 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo, kid, make room in your BAG!$"

VermilionCity_Gym_Text_LtSurgeDefeat::
# 388 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Now that's a shocker!\p"
	.string "You're the real deal, kid!\p"
	.string "Fine, then, take the THUNDERBADGE!$"

VermilionCity_Gym_Text_TuckerIntro::
# 394 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "When I was in the Army, LT. SURGE\n"
	.string "was my strict CO.\p"
	.string "He was a hard taskmaster.$"

VermilionCity_Gym_Text_TuckerDefeat::
# 400 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Stop!\n"
	.string "You're very good!$"

VermilionCity_Gym_Text_TuckerPostBattle::
# 405 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "It's not easy opening that door.\p"
	.string "LT. SURGE was always famous for\n"
	.string "his cautious nature in the Army.$"

VermilionCity_Gym_Text_BailyIntro::
# 411 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "I'm a lightweight, but I'm good\n"
	.string "with electricity!\p"
	.string "That's why I joined this GYM.$"

VermilionCity_Gym_Text_BailyDefeat::
# 417 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Fried!$"

VermilionCity_Gym_Text_BailyPostBattle::
# 421 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Okay, I'll talk!\p"
	.string "LT. SURGE said he hid door\n"
	.string "switches inside something.$"

VermilionCity_Gym_Text_DwayneIntro::
# 427 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "This is no place for kids!\n"
	.string "Not even if you're good!$"

VermilionCity_Gym_Text_DwayneDefeat::
# 432 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Wow!\n"
	.string "Surprised me!$"

VermilionCity_Gym_Text_DwaynePostBattle::
# 437 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE installed the traps in\n"
	.string "the GYM himself.\p"
	.string "He set up double locks everywhere.\n"
	.string "Let me give you a hint.\p"
	.string "When you open the first lock, the\n"
	.string "second lock is right next to it.$"

VermilionCity_Gym_Text_GymGuyAdvice::
# 446 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "LT. SURGE has a nickname.\p"
	.string "People refer to him as the\n"
	.string "Lightning American!\p"
	.string "He's an expert on electric\n"
	.string "POKéMON.\p"
	.string "BIRD/WATER-type POKéMON match\n"
	.string "poorly against the ELECTRIC type.\p"
	.string "Beware of paralysis, too.\p"
	.string "LT. SURGE is very cautious.\p"
	.string "He's locked himself in, so it won't\n"
	.string "be easy getting to him.$"

VermilionCity_Gym_Text_GymGuyPostVictory::
# 462 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Whew!\n"
	.string "That match was electric!$"

VermilionCity_Gym_Text_GymStatue::
# 467 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "VERMILION POKéMON GYM\n"
	.string "LEADER: LT. SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

VermilionCity_Gym_Text_GymStatuePlayerWon::
# 474 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "VERMILION POKéMON GYM\n"
	.string "LEADER: LT. SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

VermilionCity_Gym_Text_NopeOnlyTrashHere::
# 481 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Nope!\n"
	.string "There's only trash here.$"

VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened::
# 486 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey! There's a switch under the\n"
	.string "trash! Turn it on!\p"
	.string "The first electric lock opened!$"

VermilionCity_Gym_Text_SecondLockOpened::
# 492 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The second electric lock opened!\n"
	.string "The motorized door opened!$"

VermilionCity_Gym_Text_OnlyTrashLocksWereReset::
# 497 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Nope!\n"
	.string "There's only trash here.\p"
	.string "Hey!\n"
	.string "The electric locks were reset!$"
