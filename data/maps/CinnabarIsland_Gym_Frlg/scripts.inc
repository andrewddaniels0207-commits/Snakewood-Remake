# 1 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 2 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Frlg_MapScripts::
# 3 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 2 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 4 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CinnabarIsland_Gym_OnLoad
# 5 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 7 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 8 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad::
# 9 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 6 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 10 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_OnLoad_2
# 11 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_1:
# 12 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 9 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 13 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_OnLoad_5
# 14 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_4:
# 15 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 12 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 16 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_OnLoad_8
# 17 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_7:
# 18 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 15 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 19 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_OnLoad_11
# 20 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_10:
# 21 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 18 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 22 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_OnLoad_14
# 23 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_13:
# 24 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 21 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 25 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_OnLoad_17
# 26 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_16:
# 27 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 24 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 28 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_OnLoad_20
# 29 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_19:
# 30 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 31 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 32 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_2:
# 33 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 7 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 34 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_OnLoadOpenAllDoors
# 35 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_OnLoad_1
# 36 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 37 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_5:
# 38 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 10 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 39 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor1
# 40 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_OnLoad_4
# 41 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 42 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_8:
# 43 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 13 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 44 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor2
# 45 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_OnLoad_7
# 46 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 47 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_11:
# 48 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 16 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 49 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor3
# 50 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_OnLoad_10
# 51 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 52 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_14:
# 53 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 19 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 54 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor4
# 55 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_OnLoad_13
# 56 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 57 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_17:
# 58 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 22 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 59 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor5
# 60 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_OnLoad_16
# 61 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 62 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoad_20:
# 63 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 25 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 64 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor6
# 65 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_OnLoad_19
# 66 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 67 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 68 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenAllDoors::
# 69 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 31 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 70 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 71 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 32 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 72 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 73 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 33 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 74 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 75 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 34 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 76 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 77 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 35 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 78 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 79 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 36 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 80 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 81 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 82 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 83 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 84 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor1::
# 85 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 41 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 86 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 87 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 88 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 89 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 90 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor2::
# 91 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 46 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 92 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 93 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 94 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 95 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 96 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor3::
# 97 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 51 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 98 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 99 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 100 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 101 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 102 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor4::
# 103 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 56 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 104 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 105 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 106 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 107 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 108 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor5::
# 109 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 61 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 110 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 111 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 112 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 113 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 114 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor6::
# 115 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 66 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 116 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 117 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 118 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 119 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 120 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Blaine::
# 121 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 71 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 122 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 123 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 72 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 124 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE, CinnabarIsland_Gym_Text_BlaineIntro, CinnabarIsland_Gym_Text_BlaineDefeat, CinnabarIsland_Gym_EventScript_DefeatedBlaine, NO_MUSIC
# 125 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 73 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 126 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM38_FROM_BLAINE, CinnabarIsland_Gym_EventScript_Blaine_2
# 127 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Blaine_1:
# 128 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 76 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 129 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostBattle
# 130 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 77 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 131 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
# 132 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 133 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 134 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Blaine_2:
# 135 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 74 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 136 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
# 137 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Blaine_1
# 138 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 139 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 140 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedBlaine::
# 141 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 82 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 142 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 1
# 143 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 83 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 144 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_BLAINE
# 145 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 84 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 146 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE07_GET
# 147 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 85 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 148 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
# 149 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 86 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 150 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 1
# 151 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 87 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 152 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 153 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 88 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 154 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 7
# 155 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 89 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 156 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
# 157 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 158 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 159 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 160 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_GiveTM38::
# 161 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 94 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 162 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ExplainVolcanoBadge
# 163 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 95 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 164 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM38
# 165 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 96 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 166 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 167 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_GiveTM38_2
# 168 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_GiveTM38_1:
# 169 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 99 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 170 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	giveitem_msg CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine, ITEM_TM38
# 171 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 100 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 172 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM38_FROM_BLAINE
# 173 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 101 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 174 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove
# 175 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 102 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 176 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
# 177 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 178 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 179 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_GiveTM38_2:
# 180 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 97 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 181 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_NoRoomForTM38
# 182 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38_1
# 183 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 184 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 185 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_NoRoomForTM38::
# 186 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 107 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 187 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_MakeSpaceForThis
# 188 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 108 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 189 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
# 190 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 191 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 192 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 193 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Erik::
# 194 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 113 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 195 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Text_ErikIntro, CinnabarIsland_Gym_Text_ErikDefeat
# 196 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 114 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 197 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 199 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 200 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 201 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Avery::
# 202 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 119 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 203 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryIntro, CinnabarIsland_Gym_Text_AveryDefeat, CinnabarIsland_Gym_EventScript_DefeatedAvery
# 204 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 120 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 205 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 207 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 208 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 209 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedAvery::
# 210 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 125 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 211 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DefeatedAvery_2
# 212 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedAvery_1:
# 213 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 128 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 214 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
# 215 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 216 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 217 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedAvery_2:
# 218 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 126 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 219 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer
# 220 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DefeatedAvery_1
# 221 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 222 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 223 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer::
# 224 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 133 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 225 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 226 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 227 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 228 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 229 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Derek::
# 230 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 138 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 231 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekIntro, CinnabarIsland_Gym_Text_DerekDefeat, CinnabarIsland_Gym_EventScript_DefeatedDerek
# 232 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 139 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 233 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 2
# 234 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 140 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 235 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 237 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 238 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 239 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDerek::
# 240 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 145 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 241 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DefeatedDerek_2
# 242 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDerek_1:
# 243 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 148 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 244 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
# 245 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 246 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 247 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDerek_2:
# 248 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 146 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 249 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer
# 250 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DefeatedDerek_1
# 251 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 252 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 253 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer::
# 254 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 153 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 255 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 256 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 257 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 258 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 259 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Zac::
# 260 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 158 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 261 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacIntro, CinnabarIsland_Gym_Text_ZacDefeat, CinnabarIsland_Gym_EventScript_DefeatedZac
# 262 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 159 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 263 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
# 264 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 265 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 266 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 267 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedZac::
# 268 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 164 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 269 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DefeatedZac_2
# 270 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedZac_1:
# 271 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 167 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 272 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
# 273 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 274 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 275 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedZac_2:
# 276 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 165 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 277 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer
# 278 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DefeatedZac_1
# 279 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 280 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 281 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer::
# 282 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 172 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 283 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 284 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 285 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 286 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 287 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quinn::
# 288 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 177 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 289 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnIntro, CinnabarIsland_Gym_Text_QuinnDefeat, CinnabarIsland_Gym_EventScript_DefeatedQuinn
# 290 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 178 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 291 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 293 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 294 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 295 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedQuinn::
# 296 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 183 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 297 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DefeatedQuinn_2
# 298 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedQuinn_1:
# 299 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 186 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 300 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
# 301 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 302 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 303 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedQuinn_2:
# 304 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 184 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 305 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer
# 306 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DefeatedQuinn_1
# 307 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 308 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 309 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer::
# 310 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 191 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 311 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 312 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 313 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 314 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 315 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Ramon::
# 316 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 196 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 317 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonIntro, CinnabarIsland_Gym_Text_RamonDefeat, CinnabarIsland_Gym_EventScript_DefeatedRamon
# 318 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 197 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 319 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 321 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 322 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 323 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedRamon::
# 324 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 202 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 325 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DefeatedRamon_2
# 326 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedRamon_1:
# 327 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 205 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 328 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
# 329 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 330 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 331 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedRamon_2:
# 332 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 203 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 333 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer
# 334 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DefeatedRamon_1
# 335 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 336 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 337 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer::
# 338 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 210 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 339 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 340 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 341 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 342 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 343 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Dusty::
# 344 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 215 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 345 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyIntro, CinnabarIsland_Gym_Text_DustyDefeat, CinnabarIsland_Gym_EventScript_DefeatedDusty
# 346 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 216 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 347 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
# 348 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 349 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 350 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 351 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDusty::
# 352 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 221 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 353 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DefeatedDusty_2
# 354 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDusty_1:
# 355 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 224 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 356 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
# 357 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 358 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 359 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDusty_2:
# 360 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 222 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 361 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer
# 362 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DefeatedDusty_1
# 363 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 364 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 365 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer::
# 366 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 229 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 367 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 368 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 369 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 370 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 371 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuy::
# 372 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 234 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 373 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lock
# 374 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 235 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 375 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	faceplayer
# 376 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 236 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 377 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_EventScript_GymGuy_2
# 378 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuy_1:
# 379 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 239 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 380 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyAdvice
# 381 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 240 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 382 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
# 383 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 384 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 385 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuy_2:
# 386 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 237 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 387 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GymGuyPostVictory
# 388 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GymGuy_1
# 389 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 390 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 391 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuyPostVictory::
# 392 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 245 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 393 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyPostVictory
# 394 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 246 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 395 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
# 396 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 397 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 398 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 399 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatue::
# 400 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 251 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 401 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 402 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 252 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 403 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_EventScript_GymStatue_2
# 404 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatue_1:
# 405 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 255 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 406 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatue
# 407 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 256 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 408 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 409 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 410 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 411 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatue_2:
# 412 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 253 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 413 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GymStatuePostVictory
# 414 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GymStatue_1
# 415 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 416 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 417 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatuePostVictory::
# 418 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 261 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 419 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatuePlayerWon
# 420 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 262 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 421 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 422 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 423 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 424 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 425 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Left::
# 426 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 267 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 427 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 428 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 268 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 429 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 430 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 269 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 431 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 432 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 433 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 434 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 435 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Right::
# 436 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 274 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 437 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 438 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 275 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 439 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 440 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 276 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 441 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 442 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 443 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 444 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 445 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1::
# 446 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 281 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 447 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 448 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 282 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 449 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
# 450 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 283 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 451 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 452 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz1_2
# 453 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1_1:
# 454 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 286 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 455 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 456 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz1_5
# 457 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1_4:
# 458 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 459 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 460 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1_2:
# 461 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 284 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 462 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1Correct
# 463 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1_1
# 464 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 465 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1_5:
# 466 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 287 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 467 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1Incorrect
# 468 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1_4
# 469 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 470 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 471 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_CorrectAnswer::
# 472 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 293 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 473 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 474 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 294 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 475 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitfanfare
# 476 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 295 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 477 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
# 478 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 479 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 480 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 481 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_IncorrectAnswer::
# 482 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 300 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 483 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 484 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 301 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 485 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_BOO
# 486 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 302 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 487 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 488 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 303 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 489 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
# 490 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 304 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 491 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	closemessage
# 492 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 493 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 494 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 495 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Correct::
# 496 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 309 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 497 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 498 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 310 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 499 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1Correct_2
# 500 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Correct_1:
# 501 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 313 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 502 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 503 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 314 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 504 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 505 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 506 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 507 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Correct_2:
# 508 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 311 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 509 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 510 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1Correct_1
# 511 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 512 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 513 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Complete::
# 514 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 319 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 515 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 516 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 320 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 517 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 518 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 321 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 519 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 520 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 322 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 521 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 522 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 323 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 523 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_1
# 524 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 525 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 526 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 527 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DoorAlreadyOpen::
# 528 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 328 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 529 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 530 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 531 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 532 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 533 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Incorrect::
# 534 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 333 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 535 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 536 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 334 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 537 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_EventScript_BattleQuinn
# 538 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 335 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 539 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 540 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 541 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 542 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 543 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn::
# 544 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 340 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 545 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 546 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleQuinn_2
# 547 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn_1:
# 548 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 343 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 549 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 550 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleQuinn_5
# 551 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn_4:
# 552 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 346 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 553 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 554 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 347 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 555 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnIntro
# 556 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 348 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 557 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnDefeat
# 558 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 349 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 559 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_BattleQuinn_8
# 560 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn_7:
# 561 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 352 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 562 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 563 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 353 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 564 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 565 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 566 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 567 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn_2:
# 568 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 341 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 569 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_QuinnApproachLeft
# 570 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleQuinn_1
# 571 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 572 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn_5:
# 573 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 344 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 574 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_QuinnApproachRight
# 575 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleQuinn_4
# 576 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 577 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn_8:
# 578 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 350 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 579 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 580 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleQuinn_7
# 581 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 582 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 583 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachLeft::
# 584 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 358 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 585 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 586 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 359 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 587 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachLeft
# 588 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 360 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 589 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 590 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 591 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 592 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 593 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachRight::
# 594 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 365 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 595 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 596 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 366 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 597 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachRight
# 598 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 367 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 599 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 600 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 601 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 602 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 603 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 371 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 604 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachLeft:
# 605 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 372 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 606 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 607 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 373 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 608 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 609 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 374 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 610 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 611 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 612 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 377 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 613 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachRight:
# 614 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 378 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 615 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 616 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 379 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 617 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 618 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 619 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Left::
# 620 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 383 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 621 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 622 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 384 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 623 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 624 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 385 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 625 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 626 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 627 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 628 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 629 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Right::
# 630 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 390 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 631 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 632 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 391 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 633 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 634 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 392 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 635 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 636 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 637 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 638 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 639 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2::
# 640 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 397 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 641 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 642 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 398 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 643 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
# 644 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 399 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 645 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 646 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz2_2
# 647 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2_1:
# 648 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 402 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 649 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 650 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz2_5
# 651 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2_4:
# 652 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 653 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 654 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2_2:
# 655 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 400 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 656 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2Incorrect
# 657 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2_1
# 658 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 659 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2_5:
# 660 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 403 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 661 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2Correct
# 662 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2_4
# 663 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 664 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 665 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Correct::
# 666 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 409 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 667 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 668 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 410 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 669 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2Correct_2
# 670 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Correct_1:
# 671 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 413 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 672 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 673 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 414 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 674 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 675 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 676 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 677 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Correct_2:
# 678 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 411 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 679 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 680 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2Correct_1
# 681 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 682 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 683 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Complete::
# 684 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 419 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 685 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 686 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 420 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 687 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 688 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 421 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 689 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 690 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 422 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 691 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 692 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 423 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 693 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_2
# 694 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 695 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 696 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 697 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Incorrect::
# 698 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 428 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 699 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 700 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 429 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 701 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_EventScript_BattleAvery
# 702 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 430 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 703 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 704 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 705 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 706 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 707 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery::
# 708 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 435 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 709 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 710 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleAvery_2
# 711 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery_1:
# 712 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 438 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 713 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 714 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleAvery_5
# 715 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery_4:
# 716 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 441 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 717 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 718 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 442 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 719 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryIntro
# 720 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 443 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 721 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryDefeat
# 722 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 444 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 723 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_BattleAvery_8
# 724 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery_7:
# 725 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 447 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 726 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 727 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 448 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 728 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 729 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 730 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 731 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery_2:
# 732 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 436 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 733 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_AveryApproachLeft
# 734 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleAvery_1
# 735 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 736 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery_5:
# 737 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 439 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 738 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_AveryApproachRight
# 739 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleAvery_4
# 740 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 741 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery_8:
# 742 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 445 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 743 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 744 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleAvery_7
# 745 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 746 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 747 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachLeft::
# 748 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 453 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 749 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 750 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 454 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 751 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachLeft
# 752 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 455 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 753 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 754 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 755 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 756 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 757 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachRight::
# 758 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 460 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 759 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 760 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 461 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 761 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachRight
# 762 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 462 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 763 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 764 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 765 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 766 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 767 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 466 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 768 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachLeft:
# 769 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 467 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 770 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 771 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 468 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 772 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 773 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 469 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 774 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 775 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 470 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 776 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 777 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 778 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 473 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 779 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachRight:
# 780 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 474 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 781 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 782 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 475 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 783 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 784 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 476 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 785 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_in_place_faster_left
# 786 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 477 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 787 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 788 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 789 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 480 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 790 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_PlayerFaceAvery:
# 791 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 481 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 792 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	delay_16
# 793 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 482 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 794 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	delay_16
# 795 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 483 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 796 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_in_place_faster_right
# 797 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 484 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 798 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 799 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 800 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Left::
# 801 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 488 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 802 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 803 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 489 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 804 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 805 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 490 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 806 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 807 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 808 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 809 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 810 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Right::
# 811 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 495 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 812 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 813 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 496 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 814 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 815 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 497 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 816 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 817 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 818 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 819 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 820 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3::
# 821 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 502 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 822 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 823 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 503 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 824 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion3, MSGBOX_YESNO
# 825 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 504 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 826 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 827 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz3_2
# 828 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3_1:
# 829 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 507 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 830 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 831 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz3_5
# 832 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3_4:
# 833 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 834 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 835 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3_2:
# 836 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 505 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 837 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3Incorrect
# 838 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3_1
# 839 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 840 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3_5:
# 841 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 508 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 842 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3Correct
# 843 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3_4
# 844 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 845 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 846 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Correct::
# 847 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 514 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 848 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 849 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 515 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 850 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3Correct_2
# 851 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Correct_1:
# 852 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 518 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 853 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 854 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 519 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 855 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 856 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 857 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 858 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Correct_2:
# 859 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 516 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 860 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 861 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3Correct_1
# 862 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 863 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 864 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Complete::
# 865 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 524 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 866 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 867 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 525 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 868 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 869 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 526 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 870 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 871 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 527 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 872 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 873 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 528 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 874 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_3
# 875 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 876 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 877 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 878 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Incorrect::
# 879 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 533 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 880 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 881 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 534 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 882 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_EventScript_BattleRamon
# 883 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 535 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 884 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 885 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 886 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 887 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 888 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon::
# 889 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 540 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 890 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 891 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleRamon_2
# 892 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon_1:
# 893 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 543 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 894 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 895 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleRamon_5
# 896 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon_4:
# 897 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 546 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 898 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 899 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 547 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 900 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonIntro
# 901 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 548 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 902 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonDefeat
# 903 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 549 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 904 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_BattleRamon_8
# 905 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon_7:
# 906 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 552 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 907 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 908 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 553 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 909 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 910 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 911 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 912 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon_2:
# 913 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 541 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 914 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_RamonApproachLeft
# 915 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleRamon_1
# 916 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 917 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon_5:
# 918 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 544 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 919 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_RamonApproachRight
# 920 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleRamon_4
# 921 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 922 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon_8:
# 923 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 550 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 924 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 925 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleRamon_7
# 926 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 927 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 928 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachLeft::
# 929 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 558 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 930 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 931 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 559 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 932 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachLeft
# 933 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 560 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 934 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 935 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 936 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 937 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 938 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachRight::
# 939 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 565 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 940 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 941 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 566 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 942 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachRight
# 943 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 567 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 944 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 945 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 946 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 947 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 948 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 571 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 949 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachLeft:
# 950 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 572 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 951 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 952 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 573 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 953 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 954 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 574 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 955 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 956 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 957 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 577 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 958 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachRight:
# 959 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 578 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 960 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 961 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 579 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 962 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 963 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 964 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Left::
# 965 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 583 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 966 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 967 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 584 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 968 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 969 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 585 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 970 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 971 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 972 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 973 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 974 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Right::
# 975 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 590 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 976 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 977 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 591 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 978 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 979 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 592 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 980 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 981 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 982 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 983 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 984 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4::
# 985 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 597 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 986 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 987 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 598 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 988 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion4, MSGBOX_YESNO
# 989 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 599 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 990 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 991 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz4_2
# 992 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4_1:
# 993 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 602 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 994 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 995 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz4_5
# 996 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4_4:
# 997 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 998 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 999 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4_2:
# 1000 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 600 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1001 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4Incorrect
# 1002 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4_1
# 1003 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1004 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4_5:
# 1005 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 603 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1006 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4Correct
# 1007 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4_4
# 1008 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1009 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1010 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Correct::
# 1011 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 609 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1012 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 1013 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 610 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1014 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4Correct_2
# 1015 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Correct_1:
# 1016 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 613 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1017 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 1018 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 614 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1019 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 1020 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1021 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1022 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Correct_2:
# 1023 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 611 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1024 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 1025 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4Correct_1
# 1026 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1027 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1028 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Complete::
# 1029 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 619 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1030 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 1031 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 620 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1032 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 1033 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 621 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1034 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 1035 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 622 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1036 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 1037 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 623 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1038 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_4
# 1039 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1040 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1041 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1042 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Incorrect::
# 1043 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 628 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1044 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 1045 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 629 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1046 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_EventScript_BattleDerek
# 1047 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 630 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1048 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 1049 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1050 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1051 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1052 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek::
# 1053 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 635 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1054 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 1055 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleDerek_2
# 1056 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek_1:
# 1057 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 638 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1058 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 1059 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleDerek_5
# 1060 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek_4:
# 1061 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 641 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1062 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1063 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 642 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1064 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekIntro
# 1065 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 643 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1066 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekDefeat
# 1067 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 644 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1068 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_BattleDerek_8
# 1069 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek_7:
# 1070 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 647 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1071 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 1072 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 648 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1073 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 1074 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1075 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1076 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek_2:
# 1077 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 636 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1078 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_DerekApproachLeft
# 1079 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleDerek_1
# 1080 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1081 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek_5:
# 1082 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 639 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1083 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_DerekApproachRight
# 1084 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleDerek_4
# 1085 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1086 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek_8:
# 1087 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 645 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1088 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 1089 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleDerek_7
# 1090 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1091 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1092 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachLeft::
# 1093 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 653 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1094 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1095 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 654 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1096 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachLeft
# 1097 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 655 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1098 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 1099 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1100 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1101 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1102 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachRight::
# 1103 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 660 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1104 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1105 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 661 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1106 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachRight
# 1107 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 662 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1108 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 1109 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1110 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1111 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1112 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 666 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1113 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachLeft:
# 1114 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 667 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1115 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 1116 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 668 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1117 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 1118 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 669 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1119 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 1120 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1121 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 672 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1122 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachRight:
# 1123 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 673 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1124 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 1125 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 674 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1126 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 1127 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1128 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Left::
# 1129 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 678 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1130 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 1131 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 679 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1132 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1133 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 680 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1134 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 1135 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1136 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1137 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1138 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Right::
# 1139 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 685 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1140 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 1141 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 686 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1142 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1143 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 687 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1144 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 1145 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1146 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1147 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1148 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5::
# 1149 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 692 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1150 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 1151 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 693 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1152 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion5, MSGBOX_YESNO
# 1153 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 694 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1154 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 1155 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz5_2
# 1156 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5_1:
# 1157 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 697 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1158 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 1159 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz5_5
# 1160 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5_4:
# 1161 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1162 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1163 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5_2:
# 1164 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 695 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1165 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5Correct
# 1166 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5_1
# 1167 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1168 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5_5:
# 1169 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 698 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1170 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5Incorrect
# 1171 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5_4
# 1172 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1173 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1174 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Correct::
# 1175 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 704 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1176 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 1177 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 705 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1178 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5Correct_2
# 1179 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Correct_1:
# 1180 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 708 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1181 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 1182 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 709 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1183 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 1184 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1185 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1186 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Correct_2:
# 1187 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 706 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1188 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 1189 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5Correct_1
# 1190 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1191 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1192 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Complete::
# 1193 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 714 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1194 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 1195 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 715 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1196 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 1197 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 716 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1198 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 1199 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 717 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1200 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 1201 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 718 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1202 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_5
# 1203 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1204 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1205 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1206 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Incorrect::
# 1207 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 723 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1208 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 1209 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 724 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1210 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_EventScript_BattleDusty
# 1211 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 725 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1212 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 1213 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1214 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1215 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1216 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty::
# 1217 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 730 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1218 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 1219 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleDusty_2
# 1220 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty_1:
# 1221 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 733 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1222 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 1223 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleDusty_5
# 1224 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty_4:
# 1225 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 736 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1226 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1227 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 737 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1228 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyIntro
# 1229 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 738 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1230 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyDefeat
# 1231 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 739 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1232 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_BattleDusty_8
# 1233 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty_7:
# 1234 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 742 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1235 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 1236 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 743 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1237 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 1238 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1239 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1240 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty_2:
# 1241 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 731 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1242 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_DustyApproachLeft
# 1243 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleDusty_1
# 1244 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1245 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty_5:
# 1246 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 734 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1247 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_DustyApproachRight
# 1248 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleDusty_4
# 1249 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1250 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty_8:
# 1251 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 740 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1252 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 1253 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleDusty_7
# 1254 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1255 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1256 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachLeft::
# 1257 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 748 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1258 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1259 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 749 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1260 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachLeft
# 1261 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 750 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1262 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 1263 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1264 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1265 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1266 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachRight::
# 1267 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 755 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1268 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1269 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 756 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1270 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachRight
# 1271 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 757 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1272 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 1273 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1274 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1275 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1276 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 761 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1277 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachLeft:
# 1278 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 762 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1279 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 1280 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 763 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1281 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 1282 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 764 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1283 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 1284 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1285 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 767 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1286 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachRight:
# 1287 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 768 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1288 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 1289 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 769 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1290 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 1291 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1292 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Left::
# 1293 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 773 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1294 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 1295 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 774 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1296 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1297 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 775 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1298 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 1299 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1300 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1301 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1302 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Right::
# 1303 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 780 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1304 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 1305 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 781 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1306 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1307 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 782 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1308 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 1309 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1310 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1311 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1312 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6::
# 1313 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 787 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1314 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 1315 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 788 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1316 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion6, MSGBOX_YESNO
# 1317 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 789 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1318 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 1319 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz6_2
# 1320 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6_1:
# 1321 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 792 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1322 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 1323 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz6_5
# 1324 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6_4:
# 1325 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1326 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1327 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6_2:
# 1328 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 790 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1329 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6Incorrect
# 1330 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6_1
# 1331 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1332 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6_5:
# 1333 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 793 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1334 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6Correct
# 1335 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6_4
# 1336 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1337 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1338 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Correct::
# 1339 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 799 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1340 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 1341 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 800 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1342 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6Correct_2
# 1343 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Correct_1:
# 1344 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 803 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1345 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 1346 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 804 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1347 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 1348 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1349 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1350 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Correct_2:
# 1351 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 801 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1352 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 1353 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6Correct_1
# 1354 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1355 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1356 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Complete::
# 1357 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 809 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1358 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 1359 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 810 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1360 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 1361 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 811 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1362 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 1363 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 812 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1364 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 1365 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 813 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1366 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_6
# 1367 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1368 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1369 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1370 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Incorrect::
# 1371 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 818 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1372 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 1373 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 819 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1374 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_EventScript_BattleZac
# 1375 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 820 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1376 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 1377 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1378 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1379 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1380 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac::
# 1381 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 825 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1382 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 1383 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleZac_2
# 1384 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac_1:
# 1385 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 828 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1386 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 1387 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleZac_5
# 1388 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac_4:
# 1389 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 831 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1390 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1391 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 832 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1392 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacIntro
# 1393 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 833 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1394 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacDefeat
# 1395 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 834 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1396 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_BattleZac_8
# 1397 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac_7:
# 1398 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 837 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1399 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 1400 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 838 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1401 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
# 1402 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	end
# 1403 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1404 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac_2:
# 1405 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 826 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1406 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_ZacApproachLeft
# 1407 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleZac_1
# 1408 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1409 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac_5:
# 1410 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 829 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1411 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_ZacApproachRight
# 1412 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleZac_4
# 1413 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1414 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac_8:
# 1415 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 835 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1416 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 1417 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_BattleZac_7
# 1418 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1419 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1420 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachLeft::
# 1421 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 843 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1422 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1423 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 844 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1424 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachLeft
# 1425 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 845 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1426 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 1427 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1428 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1429 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1430 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachRight::
# 1431 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 850 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1432 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1433 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 851 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1434 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachRight
# 1435 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 852 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1436 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 1437 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1438 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1439 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1440 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 856 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1441 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachLeft:
# 1442 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 857 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1443 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 1444 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 858 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1445 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 1446 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 859 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1447 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 1448 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1449 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 862 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1450 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachRight:
# 1451 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 863 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1452 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 1453 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 864 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1454 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end
# 1455 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1456 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor1::
# 1457 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 868 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1458 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 26, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 1459 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 869 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1460 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 27, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 1461 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 870 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1462 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 26, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 1463 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 871 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1464 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 27, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 1465 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 872 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1466 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 1467 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 873 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1468 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
# 1469 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 874 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1470 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 1471 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1472 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1473 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1474 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor2::
# 1475 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 879 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1476 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 1477 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 880 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1478 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 1479 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 881 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1480 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 1481 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 882 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1482 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 1483 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 883 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1484 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 1485 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 884 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1486 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
# 1487 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 885 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1488 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 1489 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1490 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1491 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1492 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor3::
# 1493 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 890 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1494 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 1495 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 891 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1496 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 1497 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 892 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1498 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 1499 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 893 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1500 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 1501 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 894 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1502 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 1503 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 895 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1504 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
# 1505 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 896 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1506 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 1507 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1508 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1509 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1510 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor4::
# 1511 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 901 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1512 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
# 1513 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 902 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1514 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 1515 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 903 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1516 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
# 1517 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1518 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1519 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1520 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor5::
# 1521 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 908 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1522 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 1523 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 909 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1524 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 1525 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 910 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1526 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 1527 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 911 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1528 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 1529 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 912 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1530 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 1531 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 913 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1532 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 18, METATILE_CinnabarGym_Floor, 0
# 1533 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 914 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1534 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 1535 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1536 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1537 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1538 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor6::
# 1539 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 919 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1540 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 1541 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 920 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1542 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 1543 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 921 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1544 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 1545 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 922 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1546 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 1547 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 923 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1548 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 1549 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 924 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1550 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 10, METATILE_CinnabarGym_Floor, 0
# 1551 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 925 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1552 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 1553 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	return
# 1554 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1555 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1556 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_BlaineIntro::
# 1557 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 929 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1558 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Hah!\p"
# 1559 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I am BLAINE, the red-hot LEADER\n"
# 1560 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "of CINNABAR GYM!\p"
# 1561 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "My fiery POKéMON are all rough\n"
# 1562 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "and ready with intense heat!\p"
# 1563 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "They incinerate all challengers!\p"
# 1564 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Hah!\n"
# 1565 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "You better have BURN HEAL!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 1566 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1567 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_BlaineDefeat::
# 1568 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 940 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1569 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I have burned down to nothing!\n"
# 1570 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Not even ashes remain!\p"
# 1571 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "You have earned the VOLCANOBADGE.$"
# 1572 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1573 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove::
# 1574 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 946 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1575 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "FIRE BLAST is the ultimate fire\n"
# 1576 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "technique.\p"
# 1577 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Don't waste it on WATER POKéMON.$"
# 1578 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1579 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_ExplainVolcanoBadge::
# 1580 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 952 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1581 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Hah!\p"
# 1582 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "The VOLCANOBADGE heightens the\n"
# 1583 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "SPECIAL stats of your POKéMON.\p"
# 1584 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Here, you can have this, too!$"
# 1585 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1586 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine::
# 1587 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 959 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1588 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM38\n"
# 1589 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "from BLAINE.$"
# 1590 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1591 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_BlainePostBattle::
# 1592 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 964 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1593 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "TM38 contains FIRE BLAST.\n"
# 1594 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Teach it to FIRE-type POKéMON.\p"
# 1595 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "VULPIX or CHARMELEON would be\n"
# 1596 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "ideal for that move.$"
# 1597 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1598 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_MakeSpaceForThis::
# 1599 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 971 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1600 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Make space for this, child!$"
# 1601 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1602 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_ErikIntro::
# 1603 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 975 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1604 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Do you know how hot POKéMON fire\n"
# 1605 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "breath can get?$"
# 1606 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1607 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_ErikDefeat::
# 1608 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 980 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1609 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Yow!\n"
# 1610 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Hot, hot, hot!$"
# 1611 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1612 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_ErikPostBattle::
# 1613 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 985 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1614 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Fire, or to be more precise,\n"
# 1615 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "combustion…\p"
# 1616 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "…Oxygen in the air…\n"
# 1617 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Blah, blah, blah, blah…$"
# 1618 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1619 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_QuinnIntro::
# 1620 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 992 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1621 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I was a thief, but I went straight\n"
# 1622 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "as a TRAINER.$"
# 1623 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1624 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_QuinnDefeat::
# 1625 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 997 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1626 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I surrender!$"
# 1627 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1628 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_QuinnPostBattle::
# 1629 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1001 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1630 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I get this uncontrollable urge to\n"
# 1631 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "steal other people's POKéMON.$"
# 1632 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1633 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_AveryIntro::
# 1634 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1006 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1635 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I've studied POKéMON thoroughly.\n"
# 1636 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "You can't win!$"
# 1637 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1638 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_AveryDefeat::
# 1639 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1011 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1640 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Waah!\n"
# 1641 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "My studies were insufficient!$"
# 1642 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1643 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_AveryPostBattle::
# 1644 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1016 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1645 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "My theories are too complicated\n"
# 1646 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "for you to understand.$"
# 1647 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1648 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_RamonIntro::
# 1649 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1021 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1650 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I like using FIRE-type POKéMON.\n"
# 1651 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I just do.$"
# 1652 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1653 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_RamonDefeat::
# 1654 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1026 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1655 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Too hot to handle!$"
# 1656 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1657 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_RamonPostBattle::
# 1658 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1030 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1659 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I wish there were a thief POKéMON.\n"
# 1660 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I'd use that!$"
# 1661 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1662 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_DerekIntro::
# 1663 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1035 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1664 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I know why BLAINE became a\n"
# 1665 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "TRAINER.$"
# 1666 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1667 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_DerekDefeat::
# 1668 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1040 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1669 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Ow!$"
# 1670 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1671 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_DerekPostBattle::
# 1672 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1044 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1673 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Our LEADER, BLAINE, became lost\n"
# 1674 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "in the mountains but good.\p"
# 1675 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Night fell when a fiery bird\n"
# 1676 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POKéMON appeared.\p"
# 1677 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Its light allowed BLAINE to find\n"
# 1678 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "his way down safely.$"
# 1679 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1680 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_DustyIntro::
# 1681 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1053 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1682 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I've been to many GYMS, but this\n"
# 1683 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "one best suits my style.$"
# 1684 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1685 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_DustyDefeat::
# 1686 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1058 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1687 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Yowza!\n"
# 1688 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Too hot!$"
# 1689 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1690 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_DustyPostBattle::
# 1691 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1063 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1692 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "PONYTA, NINETALES…\n"
# 1693 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Those are popular FIRE POKéMON.$"
# 1694 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1695 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_ZacIntro::
# 1696 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1068 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1697 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Fire is weak against H2O.$"
# 1698 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1699 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_ZacDefeat::
# 1700 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1072 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1701 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 1702 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Snuffed out!$"
# 1703 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1704 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_ZacPostBattle::
# 1705 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1077 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1706 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Water beats fire, of course.\p"
# 1707 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "But fire melts ice, so the FIRE\n"
# 1708 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "type beats ICE-type POKéMON.$"
# 1709 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1710 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_GymGuyAdvice::
# 1711 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1083 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1712 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 1713 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 1714 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "The hotheaded BLAINE is a FIRE\n"
# 1715 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POKéMON pro.\p"
# 1716 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Douse his spirits with water!\p"
# 1717 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "You'd better take some\n"
# 1718 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "BURN HEALS, too.$"
# 1719 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1720 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_GymGuyPostVictory::
# 1721 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1093 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1722 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
# 1723 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "You beat that firebrand!$"
# 1724 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1725 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_GymStatue::
# 1726 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1098 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1727 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "CINNABAR POKéMON GYM\n"
# 1728 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "LEADER: BLAINE\p"
# 1729 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 1730 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 1731 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1732 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_GymStatuePlayerWon::
# 1733 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1105 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1734 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "CINNABAR POKéMON GYM\n"
# 1735 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "LEADER: BLAINE\p"
# 1736 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 1737 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
# 1738 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1739 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_PokemonQuizRules::
# 1740 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1112 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1741 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POKéMON Quiz!\p"
# 1742 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Get it right, and the door opens to\n"
# 1743 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "the next room.\p"
# 1744 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Get it wrong, and face a TRAINER!\p"
# 1745 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "If you want to conserve your\n"
# 1746 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POKéMON for the GYM LEADER…\p"
# 1747 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Then get it right!\n"
# 1748 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Here we go!$"
# 1749 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1750 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_QuizQuestion1::
# 1751 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1123 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1752 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "CATERPIE evolves into METAPOD?$"
# 1753 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1754 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_QuizQuestion2::
# 1755 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1127 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1756 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "There are nine certified POKéMON\n"
# 1757 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "LEAGUE BADGES?$"
# 1758 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1759 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_QuizQuestion3::
# 1760 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1132 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1761 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POLIWAG evolves three times?$"
# 1762 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1763 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_QuizQuestion4::
# 1764 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1136 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1765 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Are electric moves effective\n"
# 1766 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "against GROUND-type POKéMON?$"
# 1767 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1768 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_QuizQuestion5::
# 1769 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1141 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1770 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POKéMON of the same kind and level\n"
# 1771 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "are not identical?$"
# 1772 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1773 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_QuizQuestion6::
# 1774 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1146 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1775 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "TM28 contains TOMBSTONY?$"
# 1776 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1777 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_CorrectGoOnThrough::
# 1778 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1150 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1779 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "You're absolutely correct!\p"
# 1780 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Go on through!$"
# 1781 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"

# 1782 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_SorryBadCall::
# 1783 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1155 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
# 1784 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Sorry!\n"
# 1785 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Bad call!$"
