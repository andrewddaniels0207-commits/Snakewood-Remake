# 1 "data/maps/Route124/scripts.pory"

# 2 "data/maps/Route124/scripts.pory"
Route124_MapScripts::
# 3 "data/maps/Route124/scripts.pory"
# 2 "data/maps/Route124/scripts.pory"
# 4 "data/maps/Route124/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_OnTransition
# 5 "data/maps/Route124/scripts.pory"
	.byte 0
# 6 "data/maps/Route124/scripts.pory"

# 7 "data/maps/Route124/scripts.pory"

# 8 "data/maps/Route124/scripts.pory"
Route124_OnTransition::
# 9 "data/maps/Route124/scripts.pory"
# 6 "data/maps/Route124/scripts.pory"
# 10 "data/maps/Route124/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route124_OnTransition_2
# 11 "data/maps/Route124/scripts.pory"
Route124_OnTransition_1:
# 12 "data/maps/Route124/scripts.pory"
	end
# 13 "data/maps/Route124/scripts.pory"

# 14 "data/maps/Route124/scripts.pory"
Route124_OnTransition_2:
# 15 "data/maps/Route124/scripts.pory"
# 7 "data/maps/Route124/scripts.pory"
# 16 "data/maps/Route124/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 17 "data/maps/Route124/scripts.pory"
	goto Route124_OnTransition_1
# 18 "data/maps/Route124/scripts.pory"

# 19 "data/maps/Route124/scripts.pory"

# 20 "data/maps/Route124/scripts.pory"
Route124_EventScript_HuntersHouseSign::
# 21 "data/maps/Route124/scripts.pory"
# 13 "data/maps/Route124/scripts.pory"
# 22 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_HuntersHouse, MSGBOX_SIGN
# 23 "data/maps/Route124/scripts.pory"
	end
# 24 "data/maps/Route124/scripts.pory"

# 25 "data/maps/Route124/scripts.pory"

# 26 "data/maps/Route124/scripts.pory"
Route124_EventScript_Spencer::
# 27 "data/maps/Route124/scripts.pory"
# 18 "data/maps/Route124/scripts.pory"
# 28 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_SPENCER, Route124_Text_SpencerIntro, Route124_Text_SpencerDefeat
# 29 "data/maps/Route124/scripts.pory"
# 19 "data/maps/Route124/scripts.pory"
# 30 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/Route124/scripts.pory"
	end
# 32 "data/maps/Route124/scripts.pory"

# 33 "data/maps/Route124/scripts.pory"

# 34 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roland::
# 35 "data/maps/Route124/scripts.pory"
# 24 "data/maps/Route124/scripts.pory"
# 36 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ROLAND, Route124_Text_RolandIntro, Route124_Text_RolandDefeat
# 37 "data/maps/Route124/scripts.pory"
# 25 "data/maps/Route124/scripts.pory"
# 38 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route124/scripts.pory"
	end
# 40 "data/maps/Route124/scripts.pory"

# 41 "data/maps/Route124/scripts.pory"

# 42 "data/maps/Route124/scripts.pory"
Route124_EventScript_Jenny::
# 43 "data/maps/Route124/scripts.pory"
# 30 "data/maps/Route124/scripts.pory"
# 44 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_JENNY_1, Route124_Text_JennyIntro, Route124_Text_JennyDefeat, Route124_EventScript_RegisterJenny
# 45 "data/maps/Route124/scripts.pory"
# 31 "data/maps/Route124/scripts.pory"
# 46 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 47 "data/maps/Route124/scripts.pory"
# 32 "data/maps/Route124/scripts.pory"
# 48 "data/maps/Route124/scripts.pory"
	compare VAR_RESULT, TRUE
# 49 "data/maps/Route124/scripts.pory"
	goto_if_eq Route124_EventScript_Jenny_2
# 50 "data/maps/Route124/scripts.pory"
Route124_EventScript_Jenny_1:
# 51 "data/maps/Route124/scripts.pory"
# 35 "data/maps/Route124/scripts.pory"
# 52 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostBattle, MSGBOX_DEFAULT
# 53 "data/maps/Route124/scripts.pory"
# 36 "data/maps/Route124/scripts.pory"
# 54 "data/maps/Route124/scripts.pory"
	release
# 55 "data/maps/Route124/scripts.pory"
	end
# 56 "data/maps/Route124/scripts.pory"

# 57 "data/maps/Route124/scripts.pory"
Route124_EventScript_Jenny_2:
# 58 "data/maps/Route124/scripts.pory"
# 33 "data/maps/Route124/scripts.pory"
# 59 "data/maps/Route124/scripts.pory"
	goto Route124_EventScript_RematchJenny
# 60 "data/maps/Route124/scripts.pory"
	goto Route124_EventScript_Jenny_1
# 61 "data/maps/Route124/scripts.pory"

# 62 "data/maps/Route124/scripts.pory"

# 63 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterJenny::
# 64 "data/maps/Route124/scripts.pory"
# 41 "data/maps/Route124/scripts.pory"
# 65 "data/maps/Route124/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 66 "data/maps/Route124/scripts.pory"
# 42 "data/maps/Route124/scripts.pory"
# 67 "data/maps/Route124/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route124/scripts.pory"
# 43 "data/maps/Route124/scripts.pory"
# 69 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyRegister, MSGBOX_DEFAULT
# 70 "data/maps/Route124/scripts.pory"
# 44 "data/maps/Route124/scripts.pory"
# 71 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_JENNY_1
# 72 "data/maps/Route124/scripts.pory"
# 45 "data/maps/Route124/scripts.pory"
# 73 "data/maps/Route124/scripts.pory"
	release
# 74 "data/maps/Route124/scripts.pory"
	end
# 75 "data/maps/Route124/scripts.pory"

# 76 "data/maps/Route124/scripts.pory"

# 77 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchJenny::
# 78 "data/maps/Route124/scripts.pory"
# 50 "data/maps/Route124/scripts.pory"
# 79 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch TRAINER_JENNY_1, Route124_Text_JennyRematchIntro, Route124_Text_JennyRematchDefeat
# 80 "data/maps/Route124/scripts.pory"
# 51 "data/maps/Route124/scripts.pory"
# 81 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostRematch, MSGBOX_AUTOCLOSE
# 82 "data/maps/Route124/scripts.pory"
	end
# 83 "data/maps/Route124/scripts.pory"

# 84 "data/maps/Route124/scripts.pory"

# 85 "data/maps/Route124/scripts.pory"
Route124_EventScript_Grace::
# 86 "data/maps/Route124/scripts.pory"
# 56 "data/maps/Route124/scripts.pory"
# 87 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_GRACE, Route124_Text_GraceIntro, Route124_Text_GraceDefeat
# 88 "data/maps/Route124/scripts.pory"
# 57 "data/maps/Route124/scripts.pory"
# 89 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route124/scripts.pory"
	end
# 91 "data/maps/Route124/scripts.pory"

# 92 "data/maps/Route124/scripts.pory"

# 93 "data/maps/Route124/scripts.pory"
Route124_EventScript_Chad::
# 94 "data/maps/Route124/scripts.pory"
# 62 "data/maps/Route124/scripts.pory"
# 95 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_CHAD, Route124_Text_ChadIntro, Route124_Text_ChadDefeat
# 96 "data/maps/Route124/scripts.pory"
# 63 "data/maps/Route124/scripts.pory"
# 97 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/Route124/scripts.pory"
	end
# 99 "data/maps/Route124/scripts.pory"

# 100 "data/maps/Route124/scripts.pory"

# 101 "data/maps/Route124/scripts.pory"
Route124_EventScript_Lila::
# 102 "data/maps/Route124/scripts.pory"
# 68 "data/maps/Route124/scripts.pory"
# 103 "data/maps/Route124/scripts.pory"
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaIntro, Route124_Text_LilaDefeat, Route124_Text_LilaNotEnoughMons, Route124_EventScript_RegisterLila
# 104 "data/maps/Route124/scripts.pory"
# 69 "data/maps/Route124/scripts.pory"
# 105 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 106 "data/maps/Route124/scripts.pory"
# 70 "data/maps/Route124/scripts.pory"
# 107 "data/maps/Route124/scripts.pory"
	compare VAR_RESULT, TRUE
# 108 "data/maps/Route124/scripts.pory"
	goto_if_eq Route124_EventScript_Lila_2
# 109 "data/maps/Route124/scripts.pory"
Route124_EventScript_Lila_1:
# 110 "data/maps/Route124/scripts.pory"
# 73 "data/maps/Route124/scripts.pory"
# 111 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostBattle, MSGBOX_DEFAULT
# 112 "data/maps/Route124/scripts.pory"
# 74 "data/maps/Route124/scripts.pory"
# 113 "data/maps/Route124/scripts.pory"
	release
# 114 "data/maps/Route124/scripts.pory"
	end
# 115 "data/maps/Route124/scripts.pory"

# 116 "data/maps/Route124/scripts.pory"
Route124_EventScript_Lila_2:
# 117 "data/maps/Route124/scripts.pory"
# 71 "data/maps/Route124/scripts.pory"
# 118 "data/maps/Route124/scripts.pory"
	goto Route124_EventScript_RematchLila
# 119 "data/maps/Route124/scripts.pory"
	goto Route124_EventScript_Lila_1
# 120 "data/maps/Route124/scripts.pory"

# 121 "data/maps/Route124/scripts.pory"

# 122 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterLila::
# 123 "data/maps/Route124/scripts.pory"
# 79 "data/maps/Route124/scripts.pory"
# 124 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 125 "data/maps/Route124/scripts.pory"
# 80 "data/maps/Route124/scripts.pory"
# 126 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 127 "data/maps/Route124/scripts.pory"
# 81 "data/maps/Route124/scripts.pory"
# 128 "data/maps/Route124/scripts.pory"
	release
# 129 "data/maps/Route124/scripts.pory"
	end
# 130 "data/maps/Route124/scripts.pory"

# 131 "data/maps/Route124/scripts.pory"

# 132 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchLila::
# 133 "data/maps/Route124/scripts.pory"
# 86 "data/maps/Route124/scripts.pory"
# 134 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaRematchIntro, Route124_Text_LilaRematchDefeat, Route124_Text_LilaRematchNotEnoughMons
# 135 "data/maps/Route124/scripts.pory"
# 87 "data/maps/Route124/scripts.pory"
# 136 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostRematch, MSGBOX_AUTOCLOSE
# 137 "data/maps/Route124/scripts.pory"
	end
# 138 "data/maps/Route124/scripts.pory"

# 139 "data/maps/Route124/scripts.pory"

# 140 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roy::
# 141 "data/maps/Route124/scripts.pory"
# 92 "data/maps/Route124/scripts.pory"
# 142 "data/maps/Route124/scripts.pory"
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyIntro, Route124_Text_RoyDefeat, Route124_Text_RoyNotEnoughMons, Route124_EventScript_RegisterRoy
# 143 "data/maps/Route124/scripts.pory"
# 93 "data/maps/Route124/scripts.pory"
# 144 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 145 "data/maps/Route124/scripts.pory"
# 94 "data/maps/Route124/scripts.pory"
# 146 "data/maps/Route124/scripts.pory"
	compare VAR_RESULT, TRUE
# 147 "data/maps/Route124/scripts.pory"
	goto_if_eq Route124_EventScript_Roy_2
# 148 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roy_1:
# 149 "data/maps/Route124/scripts.pory"
# 97 "data/maps/Route124/scripts.pory"
# 150 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostBattle, MSGBOX_DEFAULT
# 151 "data/maps/Route124/scripts.pory"
# 98 "data/maps/Route124/scripts.pory"
# 152 "data/maps/Route124/scripts.pory"
	release
# 153 "data/maps/Route124/scripts.pory"
	end
# 154 "data/maps/Route124/scripts.pory"

# 155 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roy_2:
# 156 "data/maps/Route124/scripts.pory"
# 95 "data/maps/Route124/scripts.pory"
# 157 "data/maps/Route124/scripts.pory"
	goto Route124_EventScript_RematchRoy
# 158 "data/maps/Route124/scripts.pory"
	goto Route124_EventScript_Roy_1
# 159 "data/maps/Route124/scripts.pory"

# 160 "data/maps/Route124/scripts.pory"

# 161 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterRoy::
# 162 "data/maps/Route124/scripts.pory"
# 103 "data/maps/Route124/scripts.pory"
# 163 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 164 "data/maps/Route124/scripts.pory"
# 104 "data/maps/Route124/scripts.pory"
# 165 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 166 "data/maps/Route124/scripts.pory"
# 105 "data/maps/Route124/scripts.pory"
# 167 "data/maps/Route124/scripts.pory"
	release
# 168 "data/maps/Route124/scripts.pory"
	end
# 169 "data/maps/Route124/scripts.pory"

# 170 "data/maps/Route124/scripts.pory"

# 171 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchRoy::
# 172 "data/maps/Route124/scripts.pory"
# 110 "data/maps/Route124/scripts.pory"
# 173 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyRematchIntro, Route124_Text_RoyRematchDefeat, Route124_Text_RoyRematchNotEnoughMons
# 174 "data/maps/Route124/scripts.pory"
# 111 "data/maps/Route124/scripts.pory"
# 175 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostRematch, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route124/scripts.pory"
	end
# 177 "data/maps/Route124/scripts.pory"

# 178 "data/maps/Route124/scripts.pory"

# 179 "data/maps/Route124/scripts.pory"
Route124_EventScript_Declan::
# 180 "data/maps/Route124/scripts.pory"
# 116 "data/maps/Route124/scripts.pory"
# 181 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_DECLAN, Route124_Text_DeclanIntro, Route124_Text_DeclanDefeat
# 182 "data/maps/Route124/scripts.pory"
# 117 "data/maps/Route124/scripts.pory"
# 183 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route124/scripts.pory"
	end
# 185 "data/maps/Route124/scripts.pory"

# 186 "data/maps/Route124/scripts.pory"

# 187 "data/maps/Route124/scripts.pory"
Route124_EventScript_Isabella::
# 188 "data/maps/Route124/scripts.pory"
# 122 "data/maps/Route124/scripts.pory"
# 189 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ISABELLA, Route124_Text_IsabellaIntro, Route124_Text_IsabellaDefeat
# 190 "data/maps/Route124/scripts.pory"
# 123 "data/maps/Route124/scripts.pory"
# 191 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route124/scripts.pory"
	end
# 193 "data/maps/Route124/scripts.pory"

# 194 "data/maps/Route124/scripts.pory"

# 195 "data/maps/Route124/scripts.pory"
Route124_Text_HuntersHouse::
# 196 "data/maps/Route124/scripts.pory"
# 127 "data/maps/Route124/scripts.pory"
# 197 "data/maps/Route124/scripts.pory"
	.string "HUNTER'S HOUSE$"
