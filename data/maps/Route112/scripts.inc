# 1 "data/maps/Route112/scripts.pory"

# 2 "data/maps/Route112/scripts.pory"
Route112_MapScripts::
# 3 "data/maps/Route112/scripts.pory"
# 2 "data/maps/Route112/scripts.pory"
# 4 "data/maps/Route112/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
# 5 "data/maps/Route112/scripts.pory"
	.byte 0
# 6 "data/maps/Route112/scripts.pory"

# 7 "data/maps/Route112/scripts.pory"

# 8 "data/maps/Route112/scripts.pory"
Route112_OnTransition::
# 9 "data/maps/Route112/scripts.pory"
# 6 "data/maps/Route112/scripts.pory"
# 10 "data/maps/Route112/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 11 "data/maps/Route112/scripts.pory"
# 7 "data/maps/Route112/scripts.pory"
# 12 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 13 "data/maps/Route112/scripts.pory"
	end
# 14 "data/maps/Route112/scripts.pory"

# 15 "data/maps/Route112/scripts.pory"

# 16 "data/maps/Route112/scripts.pory"
Route112_EventScript_MagmaGrunts::
# 17 "data/maps/Route112/scripts.pory"
# 12 "data/maps/Route112/scripts.pory"
# 18 "data/maps/Route112/scripts.pory"
	lockall
# 19 "data/maps/Route112/scripts.pory"
# 13 "data/maps/Route112/scripts.pory"
# 20 "data/maps/Route112/scripts.pory"
	delay 40
# 21 "data/maps/Route112/scripts.pory"
# 14 "data/maps/Route112/scripts.pory"
# 22 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 23 "data/maps/Route112/scripts.pory"
# 15 "data/maps/Route112/scripts.pory"
# 24 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route112/scripts.pory"
# 16 "data/maps/Route112/scripts.pory"
# 26 "data/maps/Route112/scripts.pory"
	delay 20
# 27 "data/maps/Route112/scripts.pory"
# 17 "data/maps/Route112/scripts.pory"
# 28 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
# 29 "data/maps/Route112/scripts.pory"
# 18 "data/maps/Route112/scripts.pory"
# 30 "data/maps/Route112/scripts.pory"
	closemessage
# 31 "data/maps/Route112/scripts.pory"
# 19 "data/maps/Route112/scripts.pory"
# 32 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_FaceOriginalDirection
# 33 "data/maps/Route112/scripts.pory"
# 20 "data/maps/Route112/scripts.pory"
# 34 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route112/scripts.pory"
# 21 "data/maps/Route112/scripts.pory"
# 36 "data/maps/Route112/scripts.pory"
	delay 40
# 37 "data/maps/Route112/scripts.pory"
# 22 "data/maps/Route112/scripts.pory"
# 38 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 39 "data/maps/Route112/scripts.pory"
# 23 "data/maps/Route112/scripts.pory"
# 40 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route112/scripts.pory"
# 24 "data/maps/Route112/scripts.pory"
# 42 "data/maps/Route112/scripts.pory"
	delay 20
# 43 "data/maps/Route112/scripts.pory"
# 25 "data/maps/Route112/scripts.pory"
# 44 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
# 45 "data/maps/Route112/scripts.pory"
# 26 "data/maps/Route112/scripts.pory"
# 46 "data/maps/Route112/scripts.pory"
	closemessage
# 47 "data/maps/Route112/scripts.pory"
# 27 "data/maps/Route112/scripts.pory"
# 48 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_FaceOriginalDirection
# 49 "data/maps/Route112/scripts.pory"
# 28 "data/maps/Route112/scripts.pory"
# 50 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route112/scripts.pory"
# 29 "data/maps/Route112/scripts.pory"
# 52 "data/maps/Route112/scripts.pory"
	delay 40
# 53 "data/maps/Route112/scripts.pory"
# 30 "data/maps/Route112/scripts.pory"
# 54 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 55 "data/maps/Route112/scripts.pory"
# 31 "data/maps/Route112/scripts.pory"
# 56 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route112/scripts.pory"
# 32 "data/maps/Route112/scripts.pory"
# 58 "data/maps/Route112/scripts.pory"
	delay 20
# 59 "data/maps/Route112/scripts.pory"
# 33 "data/maps/Route112/scripts.pory"
# 60 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
# 61 "data/maps/Route112/scripts.pory"
# 34 "data/maps/Route112/scripts.pory"
# 62 "data/maps/Route112/scripts.pory"
	closemessage
# 63 "data/maps/Route112/scripts.pory"
# 35 "data/maps/Route112/scripts.pory"
# 64 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_FaceOriginalDirection
# 65 "data/maps/Route112/scripts.pory"
# 36 "data/maps/Route112/scripts.pory"
# 66 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route112/scripts.pory"
# 37 "data/maps/Route112/scripts.pory"
# 68 "data/maps/Route112/scripts.pory"
	delay 40
# 69 "data/maps/Route112/scripts.pory"
# 38 "data/maps/Route112/scripts.pory"
# 70 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 71 "data/maps/Route112/scripts.pory"
# 39 "data/maps/Route112/scripts.pory"
# 72 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route112/scripts.pory"
# 40 "data/maps/Route112/scripts.pory"
# 74 "data/maps/Route112/scripts.pory"
	delay 20
# 75 "data/maps/Route112/scripts.pory"
# 41 "data/maps/Route112/scripts.pory"
# 76 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
# 77 "data/maps/Route112/scripts.pory"
# 42 "data/maps/Route112/scripts.pory"
# 78 "data/maps/Route112/scripts.pory"
	closemessage
# 79 "data/maps/Route112/scripts.pory"
# 43 "data/maps/Route112/scripts.pory"
# 80 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_FaceOriginalDirection
# 81 "data/maps/Route112/scripts.pory"
# 44 "data/maps/Route112/scripts.pory"
# 82 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route112/scripts.pory"
# 45 "data/maps/Route112/scripts.pory"
# 84 "data/maps/Route112/scripts.pory"
	releaseall
# 85 "data/maps/Route112/scripts.pory"
	end
# 86 "data/maps/Route112/scripts.pory"

# 87 "data/maps/Route112/scripts.pory"

# 88 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneyCableCarSign::
# 89 "data/maps/Route112/scripts.pory"
# 50 "data/maps/Route112/scripts.pory"
# 90 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
# 91 "data/maps/Route112/scripts.pory"
	end
# 92 "data/maps/Route112/scripts.pory"

# 93 "data/maps/Route112/scripts.pory"

# 94 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneySign::
# 95 "data/maps/Route112/scripts.pory"
# 55 "data/maps/Route112/scripts.pory"
# 96 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
# 97 "data/maps/Route112/scripts.pory"
	end
# 98 "data/maps/Route112/scripts.pory"

# 99 "data/maps/Route112/scripts.pory"

# 100 "data/maps/Route112/scripts.pory"
Route112_EventScript_RouteSignLavaridge::
# 101 "data/maps/Route112/scripts.pory"
# 60 "data/maps/Route112/scripts.pory"
# 102 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
# 103 "data/maps/Route112/scripts.pory"
	end
# 104 "data/maps/Route112/scripts.pory"

# 105 "data/maps/Route112/scripts.pory"

# 106 "data/maps/Route112/scripts.pory"
Route112_EventScript_Hiker::
# 107 "data/maps/Route112/scripts.pory"
# 65 "data/maps/Route112/scripts.pory"
# 108 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
# 109 "data/maps/Route112/scripts.pory"
	end
# 110 "data/maps/Route112/scripts.pory"

# 111 "data/maps/Route112/scripts.pory"

# 112 "data/maps/Route112/scripts.pory"
Route112_EventScript_Brice::
# 113 "data/maps/Route112/scripts.pory"
# 70 "data/maps/Route112/scripts.pory"
# 114 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
# 115 "data/maps/Route112/scripts.pory"
# 71 "data/maps/Route112/scripts.pory"
# 116 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route112/scripts.pory"
	end
# 118 "data/maps/Route112/scripts.pory"

# 119 "data/maps/Route112/scripts.pory"

# 120 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent::
# 121 "data/maps/Route112/scripts.pory"
# 76 "data/maps/Route112/scripts.pory"
# 122 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
# 123 "data/maps/Route112/scripts.pory"
# 77 "data/maps/Route112/scripts.pory"
# 124 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 125 "data/maps/Route112/scripts.pory"
# 78 "data/maps/Route112/scripts.pory"
# 126 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, TRUE
# 127 "data/maps/Route112/scripts.pory"
	goto_if_eq Route112_EventScript_Trent_2
# 128 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent_1:
# 129 "data/maps/Route112/scripts.pory"
# 81 "data/maps/Route112/scripts.pory"
# 130 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
# 131 "data/maps/Route112/scripts.pory"
# 82 "data/maps/Route112/scripts.pory"
# 132 "data/maps/Route112/scripts.pory"
	release
# 133 "data/maps/Route112/scripts.pory"
	end
# 134 "data/maps/Route112/scripts.pory"

# 135 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent_2:
# 136 "data/maps/Route112/scripts.pory"
# 79 "data/maps/Route112/scripts.pory"
# 137 "data/maps/Route112/scripts.pory"
	goto Route112_EventScript_RematchTrent
# 138 "data/maps/Route112/scripts.pory"
	goto Route112_EventScript_Trent_1
# 139 "data/maps/Route112/scripts.pory"

# 140 "data/maps/Route112/scripts.pory"

# 141 "data/maps/Route112/scripts.pory"
Route112_EventScript_RegisterTrent::
# 142 "data/maps/Route112/scripts.pory"
# 87 "data/maps/Route112/scripts.pory"
# 143 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 144 "data/maps/Route112/scripts.pory"
# 88 "data/maps/Route112/scripts.pory"
# 145 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route112/scripts.pory"
# 89 "data/maps/Route112/scripts.pory"
# 147 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 148 "data/maps/Route112/scripts.pory"
# 90 "data/maps/Route112/scripts.pory"
# 149 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
# 150 "data/maps/Route112/scripts.pory"
# 91 "data/maps/Route112/scripts.pory"
# 151 "data/maps/Route112/scripts.pory"
	release
# 152 "data/maps/Route112/scripts.pory"
	end
# 153 "data/maps/Route112/scripts.pory"

# 154 "data/maps/Route112/scripts.pory"

# 155 "data/maps/Route112/scripts.pory"
Route112_EventScript_RematchTrent::
# 156 "data/maps/Route112/scripts.pory"
# 96 "data/maps/Route112/scripts.pory"
# 157 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 158 "data/maps/Route112/scripts.pory"
# 97 "data/maps/Route112/scripts.pory"
# 159 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
# 160 "data/maps/Route112/scripts.pory"
	end
# 161 "data/maps/Route112/scripts.pory"

# 162 "data/maps/Route112/scripts.pory"

# 163 "data/maps/Route112/scripts.pory"
Route112_EventScript_Larry::
# 164 "data/maps/Route112/scripts.pory"
# 102 "data/maps/Route112/scripts.pory"
# 165 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 166 "data/maps/Route112/scripts.pory"
# 103 "data/maps/Route112/scripts.pory"
# 167 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 168 "data/maps/Route112/scripts.pory"
	end
# 169 "data/maps/Route112/scripts.pory"

# 170 "data/maps/Route112/scripts.pory"

# 171 "data/maps/Route112/scripts.pory"
Route112_EventScript_Carol::
# 172 "data/maps/Route112/scripts.pory"
# 108 "data/maps/Route112/scripts.pory"
# 173 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 174 "data/maps/Route112/scripts.pory"
# 109 "data/maps/Route112/scripts.pory"
# 175 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route112/scripts.pory"
	end
# 177 "data/maps/Route112/scripts.pory"

# 178 "data/maps/Route112/scripts.pory"

# 179 "data/maps/Route112/scripts.pory"
Route112_EventScript_Bryant::
# 180 "data/maps/Route112/scripts.pory"
# 114 "data/maps/Route112/scripts.pory"
# 181 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 182 "data/maps/Route112/scripts.pory"
# 115 "data/maps/Route112/scripts.pory"
# 183 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route112/scripts.pory"
	end
# 185 "data/maps/Route112/scripts.pory"

# 186 "data/maps/Route112/scripts.pory"

# 187 "data/maps/Route112/scripts.pory"
Route112_EventScript_Shayla::
# 188 "data/maps/Route112/scripts.pory"
# 120 "data/maps/Route112/scripts.pory"
# 189 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 190 "data/maps/Route112/scripts.pory"
# 121 "data/maps/Route112/scripts.pory"
# 191 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route112/scripts.pory"
	end
# 193 "data/maps/Route112/scripts.pory"

# 194 "data/maps/Route112/scripts.pory"

# 195 "data/maps/Route112/scripts.pory"
Route112_Text_LeaderGoingToAwakenThing::
# 196 "data/maps/Route112/scripts.pory"
# 125 "data/maps/Route112/scripts.pory"
# 197 "data/maps/Route112/scripts.pory"
	.string "Hey, man, is our leader really going\n"
# 198 "data/maps/Route112/scripts.pory"
	.string "to awaken that thing?$"
# 199 "data/maps/Route112/scripts.pory"

# 200 "data/maps/Route112/scripts.pory"
Route112_Text_YeahWeNeedMeteorite::
# 201 "data/maps/Route112/scripts.pory"
# 130 "data/maps/Route112/scripts.pory"
# 202 "data/maps/Route112/scripts.pory"
	.string "Sounds like it, yeah. But I heard\n"
# 203 "data/maps/Route112/scripts.pory"
	.string "we need a METEORITE to do it.$"
# 204 "data/maps/Route112/scripts.pory"

# 205 "data/maps/Route112/scripts.pory"
Route112_Text_OhThatsWhyCrewWentToFallarbor::
# 206 "data/maps/Route112/scripts.pory"
# 135 "data/maps/Route112/scripts.pory"
# 207 "data/maps/Route112/scripts.pory"
	.string "Oh, I get it now. That's why the rest\n"
# 208 "data/maps/Route112/scripts.pory"
	.string "of the crew went out to FALLARBOR.$"
# 209 "data/maps/Route112/scripts.pory"

# 210 "data/maps/Route112/scripts.pory"
Route112_Text_CantLetAnyonePassUntilTheyreBack::
# 211 "data/maps/Route112/scripts.pory"
# 140 "data/maps/Route112/scripts.pory"
# 212 "data/maps/Route112/scripts.pory"
	.string "You got it. And until they come back,\n"
# 213 "data/maps/Route112/scripts.pory"
	.string "we're not to let anyone pass, right.$"
# 214 "data/maps/Route112/scripts.pory"

# 215 "data/maps/Route112/scripts.pory"
Route112_Text_NotEasyToGetBackToLavaridge::
# 216 "data/maps/Route112/scripts.pory"
# 145 "data/maps/Route112/scripts.pory"
# 217 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to MAUVILLE, but if\n"
# 218 "data/maps/Route112/scripts.pory"
	.string "I went down these ledges, it'd be no\l"
# 219 "data/maps/Route112/scripts.pory"
	.string "easy matter to get back to LAVARIDGE.$"
# 220 "data/maps/Route112/scripts.pory"

# 221 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneyCableCarSign::
# 222 "data/maps/Route112/scripts.pory"
# 151 "data/maps/Route112/scripts.pory"
# 223 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n"
# 224 "data/maps/Route112/scripts.pory"
	.string "“A short walk {UP_ARROW} way!”$"
# 225 "data/maps/Route112/scripts.pory"

# 226 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneySign::
# 227 "data/maps/Route112/scripts.pory"
# 156 "data/maps/Route112/scripts.pory"
# 228 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY\p"
# 229 "data/maps/Route112/scripts.pory"
	.string "“For LAVARIDGE TOWN or the summit,\n"
# 230 "data/maps/Route112/scripts.pory"
	.string "please take the CABLE CAR.”$"
# 231 "data/maps/Route112/scripts.pory"

# 232 "data/maps/Route112/scripts.pory"
Route112_Text_RouteSignLavaridge::
# 233 "data/maps/Route112/scripts.pory"
# 162 "data/maps/Route112/scripts.pory"
# 234 "data/maps/Route112/scripts.pory"
	.string "ROUTE 112\n"
# 235 "data/maps/Route112/scripts.pory"
	.string "{LEFT_ARROW} LAVARIDGE TOWN$"
