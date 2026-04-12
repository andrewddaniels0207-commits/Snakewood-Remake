VictoryRoad_2F_Frlg_MapScripts::
# 2 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_2F_OnLoad
	.byte 0


VictoryRoad_2F_OnLoad::
# 6 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
	goto_if_ne VictoryRoad_2F_OnLoad_2
VictoryRoad_2F_OnLoad_1:
# 9 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
	goto_if_ne VictoryRoad_2F_OnLoad_5
VictoryRoad_2F_OnLoad_4:
	end

VictoryRoad_2F_OnLoad_2:
# 7 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	call VictoryRoad_2F_EventScript_SetRockBarrier1
	goto VictoryRoad_2F_OnLoad_1

VictoryRoad_2F_OnLoad_5:
# 10 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	call VictoryRoad_2F_EventScript_SetRockBarrier2
	goto VictoryRoad_2F_OnLoad_4


VictoryRoad_2F_EventScript_SetRockBarrier1::
# 16 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_RockBarrier_Top, 1
# 17 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_RockBarrier_Bottom, 1
	return


VictoryRoad_2F_EventScript_SetRockBarrier2::
# 22 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_RockBarrier_Top, 1
# 23 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_RockBarrier_Bottom, 1
	return


VictoryRoad_2F_EventScript_FloorSwitch1::
# 28 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	lockall
# 29 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
	goto_if_eq VictoryRoad_2F_EventScript_FloorSwitch1_2
VictoryRoad_2F_EventScript_FloorSwitch1_1:
# 32 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_Floor_Ledge_Top, 0
# 33 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_Floor_Ledge_Bottom, 0
# 34 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 35 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	special DrawWholeMapView
# 36 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	waitse
# 37 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER1
# 38 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
# 39 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
	end

VictoryRoad_2F_EventScript_FloorSwitch1_2:
# 30 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed
	goto VictoryRoad_2F_EventScript_FloorSwitch1_1


VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed::
# 44 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
	end


VictoryRoad_2F_EventScript_FloorSwitch2::
# 49 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	lockall
# 50 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
	goto_if_eq VictoryRoad_2F_EventScript_FloorSwitch2_2
VictoryRoad_2F_EventScript_FloorSwitch2_1:
# 53 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_Floor_Ledge_Top, 0
# 54 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_Floor_Ledge_Bottom, 0
# 55 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 56 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	special DrawWholeMapView
# 57 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	waitse
# 58 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER2
# 59 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
# 60 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
	end

VictoryRoad_2F_EventScript_FloorSwitch2_2:
# 51 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed
	goto VictoryRoad_2F_EventScript_FloorSwitch2_1


VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed::
# 65 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
	end


VictoryRoad_2F_EventScript_Dawson::
# 70 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_DAWSON, VictoryRoad_2F_Text_DawsonIntro, VictoryRoad_2F_Text_DawsonDefeat
# 71 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Daisuke::
# 76 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_DAISUKE, VictoryRoad_2F_Text_DaisukeIntro, VictoryRoad_2F_Text_DaisukeDefeat
# 77 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Nelson::
# 82 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NELSON, VictoryRoad_2F_Text_NelsonIntro, VictoryRoad_2F_Text_NelsonDefeat
# 83 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_NelsonPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Gregory::
# 88 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_GREGORY, VictoryRoad_2F_Text_GregoryIntro, VictoryRoad_2F_Text_GregoryDefeat
# 89 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Vincent::
# 94 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_VINCENT, VictoryRoad_2F_Text_VincentIntro, VictoryRoad_2F_Text_VincentDefeat
# 95 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_Text_DawsonIntro::
# 99 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "If you can get through here,\n"
	.string "you can go meet the ELITE FOUR.$"

VictoryRoad_2F_Text_DawsonDefeat::
# 104 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "No!\n"
	.string "Unbelievable!$"

VictoryRoad_2F_Text_DawsonPostBattle::
# 109 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "I can beat you when it comes to\n"
	.string "knowledge about POKéMON!$"

VictoryRoad_2F_Text_DaisukeIntro::
# 114 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "This here is VICTORY ROAD.\n"
	.string "It's the final test for TRAINERS!$"

VictoryRoad_2F_Text_DaisukeDefeat::
# 119 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Atcho!$"

VictoryRoad_2F_Text_DaisukePostBattle::
# 123 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "If you get stuck, try moving some\n"
	.string "boulders around.$"

VictoryRoad_2F_Text_NelsonIntro::
# 128 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Ah, so you wish to challenge the\n"
	.string "ELITE FOUR?$"

VictoryRoad_2F_Text_NelsonDefeat::
# 133 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "You got me!$"

VictoryRoad_2F_Text_NelsonPostBattle::
# 137 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "{RIVAL} also came through here.$"

VictoryRoad_2F_Text_VincentIntro::
# 141 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Come on!\n"
	.string "I'll whip you!$"

VictoryRoad_2F_Text_VincentDefeat::
# 146 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "I got whipped!$"

VictoryRoad_2F_Text_VincentPostBattle::
# 150 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "You earned the right to be on\n"
	.string "VICTORY ROAD…$"

VictoryRoad_2F_Text_GregoryIntro::
# 155 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Is VICTORY ROAD too tough?$"

VictoryRoad_2F_Text_GregoryDefeat::
# 159 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Well done!$"

VictoryRoad_2F_Text_GregoryPostBattle::
# 163 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Many TRAINERS give up their\n"
	.string "challenge here and go home.$"

VictoryRoad_2F_Text_Gyaoo::
# 168 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "ギヤーオ！$"
