# 1 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY
# 13 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 8 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_SCOTT_IN_EVERGRANDE, EverGrandeCity_PokemonCenter_1F_OnTransition_2
# 15 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_OnTransition_1:
# 16 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 17 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_OnTransition_2:
# 19 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 9 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott
# 21 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto EverGrandeCity_PokemonCenter_1F_OnTransition_1
# 22 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott::
# 25 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott_2
# 27 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott_1:
# 28 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 18 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 29 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 30 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 31 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott_2:
# 33 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto Common_EventScript_NopReturn
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott_1
# 36 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Nurse::
# 39 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 23 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_EVER_GRANDE_NURSE
# 41 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 42 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 43 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 25 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 44 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 45 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 47 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 27 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 48 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 49 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 50 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Woman::
# 53 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 54 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad, MSGBOX_NPC
# 55 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 56 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM::
# 59 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 60 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon, MSGBOX_NPC
# 61 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 62 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 63 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott::
# 65 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 42 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 66 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock
# 67 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 43 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 68 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 69 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 44 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 70 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou, MSGBOX_DEFAULT
# 71 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 45 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 72 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 73 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 74 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 75 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq EverGrandeCity_PokemonCenter_1F_EventScript_Scott_2
# 76 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott_1:
# 77 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 49 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 78 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 79 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq EverGrandeCity_PokemonCenter_1F_EventScript_Scott_5
# 80 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott_4:
# 81 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 52 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 82 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 83 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq EverGrandeCity_PokemonCenter_1F_EventScript_Scott_8
# 84 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott_7:
# 85 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 55 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 86 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 87 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 56 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 88 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 89 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 57 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 90 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 91 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 58 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 92 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitse
# 93 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 59 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 94 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_EVER_GRANDE_SCOTT
# 95 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 60 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 96 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 97 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 98 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 99 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott_2:
# 100 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 47 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 101 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth
# 102 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto EverGrandeCity_PokemonCenter_1F_EventScript_Scott_1
# 103 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 104 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott_5:
# 105 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 106 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 107 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto EverGrandeCity_PokemonCenter_1F_EventScript_Scott_4
# 108 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 109 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott_8:
# 110 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 53 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 111 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 112 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto EverGrandeCity_PokemonCenter_1F_EventScript_Scott_7
# 113 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 114 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 115 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth::
# 116 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 65 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 117 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EVER_GRANDE_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth
# 118 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 66 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 121 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 122 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 123 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit::
# 124 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 71 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 125 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EVER_GRANDE_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExit
# 126 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 72 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 127 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 128 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 129 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 130 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 131 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 76 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 132 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth:
# 133 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 77 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 134 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 135 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 78 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 136 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 137 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 79 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 138 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 139 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 80 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 140 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 141 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 81 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 142 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 143 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 82 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 144 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 145 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 83 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 146 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 147 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 148 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 86 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 149 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExit:
# 150 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 87 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 151 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 152 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 88 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 153 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 154 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 89 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 155 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 156 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 90 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 157 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 158 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 91 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 159 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 160 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 92 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 161 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 162 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 93 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 163 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 164 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 165 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad::
# 166 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 96 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 167 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON LEAGUE is only a short\n"
# 168 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "distance after the VICTORY ROAD.\p"
# 169 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "If you've come this far, what choice\n"
# 170 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "do you have but to keep going?$"
# 171 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 172 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon::
# 173 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 103 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 174 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The long and harrowing VICTORY ROAD…\p"
# 175 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "It's like reliving the path one has\n"
# 176 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "traveled in life…\p"
# 177 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Believe in your POKéMON and give it\n"
# 178 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "your very best!$"
# 179 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 180 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou::
# 181 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 111 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
# 182 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "SCOTT: {PLAYER}{KUN}, you've clawed your\n"
# 183 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "way up to face the POKéMON LEAGUE!\p"
# 184 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'm happy for you!\n"
# 185 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "You made my cheering worthwhile!\p"
# 186 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER}{KUN}, if you were to become\n"
# 187 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "the POKéMON LEAGUE CHAMPION…\p"
# 188 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'll get in touch with you then.\p"
# 189 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Okay, {PLAYER}{KUN}.\n"
# 190 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Go for greatness!$"
