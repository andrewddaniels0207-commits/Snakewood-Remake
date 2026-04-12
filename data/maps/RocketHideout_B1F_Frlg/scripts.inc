# 1 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 2 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Frlg_MapScripts::
# 3 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 2 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 4 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B1F_OnLoad
# 5 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 3 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 6 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RocketHideout_B1F_OnTransition
# 7 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 9 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 10 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_OnLoad::
# 11 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 7 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 12 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	call_if_not_defeated TRAINER_TEAM_ROCKET_GRUNT_12 RocketHideout_B1F_EventScript_SetBarrier
# 13 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 14 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 15 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 16 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_OnTransition::
# 17 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 12 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 18 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROCKET_HIDEOUT_B1F
# 19 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 20 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 21 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 22 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_Grunt1::
# 23 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 17 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 24 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_8, RocketHideout_B1F_Text_Grunt1Intro, RocketHideout_B1F_Text_Grunt1Defeat
# 25 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 18 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 26 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 28 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 29 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 30 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_Grunt2::
# 31 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 23 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 32 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_9, RocketHideout_B1F_Text_Grunt2Intro, RocketHideout_B1F_Text_Grunt2Defeat
# 33 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 24 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 34 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 36 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 37 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 38 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_Grunt3::
# 39 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 29 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 40 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_10, RocketHideout_B1F_Text_Grunt3Intro, RocketHideout_B1F_Text_Grunt3Defeat
# 41 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 30 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 42 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 44 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 45 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 46 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_Grunt4::
# 47 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 35 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 48 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_11, RocketHideout_B1F_Text_Grunt4Intro, RocketHideout_B1F_Text_Grunt4Defeat
# 49 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 36 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 50 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 52 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 53 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 54 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_Grunt5::
# 55 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 41 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 56 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_12, RocketHideout_B1F_Text_Grunt5Intro, RocketHideout_B1F_Text_Grunt5Defeat, RocketHideout_B1F_EventScript_DefeatedGrunt5
# 57 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 42 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 58 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 60 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 61 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 62 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_DefeatedGrunt5::
# 63 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 47 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 64 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	call RocketHideout_B1F_EventScript_RemoveBarrier
# 65 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 48 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 66 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 67 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 49 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 68 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 69 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 50 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 70 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	waitse
# 71 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 51 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 72 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	release
# 73 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 74 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 75 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 76 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_SetBarrier::
# 77 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 56 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 78 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 19, METATILE_SilphCo_HideoutBarrier_TopLeft_Floor, 1
# 79 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 57 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 80 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 19, METATILE_SilphCo_HideoutBarrier_TopRight_Floor, 1
# 81 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 58 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 82 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 20, METATILE_SilphCo_HideoutBarrier_BottomLeft, 1
# 83 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 59 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 84 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 20, METATILE_SilphCo_HideoutBarrier_BottomRight, 1
# 85 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 60 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 86 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 87 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 61 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 88 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 89 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	return
# 90 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 91 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 92 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_RemoveBarrier::
# 93 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 66 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 94 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 19, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 95 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 67 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 96 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 19, METATILE_SilphCo_HideoutFloor, 0
# 97 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 68 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 98 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 20, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 99 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 69 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 100 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 20, METATILE_SilphCo_HideoutFloor, 0
# 101 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 70 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 102 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 103 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 71 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 104 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 21, METATILE_SilphCo_HideoutFloor, 0
# 105 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	return
# 106 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 107 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 108 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt1Intro::
# 109 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 75 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 110 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Who are you?\n"
# 111 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "How did you get here?$"
# 112 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 113 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt1Defeat::
# 114 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 80 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 115 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Oww!\n"
# 116 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Beaten!$"
# 117 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 118 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt1PostBattle::
# 119 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 85 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 120 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Blast it… You're dissing TEAM\n"
# 121 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "ROCKET, aren't you?$"
# 122 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 123 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt2Intro::
# 124 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 90 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 125 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "You broke into TEAM ROCKET's\n"
# 126 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "operation? What nerve!$"
# 127 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 128 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt2Defeat::
# 129 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 95 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 130 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Boom!$"
# 131 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 132 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt2PostBattle::
# 133 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 99 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 134 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "You're not going to get away with\n"
# 135 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "this, brat!$"
# 136 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 137 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt3Intro::
# 138 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 104 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 139 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Intruder alert!$"
# 140 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 141 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt3Defeat::
# 142 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 108 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 143 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "I can't do it!$"
# 144 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 145 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt3PostBattle::
# 146 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 112 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 147 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "SILPH SCOPE? Humph!\n"
# 148 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "I don't know where it is.$"
# 149 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 150 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt4Intro::
# 151 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 117 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 152 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Why did you come here?$"
# 153 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 154 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt4Defeat::
# 155 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 121 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 156 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "This won't do!$"
# 157 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 158 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt4PostBattle::
# 159 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 125 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 160 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Okay, I'll talk…\n"
# 161 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Take the elevator to see my BOSS.$"
# 162 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 163 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt5Intro::
# 164 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 130 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 165 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Are you lost, you little mouse?$"
# 166 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 167 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt5Defeat::
# 168 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 134 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 169 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Why…?$"
# 170 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 171 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt5PostBattle::
# 172 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 138 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
# 173 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Uh-oh, that ruckus somehow opened\n"
# 174 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "the door!$"
