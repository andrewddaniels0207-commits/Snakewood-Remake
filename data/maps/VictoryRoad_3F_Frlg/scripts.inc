VictoryRoad_3F_Frlg_MapScripts::
# 2 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_3F_OnLoad
	.byte 0


VictoryRoad_3F_OnLoad::
# 6 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
	goto_if_ne VictoryRoad_3F_OnLoad_2
VictoryRoad_3F_OnLoad_1:
	end

VictoryRoad_3F_OnLoad_2:
# 7 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	call VictoryRoad_3F_EventScript_SetRockBarrier
	goto VictoryRoad_3F_OnLoad_1


VictoryRoad_3F_EventScript_SetRockBarrier::
# 13 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_RockBarrier_Top, 1
# 14 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_RockBarrier_Bottom, 1
	return


VictoryRoad_3F_EventScript_FloorSwitch::
# 19 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	lockall
# 20 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
	goto_if_eq VictoryRoad_3F_EventScript_FloorSwitch_2
VictoryRoad_3F_EventScript_FloorSwitch_1:
# 23 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_Floor_Ledge_Top, 0
# 24 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_Floor_Ledge_Bottom, 0
# 25 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 26 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	special DrawWholeMapView
# 27 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	waitse
# 28 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER1
# 29 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER2
# 30 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
# 31 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	releaseall
	end

VictoryRoad_3F_EventScript_FloorSwitch_2:
# 21 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	goto VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed
	goto VictoryRoad_3F_EventScript_FloorSwitch_1


VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed::
# 36 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	releaseall
	end


VictoryRoad_3F_EventScript_George::
# 41 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_GEORGE, VictoryRoad_3F_Text_GeorgeIntro, VictoryRoad_3F_Text_GeorgeDefeat
# 42 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_3F_EventScript_Colby::
# 47 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_COLBY, VictoryRoad_3F_Text_ColbyIntro, VictoryRoad_3F_Text_ColbyDefeat
# 48 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_ColbyPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_3F_EventScript_Caroline::
# 53 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_CAROLINE, VictoryRoad_3F_Text_CarolineIntro, VictoryRoad_3F_Text_CarolineDefeat
# 54 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_3F_EventScript_Alexa::
# 59 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ALEXA, VictoryRoad_3F_Text_AlexaIntro, VictoryRoad_3F_Text_AlexaDefeat
# 60 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_3F_EventScript_Ray::
# 65 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_RayIntro, VictoryRoad_3F_Text_RayDefeat, VictoryRoad_3F_Text_RayNotEnoughMons
# 66 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_RayPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_3F_EventScript_Tyra::
# 71 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_TyraIntro, VictoryRoad_3F_Text_TyraDefeat, VictoryRoad_3F_Text_TyraNotEnoughMons
# 72 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
	end


Text_DoubleEdgeTeach::
# 76 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "You should be proud of yourself,\n"
	.string "having battled your way through\l"
	.string "VICTORY ROAD so courageously.\p"
	.string "In recognition of your feat,\n"
	.string "I'll teach you DOUBLE-EDGE.\p"
	.string "Would you like me to teach that\n"
	.string "technique?$"

Text_DoubleEdgeDeclined::
# 86 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I'll teach you the technique\n"
	.string "anytime.$"

Text_DoubleEdgeWhichMon::
# 91 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Which POKéMON should I teach\n"
	.string "DOUBLE-EDGE?$"

Text_DoubleEdgeTaught::
# 96 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Keep that drive going for the\n"
	.string "POKéMON LEAGUE!\p"
	.string "Take a run at them and knock 'em\n"
	.string "out!$"

VictoryRoad_3F_Text_GeorgeIntro::
# 103 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I heard rumors of a child prodigy.$"

VictoryRoad_3F_Text_GeorgeDefeat::
# 107 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "The rumors were true!$"

VictoryRoad_3F_Text_GeorgePostBattle::
# 111 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "So, it was you who beat GIOVANNI\n"
	.string "of TEAM ROCKET?$"

VictoryRoad_3F_Text_AlexaIntro::
# 116 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TRAINERS live to seek stronger\n"
	.string "opponents.$"

VictoryRoad_3F_Text_AlexaDefeat::
# 121 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "So strong!$"

VictoryRoad_3F_Text_AlexaPostBattle::
# 126 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "By fighting tough battles, you get\n"
	.string "stronger.$"

VictoryRoad_3F_Text_CarolineIntro::
# 131 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I'll show you just how good you\n"
	.string "are. Not!$"

VictoryRoad_3F_Text_CarolineDefeat::
# 136 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I'm furious!$"

VictoryRoad_3F_Text_CarolinePostBattle::
# 140 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "You showed me just how good\n"
	.string "I was…$"

VictoryRoad_3F_Text_ColbyIntro::
# 145 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Only the chosen can pass here!$"

VictoryRoad_3F_Text_ColbyDefeat::
# 149 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I don't believe it!$"

VictoryRoad_3F_Text_ColbyPostBattle::
# 153 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "All TRAINERS here are headed to\n"
	.string "the POKéMON LEAGUE.\p"
	.string "Don't let down your guard.$"

VictoryRoad_3F_Text_RayIntro::
# 159 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: Together, the two of us are\n"
	.string "destined for greatness!$"

VictoryRoad_3F_Text_RayDefeat::
# 164 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: Ludicrous!\n"
	.string "This can't be!$"

VictoryRoad_3F_Text_RayPostBattle::
# 169 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: You've beaten us.\n"
	.string "Greatness remains elusive…$"

VictoryRoad_3F_Text_RayNotEnoughMons::
# 174 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: Together, the two of us are\n"
	.string "striving for the pinnacle.\p"
	.string "We need you to bring two POKéMON\n"
	.string "into battle with us.$"

VictoryRoad_3F_Text_TyraIntro::
# 181 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: We're trying to become\n"
	.string "champions together.$"

VictoryRoad_3F_Text_TyraDefeat::
# 186 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: Oh, but…$"

VictoryRoad_3F_Text_TyraPostBattle::
# 190 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: You've taught me that power\n"
	.string "can be infinite in shape and form.$"

VictoryRoad_3F_Text_TyraNotEnoughMons::
# 195 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: You can't battle with us if\n"
	.string "you have only one POKéMON.$"
