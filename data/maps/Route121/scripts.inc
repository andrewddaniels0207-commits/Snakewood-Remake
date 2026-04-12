# 1 "data/maps/Route121/scripts.pory"

# 2 "data/maps/Route121/scripts.pory"
Route121_MapScripts::
# 3 "data/maps/Route121/scripts.pory"
	.byte 0
# 4 "data/maps/Route121/scripts.pory"

# 5 "data/maps/Route121/scripts.pory"

# 6 "data/maps/Route121/scripts.pory"
Route121_EventScript_Woman::
# 7 "data/maps/Route121/scripts.pory"
# 4 "data/maps/Route121/scripts.pory"
# 8 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
# 9 "data/maps/Route121/scripts.pory"
	end
# 10 "data/maps/Route121/scripts.pory"

# 11 "data/maps/Route121/scripts.pory"

# 12 "data/maps/Route121/scripts.pory"
Route121_EventScript_MtPyrePierSign::
# 13 "data/maps/Route121/scripts.pory"
# 9 "data/maps/Route121/scripts.pory"
# 14 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
# 15 "data/maps/Route121/scripts.pory"
	end
# 16 "data/maps/Route121/scripts.pory"

# 17 "data/maps/Route121/scripts.pory"

# 18 "data/maps/Route121/scripts.pory"
Route121_EventScript_SafariZoneSign::
# 19 "data/maps/Route121/scripts.pory"
# 14 "data/maps/Route121/scripts.pory"
# 20 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
# 21 "data/maps/Route121/scripts.pory"
	end
# 22 "data/maps/Route121/scripts.pory"

# 23 "data/maps/Route121/scripts.pory"

# 24 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut::
# 25 "data/maps/Route121/scripts.pory"
# 19 "data/maps/Route121/scripts.pory"
# 26 "data/maps/Route121/scripts.pory"
	lockall
# 27 "data/maps/Route121/scripts.pory"
# 20 "data/maps/Route121/scripts.pory"
# 28 "data/maps/Route121/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 29 "data/maps/Route121/scripts.pory"
# 21 "data/maps/Route121/scripts.pory"
# 30 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_ROUTE121_GRUNT_2, Common_Movement_WalkInPlaceRight
# 31 "data/maps/Route121/scripts.pory"
# 22 "data/maps/Route121/scripts.pory"
# 32 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route121/scripts.pory"
# 23 "data/maps/Route121/scripts.pory"
# 34 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 35 "data/maps/Route121/scripts.pory"
# 24 "data/maps/Route121/scripts.pory"
# 36 "data/maps/Route121/scripts.pory"
	closemessage
# 37 "data/maps/Route121/scripts.pory"
# 25 "data/maps/Route121/scripts.pory"
# 38 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_ROUTE121_GRUNT_1, Route121_Movement_Grunt1Exit
# 39 "data/maps/Route121/scripts.pory"
# 26 "data/maps/Route121/scripts.pory"
# 40 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_ROUTE121_GRUNT_2, Route121_Movement_Grunt2Exit
# 41 "data/maps/Route121/scripts.pory"
# 27 "data/maps/Route121/scripts.pory"
# 42 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_ROUTE121_GRUNT_3, Route121_Movement_Grunt3Exit
# 43 "data/maps/Route121/scripts.pory"
# 28 "data/maps/Route121/scripts.pory"
# 44 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route121/scripts.pory"
# 29 "data/maps/Route121/scripts.pory"
# 46 "data/maps/Route121/scripts.pory"
	fadedefaultbgm
# 47 "data/maps/Route121/scripts.pory"
# 30 "data/maps/Route121/scripts.pory"
# 48 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_ROUTE121_GRUNT_1
# 49 "data/maps/Route121/scripts.pory"
# 31 "data/maps/Route121/scripts.pory"
# 50 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_ROUTE121_GRUNT_2
# 51 "data/maps/Route121/scripts.pory"
# 32 "data/maps/Route121/scripts.pory"
# 52 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_ROUTE121_GRUNT_3
# 53 "data/maps/Route121/scripts.pory"
# 33 "data/maps/Route121/scripts.pory"
# 54 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 55 "data/maps/Route121/scripts.pory"
# 34 "data/maps/Route121/scripts.pory"
# 56 "data/maps/Route121/scripts.pory"
	releaseall
# 57 "data/maps/Route121/scripts.pory"
	end
# 58 "data/maps/Route121/scripts.pory"

# 59 "data/maps/Route121/scripts.pory"

# 60 "data/maps/Route121/scripts.pory"
# 38 "data/maps/Route121/scripts.pory"
# 61 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt1Exit:
# 62 "data/maps/Route121/scripts.pory"
# 39 "data/maps/Route121/scripts.pory"
# 63 "data/maps/Route121/scripts.pory"
	walk_down
# 64 "data/maps/Route121/scripts.pory"
# 40 "data/maps/Route121/scripts.pory"
# 65 "data/maps/Route121/scripts.pory"
	walk_down
# 66 "data/maps/Route121/scripts.pory"
# 41 "data/maps/Route121/scripts.pory"
# 67 "data/maps/Route121/scripts.pory"
	walk_down
# 68 "data/maps/Route121/scripts.pory"
# 42 "data/maps/Route121/scripts.pory"
# 69 "data/maps/Route121/scripts.pory"
	walk_down
# 70 "data/maps/Route121/scripts.pory"
# 43 "data/maps/Route121/scripts.pory"
# 71 "data/maps/Route121/scripts.pory"
	walk_down
# 72 "data/maps/Route121/scripts.pory"
# 44 "data/maps/Route121/scripts.pory"
# 73 "data/maps/Route121/scripts.pory"
	walk_down
# 74 "data/maps/Route121/scripts.pory"
# 45 "data/maps/Route121/scripts.pory"
# 75 "data/maps/Route121/scripts.pory"
	walk_down
# 76 "data/maps/Route121/scripts.pory"
# 46 "data/maps/Route121/scripts.pory"
# 77 "data/maps/Route121/scripts.pory"
	walk_down
# 78 "data/maps/Route121/scripts.pory"
# 47 "data/maps/Route121/scripts.pory"
# 79 "data/maps/Route121/scripts.pory"
	step_end
# 80 "data/maps/Route121/scripts.pory"

# 81 "data/maps/Route121/scripts.pory"
# 50 "data/maps/Route121/scripts.pory"
# 82 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt2Exit:
# 83 "data/maps/Route121/scripts.pory"
# 51 "data/maps/Route121/scripts.pory"
# 84 "data/maps/Route121/scripts.pory"
	walk_down
# 85 "data/maps/Route121/scripts.pory"
# 52 "data/maps/Route121/scripts.pory"
# 86 "data/maps/Route121/scripts.pory"
	walk_down
# 87 "data/maps/Route121/scripts.pory"
# 53 "data/maps/Route121/scripts.pory"
# 88 "data/maps/Route121/scripts.pory"
	walk_down
# 89 "data/maps/Route121/scripts.pory"
# 54 "data/maps/Route121/scripts.pory"
# 90 "data/maps/Route121/scripts.pory"
	walk_down
# 91 "data/maps/Route121/scripts.pory"
# 55 "data/maps/Route121/scripts.pory"
# 92 "data/maps/Route121/scripts.pory"
	walk_down
# 93 "data/maps/Route121/scripts.pory"
# 56 "data/maps/Route121/scripts.pory"
# 94 "data/maps/Route121/scripts.pory"
	walk_down
# 95 "data/maps/Route121/scripts.pory"
# 57 "data/maps/Route121/scripts.pory"
# 96 "data/maps/Route121/scripts.pory"
	walk_down
# 97 "data/maps/Route121/scripts.pory"
# 58 "data/maps/Route121/scripts.pory"
# 98 "data/maps/Route121/scripts.pory"
	walk_down
# 99 "data/maps/Route121/scripts.pory"
# 59 "data/maps/Route121/scripts.pory"
# 100 "data/maps/Route121/scripts.pory"
	step_end
# 101 "data/maps/Route121/scripts.pory"

# 102 "data/maps/Route121/scripts.pory"
# 62 "data/maps/Route121/scripts.pory"
# 103 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt3Exit:
# 104 "data/maps/Route121/scripts.pory"
# 63 "data/maps/Route121/scripts.pory"
# 105 "data/maps/Route121/scripts.pory"
	walk_down
# 106 "data/maps/Route121/scripts.pory"
# 64 "data/maps/Route121/scripts.pory"
# 107 "data/maps/Route121/scripts.pory"
	walk_down
# 108 "data/maps/Route121/scripts.pory"
# 65 "data/maps/Route121/scripts.pory"
# 109 "data/maps/Route121/scripts.pory"
	walk_down
# 110 "data/maps/Route121/scripts.pory"
# 66 "data/maps/Route121/scripts.pory"
# 111 "data/maps/Route121/scripts.pory"
	walk_down
# 112 "data/maps/Route121/scripts.pory"
# 67 "data/maps/Route121/scripts.pory"
# 113 "data/maps/Route121/scripts.pory"
	walk_down
# 114 "data/maps/Route121/scripts.pory"
# 68 "data/maps/Route121/scripts.pory"
# 115 "data/maps/Route121/scripts.pory"
	walk_down
# 116 "data/maps/Route121/scripts.pory"
# 69 "data/maps/Route121/scripts.pory"
# 117 "data/maps/Route121/scripts.pory"
	walk_down
# 118 "data/maps/Route121/scripts.pory"
# 70 "data/maps/Route121/scripts.pory"
# 119 "data/maps/Route121/scripts.pory"
	walk_down
# 120 "data/maps/Route121/scripts.pory"
# 71 "data/maps/Route121/scripts.pory"
# 121 "data/maps/Route121/scripts.pory"
	step_end
# 122 "data/maps/Route121/scripts.pory"

# 123 "data/maps/Route121/scripts.pory"
Route121_EventScript_Vanessa::
# 124 "data/maps/Route121/scripts.pory"
# 75 "data/maps/Route121/scripts.pory"
# 125 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_VANESSA, Route121_Text_VanessaIntro, Route121_Text_VanessaDefeat
# 126 "data/maps/Route121/scripts.pory"
# 76 "data/maps/Route121/scripts.pory"
# 127 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route121/scripts.pory"
	end
# 129 "data/maps/Route121/scripts.pory"

# 130 "data/maps/Route121/scripts.pory"

# 131 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter::
# 132 "data/maps/Route121/scripts.pory"
# 81 "data/maps/Route121/scripts.pory"
# 133 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_WALTER_1, Route121_Text_WalterIntro, Route121_Text_WalterDefeat, Route121_EventScript_RegisterWalter
# 134 "data/maps/Route121/scripts.pory"
# 82 "data/maps/Route121/scripts.pory"
# 135 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 136 "data/maps/Route121/scripts.pory"
# 83 "data/maps/Route121/scripts.pory"
# 137 "data/maps/Route121/scripts.pory"
	compare VAR_RESULT, TRUE
# 138 "data/maps/Route121/scripts.pory"
	goto_if_eq Route121_EventScript_Walter_2
# 139 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter_1:
# 140 "data/maps/Route121/scripts.pory"
# 86 "data/maps/Route121/scripts.pory"
# 141 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
# 142 "data/maps/Route121/scripts.pory"
# 87 "data/maps/Route121/scripts.pory"
# 143 "data/maps/Route121/scripts.pory"
	release
# 144 "data/maps/Route121/scripts.pory"
	end
# 145 "data/maps/Route121/scripts.pory"

# 146 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter_2:
# 147 "data/maps/Route121/scripts.pory"
# 84 "data/maps/Route121/scripts.pory"
# 148 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_RematchWalter
# 149 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_Walter_1
# 150 "data/maps/Route121/scripts.pory"

# 151 "data/maps/Route121/scripts.pory"

# 152 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterWalter::
# 153 "data/maps/Route121/scripts.pory"
# 92 "data/maps/Route121/scripts.pory"
# 154 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 155 "data/maps/Route121/scripts.pory"
# 93 "data/maps/Route121/scripts.pory"
# 156 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route121/scripts.pory"
# 94 "data/maps/Route121/scripts.pory"
# 158 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 159 "data/maps/Route121/scripts.pory"
# 95 "data/maps/Route121/scripts.pory"
# 160 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
# 161 "data/maps/Route121/scripts.pory"
# 96 "data/maps/Route121/scripts.pory"
# 162 "data/maps/Route121/scripts.pory"
	release
# 163 "data/maps/Route121/scripts.pory"
	end
# 164 "data/maps/Route121/scripts.pory"

# 165 "data/maps/Route121/scripts.pory"

# 166 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchWalter::
# 167 "data/maps/Route121/scripts.pory"
# 101 "data/maps/Route121/scripts.pory"
# 168 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 169 "data/maps/Route121/scripts.pory"
# 102 "data/maps/Route121/scripts.pory"
# 170 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
# 171 "data/maps/Route121/scripts.pory"
	end
# 172 "data/maps/Route121/scripts.pory"

# 173 "data/maps/Route121/scripts.pory"

# 174 "data/maps/Route121/scripts.pory"
Route121_EventScript_Tammy::
# 175 "data/maps/Route121/scripts.pory"
# 107 "data/maps/Route121/scripts.pory"
# 176 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_TAMMY, Route121_Text_TammyIntro, Route121_Text_TammyDefeat
# 177 "data/maps/Route121/scripts.pory"
# 108 "data/maps/Route121/scripts.pory"
# 178 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route121/scripts.pory"
	end
# 180 "data/maps/Route121/scripts.pory"

# 181 "data/maps/Route121/scripts.pory"

# 182 "data/maps/Route121/scripts.pory"
Route121_EventScript_Kate::
# 183 "data/maps/Route121/scripts.pory"
# 113 "data/maps/Route121/scripts.pory"
# 184 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_KateIntro, Route121_Text_KateDefeat, Route121_Text_KateNotEnoughMons
# 185 "data/maps/Route121/scripts.pory"
# 114 "data/maps/Route121/scripts.pory"
# 186 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route121/scripts.pory"
	end
# 188 "data/maps/Route121/scripts.pory"

# 189 "data/maps/Route121/scripts.pory"

# 190 "data/maps/Route121/scripts.pory"
Route121_EventScript_Joy::
# 191 "data/maps/Route121/scripts.pory"
# 119 "data/maps/Route121/scripts.pory"
# 192 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_JoyIntro, Route121_Text_JoyDefeat, Route121_Text_JoyNotEnoughMons
# 193 "data/maps/Route121/scripts.pory"
# 120 "data/maps/Route121/scripts.pory"
# 194 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route121/scripts.pory"
	end
# 196 "data/maps/Route121/scripts.pory"

# 197 "data/maps/Route121/scripts.pory"

# 198 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica::
# 199 "data/maps/Route121/scripts.pory"
# 125 "data/maps/Route121/scripts.pory"
# 200 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
# 201 "data/maps/Route121/scripts.pory"
# 126 "data/maps/Route121/scripts.pory"
# 202 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 203 "data/maps/Route121/scripts.pory"
# 127 "data/maps/Route121/scripts.pory"
# 204 "data/maps/Route121/scripts.pory"
	compare VAR_RESULT, TRUE
# 205 "data/maps/Route121/scripts.pory"
	goto_if_eq Route121_EventScript_Jessica_2
# 206 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica_1:
# 207 "data/maps/Route121/scripts.pory"
# 130 "data/maps/Route121/scripts.pory"
# 208 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
# 209 "data/maps/Route121/scripts.pory"
# 131 "data/maps/Route121/scripts.pory"
# 210 "data/maps/Route121/scripts.pory"
	release
# 211 "data/maps/Route121/scripts.pory"
	end
# 212 "data/maps/Route121/scripts.pory"

# 213 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica_2:
# 214 "data/maps/Route121/scripts.pory"
# 128 "data/maps/Route121/scripts.pory"
# 215 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_RematchJessica
# 216 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_Jessica_1
# 217 "data/maps/Route121/scripts.pory"

# 218 "data/maps/Route121/scripts.pory"

# 219 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterJessica::
# 220 "data/maps/Route121/scripts.pory"
# 136 "data/maps/Route121/scripts.pory"
# 221 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 222 "data/maps/Route121/scripts.pory"
# 137 "data/maps/Route121/scripts.pory"
# 223 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route121/scripts.pory"
# 138 "data/maps/Route121/scripts.pory"
# 225 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 226 "data/maps/Route121/scripts.pory"
# 139 "data/maps/Route121/scripts.pory"
# 227 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
# 228 "data/maps/Route121/scripts.pory"
# 140 "data/maps/Route121/scripts.pory"
# 229 "data/maps/Route121/scripts.pory"
	release
# 230 "data/maps/Route121/scripts.pory"
	end
# 231 "data/maps/Route121/scripts.pory"

# 232 "data/maps/Route121/scripts.pory"

# 233 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchJessica::
# 234 "data/maps/Route121/scripts.pory"
# 145 "data/maps/Route121/scripts.pory"
# 235 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 236 "data/maps/Route121/scripts.pory"
# 146 "data/maps/Route121/scripts.pory"
# 237 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route121/scripts.pory"
	end
# 239 "data/maps/Route121/scripts.pory"

# 240 "data/maps/Route121/scripts.pory"

# 241 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cale::
# 242 "data/maps/Route121/scripts.pory"
# 151 "data/maps/Route121/scripts.pory"
# 243 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CALE, Route121_Text_CaleIntro, Route121_Text_CaleDefeat
# 244 "data/maps/Route121/scripts.pory"
# 152 "data/maps/Route121/scripts.pory"
# 245 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route121/scripts.pory"
	end
# 247 "data/maps/Route121/scripts.pory"

# 248 "data/maps/Route121/scripts.pory"

# 249 "data/maps/Route121/scripts.pory"
Route121_EventScript_Myles::
# 250 "data/maps/Route121/scripts.pory"
# 157 "data/maps/Route121/scripts.pory"
# 251 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
# 252 "data/maps/Route121/scripts.pory"
# 158 "data/maps/Route121/scripts.pory"
# 253 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route121/scripts.pory"
	end
# 255 "data/maps/Route121/scripts.pory"

# 256 "data/maps/Route121/scripts.pory"

# 257 "data/maps/Route121/scripts.pory"
Route121_EventScript_Pat::
# 258 "data/maps/Route121/scripts.pory"
# 163 "data/maps/Route121/scripts.pory"
# 259 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
# 260 "data/maps/Route121/scripts.pory"
# 164 "data/maps/Route121/scripts.pory"
# 261 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 262 "data/maps/Route121/scripts.pory"
	end
# 263 "data/maps/Route121/scripts.pory"

# 264 "data/maps/Route121/scripts.pory"

# 265 "data/maps/Route121/scripts.pory"
Route121_EventScript_Marcel::
# 266 "data/maps/Route121/scripts.pory"
# 169 "data/maps/Route121/scripts.pory"
# 267 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
# 268 "data/maps/Route121/scripts.pory"
# 170 "data/maps/Route121/scripts.pory"
# 269 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 270 "data/maps/Route121/scripts.pory"
	end
# 271 "data/maps/Route121/scripts.pory"

# 272 "data/maps/Route121/scripts.pory"

# 273 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin::
# 274 "data/maps/Route121/scripts.pory"
# 175 "data/maps/Route121/scripts.pory"
# 275 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CRISTIN_1, Route121_Text_CristinIntro, Route121_Text_CristinDefeat, Route121_EventScript_RegisterCristin
# 276 "data/maps/Route121/scripts.pory"
# 176 "data/maps/Route121/scripts.pory"
# 277 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 278 "data/maps/Route121/scripts.pory"
# 177 "data/maps/Route121/scripts.pory"
# 279 "data/maps/Route121/scripts.pory"
	compare VAR_RESULT, TRUE
# 280 "data/maps/Route121/scripts.pory"
	goto_if_eq Route121_EventScript_Cristin_2
# 281 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin_1:
# 282 "data/maps/Route121/scripts.pory"
# 180 "data/maps/Route121/scripts.pory"
# 283 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
# 284 "data/maps/Route121/scripts.pory"
# 181 "data/maps/Route121/scripts.pory"
# 285 "data/maps/Route121/scripts.pory"
	release
# 286 "data/maps/Route121/scripts.pory"
	end
# 287 "data/maps/Route121/scripts.pory"

# 288 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin_2:
# 289 "data/maps/Route121/scripts.pory"
# 178 "data/maps/Route121/scripts.pory"
# 290 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_RematchCristin
# 291 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_Cristin_1
# 292 "data/maps/Route121/scripts.pory"

# 293 "data/maps/Route121/scripts.pory"

# 294 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterCristin::
# 295 "data/maps/Route121/scripts.pory"
# 186 "data/maps/Route121/scripts.pory"
# 296 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 297 "data/maps/Route121/scripts.pory"
# 187 "data/maps/Route121/scripts.pory"
# 298 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 299 "data/maps/Route121/scripts.pory"
# 188 "data/maps/Route121/scripts.pory"
# 300 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 301 "data/maps/Route121/scripts.pory"
# 189 "data/maps/Route121/scripts.pory"
# 302 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
# 303 "data/maps/Route121/scripts.pory"
# 190 "data/maps/Route121/scripts.pory"
# 304 "data/maps/Route121/scripts.pory"
	release
# 305 "data/maps/Route121/scripts.pory"
	end
# 306 "data/maps/Route121/scripts.pory"

# 307 "data/maps/Route121/scripts.pory"

# 308 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchCristin::
# 309 "data/maps/Route121/scripts.pory"
# 195 "data/maps/Route121/scripts.pory"
# 310 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 311 "data/maps/Route121/scripts.pory"
# 196 "data/maps/Route121/scripts.pory"
# 312 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
# 313 "data/maps/Route121/scripts.pory"
	end
# 314 "data/maps/Route121/scripts.pory"

# 315 "data/maps/Route121/scripts.pory"

# 316 "data/maps/Route121/scripts.pory"
Route121_Text_OkayMoveOutToMtPyre::
# 317 "data/maps/Route121/scripts.pory"
# 200 "data/maps/Route121/scripts.pory"
# 318 "data/maps/Route121/scripts.pory"
	.string "Okay!\n"
# 319 "data/maps/Route121/scripts.pory"
	.string "We're to move out to MT. PYRE!$"
# 320 "data/maps/Route121/scripts.pory"

# 321 "data/maps/Route121/scripts.pory"
Route121_Text_AheadLoomsMtPyre::
# 322 "data/maps/Route121/scripts.pory"
# 205 "data/maps/Route121/scripts.pory"
# 323 "data/maps/Route121/scripts.pory"
	.string "Ahead looms MT. PYRE…\p"
# 324 "data/maps/Route121/scripts.pory"
	.string "It is a natural monument to the spirits \n"
# 325 "data/maps/Route121/scripts.pory"
	.string "of departed POKéMON…$"
# 326 "data/maps/Route121/scripts.pory"

# 327 "data/maps/Route121/scripts.pory"
Route121_Text_MtPyrePierSign::
# 328 "data/maps/Route121/scripts.pory"
# 211 "data/maps/Route121/scripts.pory"
# 329 "data/maps/Route121/scripts.pory"
	.string "MT. PYRE PIER\p"
# 330 "data/maps/Route121/scripts.pory"
	.string "…The sign is old and worn out.\n"
# 331 "data/maps/Route121/scripts.pory"
	.string "The words are barely legible…$"
# 332 "data/maps/Route121/scripts.pory"

# 333 "data/maps/Route121/scripts.pory"
Route121_Text_SafariZoneSign::
# 334 "data/maps/Route121/scripts.pory"
# 217 "data/maps/Route121/scripts.pory"
# 335 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare POKéMON!”\n"
# 336 "data/maps/Route121/scripts.pory"
	.string "SAFARI ZONE$"
