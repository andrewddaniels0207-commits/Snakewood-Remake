# 1 "data/maps/Route16_Frlg/scripts.pory"

# 2 "data/maps/Route16_Frlg/scripts.pory"
Route16_Frlg_MapScripts::
# 3 "data/maps/Route16_Frlg/scripts.pory"
# 2 "data/maps/Route16_Frlg/scripts.pory"
# 4 "data/maps/Route16_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route16_OnResume
# 5 "data/maps/Route16_Frlg/scripts.pory"
# 3 "data/maps/Route16_Frlg/scripts.pory"
# 6 "data/maps/Route16_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_OnTransition
# 7 "data/maps/Route16_Frlg/scripts.pory"
# 4 "data/maps/Route16_Frlg/scripts.pory"
# 8 "data/maps/Route16_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route16_OnWarp
# 9 "data/maps/Route16_Frlg/scripts.pory"
	.byte 0
# 10 "data/maps/Route16_Frlg/scripts.pory"

# 11 "data/maps/Route16_Frlg/scripts.pory"

# 12 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnResume::
# 13 "data/maps/Route16_Frlg/scripts.pory"
# 8 "data/maps/Route16_Frlg/scripts.pory"
# 14 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route16_OnResume_2
# 15 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnResume_1:
# 16 "data/maps/Route16_Frlg/scripts.pory"
	end
# 17 "data/maps/Route16_Frlg/scripts.pory"

# 18 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnResume_2:
# 19 "data/maps/Route16_Frlg/scripts.pory"
# 9 "data/maps/Route16_Frlg/scripts.pory"
# 20 "data/maps/Route16_Frlg/scripts.pory"
	call Route16_EventScript_RemoveSnorlax
# 21 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_OnResume_1
# 22 "data/maps/Route16_Frlg/scripts.pory"

# 23 "data/maps/Route16_Frlg/scripts.pory"

# 24 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_RemoveSnorlax::
# 25 "data/maps/Route16_Frlg/scripts.pory"
# 15 "data/maps/Route16_Frlg/scripts.pory"
# 26 "data/maps/Route16_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 27 "data/maps/Route16_Frlg/scripts.pory"
	return
# 28 "data/maps/Route16_Frlg/scripts.pory"

# 29 "data/maps/Route16_Frlg/scripts.pory"

# 30 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnTransition::
# 31 "data/maps/Route16_Frlg/scripts.pory"
# 20 "data/maps/Route16_Frlg/scripts.pory"
# 32 "data/maps/Route16_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE16, 1
# 33 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_eq Route16_OnTransition_2
# 34 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnTransition_1:
# 35 "data/maps/Route16_Frlg/scripts.pory"
	end
# 36 "data/maps/Route16_Frlg/scripts.pory"

# 37 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnTransition_2:
# 38 "data/maps/Route16_Frlg/scripts.pory"
# 21 "data/maps/Route16_Frlg/scripts.pory"
# 39 "data/maps/Route16_Frlg/scripts.pory"
	call Route16_OnTransitionCyclingRoad
# 40 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_OnTransition_1
# 41 "data/maps/Route16_Frlg/scripts.pory"

# 42 "data/maps/Route16_Frlg/scripts.pory"

# 43 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnTransitionCyclingRoad::
# 44 "data/maps/Route16_Frlg/scripts.pory"
# 27 "data/maps/Route16_Frlg/scripts.pory"
# 45 "data/maps/Route16_Frlg/scripts.pory"
	setflag FLAG_SYS_ON_CYCLING_ROAD
# 46 "data/maps/Route16_Frlg/scripts.pory"
	return
# 47 "data/maps/Route16_Frlg/scripts.pory"

# 48 "data/maps/Route16_Frlg/scripts.pory"

# 49 "data/maps/Route16_Frlg/scripts.pory"
# 31 "data/maps/Route16_Frlg/scripts.pory"
# 50 "data/maps/Route16_Frlg/scripts.pory"

# 51 "data/maps/Route16_Frlg/scripts.pory"
# 32 "data/maps/Route16_Frlg/scripts.pory"
# 52 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnWarp:
# 53 "data/maps/Route16_Frlg/scripts.pory"
# 33 "data/maps/Route16_Frlg/scripts.pory"
# 54 "data/maps/Route16_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route16_OnWarpCyclingRoad
# 55 "data/maps/Route16_Frlg/scripts.pory"
# 34 "data/maps/Route16_Frlg/scripts.pory"
# 56 "data/maps/Route16_Frlg/scripts.pory"
	.2byte 0
# 57 "data/maps/Route16_Frlg/scripts.pory"

# 58 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnWarpCyclingRoad::
# 59 "data/maps/Route16_Frlg/scripts.pory"
# 39 "data/maps/Route16_Frlg/scripts.pory"
# 60 "data/maps/Route16_Frlg/scripts.pory"
	special ForcePlayerOntoBike
# 61 "data/maps/Route16_Frlg/scripts.pory"
	end
# 62 "data/maps/Route16_Frlg/scripts.pory"

# 63 "data/maps/Route16_Frlg/scripts.pory"

# 64 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax::
# 65 "data/maps/Route16_Frlg/scripts.pory"
# 44 "data/maps/Route16_Frlg/scripts.pory"
# 66 "data/maps/Route16_Frlg/scripts.pory"
	lock
# 67 "data/maps/Route16_Frlg/scripts.pory"
# 45 "data/maps/Route16_Frlg/scripts.pory"
# 68 "data/maps/Route16_Frlg/scripts.pory"
	faceplayer
# 69 "data/maps/Route16_Frlg/scripts.pory"
# 46 "data/maps/Route16_Frlg/scripts.pory"
# 70 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route16_EventScript_Snorlax_2
# 71 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax_1:
# 72 "data/maps/Route16_Frlg/scripts.pory"
# 49 "data/maps/Route16_Frlg/scripts.pory"
# 73 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
# 74 "data/maps/Route16_Frlg/scripts.pory"
# 50 "data/maps/Route16_Frlg/scripts.pory"
# 75 "data/maps/Route16_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 76 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_eq Route16_EventScript_Snorlax_5
# 77 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax_4:
# 78 "data/maps/Route16_Frlg/scripts.pory"
# 53 "data/maps/Route16_Frlg/scripts.pory"
# 79 "data/maps/Route16_Frlg/scripts.pory"
	call EventScript_AwakenSnorlax
# 80 "data/maps/Route16_Frlg/scripts.pory"
# 54 "data/maps/Route16_Frlg/scripts.pory"
# 81 "data/maps/Route16_Frlg/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 30
# 82 "data/maps/Route16_Frlg/scripts.pory"
# 55 "data/maps/Route16_Frlg/scripts.pory"
# 83 "data/maps/Route16_Frlg/scripts.pory"
	waitse
# 84 "data/maps/Route16_Frlg/scripts.pory"
# 56 "data/maps/Route16_Frlg/scripts.pory"
# 85 "data/maps/Route16_Frlg/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
# 86 "data/maps/Route16_Frlg/scripts.pory"
# 57 "data/maps/Route16_Frlg/scripts.pory"
# 87 "data/maps/Route16_Frlg/scripts.pory"
	delay 40
# 88 "data/maps/Route16_Frlg/scripts.pory"
# 58 "data/maps/Route16_Frlg/scripts.pory"
# 89 "data/maps/Route16_Frlg/scripts.pory"
	waitmoncry
# 90 "data/maps/Route16_Frlg/scripts.pory"
# 59 "data/maps/Route16_Frlg/scripts.pory"
# 91 "data/maps/Route16_Frlg/scripts.pory"
	setflag FLAG_HIDE_ROUTE_16_SNORLAX
# 92 "data/maps/Route16_Frlg/scripts.pory"
# 60 "data/maps/Route16_Frlg/scripts.pory"
# 93 "data/maps/Route16_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 94 "data/maps/Route16_Frlg/scripts.pory"
# 61 "data/maps/Route16_Frlg/scripts.pory"
# 95 "data/maps/Route16_Frlg/scripts.pory"
	dowildbattle
# 96 "data/maps/Route16_Frlg/scripts.pory"
# 62 "data/maps/Route16_Frlg/scripts.pory"
# 97 "data/maps/Route16_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 98 "data/maps/Route16_Frlg/scripts.pory"
# 63 "data/maps/Route16_Frlg/scripts.pory"
# 99 "data/maps/Route16_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 100 "data/maps/Route16_Frlg/scripts.pory"
# 64 "data/maps/Route16_Frlg/scripts.pory"
# 101 "data/maps/Route16_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 102 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_eq Route16_EventScript_Snorlax_8
# 103 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax_7:
# 104 "data/maps/Route16_Frlg/scripts.pory"
# 67 "data/maps/Route16_Frlg/scripts.pory"
# 105 "data/maps/Route16_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 106 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_eq Route16_EventScript_Snorlax_11
# 107 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax_10:
# 108 "data/maps/Route16_Frlg/scripts.pory"
# 70 "data/maps/Route16_Frlg/scripts.pory"
# 109 "data/maps/Route16_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 110 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_eq Route16_EventScript_Snorlax_14
# 111 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax_13:
# 112 "data/maps/Route16_Frlg/scripts.pory"
# 73 "data/maps/Route16_Frlg/scripts.pory"
# 113 "data/maps/Route16_Frlg/scripts.pory"
	release
# 114 "data/maps/Route16_Frlg/scripts.pory"
	end
# 115 "data/maps/Route16_Frlg/scripts.pory"

# 116 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax_2:
# 117 "data/maps/Route16_Frlg/scripts.pory"
# 47 "data/maps/Route16_Frlg/scripts.pory"
# 118 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_EventScript_SnorlaxNoPokeFlute
# 119 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_EventScript_Snorlax_1
# 120 "data/maps/Route16_Frlg/scripts.pory"

# 121 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax_5:
# 122 "data/maps/Route16_Frlg/scripts.pory"
# 51 "data/maps/Route16_Frlg/scripts.pory"
# 123 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_EventScript_DontUsePokeFlute
# 124 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_EventScript_Snorlax_4
# 125 "data/maps/Route16_Frlg/scripts.pory"

# 126 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax_8:
# 127 "data/maps/Route16_Frlg/scripts.pory"
# 65 "data/maps/Route16_Frlg/scripts.pory"
# 128 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_EventScript_FoughtSnorlax
# 129 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_EventScript_Snorlax_7
# 130 "data/maps/Route16_Frlg/scripts.pory"

# 131 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax_11:
# 132 "data/maps/Route16_Frlg/scripts.pory"
# 68 "data/maps/Route16_Frlg/scripts.pory"
# 133 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_EventScript_FoughtSnorlax
# 134 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_EventScript_Snorlax_10
# 135 "data/maps/Route16_Frlg/scripts.pory"

# 136 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax_14:
# 137 "data/maps/Route16_Frlg/scripts.pory"
# 71 "data/maps/Route16_Frlg/scripts.pory"
# 138 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_EventScript_FoughtSnorlax
# 139 "data/maps/Route16_Frlg/scripts.pory"
	goto Route16_EventScript_Snorlax_13
# 140 "data/maps/Route16_Frlg/scripts.pory"

# 141 "data/maps/Route16_Frlg/scripts.pory"

# 142 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_DontUsePokeFlute::
# 143 "data/maps/Route16_Frlg/scripts.pory"
# 78 "data/maps/Route16_Frlg/scripts.pory"
# 144 "data/maps/Route16_Frlg/scripts.pory"
	release
# 145 "data/maps/Route16_Frlg/scripts.pory"
	end
# 146 "data/maps/Route16_Frlg/scripts.pory"

# 147 "data/maps/Route16_Frlg/scripts.pory"

# 148 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_FoughtSnorlax::
# 149 "data/maps/Route16_Frlg/scripts.pory"
# 83 "data/maps/Route16_Frlg/scripts.pory"
# 150 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Text_SnorlaxReturnedToMountains
# 151 "data/maps/Route16_Frlg/scripts.pory"
# 84 "data/maps/Route16_Frlg/scripts.pory"
# 152 "data/maps/Route16_Frlg/scripts.pory"
	release
# 153 "data/maps/Route16_Frlg/scripts.pory"
	end
# 154 "data/maps/Route16_Frlg/scripts.pory"

# 155 "data/maps/Route16_Frlg/scripts.pory"

# 156 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_SnorlaxNoPokeFlute::
# 157 "data/maps/Route16_Frlg/scripts.pory"
# 89 "data/maps/Route16_Frlg/scripts.pory"
# 158 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Route16_Text_MonSprawledOutInSlumber
# 159 "data/maps/Route16_Frlg/scripts.pory"
# 90 "data/maps/Route16_Frlg/scripts.pory"
# 160 "data/maps/Route16_Frlg/scripts.pory"
	release
# 161 "data/maps/Route16_Frlg/scripts.pory"
	end
# 162 "data/maps/Route16_Frlg/scripts.pory"

# 163 "data/maps/Route16_Frlg/scripts.pory"

# 164 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_CyclingRoadSign::
# 165 "data/maps/Route16_Frlg/scripts.pory"
# 95 "data/maps/Route16_Frlg/scripts.pory"
# 166 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Route16_Text_CyclingRoadSign, MSGBOX_SIGN
# 167 "data/maps/Route16_Frlg/scripts.pory"
	end
# 168 "data/maps/Route16_Frlg/scripts.pory"

# 169 "data/maps/Route16_Frlg/scripts.pory"

# 170 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_RouteSign::
# 171 "data/maps/Route16_Frlg/scripts.pory"
# 100 "data/maps/Route16_Frlg/scripts.pory"
# 172 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Route16_Text_RouteSign, MSGBOX_SIGN
# 173 "data/maps/Route16_Frlg/scripts.pory"
	end
# 174 "data/maps/Route16_Frlg/scripts.pory"

# 175 "data/maps/Route16_Frlg/scripts.pory"

# 176 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LaoIntro::
# 177 "data/maps/Route16_Frlg/scripts.pory"
# 104 "data/maps/Route16_Frlg/scripts.pory"
# 178 "data/maps/Route16_Frlg/scripts.pory"
	.string "What do you want?$"
# 179 "data/maps/Route16_Frlg/scripts.pory"

# 180 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LaoDefeat::
# 181 "data/maps/Route16_Frlg/scripts.pory"
# 108 "data/maps/Route16_Frlg/scripts.pory"
# 182 "data/maps/Route16_Frlg/scripts.pory"
	.string "Don't you dare laugh!$"
# 183 "data/maps/Route16_Frlg/scripts.pory"

# 184 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LaoPostBattle::
# 185 "data/maps/Route16_Frlg/scripts.pory"
# 112 "data/maps/Route16_Frlg/scripts.pory"
# 186 "data/maps/Route16_Frlg/scripts.pory"
	.string "We like just hanging here.\n"
# 187 "data/maps/Route16_Frlg/scripts.pory"
	.string "What's it to you?$"
# 188 "data/maps/Route16_Frlg/scripts.pory"

# 189 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_KojiIntro::
# 190 "data/maps/Route16_Frlg/scripts.pory"
# 117 "data/maps/Route16_Frlg/scripts.pory"
# 191 "data/maps/Route16_Frlg/scripts.pory"
	.string "Nice BIKE!\n"
# 192 "data/maps/Route16_Frlg/scripts.pory"
	.string "Hand it over!$"
# 193 "data/maps/Route16_Frlg/scripts.pory"

# 194 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_KojiDefeat::
# 195 "data/maps/Route16_Frlg/scripts.pory"
# 122 "data/maps/Route16_Frlg/scripts.pory"
# 196 "data/maps/Route16_Frlg/scripts.pory"
	.string "Knockout!$"
# 197 "data/maps/Route16_Frlg/scripts.pory"

# 198 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_KojiPostBattle::
# 199 "data/maps/Route16_Frlg/scripts.pory"
# 126 "data/maps/Route16_Frlg/scripts.pory"
# 200 "data/maps/Route16_Frlg/scripts.pory"
	.string "Forget it, who needs your BIKE!$"
# 201 "data/maps/Route16_Frlg/scripts.pory"

# 202 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LukeIntro::
# 203 "data/maps/Route16_Frlg/scripts.pory"
# 130 "data/maps/Route16_Frlg/scripts.pory"
# 204 "data/maps/Route16_Frlg/scripts.pory"
	.string "Come out and play, little mouse!$"
# 205 "data/maps/Route16_Frlg/scripts.pory"

# 206 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LukeDefeat::
# 207 "data/maps/Route16_Frlg/scripts.pory"
# 134 "data/maps/Route16_Frlg/scripts.pory"
# 208 "data/maps/Route16_Frlg/scripts.pory"
	.string "You little rat!$"
# 209 "data/maps/Route16_Frlg/scripts.pory"

# 210 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LukePostBattle::
# 211 "data/maps/Route16_Frlg/scripts.pory"
# 138 "data/maps/Route16_Frlg/scripts.pory"
# 212 "data/maps/Route16_Frlg/scripts.pory"
	.string "I hate losing!\n"
# 213 "data/maps/Route16_Frlg/scripts.pory"
	.string "Get out of my face!$"
# 214 "data/maps/Route16_Frlg/scripts.pory"

# 215 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_HideoIntro::
# 216 "data/maps/Route16_Frlg/scripts.pory"
# 143 "data/maps/Route16_Frlg/scripts.pory"
# 217 "data/maps/Route16_Frlg/scripts.pory"
	.string "Hey, you just bumped me!$"
# 218 "data/maps/Route16_Frlg/scripts.pory"

# 219 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_HideoDefeat::
# 220 "data/maps/Route16_Frlg/scripts.pory"
# 147 "data/maps/Route16_Frlg/scripts.pory"
# 221 "data/maps/Route16_Frlg/scripts.pory"
	.string "Kaboom!$"
# 222 "data/maps/Route16_Frlg/scripts.pory"

# 223 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_HideoPostBattle::
# 224 "data/maps/Route16_Frlg/scripts.pory"
# 151 "data/maps/Route16_Frlg/scripts.pory"
# 225 "data/maps/Route16_Frlg/scripts.pory"
	.string "We'll always be hanging around here\n"
# 226 "data/maps/Route16_Frlg/scripts.pory"
	.string "even if you don't like it.\p"
# 227 "data/maps/Route16_Frlg/scripts.pory"
	.string "You can detour to VERMILION from\n"
# 228 "data/maps/Route16_Frlg/scripts.pory"
	.string "FUCHSIA going along the coast.$"
# 229 "data/maps/Route16_Frlg/scripts.pory"

# 230 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_CamronIntro::
# 231 "data/maps/Route16_Frlg/scripts.pory"
# 158 "data/maps/Route16_Frlg/scripts.pory"
# 232 "data/maps/Route16_Frlg/scripts.pory"
	.string "I'm feeling hungry and mean!\n"
# 233 "data/maps/Route16_Frlg/scripts.pory"
	.string "I need a punching bag!$"
# 234 "data/maps/Route16_Frlg/scripts.pory"

# 235 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_CamronDefeat::
# 236 "data/maps/Route16_Frlg/scripts.pory"
# 163 "data/maps/Route16_Frlg/scripts.pory"
# 237 "data/maps/Route16_Frlg/scripts.pory"
	.string "Bad, bad, bad!$"
# 238 "data/maps/Route16_Frlg/scripts.pory"

# 239 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_CamronPostBattle::
# 240 "data/maps/Route16_Frlg/scripts.pory"
# 167 "data/maps/Route16_Frlg/scripts.pory"
# 241 "data/maps/Route16_Frlg/scripts.pory"
	.string "If I'm going to have POKéMON, they\n"
# 242 "data/maps/Route16_Frlg/scripts.pory"
	.string "may as well be ferocious.\p"
# 243 "data/maps/Route16_Frlg/scripts.pory"
	.string "I'd use them to leave my enemies\n"
# 244 "data/maps/Route16_Frlg/scripts.pory"
	.string "in tatters.$"
# 245 "data/maps/Route16_Frlg/scripts.pory"

# 246 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_RubenIntro::
# 247 "data/maps/Route16_Frlg/scripts.pory"
# 174 "data/maps/Route16_Frlg/scripts.pory"
# 248 "data/maps/Route16_Frlg/scripts.pory"
	.string "Hey, there!\n"
# 249 "data/maps/Route16_Frlg/scripts.pory"
	.string "Let's have ourselves a good time!$"
# 250 "data/maps/Route16_Frlg/scripts.pory"

# 251 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_RubenDefeat::
# 252 "data/maps/Route16_Frlg/scripts.pory"
# 179 "data/maps/Route16_Frlg/scripts.pory"
# 253 "data/maps/Route16_Frlg/scripts.pory"
	.string "Don't make me mad!$"
# 254 "data/maps/Route16_Frlg/scripts.pory"

# 255 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_RubenPostBattle::
# 256 "data/maps/Route16_Frlg/scripts.pory"
# 183 "data/maps/Route16_Frlg/scripts.pory"
# 257 "data/maps/Route16_Frlg/scripts.pory"
	.string "I get my kicks by harassing people\n"
# 258 "data/maps/Route16_Frlg/scripts.pory"
	.string "with my stinking POKéMON.\p"
# 259 "data/maps/Route16_Frlg/scripts.pory"
	.string "They're great for startling people.\n"
# 260 "data/maps/Route16_Frlg/scripts.pory"
	.string "And, they bite, too.$"
# 261 "data/maps/Route16_Frlg/scripts.pory"

# 262 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_MonSprawledOutInSlumber::
# 263 "data/maps/Route16_Frlg/scripts.pory"
# 190 "data/maps/Route16_Frlg/scripts.pory"
# 264 "data/maps/Route16_Frlg/scripts.pory"
	.string "A POKéMON is sprawled out in\n"
# 265 "data/maps/Route16_Frlg/scripts.pory"
	.string "a deep and comfortable slumber.$"
# 266 "data/maps/Route16_Frlg/scripts.pory"

# 267 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_CyclingRoadSign::
# 268 "data/maps/Route16_Frlg/scripts.pory"
# 195 "data/maps/Route16_Frlg/scripts.pory"
# 269 "data/maps/Route16_Frlg/scripts.pory"
	.string "Enjoy the slope!\n"
# 270 "data/maps/Route16_Frlg/scripts.pory"
	.string "CYCLING ROAD$"
# 271 "data/maps/Route16_Frlg/scripts.pory"

# 272 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_RouteSign::
# 273 "data/maps/Route16_Frlg/scripts.pory"
# 200 "data/maps/Route16_Frlg/scripts.pory"
# 274 "data/maps/Route16_Frlg/scripts.pory"
	.string "ROUTE 16\n"
# 275 "data/maps/Route16_Frlg/scripts.pory"
	.string "CELADON CITY - FUCHSIA CITY$"
# 276 "data/maps/Route16_Frlg/scripts.pory"

# 277 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_JedIntro::
# 278 "data/maps/Route16_Frlg/scripts.pory"
# 205 "data/maps/Route16_Frlg/scripts.pory"
# 279 "data/maps/Route16_Frlg/scripts.pory"
	.string "JED: Our love knows no bounds.\n"
# 280 "data/maps/Route16_Frlg/scripts.pory"
	.string "We're in love and we show it!$"
# 281 "data/maps/Route16_Frlg/scripts.pory"

# 282 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_JedDefeat::
# 283 "data/maps/Route16_Frlg/scripts.pory"
# 210 "data/maps/Route16_Frlg/scripts.pory"
# 284 "data/maps/Route16_Frlg/scripts.pory"
	.string "JED: Oh, no!\n"
# 285 "data/maps/Route16_Frlg/scripts.pory"
	.string "My love has seen me as a loser!$"
# 286 "data/maps/Route16_Frlg/scripts.pory"

# 287 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_JedPostBattle::
# 288 "data/maps/Route16_Frlg/scripts.pory"
# 215 "data/maps/Route16_Frlg/scripts.pory"
# 289 "data/maps/Route16_Frlg/scripts.pory"
	.string "JED: Listen, LEA.\n"
# 290 "data/maps/Route16_Frlg/scripts.pory"
	.string "You need to focus less on me.$"
# 291 "data/maps/Route16_Frlg/scripts.pory"

# 292 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_JedNotEnoughMons::
# 293 "data/maps/Route16_Frlg/scripts.pory"
# 220 "data/maps/Route16_Frlg/scripts.pory"
# 294 "data/maps/Route16_Frlg/scripts.pory"
	.string "JED: You have just one POKéMON?\n"
# 295 "data/maps/Route16_Frlg/scripts.pory"
	.string "Is there no love in your heart?$"
# 296 "data/maps/Route16_Frlg/scripts.pory"

# 297 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LeaIntro::
# 298 "data/maps/Route16_Frlg/scripts.pory"
# 225 "data/maps/Route16_Frlg/scripts.pory"
# 299 "data/maps/Route16_Frlg/scripts.pory"
	.string "LEA: Sometimes, the intensity of\n"
# 300 "data/maps/Route16_Frlg/scripts.pory"
	.string "our love scares me.$"
# 301 "data/maps/Route16_Frlg/scripts.pory"

# 302 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LeaDefeat::
# 303 "data/maps/Route16_Frlg/scripts.pory"
# 230 "data/maps/Route16_Frlg/scripts.pory"
# 304 "data/maps/Route16_Frlg/scripts.pory"
	.string "LEA: Ohh! But JED looks cool\n"
# 305 "data/maps/Route16_Frlg/scripts.pory"
	.string "even in a loss!$"
# 306 "data/maps/Route16_Frlg/scripts.pory"

# 307 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LeaPostBattle::
# 308 "data/maps/Route16_Frlg/scripts.pory"
# 235 "data/maps/Route16_Frlg/scripts.pory"
# 309 "data/maps/Route16_Frlg/scripts.pory"
	.string "LEA: Ehehe, I'm sorry.\n"
# 310 "data/maps/Route16_Frlg/scripts.pory"
	.string "JED is so cool.$"
# 311 "data/maps/Route16_Frlg/scripts.pory"

# 312 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LeaNotEnoughMons::
# 313 "data/maps/Route16_Frlg/scripts.pory"
# 240 "data/maps/Route16_Frlg/scripts.pory"
# 314 "data/maps/Route16_Frlg/scripts.pory"
	.string "LEA: Oh, you don't have two\n"
# 315 "data/maps/Route16_Frlg/scripts.pory"
	.string "POKéMON with you?\p"
# 316 "data/maps/Route16_Frlg/scripts.pory"
	.string "Doesn't it feel lonely for you or\n"
# 317 "data/maps/Route16_Frlg/scripts.pory"
	.string "your POKéMON?$"
