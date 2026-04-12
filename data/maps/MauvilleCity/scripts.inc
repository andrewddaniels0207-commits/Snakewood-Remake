# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 3 "data/maps/MauvilleCity/scripts.pory"
# 2 "data/maps/MauvilleCity/scripts.pory"
# 4 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 5 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 6 "data/maps/MauvilleCity/scripts.pory"

# 7 "data/maps/MauvilleCity/scripts.pory"

# 8 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition::
# 9 "data/maps/MauvilleCity/scripts.pory"
# 6 "data/maps/MauvilleCity/scripts.pory"
# 10 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 11 "data/maps/MauvilleCity/scripts.pory"
# 7 "data/maps/MauvilleCity/scripts.pory"
# 12 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 13 "data/maps/MauvilleCity/scripts.pory"
# 8 "data/maps/MauvilleCity/scripts.pory"
# 14 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 15 "data/maps/MauvilleCity/scripts.pory"
# 9 "data/maps/MauvilleCity/scripts.pory"
# 16 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 17 "data/maps/MauvilleCity/scripts.pory"
# 10 "data/maps/MauvilleCity/scripts.pory"
# 18 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 19 "data/maps/MauvilleCity/scripts.pory"
# 11 "data/maps/MauvilleCity/scripts.pory"
# 20 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 21 "data/maps/MauvilleCity/scripts.pory"
# 12 "data/maps/MauvilleCity/scripts.pory"
# 22 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_OnTransition_2
# 23 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition_1:
# 24 "data/maps/MauvilleCity/scripts.pory"
	end
# 25 "data/maps/MauvilleCity/scripts.pory"

# 26 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition_2:
# 27 "data/maps/MauvilleCity/scripts.pory"
# 13 "data/maps/MauvilleCity/scripts.pory"
# 28 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_MoveWattsonBackToGym
# 29 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_OnTransition_1
# 30 "data/maps/MauvilleCity/scripts.pory"

# 31 "data/maps/MauvilleCity/scripts.pory"

# 32 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 33 "data/maps/MauvilleCity/scripts.pory"
# 19 "data/maps/MauvilleCity/scripts.pory"
# 34 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 35 "data/maps/MauvilleCity/scripts.pory"
# 20 "data/maps/MauvilleCity/scripts.pory"
# 36 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 37 "data/maps/MauvilleCity/scripts.pory"
# 21 "data/maps/MauvilleCity/scripts.pory"
# 38 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 39 "data/maps/MauvilleCity/scripts.pory"
	return
# 40 "data/maps/MauvilleCity/scripts.pory"

# 41 "data/maps/MauvilleCity/scripts.pory"

# 42 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 43 "data/maps/MauvilleCity/scripts.pory"
# 26 "data/maps/MauvilleCity/scripts.pory"
# 44 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 45 "data/maps/MauvilleCity/scripts.pory"
	end
# 46 "data/maps/MauvilleCity/scripts.pory"

# 47 "data/maps/MauvilleCity/scripts.pory"

# 48 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 49 "data/maps/MauvilleCity/scripts.pory"
# 31 "data/maps/MauvilleCity/scripts.pory"
# 50 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 51 "data/maps/MauvilleCity/scripts.pory"
	end
# 52 "data/maps/MauvilleCity/scripts.pory"

# 53 "data/maps/MauvilleCity/scripts.pory"

# 54 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 55 "data/maps/MauvilleCity/scripts.pory"
# 36 "data/maps/MauvilleCity/scripts.pory"
# 56 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 57 "data/maps/MauvilleCity/scripts.pory"
	end
# 58 "data/maps/MauvilleCity/scripts.pory"

# 59 "data/maps/MauvilleCity/scripts.pory"

# 60 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 61 "data/maps/MauvilleCity/scripts.pory"
# 41 "data/maps/MauvilleCity/scripts.pory"
# 62 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 63 "data/maps/MauvilleCity/scripts.pory"
	end
# 64 "data/maps/MauvilleCity/scripts.pory"

# 65 "data/maps/MauvilleCity/scripts.pory"

# 66 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 67 "data/maps/MauvilleCity/scripts.pory"
# 46 "data/maps/MauvilleCity/scripts.pory"
# 68 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 69 "data/maps/MauvilleCity/scripts.pory"
	end
# 70 "data/maps/MauvilleCity/scripts.pory"

# 71 "data/maps/MauvilleCity/scripts.pory"

# 72 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 73 "data/maps/MauvilleCity/scripts.pory"
# 51 "data/maps/MauvilleCity/scripts.pory"
# 74 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 75 "data/maps/MauvilleCity/scripts.pory"
	end
# 76 "data/maps/MauvilleCity/scripts.pory"

# 77 "data/maps/MauvilleCity/scripts.pory"

# 78 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 79 "data/maps/MauvilleCity/scripts.pory"
# 56 "data/maps/MauvilleCity/scripts.pory"
# 80 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 81 "data/maps/MauvilleCity/scripts.pory"
	end
# 82 "data/maps/MauvilleCity/scripts.pory"

# 83 "data/maps/MauvilleCity/scripts.pory"

# 84 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 85 "data/maps/MauvilleCity/scripts.pory"
# 61 "data/maps/MauvilleCity/scripts.pory"
# 86 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 87 "data/maps/MauvilleCity/scripts.pory"
	end
# 88 "data/maps/MauvilleCity/scripts.pory"

# 89 "data/maps/MauvilleCity/scripts.pory"

# 90 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 91 "data/maps/MauvilleCity/scripts.pory"
# 66 "data/maps/MauvilleCity/scripts.pory"
# 92 "data/maps/MauvilleCity/scripts.pory"
	lock
# 93 "data/maps/MauvilleCity/scripts.pory"
# 67 "data/maps/MauvilleCity/scripts.pory"
# 94 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 95 "data/maps/MauvilleCity/scripts.pory"
# 68 "data/maps/MauvilleCity/scripts.pory"
# 96 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_SchoolKidM_2
# 97 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM_1:
# 98 "data/maps/MauvilleCity/scripts.pory"
# 71 "data/maps/MauvilleCity/scripts.pory"
# 99 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 100 "data/maps/MauvilleCity/scripts.pory"
# 72 "data/maps/MauvilleCity/scripts.pory"
# 101 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 102 "data/maps/MauvilleCity/scripts.pory"
# 73 "data/maps/MauvilleCity/scripts.pory"
# 103 "data/maps/MauvilleCity/scripts.pory"
	release
# 104 "data/maps/MauvilleCity/scripts.pory"
	end
# 105 "data/maps/MauvilleCity/scripts.pory"

# 106 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM_2:
# 107 "data/maps/MauvilleCity/scripts.pory"
# 69 "data/maps/MauvilleCity/scripts.pory"
# 108 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_TVExplained
# 109 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_SchoolKidM_1
# 110 "data/maps/MauvilleCity/scripts.pory"

# 111 "data/maps/MauvilleCity/scripts.pory"

# 112 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 113 "data/maps/MauvilleCity/scripts.pory"
# 78 "data/maps/MauvilleCity/scripts.pory"
# 114 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 115 "data/maps/MauvilleCity/scripts.pory"
# 79 "data/maps/MauvilleCity/scripts.pory"
# 116 "data/maps/MauvilleCity/scripts.pory"
	release
# 117 "data/maps/MauvilleCity/scripts.pory"
	end
# 118 "data/maps/MauvilleCity/scripts.pory"

# 119 "data/maps/MauvilleCity/scripts.pory"

# 120 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 121 "data/maps/MauvilleCity/scripts.pory"
# 84 "data/maps/MauvilleCity/scripts.pory"
# 122 "data/maps/MauvilleCity/scripts.pory"
	lock
# 123 "data/maps/MauvilleCity/scripts.pory"
# 85 "data/maps/MauvilleCity/scripts.pory"
# 124 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 125 "data/maps/MauvilleCity/scripts.pory"
# 86 "data/maps/MauvilleCity/scripts.pory"
# 126 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallysUncle_2
# 127 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle_1:
# 128 "data/maps/MauvilleCity/scripts.pory"
# 89 "data/maps/MauvilleCity/scripts.pory"
# 129 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 130 "data/maps/MauvilleCity/scripts.pory"
# 90 "data/maps/MauvilleCity/scripts.pory"
# 131 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 132 "data/maps/MauvilleCity/scripts.pory"
# 91 "data/maps/MauvilleCity/scripts.pory"
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 134 "data/maps/MauvilleCity/scripts.pory"
# 92 "data/maps/MauvilleCity/scripts.pory"
# 135 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 136 "data/maps/MauvilleCity/scripts.pory"
# 93 "data/maps/MauvilleCity/scripts.pory"
# 137 "data/maps/MauvilleCity/scripts.pory"
	release
# 138 "data/maps/MauvilleCity/scripts.pory"
	end
# 139 "data/maps/MauvilleCity/scripts.pory"

# 140 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle_2:
# 141 "data/maps/MauvilleCity/scripts.pory"
# 87 "data/maps/MauvilleCity/scripts.pory"
# 142 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 143 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallysUncle_1
# 144 "data/maps/MauvilleCity/scripts.pory"

# 145 "data/maps/MauvilleCity/scripts.pory"

# 146 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 147 "data/maps/MauvilleCity/scripts.pory"
# 98 "data/maps/MauvilleCity/scripts.pory"
# 148 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 149 "data/maps/MauvilleCity/scripts.pory"
# 99 "data/maps/MauvilleCity/scripts.pory"
# 150 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 151 "data/maps/MauvilleCity/scripts.pory"
# 100 "data/maps/MauvilleCity/scripts.pory"
# 152 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 153 "data/maps/MauvilleCity/scripts.pory"
# 101 "data/maps/MauvilleCity/scripts.pory"
# 154 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/MauvilleCity/scripts.pory"
# 102 "data/maps/MauvilleCity/scripts.pory"
# 156 "data/maps/MauvilleCity/scripts.pory"
	release
# 157 "data/maps/MauvilleCity/scripts.pory"
	end
# 158 "data/maps/MauvilleCity/scripts.pory"

# 159 "data/maps/MauvilleCity/scripts.pory"

# 160 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 161 "data/maps/MauvilleCity/scripts.pory"
# 107 "data/maps/MauvilleCity/scripts.pory"
# 162 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 163 "data/maps/MauvilleCity/scripts.pory"
# 108 "data/maps/MauvilleCity/scripts.pory"
# 164 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_Wally_2
# 165 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally_1:
# 166 "data/maps/MauvilleCity/scripts.pory"
# 111 "data/maps/MauvilleCity/scripts.pory"
# 167 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 168 "data/maps/MauvilleCity/scripts.pory"
# 112 "data/maps/MauvilleCity/scripts.pory"
# 169 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 170 "data/maps/MauvilleCity/scripts.pory"
# 113 "data/maps/MauvilleCity/scripts.pory"
# 171 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 172 "data/maps/MauvilleCity/scripts.pory"
# 114 "data/maps/MauvilleCity/scripts.pory"
# 173 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 174 "data/maps/MauvilleCity/scripts.pory"
# 115 "data/maps/MauvilleCity/scripts.pory"
# 175 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 176 "data/maps/MauvilleCity/scripts.pory"
# 116 "data/maps/MauvilleCity/scripts.pory"
# 177 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 178 "data/maps/MauvilleCity/scripts.pory"
# 117 "data/maps/MauvilleCity/scripts.pory"
# 179 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 180 "data/maps/MauvilleCity/scripts.pory"
# 118 "data/maps/MauvilleCity/scripts.pory"
# 181 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 182 "data/maps/MauvilleCity/scripts.pory"
# 119 "data/maps/MauvilleCity/scripts.pory"
# 183 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_ExclamationMark
# 184 "data/maps/MauvilleCity/scripts.pory"
# 120 "data/maps/MauvilleCity/scripts.pory"
# 185 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 186 "data/maps/MauvilleCity/scripts.pory"
# 121 "data/maps/MauvilleCity/scripts.pory"
# 187 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_Delay48
# 188 "data/maps/MauvilleCity/scripts.pory"
# 122 "data/maps/MauvilleCity/scripts.pory"
# 189 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 190 "data/maps/MauvilleCity/scripts.pory"
# 123 "data/maps/MauvilleCity/scripts.pory"
# 191 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 192 "data/maps/MauvilleCity/scripts.pory"
# 124 "data/maps/MauvilleCity/scripts.pory"
# 193 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 194 "data/maps/MauvilleCity/scripts.pory"
	end
# 195 "data/maps/MauvilleCity/scripts.pory"

# 196 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally_2:
# 197 "data/maps/MauvilleCity/scripts.pory"
# 109 "data/maps/MauvilleCity/scripts.pory"
# 198 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyRequestBattleAgain
# 199 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_Wally_1
# 200 "data/maps/MauvilleCity/scripts.pory"

# 201 "data/maps/MauvilleCity/scripts.pory"

# 202 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 203 "data/maps/MauvilleCity/scripts.pory"
# 129 "data/maps/MauvilleCity/scripts.pory"
# 204 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, YES
# 205 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq MauvilleCity_EventScript_BattleWallyPrompt_2
# 206 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_1:
# 207 "data/maps/MauvilleCity/scripts.pory"
# 132 "data/maps/MauvilleCity/scripts.pory"
# 208 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, NO
# 209 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq MauvilleCity_EventScript_BattleWallyPrompt_5
# 210 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_4:
# 211 "data/maps/MauvilleCity/scripts.pory"
# 135 "data/maps/MauvilleCity/scripts.pory"
# 212 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 213 "data/maps/MauvilleCity/scripts.pory"
# 136 "data/maps/MauvilleCity/scripts.pory"
# 214 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 215 "data/maps/MauvilleCity/scripts.pory"
# 137 "data/maps/MauvilleCity/scripts.pory"
# 216 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWallyPrompt_9
# 217 "data/maps/MauvilleCity/scripts.pory"
# 139 "data/maps/MauvilleCity/scripts.pory"
# 218 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWallyPrompt_10
# 219 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_7:
# 220 "data/maps/MauvilleCity/scripts.pory"
	end
# 221 "data/maps/MauvilleCity/scripts.pory"

# 222 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_2:
# 223 "data/maps/MauvilleCity/scripts.pory"
# 130 "data/maps/MauvilleCity/scripts.pory"
# 224 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_BattleWally
# 225 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt_1
# 226 "data/maps/MauvilleCity/scripts.pory"

# 227 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_5:
# 228 "data/maps/MauvilleCity/scripts.pory"
# 133 "data/maps/MauvilleCity/scripts.pory"
# 229 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DeclineWallyBattle
# 230 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt_4
# 231 "data/maps/MauvilleCity/scripts.pory"

# 232 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_9:
# 233 "data/maps/MauvilleCity/scripts.pory"
# 138 "data/maps/MauvilleCity/scripts.pory"
# 234 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitNorth
# 235 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt_7
# 236 "data/maps/MauvilleCity/scripts.pory"

# 237 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_10:
# 238 "data/maps/MauvilleCity/scripts.pory"
# 140 "data/maps/MauvilleCity/scripts.pory"
# 239 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitEast
# 240 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt_7
# 241 "data/maps/MauvilleCity/scripts.pory"

# 242 "data/maps/MauvilleCity/scripts.pory"

# 243 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 244 "data/maps/MauvilleCity/scripts.pory"
# 146 "data/maps/MauvilleCity/scripts.pory"
# 245 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 246 "data/maps/MauvilleCity/scripts.pory"
# 147 "data/maps/MauvilleCity/scripts.pory"
# 247 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 248 "data/maps/MauvilleCity/scripts.pory"
# 148 "data/maps/MauvilleCity/scripts.pory"
# 249 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 250 "data/maps/MauvilleCity/scripts.pory"
# 149 "data/maps/MauvilleCity/scripts.pory"
# 251 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 252 "data/maps/MauvilleCity/scripts.pory"
# 150 "data/maps/MauvilleCity/scripts.pory"
# 253 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 254 "data/maps/MauvilleCity/scripts.pory"
# 151 "data/maps/MauvilleCity/scripts.pory"
# 255 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 256 "data/maps/MauvilleCity/scripts.pory"
# 152 "data/maps/MauvilleCity/scripts.pory"
# 257 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 258 "data/maps/MauvilleCity/scripts.pory"
# 153 "data/maps/MauvilleCity/scripts.pory"
# 259 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 260 "data/maps/MauvilleCity/scripts.pory"
# 154 "data/maps/MauvilleCity/scripts.pory"
# 261 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 262 "data/maps/MauvilleCity/scripts.pory"
# 155 "data/maps/MauvilleCity/scripts.pory"
# 263 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 264 "data/maps/MauvilleCity/scripts.pory"
# 156 "data/maps/MauvilleCity/scripts.pory"
# 265 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 266 "data/maps/MauvilleCity/scripts.pory"
# 157 "data/maps/MauvilleCity/scripts.pory"
# 267 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 268 "data/maps/MauvilleCity/scripts.pory"
# 158 "data/maps/MauvilleCity/scripts.pory"
# 269 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 270 "data/maps/MauvilleCity/scripts.pory"
# 159 "data/maps/MauvilleCity/scripts.pory"
# 271 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 272 "data/maps/MauvilleCity/scripts.pory"
# 160 "data/maps/MauvilleCity/scripts.pory"
# 273 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 274 "data/maps/MauvilleCity/scripts.pory"
# 161 "data/maps/MauvilleCity/scripts.pory"
# 275 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 276 "data/maps/MauvilleCity/scripts.pory"
# 162 "data/maps/MauvilleCity/scripts.pory"
# 277 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 278 "data/maps/MauvilleCity/scripts.pory"
	end
# 279 "data/maps/MauvilleCity/scripts.pory"

# 280 "data/maps/MauvilleCity/scripts.pory"

# 281 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 282 "data/maps/MauvilleCity/scripts.pory"
# 167 "data/maps/MauvilleCity/scripts.pory"
# 283 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 284 "data/maps/MauvilleCity/scripts.pory"
# 168 "data/maps/MauvilleCity/scripts.pory"
# 285 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast1
# 286 "data/maps/MauvilleCity/scripts.pory"
# 169 "data/maps/MauvilleCity/scripts.pory"
# 287 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 288 "data/maps/MauvilleCity/scripts.pory"
# 170 "data/maps/MauvilleCity/scripts.pory"
# 289 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/MauvilleCity/scripts.pory"
# 171 "data/maps/MauvilleCity/scripts.pory"
# 291 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 292 "data/maps/MauvilleCity/scripts.pory"
# 172 "data/maps/MauvilleCity/scripts.pory"
# 293 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 294 "data/maps/MauvilleCity/scripts.pory"
# 173 "data/maps/MauvilleCity/scripts.pory"
# 295 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 296 "data/maps/MauvilleCity/scripts.pory"
# 174 "data/maps/MauvilleCity/scripts.pory"
# 297 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 298 "data/maps/MauvilleCity/scripts.pory"
# 175 "data/maps/MauvilleCity/scripts.pory"
# 299 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 300 "data/maps/MauvilleCity/scripts.pory"
# 176 "data/maps/MauvilleCity/scripts.pory"
# 301 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 302 "data/maps/MauvilleCity/scripts.pory"
# 177 "data/maps/MauvilleCity/scripts.pory"
# 303 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 304 "data/maps/MauvilleCity/scripts.pory"
# 178 "data/maps/MauvilleCity/scripts.pory"
# 305 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 306 "data/maps/MauvilleCity/scripts.pory"
# 179 "data/maps/MauvilleCity/scripts.pory"
# 307 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 308 "data/maps/MauvilleCity/scripts.pory"
# 180 "data/maps/MauvilleCity/scripts.pory"
# 309 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast2
# 310 "data/maps/MauvilleCity/scripts.pory"
# 181 "data/maps/MauvilleCity/scripts.pory"
# 311 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/MauvilleCity/scripts.pory"
# 182 "data/maps/MauvilleCity/scripts.pory"
# 313 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 314 "data/maps/MauvilleCity/scripts.pory"
	end
# 315 "data/maps/MauvilleCity/scripts.pory"

# 316 "data/maps/MauvilleCity/scripts.pory"

# 317 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 318 "data/maps/MauvilleCity/scripts.pory"
# 187 "data/maps/MauvilleCity/scripts.pory"
# 319 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 320 "data/maps/MauvilleCity/scripts.pory"
# 188 "data/maps/MauvilleCity/scripts.pory"
# 321 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLYS_UNCLE
# 322 "data/maps/MauvilleCity/scripts.pory"
# 189 "data/maps/MauvilleCity/scripts.pory"
# 323 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 324 "data/maps/MauvilleCity/scripts.pory"
# 190 "data/maps/MauvilleCity/scripts.pory"
# 325 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 326 "data/maps/MauvilleCity/scripts.pory"
# 191 "data/maps/MauvilleCity/scripts.pory"
# 327 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 328 "data/maps/MauvilleCity/scripts.pory"
# 192 "data/maps/MauvilleCity/scripts.pory"
# 329 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 330 "data/maps/MauvilleCity/scripts.pory"
# 193 "data/maps/MauvilleCity/scripts.pory"
# 331 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 332 "data/maps/MauvilleCity/scripts.pory"
# 194 "data/maps/MauvilleCity/scripts.pory"
# 333 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 334 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq MauvilleCity_EventScript_DefeatedWally_2
# 335 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_1:
# 336 "data/maps/MauvilleCity/scripts.pory"
# 197 "data/maps/MauvilleCity/scripts.pory"
# 337 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 338 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq MauvilleCity_EventScript_DefeatedWally_5
# 339 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_4:
# 340 "data/maps/MauvilleCity/scripts.pory"
# 200 "data/maps/MauvilleCity/scripts.pory"
# 341 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 342 "data/maps/MauvilleCity/scripts.pory"
# 201 "data/maps/MauvilleCity/scripts.pory"
# 343 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 344 "data/maps/MauvilleCity/scripts.pory"
# 202 "data/maps/MauvilleCity/scripts.pory"
# 345 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 346 "data/maps/MauvilleCity/scripts.pory"
# 203 "data/maps/MauvilleCity/scripts.pory"
# 347 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 348 "data/maps/MauvilleCity/scripts.pory"
# 204 "data/maps/MauvilleCity/scripts.pory"
# 349 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 350 "data/maps/MauvilleCity/scripts.pory"
# 205 "data/maps/MauvilleCity/scripts.pory"
# 351 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 352 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq MauvilleCity_EventScript_DefeatedWally_8
# 353 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_7:
# 354 "data/maps/MauvilleCity/scripts.pory"
# 208 "data/maps/MauvilleCity/scripts.pory"
# 355 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 356 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq MauvilleCity_EventScript_DefeatedWally_11
# 357 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_10:
# 358 "data/maps/MauvilleCity/scripts.pory"
# 211 "data/maps/MauvilleCity/scripts.pory"
# 359 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_SCOTT
# 360 "data/maps/MauvilleCity/scripts.pory"
# 212 "data/maps/MauvilleCity/scripts.pory"
# 361 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 362 "data/maps/MauvilleCity/scripts.pory"
	end
# 363 "data/maps/MauvilleCity/scripts.pory"

# 364 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_2:
# 365 "data/maps/MauvilleCity/scripts.pory"
# 195 "data/maps/MauvilleCity/scripts.pory"
# 366 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottApproachPlayerNorth
# 367 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally_1
# 368 "data/maps/MauvilleCity/scripts.pory"

# 369 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_5:
# 370 "data/maps/MauvilleCity/scripts.pory"
# 198 "data/maps/MauvilleCity/scripts.pory"
# 371 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottApproachPlayerEast
# 372 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally_4
# 373 "data/maps/MauvilleCity/scripts.pory"

# 374 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_8:
# 375 "data/maps/MauvilleCity/scripts.pory"
# 206 "data/maps/MauvilleCity/scripts.pory"
# 376 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottExitNorth
# 377 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally_7
# 378 "data/maps/MauvilleCity/scripts.pory"

# 379 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_11:
# 380 "data/maps/MauvilleCity/scripts.pory"
# 209 "data/maps/MauvilleCity/scripts.pory"
# 381 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottExitEast
# 382 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally_10
# 383 "data/maps/MauvilleCity/scripts.pory"

# 384 "data/maps/MauvilleCity/scripts.pory"

# 385 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 386 "data/maps/MauvilleCity/scripts.pory"
# 217 "data/maps/MauvilleCity/scripts.pory"
# 387 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 388 "data/maps/MauvilleCity/scripts.pory"
# 218 "data/maps/MauvilleCity/scripts.pory"
# 389 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 390 "data/maps/MauvilleCity/scripts.pory"
# 219 "data/maps/MauvilleCity/scripts.pory"
# 391 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 392 "data/maps/MauvilleCity/scripts.pory"
	return
# 393 "data/maps/MauvilleCity/scripts.pory"

# 394 "data/maps/MauvilleCity/scripts.pory"

# 395 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 396 "data/maps/MauvilleCity/scripts.pory"
# 224 "data/maps/MauvilleCity/scripts.pory"
# 397 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
# 398 "data/maps/MauvilleCity/scripts.pory"
# 225 "data/maps/MauvilleCity/scripts.pory"
# 399 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 400 "data/maps/MauvilleCity/scripts.pory"
# 226 "data/maps/MauvilleCity/scripts.pory"
# 401 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 402 "data/maps/MauvilleCity/scripts.pory"
# 227 "data/maps/MauvilleCity/scripts.pory"
# 403 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 404 "data/maps/MauvilleCity/scripts.pory"
	return
# 405 "data/maps/MauvilleCity/scripts.pory"

# 406 "data/maps/MauvilleCity/scripts.pory"

# 407 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 408 "data/maps/MauvilleCity/scripts.pory"
# 232 "data/maps/MauvilleCity/scripts.pory"
# 409 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 410 "data/maps/MauvilleCity/scripts.pory"
# 233 "data/maps/MauvilleCity/scripts.pory"
# 411 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 412 "data/maps/MauvilleCity/scripts.pory"
# 234 "data/maps/MauvilleCity/scripts.pory"
# 413 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 414 "data/maps/MauvilleCity/scripts.pory"
	return
# 415 "data/maps/MauvilleCity/scripts.pory"

# 416 "data/maps/MauvilleCity/scripts.pory"

# 417 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 418 "data/maps/MauvilleCity/scripts.pory"
# 239 "data/maps/MauvilleCity/scripts.pory"
# 419 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 420 "data/maps/MauvilleCity/scripts.pory"
# 240 "data/maps/MauvilleCity/scripts.pory"
# 421 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitEast
# 422 "data/maps/MauvilleCity/scripts.pory"
# 241 "data/maps/MauvilleCity/scripts.pory"
# 423 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 424 "data/maps/MauvilleCity/scripts.pory"
	return
# 425 "data/maps/MauvilleCity/scripts.pory"

# 426 "data/maps/MauvilleCity/scripts.pory"

# 427 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 428 "data/maps/MauvilleCity/scripts.pory"
# 246 "data/maps/MauvilleCity/scripts.pory"
# 429 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 430 "data/maps/MauvilleCity/scripts.pory"
# 247 "data/maps/MauvilleCity/scripts.pory"
# 431 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 432 "data/maps/MauvilleCity/scripts.pory"
# 248 "data/maps/MauvilleCity/scripts.pory"
# 433 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 434 "data/maps/MauvilleCity/scripts.pory"
# 249 "data/maps/MauvilleCity/scripts.pory"
# 435 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 436 "data/maps/MauvilleCity/scripts.pory"
# 250 "data/maps/MauvilleCity/scripts.pory"
# 437 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 438 "data/maps/MauvilleCity/scripts.pory"
# 251 "data/maps/MauvilleCity/scripts.pory"
# 439 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 440 "data/maps/MauvilleCity/scripts.pory"
# 252 "data/maps/MauvilleCity/scripts.pory"
# 441 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 442 "data/maps/MauvilleCity/scripts.pory"
# 253 "data/maps/MauvilleCity/scripts.pory"
# 443 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 444 "data/maps/MauvilleCity/scripts.pory"
# 254 "data/maps/MauvilleCity/scripts.pory"
# 445 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 446 "data/maps/MauvilleCity/scripts.pory"
# 255 "data/maps/MauvilleCity/scripts.pory"
# 447 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 448 "data/maps/MauvilleCity/scripts.pory"
# 256 "data/maps/MauvilleCity/scripts.pory"
# 449 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 450 "data/maps/MauvilleCity/scripts.pory"
	return
# 451 "data/maps/MauvilleCity/scripts.pory"

# 452 "data/maps/MauvilleCity/scripts.pory"

# 453 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 454 "data/maps/MauvilleCity/scripts.pory"
# 261 "data/maps/MauvilleCity/scripts.pory"
# 455 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 456 "data/maps/MauvilleCity/scripts.pory"
# 262 "data/maps/MauvilleCity/scripts.pory"
# 457 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 458 "data/maps/MauvilleCity/scripts.pory"
# 263 "data/maps/MauvilleCity/scripts.pory"
# 459 "data/maps/MauvilleCity/scripts.pory"
	release
# 460 "data/maps/MauvilleCity/scripts.pory"
	end
# 461 "data/maps/MauvilleCity/scripts.pory"

# 462 "data/maps/MauvilleCity/scripts.pory"

# 463 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 464 "data/maps/MauvilleCity/scripts.pory"
# 268 "data/maps/MauvilleCity/scripts.pory"
# 465 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 466 "data/maps/MauvilleCity/scripts.pory"
# 269 "data/maps/MauvilleCity/scripts.pory"
# 467 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 468 "data/maps/MauvilleCity/scripts.pory"
# 270 "data/maps/MauvilleCity/scripts.pory"
# 469 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 470 "data/maps/MauvilleCity/scripts.pory"
# 271 "data/maps/MauvilleCity/scripts.pory"
# 471 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 472 "data/maps/MauvilleCity/scripts.pory"
	end
# 473 "data/maps/MauvilleCity/scripts.pory"

# 474 "data/maps/MauvilleCity/scripts.pory"

# 475 "data/maps/MauvilleCity/scripts.pory"
# 275 "data/maps/MauvilleCity/scripts.pory"
# 476 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 477 "data/maps/MauvilleCity/scripts.pory"
# 276 "data/maps/MauvilleCity/scripts.pory"
# 478 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 479 "data/maps/MauvilleCity/scripts.pory"
# 277 "data/maps/MauvilleCity/scripts.pory"
# 480 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 481 "data/maps/MauvilleCity/scripts.pory"
# 278 "data/maps/MauvilleCity/scripts.pory"
# 482 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 483 "data/maps/MauvilleCity/scripts.pory"
# 279 "data/maps/MauvilleCity/scripts.pory"
# 484 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 485 "data/maps/MauvilleCity/scripts.pory"
# 280 "data/maps/MauvilleCity/scripts.pory"
# 486 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 487 "data/maps/MauvilleCity/scripts.pory"
# 281 "data/maps/MauvilleCity/scripts.pory"
# 488 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 489 "data/maps/MauvilleCity/scripts.pory"

# 490 "data/maps/MauvilleCity/scripts.pory"
# 284 "data/maps/MauvilleCity/scripts.pory"
# 491 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 492 "data/maps/MauvilleCity/scripts.pory"
# 285 "data/maps/MauvilleCity/scripts.pory"
# 493 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 494 "data/maps/MauvilleCity/scripts.pory"
# 286 "data/maps/MauvilleCity/scripts.pory"
# 495 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 496 "data/maps/MauvilleCity/scripts.pory"
# 287 "data/maps/MauvilleCity/scripts.pory"
# 497 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 498 "data/maps/MauvilleCity/scripts.pory"
# 288 "data/maps/MauvilleCity/scripts.pory"
# 499 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 500 "data/maps/MauvilleCity/scripts.pory"
# 289 "data/maps/MauvilleCity/scripts.pory"
# 501 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 502 "data/maps/MauvilleCity/scripts.pory"
# 290 "data/maps/MauvilleCity/scripts.pory"
# 503 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 504 "data/maps/MauvilleCity/scripts.pory"

# 505 "data/maps/MauvilleCity/scripts.pory"
# 293 "data/maps/MauvilleCity/scripts.pory"
# 506 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 507 "data/maps/MauvilleCity/scripts.pory"
# 294 "data/maps/MauvilleCity/scripts.pory"
# 508 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 509 "data/maps/MauvilleCity/scripts.pory"
# 295 "data/maps/MauvilleCity/scripts.pory"
# 510 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 511 "data/maps/MauvilleCity/scripts.pory"
# 296 "data/maps/MauvilleCity/scripts.pory"
# 512 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 513 "data/maps/MauvilleCity/scripts.pory"
# 297 "data/maps/MauvilleCity/scripts.pory"
# 514 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 515 "data/maps/MauvilleCity/scripts.pory"
# 298 "data/maps/MauvilleCity/scripts.pory"
# 516 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 517 "data/maps/MauvilleCity/scripts.pory"
# 299 "data/maps/MauvilleCity/scripts.pory"
# 518 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 519 "data/maps/MauvilleCity/scripts.pory"
# 300 "data/maps/MauvilleCity/scripts.pory"
# 520 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 521 "data/maps/MauvilleCity/scripts.pory"
# 301 "data/maps/MauvilleCity/scripts.pory"
# 522 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 523 "data/maps/MauvilleCity/scripts.pory"
# 302 "data/maps/MauvilleCity/scripts.pory"
# 524 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 525 "data/maps/MauvilleCity/scripts.pory"
# 303 "data/maps/MauvilleCity/scripts.pory"
# 526 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 527 "data/maps/MauvilleCity/scripts.pory"
# 304 "data/maps/MauvilleCity/scripts.pory"
# 528 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 529 "data/maps/MauvilleCity/scripts.pory"
# 305 "data/maps/MauvilleCity/scripts.pory"
# 530 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 531 "data/maps/MauvilleCity/scripts.pory"

# 532 "data/maps/MauvilleCity/scripts.pory"
# 308 "data/maps/MauvilleCity/scripts.pory"
# 533 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 534 "data/maps/MauvilleCity/scripts.pory"
# 309 "data/maps/MauvilleCity/scripts.pory"
# 535 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 536 "data/maps/MauvilleCity/scripts.pory"
# 310 "data/maps/MauvilleCity/scripts.pory"
# 537 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 538 "data/maps/MauvilleCity/scripts.pory"
# 311 "data/maps/MauvilleCity/scripts.pory"
# 539 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 540 "data/maps/MauvilleCity/scripts.pory"
# 312 "data/maps/MauvilleCity/scripts.pory"
# 541 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 542 "data/maps/MauvilleCity/scripts.pory"
# 313 "data/maps/MauvilleCity/scripts.pory"
# 543 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 544 "data/maps/MauvilleCity/scripts.pory"
# 314 "data/maps/MauvilleCity/scripts.pory"
# 545 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 546 "data/maps/MauvilleCity/scripts.pory"
# 315 "data/maps/MauvilleCity/scripts.pory"
# 547 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 548 "data/maps/MauvilleCity/scripts.pory"
# 316 "data/maps/MauvilleCity/scripts.pory"
# 549 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 550 "data/maps/MauvilleCity/scripts.pory"
# 317 "data/maps/MauvilleCity/scripts.pory"
# 551 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 552 "data/maps/MauvilleCity/scripts.pory"
# 318 "data/maps/MauvilleCity/scripts.pory"
# 553 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 554 "data/maps/MauvilleCity/scripts.pory"
# 319 "data/maps/MauvilleCity/scripts.pory"
# 555 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 556 "data/maps/MauvilleCity/scripts.pory"
# 320 "data/maps/MauvilleCity/scripts.pory"
# 557 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 558 "data/maps/MauvilleCity/scripts.pory"

# 559 "data/maps/MauvilleCity/scripts.pory"
# 323 "data/maps/MauvilleCity/scripts.pory"
# 560 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 561 "data/maps/MauvilleCity/scripts.pory"
# 324 "data/maps/MauvilleCity/scripts.pory"
# 562 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 563 "data/maps/MauvilleCity/scripts.pory"
# 325 "data/maps/MauvilleCity/scripts.pory"
# 564 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 565 "data/maps/MauvilleCity/scripts.pory"
# 326 "data/maps/MauvilleCity/scripts.pory"
# 566 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 567 "data/maps/MauvilleCity/scripts.pory"
# 327 "data/maps/MauvilleCity/scripts.pory"
# 568 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 569 "data/maps/MauvilleCity/scripts.pory"

# 570 "data/maps/MauvilleCity/scripts.pory"
# 330 "data/maps/MauvilleCity/scripts.pory"
# 571 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 572 "data/maps/MauvilleCity/scripts.pory"
# 331 "data/maps/MauvilleCity/scripts.pory"
# 573 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 574 "data/maps/MauvilleCity/scripts.pory"
# 332 "data/maps/MauvilleCity/scripts.pory"
# 575 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 576 "data/maps/MauvilleCity/scripts.pory"
# 333 "data/maps/MauvilleCity/scripts.pory"
# 577 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 578 "data/maps/MauvilleCity/scripts.pory"
# 334 "data/maps/MauvilleCity/scripts.pory"
# 579 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 580 "data/maps/MauvilleCity/scripts.pory"
# 335 "data/maps/MauvilleCity/scripts.pory"
# 581 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 582 "data/maps/MauvilleCity/scripts.pory"

# 583 "data/maps/MauvilleCity/scripts.pory"
# 338 "data/maps/MauvilleCity/scripts.pory"
# 584 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 585 "data/maps/MauvilleCity/scripts.pory"
# 339 "data/maps/MauvilleCity/scripts.pory"
# 586 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 587 "data/maps/MauvilleCity/scripts.pory"
# 340 "data/maps/MauvilleCity/scripts.pory"
# 588 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 589 "data/maps/MauvilleCity/scripts.pory"
# 341 "data/maps/MauvilleCity/scripts.pory"
# 590 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 591 "data/maps/MauvilleCity/scripts.pory"

# 592 "data/maps/MauvilleCity/scripts.pory"
# 344 "data/maps/MauvilleCity/scripts.pory"
# 593 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 594 "data/maps/MauvilleCity/scripts.pory"
# 345 "data/maps/MauvilleCity/scripts.pory"
# 595 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 596 "data/maps/MauvilleCity/scripts.pory"
# 346 "data/maps/MauvilleCity/scripts.pory"
# 597 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 598 "data/maps/MauvilleCity/scripts.pory"
# 347 "data/maps/MauvilleCity/scripts.pory"
# 599 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 600 "data/maps/MauvilleCity/scripts.pory"
# 348 "data/maps/MauvilleCity/scripts.pory"
# 601 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 602 "data/maps/MauvilleCity/scripts.pory"

# 603 "data/maps/MauvilleCity/scripts.pory"
# 351 "data/maps/MauvilleCity/scripts.pory"
# 604 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 605 "data/maps/MauvilleCity/scripts.pory"
# 352 "data/maps/MauvilleCity/scripts.pory"
# 606 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 607 "data/maps/MauvilleCity/scripts.pory"
# 353 "data/maps/MauvilleCity/scripts.pory"
# 608 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 609 "data/maps/MauvilleCity/scripts.pory"
# 354 "data/maps/MauvilleCity/scripts.pory"
# 610 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 611 "data/maps/MauvilleCity/scripts.pory"

# 612 "data/maps/MauvilleCity/scripts.pory"
# 357 "data/maps/MauvilleCity/scripts.pory"
# 613 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 614 "data/maps/MauvilleCity/scripts.pory"
# 358 "data/maps/MauvilleCity/scripts.pory"
# 615 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 616 "data/maps/MauvilleCity/scripts.pory"
# 359 "data/maps/MauvilleCity/scripts.pory"
# 617 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 618 "data/maps/MauvilleCity/scripts.pory"
# 360 "data/maps/MauvilleCity/scripts.pory"
# 619 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 620 "data/maps/MauvilleCity/scripts.pory"

# 621 "data/maps/MauvilleCity/scripts.pory"
# 363 "data/maps/MauvilleCity/scripts.pory"
# 622 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 623 "data/maps/MauvilleCity/scripts.pory"
# 364 "data/maps/MauvilleCity/scripts.pory"
# 624 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 625 "data/maps/MauvilleCity/scripts.pory"
# 365 "data/maps/MauvilleCity/scripts.pory"
# 626 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 627 "data/maps/MauvilleCity/scripts.pory"
# 366 "data/maps/MauvilleCity/scripts.pory"
# 628 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 629 "data/maps/MauvilleCity/scripts.pory"
# 367 "data/maps/MauvilleCity/scripts.pory"
# 630 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 631 "data/maps/MauvilleCity/scripts.pory"
# 368 "data/maps/MauvilleCity/scripts.pory"
# 632 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 633 "data/maps/MauvilleCity/scripts.pory"
# 369 "data/maps/MauvilleCity/scripts.pory"
# 634 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 635 "data/maps/MauvilleCity/scripts.pory"

# 636 "data/maps/MauvilleCity/scripts.pory"
# 372 "data/maps/MauvilleCity/scripts.pory"
# 637 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 638 "data/maps/MauvilleCity/scripts.pory"
# 373 "data/maps/MauvilleCity/scripts.pory"
# 639 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 640 "data/maps/MauvilleCity/scripts.pory"
# 374 "data/maps/MauvilleCity/scripts.pory"
# 641 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 642 "data/maps/MauvilleCity/scripts.pory"
# 375 "data/maps/MauvilleCity/scripts.pory"
# 643 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 644 "data/maps/MauvilleCity/scripts.pory"
# 376 "data/maps/MauvilleCity/scripts.pory"
# 645 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 646 "data/maps/MauvilleCity/scripts.pory"
# 377 "data/maps/MauvilleCity/scripts.pory"
# 647 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 648 "data/maps/MauvilleCity/scripts.pory"
# 378 "data/maps/MauvilleCity/scripts.pory"
# 649 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 650 "data/maps/MauvilleCity/scripts.pory"

# 651 "data/maps/MauvilleCity/scripts.pory"
# 381 "data/maps/MauvilleCity/scripts.pory"
# 652 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 653 "data/maps/MauvilleCity/scripts.pory"
# 382 "data/maps/MauvilleCity/scripts.pory"
# 654 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 655 "data/maps/MauvilleCity/scripts.pory"
# 383 "data/maps/MauvilleCity/scripts.pory"
# 656 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 657 "data/maps/MauvilleCity/scripts.pory"
# 384 "data/maps/MauvilleCity/scripts.pory"
# 658 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 659 "data/maps/MauvilleCity/scripts.pory"
# 385 "data/maps/MauvilleCity/scripts.pory"
# 660 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 661 "data/maps/MauvilleCity/scripts.pory"
# 386 "data/maps/MauvilleCity/scripts.pory"
# 662 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 663 "data/maps/MauvilleCity/scripts.pory"

# 664 "data/maps/MauvilleCity/scripts.pory"
# 389 "data/maps/MauvilleCity/scripts.pory"
# 665 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 666 "data/maps/MauvilleCity/scripts.pory"
# 390 "data/maps/MauvilleCity/scripts.pory"
# 667 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 668 "data/maps/MauvilleCity/scripts.pory"
# 391 "data/maps/MauvilleCity/scripts.pory"
# 669 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 670 "data/maps/MauvilleCity/scripts.pory"
# 392 "data/maps/MauvilleCity/scripts.pory"
# 671 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 672 "data/maps/MauvilleCity/scripts.pory"
# 393 "data/maps/MauvilleCity/scripts.pory"
# 673 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 674 "data/maps/MauvilleCity/scripts.pory"

# 675 "data/maps/MauvilleCity/scripts.pory"
# 396 "data/maps/MauvilleCity/scripts.pory"
# 676 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 677 "data/maps/MauvilleCity/scripts.pory"
# 397 "data/maps/MauvilleCity/scripts.pory"
# 678 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 679 "data/maps/MauvilleCity/scripts.pory"
# 398 "data/maps/MauvilleCity/scripts.pory"
# 680 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 681 "data/maps/MauvilleCity/scripts.pory"
# 399 "data/maps/MauvilleCity/scripts.pory"
# 682 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 683 "data/maps/MauvilleCity/scripts.pory"

# 684 "data/maps/MauvilleCity/scripts.pory"
# 402 "data/maps/MauvilleCity/scripts.pory"
# 685 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 686 "data/maps/MauvilleCity/scripts.pory"
# 403 "data/maps/MauvilleCity/scripts.pory"
# 687 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 688 "data/maps/MauvilleCity/scripts.pory"
# 404 "data/maps/MauvilleCity/scripts.pory"
# 689 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 690 "data/maps/MauvilleCity/scripts.pory"
# 405 "data/maps/MauvilleCity/scripts.pory"
# 691 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 692 "data/maps/MauvilleCity/scripts.pory"
# 406 "data/maps/MauvilleCity/scripts.pory"
# 693 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 694 "data/maps/MauvilleCity/scripts.pory"
# 407 "data/maps/MauvilleCity/scripts.pory"
# 695 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 696 "data/maps/MauvilleCity/scripts.pory"
# 408 "data/maps/MauvilleCity/scripts.pory"
# 697 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 698 "data/maps/MauvilleCity/scripts.pory"
# 409 "data/maps/MauvilleCity/scripts.pory"
# 699 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 700 "data/maps/MauvilleCity/scripts.pory"
# 410 "data/maps/MauvilleCity/scripts.pory"
# 701 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 702 "data/maps/MauvilleCity/scripts.pory"
# 411 "data/maps/MauvilleCity/scripts.pory"
# 703 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 704 "data/maps/MauvilleCity/scripts.pory"

# 705 "data/maps/MauvilleCity/scripts.pory"
# 414 "data/maps/MauvilleCity/scripts.pory"
# 706 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 707 "data/maps/MauvilleCity/scripts.pory"
# 415 "data/maps/MauvilleCity/scripts.pory"
# 708 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 709 "data/maps/MauvilleCity/scripts.pory"
# 416 "data/maps/MauvilleCity/scripts.pory"
# 710 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 711 "data/maps/MauvilleCity/scripts.pory"
# 417 "data/maps/MauvilleCity/scripts.pory"
# 712 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 713 "data/maps/MauvilleCity/scripts.pory"
# 418 "data/maps/MauvilleCity/scripts.pory"
# 714 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 715 "data/maps/MauvilleCity/scripts.pory"
# 419 "data/maps/MauvilleCity/scripts.pory"
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 717 "data/maps/MauvilleCity/scripts.pory"
# 420 "data/maps/MauvilleCity/scripts.pory"
# 718 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 719 "data/maps/MauvilleCity/scripts.pory"
# 421 "data/maps/MauvilleCity/scripts.pory"
# 720 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 721 "data/maps/MauvilleCity/scripts.pory"
# 422 "data/maps/MauvilleCity/scripts.pory"
# 722 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 723 "data/maps/MauvilleCity/scripts.pory"
# 423 "data/maps/MauvilleCity/scripts.pory"
# 724 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 725 "data/maps/MauvilleCity/scripts.pory"
# 424 "data/maps/MauvilleCity/scripts.pory"
# 726 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 727 "data/maps/MauvilleCity/scripts.pory"

# 728 "data/maps/MauvilleCity/scripts.pory"
# 427 "data/maps/MauvilleCity/scripts.pory"
# 729 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 730 "data/maps/MauvilleCity/scripts.pory"
# 428 "data/maps/MauvilleCity/scripts.pory"
# 731 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 732 "data/maps/MauvilleCity/scripts.pory"
# 429 "data/maps/MauvilleCity/scripts.pory"
# 733 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 734 "data/maps/MauvilleCity/scripts.pory"
# 430 "data/maps/MauvilleCity/scripts.pory"
# 735 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 736 "data/maps/MauvilleCity/scripts.pory"
# 431 "data/maps/MauvilleCity/scripts.pory"
# 737 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 738 "data/maps/MauvilleCity/scripts.pory"
# 432 "data/maps/MauvilleCity/scripts.pory"
# 739 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 740 "data/maps/MauvilleCity/scripts.pory"
# 433 "data/maps/MauvilleCity/scripts.pory"
# 741 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 742 "data/maps/MauvilleCity/scripts.pory"
# 434 "data/maps/MauvilleCity/scripts.pory"
# 743 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 744 "data/maps/MauvilleCity/scripts.pory"
# 435 "data/maps/MauvilleCity/scripts.pory"
# 745 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 746 "data/maps/MauvilleCity/scripts.pory"
# 436 "data/maps/MauvilleCity/scripts.pory"
# 747 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 748 "data/maps/MauvilleCity/scripts.pory"
# 437 "data/maps/MauvilleCity/scripts.pory"
# 749 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 750 "data/maps/MauvilleCity/scripts.pory"
# 438 "data/maps/MauvilleCity/scripts.pory"
# 751 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 752 "data/maps/MauvilleCity/scripts.pory"
# 439 "data/maps/MauvilleCity/scripts.pory"
# 753 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 754 "data/maps/MauvilleCity/scripts.pory"

# 755 "data/maps/MauvilleCity/scripts.pory"
# 442 "data/maps/MauvilleCity/scripts.pory"
# 756 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 757 "data/maps/MauvilleCity/scripts.pory"
# 443 "data/maps/MauvilleCity/scripts.pory"
# 758 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 759 "data/maps/MauvilleCity/scripts.pory"
# 444 "data/maps/MauvilleCity/scripts.pory"
# 760 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 761 "data/maps/MauvilleCity/scripts.pory"
# 445 "data/maps/MauvilleCity/scripts.pory"
# 762 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 763 "data/maps/MauvilleCity/scripts.pory"
# 446 "data/maps/MauvilleCity/scripts.pory"
# 764 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 765 "data/maps/MauvilleCity/scripts.pory"
# 447 "data/maps/MauvilleCity/scripts.pory"
# 766 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 767 "data/maps/MauvilleCity/scripts.pory"
# 448 "data/maps/MauvilleCity/scripts.pory"
# 768 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 769 "data/maps/MauvilleCity/scripts.pory"
# 449 "data/maps/MauvilleCity/scripts.pory"
# 770 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 771 "data/maps/MauvilleCity/scripts.pory"
# 450 "data/maps/MauvilleCity/scripts.pory"
# 772 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 773 "data/maps/MauvilleCity/scripts.pory"
# 451 "data/maps/MauvilleCity/scripts.pory"
# 774 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 775 "data/maps/MauvilleCity/scripts.pory"
# 452 "data/maps/MauvilleCity/scripts.pory"
# 776 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 777 "data/maps/MauvilleCity/scripts.pory"
# 453 "data/maps/MauvilleCity/scripts.pory"
# 778 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 779 "data/maps/MauvilleCity/scripts.pory"
# 454 "data/maps/MauvilleCity/scripts.pory"
# 780 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 781 "data/maps/MauvilleCity/scripts.pory"

# 782 "data/maps/MauvilleCity/scripts.pory"
# 457 "data/maps/MauvilleCity/scripts.pory"
# 783 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 784 "data/maps/MauvilleCity/scripts.pory"
# 458 "data/maps/MauvilleCity/scripts.pory"
# 785 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 786 "data/maps/MauvilleCity/scripts.pory"
# 459 "data/maps/MauvilleCity/scripts.pory"
# 787 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 788 "data/maps/MauvilleCity/scripts.pory"
# 460 "data/maps/MauvilleCity/scripts.pory"
# 789 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 790 "data/maps/MauvilleCity/scripts.pory"
# 461 "data/maps/MauvilleCity/scripts.pory"
# 791 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 792 "data/maps/MauvilleCity/scripts.pory"
# 462 "data/maps/MauvilleCity/scripts.pory"
# 793 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 794 "data/maps/MauvilleCity/scripts.pory"
# 463 "data/maps/MauvilleCity/scripts.pory"
# 795 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 796 "data/maps/MauvilleCity/scripts.pory"
# 464 "data/maps/MauvilleCity/scripts.pory"
# 797 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 798 "data/maps/MauvilleCity/scripts.pory"
# 465 "data/maps/MauvilleCity/scripts.pory"
# 799 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 800 "data/maps/MauvilleCity/scripts.pory"
# 466 "data/maps/MauvilleCity/scripts.pory"
# 801 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 802 "data/maps/MauvilleCity/scripts.pory"
# 467 "data/maps/MauvilleCity/scripts.pory"
# 803 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 804 "data/maps/MauvilleCity/scripts.pory"

# 805 "data/maps/MauvilleCity/scripts.pory"
# 470 "data/maps/MauvilleCity/scripts.pory"
# 806 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 807 "data/maps/MauvilleCity/scripts.pory"
# 471 "data/maps/MauvilleCity/scripts.pory"
# 808 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 809 "data/maps/MauvilleCity/scripts.pory"
# 472 "data/maps/MauvilleCity/scripts.pory"
# 810 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 811 "data/maps/MauvilleCity/scripts.pory"
# 473 "data/maps/MauvilleCity/scripts.pory"
# 812 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 813 "data/maps/MauvilleCity/scripts.pory"
# 474 "data/maps/MauvilleCity/scripts.pory"
# 814 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 815 "data/maps/MauvilleCity/scripts.pory"
# 475 "data/maps/MauvilleCity/scripts.pory"
# 816 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 817 "data/maps/MauvilleCity/scripts.pory"
# 476 "data/maps/MauvilleCity/scripts.pory"
# 818 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 819 "data/maps/MauvilleCity/scripts.pory"
# 477 "data/maps/MauvilleCity/scripts.pory"
# 820 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 821 "data/maps/MauvilleCity/scripts.pory"
# 478 "data/maps/MauvilleCity/scripts.pory"
# 822 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 823 "data/maps/MauvilleCity/scripts.pory"
# 479 "data/maps/MauvilleCity/scripts.pory"
# 824 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 825 "data/maps/MauvilleCity/scripts.pory"
# 480 "data/maps/MauvilleCity/scripts.pory"
# 826 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 827 "data/maps/MauvilleCity/scripts.pory"
# 481 "data/maps/MauvilleCity/scripts.pory"
# 828 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 829 "data/maps/MauvilleCity/scripts.pory"

# 830 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 831 "data/maps/MauvilleCity/scripts.pory"
# 485 "data/maps/MauvilleCity/scripts.pory"
# 832 "data/maps/MauvilleCity/scripts.pory"
	lock
# 833 "data/maps/MauvilleCity/scripts.pory"
# 486 "data/maps/MauvilleCity/scripts.pory"
# 834 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 835 "data/maps/MauvilleCity/scripts.pory"
# 487 "data/maps/MauvilleCity/scripts.pory"
# 836 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_Wattson_2
# 837 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson_1:
# 838 "data/maps/MauvilleCity/scripts.pory"
# 490 "data/maps/MauvilleCity/scripts.pory"
# 839 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
# 840 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq MauvilleCity_EventScript_Wattson_5
# 841 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson_4:
# 842 "data/maps/MauvilleCity/scripts.pory"
# 493 "data/maps/MauvilleCity/scripts.pory"
# 843 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_Wattson_8
# 844 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson_7:
# 845 "data/maps/MauvilleCity/scripts.pory"
# 496 "data/maps/MauvilleCity/scripts.pory"
# 846 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 847 "data/maps/MauvilleCity/scripts.pory"
# 497 "data/maps/MauvilleCity/scripts.pory"
# 848 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 849 "data/maps/MauvilleCity/scripts.pory"
# 498 "data/maps/MauvilleCity/scripts.pory"
# 850 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 851 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq MauvilleCity_EventScript_Wattson_11
# 852 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson_10:
# 853 "data/maps/MauvilleCity/scripts.pory"
# 501 "data/maps/MauvilleCity/scripts.pory"
# 854 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 855 "data/maps/MauvilleCity/scripts.pory"
# 502 "data/maps/MauvilleCity/scripts.pory"
# 856 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 857 "data/maps/MauvilleCity/scripts.pory"
# 503 "data/maps/MauvilleCity/scripts.pory"
# 858 "data/maps/MauvilleCity/scripts.pory"
	release
# 859 "data/maps/MauvilleCity/scripts.pory"
	end
# 860 "data/maps/MauvilleCity/scripts.pory"

# 861 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson_2:
# 862 "data/maps/MauvilleCity/scripts.pory"
# 488 "data/maps/MauvilleCity/scripts.pory"
# 863 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_ReceivedThunderbolt
# 864 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_Wattson_1
# 865 "data/maps/MauvilleCity/scripts.pory"

# 866 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson_5:
# 867 "data/maps/MauvilleCity/scripts.pory"
# 491 "data/maps/MauvilleCity/scripts.pory"
# 868 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_CompletedNewMauville
# 869 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_Wattson_4
# 870 "data/maps/MauvilleCity/scripts.pory"

# 871 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson_8:
# 872 "data/maps/MauvilleCity/scripts.pory"
# 494 "data/maps/MauvilleCity/scripts.pory"
# 873 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BegunNewMauville
# 874 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_Wattson_7
# 875 "data/maps/MauvilleCity/scripts.pory"

# 876 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson_11:
# 877 "data/maps/MauvilleCity/scripts.pory"
# 499 "data/maps/MauvilleCity/scripts.pory"
# 878 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 879 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_Wattson_10
# 880 "data/maps/MauvilleCity/scripts.pory"

# 881 "data/maps/MauvilleCity/scripts.pory"

# 882 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 883 "data/maps/MauvilleCity/scripts.pory"
# 508 "data/maps/MauvilleCity/scripts.pory"
# 884 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 885 "data/maps/MauvilleCity/scripts.pory"
# 509 "data/maps/MauvilleCity/scripts.pory"
# 886 "data/maps/MauvilleCity/scripts.pory"
	release
# 887 "data/maps/MauvilleCity/scripts.pory"
	end
# 888 "data/maps/MauvilleCity/scripts.pory"

# 889 "data/maps/MauvilleCity/scripts.pory"

# 890 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 891 "data/maps/MauvilleCity/scripts.pory"
# 514 "data/maps/MauvilleCity/scripts.pory"
# 892 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 893 "data/maps/MauvilleCity/scripts.pory"
# 515 "data/maps/MauvilleCity/scripts.pory"
# 894 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 895 "data/maps/MauvilleCity/scripts.pory"
# 516 "data/maps/MauvilleCity/scripts.pory"
# 896 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 897 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq MauvilleCity_EventScript_CompletedNewMauville_2
# 898 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville_1:
# 899 "data/maps/MauvilleCity/scripts.pory"
# 519 "data/maps/MauvilleCity/scripts.pory"
# 900 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 901 "data/maps/MauvilleCity/scripts.pory"
# 520 "data/maps/MauvilleCity/scripts.pory"
# 902 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 903 "data/maps/MauvilleCity/scripts.pory"
# 521 "data/maps/MauvilleCity/scripts.pory"
# 904 "data/maps/MauvilleCity/scripts.pory"
	release
# 905 "data/maps/MauvilleCity/scripts.pory"
	end
# 906 "data/maps/MauvilleCity/scripts.pory"

# 907 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville_2:
# 908 "data/maps/MauvilleCity/scripts.pory"
# 517 "data/maps/MauvilleCity/scripts.pory"
# 909 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 910 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_CompletedNewMauville_1
# 911 "data/maps/MauvilleCity/scripts.pory"

# 912 "data/maps/MauvilleCity/scripts.pory"

# 913 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 914 "data/maps/MauvilleCity/scripts.pory"
# 526 "data/maps/MauvilleCity/scripts.pory"
# 915 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 916 "data/maps/MauvilleCity/scripts.pory"
# 527 "data/maps/MauvilleCity/scripts.pory"
# 917 "data/maps/MauvilleCity/scripts.pory"
	release
# 918 "data/maps/MauvilleCity/scripts.pory"
	end
# 919 "data/maps/MauvilleCity/scripts.pory"

# 920 "data/maps/MauvilleCity/scripts.pory"

# 921 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 922 "data/maps/MauvilleCity/scripts.pory"
# 532 "data/maps/MauvilleCity/scripts.pory"
# 923 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 924 "data/maps/MauvilleCity/scripts.pory"
# 533 "data/maps/MauvilleCity/scripts.pory"
# 925 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 926 "data/maps/MauvilleCity/scripts.pory"
# 534 "data/maps/MauvilleCity/scripts.pory"
# 927 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 928 "data/maps/MauvilleCity/scripts.pory"
# 535 "data/maps/MauvilleCity/scripts.pory"
# 929 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 930 "data/maps/MauvilleCity/scripts.pory"
# 536 "data/maps/MauvilleCity/scripts.pory"
# 931 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 932 "data/maps/MauvilleCity/scripts.pory"
# 537 "data/maps/MauvilleCity/scripts.pory"
# 933 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 934 "data/maps/MauvilleCity/scripts.pory"
# 538 "data/maps/MauvilleCity/scripts.pory"
# 935 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 936 "data/maps/MauvilleCity/scripts.pory"
# 539 "data/maps/MauvilleCity/scripts.pory"
# 937 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 938 "data/maps/MauvilleCity/scripts.pory"
# 540 "data/maps/MauvilleCity/scripts.pory"
# 939 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 940 "data/maps/MauvilleCity/scripts.pory"
# 541 "data/maps/MauvilleCity/scripts.pory"
# 941 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 942 "data/maps/MauvilleCity/scripts.pory"
# 542 "data/maps/MauvilleCity/scripts.pory"
# 943 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 944 "data/maps/MauvilleCity/scripts.pory"
# 543 "data/maps/MauvilleCity/scripts.pory"
# 945 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 946 "data/maps/MauvilleCity/scripts.pory"
	end
# 947 "data/maps/MauvilleCity/scripts.pory"

# 948 "data/maps/MauvilleCity/scripts.pory"

# 949 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy::
# 950 "data/maps/MauvilleCity/scripts.pory"
# 547 "data/maps/MauvilleCity/scripts.pory"
# 951 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 952 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 953 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 954 "data/maps/MauvilleCity/scripts.pory"

# 955 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym::
# 956 "data/maps/MauvilleCity/scripts.pory"
# 553 "data/maps/MauvilleCity/scripts.pory"
# 957 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 958 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 959 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 960 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 961 "data/maps/MauvilleCity/scripts.pory"

# 962 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt::
# 963 "data/maps/MauvilleCity/scripts.pory"
# 560 "data/maps/MauvilleCity/scripts.pory"
# 964 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 965 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 966 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 967 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 968 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 969 "data/maps/MauvilleCity/scripts.pory"

# 970 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone::
# 971 "data/maps/MauvilleCity/scripts.pory"
# 568 "data/maps/MauvilleCity/scripts.pory"
# 972 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 973 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 974 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 975 "data/maps/MauvilleCity/scripts.pory"

# 976 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe::
# 977 "data/maps/MauvilleCity/scripts.pory"
# 574 "data/maps/MauvilleCity/scripts.pory"
# 978 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 979 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 980 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 981 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 982 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 983 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 984 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 985 "data/maps/MauvilleCity/scripts.pory"

# 986 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong::
# 987 "data/maps/MauvilleCity/scripts.pory"
# 584 "data/maps/MauvilleCity/scripts.pory"
# 988 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 989 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 990 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 991 "data/maps/MauvilleCity/scripts.pory"

# 992 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally::
# 993 "data/maps/MauvilleCity/scripts.pory"
# 590 "data/maps/MauvilleCity/scripts.pory"
# 994 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 995 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 996 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 997 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 998 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 999 "data/maps/MauvilleCity/scripts.pory"

# 1000 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe::
# 1001 "data/maps/MauvilleCity/scripts.pory"
# 598 "data/maps/MauvilleCity/scripts.pory"
# 1002 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 1003 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 1004 "data/maps/MauvilleCity/scripts.pory"

# 1005 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome::
# 1006 "data/maps/MauvilleCity/scripts.pory"
# 603 "data/maps/MauvilleCity/scripts.pory"
# 1007 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 1008 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 1009 "data/maps/MauvilleCity/scripts.pory"

# 1010 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat::
# 1011 "data/maps/MauvilleCity/scripts.pory"
# 608 "data/maps/MauvilleCity/scripts.pory"
# 1012 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 1013 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 1014 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 1015 "data/maps/MauvilleCity/scripts.pory"

# 1016 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf::
# 1017 "data/maps/MauvilleCity/scripts.pory"
# 614 "data/maps/MauvilleCity/scripts.pory"
# 1018 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 1019 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 1020 "data/maps/MauvilleCity/scripts.pory"

# 1021 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle::
# 1022 "data/maps/MauvilleCity/scripts.pory"
# 619 "data/maps/MauvilleCity/scripts.pory"
# 1023 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 1024 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 1025 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 1026 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 1027 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 1028 "data/maps/MauvilleCity/scripts.pory"

# 1029 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown::
# 1030 "data/maps/MauvilleCity/scripts.pory"
# 627 "data/maps/MauvilleCity/scripts.pory"
# 1031 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 1032 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 1033 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 1034 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 1035 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 1036 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 1037 "data/maps/MauvilleCity/scripts.pory"

# 1038 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime::
# 1039 "data/maps/MauvilleCity/scripts.pory"
# 636 "data/maps/MauvilleCity/scripts.pory"
# 1040 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 1041 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 1042 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 1043 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 1044 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 1045 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 1046 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 1047 "data/maps/MauvilleCity/scripts.pory"

# 1048 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall::
# 1049 "data/maps/MauvilleCity/scripts.pory"
# 646 "data/maps/MauvilleCity/scripts.pory"
# 1050 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 1051 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 1052 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 1053 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 1054 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 1055 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 1056 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 1057 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 1058 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 1059 "data/maps/MauvilleCity/scripts.pory"

# 1060 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally::
# 1061 "data/maps/MauvilleCity/scripts.pory"
# 658 "data/maps/MauvilleCity/scripts.pory"
# 1062 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 1063 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1064 "data/maps/MauvilleCity/scripts.pory"

# 1065 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack::
# 1066 "data/maps/MauvilleCity/scripts.pory"
# 663 "data/maps/MauvilleCity/scripts.pory"
# 1067 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 1068 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 1069 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 1070 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 1071 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 1072 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 1073 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 1074 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 1075 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 1076 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 1077 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 1078 "data/maps/MauvilleCity/scripts.pory"

# 1079 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey::
# 1080 "data/maps/MauvilleCity/scripts.pory"
# 677 "data/maps/MauvilleCity/scripts.pory"
# 1081 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 1082 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 1083 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 1084 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 1085 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 1086 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 1087 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 1088 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 1089 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 1090 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 1091 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 1092 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 1093 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 1094 "data/maps/MauvilleCity/scripts.pory"

# 1095 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge::
# 1096 "data/maps/MauvilleCity/scripts.pory"
# 693 "data/maps/MauvilleCity/scripts.pory"
# 1097 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 1098 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 1099 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 1100 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 1101 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 1102 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 1103 "data/maps/MauvilleCity/scripts.pory"

# 1104 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM::
# 1105 "data/maps/MauvilleCity/scripts.pory"
# 702 "data/maps/MauvilleCity/scripts.pory"
# 1106 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 1107 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 1108 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 1109 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 1110 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 1111 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 1112 "data/maps/MauvilleCity/scripts.pory"

# 1113 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge::
# 1114 "data/maps/MauvilleCity/scripts.pory"
# 711 "data/maps/MauvilleCity/scripts.pory"
# 1115 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 1116 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 1117 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 1118 "data/maps/MauvilleCity/scripts.pory"

# 1119 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth::
# 1120 "data/maps/MauvilleCity/scripts.pory"
# 717 "data/maps/MauvilleCity/scripts.pory"
# 1121 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 1122 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 1123 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 1124 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 1125 "data/maps/MauvilleCity/scripts.pory"

# 1126 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough::
# 1127 "data/maps/MauvilleCity/scripts.pory"
# 724 "data/maps/MauvilleCity/scripts.pory"
# 1128 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 1129 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 1130 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 1131 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 1132 "data/maps/MauvilleCity/scripts.pory"

# 1133 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous::
# 1134 "data/maps/MauvilleCity/scripts.pory"
# 731 "data/maps/MauvilleCity/scripts.pory"
# 1135 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 1136 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 1137 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 1138 "data/maps/MauvilleCity/scripts.pory"

# 1139 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike::
# 1140 "data/maps/MauvilleCity/scripts.pory"
# 737 "data/maps/MauvilleCity/scripts.pory"
# 1141 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 1142 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 1143 "data/maps/MauvilleCity/scripts.pory"

# 1144 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign::
# 1145 "data/maps/MauvilleCity/scripts.pory"
# 742 "data/maps/MauvilleCity/scripts.pory"
# 1146 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 1147 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 1148 "data/maps/MauvilleCity/scripts.pory"

# 1149 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign::
# 1150 "data/maps/MauvilleCity/scripts.pory"
# 747 "data/maps/MauvilleCity/scripts.pory"
# 1151 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 1152 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 1153 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 1154 "data/maps/MauvilleCity/scripts.pory"

# 1155 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign::
# 1156 "data/maps/MauvilleCity/scripts.pory"
# 753 "data/maps/MauvilleCity/scripts.pory"
# 1157 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 1158 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 1159 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 1160 "data/maps/MauvilleCity/scripts.pory"

# 1161 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign::
# 1162 "data/maps/MauvilleCity/scripts.pory"
# 759 "data/maps/MauvilleCity/scripts.pory"
# 1163 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 1164 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 1165 "data/maps/MauvilleCity/scripts.pory"

# 1166 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV::
# 1167 "data/maps/MauvilleCity/scripts.pory"
# 764 "data/maps/MauvilleCity/scripts.pory"
# 1168 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 1169 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 1170 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 1171 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 1172 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 1173 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 1174 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 1175 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 1176 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 1177 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 1178 "data/maps/MauvilleCity/scripts.pory"

# 1179 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV::
# 1180 "data/maps/MauvilleCity/scripts.pory"
# 777 "data/maps/MauvilleCity/scripts.pory"
# 1181 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
