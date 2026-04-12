AncientTomb_MapScripts::
# 2 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientTomb_OnResume
# 3 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AncientTomb_OnLoad
# 4 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientTomb_OnTransition
	.byte 0


AncientTomb_OnResume::
# 8 "data/maps/AncientTomb/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AncientTomb_OnResume_2
AncientTomb_OnResume_1:
	end

AncientTomb_OnResume_2:
# 9 "data/maps/AncientTomb/scripts.pory"
	call AncientTomb_EventScript_TryRemoveRegisteel
	goto AncientTomb_OnResume_1


AncientTomb_EventScript_TryRemoveRegisteel::
# 15 "data/maps/AncientTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 16 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne AncientTomb_EventScript_TryRemoveRegisteel_2
AncientTomb_EventScript_TryRemoveRegisteel_1:
# 19 "data/maps/AncientTomb/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

AncientTomb_EventScript_TryRemoveRegisteel_2:
# 17 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AncientTomb_EventScript_TryRemoveRegisteel_1


AncientTomb_OnTransition::
# 24 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_LANDMARK_ANCIENT_TOMB
# 25 "data/maps/AncientTomb/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGISTEEL, AncientTomb_OnTransition_2
AncientTomb_OnTransition_1:
	end

AncientTomb_OnTransition_2:
# 26 "data/maps/AncientTomb/scripts.pory"
	call AncientTomb_EventScript_ShowRegisteel
	goto AncientTomb_OnTransition_1


AncientTomb_EventScript_ShowRegisteel::
# 32 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_HIDE_REGISTEEL
	return


AncientTomb_OnLoad::
# 37 "data/maps/AncientTomb/scripts.pory"
	goto_if_unset FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_OnLoad_2
AncientTomb_OnLoad_1:
	end

AncientTomb_OnLoad_2:
# 38 "data/maps/AncientTomb/scripts.pory"
	call AncientTomb_EventScript_HideRegiEntrance
	goto AncientTomb_OnLoad_1


AncientTomb_EventScript_HideRegiEntrance::
# 44 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 45 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 46 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 47 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 48 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 49 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return


AncientTomb_EventScript_CaveEntranceMiddle::
# 54 "data/maps/AncientTomb/scripts.pory"
	lockall
# 55 "data/maps/AncientTomb/scripts.pory"
	goto_if_set FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_CaveEntranceMiddle_2
AncientTomb_EventScript_CaveEntranceMiddle_1:
# 58 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
# 59 "data/maps/AncientTomb/scripts.pory"
	releaseall
	end

AncientTomb_EventScript_CaveEntranceMiddle_2:
# 56 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_BigHoleInWall
	goto AncientTomb_EventScript_CaveEntranceMiddle_1


AncientTomb_EventScript_BigHoleInWall::
# 64 "data/maps/AncientTomb/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 65 "data/maps/AncientTomb/scripts.pory"
	releaseall
	end


AncientTomb_EventScript_CaveEntranceSide::
# 70 "data/maps/AncientTomb/scripts.pory"
	lockall
# 71 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
# 72 "data/maps/AncientTomb/scripts.pory"
	releaseall
	end


AncientTomb_EventScript_Registeel::
# 77 "data/maps/AncientTomb/scripts.pory"
	lock
# 78 "data/maps/AncientTomb/scripts.pory"
	faceplayer
# 79 "data/maps/AncientTomb/scripts.pory"
	waitse
# 80 "data/maps/AncientTomb/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 81 "data/maps/AncientTomb/scripts.pory"
	delay 40
# 82 "data/maps/AncientTomb/scripts.pory"
	waitmoncry
# 83 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 40
# 84 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 85 "data/maps/AncientTomb/scripts.pory"
	special StartRegiBattle
# 86 "data/maps/AncientTomb/scripts.pory"
	waitstate
# 87 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 88 "data/maps/AncientTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 89 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AncientTomb_EventScript_Registeel_2
AncientTomb_EventScript_Registeel_1:
# 92 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AncientTomb_EventScript_Registeel_5
AncientTomb_EventScript_Registeel_4:
# 95 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AncientTomb_EventScript_Registeel_8
AncientTomb_EventScript_Registeel_7:
# 98 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
# 99 "data/maps/AncientTomb/scripts.pory"
	release
	end

AncientTomb_EventScript_Registeel_2:
# 90 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_DefeatedRegisteel
	goto AncientTomb_EventScript_Registeel_1

AncientTomb_EventScript_Registeel_5:
# 93 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_RanFromRegisteel
	goto AncientTomb_EventScript_Registeel_4

AncientTomb_EventScript_Registeel_8:
# 96 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_RanFromRegisteel
	goto AncientTomb_EventScript_Registeel_7


AncientTomb_EventScript_DefeatedRegisteel::
# 104 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
# 105 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


AncientTomb_EventScript_RanFromRegisteel::
# 110 "data/maps/AncientTomb/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGISTEEL
# 111 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

