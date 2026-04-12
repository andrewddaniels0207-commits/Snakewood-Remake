# 1 "data/maps/IslandCave/scripts.pory"

# 2 "data/maps/IslandCave/scripts.pory"
IslandCave_MapScripts::
# 3 "data/maps/IslandCave/scripts.pory"
# 2 "data/maps/IslandCave/scripts.pory"
# 4 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IslandCave_OnResume
# 5 "data/maps/IslandCave/scripts.pory"
# 3 "data/maps/IslandCave/scripts.pory"
# 6 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IslandCave_OnLoad
# 7 "data/maps/IslandCave/scripts.pory"
# 4 "data/maps/IslandCave/scripts.pory"
# 8 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IslandCave_OnTransition
# 9 "data/maps/IslandCave/scripts.pory"
	.byte 0
# 10 "data/maps/IslandCave/scripts.pory"

# 11 "data/maps/IslandCave/scripts.pory"

# 12 "data/maps/IslandCave/scripts.pory"
IslandCave_OnResume::
# 13 "data/maps/IslandCave/scripts.pory"
# 8 "data/maps/IslandCave/scripts.pory"
# 14 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, IslandCave_OnResume_2
# 15 "data/maps/IslandCave/scripts.pory"
IslandCave_OnResume_1:
# 16 "data/maps/IslandCave/scripts.pory"
	end
# 17 "data/maps/IslandCave/scripts.pory"

# 18 "data/maps/IslandCave/scripts.pory"
IslandCave_OnResume_2:
# 19 "data/maps/IslandCave/scripts.pory"
# 9 "data/maps/IslandCave/scripts.pory"
# 20 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_TryRemoveRegice
# 21 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_OnResume_1
# 22 "data/maps/IslandCave/scripts.pory"

# 23 "data/maps/IslandCave/scripts.pory"

# 24 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_TryRemoveRegice::
# 25 "data/maps/IslandCave/scripts.pory"
# 15 "data/maps/IslandCave/scripts.pory"
# 26 "data/maps/IslandCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/IslandCave/scripts.pory"
# 16 "data/maps/IslandCave/scripts.pory"
# 28 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 29 "data/maps/IslandCave/scripts.pory"
	goto_if_ne IslandCave_EventScript_TryRemoveRegice_2
# 30 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_TryRemoveRegice_1:
# 31 "data/maps/IslandCave/scripts.pory"
# 19 "data/maps/IslandCave/scripts.pory"
# 32 "data/maps/IslandCave/scripts.pory"
	removeobject VAR_LAST_TALKED
# 33 "data/maps/IslandCave/scripts.pory"
	return
# 34 "data/maps/IslandCave/scripts.pory"

# 35 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_TryRemoveRegice_2:
# 36 "data/maps/IslandCave/scripts.pory"
# 17 "data/maps/IslandCave/scripts.pory"
# 37 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_NopReturn
# 38 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_TryRemoveRegice_1
# 39 "data/maps/IslandCave/scripts.pory"

# 40 "data/maps/IslandCave/scripts.pory"

# 41 "data/maps/IslandCave/scripts.pory"
IslandCave_OnLoad::
# 42 "data/maps/IslandCave/scripts.pory"
# 24 "data/maps/IslandCave/scripts.pory"
# 43 "data/maps/IslandCave/scripts.pory"
	goto_if_unset FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_OnLoad_2
# 44 "data/maps/IslandCave/scripts.pory"
IslandCave_OnLoad_1:
# 45 "data/maps/IslandCave/scripts.pory"
	end
# 46 "data/maps/IslandCave/scripts.pory"

# 47 "data/maps/IslandCave/scripts.pory"
IslandCave_OnLoad_2:
# 48 "data/maps/IslandCave/scripts.pory"
# 25 "data/maps/IslandCave/scripts.pory"
# 49 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_HideRegiEntrance
# 50 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_OnLoad_1
# 51 "data/maps/IslandCave/scripts.pory"

# 52 "data/maps/IslandCave/scripts.pory"

# 53 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_HideRegiEntrance::
# 54 "data/maps/IslandCave/scripts.pory"
# 31 "data/maps/IslandCave/scripts.pory"
# 55 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 56 "data/maps/IslandCave/scripts.pory"
# 32 "data/maps/IslandCave/scripts.pory"
# 57 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 58 "data/maps/IslandCave/scripts.pory"
# 33 "data/maps/IslandCave/scripts.pory"
# 59 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 60 "data/maps/IslandCave/scripts.pory"
# 34 "data/maps/IslandCave/scripts.pory"
# 61 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 62 "data/maps/IslandCave/scripts.pory"
# 35 "data/maps/IslandCave/scripts.pory"
# 63 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 64 "data/maps/IslandCave/scripts.pory"
# 36 "data/maps/IslandCave/scripts.pory"
# 65 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 66 "data/maps/IslandCave/scripts.pory"
	return
# 67 "data/maps/IslandCave/scripts.pory"

# 68 "data/maps/IslandCave/scripts.pory"

# 69 "data/maps/IslandCave/scripts.pory"
IslandCave_OnTransition::
# 70 "data/maps/IslandCave/scripts.pory"
# 41 "data/maps/IslandCave/scripts.pory"
# 71 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_LANDMARK_ISLAND_CAVE
# 72 "data/maps/IslandCave/scripts.pory"
# 42 "data/maps/IslandCave/scripts.pory"
# 73 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_ClearSteps
# 74 "data/maps/IslandCave/scripts.pory"
# 43 "data/maps/IslandCave/scripts.pory"
# 75 "data/maps/IslandCave/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGICE, IslandCave_OnTransition_2
# 76 "data/maps/IslandCave/scripts.pory"
IslandCave_OnTransition_1:
# 77 "data/maps/IslandCave/scripts.pory"
	end
# 78 "data/maps/IslandCave/scripts.pory"

# 79 "data/maps/IslandCave/scripts.pory"
IslandCave_OnTransition_2:
# 80 "data/maps/IslandCave/scripts.pory"
# 44 "data/maps/IslandCave/scripts.pory"
# 81 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_ShowRegice
# 82 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_OnTransition_1
# 83 "data/maps/IslandCave/scripts.pory"

# 84 "data/maps/IslandCave/scripts.pory"

# 85 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_ShowRegice::
# 86 "data/maps/IslandCave/scripts.pory"
# 50 "data/maps/IslandCave/scripts.pory"
# 87 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_HIDE_REGICE
# 88 "data/maps/IslandCave/scripts.pory"
	return
# 89 "data/maps/IslandCave/scripts.pory"

# 90 "data/maps/IslandCave/scripts.pory"

# 91 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_OpenRegiEntrance::
# 92 "data/maps/IslandCave/scripts.pory"
# 55 "data/maps/IslandCave/scripts.pory"
# 93 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
# 94 "data/maps/IslandCave/scripts.pory"
# 56 "data/maps/IslandCave/scripts.pory"
# 95 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 96 "data/maps/IslandCave/scripts.pory"
# 57 "data/maps/IslandCave/scripts.pory"
# 97 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
# 98 "data/maps/IslandCave/scripts.pory"
# 58 "data/maps/IslandCave/scripts.pory"
# 99 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
# 100 "data/maps/IslandCave/scripts.pory"
# 59 "data/maps/IslandCave/scripts.pory"
# 101 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 102 "data/maps/IslandCave/scripts.pory"
# 60 "data/maps/IslandCave/scripts.pory"
# 103 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
# 104 "data/maps/IslandCave/scripts.pory"
# 61 "data/maps/IslandCave/scripts.pory"
# 105 "data/maps/IslandCave/scripts.pory"
	special DrawWholeMapView
# 106 "data/maps/IslandCave/scripts.pory"
# 62 "data/maps/IslandCave/scripts.pory"
# 107 "data/maps/IslandCave/scripts.pory"
	playse SE_BANG
# 108 "data/maps/IslandCave/scripts.pory"
# 63 "data/maps/IslandCave/scripts.pory"
# 109 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_BRAILLE_REGICE_COMPLETED
# 110 "data/maps/IslandCave/scripts.pory"
	end
# 111 "data/maps/IslandCave/scripts.pory"

# 112 "data/maps/IslandCave/scripts.pory"

# 113 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceMiddle::
# 114 "data/maps/IslandCave/scripts.pory"
# 68 "data/maps/IslandCave/scripts.pory"
# 115 "data/maps/IslandCave/scripts.pory"
	lockall
# 116 "data/maps/IslandCave/scripts.pory"
# 69 "data/maps/IslandCave/scripts.pory"
# 117 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_CaveEntranceMiddle_2
# 118 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceMiddle_1:
# 119 "data/maps/IslandCave/scripts.pory"
# 72 "data/maps/IslandCave/scripts.pory"
# 120 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_CaveEntranceMiddle_5
# 121 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceMiddle_4:
# 122 "data/maps/IslandCave/scripts.pory"
# 75 "data/maps/IslandCave/scripts.pory"
# 123 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 124 "data/maps/IslandCave/scripts.pory"
# 76 "data/maps/IslandCave/scripts.pory"
# 125 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 126 "data/maps/IslandCave/scripts.pory"
# 77 "data/maps/IslandCave/scripts.pory"
# 127 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 128 "data/maps/IslandCave/scripts.pory"
# 78 "data/maps/IslandCave/scripts.pory"
# 129 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
# 130 "data/maps/IslandCave/scripts.pory"
	end
# 131 "data/maps/IslandCave/scripts.pory"

# 132 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceMiddle_2:
# 133 "data/maps/IslandCave/scripts.pory"
# 70 "data/maps/IslandCave/scripts.pory"
# 134 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_ClearSteps
# 135 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CaveEntranceMiddle_1
# 136 "data/maps/IslandCave/scripts.pory"

# 137 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceMiddle_5:
# 138 "data/maps/IslandCave/scripts.pory"
# 73 "data/maps/IslandCave/scripts.pory"
# 139 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_BigHoleInWall
# 140 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CaveEntranceMiddle_4
# 141 "data/maps/IslandCave/scripts.pory"

# 142 "data/maps/IslandCave/scripts.pory"

# 143 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_BigHoleInWall::
# 144 "data/maps/IslandCave/scripts.pory"
# 83 "data/maps/IslandCave/scripts.pory"
# 145 "data/maps/IslandCave/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 146 "data/maps/IslandCave/scripts.pory"
# 84 "data/maps/IslandCave/scripts.pory"
# 147 "data/maps/IslandCave/scripts.pory"
	releaseall
# 148 "data/maps/IslandCave/scripts.pory"
	end
# 149 "data/maps/IslandCave/scripts.pory"

# 150 "data/maps/IslandCave/scripts.pory"

# 151 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceSide::
# 152 "data/maps/IslandCave/scripts.pory"
# 89 "data/maps/IslandCave/scripts.pory"
# 153 "data/maps/IslandCave/scripts.pory"
	lockall
# 154 "data/maps/IslandCave/scripts.pory"
# 90 "data/maps/IslandCave/scripts.pory"
# 155 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_CaveEntranceSide_2
# 156 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceSide_1:
# 157 "data/maps/IslandCave/scripts.pory"
# 93 "data/maps/IslandCave/scripts.pory"
# 158 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 159 "data/maps/IslandCave/scripts.pory"
# 94 "data/maps/IslandCave/scripts.pory"
# 160 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_CaveEntranceSide_5
# 161 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceSide_4:
# 162 "data/maps/IslandCave/scripts.pory"
# 97 "data/maps/IslandCave/scripts.pory"
# 163 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 164 "data/maps/IslandCave/scripts.pory"
# 98 "data/maps/IslandCave/scripts.pory"
# 165 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 166 "data/maps/IslandCave/scripts.pory"
# 99 "data/maps/IslandCave/scripts.pory"
# 167 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
# 168 "data/maps/IslandCave/scripts.pory"
	end
# 169 "data/maps/IslandCave/scripts.pory"

# 170 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceSide_2:
# 171 "data/maps/IslandCave/scripts.pory"
# 91 "data/maps/IslandCave/scripts.pory"
# 172 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_ClearSteps
# 173 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CaveEntranceSide_1
# 174 "data/maps/IslandCave/scripts.pory"

# 175 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceSide_5:
# 176 "data/maps/IslandCave/scripts.pory"
# 95 "data/maps/IslandCave/scripts.pory"
# 177 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
# 178 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CaveEntranceSide_4
# 179 "data/maps/IslandCave/scripts.pory"

# 180 "data/maps/IslandCave/scripts.pory"

# 181 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CloseBrailleMsg::
# 182 "data/maps/IslandCave/scripts.pory"
# 104 "data/maps/IslandCave/scripts.pory"
# 183 "data/maps/IslandCave/scripts.pory"
	waitbuttonpress
# 184 "data/maps/IslandCave/scripts.pory"
# 105 "data/maps/IslandCave/scripts.pory"
# 185 "data/maps/IslandCave/scripts.pory"
	closebraillemessage
# 186 "data/maps/IslandCave/scripts.pory"
# 106 "data/maps/IslandCave/scripts.pory"
# 187 "data/maps/IslandCave/scripts.pory"
	releaseall
# 188 "data/maps/IslandCave/scripts.pory"
	end
# 189 "data/maps/IslandCave/scripts.pory"

# 190 "data/maps/IslandCave/scripts.pory"

# 191 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_ClearSteps::
# 192 "data/maps/IslandCave/scripts.pory"
# 111 "data/maps/IslandCave/scripts.pory"
# 193 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_1, 0
# 194 "data/maps/IslandCave/scripts.pory"
# 112 "data/maps/IslandCave/scripts.pory"
# 195 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_2, 0
# 196 "data/maps/IslandCave/scripts.pory"
# 113 "data/maps/IslandCave/scripts.pory"
# 197 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_3, 0
# 198 "data/maps/IslandCave/scripts.pory"
# 114 "data/maps/IslandCave/scripts.pory"
# 199 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_TEMP_REGICE_PUZZLE_FAILED
# 200 "data/maps/IslandCave/scripts.pory"
	return
# 201 "data/maps/IslandCave/scripts.pory"

# 202 "data/maps/IslandCave/scripts.pory"

# 203 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_Regice::
# 204 "data/maps/IslandCave/scripts.pory"
# 119 "data/maps/IslandCave/scripts.pory"
# 205 "data/maps/IslandCave/scripts.pory"
	lock
# 206 "data/maps/IslandCave/scripts.pory"
# 120 "data/maps/IslandCave/scripts.pory"
# 207 "data/maps/IslandCave/scripts.pory"
	faceplayer
# 208 "data/maps/IslandCave/scripts.pory"
# 121 "data/maps/IslandCave/scripts.pory"
# 209 "data/maps/IslandCave/scripts.pory"
	waitse
# 210 "data/maps/IslandCave/scripts.pory"
# 122 "data/maps/IslandCave/scripts.pory"
# 211 "data/maps/IslandCave/scripts.pory"
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
# 212 "data/maps/IslandCave/scripts.pory"
# 123 "data/maps/IslandCave/scripts.pory"
# 213 "data/maps/IslandCave/scripts.pory"
	delay 40
# 214 "data/maps/IslandCave/scripts.pory"
# 124 "data/maps/IslandCave/scripts.pory"
# 215 "data/maps/IslandCave/scripts.pory"
	waitmoncry
# 216 "data/maps/IslandCave/scripts.pory"
# 125 "data/maps/IslandCave/scripts.pory"
# 217 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_REGICE, 40
# 218 "data/maps/IslandCave/scripts.pory"
# 126 "data/maps/IslandCave/scripts.pory"
# 219 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 220 "data/maps/IslandCave/scripts.pory"
# 127 "data/maps/IslandCave/scripts.pory"
# 221 "data/maps/IslandCave/scripts.pory"
	special StartRegiBattle
# 222 "data/maps/IslandCave/scripts.pory"
# 128 "data/maps/IslandCave/scripts.pory"
# 223 "data/maps/IslandCave/scripts.pory"
	waitstate
# 224 "data/maps/IslandCave/scripts.pory"
# 129 "data/maps/IslandCave/scripts.pory"
# 225 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 226 "data/maps/IslandCave/scripts.pory"
# 130 "data/maps/IslandCave/scripts.pory"
# 227 "data/maps/IslandCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 228 "data/maps/IslandCave/scripts.pory"
# 131 "data/maps/IslandCave/scripts.pory"
# 229 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 230 "data/maps/IslandCave/scripts.pory"
	goto_if_eq IslandCave_EventScript_Regice_2
# 231 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_Regice_1:
# 232 "data/maps/IslandCave/scripts.pory"
# 134 "data/maps/IslandCave/scripts.pory"
# 233 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 234 "data/maps/IslandCave/scripts.pory"
	goto_if_eq IslandCave_EventScript_Regice_5
# 235 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_Regice_4:
# 236 "data/maps/IslandCave/scripts.pory"
# 137 "data/maps/IslandCave/scripts.pory"
# 237 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 238 "data/maps/IslandCave/scripts.pory"
	goto_if_eq IslandCave_EventScript_Regice_8
# 239 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_Regice_7:
# 240 "data/maps/IslandCave/scripts.pory"
# 140 "data/maps/IslandCave/scripts.pory"
# 241 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 242 "data/maps/IslandCave/scripts.pory"
# 141 "data/maps/IslandCave/scripts.pory"
# 243 "data/maps/IslandCave/scripts.pory"
	release
# 244 "data/maps/IslandCave/scripts.pory"
	end
# 245 "data/maps/IslandCave/scripts.pory"

# 246 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_Regice_2:
# 247 "data/maps/IslandCave/scripts.pory"
# 132 "data/maps/IslandCave/scripts.pory"
# 248 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_DefeatedRegice
# 249 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_Regice_1
# 250 "data/maps/IslandCave/scripts.pory"

# 251 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_Regice_5:
# 252 "data/maps/IslandCave/scripts.pory"
# 135 "data/maps/IslandCave/scripts.pory"
# 253 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_RanFromRegice
# 254 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_Regice_4
# 255 "data/maps/IslandCave/scripts.pory"

# 256 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_Regice_8:
# 257 "data/maps/IslandCave/scripts.pory"
# 138 "data/maps/IslandCave/scripts.pory"
# 258 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_RanFromRegice
# 259 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_Regice_7
# 260 "data/maps/IslandCave/scripts.pory"

# 261 "data/maps/IslandCave/scripts.pory"

# 262 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_DefeatedRegice::
# 263 "data/maps/IslandCave/scripts.pory"
# 146 "data/maps/IslandCave/scripts.pory"
# 264 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 265 "data/maps/IslandCave/scripts.pory"
# 147 "data/maps/IslandCave/scripts.pory"
# 266 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 267 "data/maps/IslandCave/scripts.pory"
	end
# 268 "data/maps/IslandCave/scripts.pory"

# 269 "data/maps/IslandCave/scripts.pory"

# 270 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_RanFromRegice::
# 271 "data/maps/IslandCave/scripts.pory"
# 152 "data/maps/IslandCave/scripts.pory"
# 272 "data/maps/IslandCave/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGICE
# 273 "data/maps/IslandCave/scripts.pory"
# 153 "data/maps/IslandCave/scripts.pory"
# 274 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 275 "data/maps/IslandCave/scripts.pory"
	end
