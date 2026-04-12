# 1 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 2 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_6F_OnLoad
# 5 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 7 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 8 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_OnLoad::
# 9 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_6F_DOOR, SilphCo_6F_OnLoad_2
# 11 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_OnLoad_1:
# 12 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 13 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 14 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_OnLoad_2:
# 15 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 7 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	call EventScript_Close6FDoor
# 17 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto SilphCo_6F_OnLoad_1
# 18 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 19 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 20 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM2::
# 21 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock
# 23 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 14 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	faceplayer
# 25 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 15 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 26 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 27 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_ge SilphCo_6F_EventScript_WorkerM2_2
# 28 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM2_1:
# 29 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 18 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_TargetedSilphForOurMonProducts
# 31 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 32 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 33 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 34 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 35 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM2_2:
# 36 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 37 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto SilphCo_6F_EventScript_WorkerM2RocketsGone
# 38 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto SilphCo_6F_EventScript_WorkerM2_1
# 39 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 40 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 41 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM2RocketsGone::
# 42 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 43 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder
# 44 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 25 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 45 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 46 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 47 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 48 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 49 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM3::
# 50 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock
# 52 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 31 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 53 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	faceplayer
# 54 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 32 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 55 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 56 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_ge SilphCo_6F_EventScript_WorkerM3_2
# 57 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM3_1:
# 58 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 35 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsTookOverBuilding
# 60 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 36 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 61 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 62 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 63 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 64 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM3_2:
# 65 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 33 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 66 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto SilphCo_6F_EventScript_WorkerM3RocketsGone
# 67 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto SilphCo_6F_EventScript_WorkerM3_1
# 68 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 69 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 70 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM3RocketsGone::
# 71 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 41 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 72 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_BetterGetBackToWork
# 73 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 42 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 74 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 75 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 76 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 77 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 78 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM1::
# 79 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 47 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 80 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock
# 81 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 48 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 82 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	faceplayer
# 83 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 49 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 84 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 85 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_ge SilphCo_6F_EventScript_WorkerM1_2
# 86 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM1_1:
# 87 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 52 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 88 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_HelpMePlease
# 89 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 53 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 90 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 91 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 92 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 93 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM1_2:
# 94 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 50 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 95 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto SilphCo_6F_EventScript_WorkerM1RocketsGone
# 96 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto SilphCo_6F_EventScript_WorkerM1_1
# 97 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 98 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 99 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM1RocketsGone::
# 100 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 58 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 101 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_WeGotEngaged
# 102 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 103 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 104 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 105 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 106 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 107 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF1::
# 108 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 64 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 109 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock
# 110 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 65 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 111 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	faceplayer
# 112 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 66 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 113 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 114 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_ge SilphCo_6F_EventScript_WorkerF1_2
# 115 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF1_1:
# 116 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 69 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 117 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_ThatManIsSuchACoward
# 118 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 70 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 119 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 120 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 121 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 122 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF1_2:
# 123 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 67 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 124 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto SilphCo_6F_EventScript_WorkerF1RocketsGone
# 125 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto SilphCo_6F_EventScript_WorkerF1_1
# 126 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 127 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 128 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF1RocketsGone::
# 129 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 75 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 130 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_NeedsMeToLookAfterHim
# 131 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 76 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 132 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 133 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 134 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 135 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 136 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF2::
# 137 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 81 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 138 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock
# 139 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 82 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 140 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	faceplayer
# 141 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 83 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 142 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 143 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_ge SilphCo_6F_EventScript_WorkerF2_2
# 144 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF2_1:
# 145 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 86 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 146 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsTryingToConquerWorld
# 147 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 87 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 148 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 149 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 150 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 151 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF2_2:
# 152 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 84 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 153 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto SilphCo_6F_EventScript_WorkerF2RocketsGone
# 154 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto SilphCo_6F_EventScript_WorkerF2_1
# 155 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 156 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 157 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF2RocketsGone::
# 158 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 92 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 159 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsRanAwayBecauseOfYou
# 160 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 93 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 161 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 162 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 163 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 164 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 165 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_FloorSign::
# 166 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 98 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 167 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_FloorSign, MSGBOX_SIGN
# 168 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 169 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 170 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 171 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_Taylor::
# 172 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 103 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 173 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TAYLOR, SilphCo_6F_Text_TaylorIntro, SilphCo_6F_Text_TaylorDefeat
# 174 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 104 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 175 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 177 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 178 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 179 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_Grunt1::
# 180 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 109 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 181 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_30, SilphCo_6F_Text_Grunt1Intro, SilphCo_6F_Text_Grunt1Defeat
# 182 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 110 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 183 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 185 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 186 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 187 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_Grunt2::
# 188 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 115 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 189 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_31, SilphCo_6F_Text_Grunt2Intro, SilphCo_6F_Text_Grunt2Defeat
# 190 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 116 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 191 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 193 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 194 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 195 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_RocketsTookOverBuilding::
# 196 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 120 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 197 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "The ROCKETS came and took over\n"
# 198 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "the building!$"
# 199 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 200 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_BetterGetBackToWork::
# 201 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 125 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 202 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Well, better get back to work.$"
# 203 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 204 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_HelpMePlease::
# 205 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 129 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 206 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Oh dear, oh dear.\n"
# 207 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Help me, please!$"
# 208 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 209 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_WeGotEngaged::
# 210 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 134 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 211 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "We got engaged.\n"
# 212 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Heheh!$"
# 213 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 214 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_ThatManIsSuchACoward::
# 215 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 139 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 216 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "That man next to me…\n"
# 217 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "He's such a coward!$"
# 218 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 219 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_NeedsMeToLookAfterHim::
# 220 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 144 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 221 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "He's so helpless, he needed\n"
# 222 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "someone like me to look after him.$"
# 223 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 224 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_RocketsTryingToConquerWorld::
# 225 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 149 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 226 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "TEAM ROCKET is trying to conquer\n"
# 227 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "the world with POKéMON.$"
# 228 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 229 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_RocketsRanAwayBecauseOfYou::
# 230 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 154 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 231 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "TEAM ROCKET ran away, and it's all\n"
# 232 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "because of you!$"
# 233 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 234 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_TargetedSilphForOurMonProducts::
# 235 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 159 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 236 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "They must have targeted SILPH for\n"
# 237 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "our POKéMON products.$"
# 238 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 239 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder::
# 240 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 164 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 241 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Come work for SILPH when you\n"
# 242 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "get older.$"
# 243 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 244 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt1Intro::
# 245 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 169 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 246 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
# 247 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "BROTHERS!$"
# 248 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 249 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt1Defeat::
# 250 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 174 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 251 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Flame out!$"
# 252 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 253 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt1PostBattle::
# 254 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 178 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 255 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "No matter!\n"
# 256 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "My brothers will avenge me!$"
# 257 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 258 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_TaylorIntro::
# 259 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 183 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 260 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "That rotten PRESIDENT!\p"
# 261 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Serves him right for shipping me\n"
# 262 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "off to the TIKSI BRANCH!\p"
# 263 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "That's why TEAM ROCKET came after\n"
# 264 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "us, I'm sure of it!$"
# 265 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 266 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_TaylorDefeat::
# 267 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 191 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 268 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Shoot!$"
# 269 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 270 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_TaylorPostBattle::
# 271 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 195 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 272 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "TIKSI BRANCH?\n"
# 273 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "It's in Russian no-man's-land!$"
# 274 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 275 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt2Intro::
# 276 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 200 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 277 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "You dare betray TEAM ROCKET?$"
# 278 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 279 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt2Defeat::
# 280 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 204 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 281 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "You traitor!$"
# 282 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 283 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt2PostBattle::
# 284 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 208 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 285 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "If you stand for justice, you\n"
# 286 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "betray us bad guys!$"
# 287 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 288 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_FloorSign::
# 289 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 213 "data/maps/SilphCo_6F_Frlg/scripts.pory"
# 290 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 291 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "6F$"
