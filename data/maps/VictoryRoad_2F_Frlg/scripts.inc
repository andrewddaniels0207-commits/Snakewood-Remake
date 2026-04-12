# 1 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 2 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Frlg_MapScripts::
# 3 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 2 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 4 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_2F_OnLoad
# 5 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 7 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 8 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_OnLoad::
# 9 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 6 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 10 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
# 11 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto_if_ne VictoryRoad_2F_OnLoad_2
# 12 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_OnLoad_1:
# 13 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 9 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 14 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
# 15 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto_if_ne VictoryRoad_2F_OnLoad_5
# 16 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_OnLoad_4:
# 17 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 18 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 19 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_OnLoad_2:
# 20 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 7 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 21 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	call VictoryRoad_2F_EventScript_SetRockBarrier1
# 22 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto VictoryRoad_2F_OnLoad_1
# 23 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 24 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_OnLoad_5:
# 25 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 10 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 26 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	call VictoryRoad_2F_EventScript_SetRockBarrier2
# 27 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto VictoryRoad_2F_OnLoad_4
# 28 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 29 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 30 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier1::
# 31 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 16 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 32 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_RockBarrier_Top, 1
# 33 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 17 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 34 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_RockBarrier_Bottom, 1
# 35 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	return
# 36 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 37 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 38 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier2::
# 39 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 22 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 40 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_RockBarrier_Top, 1
# 41 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 23 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 42 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_RockBarrier_Bottom, 1
# 43 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	return
# 44 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 45 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 46 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1::
# 47 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 28 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 48 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	lockall
# 49 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 29 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 50 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
# 51 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto_if_eq VictoryRoad_2F_EventScript_FloorSwitch1_2
# 52 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1_1:
# 53 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 32 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 54 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_Floor_Ledge_Top, 0
# 55 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 33 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 56 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_Floor_Ledge_Bottom, 0
# 57 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 34 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 58 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 59 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 35 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 60 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	special DrawWholeMapView
# 61 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 36 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 62 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	waitse
# 63 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 37 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 64 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER1
# 65 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 38 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 66 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
# 67 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 39 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 68 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
# 69 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 70 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 71 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1_2:
# 72 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 30 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 73 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed
# 74 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto VictoryRoad_2F_EventScript_FloorSwitch1_1
# 75 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 76 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 77 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed::
# 78 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 44 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 79 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
# 80 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 81 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 82 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 83 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2::
# 84 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 49 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 85 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	lockall
# 86 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 50 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 87 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
# 88 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto_if_eq VictoryRoad_2F_EventScript_FloorSwitch2_2
# 89 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2_1:
# 90 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 53 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 91 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_Floor_Ledge_Top, 0
# 92 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 54 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 93 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_Floor_Ledge_Bottom, 0
# 94 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 55 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 95 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 96 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 56 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 97 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	special DrawWholeMapView
# 98 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 57 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 99 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	waitse
# 100 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 58 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 101 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER2
# 102 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 59 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 103 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
# 104 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 60 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 105 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
# 106 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 107 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 108 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2_2:
# 109 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 51 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 110 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed
# 111 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto VictoryRoad_2F_EventScript_FloorSwitch2_1
# 112 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 113 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 114 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed::
# 115 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 65 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 116 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
# 117 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 118 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 119 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 120 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_Dawson::
# 121 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 70 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 122 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_DAWSON, VictoryRoad_2F_Text_DawsonIntro, VictoryRoad_2F_Text_DawsonDefeat
# 123 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 71 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 124 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 126 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 127 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 128 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_Daisuke::
# 129 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 76 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 130 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_DAISUKE, VictoryRoad_2F_Text_DaisukeIntro, VictoryRoad_2F_Text_DaisukeDefeat
# 131 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 77 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 132 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 134 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 135 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 136 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_Nelson::
# 137 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 82 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 138 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NELSON, VictoryRoad_2F_Text_NelsonIntro, VictoryRoad_2F_Text_NelsonDefeat
# 139 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 83 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 140 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_NelsonPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 142 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 143 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 144 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_Gregory::
# 145 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 88 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 146 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_GREGORY, VictoryRoad_2F_Text_GregoryIntro, VictoryRoad_2F_Text_GregoryDefeat
# 147 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 89 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 148 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 150 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 151 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 152 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_Vincent::
# 153 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 94 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 154 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_VINCENT, VictoryRoad_2F_Text_VincentIntro, VictoryRoad_2F_Text_VincentDefeat
# 155 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 95 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 156 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
# 157 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 158 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 159 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 160 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DawsonIntro::
# 161 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 99 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 162 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "If you can get through here,\n"
# 163 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "you can go meet the ELITE FOUR.$"
# 164 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 165 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DawsonDefeat::
# 166 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 104 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 167 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "No!\n"
# 168 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Unbelievable!$"
# 169 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 170 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DawsonPostBattle::
# 171 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 109 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 172 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "I can beat you when it comes to\n"
# 173 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "knowledge about POKéMON!$"
# 174 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 175 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DaisukeIntro::
# 176 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 114 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 177 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "This here is VICTORY ROAD.\n"
# 178 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "It's the final test for TRAINERS!$"
# 179 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 180 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DaisukeDefeat::
# 181 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 119 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 182 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Atcho!$"
# 183 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 184 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DaisukePostBattle::
# 185 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 123 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 186 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "If you get stuck, try moving some\n"
# 187 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "boulders around.$"
# 188 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 189 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_NelsonIntro::
# 190 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 128 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 191 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Ah, so you wish to challenge the\n"
# 192 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "ELITE FOUR?$"
# 193 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 194 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_NelsonDefeat::
# 195 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 133 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 196 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "You got me!$"
# 197 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 198 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_NelsonPostBattle::
# 199 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 137 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 200 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "{RIVAL} also came through here.$"
# 201 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 202 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_VincentIntro::
# 203 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 141 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 204 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Come on!\n"
# 205 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "I'll whip you!$"
# 206 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 207 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_VincentDefeat::
# 208 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 146 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 209 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "I got whipped!$"
# 210 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 211 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_VincentPostBattle::
# 212 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 150 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 213 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "You earned the right to be on\n"
# 214 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "VICTORY ROAD…$"
# 215 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 216 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_GregoryIntro::
# 217 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 155 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 218 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Is VICTORY ROAD too tough?$"
# 219 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 220 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_GregoryDefeat::
# 221 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 159 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 222 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Well done!$"
# 223 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 224 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_GregoryPostBattle::
# 225 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 163 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 226 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Many TRAINERS give up their\n"
# 227 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "challenge here and go home.$"
# 228 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 229 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_Gyaoo::
# 230 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 168 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
# 231 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "ギヤーオ！$"
