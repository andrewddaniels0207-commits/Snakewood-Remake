# 1 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 2 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Frlg_MapScripts::
# 3 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 2 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 4 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Exterior_OnTransition
# 5 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 3 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 6 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MtEmber_Exterior_OnLoad
# 7 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 9 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 10 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_OnTransition::
# 11 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 7 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 12 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
# 13 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 8 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 14 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
# 15 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_eq MtEmber_Exterior_OnTransition_2
# 16 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_OnTransition_1:
# 17 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 18 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 19 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_OnTransition_2:
# 20 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 9 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 21 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	call MtEmber_Exterior_EventScript_RocketsFaceDown
# 22 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto MtEmber_Exterior_OnTransition_1
# 23 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 24 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 25 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_RocketsFaceDown::
# 26 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 15 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 27 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT1, MOVEMENT_TYPE_FACE_DOWN
# 28 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 16 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 29 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT2, MOVEMENT_TYPE_FACE_DOWN
# 30 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	return
# 31 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 32 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 33 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_OnLoad::
# 34 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 21 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 35 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 36 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_ge MtEmber_Exterior_OnLoad_2
# 37 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_OnLoad_1:
# 38 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 39 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 40 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_OnLoad_2:
# 41 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 22 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 42 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	call MtEmber_Exterior_EventScript_OpenCave
# 43 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto MtEmber_Exterior_OnLoad_1
# 44 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 45 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 46 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_OpenCave::
# 47 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 28 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 48 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setmetatile 42, 39, METATILE_MtEmber_CaveEntrance, 0
# 49 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	return
# 50 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 51 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 52 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Grunt1::
# 53 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 33 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 54 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lock
# 55 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 34 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 56 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_Grunt1Defeated
# 57 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 35 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 58 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 59 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_eq MtEmber_Exterior_EventScript_Grunt1_2
# 60 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Grunt1_1:
# 61 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 38 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 62 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellTryDiggingHere
# 63 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 39 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 64 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 65 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 66 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 67 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Grunt1_2:
# 68 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 36 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 69 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto MtEmber_Exterior_EventScript_BattleGrunt1
# 70 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto MtEmber_Exterior_EventScript_Grunt1_1
# 71 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 72 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 73 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Grunt1Defeated::
# 74 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 44 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 75 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 76 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 45 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 77 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 78 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 79 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 80 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 81 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_BattleGrunt1::
# 82 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 50 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 83 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_FacePlayer
# 84 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 51 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 85 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 86 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 52 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 87 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 88 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 53 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 89 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1Intro
# 90 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 54 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 91 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_Text_Grunt1Defeat
# 92 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 55 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 93 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 94 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 56 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 95 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 96 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 57 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 97 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 98 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 99 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 100 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 101 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_DefeatedBothGrunts::
# 102 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 62 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 103 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellRegroupDontStepInsideThere
# 104 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 63 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 105 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	closemessage
# 106 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 64 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 107 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 108 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 65 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 109 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT1
# 110 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 66 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 111 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT2
# 112 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 67 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 113 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 114 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 68 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 115 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 116 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 117 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 118 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 119 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Grunt2::
# 120 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 73 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 121 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lock
# 122 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 74 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 123 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	faceplayer
# 124 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 75 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 125 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedGrunt2
# 126 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 76 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 127 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 128 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_eq MtEmber_Exterior_EventScript_Grunt2_2
# 129 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Grunt2_1:
# 130 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 79 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 131 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_YoureInTheWayGetLost
# 132 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 80 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 133 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	closemessage
# 134 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 81 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 135 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_FaceOriginalDirection
# 136 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 82 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 137 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 138 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 83 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 139 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 140 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 141 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 142 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Grunt2_2:
# 143 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 77 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 144 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto MtEmber_Exterior_EventScript_BattleGrunt2
# 145 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto MtEmber_Exterior_EventScript_Grunt2_1
# 146 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 147 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 148 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_DefeatedGrunt2::
# 149 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 88 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 150 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 151 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 89 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 152 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 153 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 154 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 155 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 156 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_BattleGrunt2::
# 157 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 94 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 158 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 159 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 95 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 160 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2Intro
# 161 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 96 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 162 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_Text_Grunt2Defeat
# 163 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 97 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 164 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 165 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 98 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 166 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 167 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 99 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 168 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 169 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 170 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 171 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 172 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_RocketPasswordScene::
# 173 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 104 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 174 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lockall
# 175 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 105 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 176 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 177 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 106 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 178 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_PunchedThroughAtLast
# 179 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 107 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 180 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	message MtEmber_Exterior_Text_WhatsPasswordAgain
# 181 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 108 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 182 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmessage
# 183 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 109 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 184 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playse SE_PIN
# 185 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 110 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 186 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_QuestionMark
# 187 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 111 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 188 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 189 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 112 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 190 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitbuttonpress
# 191 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 113 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 192 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_FirstPasswordGoldeen
# 193 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 114 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 194 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_WalkInPlaceFasterDown
# 195 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 115 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 196 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 197 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 116 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 198 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playse SE_PIN
# 199 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 117 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 200 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_ExclamationMark
# 201 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 118 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 202 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 203 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 119 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 204 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_Delay48
# 205 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 120 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 206 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 207 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 121 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 208 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_WalkInPlaceFasterDown
# 209 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 122 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 210 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 211 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 123 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 212 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	call MtEmber_Exterior_EventScript_RocketsFaceDown
# 213 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 124 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 214 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_SnoopsBeenListeningIn
# 215 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 125 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 216 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
# 217 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 126 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 218 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	releaseall
# 219 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 220 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 221 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 222 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Logan::
# 223 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 131 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 224 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
# 225 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 132 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 226 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 228 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 229 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 230 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Beth::
# 231 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 137 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 232 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_BETH, MtEmber_Exterior_Text_BethIntro, MtEmber_Exterior_Text_BethDefeat
# 233 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 138 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 234 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 236 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 237 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 238 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Jocelyn::
# 239 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 143 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 240 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_JOCELYN, MtEmber_Exterior_Text_JocelynIntro, MtEmber_Exterior_Text_JocelynDefeat
# 241 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 144 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 242 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 243 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 244 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 245 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 246 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
Text_ExplosionTeach::
# 247 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 148 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 248 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Can you imagine?\n"
# 249 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "If this volcano were to erupt?\p"
# 250 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "The explosion would be the end of\n"
# 251 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "us. How terrifying is that?\p"
# 252 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "While we're terrified, would you\n"
# 253 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "like me to teach EXPLOSION?$"
# 254 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 255 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
Text_ExplosionDeclined::
# 256 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 157 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 257 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Yeah, you're right.\n"
# 258 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "It is too terrifying.$"
# 259 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 260 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
Text_ExplosionWhichMon::
# 261 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 162 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 262 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You're terribly brave!\p"
# 263 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Which POKéMON should I teach\n"
# 264 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "EXPLOSION?$"
# 265 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 266 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
Text_ExplosionTaught::
# 267 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 168 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 268 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Using EXPLOSION while on this\n"
# 269 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "volcano…\p"
# 270 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What a terrifying thrill!$"
# 271 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 272 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_WellTryDiggingHere::
# 273 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 174 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 274 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Over here.\n"
# 275 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "We'll try digging here.\p"
# 276 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "That treasure the ADMINS've been\n"
# 277 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "talking about should be here.$"
# 278 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 279 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_YoureInTheWayGetLost::
# 280 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 181 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 281 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What the…?\n"
# 282 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You're in the way. Get lost.$"
# 283 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 284 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_PunchedThroughAtLast::
# 285 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 186 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 286 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Whew, punched through at last.\n"
# 287 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Let's go treasure hunting!$"
# 288 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 289 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_WhatsPasswordAgain::
# 290 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 191 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 291 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Any treasure we find, we haul back\n"
# 292 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "to the WAREHOUSE, understood?\p"
# 293 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "…Oh, and what're the passwords?\n"
# 294 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "At the ROCKET WAREHOUSE, I mean.$"
# 295 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 296 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_FirstPasswordGoldeen::
# 297 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 198 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 298 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What, you forgot the password?\n"
# 299 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "There're actually two.\p"
# 300 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "The first one's “GOLDEEN need\n"
# 301 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "log.”\p"
# 302 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "And the second one is…$"
# 303 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 304 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_SnoopsBeenListeningIn::
# 305 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 206 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 306 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Hey!\n"
# 307 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "This snoop's been listening in!$"
# 308 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 309 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt1Intro::
# 310 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 211 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 311 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You've been eavesdropping on us,\n"
# 312 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "haven't you?$"
# 313 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 314 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt1Defeat::
# 315 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 216 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 316 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Huh, what?$"
# 317 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 318 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt1PostBattle::
# 319 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 220 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 320 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Why'd you have to win?$"
# 321 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 322 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt2Intro::
# 323 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 224 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 324 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Trying to horn in on our treasure?\n"
# 325 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Don't bet on it!$"
# 326 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 327 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt2Defeat::
# 328 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 229 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 329 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Wait!\n"
# 330 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "But how?$"
# 331 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 332 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt2PostBattle::
# 333 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 234 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 334 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Develop amnesia conveniently and\n"
# 335 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "forget everything you heard!$"
# 336 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 337 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_WellRegroupDontStepInsideThere::
# 338 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 239 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 339 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What a setback…\n"
# 340 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "We'll have to regroup.\p"
# 341 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You! Don't even think about taking\n"
# 342 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "a step inside here!\p"
# 343 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "If you know what's good for you,\n"
# 344 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "don't even think about this!$"
# 345 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 346 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_LoganIntro::
# 347 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 248 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 348 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "An active volcano is one that's\n"
# 349 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "erupting, or about to.$"
# 350 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 351 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_LoganDefeat::
# 352 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 253 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 353 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Whew… That was hot!\n"
# 354 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Sweat's erupting from me!$"
# 355 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 356 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_LoganPostBattle::
# 357 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 258 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 358 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "They say there're over 1,500\n"
# 359 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "active volcanoes in the world.\p"
# 360 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Just thinking about them makes me\n"
# 361 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "feel all hot and gooey inside!$"
# 362 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 363 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_BethIntro::
# 364 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 265 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 365 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Do you know how caves form inside\n"
# 366 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "volcanoes?$"
# 367 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 368 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_BethDefeat::
# 369 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 270 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 370 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Atchah!\n"
# 371 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You're shockingly good!$"
# 372 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 373 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_BethPostBattle::
# 374 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 275 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 375 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "When lava at the surface of magma\n"
# 376 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "hardens, and the magma inside flows\l"
# 377 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "out, caverns are left behind.$"
# 378 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 379 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_JocelynIntro::
# 380 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 281 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 381 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "I've been in training so I can mend\n"
# 382 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "my broken heart…\p"
# 383 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "It toughened me up physically at\n"
# 384 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "least! Hi-yah!$"
# 385 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 386 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_JocelynDefeat::
# 387 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 288 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 388 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "I think I tried to overdo it…$"
# 389 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 390 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_JocelynPostBattle::
# 391 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 292 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
# 392 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "The way you battle, it reminds me\n"
# 393 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "of the guy who dumped me…$"
