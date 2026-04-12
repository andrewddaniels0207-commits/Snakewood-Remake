# 1 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Frlg_MapScripts::
# 3 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 2 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 4 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PatternBush_OnTransition
# 5 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 7 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 8 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_OnTransition::
# 9 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 6 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 10 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH
# 11 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 7 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 12 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 13 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 8 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 14 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	compare VAR_TEMP_1, 50
# 15 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	goto_if_ge SixIsland_PatternBush_OnTransition_2
# 16 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_OnTransition_1:
# 17 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 11 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 18 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	compare VAR_TEMP_1, 49
# 19 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	goto_if_le SixIsland_PatternBush_OnTransition_5
# 20 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_OnTransition_4:
# 21 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 22 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 23 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_OnTransition_2:
# 24 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 9 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 25 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	call SixIsland_PatternBush_EventScript_SetEscapeRightExit
# 26 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	goto SixIsland_PatternBush_OnTransition_1
# 27 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 28 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_OnTransition_5:
# 29 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 12 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 30 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	call SixIsland_PatternBush_EventScript_SetEscapeLeftExit
# 31 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	goto SixIsland_PatternBush_OnTransition_4
# 32 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 33 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 34 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_SetEscapeRightExit::
# 35 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 18 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 36 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 64, 10
# 37 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	return
# 38 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 39 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 40 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_SetEscapeLeftExit::
# 41 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 23 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 42 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 45, 10
# 43 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	return
# 44 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 45 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 46 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Bethany::
# 47 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 28 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 48 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_BETHANY, SixIsland_PatternBush_Text_BethanyIntro, SixIsland_PatternBush_Text_BethanyDefeat
# 49 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 29 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 50 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 52 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 53 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 54 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Allison::
# 55 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 34 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 56 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_ALLISON, SixIsland_PatternBush_Text_AllisonIntro, SixIsland_PatternBush_Text_AllisonDefeat
# 57 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 35 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 58 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 60 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 61 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 62 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Garret::
# 63 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 40 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 64 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_GARRET, SixIsland_PatternBush_Text_GarretIntro, SixIsland_PatternBush_Text_GarretDefeat
# 65 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 41 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 66 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 68 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 69 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 70 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Jonah::
# 71 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 46 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 72 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JONAH, SixIsland_PatternBush_Text_JonahIntro, SixIsland_PatternBush_Text_JonahDefeat
# 73 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 47 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 74 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 76 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 77 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 78 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Vance::
# 79 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 52 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 80 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_VANCE, SixIsland_PatternBush_Text_VanceIntro, SixIsland_PatternBush_Text_VanceDefeat
# 81 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 53 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 82 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_VancePostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 84 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 85 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 86 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Nash::
# 87 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 58 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 88 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_NASH, SixIsland_PatternBush_Text_NashIntro, SixIsland_PatternBush_Text_NashDefeat
# 89 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 59 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 90 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_NashPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 92 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 93 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 94 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Cordell::
# 95 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 64 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 96 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_CORDELL, SixIsland_PatternBush_Text_CordellIntro, SixIsland_PatternBush_Text_CordellDefeat
# 97 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 65 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 98 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_CordellPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 100 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 101 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 102 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Dalia::
# 103 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 70 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 104 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_DALIA, SixIsland_PatternBush_Text_DaliaIntro, SixIsland_PatternBush_Text_DaliaDefeat
# 105 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 71 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 106 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_DaliaPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 108 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 109 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 110 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Joana::
# 111 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 76 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 112 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_JOANA, SixIsland_PatternBush_Text_JoanaIntro, SixIsland_PatternBush_Text_JoanaDefeat
# 113 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 77 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 114 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_JoanaPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 116 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 117 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 118 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Riley::
# 119 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 82 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 120 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_RILEY, SixIsland_PatternBush_Text_RileyIntro, SixIsland_PatternBush_Text_RileyDefeat
# 121 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 83 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 122 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 124 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 125 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 126 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Marcy::
# 127 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 88 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 128 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_MARCY, SixIsland_PatternBush_Text_MarcyIntro, SixIsland_PatternBush_Text_MarcyDefeat
# 129 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 89 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 130 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_MarcyPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 132 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 133 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 134 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Layton::
# 135 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 94 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 136 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_LAYTON, SixIsland_PatternBush_Text_LaytonIntro, SixIsland_PatternBush_Text_LaytonDefeat
# 137 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 95 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 138 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_LaytonPostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 140 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 141 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 142 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_BethanyIntro::
# 143 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 99 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 144 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm curious, how do you raise your\n"
# 145 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "POKéMON?$"
# 146 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 147 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_BethanyDefeat::
# 148 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 104 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 149 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "You raise your POKéMON with a\n"
# 150 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "whole lot of love!$"
# 151 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 152 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_BethanyPostBattle::
# 153 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 109 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 154 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "In the same way your mother raised\n"
# 155 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "you full of love, you should raise\l"
# 156 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "your POKéMON.$"
# 157 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 158 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_AllisonIntro::
# 159 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 115 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 160 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm working to preserve the natural\n"
# 161 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "ecology of POKéMON here.$"
# 162 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 163 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_AllisonDefeat::
# 164 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 120 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 165 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Oh, for someone so young, you are\n"
# 166 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "tremendous!$"
# 167 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 168 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_AllisonPostBattle::
# 169 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 125 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 170 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm not saying that you shouldn't\n"
# 171 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "catch POKéMON.\p"
# 172 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I just want people to raise their\n"
# 173 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "POKéMON responsibly.$"
# 174 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 175 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_GarretIntro::
# 176 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 132 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 177 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I caught a BUG POKéMON that lives\n"
# 178 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "only around here!$"
# 179 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 180 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_GarretDefeat::
# 181 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 137 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 182 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Heheh…\n"
# 183 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Isn't my POKéMON awesome?$"
# 184 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 185 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_GarretPostBattle::
# 186 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 142 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 187 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "There's a girl near the BUSH who\n"
# 188 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "measures HERACROSS for TRAINERS.$"
# 189 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 190 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JonahIntro::
# 191 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 147 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 192 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "You know, it just doesn't feel right\n"
# 193 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "if I don't use BUG POKéMON.$"
# 194 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 195 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JonahDefeat::
# 196 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 152 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 197 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "It's okay, losing is a fun part of\n"
# 198 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "POKéMON's appeal, too.$"
# 199 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 200 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JonahPostBattle::
# 201 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 157 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 202 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "By the way, “appeal” is a weird\n"
# 203 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "word, if you think about it.\p"
# 204 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Like, is it like an orange peel?\n"
# 205 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Or like a ringing bell?$"
# 206 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 207 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_VanceIntro::
# 208 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 164 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 209 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Yeah, yeah, yeah!\n"
# 210 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Look at all the BUG POKéMON!$"
# 211 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 212 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_VanceDefeat::
# 213 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 169 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 214 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I got beat while I was still busy\n"
# 215 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "celebrating!$"
# 216 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 217 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_VancePostBattle::
# 218 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 174 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 219 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm going to bring my little brother\n"
# 220 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "here next time.$"
# 221 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 222 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_NashIntro::
# 223 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 179 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 224 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Look, look! There are funny\n"
# 225 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "patterns on the ground.$"
# 226 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 227 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_NashDefeat::
# 228 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 184 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 229 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Super awesome!$"
# 230 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 231 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_NashPostBattle::
# 232 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 188 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 233 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "The funny patterns on the ground…\p"
# 234 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "They look like the patterns on my\n"
# 235 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "grandpa's clothes.$"
# 236 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 237 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_CordellIntro::
# 238 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 194 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 239 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I bet you think I'm just some guy,\n"
# 240 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "don't you, eh?$"
# 241 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 242 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_CordellDefeat::
# 243 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 199 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 244 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I bet you think I'm weak,\n"
# 245 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "don't you, eh?$"
# 246 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 247 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_CordellPostBattle::
# 248 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 204 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 249 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Ayup, you townies come around all\n"
# 250 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "so dandy with a hat that flashy…\p"
# 251 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "How about giving me that?$"
# 252 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 253 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_DaliaIntro::
# 254 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 210 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 255 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Take a deep breath.\n"
# 256 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Isn't the air delicious?$"
# 257 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 258 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_DaliaDefeat::
# 259 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 215 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 260 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "If you'd like, I can teach you how\n"
# 261 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "to breathe properly.$"
# 262 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 263 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_DaliaPostBattle::
# 264 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 220 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 265 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "First, exhale.\n"
# 266 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Blow everything out.\p"
# 267 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "When you can't exhale anymore,\n"
# 268 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "inhale the clean air!\p"
# 269 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Isn't it refreshing?$"
# 270 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 271 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JoanaIntro::
# 272 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 228 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 273 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I love BUG POKéMON.\n"
# 274 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "That's why I'm here all the time.\p"
# 275 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Am I the only girl like that?$"
# 276 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 277 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JoanaDefeat::
# 278 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 234 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 279 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I lost, but I'm still laughing.\n"
# 280 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Am I the only girl like that?$"
# 281 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 282 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JoanaPostBattle::
# 283 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 239 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 284 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm going to keep on collecting\n"
# 285 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "BUG POKéMON.\p"
# 286 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Am I the only girl like that?$"
# 287 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 288 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_RileyIntro::
# 289 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 245 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 290 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "This is a good spot.\n"
# 291 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'll pitch my tent here.$"
# 292 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 293 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_RileyDefeat::
# 294 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 250 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 295 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Wimped out…$"
# 296 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 297 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_RileyPostBattle::
# 298 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 254 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 299 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm going to observe the night sky\n"
# 300 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "here.$"
# 301 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 302 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_MarcyIntro::
# 303 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 259 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 304 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Oh, yuck!\n"
# 305 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I think a bug stung me!$"
# 306 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 307 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_MarcyDefeat::
# 308 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 264 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 309 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "It wasn't a bug.\n"
# 310 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I cut my shin on some grass.$"
# 311 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 312 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_MarcyPostBattle::
# 313 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 269 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 314 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "A little cut like that…\n"
# 315 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "A little spit's enough to cure it!$"
# 316 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 317 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_LaytonIntro::
# 318 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 274 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 319 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Have you noticed something odd\n"
# 320 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "about these parts?$"
# 321 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 322 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_LaytonDefeat::
# 323 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 279 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 324 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Have you taken a good look around\n"
# 325 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "your feet?$"
# 326 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 327 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_LaytonPostBattle::
# 328 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 284 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
# 329 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "There are places here in PATTERN\n"
# 330 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "BUSH where grass won't grow.\p"
# 331 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "What could be the cause of such\n"
# 332 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "a phenomenon?$"
