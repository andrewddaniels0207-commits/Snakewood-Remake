# 1 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 2 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Frlg_MapScripts::
# 3 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 2 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 4 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_3F_OnLoad
# 5 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 7 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 8 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_OnLoad::
# 9 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 6 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 10 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
# 11 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	goto_if_ne VictoryRoad_3F_OnLoad_2
# 12 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_OnLoad_1:
# 13 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 14 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 15 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_OnLoad_2:
# 16 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 7 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 17 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	call VictoryRoad_3F_EventScript_SetRockBarrier
# 18 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	goto VictoryRoad_3F_OnLoad_1
# 19 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 20 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 21 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_SetRockBarrier::
# 22 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 13 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 23 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_RockBarrier_Top, 1
# 24 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 14 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 25 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_RockBarrier_Bottom, 1
# 26 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	return
# 27 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 28 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 29 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitch::
# 30 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 19 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 31 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	lockall
# 32 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 20 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 33 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
# 34 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	goto_if_eq VictoryRoad_3F_EventScript_FloorSwitch_2
# 35 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitch_1:
# 36 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 23 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 37 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_Floor_Ledge_Top, 0
# 38 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 24 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 39 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_Floor_Ledge_Bottom, 0
# 40 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 25 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 41 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 42 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 26 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 43 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	special DrawWholeMapView
# 44 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 27 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 45 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	waitse
# 46 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 28 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 47 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER1
# 48 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 29 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 49 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER2
# 50 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 30 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 51 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
# 52 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 31 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 53 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	releaseall
# 54 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 55 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 56 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitch_2:
# 57 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 21 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 58 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	goto VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed
# 59 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	goto VictoryRoad_3F_EventScript_FloorSwitch_1
# 60 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 61 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 62 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed::
# 63 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 36 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 64 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	releaseall
# 65 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 66 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 67 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 68 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_George::
# 69 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 41 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 70 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_GEORGE, VictoryRoad_3F_Text_GeorgeIntro, VictoryRoad_3F_Text_GeorgeDefeat
# 71 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 42 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 72 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 74 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 75 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 76 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_Colby::
# 77 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 47 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 78 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_COLBY, VictoryRoad_3F_Text_ColbyIntro, VictoryRoad_3F_Text_ColbyDefeat
# 79 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 48 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 80 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_ColbyPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 82 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 83 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 84 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_Caroline::
# 85 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 53 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 86 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_CAROLINE, VictoryRoad_3F_Text_CarolineIntro, VictoryRoad_3F_Text_CarolineDefeat
# 87 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 54 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 88 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 90 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 91 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 92 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_Alexa::
# 93 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 59 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 94 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ALEXA, VictoryRoad_3F_Text_AlexaIntro, VictoryRoad_3F_Text_AlexaDefeat
# 95 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 60 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 96 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 98 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 99 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 100 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_Ray::
# 101 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 65 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 102 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_RayIntro, VictoryRoad_3F_Text_RayDefeat, VictoryRoad_3F_Text_RayNotEnoughMons
# 103 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 66 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 104 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 106 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 107 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 108 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_Tyra::
# 109 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 71 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 110 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_TyraIntro, VictoryRoad_3F_Text_TyraDefeat, VictoryRoad_3F_Text_TyraNotEnoughMons
# 111 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 72 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 112 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 114 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 115 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 116 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
Text_DoubleEdgeTeach::
# 117 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 76 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 118 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "You should be proud of yourself,\n"
# 119 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "having battled your way through\l"
# 120 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "VICTORY ROAD so courageously.\p"
# 121 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "In recognition of your feat,\n"
# 122 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I'll teach you DOUBLE-EDGE.\p"
# 123 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Would you like me to teach that\n"
# 124 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "technique?$"
# 125 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 126 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
Text_DoubleEdgeDeclined::
# 127 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 86 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 128 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I'll teach you the technique\n"
# 129 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "anytime.$"
# 130 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 131 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
Text_DoubleEdgeWhichMon::
# 132 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 91 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 133 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Which POKéMON should I teach\n"
# 134 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "DOUBLE-EDGE?$"
# 135 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 136 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
Text_DoubleEdgeTaught::
# 137 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 96 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 138 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Keep that drive going for the\n"
# 139 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "POKéMON LEAGUE!\p"
# 140 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Take a run at them and knock 'em\n"
# 141 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "out!$"
# 142 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 143 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_GeorgeIntro::
# 144 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 103 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 145 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I heard rumors of a child prodigy.$"
# 146 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 147 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_GeorgeDefeat::
# 148 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 107 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 149 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "The rumors were true!$"
# 150 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 151 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_GeorgePostBattle::
# 152 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 111 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 153 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "So, it was you who beat GIOVANNI\n"
# 154 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "of TEAM ROCKET?$"
# 155 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 156 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_AlexaIntro::
# 157 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 116 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 158 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TRAINERS live to seek stronger\n"
# 159 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "opponents.$"
# 160 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 161 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_AlexaDefeat::
# 162 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 121 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 163 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Oh!\n"
# 164 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "So strong!$"
# 165 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 166 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_AlexaPostBattle::
# 167 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 126 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 168 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "By fighting tough battles, you get\n"
# 169 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "stronger.$"
# 170 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 171 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_CarolineIntro::
# 172 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 131 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 173 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I'll show you just how good you\n"
# 174 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "are. Not!$"
# 175 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 176 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_CarolineDefeat::
# 177 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 136 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 178 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I'm furious!$"
# 179 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 180 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_CarolinePostBattle::
# 181 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 140 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 182 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "You showed me just how good\n"
# 183 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I was…$"
# 184 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 185 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_ColbyIntro::
# 186 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 145 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 187 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Only the chosen can pass here!$"
# 188 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 189 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_ColbyDefeat::
# 190 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 149 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 191 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I don't believe it!$"
# 192 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 193 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_ColbyPostBattle::
# 194 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 153 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 195 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "All TRAINERS here are headed to\n"
# 196 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "the POKéMON LEAGUE.\p"
# 197 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Don't let down your guard.$"
# 198 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 199 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_RayIntro::
# 200 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 159 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 201 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: Together, the two of us are\n"
# 202 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "destined for greatness!$"
# 203 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 204 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_RayDefeat::
# 205 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 164 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 206 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: Ludicrous!\n"
# 207 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "This can't be!$"
# 208 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 209 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_RayPostBattle::
# 210 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 169 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 211 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: You've beaten us.\n"
# 212 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Greatness remains elusive…$"
# 213 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 214 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_RayNotEnoughMons::
# 215 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 174 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 216 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: Together, the two of us are\n"
# 217 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "striving for the pinnacle.\p"
# 218 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "We need you to bring two POKéMON\n"
# 219 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "into battle with us.$"
# 220 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 221 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_TyraIntro::
# 222 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 181 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 223 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: We're trying to become\n"
# 224 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "champions together.$"
# 225 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 226 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_TyraDefeat::
# 227 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 186 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 228 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: Oh, but…$"
# 229 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 230 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_TyraPostBattle::
# 231 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 190 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 232 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: You've taught me that power\n"
# 233 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "can be infinite in shape and form.$"
# 234 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 235 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_TyraNotEnoughMons::
# 236 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 195 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
# 237 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: You can't battle with us if\n"
# 238 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "you have only one POKéMON.$"
