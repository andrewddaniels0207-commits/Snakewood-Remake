# 1 "data/maps/DesertRuins/scripts.pory"

# 2 "data/maps/DesertRuins/scripts.pory"
DesertRuins_MapScripts::
# 3 "data/maps/DesertRuins/scripts.pory"
# 2 "data/maps/DesertRuins/scripts.pory"
# 4 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DesertRuins_OnResume
# 5 "data/maps/DesertRuins/scripts.pory"
# 3 "data/maps/DesertRuins/scripts.pory"
# 6 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DesertRuins_OnLoad
# 7 "data/maps/DesertRuins/scripts.pory"
# 4 "data/maps/DesertRuins/scripts.pory"
# 8 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DesertRuins_OnTransition
# 9 "data/maps/DesertRuins/scripts.pory"
	.byte 0
# 10 "data/maps/DesertRuins/scripts.pory"

# 11 "data/maps/DesertRuins/scripts.pory"

# 12 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnResume::
# 13 "data/maps/DesertRuins/scripts.pory"
# 8 "data/maps/DesertRuins/scripts.pory"
# 14 "data/maps/DesertRuins/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, DesertRuins_OnResume_2
# 15 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnResume_1:
# 16 "data/maps/DesertRuins/scripts.pory"
	end
# 17 "data/maps/DesertRuins/scripts.pory"

# 18 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnResume_2:
# 19 "data/maps/DesertRuins/scripts.pory"
# 9 "data/maps/DesertRuins/scripts.pory"
# 20 "data/maps/DesertRuins/scripts.pory"
	call DesertRuins_EventScript_TryRemoveRegirock
# 21 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_OnResume_1
# 22 "data/maps/DesertRuins/scripts.pory"

# 23 "data/maps/DesertRuins/scripts.pory"

# 24 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_TryRemoveRegirock::
# 25 "data/maps/DesertRuins/scripts.pory"
# 15 "data/maps/DesertRuins/scripts.pory"
# 26 "data/maps/DesertRuins/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/DesertRuins/scripts.pory"
# 16 "data/maps/DesertRuins/scripts.pory"
# 28 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 29 "data/maps/DesertRuins/scripts.pory"
	goto_if_ne DesertRuins_EventScript_TryRemoveRegirock_2
# 30 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_TryRemoveRegirock_1:
# 31 "data/maps/DesertRuins/scripts.pory"
# 19 "data/maps/DesertRuins/scripts.pory"
# 32 "data/maps/DesertRuins/scripts.pory"
	removeobject VAR_LAST_TALKED
# 33 "data/maps/DesertRuins/scripts.pory"
	return
# 34 "data/maps/DesertRuins/scripts.pory"

# 35 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_TryRemoveRegirock_2:
# 36 "data/maps/DesertRuins/scripts.pory"
# 17 "data/maps/DesertRuins/scripts.pory"
# 37 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_NopReturn
# 38 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_TryRemoveRegirock_1
# 39 "data/maps/DesertRuins/scripts.pory"

# 40 "data/maps/DesertRuins/scripts.pory"

# 41 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnLoad::
# 42 "data/maps/DesertRuins/scripts.pory"
# 24 "data/maps/DesertRuins/scripts.pory"
# 43 "data/maps/DesertRuins/scripts.pory"
	goto_if_unset FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_OnLoad_2
# 44 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnLoad_1:
# 45 "data/maps/DesertRuins/scripts.pory"
	end
# 46 "data/maps/DesertRuins/scripts.pory"

# 47 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnLoad_2:
# 48 "data/maps/DesertRuins/scripts.pory"
# 25 "data/maps/DesertRuins/scripts.pory"
# 49 "data/maps/DesertRuins/scripts.pory"
	call DesertRuins_EventScript_HideRegiEntrance
# 50 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_OnLoad_1
# 51 "data/maps/DesertRuins/scripts.pory"

# 52 "data/maps/DesertRuins/scripts.pory"

# 53 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_HideRegiEntrance::
# 54 "data/maps/DesertRuins/scripts.pory"
# 31 "data/maps/DesertRuins/scripts.pory"
# 55 "data/maps/DesertRuins/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 56 "data/maps/DesertRuins/scripts.pory"
# 32 "data/maps/DesertRuins/scripts.pory"
# 57 "data/maps/DesertRuins/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 58 "data/maps/DesertRuins/scripts.pory"
# 33 "data/maps/DesertRuins/scripts.pory"
# 59 "data/maps/DesertRuins/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 60 "data/maps/DesertRuins/scripts.pory"
# 34 "data/maps/DesertRuins/scripts.pory"
# 61 "data/maps/DesertRuins/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 62 "data/maps/DesertRuins/scripts.pory"
# 35 "data/maps/DesertRuins/scripts.pory"
# 63 "data/maps/DesertRuins/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 64 "data/maps/DesertRuins/scripts.pory"
# 36 "data/maps/DesertRuins/scripts.pory"
# 65 "data/maps/DesertRuins/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 66 "data/maps/DesertRuins/scripts.pory"
	return
# 67 "data/maps/DesertRuins/scripts.pory"

# 68 "data/maps/DesertRuins/scripts.pory"

# 69 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnTransition::
# 70 "data/maps/DesertRuins/scripts.pory"
# 41 "data/maps/DesertRuins/scripts.pory"
# 71 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_LANDMARK_DESERT_RUINS
# 72 "data/maps/DesertRuins/scripts.pory"
# 42 "data/maps/DesertRuins/scripts.pory"
# 73 "data/maps/DesertRuins/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGIROCK, DesertRuins_OnTransition_2
# 74 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnTransition_1:
# 75 "data/maps/DesertRuins/scripts.pory"
	end
# 76 "data/maps/DesertRuins/scripts.pory"

# 77 "data/maps/DesertRuins/scripts.pory"
DesertRuins_OnTransition_2:
# 78 "data/maps/DesertRuins/scripts.pory"
# 43 "data/maps/DesertRuins/scripts.pory"
# 79 "data/maps/DesertRuins/scripts.pory"
	call DesertRuins_EventScript_ShowRegirock
# 80 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_OnTransition_1
# 81 "data/maps/DesertRuins/scripts.pory"

# 82 "data/maps/DesertRuins/scripts.pory"

# 83 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_ShowRegirock::
# 84 "data/maps/DesertRuins/scripts.pory"
# 49 "data/maps/DesertRuins/scripts.pory"
# 85 "data/maps/DesertRuins/scripts.pory"
	clearflag FLAG_HIDE_REGIROCK
# 86 "data/maps/DesertRuins/scripts.pory"
	return
# 87 "data/maps/DesertRuins/scripts.pory"

# 88 "data/maps/DesertRuins/scripts.pory"

# 89 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_CaveEntranceMiddle::
# 90 "data/maps/DesertRuins/scripts.pory"
# 54 "data/maps/DesertRuins/scripts.pory"
# 91 "data/maps/DesertRuins/scripts.pory"
	lockall
# 92 "data/maps/DesertRuins/scripts.pory"
# 55 "data/maps/DesertRuins/scripts.pory"
# 93 "data/maps/DesertRuins/scripts.pory"
	goto_if_set FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_CaveEntranceMiddle_2
# 94 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_CaveEntranceMiddle_1:
# 95 "data/maps/DesertRuins/scripts.pory"
# 58 "data/maps/DesertRuins/scripts.pory"
# 96 "data/maps/DesertRuins/scripts.pory"
	braillemsgbox DesertRuins_Braille_UseRockSmash
# 97 "data/maps/DesertRuins/scripts.pory"
# 59 "data/maps/DesertRuins/scripts.pory"
# 98 "data/maps/DesertRuins/scripts.pory"
	releaseall
# 99 "data/maps/DesertRuins/scripts.pory"
	end
# 100 "data/maps/DesertRuins/scripts.pory"

# 101 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_CaveEntranceMiddle_2:
# 102 "data/maps/DesertRuins/scripts.pory"
# 56 "data/maps/DesertRuins/scripts.pory"
# 103 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_BigHoleInWall
# 104 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_CaveEntranceMiddle_1
# 105 "data/maps/DesertRuins/scripts.pory"

# 106 "data/maps/DesertRuins/scripts.pory"

# 107 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_BigHoleInWall::
# 108 "data/maps/DesertRuins/scripts.pory"
# 64 "data/maps/DesertRuins/scripts.pory"
# 109 "data/maps/DesertRuins/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 110 "data/maps/DesertRuins/scripts.pory"
# 65 "data/maps/DesertRuins/scripts.pory"
# 111 "data/maps/DesertRuins/scripts.pory"
	releaseall
# 112 "data/maps/DesertRuins/scripts.pory"
	end
# 113 "data/maps/DesertRuins/scripts.pory"

# 114 "data/maps/DesertRuins/scripts.pory"

# 115 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_CaveEntranceSide::
# 116 "data/maps/DesertRuins/scripts.pory"
# 70 "data/maps/DesertRuins/scripts.pory"
# 117 "data/maps/DesertRuins/scripts.pory"
	lockall
# 118 "data/maps/DesertRuins/scripts.pory"
# 71 "data/maps/DesertRuins/scripts.pory"
# 119 "data/maps/DesertRuins/scripts.pory"
	braillemsgbox DesertRuins_Braille_UseRockSmash
# 120 "data/maps/DesertRuins/scripts.pory"
# 72 "data/maps/DesertRuins/scripts.pory"
# 121 "data/maps/DesertRuins/scripts.pory"
	releaseall
# 122 "data/maps/DesertRuins/scripts.pory"
	end
# 123 "data/maps/DesertRuins/scripts.pory"

# 124 "data/maps/DesertRuins/scripts.pory"

# 125 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_Regirock::
# 126 "data/maps/DesertRuins/scripts.pory"
# 77 "data/maps/DesertRuins/scripts.pory"
# 127 "data/maps/DesertRuins/scripts.pory"
	lock
# 128 "data/maps/DesertRuins/scripts.pory"
# 78 "data/maps/DesertRuins/scripts.pory"
# 129 "data/maps/DesertRuins/scripts.pory"
	faceplayer
# 130 "data/maps/DesertRuins/scripts.pory"
# 79 "data/maps/DesertRuins/scripts.pory"
# 131 "data/maps/DesertRuins/scripts.pory"
	waitse
# 132 "data/maps/DesertRuins/scripts.pory"
# 80 "data/maps/DesertRuins/scripts.pory"
# 133 "data/maps/DesertRuins/scripts.pory"
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
# 134 "data/maps/DesertRuins/scripts.pory"
# 81 "data/maps/DesertRuins/scripts.pory"
# 135 "data/maps/DesertRuins/scripts.pory"
	delay 40
# 136 "data/maps/DesertRuins/scripts.pory"
# 82 "data/maps/DesertRuins/scripts.pory"
# 137 "data/maps/DesertRuins/scripts.pory"
	waitmoncry
# 138 "data/maps/DesertRuins/scripts.pory"
# 83 "data/maps/DesertRuins/scripts.pory"
# 139 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_REGIROCK, 40
# 140 "data/maps/DesertRuins/scripts.pory"
# 84 "data/maps/DesertRuins/scripts.pory"
# 141 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 142 "data/maps/DesertRuins/scripts.pory"
# 85 "data/maps/DesertRuins/scripts.pory"
# 143 "data/maps/DesertRuins/scripts.pory"
	special StartRegiBattle
# 144 "data/maps/DesertRuins/scripts.pory"
# 86 "data/maps/DesertRuins/scripts.pory"
# 145 "data/maps/DesertRuins/scripts.pory"
	waitstate
# 146 "data/maps/DesertRuins/scripts.pory"
# 87 "data/maps/DesertRuins/scripts.pory"
# 147 "data/maps/DesertRuins/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 148 "data/maps/DesertRuins/scripts.pory"
# 88 "data/maps/DesertRuins/scripts.pory"
# 149 "data/maps/DesertRuins/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 150 "data/maps/DesertRuins/scripts.pory"
# 89 "data/maps/DesertRuins/scripts.pory"
# 151 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 152 "data/maps/DesertRuins/scripts.pory"
	goto_if_eq DesertRuins_EventScript_Regirock_2
# 153 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_Regirock_1:
# 154 "data/maps/DesertRuins/scripts.pory"
# 92 "data/maps/DesertRuins/scripts.pory"
# 155 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 156 "data/maps/DesertRuins/scripts.pory"
	goto_if_eq DesertRuins_EventScript_Regirock_5
# 157 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_Regirock_4:
# 158 "data/maps/DesertRuins/scripts.pory"
# 95 "data/maps/DesertRuins/scripts.pory"
# 159 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 160 "data/maps/DesertRuins/scripts.pory"
	goto_if_eq DesertRuins_EventScript_Regirock_8
# 161 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_Regirock_7:
# 162 "data/maps/DesertRuins/scripts.pory"
# 98 "data/maps/DesertRuins/scripts.pory"
# 163 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGIROCK
# 164 "data/maps/DesertRuins/scripts.pory"
# 99 "data/maps/DesertRuins/scripts.pory"
# 165 "data/maps/DesertRuins/scripts.pory"
	release
# 166 "data/maps/DesertRuins/scripts.pory"
	end
# 167 "data/maps/DesertRuins/scripts.pory"

# 168 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_Regirock_2:
# 169 "data/maps/DesertRuins/scripts.pory"
# 90 "data/maps/DesertRuins/scripts.pory"
# 170 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_DefeatedRegirock
# 171 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_Regirock_1
# 172 "data/maps/DesertRuins/scripts.pory"

# 173 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_Regirock_5:
# 174 "data/maps/DesertRuins/scripts.pory"
# 93 "data/maps/DesertRuins/scripts.pory"
# 175 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_RanFromRegirock
# 176 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_Regirock_4
# 177 "data/maps/DesertRuins/scripts.pory"

# 178 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_Regirock_8:
# 179 "data/maps/DesertRuins/scripts.pory"
# 96 "data/maps/DesertRuins/scripts.pory"
# 180 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_RanFromRegirock
# 181 "data/maps/DesertRuins/scripts.pory"
	goto DesertRuins_EventScript_Regirock_7
# 182 "data/maps/DesertRuins/scripts.pory"

# 183 "data/maps/DesertRuins/scripts.pory"

# 184 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_DefeatedRegirock::
# 185 "data/maps/DesertRuins/scripts.pory"
# 104 "data/maps/DesertRuins/scripts.pory"
# 186 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGIROCK
# 187 "data/maps/DesertRuins/scripts.pory"
# 105 "data/maps/DesertRuins/scripts.pory"
# 188 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 189 "data/maps/DesertRuins/scripts.pory"
	end
# 190 "data/maps/DesertRuins/scripts.pory"

# 191 "data/maps/DesertRuins/scripts.pory"

# 192 "data/maps/DesertRuins/scripts.pory"
DesertRuins_EventScript_RanFromRegirock::
# 193 "data/maps/DesertRuins/scripts.pory"
# 110 "data/maps/DesertRuins/scripts.pory"
# 194 "data/maps/DesertRuins/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGIROCK
# 195 "data/maps/DesertRuins/scripts.pory"
# 111 "data/maps/DesertRuins/scripts.pory"
# 196 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 197 "data/maps/DesertRuins/scripts.pory"
	end
