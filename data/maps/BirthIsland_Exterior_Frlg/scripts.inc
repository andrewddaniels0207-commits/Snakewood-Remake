# 1 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 2 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_MapScripts::
# 3 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 2 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 4 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BirthIsland_Exterior_Frlg_OnTransition
# 5 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 3 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 6 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BirthIsland_Exterior_Frlg_OnResume
# 7 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 4 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 8 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BirthIsland_Exterior_Frlg_OnReturnToField
# 9 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	.byte 0
# 10 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 11 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 12 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnReturnToField::
# 13 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 8 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 14 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special SetDeoxysRockPalette
# 15 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 16 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 17 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 18 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnTransition::
# 19 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 13 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 20 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_BIRTH_ISLAND_EXTERIOR
# 21 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 14 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 22 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DEOXYS_N
# 23 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 15 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 24 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_STEP_COUNTER, 0
# 25 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 16 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 26 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_NUM, 0
# 27 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 17 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 28 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_set FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_Frlg_OnTransition_2
# 29 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnTransition_1:
# 30 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 20 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 31 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_Frlg_OnTransition_5
# 32 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnTransition_4:
# 33 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 34 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 35 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnTransition_2:
# 36 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 18 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 37 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	call BirthIsland_Exterior_Frlg_EventScript_HideDeoxysAndPuzzle
# 38 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_OnTransition_1
# 39 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 40 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnTransition_5:
# 41 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 21 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 42 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	call BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle
# 43 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_OnTransition_4
# 44 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 45 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 46 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_HideDeoxysAndPuzzle::
# 47 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 27 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 48 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_HIDE_DEOXYS
# 49 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 28 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 50 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
# 51 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	return
# 52 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 54 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle::
# 55 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 33 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 56 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_set FLAG_DEOXYS_FLEW_AWAY, BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle_2
# 57 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle_1:
# 58 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 36 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 59 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
# 60 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 37 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 61 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_DEOXYS_ROCK_COMPLETE
# 62 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	return
# 63 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 64 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle_2:
# 65 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 34 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 66 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 67 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle_1
# 68 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 69 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 70 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnResume::
# 71 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 42 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 72 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BirthIsland_Exterior_Frlg_OnResume_2
# 73 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnResume_1:
# 74 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 75 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 76 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnResume_2:
# 77 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 43 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 78 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	call BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys
# 79 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_OnResume_1
# 80 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 81 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 82 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys::
# 83 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 49 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 84 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 85 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 50 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 86 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 87 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_ne BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys_2
# 88 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys_1:
# 89 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 90 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_BIRTH_ISLAND_DEOXYS
# 91 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	return
# 92 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 93 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys_2:
# 94 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 51 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 95 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 96 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys_1
# 97 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 98 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 99 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Triangle::
# 100 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 58 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 101 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	lock
# 102 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 59 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 103 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	faceplayer
# 104 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 60 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 105 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special DoDeoxysRockInteraction
# 106 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 61 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 107 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitstate
# 108 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 62 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 109 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	switch VAR_RESULT
# 110 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 63 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 111 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 0, BirthIsland_Exterior_Frlg_EventScript_Triangle_3
# 112 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 65 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 113 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 1, BirthIsland_Exterior_Frlg_EventScript_Triangle_4
# 114 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 67 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 115 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 2, BirthIsland_Exterior_Frlg_EventScript_Triangle_5
# 116 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 69 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 117 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 3, BirthIsland_Exterior_Frlg_EventScript_Triangle_6
# 118 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Triangle_1:
# 119 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 120 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 121 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Triangle_3:
# 122 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 64 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 123 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_EventScript_NotSolved1
# 124 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_Triangle_1
# 125 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 126 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Triangle_4:
# 127 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 66 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 128 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_EventScript_NotSolved2
# 129 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_Triangle_1
# 130 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 131 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Triangle_5:
# 132 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 68 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 133 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_Deoxys
# 134 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_Triangle_1
# 135 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 136 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Triangle_6:
# 137 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 70 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 138 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_EventScript_NotSolved3
# 139 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_Triangle_1
# 140 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 141 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 142 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved1::
# 143 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 76 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 144 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
# 145 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 146 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 147 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 148 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved2::
# 149 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 81 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 150 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
# 151 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 152 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 153 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 154 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved3::
# 155 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 86 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 156 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
# 157 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 158 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 159 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 160 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Deoxys::
# 161 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 91 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 162 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	addobject LOCALID_BIRTH_ISLAND_DEOXYS
# 163 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 92 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 164 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitse
# 165 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 93 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 166 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 0, LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK
# 167 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 94 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 168 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_NUM ( MAP_BIRTH_ISLAND_EXTERIOR_FRLG )
# 169 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 95 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 170 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP ( MAP_BIRTH_ISLAND_EXTERIOR_FRLG )
# 171 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 96 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 172 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	dofieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 173 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 97 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 174 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_DEOXYS, 0
# 175 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 98 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 176 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 177 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 99 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 178 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_BIRTH_ISLAND_DEOXYS, Movement_DeoxysApproach
# 179 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 100 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 180 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 181 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 101 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 182 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitse
# 183 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 102 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 184 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 185 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 103 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 186 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	delay 40
# 187 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 104 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 188 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitmoncry
# 189 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 105 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 190 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_BIRTH_ISLAND_DEOXYS
# 191 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 106 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 192 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	seteventmon SPECIES_DEOXYS, 30
# 193 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 107 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 194 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 195 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 108 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 196 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 197 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 109 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 198 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitstate
# 199 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 110 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 200 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 201 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 111 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 202 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 203 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 112 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 204 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 205 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_eq BirthIsland_Exterior_Frlg_EventScript_Deoxys_2
# 206 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Deoxys_1:
# 207 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 115 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 208 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 209 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_eq BirthIsland_Exterior_Frlg_EventScript_Deoxys_5
# 210 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Deoxys_4:
# 211 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 118 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 212 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 213 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_eq BirthIsland_Exterior_Frlg_EventScript_Deoxys_8
# 214 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Deoxys_7:
# 215 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 121 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 216 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_DEOXYS
# 217 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 122 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 218 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
# 219 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 220 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 221 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Deoxys_2:
# 222 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 113 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 223 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_DefeatedDeoxys
# 224 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_Deoxys_1
# 225 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 226 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Deoxys_5:
# 227 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 116 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 228 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_RanFromDeoxys
# 229 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_Deoxys_4
# 230 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 231 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Deoxys_8:
# 232 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 119 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 233 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_RanFromDeoxys
# 234 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_Deoxys_7
# 235 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 236 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 237 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_DefeatedDeoxys::
# 238 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 127 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 239 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_DEOXYS_FLEW_AWAY
# 240 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 128 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 241 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 242 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 129 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 243 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 244 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 245 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 246 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 247 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_RanFromDeoxys::
# 248 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 134 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 249 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 250 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 135 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 251 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 252 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 253 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 254 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 255 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 139 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 256 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
Movement_DeoxysApproach:
# 257 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 140 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 258 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 259 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 141 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 260 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 261 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 142 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 262 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 263 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 143 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 264 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 265 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 144 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 266 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 267 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 145 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 268 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 269 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 146 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 270 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 271 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 147 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
# 272 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	step_end
