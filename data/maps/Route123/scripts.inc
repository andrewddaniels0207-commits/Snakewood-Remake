# 1 "data/maps/Route123/scripts.pory"

# 2 "data/maps/Route123/scripts.pory"
Route123_MapScripts::
# 3 "data/maps/Route123/scripts.pory"
# 2 "data/maps/Route123/scripts.pory"
# 4 "data/maps/Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_OnTransition
# 5 "data/maps/Route123/scripts.pory"
	.byte 0
# 6 "data/maps/Route123/scripts.pory"

# 7 "data/maps/Route123/scripts.pory"

# 8 "data/maps/Route123/scripts.pory"
Route123_OnTransition::
# 9 "data/maps/Route123/scripts.pory"
# 6 "data/maps/Route123/scripts.pory"
# 10 "data/maps/Route123/scripts.pory"
	special SetRoute123Weather
# 11 "data/maps/Route123/scripts.pory"
	end
# 12 "data/maps/Route123/scripts.pory"

# 13 "data/maps/Route123/scripts.pory"

# 14 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl::
# 15 "data/maps/Route123/scripts.pory"
# 11 "data/maps/Route123/scripts.pory"
# 16 "data/maps/Route123/scripts.pory"
	lock
# 17 "data/maps/Route123/scripts.pory"
# 12 "data/maps/Route123/scripts.pory"
# 18 "data/maps/Route123/scripts.pory"
	faceplayer
# 19 "data/maps/Route123/scripts.pory"
# 13 "data/maps/Route123/scripts.pory"
# 20 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_GigaDrainGirl_2
# 21 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl_1:
# 22 "data/maps/Route123/scripts.pory"
# 16 "data/maps/Route123/scripts.pory"
# 23 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 24 "data/maps/Route123/scripts.pory"
# 17 "data/maps/Route123/scripts.pory"
# 25 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 26 "data/maps/Route123/scripts.pory"
# 18 "data/maps/Route123/scripts.pory"
# 27 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, FALSE
# 28 "data/maps/Route123/scripts.pory"
	goto_if_eq Route123_EventScript_GigaDrainGirl_5
# 29 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl_4:
# 30 "data/maps/Route123/scripts.pory"
# 21 "data/maps/Route123/scripts.pory"
# 31 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
# 32 "data/maps/Route123/scripts.pory"
# 22 "data/maps/Route123/scripts.pory"
# 33 "data/maps/Route123/scripts.pory"
	giveitem ITEM_TM_GIGA_DRAIN
# 34 "data/maps/Route123/scripts.pory"
# 23 "data/maps/Route123/scripts.pory"
# 35 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, FALSE
# 36 "data/maps/Route123/scripts.pory"
	goto_if_eq Route123_EventScript_GigaDrainGirl_8
# 37 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl_7:
# 38 "data/maps/Route123/scripts.pory"
# 26 "data/maps/Route123/scripts.pory"
# 39 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 40 "data/maps/Route123/scripts.pory"
# 27 "data/maps/Route123/scripts.pory"
# 41 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 42 "data/maps/Route123/scripts.pory"
# 28 "data/maps/Route123/scripts.pory"
# 43 "data/maps/Route123/scripts.pory"
	release
# 44 "data/maps/Route123/scripts.pory"
	end
# 45 "data/maps/Route123/scripts.pory"

# 46 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl_2:
# 47 "data/maps/Route123/scripts.pory"
# 14 "data/maps/Route123/scripts.pory"
# 48 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_ReceivedGigaDrain
# 49 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_GigaDrainGirl_1
# 50 "data/maps/Route123/scripts.pory"

# 51 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl_5:
# 52 "data/maps/Route123/scripts.pory"
# 19 "data/maps/Route123/scripts.pory"
# 53 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_NoGrassMons
# 54 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_GigaDrainGirl_4
# 55 "data/maps/Route123/scripts.pory"

# 56 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl_8:
# 57 "data/maps/Route123/scripts.pory"
# 24 "data/maps/Route123/scripts.pory"
# 58 "data/maps/Route123/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 59 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_GigaDrainGirl_7
# 60 "data/maps/Route123/scripts.pory"

# 61 "data/maps/Route123/scripts.pory"

# 62 "data/maps/Route123/scripts.pory"
Route123_EventScript_NoGrassMons::
# 63 "data/maps/Route123/scripts.pory"
# 33 "data/maps/Route123/scripts.pory"
# 64 "data/maps/Route123/scripts.pory"
	release
# 65 "data/maps/Route123/scripts.pory"
	end
# 66 "data/maps/Route123/scripts.pory"

# 67 "data/maps/Route123/scripts.pory"

# 68 "data/maps/Route123/scripts.pory"
Route123_EventScript_ReceivedGigaDrain::
# 69 "data/maps/Route123/scripts.pory"
# 38 "data/maps/Route123/scripts.pory"
# 70 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 71 "data/maps/Route123/scripts.pory"
# 39 "data/maps/Route123/scripts.pory"
# 72 "data/maps/Route123/scripts.pory"
	release
# 73 "data/maps/Route123/scripts.pory"
	end
# 74 "data/maps/Route123/scripts.pory"

# 75 "data/maps/Route123/scripts.pory"

# 76 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSign::
# 77 "data/maps/Route123/scripts.pory"
# 44 "data/maps/Route123/scripts.pory"
# 78 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
# 79 "data/maps/Route123/scripts.pory"
	end
# 80 "data/maps/Route123/scripts.pory"

# 81 "data/maps/Route123/scripts.pory"

# 82 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSignMtPyre::
# 83 "data/maps/Route123/scripts.pory"
# 49 "data/maps/Route123/scripts.pory"
# 84 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
# 85 "data/maps/Route123/scripts.pory"
	end
# 86 "data/maps/Route123/scripts.pory"

# 87 "data/maps/Route123/scripts.pory"

# 88 "data/maps/Route123/scripts.pory"
Route123_EventScript_BerryMastersHouseSign::
# 89 "data/maps/Route123/scripts.pory"
# 54 "data/maps/Route123/scripts.pory"
# 90 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
# 91 "data/maps/Route123/scripts.pory"
	end
# 92 "data/maps/Route123/scripts.pory"

# 93 "data/maps/Route123/scripts.pory"

# 94 "data/maps/Route123/scripts.pory"
Route123_EventScript_Wendy::
# 95 "data/maps/Route123/scripts.pory"
# 59 "data/maps/Route123/scripts.pory"
# 96 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
# 97 "data/maps/Route123/scripts.pory"
# 60 "data/maps/Route123/scripts.pory"
# 98 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route123/scripts.pory"
	end
# 100 "data/maps/Route123/scripts.pory"

# 101 "data/maps/Route123/scripts.pory"

# 102 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton::
# 103 "data/maps/Route123/scripts.pory"
# 65 "data/maps/Route123/scripts.pory"
# 104 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
# 105 "data/maps/Route123/scripts.pory"
# 66 "data/maps/Route123/scripts.pory"
# 106 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route123/scripts.pory"
	end
# 108 "data/maps/Route123/scripts.pory"

# 109 "data/maps/Route123/scripts.pory"

# 110 "data/maps/Route123/scripts.pory"
Route123_EventScript_Violet::
# 111 "data/maps/Route123/scripts.pory"
# 71 "data/maps/Route123/scripts.pory"
# 112 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, Route123_Text_VioletIntro, Route123_Text_VioletDefeat
# 113 "data/maps/Route123/scripts.pory"
# 72 "data/maps/Route123/scripts.pory"
# 114 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route123/scripts.pory"
	end
# 116 "data/maps/Route123/scripts.pory"

# 117 "data/maps/Route123/scripts.pory"

# 118 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron::
# 119 "data/maps/Route123/scripts.pory"
# 77 "data/maps/Route123/scripts.pory"
# 120 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_CAMERON_1, Route123_Text_CameronIntro, Route123_Text_CameronDefeat, Route123_EventScript_RegisterCameron
# 121 "data/maps/Route123/scripts.pory"
# 78 "data/maps/Route123/scripts.pory"
# 122 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 123 "data/maps/Route123/scripts.pory"
# 79 "data/maps/Route123/scripts.pory"
# 124 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
# 125 "data/maps/Route123/scripts.pory"
	goto_if_eq Route123_EventScript_Cameron_2
# 126 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron_1:
# 127 "data/maps/Route123/scripts.pory"
# 82 "data/maps/Route123/scripts.pory"
# 128 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_DEFAULT
# 129 "data/maps/Route123/scripts.pory"
# 83 "data/maps/Route123/scripts.pory"
# 130 "data/maps/Route123/scripts.pory"
	release
# 131 "data/maps/Route123/scripts.pory"
	end
# 132 "data/maps/Route123/scripts.pory"

# 133 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron_2:
# 134 "data/maps/Route123/scripts.pory"
# 80 "data/maps/Route123/scripts.pory"
# 135 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_RematchCameron
# 136 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_Cameron_1
# 137 "data/maps/Route123/scripts.pory"

# 138 "data/maps/Route123/scripts.pory"

# 139 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterCameron::
# 140 "data/maps/Route123/scripts.pory"
# 88 "data/maps/Route123/scripts.pory"
# 141 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 142 "data/maps/Route123/scripts.pory"
# 89 "data/maps/Route123/scripts.pory"
# 143 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route123/scripts.pory"
# 90 "data/maps/Route123/scripts.pory"
# 145 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 146 "data/maps/Route123/scripts.pory"
# 91 "data/maps/Route123/scripts.pory"
# 147 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
# 148 "data/maps/Route123/scripts.pory"
# 92 "data/maps/Route123/scripts.pory"
# 149 "data/maps/Route123/scripts.pory"
	release
# 150 "data/maps/Route123/scripts.pory"
	end
# 151 "data/maps/Route123/scripts.pory"

# 152 "data/maps/Route123/scripts.pory"

# 153 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchCameron::
# 154 "data/maps/Route123/scripts.pory"
# 97 "data/maps/Route123/scripts.pory"
# 155 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 156 "data/maps/Route123/scripts.pory"
# 98 "data/maps/Route123/scripts.pory"
# 157 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
# 158 "data/maps/Route123/scripts.pory"
	end
# 159 "data/maps/Route123/scripts.pory"

# 160 "data/maps/Route123/scripts.pory"

# 161 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki::
# 162 "data/maps/Route123/scripts.pory"
# 103 "data/maps/Route123/scripts.pory"
# 163 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat, Route123_EventScript_RegisterJacki
# 164 "data/maps/Route123/scripts.pory"
# 104 "data/maps/Route123/scripts.pory"
# 165 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 166 "data/maps/Route123/scripts.pory"
# 105 "data/maps/Route123/scripts.pory"
# 167 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
# 168 "data/maps/Route123/scripts.pory"
	goto_if_eq Route123_EventScript_Jacki_2
# 169 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki_1:
# 170 "data/maps/Route123/scripts.pory"
# 108 "data/maps/Route123/scripts.pory"
# 171 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
# 172 "data/maps/Route123/scripts.pory"
# 109 "data/maps/Route123/scripts.pory"
# 173 "data/maps/Route123/scripts.pory"
	release
# 174 "data/maps/Route123/scripts.pory"
	end
# 175 "data/maps/Route123/scripts.pory"

# 176 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki_2:
# 177 "data/maps/Route123/scripts.pory"
# 106 "data/maps/Route123/scripts.pory"
# 178 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_RematchJacki
# 179 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_Jacki_1
# 180 "data/maps/Route123/scripts.pory"

# 181 "data/maps/Route123/scripts.pory"

# 182 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki::
# 183 "data/maps/Route123/scripts.pory"
# 114 "data/maps/Route123/scripts.pory"
# 184 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 185 "data/maps/Route123/scripts.pory"
# 115 "data/maps/Route123/scripts.pory"
# 186 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route123/scripts.pory"
# 116 "data/maps/Route123/scripts.pory"
# 188 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 189 "data/maps/Route123/scripts.pory"
# 117 "data/maps/Route123/scripts.pory"
# 190 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
# 191 "data/maps/Route123/scripts.pory"
# 118 "data/maps/Route123/scripts.pory"
# 192 "data/maps/Route123/scripts.pory"
	release
# 193 "data/maps/Route123/scripts.pory"
	end
# 194 "data/maps/Route123/scripts.pory"

# 195 "data/maps/Route123/scripts.pory"

# 196 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki::
# 197 "data/maps/Route123/scripts.pory"
# 123 "data/maps/Route123/scripts.pory"
# 198 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 199 "data/maps/Route123/scripts.pory"
# 124 "data/maps/Route123/scripts.pory"
# 200 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route123/scripts.pory"
	end
# 202 "data/maps/Route123/scripts.pory"

# 203 "data/maps/Route123/scripts.pory"

# 204 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu::
# 205 "data/maps/Route123/scripts.pory"
# 129 "data/maps/Route123/scripts.pory"
# 206 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat, Route123_Text_MiuNotEnoughMons
# 207 "data/maps/Route123/scripts.pory"
# 130 "data/maps/Route123/scripts.pory"
# 208 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route123/scripts.pory"
	end
# 210 "data/maps/Route123/scripts.pory"

# 211 "data/maps/Route123/scripts.pory"

# 212 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki::
# 213 "data/maps/Route123/scripts.pory"
# 135 "data/maps/Route123/scripts.pory"
# 214 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat, Route123_Text_YukiNotEnoughMons
# 215 "data/maps/Route123/scripts.pory"
# 136 "data/maps/Route123/scripts.pory"
# 216 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/Route123/scripts.pory"
	end
# 218 "data/maps/Route123/scripts.pory"

# 219 "data/maps/Route123/scripts.pory"

# 220 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra::
# 221 "data/maps/Route123/scripts.pory"
# 141 "data/maps/Route123/scripts.pory"
# 222 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
# 223 "data/maps/Route123/scripts.pory"
# 142 "data/maps/Route123/scripts.pory"
# 224 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/Route123/scripts.pory"
	end
# 226 "data/maps/Route123/scripts.pory"

# 227 "data/maps/Route123/scripts.pory"

# 228 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick::
# 229 "data/maps/Route123/scripts.pory"
# 147 "data/maps/Route123/scripts.pory"
# 230 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
# 231 "data/maps/Route123/scripts.pory"
# 148 "data/maps/Route123/scripts.pory"
# 232 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route123/scripts.pory"
	end
# 234 "data/maps/Route123/scripts.pory"

# 235 "data/maps/Route123/scripts.pory"

# 236 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto::
# 237 "data/maps/Route123/scripts.pory"
# 153 "data/maps/Route123/scripts.pory"
# 238 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
# 239 "data/maps/Route123/scripts.pory"
# 154 "data/maps/Route123/scripts.pory"
# 240 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route123/scripts.pory"
	end
# 242 "data/maps/Route123/scripts.pory"

# 243 "data/maps/Route123/scripts.pory"

# 244 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed::
# 245 "data/maps/Route123/scripts.pory"
# 159 "data/maps/Route123/scripts.pory"
# 246 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
# 247 "data/maps/Route123/scripts.pory"
# 160 "data/maps/Route123/scripts.pory"
# 248 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/Route123/scripts.pory"
	end
# 250 "data/maps/Route123/scripts.pory"

# 251 "data/maps/Route123/scripts.pory"

# 252 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley::
# 253 "data/maps/Route123/scripts.pory"
# 165 "data/maps/Route123/scripts.pory"
# 254 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
# 255 "data/maps/Route123/scripts.pory"
# 166 "data/maps/Route123/scripts.pory"
# 256 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 257 "data/maps/Route123/scripts.pory"
	end
# 258 "data/maps/Route123/scripts.pory"

# 259 "data/maps/Route123/scripts.pory"

# 260 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas::
# 261 "data/maps/Route123/scripts.pory"
# 171 "data/maps/Route123/scripts.pory"
# 262 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
# 263 "data/maps/Route123/scripts.pory"
# 172 "data/maps/Route123/scripts.pory"
# 264 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 265 "data/maps/Route123/scripts.pory"
	end
# 266 "data/maps/Route123/scripts.pory"

# 267 "data/maps/Route123/scripts.pory"

# 268 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn::
# 269 "data/maps/Route123/scripts.pory"
# 177 "data/maps/Route123/scripts.pory"
# 270 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
# 271 "data/maps/Route123/scripts.pory"
# 178 "data/maps/Route123/scripts.pory"
# 272 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 273 "data/maps/Route123/scripts.pory"
	end
# 274 "data/maps/Route123/scripts.pory"

# 275 "data/maps/Route123/scripts.pory"

# 276 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis::
# 277 "data/maps/Route123/scripts.pory"
# 183 "data/maps/Route123/scripts.pory"
# 278 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat
# 279 "data/maps/Route123/scripts.pory"
# 184 "data/maps/Route123/scripts.pory"
# 280 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route123/scripts.pory"
	end
# 282 "data/maps/Route123/scripts.pory"

# 283 "data/maps/Route123/scripts.pory"

# 284 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando::
# 285 "data/maps/Route123/scripts.pory"
# 189 "data/maps/Route123/scripts.pory"
# 286 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat, Route123_EventScript_RegisterFernando
# 287 "data/maps/Route123/scripts.pory"
# 190 "data/maps/Route123/scripts.pory"
# 288 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 289 "data/maps/Route123/scripts.pory"
# 191 "data/maps/Route123/scripts.pory"
# 290 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
# 291 "data/maps/Route123/scripts.pory"
	goto_if_eq Route123_EventScript_Fernando_2
# 292 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando_1:
# 293 "data/maps/Route123/scripts.pory"
# 194 "data/maps/Route123/scripts.pory"
# 294 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
# 295 "data/maps/Route123/scripts.pory"
# 195 "data/maps/Route123/scripts.pory"
# 296 "data/maps/Route123/scripts.pory"
	release
# 297 "data/maps/Route123/scripts.pory"
	end
# 298 "data/maps/Route123/scripts.pory"

# 299 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando_2:
# 300 "data/maps/Route123/scripts.pory"
# 192 "data/maps/Route123/scripts.pory"
# 301 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_RematchFernando
# 302 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_Fernando_1
# 303 "data/maps/Route123/scripts.pory"

# 304 "data/maps/Route123/scripts.pory"

# 305 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando::
# 306 "data/maps/Route123/scripts.pory"
# 200 "data/maps/Route123/scripts.pory"
# 307 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 308 "data/maps/Route123/scripts.pory"
# 201 "data/maps/Route123/scripts.pory"
# 309 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 310 "data/maps/Route123/scripts.pory"
# 202 "data/maps/Route123/scripts.pory"
# 311 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 312 "data/maps/Route123/scripts.pory"
# 203 "data/maps/Route123/scripts.pory"
# 313 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
# 314 "data/maps/Route123/scripts.pory"
# 204 "data/maps/Route123/scripts.pory"
# 315 "data/maps/Route123/scripts.pory"
	release
# 316 "data/maps/Route123/scripts.pory"
	end
# 317 "data/maps/Route123/scripts.pory"

# 318 "data/maps/Route123/scripts.pory"

# 319 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando::
# 320 "data/maps/Route123/scripts.pory"
# 209 "data/maps/Route123/scripts.pory"
# 321 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 322 "data/maps/Route123/scripts.pory"
# 210 "data/maps/Route123/scripts.pory"
# 323 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 324 "data/maps/Route123/scripts.pory"
	end
# 325 "data/maps/Route123/scripts.pory"

# 326 "data/maps/Route123/scripts.pory"

# 327 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveAny::
# 328 "data/maps/Route123/scripts.pory"
# 214 "data/maps/Route123/scripts.pory"
# 329 "data/maps/Route123/scripts.pory"
	.string "I love GRASS-type POKéMON!\p"
# 330 "data/maps/Route123/scripts.pory"
	.string "Do you have any GRASS-type POKéMON?$"
# 331 "data/maps/Route123/scripts.pory"

# 332 "data/maps/Route123/scripts.pory"
Route123_Text_YouLikeGrassMonsTooHaveThis::
# 333 "data/maps/Route123/scripts.pory"
# 219 "data/maps/Route123/scripts.pory"
# 334 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
# 335 "data/maps/Route123/scripts.pory"
	.string "You like GRASS-type POKéMON, too,\n"
# 336 "data/maps/Route123/scripts.pory"
	.string "don't you?\p"
# 337 "data/maps/Route123/scripts.pory"
	.string "I'm so happy, you can have this!\n"
# 338 "data/maps/Route123/scripts.pory"
	.string "It's a token of our friendship.$"
# 339 "data/maps/Route123/scripts.pory"

# 340 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon::
# 341 "data/maps/Route123/scripts.pory"
# 227 "data/maps/Route123/scripts.pory"
# 342 "data/maps/Route123/scripts.pory"
	.string "I check trees with my GRASS-type\n"
# 343 "data/maps/Route123/scripts.pory"
	.string "POKéMON. I'm like a tree doctor.$"
# 344 "data/maps/Route123/scripts.pory"

# 345 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign::
# 346 "data/maps/Route123/scripts.pory"
# 232 "data/maps/Route123/scripts.pory"
# 347 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 123\n"
# 348 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 118$"
# 349 "data/maps/Route123/scripts.pory"

# 350 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre::
# 351 "data/maps/Route123/scripts.pory"
# 237 "data/maps/Route123/scripts.pory"
# 352 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} MT. PYRE\n"
# 353 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 354 "data/maps/Route123/scripts.pory"

# 355 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse::
# 356 "data/maps/Route123/scripts.pory"
# 242 "data/maps/Route123/scripts.pory"
# 357 "data/maps/Route123/scripts.pory"
	.string "BERRY MASTER'S HOUSE$"
