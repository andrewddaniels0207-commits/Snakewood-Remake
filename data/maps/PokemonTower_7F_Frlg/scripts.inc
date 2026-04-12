# 1 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 2 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Frlg_MapScripts::
# 3 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 5 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 6 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_MrFuji::
# 7 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 4 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 8 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	lock
# 9 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 5 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 10 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 6 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 12 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 13 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 7 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 14 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	setflag FLAG_HIDE_TOWER_FUJI
# 15 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 8 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 16 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_POKEHOUSE_FUJI
# 17 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 9 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 18 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	setflag FLAG_RESCUED_MR_FUJI
# 19 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 10 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 20 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_MrFujiThankYouFollowMe
# 21 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 11 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 22 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	closemessage
# 23 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 12 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 24 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	warp MAP_LAVENDER_TOWN_VOLUNTEER_POKEMON_HOUSE, 4, 7
# 25 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 13 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 26 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitstate
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 14 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	release
# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 30 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 31 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 32 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_Grunt1::
# 33 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 19 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 34 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_19, PokemonTower_7F_Text_Grunt1Intro, PokemonTower_7F_Text_Grunt1Defeat, PokemonTower_7F_EventScript_DefeatedGrunt1
# 35 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 20 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 36 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 38 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 39 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 40 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1::
# 41 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 25 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 42 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt1PostBattle
# 43 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 26 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 44 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	closemessage
# 45 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 46 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 47 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 48 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	compare VAR_0x8004, 10
# 49 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_7F_EventScript_DefeatedGrunt1_2
# 50 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1_1:
# 51 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 31 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 52 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	compare VAR_0x8004, 11
# 53 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_7F_EventScript_DefeatedGrunt1_5
# 54 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1_4:
# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 34 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 56 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	compare VAR_0x8004, 9
# 57 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_7F_EventScript_DefeatedGrunt1_8
# 58 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1_7:
# 59 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 37 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 60 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1Exit
# 61 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 38 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 62 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 63 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 39 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 64 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
# 65 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 66 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 67 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1_2:
# 68 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 69 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_Grunt1ExitMid
# 70 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_DefeatedGrunt1_1
# 71 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 72 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1_5:
# 73 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 32 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_Grunt1ExitRight
# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_DefeatedGrunt1_4
# 76 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 77 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1_8:
# 78 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 35 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 79 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_Grunt1ExitLeft
# 80 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_DefeatedGrunt1_7
# 81 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 82 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 83 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_Grunt1ExitMid::
# 84 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 44 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 85 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitMid
# 86 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 45 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 87 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 88 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 46 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 89 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
# 90 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 91 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 92 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 93 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_Grunt1ExitRight::
# 94 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 51 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 95 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitRight
# 96 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 52 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 97 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 98 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 53 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 99 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
# 100 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 101 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 102 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 103 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_Grunt1ExitLeft::
# 104 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 58 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 105 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitLeft
# 106 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 59 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 107 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 108 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 60 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 109 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	playse SE_EXIT
# 110 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 61 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 111 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	delay 25
# 112 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 62 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 113 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
# 114 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 115 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 116 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 117 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_RemoveGrunt1::
# 118 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 67 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 119 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT1
# 120 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 68 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 121 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	release
# 122 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 123 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 124 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 125 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 72 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 126 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Movement_Grunt1ExitMid:
# 127 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 73 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 128 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 130 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 131 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 132 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 133 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 76 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 134 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 135 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 77 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 136 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 137 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 78 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 138 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 139 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 79 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 140 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 141 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 80 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 142 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 143 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 81 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 144 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	step_end
# 145 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 146 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 84 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 147 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Movement_Grunt1ExitRight:
# 148 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 85 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 149 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 150 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 86 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 151 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 152 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 87 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 153 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 154 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 88 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 155 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 156 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 89 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 157 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 158 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 90 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 159 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 160 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 91 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 161 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 162 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 92 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 163 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	step_end
# 164 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 165 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 95 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 166 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Movement_Grunt1Exit:
# 167 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 96 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 168 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 169 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 97 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 170 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 171 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 98 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 172 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 173 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 99 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 174 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 175 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 100 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 176 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 177 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 101 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 178 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 179 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 102 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 180 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	step_end
# 181 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 182 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 105 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 183 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Movement_Grunt1ExitLeft:
# 184 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 106 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 185 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 186 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 107 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 187 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 188 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 108 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 189 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 190 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 109 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 191 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 192 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 110 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 193 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 194 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 111 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 195 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 196 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 112 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 197 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 198 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 113 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 199 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 200 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 114 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 201 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_in_place_faster_left
# 202 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 115 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 203 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	step_end
# 204 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 205 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_Grunt2::
# 206 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 119 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 207 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_20, PokemonTower_7F_Text_Grunt2Intro, PokemonTower_7F_Text_Grunt2Defeat, PokemonTower_7F_EventScript_DefeatedGrunt2
# 208 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 120 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 209 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 211 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 212 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 213 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt2::
# 214 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 125 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 215 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 1
# 216 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 126 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 217 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt2PostBattle
# 218 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 127 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 219 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	closemessage
# 220 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 128 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 221 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 222 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 129 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 223 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	compare VAR_0x8004, 12
# 224 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_7F_EventScript_DefeatedGrunt2_2
# 225 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt2_1:
# 226 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 132 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 227 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	compare VAR_0x8004, 13
# 228 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_7F_EventScript_DefeatedGrunt2_5
# 229 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt2_4:
# 230 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 135 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 231 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2Exit
# 232 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 136 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 233 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 234 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 137 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 235 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt2
# 236 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 237 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 238 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt2_2:
# 239 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 130 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 240 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_Grunt2ExitLeft
# 241 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_DefeatedGrunt2_1
# 242 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 243 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt2_5:
# 244 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 133 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 245 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_Grunt2ExitRight
# 246 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_DefeatedGrunt2_4
# 247 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 248 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 249 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_Grunt2ExitLeft::
# 250 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 142 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 251 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2ExitLeft
# 252 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 143 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 253 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 254 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 144 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 255 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt2
# 256 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 257 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 258 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 259 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_Grunt2ExitRight::
# 260 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 149 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 261 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2ExitRight
# 262 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 150 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 263 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 264 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 151 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 265 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt2
# 266 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 267 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 268 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 269 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_RemoveGrunt2::
# 270 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 156 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 271 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT2
# 272 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 157 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 273 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	release
# 274 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 275 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 276 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 277 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 161 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 278 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Movement_Grunt2ExitLeft:
# 279 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 162 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 280 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 281 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 163 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 282 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 283 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 164 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 284 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 285 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 165 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 286 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_left
# 287 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 166 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 288 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 289 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 167 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 290 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 291 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 168 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 292 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 293 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 169 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 294 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	step_end
# 295 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 296 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 172 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 297 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Movement_Grunt2Exit:
# 298 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 173 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 299 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 300 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 174 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 301 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 302 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 175 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 303 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 304 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 176 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 305 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 306 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 177 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 307 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 308 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 178 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 309 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 310 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 179 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 311 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	step_end
# 312 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 313 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 182 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 314 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Movement_Grunt2ExitRight:
# 315 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 183 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 316 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_left
# 317 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 184 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 318 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 319 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 185 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 320 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 321 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 186 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 322 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 323 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 187 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 324 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 325 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 188 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 326 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 327 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 189 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 328 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 329 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 190 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 330 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 331 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 191 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 332 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	step_end
# 333 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 334 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_Grunt3::
# 335 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 195 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 336 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_21, PokemonTower_7F_Text_Grunt3Intro, PokemonTower_7F_Text_Grunt3Defeat, PokemonTower_7F_EventScript_DefeatedGrunt3
# 337 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 196 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 338 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 339 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 340 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 341 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 342 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt3::
# 343 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 201 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 344 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt3PostBattle
# 345 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 202 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 346 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	closemessage
# 347 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 203 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 348 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 349 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 204 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 350 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	compare VAR_0x8004, 10
# 351 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_7F_EventScript_DefeatedGrunt3_2
# 352 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt3_1:
# 353 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 207 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 354 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	compare VAR_0x8004, 9
# 355 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_7F_EventScript_DefeatedGrunt3_5
# 356 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt3_4:
# 357 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 210 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 358 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3Exit
# 359 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 211 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 360 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 361 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 212 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 362 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt3
# 363 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 364 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 365 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt3_2:
# 366 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 205 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 367 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_Grunt3ExitRight
# 368 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_DefeatedGrunt3_1
# 369 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 370 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt3_5:
# 371 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 208 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 372 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_Grunt3ExitLeft
# 373 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_DefeatedGrunt3_4
# 374 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 375 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 376 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_Grunt3ExitRight::
# 377 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 217 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 378 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3ExitRight
# 379 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 218 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 380 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 381 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 219 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 382 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt3
# 383 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 384 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 385 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 386 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_Grunt3ExitLeft::
# 387 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 224 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 388 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3ExitLeft
# 389 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 225 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 390 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 391 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 226 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 392 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt3
# 393 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 394 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 395 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 396 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_RemoveGrunt3::
# 397 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 231 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 398 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT3
# 399 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 232 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 400 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	release
# 401 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 402 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 403 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 404 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_Unused::
# 405 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 237 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 406 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	release
# 407 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	end
# 408 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 409 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 410 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 241 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 411 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Movement_Grunt3ExitRight:
# 412 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 242 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 413 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 414 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 243 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 415 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 416 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 244 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 417 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 418 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 245 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 419 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 420 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 246 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 421 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 422 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 247 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 423 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 424 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 248 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 425 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 426 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 249 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 427 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	step_end
# 428 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 429 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 252 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 430 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Movement_Grunt3Exit:
# 431 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 253 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 432 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 433 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 254 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 434 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 435 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 255 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 436 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 437 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 256 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 438 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 439 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 257 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 440 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 441 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 258 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 442 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 443 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 259 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 444 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	step_end
# 445 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 446 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 262 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 447 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Movement_Grunt3ExitLeft:
# 448 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 263 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 449 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 450 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 264 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 451 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 452 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 265 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 453 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 454 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 266 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 455 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 456 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 267 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 457 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 458 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 268 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 459 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 460 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 269 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 461 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 462 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 270 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 463 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 464 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 271 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 465 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	step_end
# 466 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 467 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Text_Grunt1Intro::
# 468 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 274 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 469 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "What do you want?\n"
# 470 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "Why are you here?$"
# 471 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 472 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Text_Grunt1Defeat::
# 473 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 279 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 474 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "I give up!$"
# 475 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 476 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Text_Grunt1PostBattle::
# 477 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 283 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 478 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "I'm not going to forget this!$"
# 479 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 480 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Text_Grunt2Intro::
# 481 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 287 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 482 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "This old guy marched right up to\n"
# 483 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "our HIDEOUT.\p"
# 484 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "Then, he starts ranting about how\n"
# 485 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "TEAM ROCKET's abusing POKéMON.\p"
# 486 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "So, we're just talking it over as\n"
# 487 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "adults.$"
# 488 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 489 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Text_Grunt2Defeat::
# 490 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 296 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 491 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "Please!\n"
# 492 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "No more!$"
# 493 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 494 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Text_Grunt2PostBattle::
# 495 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 301 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 496 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "POKéMON are only good for making\n"
# 497 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "money. Why not use them?\p"
# 498 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "You stay out of our business!$"
# 499 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 500 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Text_Grunt3Intro::
# 501 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 307 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 502 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "You're not saving anyone, kid!$"
# 503 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 504 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Text_Grunt3Defeat::
# 505 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 311 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 506 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "Don't fight us ROCKETS!$"
# 507 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 508 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Text_Grunt3PostBattle::
# 509 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 315 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 510 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "You're not getting away with this!$"
# 511 "data/maps/PokemonTower_7F_Frlg/scripts.pory"

# 512 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_Text_MrFujiThankYouFollowMe::
# 513 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 319 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
# 514 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "MR. FUJI: Heh?\n"
# 515 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "You came to save me?\p"
# 516 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "Thank you. But, I came here of my\n"
# 517 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "own free will.\p"
# 518 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "I came to calm the spirit of\n"
# 519 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "CUBONE's mother.\p"
# 520 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "I think MAROWAK's spirit has\n"
# 521 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "finally left us.\p"
# 522 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "I must thank you for your kind\n"
# 523 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "concern.\p"
# 524 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "Follow me to my home, POKéMON\n"
# 525 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "HOUSE, at the foot of this tower.$"
