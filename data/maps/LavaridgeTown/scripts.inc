# 1 "data/maps/LavaridgeTown/scripts.pory"

# 2 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 3 "data/maps/LavaridgeTown/scripts.pory"
# 2 "data/maps/LavaridgeTown/scripts.pory"
# 4 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 5 "data/maps/LavaridgeTown/scripts.pory"
# 3 "data/maps/LavaridgeTown/scripts.pory"
# 6 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 8 "data/maps/LavaridgeTown/scripts.pory"

# 9 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/LavaridgeTown/scripts.pory"
# 4 "data/maps/LavaridgeTown/scripts.pory"
# 11 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 12 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 13 "data/maps/LavaridgeTown/scripts.pory"

# 14 "data/maps/LavaridgeTown/scripts.pory"

# 15 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition::
# 16 "data/maps/LavaridgeTown/scripts.pory"
# 9 "data/maps/LavaridgeTown/scripts.pory"
# 17 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 18 "data/maps/LavaridgeTown/scripts.pory"
# 10 "data/maps/LavaridgeTown/scripts.pory"
# 19 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_OnTransition_2
# 20 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition_1:
# 21 "data/maps/LavaridgeTown/scripts.pory"
# 13 "data/maps/LavaridgeTown/scripts.pory"
# 22 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_OnTransition_5
# 23 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition_4:
# 24 "data/maps/LavaridgeTown/scripts.pory"
# 16 "data/maps/LavaridgeTown/scripts.pory"
# 25 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 26 "data/maps/LavaridgeTown/scripts.pory"
# 17 "data/maps/LavaridgeTown/scripts.pory"
# 27 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 28 "data/maps/LavaridgeTown/scripts.pory"
# 18 "data/maps/LavaridgeTown/scripts.pory"
# 29 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_LAVARIDGE_TOWN_STATE, 1
# 30 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_OnTransition_8
# 31 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition_7:
# 32 "data/maps/LavaridgeTown/scripts.pory"
# 21 "data/maps/LavaridgeTown/scripts.pory"
# 33 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_LAVARIDGE_TOWN_STATE, 1
# 34 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_OnTransition_11
# 35 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition_10:
# 36 "data/maps/LavaridgeTown/scripts.pory"
	end
# 37 "data/maps/LavaridgeTown/scripts.pory"

# 38 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition_2:
# 39 "data/maps/LavaridgeTown/scripts.pory"
# 11 "data/maps/LavaridgeTown/scripts.pory"
# 40 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 41 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_OnTransition_1
# 42 "data/maps/LavaridgeTown/scripts.pory"

# 43 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition_5:
# 44 "data/maps/LavaridgeTown/scripts.pory"
# 14 "data/maps/LavaridgeTown/scripts.pory"
# 45 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 46 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_OnTransition_4
# 47 "data/maps/LavaridgeTown/scripts.pory"

# 48 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition_8:
# 49 "data/maps/LavaridgeTown/scripts.pory"
# 19 "data/maps/LavaridgeTown/scripts.pory"
# 50 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_CheckSetRivalPos
# 51 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_OnTransition_7
# 52 "data/maps/LavaridgeTown/scripts.pory"

# 53 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition_11:
# 54 "data/maps/LavaridgeTown/scripts.pory"
# 22 "data/maps/LavaridgeTown/scripts.pory"
# 55 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_HideMapNamePopup
# 56 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_OnTransition_10
# 57 "data/maps/LavaridgeTown/scripts.pory"

# 58 "data/maps/LavaridgeTown/scripts.pory"

# 59 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 60 "data/maps/LavaridgeTown/scripts.pory"
# 28 "data/maps/LavaridgeTown/scripts.pory"
# 61 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 62 "data/maps/LavaridgeTown/scripts.pory"
	return
# 63 "data/maps/LavaridgeTown/scripts.pory"

# 64 "data/maps/LavaridgeTown/scripts.pory"

# 65 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 66 "data/maps/LavaridgeTown/scripts.pory"
# 33 "data/maps/LavaridgeTown/scripts.pory"
# 67 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 68 "data/maps/LavaridgeTown/scripts.pory"
# 34 "data/maps/LavaridgeTown/scripts.pory"
# 69 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8004, 9
# 70 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_CheckSetRivalPos_2
# 71 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos_1:
# 72 "data/maps/LavaridgeTown/scripts.pory"
	return
# 73 "data/maps/LavaridgeTown/scripts.pory"

# 74 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos_2:
# 75 "data/maps/LavaridgeTown/scripts.pory"
# 35 "data/maps/LavaridgeTown/scripts.pory"
# 76 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_SetRivalPos
# 77 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_CheckSetRivalPos_1
# 78 "data/maps/LavaridgeTown/scripts.pory"

# 79 "data/maps/LavaridgeTown/scripts.pory"

# 80 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 81 "data/maps/LavaridgeTown/scripts.pory"
# 41 "data/maps/LavaridgeTown/scripts.pory"
# 82 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL, 11, 9
# 83 "data/maps/LavaridgeTown/scripts.pory"
# 42 "data/maps/LavaridgeTown/scripts.pory"
# 84 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL_ON_BIKE, 9, 8
# 85 "data/maps/LavaridgeTown/scripts.pory"
# 43 "data/maps/LavaridgeTown/scripts.pory"
# 86 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_LAVARIDGE_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 87 "data/maps/LavaridgeTown/scripts.pory"
# 44 "data/maps/LavaridgeTown/scripts.pory"
# 88 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 89 "data/maps/LavaridgeTown/scripts.pory"
	return
# 90 "data/maps/LavaridgeTown/scripts.pory"

# 91 "data/maps/LavaridgeTown/scripts.pory"

# 92 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 93 "data/maps/LavaridgeTown/scripts.pory"
# 49 "data/maps/LavaridgeTown/scripts.pory"
# 94 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 95 "data/maps/LavaridgeTown/scripts.pory"
	return
# 96 "data/maps/LavaridgeTown/scripts.pory"

# 97 "data/maps/LavaridgeTown/scripts.pory"

# 98 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 99 "data/maps/LavaridgeTown/scripts.pory"
# 54 "data/maps/LavaridgeTown/scripts.pory"
# 100 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 101 "data/maps/LavaridgeTown/scripts.pory"
	return
# 102 "data/maps/LavaridgeTown/scripts.pory"

# 103 "data/maps/LavaridgeTown/scripts.pory"

# 104 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 105 "data/maps/LavaridgeTown/scripts.pory"
# 59 "data/maps/LavaridgeTown/scripts.pory"
# 106 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 107 "data/maps/LavaridgeTown/scripts.pory"
# 60 "data/maps/LavaridgeTown/scripts.pory"
# 108 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 109 "data/maps/LavaridgeTown/scripts.pory"
# 61 "data/maps/LavaridgeTown/scripts.pory"
# 110 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
# 111 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_2
# 112 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_1:
# 113 "data/maps/LavaridgeTown/scripts.pory"
# 64 "data/maps/LavaridgeTown/scripts.pory"
# 114 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
# 115 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_ne LavaridgeTown_EventScript_RivalGiveGoGoggles_5
# 116 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_4:
# 117 "data/maps/LavaridgeTown/scripts.pory"
# 67 "data/maps/LavaridgeTown/scripts.pory"
# 118 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 119 "data/maps/LavaridgeTown/scripts.pory"
# 68 "data/maps/LavaridgeTown/scripts.pory"
# 120 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 121 "data/maps/LavaridgeTown/scripts.pory"
# 69 "data/maps/LavaridgeTown/scripts.pory"
# 122 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, MALE
# 123 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_8
# 124 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_7:
# 125 "data/maps/LavaridgeTown/scripts.pory"
# 72 "data/maps/LavaridgeTown/scripts.pory"
# 126 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, FEMALE
# 127 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_11
# 128 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_10:
# 129 "data/maps/LavaridgeTown/scripts.pory"
# 75 "data/maps/LavaridgeTown/scripts.pory"
# 130 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
# 131 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_14
# 132 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_13:
# 133 "data/maps/LavaridgeTown/scripts.pory"
# 78 "data/maps/LavaridgeTown/scripts.pory"
# 134 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
# 135 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_ne LavaridgeTown_EventScript_RivalGiveGoGoggles_17
# 136 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_16:
# 137 "data/maps/LavaridgeTown/scripts.pory"
# 81 "data/maps/LavaridgeTown/scripts.pory"
# 138 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 139 "data/maps/LavaridgeTown/scripts.pory"
# 82 "data/maps/LavaridgeTown/scripts.pory"
# 140 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, MALE
# 141 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_20
# 142 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_19:
# 143 "data/maps/LavaridgeTown/scripts.pory"
# 85 "data/maps/LavaridgeTown/scripts.pory"
# 144 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, FEMALE
# 145 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_23
# 146 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_22:
# 147 "data/maps/LavaridgeTown/scripts.pory"
	end
# 148 "data/maps/LavaridgeTown/scripts.pory"

# 149 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_2:
# 150 "data/maps/LavaridgeTown/scripts.pory"
# 62 "data/maps/LavaridgeTown/scripts.pory"
# 151 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalNoticePlayer
# 152 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_1
# 153 "data/maps/LavaridgeTown/scripts.pory"

# 154 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_5:
# 155 "data/maps/LavaridgeTown/scripts.pory"
# 65 "data/maps/LavaridgeTown/scripts.pory"
# 156 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalExitHerbShop
# 157 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_4
# 158 "data/maps/LavaridgeTown/scripts.pory"

# 159 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_8:
# 160 "data/maps/LavaridgeTown/scripts.pory"
# 70 "data/maps/LavaridgeTown/scripts.pory"
# 161 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_PlayMayMusic
# 162 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_7
# 163 "data/maps/LavaridgeTown/scripts.pory"

# 164 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_11:
# 165 "data/maps/LavaridgeTown/scripts.pory"
# 73 "data/maps/LavaridgeTown/scripts.pory"
# 166 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_PlayBrendanMusic
# 167 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_10
# 168 "data/maps/LavaridgeTown/scripts.pory"

# 169 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_14:
# 170 "data/maps/LavaridgeTown/scripts.pory"
# 76 "data/maps/LavaridgeTown/scripts.pory"
# 171 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalApproachPlayer1
# 172 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_13
# 173 "data/maps/LavaridgeTown/scripts.pory"

# 174 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_17:
# 175 "data/maps/LavaridgeTown/scripts.pory"
# 79 "data/maps/LavaridgeTown/scripts.pory"
# 176 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalApproachPlayer2
# 177 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_16
# 178 "data/maps/LavaridgeTown/scripts.pory"

# 179 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_20:
# 180 "data/maps/LavaridgeTown/scripts.pory"
# 83 "data/maps/LavaridgeTown/scripts.pory"
# 181 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_MayGiveGoGoggles
# 182 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_19
# 183 "data/maps/LavaridgeTown/scripts.pory"

# 184 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_23:
# 185 "data/maps/LavaridgeTown/scripts.pory"
# 86 "data/maps/LavaridgeTown/scripts.pory"
# 186 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 187 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_22
# 188 "data/maps/LavaridgeTown/scripts.pory"

# 189 "data/maps/LavaridgeTown/scripts.pory"

# 190 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 191 "data/maps/LavaridgeTown/scripts.pory"
# 92 "data/maps/LavaridgeTown/scripts.pory"
# 192 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 193 "data/maps/LavaridgeTown/scripts.pory"
# 93 "data/maps/LavaridgeTown/scripts.pory"
# 194 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 195 "data/maps/LavaridgeTown/scripts.pory"
# 94 "data/maps/LavaridgeTown/scripts.pory"
# 196 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 197 "data/maps/LavaridgeTown/scripts.pory"
# 95 "data/maps/LavaridgeTown/scripts.pory"
# 198 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 199 "data/maps/LavaridgeTown/scripts.pory"
# 96 "data/maps/LavaridgeTown/scripts.pory"
# 200 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 201 "data/maps/LavaridgeTown/scripts.pory"
	end
# 202 "data/maps/LavaridgeTown/scripts.pory"

# 203 "data/maps/LavaridgeTown/scripts.pory"

# 204 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 205 "data/maps/LavaridgeTown/scripts.pory"
# 101 "data/maps/LavaridgeTown/scripts.pory"
# 206 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 207 "data/maps/LavaridgeTown/scripts.pory"
# 102 "data/maps/LavaridgeTown/scripts.pory"
# 208 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 209 "data/maps/LavaridgeTown/scripts.pory"
# 103 "data/maps/LavaridgeTown/scripts.pory"
# 210 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 211 "data/maps/LavaridgeTown/scripts.pory"
# 104 "data/maps/LavaridgeTown/scripts.pory"
# 212 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 213 "data/maps/LavaridgeTown/scripts.pory"
# 105 "data/maps/LavaridgeTown/scripts.pory"
# 214 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 215 "data/maps/LavaridgeTown/scripts.pory"
	end
# 216 "data/maps/LavaridgeTown/scripts.pory"

# 217 "data/maps/LavaridgeTown/scripts.pory"

# 218 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 219 "data/maps/LavaridgeTown/scripts.pory"
# 110 "data/maps/LavaridgeTown/scripts.pory"
# 220 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 221 "data/maps/LavaridgeTown/scripts.pory"
# 111 "data/maps/LavaridgeTown/scripts.pory"
# 222 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_LAVARIDGE_RIVAL
# 223 "data/maps/LavaridgeTown/scripts.pory"
# 112 "data/maps/LavaridgeTown/scripts.pory"
# 224 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
# 225 "data/maps/LavaridgeTown/scripts.pory"
# 113 "data/maps/LavaridgeTown/scripts.pory"
# 226 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 227 "data/maps/LavaridgeTown/scripts.pory"
# 114 "data/maps/LavaridgeTown/scripts.pory"
# 228 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
# 229 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_RivalExit_2
# 230 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit_1:
# 231 "data/maps/LavaridgeTown/scripts.pory"
# 117 "data/maps/LavaridgeTown/scripts.pory"
# 232 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
# 233 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_ne LavaridgeTown_EventScript_RivalExit_5
# 234 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit_4:
# 235 "data/maps/LavaridgeTown/scripts.pory"
# 120 "data/maps/LavaridgeTown/scripts.pory"
# 236 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
# 237 "data/maps/LavaridgeTown/scripts.pory"
# 121 "data/maps/LavaridgeTown/scripts.pory"
# 238 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 239 "data/maps/LavaridgeTown/scripts.pory"
# 122 "data/maps/LavaridgeTown/scripts.pory"
# 240 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 241 "data/maps/LavaridgeTown/scripts.pory"
# 123 "data/maps/LavaridgeTown/scripts.pory"
# 242 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 243 "data/maps/LavaridgeTown/scripts.pory"
# 124 "data/maps/LavaridgeTown/scripts.pory"
# 244 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 245 "data/maps/LavaridgeTown/scripts.pory"
# 125 "data/maps/LavaridgeTown/scripts.pory"
# 246 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 247 "data/maps/LavaridgeTown/scripts.pory"
	end
# 248 "data/maps/LavaridgeTown/scripts.pory"

# 249 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit_2:
# 250 "data/maps/LavaridgeTown/scripts.pory"
# 115 "data/maps/LavaridgeTown/scripts.pory"
# 251 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalExit1
# 252 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit_1
# 253 "data/maps/LavaridgeTown/scripts.pory"

# 254 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit_5:
# 255 "data/maps/LavaridgeTown/scripts.pory"
# 118 "data/maps/LavaridgeTown/scripts.pory"
# 256 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_RivalExit2
# 257 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit_4
# 258 "data/maps/LavaridgeTown/scripts.pory"

# 259 "data/maps/LavaridgeTown/scripts.pory"

# 260 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 261 "data/maps/LavaridgeTown/scripts.pory"
# 130 "data/maps/LavaridgeTown/scripts.pory"
# 262 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 263 "data/maps/LavaridgeTown/scripts.pory"
	return
# 264 "data/maps/LavaridgeTown/scripts.pory"

# 265 "data/maps/LavaridgeTown/scripts.pory"

# 266 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 267 "data/maps/LavaridgeTown/scripts.pory"
# 135 "data/maps/LavaridgeTown/scripts.pory"
# 268 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 269 "data/maps/LavaridgeTown/scripts.pory"
	return
# 270 "data/maps/LavaridgeTown/scripts.pory"

# 271 "data/maps/LavaridgeTown/scripts.pory"

# 272 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 273 "data/maps/LavaridgeTown/scripts.pory"
# 140 "data/maps/LavaridgeTown/scripts.pory"
# 274 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 275 "data/maps/LavaridgeTown/scripts.pory"
# 141 "data/maps/LavaridgeTown/scripts.pory"
# 276 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 277 "data/maps/LavaridgeTown/scripts.pory"
# 142 "data/maps/LavaridgeTown/scripts.pory"
# 278 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 279 "data/maps/LavaridgeTown/scripts.pory"
# 143 "data/maps/LavaridgeTown/scripts.pory"
# 280 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
# 281 "data/maps/LavaridgeTown/scripts.pory"
# 144 "data/maps/LavaridgeTown/scripts.pory"
# 282 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 283 "data/maps/LavaridgeTown/scripts.pory"
# 145 "data/maps/LavaridgeTown/scripts.pory"
# 284 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
# 285 "data/maps/LavaridgeTown/scripts.pory"
# 146 "data/maps/LavaridgeTown/scripts.pory"
# 286 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 287 "data/maps/LavaridgeTown/scripts.pory"
	return
# 288 "data/maps/LavaridgeTown/scripts.pory"

# 289 "data/maps/LavaridgeTown/scripts.pory"

# 290 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 291 "data/maps/LavaridgeTown/scripts.pory"
# 151 "data/maps/LavaridgeTown/scripts.pory"
# 292 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 293 "data/maps/LavaridgeTown/scripts.pory"
# 152 "data/maps/LavaridgeTown/scripts.pory"
# 294 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 295 "data/maps/LavaridgeTown/scripts.pory"
# 153 "data/maps/LavaridgeTown/scripts.pory"
# 296 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_LAVARIDGE_RIVAL
# 297 "data/maps/LavaridgeTown/scripts.pory"
# 154 "data/maps/LavaridgeTown/scripts.pory"
# 298 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 299 "data/maps/LavaridgeTown/scripts.pory"
# 155 "data/maps/LavaridgeTown/scripts.pory"
# 300 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 301 "data/maps/LavaridgeTown/scripts.pory"
# 156 "data/maps/LavaridgeTown/scripts.pory"
# 302 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 303 "data/maps/LavaridgeTown/scripts.pory"
# 157 "data/maps/LavaridgeTown/scripts.pory"
# 304 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 305 "data/maps/LavaridgeTown/scripts.pory"
# 158 "data/maps/LavaridgeTown/scripts.pory"
# 306 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 307 "data/maps/LavaridgeTown/scripts.pory"
# 159 "data/maps/LavaridgeTown/scripts.pory"
# 308 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 309 "data/maps/LavaridgeTown/scripts.pory"
# 160 "data/maps/LavaridgeTown/scripts.pory"
# 310 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 311 "data/maps/LavaridgeTown/scripts.pory"
# 161 "data/maps/LavaridgeTown/scripts.pory"
# 312 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
# 313 "data/maps/LavaridgeTown/scripts.pory"
# 162 "data/maps/LavaridgeTown/scripts.pory"
# 314 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 315 "data/maps/LavaridgeTown/scripts.pory"
# 163 "data/maps/LavaridgeTown/scripts.pory"
# 316 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
# 317 "data/maps/LavaridgeTown/scripts.pory"
# 164 "data/maps/LavaridgeTown/scripts.pory"
# 318 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 319 "data/maps/LavaridgeTown/scripts.pory"
# 165 "data/maps/LavaridgeTown/scripts.pory"
# 320 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 321 "data/maps/LavaridgeTown/scripts.pory"
# 166 "data/maps/LavaridgeTown/scripts.pory"
# 322 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 323 "data/maps/LavaridgeTown/scripts.pory"
	return
# 324 "data/maps/LavaridgeTown/scripts.pory"

# 325 "data/maps/LavaridgeTown/scripts.pory"

# 326 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 327 "data/maps/LavaridgeTown/scripts.pory"
# 171 "data/maps/LavaridgeTown/scripts.pory"
# 328 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 329 "data/maps/LavaridgeTown/scripts.pory"
# 172 "data/maps/LavaridgeTown/scripts.pory"
# 330 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 331 "data/maps/LavaridgeTown/scripts.pory"
	return
# 332 "data/maps/LavaridgeTown/scripts.pory"

# 333 "data/maps/LavaridgeTown/scripts.pory"

# 334 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 335 "data/maps/LavaridgeTown/scripts.pory"
# 177 "data/maps/LavaridgeTown/scripts.pory"
# 336 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 337 "data/maps/LavaridgeTown/scripts.pory"
# 178 "data/maps/LavaridgeTown/scripts.pory"
# 338 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 339 "data/maps/LavaridgeTown/scripts.pory"
	return
# 340 "data/maps/LavaridgeTown/scripts.pory"

# 341 "data/maps/LavaridgeTown/scripts.pory"

# 342 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 343 "data/maps/LavaridgeTown/scripts.pory"
# 183 "data/maps/LavaridgeTown/scripts.pory"
# 344 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 345 "data/maps/LavaridgeTown/scripts.pory"
# 184 "data/maps/LavaridgeTown/scripts.pory"
# 346 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 347 "data/maps/LavaridgeTown/scripts.pory"
# 185 "data/maps/LavaridgeTown/scripts.pory"
# 348 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 349 "data/maps/LavaridgeTown/scripts.pory"
	return
# 350 "data/maps/LavaridgeTown/scripts.pory"

# 351 "data/maps/LavaridgeTown/scripts.pory"

# 352 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 353 "data/maps/LavaridgeTown/scripts.pory"
# 190 "data/maps/LavaridgeTown/scripts.pory"
# 354 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 355 "data/maps/LavaridgeTown/scripts.pory"
# 191 "data/maps/LavaridgeTown/scripts.pory"
# 356 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 357 "data/maps/LavaridgeTown/scripts.pory"
	return
# 358 "data/maps/LavaridgeTown/scripts.pory"

# 359 "data/maps/LavaridgeTown/scripts.pory"

# 360 "data/maps/LavaridgeTown/scripts.pory"
# 195 "data/maps/LavaridgeTown/scripts.pory"
# 361 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 362 "data/maps/LavaridgeTown/scripts.pory"
# 196 "data/maps/LavaridgeTown/scripts.pory"
# 363 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 364 "data/maps/LavaridgeTown/scripts.pory"
# 197 "data/maps/LavaridgeTown/scripts.pory"
# 365 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/LavaridgeTown/scripts.pory"
# 198 "data/maps/LavaridgeTown/scripts.pory"
# 367 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 368 "data/maps/LavaridgeTown/scripts.pory"
# 199 "data/maps/LavaridgeTown/scripts.pory"
# 369 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 370 "data/maps/LavaridgeTown/scripts.pory"
# 200 "data/maps/LavaridgeTown/scripts.pory"
# 371 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 372 "data/maps/LavaridgeTown/scripts.pory"
# 201 "data/maps/LavaridgeTown/scripts.pory"
# 373 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 374 "data/maps/LavaridgeTown/scripts.pory"
# 202 "data/maps/LavaridgeTown/scripts.pory"
# 375 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 376 "data/maps/LavaridgeTown/scripts.pory"
# 203 "data/maps/LavaridgeTown/scripts.pory"
# 377 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 378 "data/maps/LavaridgeTown/scripts.pory"
# 204 "data/maps/LavaridgeTown/scripts.pory"
# 379 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 380 "data/maps/LavaridgeTown/scripts.pory"
# 205 "data/maps/LavaridgeTown/scripts.pory"
# 381 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 382 "data/maps/LavaridgeTown/scripts.pory"
# 206 "data/maps/LavaridgeTown/scripts.pory"
# 383 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 384 "data/maps/LavaridgeTown/scripts.pory"

# 385 "data/maps/LavaridgeTown/scripts.pory"
# 209 "data/maps/LavaridgeTown/scripts.pory"
# 386 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 387 "data/maps/LavaridgeTown/scripts.pory"
# 210 "data/maps/LavaridgeTown/scripts.pory"
# 388 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 389 "data/maps/LavaridgeTown/scripts.pory"
# 211 "data/maps/LavaridgeTown/scripts.pory"
# 390 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 391 "data/maps/LavaridgeTown/scripts.pory"
# 212 "data/maps/LavaridgeTown/scripts.pory"
# 392 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 393 "data/maps/LavaridgeTown/scripts.pory"
# 213 "data/maps/LavaridgeTown/scripts.pory"
# 394 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 395 "data/maps/LavaridgeTown/scripts.pory"

# 396 "data/maps/LavaridgeTown/scripts.pory"
# 216 "data/maps/LavaridgeTown/scripts.pory"
# 397 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 398 "data/maps/LavaridgeTown/scripts.pory"
# 217 "data/maps/LavaridgeTown/scripts.pory"
# 399 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 400 "data/maps/LavaridgeTown/scripts.pory"
# 218 "data/maps/LavaridgeTown/scripts.pory"
# 401 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 402 "data/maps/LavaridgeTown/scripts.pory"
# 219 "data/maps/LavaridgeTown/scripts.pory"
# 403 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 404 "data/maps/LavaridgeTown/scripts.pory"
# 220 "data/maps/LavaridgeTown/scripts.pory"
# 405 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 406 "data/maps/LavaridgeTown/scripts.pory"
# 221 "data/maps/LavaridgeTown/scripts.pory"
# 407 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 408 "data/maps/LavaridgeTown/scripts.pory"
# 222 "data/maps/LavaridgeTown/scripts.pory"
# 409 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 410 "data/maps/LavaridgeTown/scripts.pory"
# 223 "data/maps/LavaridgeTown/scripts.pory"
# 411 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 412 "data/maps/LavaridgeTown/scripts.pory"
# 224 "data/maps/LavaridgeTown/scripts.pory"
# 413 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 414 "data/maps/LavaridgeTown/scripts.pory"
# 225 "data/maps/LavaridgeTown/scripts.pory"
# 415 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 416 "data/maps/LavaridgeTown/scripts.pory"
# 226 "data/maps/LavaridgeTown/scripts.pory"
# 417 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 418 "data/maps/LavaridgeTown/scripts.pory"

# 419 "data/maps/LavaridgeTown/scripts.pory"
# 229 "data/maps/LavaridgeTown/scripts.pory"
# 420 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 421 "data/maps/LavaridgeTown/scripts.pory"
# 230 "data/maps/LavaridgeTown/scripts.pory"
# 422 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 423 "data/maps/LavaridgeTown/scripts.pory"
# 231 "data/maps/LavaridgeTown/scripts.pory"
# 424 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 425 "data/maps/LavaridgeTown/scripts.pory"
# 232 "data/maps/LavaridgeTown/scripts.pory"
# 426 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 427 "data/maps/LavaridgeTown/scripts.pory"
# 233 "data/maps/LavaridgeTown/scripts.pory"
# 428 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 429 "data/maps/LavaridgeTown/scripts.pory"
# 234 "data/maps/LavaridgeTown/scripts.pory"
# 430 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 431 "data/maps/LavaridgeTown/scripts.pory"
# 235 "data/maps/LavaridgeTown/scripts.pory"
# 432 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 433 "data/maps/LavaridgeTown/scripts.pory"
# 236 "data/maps/LavaridgeTown/scripts.pory"
# 434 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 435 "data/maps/LavaridgeTown/scripts.pory"

# 436 "data/maps/LavaridgeTown/scripts.pory"
# 239 "data/maps/LavaridgeTown/scripts.pory"
# 437 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 438 "data/maps/LavaridgeTown/scripts.pory"
# 240 "data/maps/LavaridgeTown/scripts.pory"
# 439 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 440 "data/maps/LavaridgeTown/scripts.pory"
# 241 "data/maps/LavaridgeTown/scripts.pory"
# 441 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 442 "data/maps/LavaridgeTown/scripts.pory"
# 242 "data/maps/LavaridgeTown/scripts.pory"
# 443 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 444 "data/maps/LavaridgeTown/scripts.pory"
# 243 "data/maps/LavaridgeTown/scripts.pory"
# 445 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 446 "data/maps/LavaridgeTown/scripts.pory"

# 447 "data/maps/LavaridgeTown/scripts.pory"
# 246 "data/maps/LavaridgeTown/scripts.pory"
# 448 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 449 "data/maps/LavaridgeTown/scripts.pory"
# 247 "data/maps/LavaridgeTown/scripts.pory"
# 450 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 451 "data/maps/LavaridgeTown/scripts.pory"
# 248 "data/maps/LavaridgeTown/scripts.pory"
# 452 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 453 "data/maps/LavaridgeTown/scripts.pory"

# 454 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 455 "data/maps/LavaridgeTown/scripts.pory"
# 252 "data/maps/LavaridgeTown/scripts.pory"
# 456 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 457 "data/maps/LavaridgeTown/scripts.pory"
# 253 "data/maps/LavaridgeTown/scripts.pory"
# 458 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
# 459 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_HotSpringsTrigger_2
# 460 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger_1:
# 461 "data/maps/LavaridgeTown/scripts.pory"
	end
# 462 "data/maps/LavaridgeTown/scripts.pory"

# 463 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger_2:
# 464 "data/maps/LavaridgeTown/scripts.pory"
# 254 "data/maps/LavaridgeTown/scripts.pory"
# 465 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_EnteredHotSprings
# 466 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_HotSpringsTrigger_1
# 467 "data/maps/LavaridgeTown/scripts.pory"

# 468 "data/maps/LavaridgeTown/scripts.pory"

# 469 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 470 "data/maps/LavaridgeTown/scripts.pory"
# 260 "data/maps/LavaridgeTown/scripts.pory"
# 471 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 472 "data/maps/LavaridgeTown/scripts.pory"
	end
# 473 "data/maps/LavaridgeTown/scripts.pory"

# 474 "data/maps/LavaridgeTown/scripts.pory"

# 475 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 476 "data/maps/LavaridgeTown/scripts.pory"
# 265 "data/maps/LavaridgeTown/scripts.pory"
# 477 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 478 "data/maps/LavaridgeTown/scripts.pory"
	end
# 479 "data/maps/LavaridgeTown/scripts.pory"

# 480 "data/maps/LavaridgeTown/scripts.pory"

# 481 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 482 "data/maps/LavaridgeTown/scripts.pory"
# 270 "data/maps/LavaridgeTown/scripts.pory"
# 483 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 484 "data/maps/LavaridgeTown/scripts.pory"
	end
# 485 "data/maps/LavaridgeTown/scripts.pory"

# 486 "data/maps/LavaridgeTown/scripts.pory"

# 487 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 488 "data/maps/LavaridgeTown/scripts.pory"
# 275 "data/maps/LavaridgeTown/scripts.pory"
# 489 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 490 "data/maps/LavaridgeTown/scripts.pory"
	end
# 491 "data/maps/LavaridgeTown/scripts.pory"

# 492 "data/maps/LavaridgeTown/scripts.pory"

# 493 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 494 "data/maps/LavaridgeTown/scripts.pory"
# 280 "data/maps/LavaridgeTown/scripts.pory"
# 495 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 496 "data/maps/LavaridgeTown/scripts.pory"
	end
# 497 "data/maps/LavaridgeTown/scripts.pory"

# 498 "data/maps/LavaridgeTown/scripts.pory"

# 499 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 500 "data/maps/LavaridgeTown/scripts.pory"
# 285 "data/maps/LavaridgeTown/scripts.pory"
# 501 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 502 "data/maps/LavaridgeTown/scripts.pory"
	end
# 503 "data/maps/LavaridgeTown/scripts.pory"

# 504 "data/maps/LavaridgeTown/scripts.pory"

# 505 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 506 "data/maps/LavaridgeTown/scripts.pory"
# 290 "data/maps/LavaridgeTown/scripts.pory"
# 507 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 508 "data/maps/LavaridgeTown/scripts.pory"
	end
# 509 "data/maps/LavaridgeTown/scripts.pory"

# 510 "data/maps/LavaridgeTown/scripts.pory"

# 511 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman::
# 512 "data/maps/LavaridgeTown/scripts.pory"
# 295 "data/maps/LavaridgeTown/scripts.pory"
# 513 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 514 "data/maps/LavaridgeTown/scripts.pory"
# 296 "data/maps/LavaridgeTown/scripts.pory"
# 515 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 516 "data/maps/LavaridgeTown/scripts.pory"
# 297 "data/maps/LavaridgeTown/scripts.pory"
# 517 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_EggWoman_2
# 518 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman_1:
# 519 "data/maps/LavaridgeTown/scripts.pory"
# 300 "data/maps/LavaridgeTown/scripts.pory"
# 520 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 521 "data/maps/LavaridgeTown/scripts.pory"
# 301 "data/maps/LavaridgeTown/scripts.pory"
# 522 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
# 523 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_EggWoman_5
# 524 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman_4:
# 525 "data/maps/LavaridgeTown/scripts.pory"
# 304 "data/maps/LavaridgeTown/scripts.pory"
# 526 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 527 "data/maps/LavaridgeTown/scripts.pory"
# 305 "data/maps/LavaridgeTown/scripts.pory"
# 528 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 529 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_EggWoman_8
# 530 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman_7:
# 531 "data/maps/LavaridgeTown/scripts.pory"
# 308 "data/maps/LavaridgeTown/scripts.pory"
# 532 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 533 "data/maps/LavaridgeTown/scripts.pory"
# 309 "data/maps/LavaridgeTown/scripts.pory"
# 534 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 535 "data/maps/LavaridgeTown/scripts.pory"
# 310 "data/maps/LavaridgeTown/scripts.pory"
# 536 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 537 "data/maps/LavaridgeTown/scripts.pory"
# 311 "data/maps/LavaridgeTown/scripts.pory"
# 538 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 539 "data/maps/LavaridgeTown/scripts.pory"
# 312 "data/maps/LavaridgeTown/scripts.pory"
# 540 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 541 "data/maps/LavaridgeTown/scripts.pory"
# 313 "data/maps/LavaridgeTown/scripts.pory"
# 542 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 543 "data/maps/LavaridgeTown/scripts.pory"
# 314 "data/maps/LavaridgeTown/scripts.pory"
# 544 "data/maps/LavaridgeTown/scripts.pory"
	release
# 545 "data/maps/LavaridgeTown/scripts.pory"
	end
# 546 "data/maps/LavaridgeTown/scripts.pory"

# 547 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman_2:
# 548 "data/maps/LavaridgeTown/scripts.pory"
# 298 "data/maps/LavaridgeTown/scripts.pory"
# 549 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_ReceivedEgg
# 550 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_EggWoman_1
# 551 "data/maps/LavaridgeTown/scripts.pory"

# 552 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman_5:
# 553 "data/maps/LavaridgeTown/scripts.pory"
# 302 "data/maps/LavaridgeTown/scripts.pory"
# 554 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_DeclineEgg
# 555 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_EggWoman_4
# 556 "data/maps/LavaridgeTown/scripts.pory"

# 557 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman_8:
# 558 "data/maps/LavaridgeTown/scripts.pory"
# 306 "data/maps/LavaridgeTown/scripts.pory"
# 559 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_NoRoomForEgg
# 560 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_EggWoman_7
# 561 "data/maps/LavaridgeTown/scripts.pory"

# 562 "data/maps/LavaridgeTown/scripts.pory"

# 563 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg::
# 564 "data/maps/LavaridgeTown/scripts.pory"
# 319 "data/maps/LavaridgeTown/scripts.pory"
# 565 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 566 "data/maps/LavaridgeTown/scripts.pory"
# 320 "data/maps/LavaridgeTown/scripts.pory"
# 567 "data/maps/LavaridgeTown/scripts.pory"
	release
# 568 "data/maps/LavaridgeTown/scripts.pory"
	end
# 569 "data/maps/LavaridgeTown/scripts.pory"

# 570 "data/maps/LavaridgeTown/scripts.pory"

# 571 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg::
# 572 "data/maps/LavaridgeTown/scripts.pory"
# 325 "data/maps/LavaridgeTown/scripts.pory"
# 573 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 574 "data/maps/LavaridgeTown/scripts.pory"
# 326 "data/maps/LavaridgeTown/scripts.pory"
# 575 "data/maps/LavaridgeTown/scripts.pory"
	release
# 576 "data/maps/LavaridgeTown/scripts.pory"
	end
# 577 "data/maps/LavaridgeTown/scripts.pory"

# 578 "data/maps/LavaridgeTown/scripts.pory"

# 579 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg::
# 580 "data/maps/LavaridgeTown/scripts.pory"
# 331 "data/maps/LavaridgeTown/scripts.pory"
# 581 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 582 "data/maps/LavaridgeTown/scripts.pory"
# 332 "data/maps/LavaridgeTown/scripts.pory"
# 583 "data/maps/LavaridgeTown/scripts.pory"
	release
# 584 "data/maps/LavaridgeTown/scripts.pory"
	end
# 585 "data/maps/LavaridgeTown/scripts.pory"

# 586 "data/maps/LavaridgeTown/scripts.pory"

# 587 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 588 "data/maps/LavaridgeTown/scripts.pory"
# 337 "data/maps/LavaridgeTown/scripts.pory"
# 589 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 590 "data/maps/LavaridgeTown/scripts.pory"
	end
# 591 "data/maps/LavaridgeTown/scripts.pory"

# 592 "data/maps/LavaridgeTown/scripts.pory"

# 593 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 594 "data/maps/LavaridgeTown/scripts.pory"
# 342 "data/maps/LavaridgeTown/scripts.pory"
# 595 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 596 "data/maps/LavaridgeTown/scripts.pory"
	end
# 597 "data/maps/LavaridgeTown/scripts.pory"

# 598 "data/maps/LavaridgeTown/scripts.pory"

# 599 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 600 "data/maps/LavaridgeTown/scripts.pory"
# 347 "data/maps/LavaridgeTown/scripts.pory"
# 601 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 602 "data/maps/LavaridgeTown/scripts.pory"
	end
# 603 "data/maps/LavaridgeTown/scripts.pory"

# 604 "data/maps/LavaridgeTown/scripts.pory"

# 605 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis::
# 606 "data/maps/LavaridgeTown/scripts.pory"
# 351 "data/maps/LavaridgeTown/scripts.pory"
# 607 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
# 608 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 609 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the LAVARIDGE GYM BADGE.\p"
# 610 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 611 "data/maps/LavaridgeTown/scripts.pory"
	.string "good POKéMON…\l"
# 612 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 613 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 614 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 615 "data/maps/LavaridgeTown/scripts.pory"

# 616 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad::
# 617 "data/maps/LavaridgeTown/scripts.pory"
# 362 "data/maps/LavaridgeTown/scripts.pory"
# 618 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those GO-GOGGLES, you'll\n"
# 619 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting through the\l"
# 620 "data/maps/LavaridgeTown/scripts.pory"
	.string "desert near ROUTE 111.\p"
# 621 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 622 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging GYMS…\p"
# 623 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 624 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 625 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 626 "data/maps/LavaridgeTown/scripts.pory"
	.string "your dad in PETALBURG GYM.\p"
# 627 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 628 "data/maps/LavaridgeTown/scripts.pory"

# 629 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis::
# 630 "data/maps/LavaridgeTown/scripts.pory"
# 375 "data/maps/LavaridgeTown/scripts.pory"
# 631 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
# 632 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 633 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 634 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of BADGES.\p"
# 635 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 636 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 637 "data/maps/LavaridgeTown/scripts.pory"

# 638 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad::
# 639 "data/maps/LavaridgeTown/scripts.pory"
# 384 "data/maps/LavaridgeTown/scripts.pory"
# 640 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: Keep those with you if you're\n"
# 641 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that desert near\l"
# 642 "data/maps/LavaridgeTown/scripts.pory"
	.string "ROUTE 111.\p"
# 643 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some POKéMON that\n"
# 644 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively desert-dwellers.\l"
# 645 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 646 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 647 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering challenging NORMAN,\l"
# 648 "data/maps/LavaridgeTown/scripts.pory"
	.string "the GYM LEADER of PETALBURG.\p"
# 649 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
# 650 "data/maps/LavaridgeTown/scripts.pory"
	.string "he really is tough.\p"
# 651 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 652 "data/maps/LavaridgeTown/scripts.pory"

# 653 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt::
# 654 "data/maps/LavaridgeTown/scripts.pory"
# 399 "data/maps/LavaridgeTown/scripts.pory"
# 655 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
# 656 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 657 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 658 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 659 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 660 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with POKéMON and\l"
# 661 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 662 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a TRAINER, yes?\n"
# 663 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your POKéMON radiate vitality.\p"
# 664 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 665 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this EGG to hatch?$"
# 666 "data/maps/LavaridgeTown/scripts.pory"

# 667 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg::
# 668 "data/maps/LavaridgeTown/scripts.pory"
# 413 "data/maps/LavaridgeTown/scripts.pory"
# 669 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 670 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here EGG!$"
# 671 "data/maps/LavaridgeTown/scripts.pory"

# 672 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg::
# 673 "data/maps/LavaridgeTown/scripts.pory"
# 418 "data/maps/LavaridgeTown/scripts.pory"
# 674 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"
# 675 "data/maps/LavaridgeTown/scripts.pory"

# 676 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg::
# 677 "data/maps/LavaridgeTown/scripts.pory"
# 422 "data/maps/LavaridgeTown/scripts.pory"
# 678 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
# 679 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this EGG…$"
# 680 "data/maps/LavaridgeTown/scripts.pory"

# 681 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen::
# 682 "data/maps/LavaridgeTown/scripts.pory"
# 427 "data/maps/LavaridgeTown/scripts.pory"
# 683 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 684 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 685 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this EGG, I will be here.$"
# 686 "data/maps/LavaridgeTown/scripts.pory"

# 687 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare::
# 688 "data/maps/LavaridgeTown/scripts.pory"
# 433 "data/maps/LavaridgeTown/scripts.pory"
# 689 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an EGG will be found at\n"
# 690 "data/maps/LavaridgeTown/scripts.pory"
	.string "the POKéMON DAY CARE.\p"
# 691 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 692 "data/maps/LavaridgeTown/scripts.pory"

# 693 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry::
# 694 "data/maps/LavaridgeTown/scripts.pory"
# 439 "data/maps/LavaridgeTown/scripts.pory"
# 695 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 696 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 697 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 698 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 699 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 700 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 701 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 702 "data/maps/LavaridgeTown/scripts.pory"

# 703 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside::
# 704 "data/maps/LavaridgeTown/scripts.pory"
# 449 "data/maps/LavaridgeTown/scripts.pory"
# 705 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 706 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 707 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 708 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 709 "data/maps/LavaridgeTown/scripts.pory"
	.string "A POKéMON nipped my backside!$"
# 710 "data/maps/LavaridgeTown/scripts.pory"

# 711 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings::
# 712 "data/maps/LavaridgeTown/scripts.pory"
# 457 "data/maps/LavaridgeTown/scripts.pory"
# 713 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 714 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 715 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 716 "data/maps/LavaridgeTown/scripts.pory"

# 717 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay::
# 718 "data/maps/LavaridgeTown/scripts.pory"
# 463 "data/maps/LavaridgeTown/scripts.pory"
# 719 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 720 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 721 "data/maps/LavaridgeTown/scripts.pory"
	.string "GYM LEADER like FLANNERY.$"
# 722 "data/maps/LavaridgeTown/scripts.pory"

# 723 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings::
# 724 "data/maps/LavaridgeTown/scripts.pory"
# 469 "data/maps/LavaridgeTown/scripts.pory"
# 725 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put POKéMON in hot springs,\n"
# 726 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 727 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 728 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 729 "data/maps/LavaridgeTown/scripts.pory"

# 730 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims::
# 731 "data/maps/LavaridgeTown/scripts.pory"
# 476 "data/maps/LavaridgeTown/scripts.pory"
# 732 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 733 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 734 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 735 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 736 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 737 "data/maps/LavaridgeTown/scripts.pory"

# 738 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign::
# 739 "data/maps/LavaridgeTown/scripts.pory"
# 484 "data/maps/LavaridgeTown/scripts.pory"
# 740 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
# 741 "data/maps/LavaridgeTown/scripts.pory"
	.string "“POKéMON CENTER HOT SPRINGS\n"
# 742 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 743 "data/maps/LavaridgeTown/scripts.pory"

# 744 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign::
# 745 "data/maps/LavaridgeTown/scripts.pory"
# 490 "data/maps/LavaridgeTown/scripts.pory"
# 746 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
# 747 "data/maps/LavaridgeTown/scripts.pory"
	.string "LEADER: FLANNERY\l"
# 748 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 749 "data/maps/LavaridgeTown/scripts.pory"

# 750 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign::
# 751 "data/maps/LavaridgeTown/scripts.pory"
# 496 "data/maps/LavaridgeTown/scripts.pory"
# 752 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
# 753 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"
