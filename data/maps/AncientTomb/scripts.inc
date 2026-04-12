# 1 "data/maps/AncientTomb/scripts.pory"

# 2 "data/maps/AncientTomb/scripts.pory"
AncientTomb_MapScripts::
# 3 "data/maps/AncientTomb/scripts.pory"
# 2 "data/maps/AncientTomb/scripts.pory"
# 4 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientTomb_OnResume
# 5 "data/maps/AncientTomb/scripts.pory"
# 3 "data/maps/AncientTomb/scripts.pory"
# 6 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AncientTomb_OnLoad
# 7 "data/maps/AncientTomb/scripts.pory"
# 4 "data/maps/AncientTomb/scripts.pory"
# 8 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientTomb_OnTransition
# 9 "data/maps/AncientTomb/scripts.pory"
	.byte 0
# 10 "data/maps/AncientTomb/scripts.pory"

# 11 "data/maps/AncientTomb/scripts.pory"

# 12 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnResume::
# 13 "data/maps/AncientTomb/scripts.pory"
# 9 "data/maps/AncientTomb/scripts.pory"
# 14 "data/maps/AncientTomb/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AncientTomb_OnResume_1
# 15 "data/maps/AncientTomb/scripts.pory"
	return
# 16 "data/maps/AncientTomb/scripts.pory"

# 17 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnResume_1:
# 18 "data/maps/AncientTomb/scripts.pory"
# 10 "data/maps/AncientTomb/scripts.pory"
# 19 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_OnResume_2
# 20 "data/maps/AncientTomb/scripts.pory"
	return
# 21 "data/maps/AncientTomb/scripts.pory"

# 22 "data/maps/AncientTomb/scripts.pory"

# 23 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnResume_1::
# 24 "data/maps/AncientTomb/scripts.pory"
	end
# 25 "data/maps/AncientTomb/scripts.pory"

# 26 "data/maps/AncientTomb/scripts.pory"

# 27 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnResume_2::
# 28 "data/maps/AncientTomb/scripts.pory"
# 20 "data/maps/AncientTomb/scripts.pory"
# 29 "data/maps/AncientTomb/scripts.pory"
	call AncientTomb_EventScript_TryRemoveRegisteel
# 30 "data/maps/AncientTomb/scripts.pory"
# 21 "data/maps/AncientTomb/scripts.pory"
# 31 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_OnResume_1
# 32 "data/maps/AncientTomb/scripts.pory"
	return
# 33 "data/maps/AncientTomb/scripts.pory"

# 34 "data/maps/AncientTomb/scripts.pory"

# 35 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_TryRemoveRegisteel::
# 36 "data/maps/AncientTomb/scripts.pory"
# 26 "data/maps/AncientTomb/scripts.pory"
# 37 "data/maps/AncientTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 38 "data/maps/AncientTomb/scripts.pory"
# 28 "data/maps/AncientTomb/scripts.pory"
# 39 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 40 "data/maps/AncientTomb/scripts.pory"
# 29 "data/maps/AncientTomb/scripts.pory"
# 41 "data/maps/AncientTomb/scripts.pory"
	goto_if_ne AncientTomb_EventScript_TryRemoveRegisteel_2
# 42 "data/maps/AncientTomb/scripts.pory"
	return
# 43 "data/maps/AncientTomb/scripts.pory"

# 44 "data/maps/AncientTomb/scripts.pory"

# 45 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_TryRemoveRegisteel_1::
# 46 "data/maps/AncientTomb/scripts.pory"
# 34 "data/maps/AncientTomb/scripts.pory"
# 47 "data/maps/AncientTomb/scripts.pory"
	removeobject VAR_LAST_TALKED
# 48 "data/maps/AncientTomb/scripts.pory"
	return
# 49 "data/maps/AncientTomb/scripts.pory"

# 50 "data/maps/AncientTomb/scripts.pory"

# 51 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_TryRemoveRegisteel_2::
# 52 "data/maps/AncientTomb/scripts.pory"
# 40 "data/maps/AncientTomb/scripts.pory"
# 53 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_NopReturn
# 54 "data/maps/AncientTomb/scripts.pory"
# 41 "data/maps/AncientTomb/scripts.pory"
# 55 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_TryRemoveRegisteel_1
# 56 "data/maps/AncientTomb/scripts.pory"
	return
# 57 "data/maps/AncientTomb/scripts.pory"

# 58 "data/maps/AncientTomb/scripts.pory"

# 59 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnTransition::
# 60 "data/maps/AncientTomb/scripts.pory"
# 46 "data/maps/AncientTomb/scripts.pory"
# 61 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_LANDMARK_ANCIENT_TOMB
# 62 "data/maps/AncientTomb/scripts.pory"
# 48 "data/maps/AncientTomb/scripts.pory"
# 63 "data/maps/AncientTomb/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGISTEEL, AncientTomb_OnTransition_1
# 64 "data/maps/AncientTomb/scripts.pory"
	return
# 65 "data/maps/AncientTomb/scripts.pory"

# 66 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnTransition_1:
# 67 "data/maps/AncientTomb/scripts.pory"
# 49 "data/maps/AncientTomb/scripts.pory"
# 68 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_OnTransition_2
# 69 "data/maps/AncientTomb/scripts.pory"
	return
# 70 "data/maps/AncientTomb/scripts.pory"

# 71 "data/maps/AncientTomb/scripts.pory"

# 72 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnTransition_1::
# 73 "data/maps/AncientTomb/scripts.pory"
	end
# 74 "data/maps/AncientTomb/scripts.pory"

# 75 "data/maps/AncientTomb/scripts.pory"

# 76 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnTransition_2::
# 77 "data/maps/AncientTomb/scripts.pory"
# 59 "data/maps/AncientTomb/scripts.pory"
# 78 "data/maps/AncientTomb/scripts.pory"
	call AncientTomb_EventScript_ShowRegisteel
# 79 "data/maps/AncientTomb/scripts.pory"
# 60 "data/maps/AncientTomb/scripts.pory"
# 80 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_OnTransition_1
# 81 "data/maps/AncientTomb/scripts.pory"
	return
# 82 "data/maps/AncientTomb/scripts.pory"

# 83 "data/maps/AncientTomb/scripts.pory"

# 84 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_ShowRegisteel::
# 85 "data/maps/AncientTomb/scripts.pory"
# 65 "data/maps/AncientTomb/scripts.pory"
# 86 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_HIDE_REGISTEEL
# 87 "data/maps/AncientTomb/scripts.pory"
	return
# 88 "data/maps/AncientTomb/scripts.pory"

# 89 "data/maps/AncientTomb/scripts.pory"

# 90 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnLoad::
# 91 "data/maps/AncientTomb/scripts.pory"
# 71 "data/maps/AncientTomb/scripts.pory"
# 92 "data/maps/AncientTomb/scripts.pory"
	goto_if_unset FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_OnLoad_1
# 93 "data/maps/AncientTomb/scripts.pory"
	return
# 94 "data/maps/AncientTomb/scripts.pory"

# 95 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnLoad_1:
# 96 "data/maps/AncientTomb/scripts.pory"
# 72 "data/maps/AncientTomb/scripts.pory"
# 97 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_OnLoad_2
# 98 "data/maps/AncientTomb/scripts.pory"
	return
# 99 "data/maps/AncientTomb/scripts.pory"

# 100 "data/maps/AncientTomb/scripts.pory"

# 101 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnLoad_1::
# 102 "data/maps/AncientTomb/scripts.pory"
	end
# 103 "data/maps/AncientTomb/scripts.pory"

# 104 "data/maps/AncientTomb/scripts.pory"

# 105 "data/maps/AncientTomb/scripts.pory"
AncientTomb_OnLoad_2::
# 106 "data/maps/AncientTomb/scripts.pory"
# 82 "data/maps/AncientTomb/scripts.pory"
# 107 "data/maps/AncientTomb/scripts.pory"
	call AncientTomb_EventScript_HideRegiEntrance
# 108 "data/maps/AncientTomb/scripts.pory"
# 83 "data/maps/AncientTomb/scripts.pory"
# 109 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_OnLoad_1
# 110 "data/maps/AncientTomb/scripts.pory"
	return
# 111 "data/maps/AncientTomb/scripts.pory"

# 112 "data/maps/AncientTomb/scripts.pory"

# 113 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_HideRegiEntrance::
# 114 "data/maps/AncientTomb/scripts.pory"
# 88 "data/maps/AncientTomb/scripts.pory"
# 115 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 116 "data/maps/AncientTomb/scripts.pory"
# 90 "data/maps/AncientTomb/scripts.pory"
# 117 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 118 "data/maps/AncientTomb/scripts.pory"
# 92 "data/maps/AncientTomb/scripts.pory"
# 119 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 120 "data/maps/AncientTomb/scripts.pory"
# 94 "data/maps/AncientTomb/scripts.pory"
# 121 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 122 "data/maps/AncientTomb/scripts.pory"
# 96 "data/maps/AncientTomb/scripts.pory"
# 123 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 124 "data/maps/AncientTomb/scripts.pory"
# 98 "data/maps/AncientTomb/scripts.pory"
# 125 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 126 "data/maps/AncientTomb/scripts.pory"
	return
# 127 "data/maps/AncientTomb/scripts.pory"

# 128 "data/maps/AncientTomb/scripts.pory"

# 129 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_CaveEntranceMiddle::
# 130 "data/maps/AncientTomb/scripts.pory"
# 104 "data/maps/AncientTomb/scripts.pory"
# 131 "data/maps/AncientTomb/scripts.pory"
	lockall
# 132 "data/maps/AncientTomb/scripts.pory"
# 106 "data/maps/AncientTomb/scripts.pory"
# 133 "data/maps/AncientTomb/scripts.pory"
	goto_if_set FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_CaveEntranceMiddle_1
# 134 "data/maps/AncientTomb/scripts.pory"
	return
# 135 "data/maps/AncientTomb/scripts.pory"

# 136 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_CaveEntranceMiddle_1:
# 137 "data/maps/AncientTomb/scripts.pory"
# 107 "data/maps/AncientTomb/scripts.pory"
# 138 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_CaveEntranceMiddle_2
# 139 "data/maps/AncientTomb/scripts.pory"
	return
# 140 "data/maps/AncientTomb/scripts.pory"

# 141 "data/maps/AncientTomb/scripts.pory"

# 142 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_CaveEntranceMiddle_1::
# 143 "data/maps/AncientTomb/scripts.pory"
# 113 "data/maps/AncientTomb/scripts.pory"
# 144 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
# 145 "data/maps/AncientTomb/scripts.pory"
# 115 "data/maps/AncientTomb/scripts.pory"
# 146 "data/maps/AncientTomb/scripts.pory"
	releaseall
# 147 "data/maps/AncientTomb/scripts.pory"
	end
# 148 "data/maps/AncientTomb/scripts.pory"

# 149 "data/maps/AncientTomb/scripts.pory"

# 150 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_CaveEntranceMiddle_2::
# 151 "data/maps/AncientTomb/scripts.pory"
# 121 "data/maps/AncientTomb/scripts.pory"
# 152 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_BigHoleInWall
# 153 "data/maps/AncientTomb/scripts.pory"
# 122 "data/maps/AncientTomb/scripts.pory"
# 154 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_CaveEntranceMiddle_1
# 155 "data/maps/AncientTomb/scripts.pory"
	return
# 156 "data/maps/AncientTomb/scripts.pory"

# 157 "data/maps/AncientTomb/scripts.pory"

# 158 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_BigHoleInWall::
# 159 "data/maps/AncientTomb/scripts.pory"
# 127 "data/maps/AncientTomb/scripts.pory"
# 160 "data/maps/AncientTomb/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 161 "data/maps/AncientTomb/scripts.pory"
# 129 "data/maps/AncientTomb/scripts.pory"
# 162 "data/maps/AncientTomb/scripts.pory"
	releaseall
# 163 "data/maps/AncientTomb/scripts.pory"
	end
# 164 "data/maps/AncientTomb/scripts.pory"

# 165 "data/maps/AncientTomb/scripts.pory"

# 166 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_CaveEntranceSide::
# 167 "data/maps/AncientTomb/scripts.pory"
# 135 "data/maps/AncientTomb/scripts.pory"
# 168 "data/maps/AncientTomb/scripts.pory"
	lockall
# 169 "data/maps/AncientTomb/scripts.pory"
# 137 "data/maps/AncientTomb/scripts.pory"
# 170 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
# 171 "data/maps/AncientTomb/scripts.pory"
# 139 "data/maps/AncientTomb/scripts.pory"
# 172 "data/maps/AncientTomb/scripts.pory"
	releaseall
# 173 "data/maps/AncientTomb/scripts.pory"
	end
# 174 "data/maps/AncientTomb/scripts.pory"

# 175 "data/maps/AncientTomb/scripts.pory"

# 176 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_Registeel::
# 177 "data/maps/AncientTomb/scripts.pory"
# 145 "data/maps/AncientTomb/scripts.pory"
# 178 "data/maps/AncientTomb/scripts.pory"
	lock
# 179 "data/maps/AncientTomb/scripts.pory"
# 147 "data/maps/AncientTomb/scripts.pory"
# 180 "data/maps/AncientTomb/scripts.pory"
	faceplayer
# 181 "data/maps/AncientTomb/scripts.pory"
# 149 "data/maps/AncientTomb/scripts.pory"
# 182 "data/maps/AncientTomb/scripts.pory"
	waitse
# 183 "data/maps/AncientTomb/scripts.pory"
# 151 "data/maps/AncientTomb/scripts.pory"
# 184 "data/maps/AncientTomb/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 185 "data/maps/AncientTomb/scripts.pory"
# 153 "data/maps/AncientTomb/scripts.pory"
# 186 "data/maps/AncientTomb/scripts.pory"
	delay 40
# 187 "data/maps/AncientTomb/scripts.pory"
# 155 "data/maps/AncientTomb/scripts.pory"
# 188 "data/maps/AncientTomb/scripts.pory"
	waitmoncry
# 189 "data/maps/AncientTomb/scripts.pory"
# 157 "data/maps/AncientTomb/scripts.pory"
# 190 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 40
# 191 "data/maps/AncientTomb/scripts.pory"
# 159 "data/maps/AncientTomb/scripts.pory"
# 192 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 193 "data/maps/AncientTomb/scripts.pory"
# 161 "data/maps/AncientTomb/scripts.pory"
# 194 "data/maps/AncientTomb/scripts.pory"
	special StartRegiBattle
# 195 "data/maps/AncientTomb/scripts.pory"
# 163 "data/maps/AncientTomb/scripts.pory"
# 196 "data/maps/AncientTomb/scripts.pory"
	waitstate
# 197 "data/maps/AncientTomb/scripts.pory"
# 165 "data/maps/AncientTomb/scripts.pory"
# 198 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 199 "data/maps/AncientTomb/scripts.pory"
# 167 "data/maps/AncientTomb/scripts.pory"
# 200 "data/maps/AncientTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 201 "data/maps/AncientTomb/scripts.pory"
# 169 "data/maps/AncientTomb/scripts.pory"
# 202 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 203 "data/maps/AncientTomb/scripts.pory"
# 170 "data/maps/AncientTomb/scripts.pory"
# 204 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq AncientTomb_EventScript_Registeel_2
# 205 "data/maps/AncientTomb/scripts.pory"
	return
# 206 "data/maps/AncientTomb/scripts.pory"

# 207 "data/maps/AncientTomb/scripts.pory"

# 208 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_Registeel_1::
# 209 "data/maps/AncientTomb/scripts.pory"
# 175 "data/maps/AncientTomb/scripts.pory"
# 210 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 211 "data/maps/AncientTomb/scripts.pory"
# 176 "data/maps/AncientTomb/scripts.pory"
# 212 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq AncientTomb_EventScript_Registeel_5
# 213 "data/maps/AncientTomb/scripts.pory"
	return
# 214 "data/maps/AncientTomb/scripts.pory"

# 215 "data/maps/AncientTomb/scripts.pory"

# 216 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_Registeel_4::
# 217 "data/maps/AncientTomb/scripts.pory"
# 181 "data/maps/AncientTomb/scripts.pory"
# 218 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 219 "data/maps/AncientTomb/scripts.pory"
# 182 "data/maps/AncientTomb/scripts.pory"
# 220 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq AncientTomb_EventScript_Registeel_8
# 221 "data/maps/AncientTomb/scripts.pory"
	return
# 222 "data/maps/AncientTomb/scripts.pory"

# 223 "data/maps/AncientTomb/scripts.pory"

# 224 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_Registeel_7::
# 225 "data/maps/AncientTomb/scripts.pory"
# 187 "data/maps/AncientTomb/scripts.pory"
# 226 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
# 227 "data/maps/AncientTomb/scripts.pory"
# 189 "data/maps/AncientTomb/scripts.pory"
# 228 "data/maps/AncientTomb/scripts.pory"
	release
# 229 "data/maps/AncientTomb/scripts.pory"
	end
# 230 "data/maps/AncientTomb/scripts.pory"

# 231 "data/maps/AncientTomb/scripts.pory"

# 232 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_Registeel_2::
# 233 "data/maps/AncientTomb/scripts.pory"
# 195 "data/maps/AncientTomb/scripts.pory"
# 234 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_DefeatedRegisteel
# 235 "data/maps/AncientTomb/scripts.pory"
# 196 "data/maps/AncientTomb/scripts.pory"
# 236 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_Registeel_1
# 237 "data/maps/AncientTomb/scripts.pory"
	return
# 238 "data/maps/AncientTomb/scripts.pory"

# 239 "data/maps/AncientTomb/scripts.pory"

# 240 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_Registeel_5::
# 241 "data/maps/AncientTomb/scripts.pory"
# 201 "data/maps/AncientTomb/scripts.pory"
# 242 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_RanFromRegisteel
# 243 "data/maps/AncientTomb/scripts.pory"
# 202 "data/maps/AncientTomb/scripts.pory"
# 244 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_Registeel_4
# 245 "data/maps/AncientTomb/scripts.pory"
	return
# 246 "data/maps/AncientTomb/scripts.pory"

# 247 "data/maps/AncientTomb/scripts.pory"

# 248 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_Registeel_8::
# 249 "data/maps/AncientTomb/scripts.pory"
# 207 "data/maps/AncientTomb/scripts.pory"
# 250 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_RanFromRegisteel
# 251 "data/maps/AncientTomb/scripts.pory"
# 208 "data/maps/AncientTomb/scripts.pory"
# 252 "data/maps/AncientTomb/scripts.pory"
	goto AncientTomb_EventScript_Registeel_7
# 253 "data/maps/AncientTomb/scripts.pory"
	return
# 254 "data/maps/AncientTomb/scripts.pory"

# 255 "data/maps/AncientTomb/scripts.pory"

# 256 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_DefeatedRegisteel::
# 257 "data/maps/AncientTomb/scripts.pory"
# 213 "data/maps/AncientTomb/scripts.pory"
# 258 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
# 259 "data/maps/AncientTomb/scripts.pory"
# 215 "data/maps/AncientTomb/scripts.pory"
# 260 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 261 "data/maps/AncientTomb/scripts.pory"
	end
# 262 "data/maps/AncientTomb/scripts.pory"

# 263 "data/maps/AncientTomb/scripts.pory"

# 264 "data/maps/AncientTomb/scripts.pory"
AncientTomb_EventScript_RanFromRegisteel::
# 265 "data/maps/AncientTomb/scripts.pory"
# 221 "data/maps/AncientTomb/scripts.pory"
# 266 "data/maps/AncientTomb/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGISTEEL
# 267 "data/maps/AncientTomb/scripts.pory"
# 223 "data/maps/AncientTomb/scripts.pory"
# 268 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 269 "data/maps/AncientTomb/scripts.pory"
	end
