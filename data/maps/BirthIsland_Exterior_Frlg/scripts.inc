BirthIsland_Exterior_Frlg_MapScripts::
# 2 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BirthIsland_Exterior_Frlg_OnTransition
# 3 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BirthIsland_Exterior_Frlg_OnResume
# 4 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BirthIsland_Exterior_Frlg_OnReturnToField
	.byte 0


BirthIsland_Exterior_Frlg_OnReturnToField::
# 8 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special SetDeoxysRockPalette
	end


BirthIsland_Exterior_Frlg_OnTransition::
# 13 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_BIRTH_ISLAND_EXTERIOR
# 14 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DEOXYS_N
# 15 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_STEP_COUNTER, 0
# 16 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_NUM, 0
# 17 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_set FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_Frlg_OnTransition_2
BirthIsland_Exterior_Frlg_OnTransition_1:
# 20 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_Frlg_OnTransition_5
BirthIsland_Exterior_Frlg_OnTransition_4:
	end

BirthIsland_Exterior_Frlg_OnTransition_2:
# 18 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	call BirthIsland_Exterior_Frlg_EventScript_HideDeoxysAndPuzzle
	goto BirthIsland_Exterior_Frlg_OnTransition_1

BirthIsland_Exterior_Frlg_OnTransition_5:
# 21 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	call BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle
	goto BirthIsland_Exterior_Frlg_OnTransition_4


BirthIsland_Exterior_Frlg_EventScript_HideDeoxysAndPuzzle::
# 27 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_HIDE_DEOXYS
# 28 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
	return


BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle::
# 33 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_set FLAG_DEOXYS_FLEW_AWAY, BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle_2
BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle_1:
# 36 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
# 37 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_DEOXYS_ROCK_COMPLETE
	return

BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle_2:
# 34 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle_1


BirthIsland_Exterior_Frlg_OnResume::
# 42 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BirthIsland_Exterior_Frlg_OnResume_2
BirthIsland_Exterior_Frlg_OnResume_1:
	end

BirthIsland_Exterior_Frlg_OnResume_2:
# 43 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	call BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys
	goto BirthIsland_Exterior_Frlg_OnResume_1


BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys::
# 49 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys_2
BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys_1:
# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_BIRTH_ISLAND_DEOXYS
	return

BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys_2:
# 51 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys_1


BirthIsland_Exterior_Frlg_EventScript_Triangle::
# 58 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	lock
# 59 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	faceplayer
# 60 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special DoDeoxysRockInteraction
# 61 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitstate
# 62 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 0, BirthIsland_Exterior_Frlg_EventScript_Triangle_3
# 65 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 1, BirthIsland_Exterior_Frlg_EventScript_Triangle_4
# 67 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 2, BirthIsland_Exterior_Frlg_EventScript_Triangle_5
# 69 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 3, BirthIsland_Exterior_Frlg_EventScript_Triangle_6
BirthIsland_Exterior_Frlg_EventScript_Triangle_1:
	end

BirthIsland_Exterior_Frlg_EventScript_Triangle_3:
# 64 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_EventScript_NotSolved1
	goto BirthIsland_Exterior_Frlg_EventScript_Triangle_1

BirthIsland_Exterior_Frlg_EventScript_Triangle_4:
# 66 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_EventScript_NotSolved2
	goto BirthIsland_Exterior_Frlg_EventScript_Triangle_1

BirthIsland_Exterior_Frlg_EventScript_Triangle_5:
# 68 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_Deoxys
	goto BirthIsland_Exterior_Frlg_EventScript_Triangle_1

BirthIsland_Exterior_Frlg_EventScript_Triangle_6:
# 70 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_EventScript_NotSolved3
	goto BirthIsland_Exterior_Frlg_EventScript_Triangle_1


BirthIsland_Exterior_EventScript_NotSolved1::
# 76 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
	end


BirthIsland_Exterior_EventScript_NotSolved2::
# 81 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
	end


BirthIsland_Exterior_EventScript_NotSolved3::
# 86 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
	end


BirthIsland_Exterior_Frlg_EventScript_Deoxys::
# 91 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	addobject LOCALID_BIRTH_ISLAND_DEOXYS
# 92 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitse
# 93 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 0, LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK
# 94 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_NUM ( MAP_BIRTH_ISLAND_EXTERIOR_FRLG )
# 95 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP ( MAP_BIRTH_ISLAND_EXTERIOR_FRLG )
# 96 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	dofieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 97 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_DEOXYS, 0
# 98 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 99 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_BIRTH_ISLAND_DEOXYS, Movement_DeoxysApproach
# 100 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 101 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitse
# 102 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 103 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	delay 40
# 104 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitmoncry
# 105 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_BIRTH_ISLAND_DEOXYS
# 106 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	seteventmon SPECIES_DEOXYS, 30
# 107 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 108 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 109 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitstate
# 110 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 111 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 112 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BirthIsland_Exterior_Frlg_EventScript_Deoxys_2
BirthIsland_Exterior_Frlg_EventScript_Deoxys_1:
# 115 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BirthIsland_Exterior_Frlg_EventScript_Deoxys_5
BirthIsland_Exterior_Frlg_EventScript_Deoxys_4:
# 118 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BirthIsland_Exterior_Frlg_EventScript_Deoxys_8
BirthIsland_Exterior_Frlg_EventScript_Deoxys_7:
# 121 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_DEOXYS
# 122 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
	end

BirthIsland_Exterior_Frlg_EventScript_Deoxys_2:
# 113 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_DefeatedDeoxys
	goto BirthIsland_Exterior_Frlg_EventScript_Deoxys_1

BirthIsland_Exterior_Frlg_EventScript_Deoxys_5:
# 116 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_RanFromDeoxys
	goto BirthIsland_Exterior_Frlg_EventScript_Deoxys_4

BirthIsland_Exterior_Frlg_EventScript_Deoxys_8:
# 119 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_RanFromDeoxys
	goto BirthIsland_Exterior_Frlg_EventScript_Deoxys_7


BirthIsland_Exterior_Frlg_EventScript_DefeatedDeoxys::
# 127 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_DEOXYS_FLEW_AWAY
# 128 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 129 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	end


BirthIsland_Exterior_Frlg_EventScript_RanFromDeoxys::
# 134 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 135 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	end


# 139 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
Movement_DeoxysApproach:
# 140 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 141 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 142 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 143 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 144 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 145 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 146 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 147 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	step_end
