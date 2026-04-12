# 1 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 2 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Frlg_MapScripts::
# 3 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 5 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 6 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Channeler::
# 7 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 4 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 8 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	msgbox PokemonTower_2F_Text_SilphScopeCouldUnmaskGhosts, MSGBOX_NPC
# 9 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	end
# 10 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 11 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 12 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalTriggerRight::
# 13 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 9 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 14 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	lockall
# 15 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 10 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 16 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 17 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 11 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 18 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival
# 19 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	end
# 20 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 21 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 22 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalTriggerDown::
# 23 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 16 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 24 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	lockall
# 25 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 17 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 26 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 18 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 28 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival
# 29 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	end
# 30 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 31 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 32 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival::
# 33 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 23 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 34 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 35 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 24 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 36 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 37 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 25 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 38 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 39 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_2F_EventScript_Rival_2
# 40 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_1:
# 41 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 28 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 42 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 43 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_2F_EventScript_Rival_5
# 44 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_4:
# 45 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 31 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 46 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_ExclamationMark
# 47 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 32 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 48 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 33 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_Delay48
# 51 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 34 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 52 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 53 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 35 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 54 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	msgbox PokemonTower_2F_Text_RivalIntro
# 55 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 36 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 56 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_POKEMON_TOWER_RIVAL
# 57 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 37 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 58 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
# 59 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_2F_EventScript_Rival_8
# 60 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_7:
# 61 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 40 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 62 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
# 63 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_2F_EventScript_Rival_11
# 64 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_10:
# 65 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 43 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 66 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
# 67 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_2F_EventScript_Rival_14
# 68 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_13:
# 69 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 46 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 70 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	msgbox PokemonTower_2F_Text_RivalPostBattle
# 71 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 47 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 72 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	closemessage
# 73 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 48 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 74 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 75 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 76 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 77 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_2F_EventScript_Rival_17
# 78 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_16:
# 79 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 52 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 80 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 81 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_2F_EventScript_Rival_20
# 82 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_19:
# 83 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 55 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 84 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	playse SE_EXIT
# 85 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 56 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 86 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	delay 25
# 87 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 57 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 88 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 58 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 90 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_RIVAL
# 91 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 59 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 92 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_TOWER_2F, 1
# 93 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 60 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 94 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	releaseall
# 95 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	end
# 96 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 97 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_2:
# 98 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 26 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 99 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call PokemonTower_2F_EventScript_RivalFacePlayerRight
# 100 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival_1
# 101 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 102 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_5:
# 103 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 29 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 104 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call PokemonTower_2F_EventScript_RivalFacePlayerDown
# 105 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival_4
# 106 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 107 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_8:
# 108 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 38 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 109 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call PokemonTower_2F_EventScript_RivalSquirtle
# 110 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival_7
# 111 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 112 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_11:
# 113 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 41 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 114 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call PokemonTower_2F_EventScript_RivalBulbasaur
# 115 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival_10
# 116 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 117 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_14:
# 118 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 44 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 119 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call PokemonTower_2F_EventScript_RivalCharmander
# 120 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival_13
# 121 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 122 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_17:
# 123 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 124 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call PokemonTower_2F_EventScript_RivalExitRight
# 125 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival_16
# 126 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 127 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_20:
# 128 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 53 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 129 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call PokemonTower_2F_EventScript_RivalExitDown
# 130 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival_19
# 131 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 132 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 133 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalFacePlayerRight::
# 134 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 65 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 135 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 136 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 66 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 137 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 138 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 67 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 139 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 140 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 141 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 142 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 143 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalFacePlayerDown::
# 144 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 72 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 145 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 146 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 73 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 147 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 148 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 74 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 149 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 150 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 151 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 152 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 153 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalSquirtle::
# 154 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 79 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 155 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_SQUIRTLE, PokemonTower_2F_Text_RivalDefeat
# 156 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 157 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 158 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 159 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalBulbasaur::
# 160 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 84 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 161 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_BULBASAUR, PokemonTower_2F_Text_RivalDefeat
# 162 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 163 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 164 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 165 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalCharmander::
# 166 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 89 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 167 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_CHARMANDER, PokemonTower_2F_Text_RivalDefeat
# 168 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 169 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 170 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 171 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalExitRight::
# 172 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 94 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 173 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, PokemonTower_2F_Movement_RivalExitRight
# 174 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 95 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 175 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 176 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 177 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 178 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 179 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalExitDown::
# 180 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 100 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 181 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, PokemonTower_2F_Movement_RivalExitDown
# 182 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 101 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 183 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 184 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 185 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 186 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 187 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 105 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 188 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Movement_RivalExitRight:
# 189 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 106 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 190 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 191 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 107 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 192 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 193 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 108 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 194 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 195 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 109 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 196 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 197 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 110 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 198 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 199 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 111 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 200 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 201 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 112 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 202 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 203 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 113 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 204 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 205 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 114 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 206 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	step_end
# 207 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 208 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 117 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 209 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Movement_RivalExitDown:
# 210 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 118 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 211 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 212 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 119 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 213 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 214 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 120 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 215 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 216 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 121 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 217 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 218 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 122 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 219 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 220 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 123 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 221 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 222 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 124 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 223 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 224 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 125 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 225 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 226 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 126 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 227 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	step_end
# 228 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 229 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Text_RivalIntro::
# 230 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 129 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 231 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\n"
# 232 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "What brings you here?\l"
# 233 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Is your POKéMON dead?\p"
# 234 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Hey! It's alive!\p"
# 235 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I can at least make them faint!\n"
# 236 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Let's go!$"
# 237 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 238 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Text_RivalDefeat::
# 239 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 138 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 240 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "What?\n"
# 241 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "You stinker!\p"
# 242 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I took it easy on you, too!$"
# 243 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 244 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Text_RivalPostBattle::
# 245 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 144 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 246 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "How's your POKéDEX coming?\n"
# 247 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I just caught a CUBONE!\p"
# 248 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I can't find the bigger MAROWAK.\n"
# 249 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Where could they be?\p"
# 250 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I bet there aren't any left!\p"
# 251 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Well, I better get going.\n"
# 252 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I've got a lot to accomplish,\l"
# 253 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "unlike you.\p"
# 254 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Smell ya later!$"
# 255 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 256 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Text_SilphScopeCouldUnmaskGhosts::
# 257 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 156 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
# 258 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Even we could not identify the\n"
# 259 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "wayward ghosts.\p"
# 260 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "A SILPH SCOPE might be able to\n"
# 261 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "unmask them.$"
