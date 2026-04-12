DesertRuins_MapScripts::
# 2 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DesertRuins_OnResume
# 3 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DesertRuins_OnLoad
# 4 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DesertRuins_OnTransition
	.byte 0


DesertRuins_OnResume::
# 8 "data/maps/DesertRuins/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, DesertRuins_OnResume_2
DesertRuins_OnResume_1:
	end

DesertRuins_OnResume_2:
# 9 "data/maps/DesertRuins/scripts.pory"
	call DesertRuins_EventScript_TryRemoveRegirock
	goto DesertRuins_OnResume_1


DesertRuins_EventScript_TryRemoveRegirock::
# 15 "data/maps/DesertRuins/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 16 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne DesertRuins_EventScript_TryRemoveRegirock_2
DesertRuins_EventScript_TryRemoveRegirock_1:
# 19 "data/maps/DesertRuins/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

DesertRuins_EventScript_TryRemoveRegirock_2:
# 17 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_NopReturn
	goto DesertRuins_EventScript_TryRemoveRegirock_1


DesertRuins_OnLoad::
# 24 "data/maps/DesertRuins/scripts.pory"
	goto_if_unset FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_OnLoad_2
DesertRuins_OnLoad_1:
	end

DesertRuins_OnLoad_2:
# 25 "data/maps/DesertRuins/scripts.pory"
	call DesertRuins_EventScript_HideRegiEntrance
	goto DesertRuins_OnLoad_1


DesertRuins_EventScript_HideRegiEntrance::
# 31 "data/maps/DesertRuins/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 32 "data/maps/DesertRuins/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 33 "data/maps/DesertRuins/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 34 "data/maps/DesertRuins/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 35 "data/maps/DesertRuins/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 36 "data/maps/DesertRuins/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return


DesertRuins_OnTransition::
# 41 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_LANDMARK_DESERT_RUINS
# 42 "data/maps/DesertRuins/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGIROCK, DesertRuins_OnTransition_2
DesertRuins_OnTransition_1:
	end

DesertRuins_OnTransition_2:
# 43 "data/maps/DesertRuins/scripts.pory"
	call DesertRuins_EventScript_ShowRegirock
	goto DesertRuins_OnTransition_1


DesertRuins_EventScript_ShowRegirock::
# 49 "data/maps/DesertRuins/scripts.pory"
	clearflag FLAG_HIDE_REGIROCK
	return


DesertRuins_EventScript_CaveEntranceMiddle::
# 54 "data/maps/DesertRuins/scripts.pory"
	lockall
# 55 "data/maps/DesertRuins/scripts.pory"
	goto_if_set FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_CaveEntranceMiddle_2
DesertRuins_EventScript_CaveEntranceMiddle_1:
# 58 "data/maps/DesertRuins/scripts.pory"
	braillemsgbox DesertRuins_Braille_UseRockSmash
# 59 "data/maps/DesertRuins/scripts.pory"
	releaseall
	end

DesertRuins_EventScript_CaveEntranceMiddle_2:
# 56 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_BigHoleInWall
	goto DesertRuins_EventScript_CaveEntranceMiddle_1


DesertRuins_EventScript_BigHoleInWall::
# 64 "data/maps/DesertRuins/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 65 "data/maps/DesertRuins/scripts.pory"
	releaseall
	end


DesertRuins_EventScript_CaveEntranceSide::
# 70 "data/maps/DesertRuins/scripts.pory"
	lockall
# 71 "data/maps/DesertRuins/scripts.pory"
	braillemsgbox DesertRuins_Braille_UseRockSmash
# 72 "data/maps/DesertRuins/scripts.pory"
	releaseall
	end


DesertRuins_EventScript_Regirock::
# 77 "data/maps/DesertRuins/scripts.pory"
	lock
# 78 "data/maps/DesertRuins/scripts.pory"
	faceplayer
# 79 "data/maps/DesertRuins/scripts.pory"
	waitse
# 80 "data/maps/DesertRuins/scripts.pory"
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
# 81 "data/maps/DesertRuins/scripts.pory"
	delay 40
# 82 "data/maps/DesertRuins/scripts.pory"
	waitmoncry
# 83 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_REGIROCK, 40
# 84 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 85 "data/maps/DesertRuins/scripts.pory"
	special StartRegiBattle
# 86 "data/maps/DesertRuins/scripts.pory"
	waitstate
# 87 "data/maps/DesertRuins/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 88 "data/maps/DesertRuins/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 89 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DesertRuins_EventScript_Regirock_2
DesertRuins_EventScript_Regirock_1:
# 92 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq DesertRuins_EventScript_Regirock_5
DesertRuins_EventScript_Regirock_4:
# 95 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq DesertRuins_EventScript_Regirock_8
DesertRuins_EventScript_Regirock_7:
# 98 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGIROCK
# 99 "data/maps/DesertRuins/scripts.pory"
	release
	end

DesertRuins_EventScript_Regirock_2:
# 90 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_DefeatedRegirock
	goto DesertRuins_EventScript_Regirock_1

DesertRuins_EventScript_Regirock_5:
# 93 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_RanFromRegirock
	goto DesertRuins_EventScript_Regirock_4

DesertRuins_EventScript_Regirock_8:
# 96 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_RanFromRegirock
	goto DesertRuins_EventScript_Regirock_7


DesertRuins_EventScript_DefeatedRegirock::
# 104 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGIROCK
# 105 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


DesertRuins_EventScript_RanFromRegirock::
# 110 "data/maps/DesertRuins/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGIROCK
# 111 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

