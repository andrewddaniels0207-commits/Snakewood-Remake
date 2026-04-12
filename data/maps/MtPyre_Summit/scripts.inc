# 1 "data/maps/MtPyre_Summit/scripts.pory"

# 2 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_MapScripts::
# 3 "data/maps/MtPyre_Summit/scripts.pory"
# 2 "data/maps/MtPyre_Summit/scripts.pory"
# 4 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
# 5 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 6 "data/maps/MtPyre_Summit/scripts.pory"

# 7 "data/maps/MtPyre_Summit/scripts.pory"

# 8 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition::
# 9 "data/maps/MtPyre_Summit/scripts.pory"
# 6 "data/maps/MtPyre_Summit/scripts.pory"
# 10 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_MT_PYRE_STATE, 2
# 11 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_OnTransition_2
# 12 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition_1:
# 13 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 14 "data/maps/MtPyre_Summit/scripts.pory"

# 15 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition_2:
# 16 "data/maps/MtPyre_Summit/scripts.pory"
# 7 "data/maps/MtPyre_Summit/scripts.pory"
# 17 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 18 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_OnTransition_1
# 19 "data/maps/MtPyre_Summit/scripts.pory"

# 20 "data/maps/MtPyre_Summit/scripts.pory"

# 21 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions::
# 22 "data/maps/MtPyre_Summit/scripts.pory"
# 13 "data/maps/MtPyre_Summit/scripts.pory"
# 23 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MT_PYRE_SUMMIT_MAXIE, 23, 6
# 24 "data/maps/MtPyre_Summit/scripts.pory"
# 14 "data/maps/MtPyre_Summit/scripts.pory"
# 25 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MT_PYRE_SUMMIT_ARCHIE, 22, 6
# 26 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 27 "data/maps/MtPyre_Summit/scripts.pory"

# 28 "data/maps/MtPyre_Summit/scripts.pory"

# 29 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 30 "data/maps/MtPyre_Summit/scripts.pory"
# 19 "data/maps/MtPyre_Summit/scripts.pory"
# 31 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 32 "data/maps/MtPyre_Summit/scripts.pory"
# 20 "data/maps/MtPyre_Summit/scripts.pory"
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 34 "data/maps/MtPyre_Summit/scripts.pory"
# 21 "data/maps/MtPyre_Summit/scripts.pory"
# 35 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 36 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 37 "data/maps/MtPyre_Summit/scripts.pory"

# 38 "data/maps/MtPyre_Summit/scripts.pory"

# 39 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 40 "data/maps/MtPyre_Summit/scripts.pory"
# 26 "data/maps/MtPyre_Summit/scripts.pory"
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 42 "data/maps/MtPyre_Summit/scripts.pory"
# 27 "data/maps/MtPyre_Summit/scripts.pory"
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 44 "data/maps/MtPyre_Summit/scripts.pory"
# 28 "data/maps/MtPyre_Summit/scripts.pory"
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 47 "data/maps/MtPyre_Summit/scripts.pory"

# 48 "data/maps/MtPyre_Summit/scripts.pory"

# 49 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 50 "data/maps/MtPyre_Summit/scripts.pory"
# 33 "data/maps/MtPyre_Summit/scripts.pory"
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 52 "data/maps/MtPyre_Summit/scripts.pory"
# 34 "data/maps/MtPyre_Summit/scripts.pory"
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 54 "data/maps/MtPyre_Summit/scripts.pory"
# 35 "data/maps/MtPyre_Summit/scripts.pory"
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 57 "data/maps/MtPyre_Summit/scripts.pory"

# 58 "data/maps/MtPyre_Summit/scripts.pory"

# 59 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits::
# 60 "data/maps/MtPyre_Summit/scripts.pory"
# 40 "data/maps/MtPyre_Summit/scripts.pory"
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 62 "data/maps/MtPyre_Summit/scripts.pory"
# 41 "data/maps/MtPyre_Summit/scripts.pory"
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 64 "data/maps/MtPyre_Summit/scripts.pory"
# 42 "data/maps/MtPyre_Summit/scripts.pory"
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 66 "data/maps/MtPyre_Summit/scripts.pory"
# 43 "data/maps/MtPyre_Summit/scripts.pory"
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 68 "data/maps/MtPyre_Summit/scripts.pory"
# 44 "data/maps/MtPyre_Summit/scripts.pory"
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 70 "data/maps/MtPyre_Summit/scripts.pory"
# 45 "data/maps/MtPyre_Summit/scripts.pory"
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 72 "data/maps/MtPyre_Summit/scripts.pory"
# 46 "data/maps/MtPyre_Summit/scripts.pory"
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 0
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_TeamAquaExits_2
# 75 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_1:
# 76 "data/maps/MtPyre_Summit/scripts.pory"
# 49 "data/maps/MtPyre_Summit/scripts.pory"
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 1
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_TeamAquaExits_5
# 79 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_4:
# 80 "data/maps/MtPyre_Summit/scripts.pory"
# 52 "data/maps/MtPyre_Summit/scripts.pory"
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 2
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_TeamAquaExits_8
# 83 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_7:
# 84 "data/maps/MtPyre_Summit/scripts.pory"
# 55 "data/maps/MtPyre_Summit/scripts.pory"
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 86 "data/maps/MtPyre_Summit/scripts.pory"
# 56 "data/maps/MtPyre_Summit/scripts.pory"
# 87 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 88 "data/maps/MtPyre_Summit/scripts.pory"
# 57 "data/maps/MtPyre_Summit/scripts.pory"
# 89 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 90 "data/maps/MtPyre_Summit/scripts.pory"
# 58 "data/maps/MtPyre_Summit/scripts.pory"
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 92 "data/maps/MtPyre_Summit/scripts.pory"
# 59 "data/maps/MtPyre_Summit/scripts.pory"
# 93 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_1
# 94 "data/maps/MtPyre_Summit/scripts.pory"
# 60 "data/maps/MtPyre_Summit/scripts.pory"
# 95 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_2
# 96 "data/maps/MtPyre_Summit/scripts.pory"
# 61 "data/maps/MtPyre_Summit/scripts.pory"
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_3
# 98 "data/maps/MtPyre_Summit/scripts.pory"
# 62 "data/maps/MtPyre_Summit/scripts.pory"
# 99 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_4
# 100 "data/maps/MtPyre_Summit/scripts.pory"
# 63 "data/maps/MtPyre_Summit/scripts.pory"
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 102 "data/maps/MtPyre_Summit/scripts.pory"
# 64 "data/maps/MtPyre_Summit/scripts.pory"
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 104 "data/maps/MtPyre_Summit/scripts.pory"
# 65 "data/maps/MtPyre_Summit/scripts.pory"
# 105 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 106 "data/maps/MtPyre_Summit/scripts.pory"
# 66 "data/maps/MtPyre_Summit/scripts.pory"
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 108 "data/maps/MtPyre_Summit/scripts.pory"
# 67 "data/maps/MtPyre_Summit/scripts.pory"
# 109 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 110 "data/maps/MtPyre_Summit/scripts.pory"
# 68 "data/maps/MtPyre_Summit/scripts.pory"
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 112 "data/maps/MtPyre_Summit/scripts.pory"
# 69 "data/maps/MtPyre_Summit/scripts.pory"
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 0
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_TeamAquaExits_11
# 115 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_10:
# 116 "data/maps/MtPyre_Summit/scripts.pory"
# 72 "data/maps/MtPyre_Summit/scripts.pory"
# 117 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 1
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_TeamAquaExits_14
# 119 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_13:
# 120 "data/maps/MtPyre_Summit/scripts.pory"
# 75 "data/maps/MtPyre_Summit/scripts.pory"
# 121 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 2
# 122 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_TeamAquaExits_17
# 123 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_16:
# 124 "data/maps/MtPyre_Summit/scripts.pory"
# 78 "data/maps/MtPyre_Summit/scripts.pory"
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 126 "data/maps/MtPyre_Summit/scripts.pory"
# 79 "data/maps/MtPyre_Summit/scripts.pory"
# 127 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 128 "data/maps/MtPyre_Summit/scripts.pory"
# 80 "data/maps/MtPyre_Summit/scripts.pory"
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 130 "data/maps/MtPyre_Summit/scripts.pory"
# 81 "data/maps/MtPyre_Summit/scripts.pory"
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 132 "data/maps/MtPyre_Summit/scripts.pory"
# 82 "data/maps/MtPyre_Summit/scripts.pory"
# 133 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 135 "data/maps/MtPyre_Summit/scripts.pory"

# 136 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_2:
# 137 "data/maps/MtPyre_Summit/scripts.pory"
# 47 "data/maps/MtPyre_Summit/scripts.pory"
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_ArchieFacePlayer0
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits_1
# 140 "data/maps/MtPyre_Summit/scripts.pory"

# 141 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_5:
# 142 "data/maps/MtPyre_Summit/scripts.pory"
# 50 "data/maps/MtPyre_Summit/scripts.pory"
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_ArchieFacePlayer1
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits_4
# 145 "data/maps/MtPyre_Summit/scripts.pory"

# 146 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_8:
# 147 "data/maps/MtPyre_Summit/scripts.pory"
# 53 "data/maps/MtPyre_Summit/scripts.pory"
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_ArchieFacePlayer2
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits_7
# 150 "data/maps/MtPyre_Summit/scripts.pory"

# 151 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_11:
# 152 "data/maps/MtPyre_Summit/scripts.pory"
# 70 "data/maps/MtPyre_Summit/scripts.pory"
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_OldLadyApproachPlayer0
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits_10
# 155 "data/maps/MtPyre_Summit/scripts.pory"

# 156 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_14:
# 157 "data/maps/MtPyre_Summit/scripts.pory"
# 73 "data/maps/MtPyre_Summit/scripts.pory"
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_OldLadyApproachPlayer1
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits_13
# 160 "data/maps/MtPyre_Summit/scripts.pory"

# 161 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_17:
# 162 "data/maps/MtPyre_Summit/scripts.pory"
# 76 "data/maps/MtPyre_Summit/scripts.pory"
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_OldLadyApproachPlayer2
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits_16
# 165 "data/maps/MtPyre_Summit/scripts.pory"

# 166 "data/maps/MtPyre_Summit/scripts.pory"

# 167 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 168 "data/maps/MtPyre_Summit/scripts.pory"
# 87 "data/maps/MtPyre_Summit/scripts.pory"
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 170 "data/maps/MtPyre_Summit/scripts.pory"
# 88 "data/maps/MtPyre_Summit/scripts.pory"
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 173 "data/maps/MtPyre_Summit/scripts.pory"

# 174 "data/maps/MtPyre_Summit/scripts.pory"

# 175 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 177 "data/maps/MtPyre_Summit/scripts.pory"

# 178 "data/maps/MtPyre_Summit/scripts.pory"

# 179 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 180 "data/maps/MtPyre_Summit/scripts.pory"
# 97 "data/maps/MtPyre_Summit/scripts.pory"
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 182 "data/maps/MtPyre_Summit/scripts.pory"
# 98 "data/maps/MtPyre_Summit/scripts.pory"
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 185 "data/maps/MtPyre_Summit/scripts.pory"

# 186 "data/maps/MtPyre_Summit/scripts.pory"

# 187 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 188 "data/maps/MtPyre_Summit/scripts.pory"
# 103 "data/maps/MtPyre_Summit/scripts.pory"
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 190 "data/maps/MtPyre_Summit/scripts.pory"
# 104 "data/maps/MtPyre_Summit/scripts.pory"
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 192 "data/maps/MtPyre_Summit/scripts.pory"
# 105 "data/maps/MtPyre_Summit/scripts.pory"
# 193 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 194 "data/maps/MtPyre_Summit/scripts.pory"
# 106 "data/maps/MtPyre_Summit/scripts.pory"
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 197 "data/maps/MtPyre_Summit/scripts.pory"

# 198 "data/maps/MtPyre_Summit/scripts.pory"

# 199 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 200 "data/maps/MtPyre_Summit/scripts.pory"
# 111 "data/maps/MtPyre_Summit/scripts.pory"
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 202 "data/maps/MtPyre_Summit/scripts.pory"
# 112 "data/maps/MtPyre_Summit/scripts.pory"
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 205 "data/maps/MtPyre_Summit/scripts.pory"

# 206 "data/maps/MtPyre_Summit/scripts.pory"

# 207 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 208 "data/maps/MtPyre_Summit/scripts.pory"
# 117 "data/maps/MtPyre_Summit/scripts.pory"
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 210 "data/maps/MtPyre_Summit/scripts.pory"
# 118 "data/maps/MtPyre_Summit/scripts.pory"
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 212 "data/maps/MtPyre_Summit/scripts.pory"
# 119 "data/maps/MtPyre_Summit/scripts.pory"
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 214 "data/maps/MtPyre_Summit/scripts.pory"
# 120 "data/maps/MtPyre_Summit/scripts.pory"
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 217 "data/maps/MtPyre_Summit/scripts.pory"

# 218 "data/maps/MtPyre_Summit/scripts.pory"

# 219 "data/maps/MtPyre_Summit/scripts.pory"
# 124 "data/maps/MtPyre_Summit/scripts.pory"
# 220 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 221 "data/maps/MtPyre_Summit/scripts.pory"
# 125 "data/maps/MtPyre_Summit/scripts.pory"
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 223 "data/maps/MtPyre_Summit/scripts.pory"
# 126 "data/maps/MtPyre_Summit/scripts.pory"
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 225 "data/maps/MtPyre_Summit/scripts.pory"
# 127 "data/maps/MtPyre_Summit/scripts.pory"
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 227 "data/maps/MtPyre_Summit/scripts.pory"
# 128 "data/maps/MtPyre_Summit/scripts.pory"
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 229 "data/maps/MtPyre_Summit/scripts.pory"

# 230 "data/maps/MtPyre_Summit/scripts.pory"
# 131 "data/maps/MtPyre_Summit/scripts.pory"
# 231 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 232 "data/maps/MtPyre_Summit/scripts.pory"
# 132 "data/maps/MtPyre_Summit/scripts.pory"
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 234 "data/maps/MtPyre_Summit/scripts.pory"
# 133 "data/maps/MtPyre_Summit/scripts.pory"
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 236 "data/maps/MtPyre_Summit/scripts.pory"

# 237 "data/maps/MtPyre_Summit/scripts.pory"
# 136 "data/maps/MtPyre_Summit/scripts.pory"
# 238 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 239 "data/maps/MtPyre_Summit/scripts.pory"
# 137 "data/maps/MtPyre_Summit/scripts.pory"
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 241 "data/maps/MtPyre_Summit/scripts.pory"
# 138 "data/maps/MtPyre_Summit/scripts.pory"
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 243 "data/maps/MtPyre_Summit/scripts.pory"
# 139 "data/maps/MtPyre_Summit/scripts.pory"
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 245 "data/maps/MtPyre_Summit/scripts.pory"
# 140 "data/maps/MtPyre_Summit/scripts.pory"
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 247 "data/maps/MtPyre_Summit/scripts.pory"

# 248 "data/maps/MtPyre_Summit/scripts.pory"
# 143 "data/maps/MtPyre_Summit/scripts.pory"
# 249 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 250 "data/maps/MtPyre_Summit/scripts.pory"
# 144 "data/maps/MtPyre_Summit/scripts.pory"
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 252 "data/maps/MtPyre_Summit/scripts.pory"
# 145 "data/maps/MtPyre_Summit/scripts.pory"
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 254 "data/maps/MtPyre_Summit/scripts.pory"
# 146 "data/maps/MtPyre_Summit/scripts.pory"
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 256 "data/maps/MtPyre_Summit/scripts.pory"

# 257 "data/maps/MtPyre_Summit/scripts.pory"
# 149 "data/maps/MtPyre_Summit/scripts.pory"
# 258 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 259 "data/maps/MtPyre_Summit/scripts.pory"
# 150 "data/maps/MtPyre_Summit/scripts.pory"
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 261 "data/maps/MtPyre_Summit/scripts.pory"
# 151 "data/maps/MtPyre_Summit/scripts.pory"
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 263 "data/maps/MtPyre_Summit/scripts.pory"
# 152 "data/maps/MtPyre_Summit/scripts.pory"
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 265 "data/maps/MtPyre_Summit/scripts.pory"

# 266 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 267 "data/maps/MtPyre_Summit/scripts.pory"
# 156 "data/maps/MtPyre_Summit/scripts.pory"
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 269 "data/maps/MtPyre_Summit/scripts.pory"
# 157 "data/maps/MtPyre_Summit/scripts.pory"
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 271 "data/maps/MtPyre_Summit/scripts.pory"
# 158 "data/maps/MtPyre_Summit/scripts.pory"
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldMan_2
# 273 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan_1:
# 274 "data/maps/MtPyre_Summit/scripts.pory"
# 161 "data/maps/MtPyre_Summit/scripts.pory"
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 276 "data/maps/MtPyre_Summit/scripts.pory"
# 162 "data/maps/MtPyre_Summit/scripts.pory"
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, YES
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_OldMan_5
# 279 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan_4:
# 280 "data/maps/MtPyre_Summit/scripts.pory"
# 165 "data/maps/MtPyre_Summit/scripts.pory"
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, NO
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_OldMan_8
# 283 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan_7:
# 284 "data/maps/MtPyre_Summit/scripts.pory"
# 168 "data/maps/MtPyre_Summit/scripts.pory"
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 287 "data/maps/MtPyre_Summit/scripts.pory"

# 288 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan_2:
# 289 "data/maps/MtPyre_Summit/scripts.pory"
# 159 "data/maps/MtPyre_Summit/scripts.pory"
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_OldManAfterRayquaza
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_OldMan_1
# 292 "data/maps/MtPyre_Summit/scripts.pory"

# 293 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan_5:
# 294 "data/maps/MtPyre_Summit/scripts.pory"
# 163 "data/maps/MtPyre_Summit/scripts.pory"
# 295 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_OldManTale
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_OldMan_4
# 297 "data/maps/MtPyre_Summit/scripts.pory"

# 298 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan_8:
# 299 "data/maps/MtPyre_Summit/scripts.pory"
# 166 "data/maps/MtPyre_Summit/scripts.pory"
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_DeclineOldManTale
# 301 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_OldMan_7
# 302 "data/maps/MtPyre_Summit/scripts.pory"

# 303 "data/maps/MtPyre_Summit/scripts.pory"

# 304 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 305 "data/maps/MtPyre_Summit/scripts.pory"
# 173 "data/maps/MtPyre_Summit/scripts.pory"
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 307 "data/maps/MtPyre_Summit/scripts.pory"
# 174 "data/maps/MtPyre_Summit/scripts.pory"
# 308 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, YES
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_OldManAfterRayquaza_2
# 310 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza_1:
# 311 "data/maps/MtPyre_Summit/scripts.pory"
# 177 "data/maps/MtPyre_Summit/scripts.pory"
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, NO
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_OldManAfterRayquaza_5
# 314 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza_4:
# 315 "data/maps/MtPyre_Summit/scripts.pory"
# 180 "data/maps/MtPyre_Summit/scripts.pory"
# 316 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 318 "data/maps/MtPyre_Summit/scripts.pory"

# 319 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza_2:
# 320 "data/maps/MtPyre_Summit/scripts.pory"
# 175 "data/maps/MtPyre_Summit/scripts.pory"
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_OldManNewTale
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_OldManAfterRayquaza_1
# 323 "data/maps/MtPyre_Summit/scripts.pory"

# 324 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza_5:
# 325 "data/maps/MtPyre_Summit/scripts.pory"
# 178 "data/maps/MtPyre_Summit/scripts.pory"
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_DeclineOldManTale
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_OldManAfterRayquaza_4
# 328 "data/maps/MtPyre_Summit/scripts.pory"

# 329 "data/maps/MtPyre_Summit/scripts.pory"

# 330 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 331 "data/maps/MtPyre_Summit/scripts.pory"
# 185 "data/maps/MtPyre_Summit/scripts.pory"
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 334 "data/maps/MtPyre_Summit/scripts.pory"

# 335 "data/maps/MtPyre_Summit/scripts.pory"

# 336 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 337 "data/maps/MtPyre_Summit/scripts.pory"
# 190 "data/maps/MtPyre_Summit/scripts.pory"
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 340 "data/maps/MtPyre_Summit/scripts.pory"

# 341 "data/maps/MtPyre_Summit/scripts.pory"

# 342 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 343 "data/maps/MtPyre_Summit/scripts.pory"
# 195 "data/maps/MtPyre_Summit/scripts.pory"
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 346 "data/maps/MtPyre_Summit/scripts.pory"

# 347 "data/maps/MtPyre_Summit/scripts.pory"

# 348 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 349 "data/maps/MtPyre_Summit/scripts.pory"
# 200 "data/maps/MtPyre_Summit/scripts.pory"
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 351 "data/maps/MtPyre_Summit/scripts.pory"
# 201 "data/maps/MtPyre_Summit/scripts.pory"
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 353 "data/maps/MtPyre_Summit/scripts.pory"
# 202 "data/maps/MtPyre_Summit/scripts.pory"
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLady_2
# 355 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady_1:
# 356 "data/maps/MtPyre_Summit/scripts.pory"
# 205 "data/maps/MtPyre_Summit/scripts.pory"
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_MT_PYRE_STATE, 3
# 358 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_ge MtPyre_Summit_EventScript_OldLady_5
# 359 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady_4:
# 360 "data/maps/MtPyre_Summit/scripts.pory"
# 208 "data/maps/MtPyre_Summit/scripts.pory"
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLady_8
# 362 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady_7:
# 363 "data/maps/MtPyre_Summit/scripts.pory"
# 211 "data/maps/MtPyre_Summit/scripts.pory"
# 364 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 365 "data/maps/MtPyre_Summit/scripts.pory"
# 212 "data/maps/MtPyre_Summit/scripts.pory"
# 366 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 367 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 368 "data/maps/MtPyre_Summit/scripts.pory"

# 369 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady_2:
# 370 "data/maps/MtPyre_Summit/scripts.pory"
# 203 "data/maps/MtPyre_Summit/scripts.pory"
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 372 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_OldLady_1
# 373 "data/maps/MtPyre_Summit/scripts.pory"

# 374 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady_5:
# 375 "data/maps/MtPyre_Summit/scripts.pory"
# 206 "data/maps/MtPyre_Summit/scripts.pory"
# 376 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 377 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_OldLady_4
# 378 "data/maps/MtPyre_Summit/scripts.pory"

# 379 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady_8:
# 380 "data/maps/MtPyre_Summit/scripts.pory"
# 209 "data/maps/MtPyre_Summit/scripts.pory"
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 382 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_OldLady_7
# 383 "data/maps/MtPyre_Summit/scripts.pory"

# 384 "data/maps/MtPyre_Summit/scripts.pory"

# 385 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 386 "data/maps/MtPyre_Summit/scripts.pory"
# 217 "data/maps/MtPyre_Summit/scripts.pory"
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 388 "data/maps/MtPyre_Summit/scripts.pory"
# 218 "data/maps/MtPyre_Summit/scripts.pory"
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 390 "data/maps/MtPyre_Summit/scripts.pory"
# 219 "data/maps/MtPyre_Summit/scripts.pory"
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 393 "data/maps/MtPyre_Summit/scripts.pory"

# 394 "data/maps/MtPyre_Summit/scripts.pory"

# 395 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 396 "data/maps/MtPyre_Summit/scripts.pory"
# 224 "data/maps/MtPyre_Summit/scripts.pory"
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 398 "data/maps/MtPyre_Summit/scripts.pory"
# 225 "data/maps/MtPyre_Summit/scripts.pory"
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 401 "data/maps/MtPyre_Summit/scripts.pory"

# 402 "data/maps/MtPyre_Summit/scripts.pory"

# 403 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 404 "data/maps/MtPyre_Summit/scripts.pory"
# 230 "data/maps/MtPyre_Summit/scripts.pory"
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 406 "data/maps/MtPyre_Summit/scripts.pory"
# 231 "data/maps/MtPyre_Summit/scripts.pory"
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 409 "data/maps/MtPyre_Summit/scripts.pory"

# 410 "data/maps/MtPyre_Summit/scripts.pory"

# 411 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 412 "data/maps/MtPyre_Summit/scripts.pory"
# 236 "data/maps/MtPyre_Summit/scripts.pory"
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 414 "data/maps/MtPyre_Summit/scripts.pory"
# 237 "data/maps/MtPyre_Summit/scripts.pory"
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 416 "data/maps/MtPyre_Summit/scripts.pory"
# 238 "data/maps/MtPyre_Summit/scripts.pory"
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 419 "data/maps/MtPyre_Summit/scripts.pory"

# 420 "data/maps/MtPyre_Summit/scripts.pory"

# 421 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 422 "data/maps/MtPyre_Summit/scripts.pory"
# 243 "data/maps/MtPyre_Summit/scripts.pory"
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 424 "data/maps/MtPyre_Summit/scripts.pory"
# 244 "data/maps/MtPyre_Summit/scripts.pory"
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 426 "data/maps/MtPyre_Summit/scripts.pory"
# 245 "data/maps/MtPyre_Summit/scripts.pory"
# 427 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 429 "data/maps/MtPyre_Summit/scripts.pory"

# 430 "data/maps/MtPyre_Summit/scripts.pory"

# 431 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 432 "data/maps/MtPyre_Summit/scripts.pory"
# 250 "data/maps/MtPyre_Summit/scripts.pory"
# 433 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 434 "data/maps/MtPyre_Summit/scripts.pory"
# 251 "data/maps/MtPyre_Summit/scripts.pory"
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 436 "data/maps/MtPyre_Summit/scripts.pory"
# 252 "data/maps/MtPyre_Summit/scripts.pory"
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 438 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 439 "data/maps/MtPyre_Summit/scripts.pory"

# 440 "data/maps/MtPyre_Summit/scripts.pory"

# 441 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 442 "data/maps/MtPyre_Summit/scripts.pory"
# 257 "data/maps/MtPyre_Summit/scripts.pory"
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 444 "data/maps/MtPyre_Summit/scripts.pory"
# 258 "data/maps/MtPyre_Summit/scripts.pory"
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 446 "data/maps/MtPyre_Summit/scripts.pory"
# 259 "data/maps/MtPyre_Summit/scripts.pory"
# 447 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 448 "data/maps/MtPyre_Summit/scripts.pory"
# 260 "data/maps/MtPyre_Summit/scripts.pory"
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 0
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_2
# 451 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_1:
# 452 "data/maps/MtPyre_Summit/scripts.pory"
# 263 "data/maps/MtPyre_Summit/scripts.pory"
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 1
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_5
# 455 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_4:
# 456 "data/maps/MtPyre_Summit/scripts.pory"
# 266 "data/maps/MtPyre_Summit/scripts.pory"
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 2
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_8
# 459 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_7:
# 460 "data/maps/MtPyre_Summit/scripts.pory"
# 269 "data/maps/MtPyre_Summit/scripts.pory"
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 462 "data/maps/MtPyre_Summit/scripts.pory"
# 270 "data/maps/MtPyre_Summit/scripts.pory"
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_ExclamationMark
# 464 "data/maps/MtPyre_Summit/scripts.pory"
# 271 "data/maps/MtPyre_Summit/scripts.pory"
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 466 "data/maps/MtPyre_Summit/scripts.pory"
# 272 "data/maps/MtPyre_Summit/scripts.pory"
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_Delay48
# 468 "data/maps/MtPyre_Summit/scripts.pory"
# 273 "data/maps/MtPyre_Summit/scripts.pory"
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 470 "data/maps/MtPyre_Summit/scripts.pory"
# 274 "data/maps/MtPyre_Summit/scripts.pory"
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 472 "data/maps/MtPyre_Summit/scripts.pory"
# 275 "data/maps/MtPyre_Summit/scripts.pory"
# 473 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 0
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_11
# 475 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_10:
# 476 "data/maps/MtPyre_Summit/scripts.pory"
# 278 "data/maps/MtPyre_Summit/scripts.pory"
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 1
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_14
# 479 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_13:
# 480 "data/maps/MtPyre_Summit/scripts.pory"
# 281 "data/maps/MtPyre_Summit/scripts.pory"
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 2
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_17
# 483 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_16:
# 484 "data/maps/MtPyre_Summit/scripts.pory"
# 284 "data/maps/MtPyre_Summit/scripts.pory"
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 486 "data/maps/MtPyre_Summit/scripts.pory"
# 285 "data/maps/MtPyre_Summit/scripts.pory"
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 488 "data/maps/MtPyre_Summit/scripts.pory"
# 286 "data/maps/MtPyre_Summit/scripts.pory"
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 0
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_20
# 491 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_19:
# 492 "data/maps/MtPyre_Summit/scripts.pory"
# 289 "data/maps/MtPyre_Summit/scripts.pory"
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 1
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_23
# 495 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_22:
# 496 "data/maps/MtPyre_Summit/scripts.pory"
# 292 "data/maps/MtPyre_Summit/scripts.pory"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 2
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_26
# 499 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_25:
# 500 "data/maps/MtPyre_Summit/scripts.pory"
# 295 "data/maps/MtPyre_Summit/scripts.pory"
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 502 "data/maps/MtPyre_Summit/scripts.pory"
# 296 "data/maps/MtPyre_Summit/scripts.pory"
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 504 "data/maps/MtPyre_Summit/scripts.pory"
# 297 "data/maps/MtPyre_Summit/scripts.pory"
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 506 "data/maps/MtPyre_Summit/scripts.pory"
# 298 "data/maps/MtPyre_Summit/scripts.pory"
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 508 "data/maps/MtPyre_Summit/scripts.pory"
# 299 "data/maps/MtPyre_Summit/scripts.pory"
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 510 "data/maps/MtPyre_Summit/scripts.pory"
# 300 "data/maps/MtPyre_Summit/scripts.pory"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE
# 512 "data/maps/MtPyre_Summit/scripts.pory"
# 301 "data/maps/MtPyre_Summit/scripts.pory"
# 513 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 514 "data/maps/MtPyre_Summit/scripts.pory"
# 302 "data/maps/MtPyre_Summit/scripts.pory"
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 517 "data/maps/MtPyre_Summit/scripts.pory"

# 518 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_2:
# 519 "data/maps/MtPyre_Summit/scripts.pory"
# 261 "data/maps/MtPyre_Summit/scripts.pory"
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 521 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_1
# 522 "data/maps/MtPyre_Summit/scripts.pory"

# 523 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_5:
# 524 "data/maps/MtPyre_Summit/scripts.pory"
# 264 "data/maps/MtPyre_Summit/scripts.pory"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_4
# 527 "data/maps/MtPyre_Summit/scripts.pory"

# 528 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_8:
# 529 "data/maps/MtPyre_Summit/scripts.pory"
# 267 "data/maps/MtPyre_Summit/scripts.pory"
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_7
# 532 "data/maps/MtPyre_Summit/scripts.pory"

# 533 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_11:
# 534 "data/maps/MtPyre_Summit/scripts.pory"
# 276 "data/maps/MtPyre_Summit/scripts.pory"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_10
# 537 "data/maps/MtPyre_Summit/scripts.pory"

# 538 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_14:
# 539 "data/maps/MtPyre_Summit/scripts.pory"
# 279 "data/maps/MtPyre_Summit/scripts.pory"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_13
# 542 "data/maps/MtPyre_Summit/scripts.pory"

# 543 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_17:
# 544 "data/maps/MtPyre_Summit/scripts.pory"
# 282 "data/maps/MtPyre_Summit/scripts.pory"
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_16
# 547 "data/maps/MtPyre_Summit/scripts.pory"

# 548 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_20:
# 549 "data/maps/MtPyre_Summit/scripts.pory"
# 287 "data/maps/MtPyre_Summit/scripts.pory"
# 550 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MaxieApproachArchie0
# 551 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_19
# 552 "data/maps/MtPyre_Summit/scripts.pory"

# 553 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_23:
# 554 "data/maps/MtPyre_Summit/scripts.pory"
# 290 "data/maps/MtPyre_Summit/scripts.pory"
# 555 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MaxieApproachArchie1
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_22
# 557 "data/maps/MtPyre_Summit/scripts.pory"

# 558 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_26:
# 559 "data/maps/MtPyre_Summit/scripts.pory"
# 293 "data/maps/MtPyre_Summit/scripts.pory"
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MaxieApproachArchie2
# 561 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_25
# 562 "data/maps/MtPyre_Summit/scripts.pory"

# 563 "data/maps/MtPyre_Summit/scripts.pory"

# 564 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 565 "data/maps/MtPyre_Summit/scripts.pory"
# 307 "data/maps/MtPyre_Summit/scripts.pory"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 567 "data/maps/MtPyre_Summit/scripts.pory"
# 308 "data/maps/MtPyre_Summit/scripts.pory"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 569 "data/maps/MtPyre_Summit/scripts.pory"
# 309 "data/maps/MtPyre_Summit/scripts.pory"
# 570 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 571 "data/maps/MtPyre_Summit/scripts.pory"
# 310 "data/maps/MtPyre_Summit/scripts.pory"
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 574 "data/maps/MtPyre_Summit/scripts.pory"

# 575 "data/maps/MtPyre_Summit/scripts.pory"

# 576 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 577 "data/maps/MtPyre_Summit/scripts.pory"
# 315 "data/maps/MtPyre_Summit/scripts.pory"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 579 "data/maps/MtPyre_Summit/scripts.pory"
# 316 "data/maps/MtPyre_Summit/scripts.pory"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 581 "data/maps/MtPyre_Summit/scripts.pory"
# 317 "data/maps/MtPyre_Summit/scripts.pory"
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 583 "data/maps/MtPyre_Summit/scripts.pory"
# 318 "data/maps/MtPyre_Summit/scripts.pory"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 586 "data/maps/MtPyre_Summit/scripts.pory"

# 587 "data/maps/MtPyre_Summit/scripts.pory"

# 588 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 589 "data/maps/MtPyre_Summit/scripts.pory"
# 323 "data/maps/MtPyre_Summit/scripts.pory"
# 590 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 591 "data/maps/MtPyre_Summit/scripts.pory"
# 324 "data/maps/MtPyre_Summit/scripts.pory"
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 593 "data/maps/MtPyre_Summit/scripts.pory"
# 325 "data/maps/MtPyre_Summit/scripts.pory"
# 594 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 595 "data/maps/MtPyre_Summit/scripts.pory"
# 326 "data/maps/MtPyre_Summit/scripts.pory"
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 597 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 598 "data/maps/MtPyre_Summit/scripts.pory"

# 599 "data/maps/MtPyre_Summit/scripts.pory"

# 600 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 601 "data/maps/MtPyre_Summit/scripts.pory"
# 331 "data/maps/MtPyre_Summit/scripts.pory"
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 603 "data/maps/MtPyre_Summit/scripts.pory"
# 332 "data/maps/MtPyre_Summit/scripts.pory"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 605 "data/maps/MtPyre_Summit/scripts.pory"
# 333 "data/maps/MtPyre_Summit/scripts.pory"
# 606 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 607 "data/maps/MtPyre_Summit/scripts.pory"
# 334 "data/maps/MtPyre_Summit/scripts.pory"
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 610 "data/maps/MtPyre_Summit/scripts.pory"

# 611 "data/maps/MtPyre_Summit/scripts.pory"

# 612 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 613 "data/maps/MtPyre_Summit/scripts.pory"
# 339 "data/maps/MtPyre_Summit/scripts.pory"
# 614 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 615 "data/maps/MtPyre_Summit/scripts.pory"
# 340 "data/maps/MtPyre_Summit/scripts.pory"
# 616 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 617 "data/maps/MtPyre_Summit/scripts.pory"
# 341 "data/maps/MtPyre_Summit/scripts.pory"
# 618 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 619 "data/maps/MtPyre_Summit/scripts.pory"
# 342 "data/maps/MtPyre_Summit/scripts.pory"
# 620 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 621 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 622 "data/maps/MtPyre_Summit/scripts.pory"

# 623 "data/maps/MtPyre_Summit/scripts.pory"

# 624 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 625 "data/maps/MtPyre_Summit/scripts.pory"
# 347 "data/maps/MtPyre_Summit/scripts.pory"
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 627 "data/maps/MtPyre_Summit/scripts.pory"
# 348 "data/maps/MtPyre_Summit/scripts.pory"
# 628 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 629 "data/maps/MtPyre_Summit/scripts.pory"
# 349 "data/maps/MtPyre_Summit/scripts.pory"
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 631 "data/maps/MtPyre_Summit/scripts.pory"
# 350 "data/maps/MtPyre_Summit/scripts.pory"
# 632 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 633 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 634 "data/maps/MtPyre_Summit/scripts.pory"

# 635 "data/maps/MtPyre_Summit/scripts.pory"

# 636 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 637 "data/maps/MtPyre_Summit/scripts.pory"
# 355 "data/maps/MtPyre_Summit/scripts.pory"
# 638 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 639 "data/maps/MtPyre_Summit/scripts.pory"
# 356 "data/maps/MtPyre_Summit/scripts.pory"
# 640 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 641 "data/maps/MtPyre_Summit/scripts.pory"
# 357 "data/maps/MtPyre_Summit/scripts.pory"
# 642 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 643 "data/maps/MtPyre_Summit/scripts.pory"
# 358 "data/maps/MtPyre_Summit/scripts.pory"
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 645 "data/maps/MtPyre_Summit/scripts.pory"
# 359 "data/maps/MtPyre_Summit/scripts.pory"
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 647 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 648 "data/maps/MtPyre_Summit/scripts.pory"

# 649 "data/maps/MtPyre_Summit/scripts.pory"

# 650 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 651 "data/maps/MtPyre_Summit/scripts.pory"
# 364 "data/maps/MtPyre_Summit/scripts.pory"
# 652 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 653 "data/maps/MtPyre_Summit/scripts.pory"
# 365 "data/maps/MtPyre_Summit/scripts.pory"
# 654 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 655 "data/maps/MtPyre_Summit/scripts.pory"
# 366 "data/maps/MtPyre_Summit/scripts.pory"
# 656 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 657 "data/maps/MtPyre_Summit/scripts.pory"
# 367 "data/maps/MtPyre_Summit/scripts.pory"
# 658 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 659 "data/maps/MtPyre_Summit/scripts.pory"
# 368 "data/maps/MtPyre_Summit/scripts.pory"
# 660 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 661 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 662 "data/maps/MtPyre_Summit/scripts.pory"

# 663 "data/maps/MtPyre_Summit/scripts.pory"

# 664 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 665 "data/maps/MtPyre_Summit/scripts.pory"
# 373 "data/maps/MtPyre_Summit/scripts.pory"
# 666 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 667 "data/maps/MtPyre_Summit/scripts.pory"
# 374 "data/maps/MtPyre_Summit/scripts.pory"
# 668 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 669 "data/maps/MtPyre_Summit/scripts.pory"
# 375 "data/maps/MtPyre_Summit/scripts.pory"
# 670 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 671 "data/maps/MtPyre_Summit/scripts.pory"
# 376 "data/maps/MtPyre_Summit/scripts.pory"
# 672 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 673 "data/maps/MtPyre_Summit/scripts.pory"
# 377 "data/maps/MtPyre_Summit/scripts.pory"
# 674 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 675 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 676 "data/maps/MtPyre_Summit/scripts.pory"

# 677 "data/maps/MtPyre_Summit/scripts.pory"

# 678 "data/maps/MtPyre_Summit/scripts.pory"
# 381 "data/maps/MtPyre_Summit/scripts.pory"
# 679 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 680 "data/maps/MtPyre_Summit/scripts.pory"
# 382 "data/maps/MtPyre_Summit/scripts.pory"
# 681 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 682 "data/maps/MtPyre_Summit/scripts.pory"
# 383 "data/maps/MtPyre_Summit/scripts.pory"
# 683 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 684 "data/maps/MtPyre_Summit/scripts.pory"
# 384 "data/maps/MtPyre_Summit/scripts.pory"
# 685 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 686 "data/maps/MtPyre_Summit/scripts.pory"
# 385 "data/maps/MtPyre_Summit/scripts.pory"
# 687 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 688 "data/maps/MtPyre_Summit/scripts.pory"

# 689 "data/maps/MtPyre_Summit/scripts.pory"
# 388 "data/maps/MtPyre_Summit/scripts.pory"
# 690 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 691 "data/maps/MtPyre_Summit/scripts.pory"
# 389 "data/maps/MtPyre_Summit/scripts.pory"
# 692 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 693 "data/maps/MtPyre_Summit/scripts.pory"
# 390 "data/maps/MtPyre_Summit/scripts.pory"
# 694 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 695 "data/maps/MtPyre_Summit/scripts.pory"
# 391 "data/maps/MtPyre_Summit/scripts.pory"
# 696 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 697 "data/maps/MtPyre_Summit/scripts.pory"
# 392 "data/maps/MtPyre_Summit/scripts.pory"
# 698 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 699 "data/maps/MtPyre_Summit/scripts.pory"

# 700 "data/maps/MtPyre_Summit/scripts.pory"
# 395 "data/maps/MtPyre_Summit/scripts.pory"
# 701 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 702 "data/maps/MtPyre_Summit/scripts.pory"
# 396 "data/maps/MtPyre_Summit/scripts.pory"
# 703 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 704 "data/maps/MtPyre_Summit/scripts.pory"
# 397 "data/maps/MtPyre_Summit/scripts.pory"
# 705 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 706 "data/maps/MtPyre_Summit/scripts.pory"
# 398 "data/maps/MtPyre_Summit/scripts.pory"
# 707 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 708 "data/maps/MtPyre_Summit/scripts.pory"
# 399 "data/maps/MtPyre_Summit/scripts.pory"
# 709 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 710 "data/maps/MtPyre_Summit/scripts.pory"
# 400 "data/maps/MtPyre_Summit/scripts.pory"
# 711 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 712 "data/maps/MtPyre_Summit/scripts.pory"
# 401 "data/maps/MtPyre_Summit/scripts.pory"
# 713 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 714 "data/maps/MtPyre_Summit/scripts.pory"
# 402 "data/maps/MtPyre_Summit/scripts.pory"
# 715 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 716 "data/maps/MtPyre_Summit/scripts.pory"

# 717 "data/maps/MtPyre_Summit/scripts.pory"
# 405 "data/maps/MtPyre_Summit/scripts.pory"
# 718 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 719 "data/maps/MtPyre_Summit/scripts.pory"
# 406 "data/maps/MtPyre_Summit/scripts.pory"
# 720 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 721 "data/maps/MtPyre_Summit/scripts.pory"
# 407 "data/maps/MtPyre_Summit/scripts.pory"
# 722 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 723 "data/maps/MtPyre_Summit/scripts.pory"
# 408 "data/maps/MtPyre_Summit/scripts.pory"
# 724 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 725 "data/maps/MtPyre_Summit/scripts.pory"
# 409 "data/maps/MtPyre_Summit/scripts.pory"
# 726 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 727 "data/maps/MtPyre_Summit/scripts.pory"
# 410 "data/maps/MtPyre_Summit/scripts.pory"
# 728 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 729 "data/maps/MtPyre_Summit/scripts.pory"
# 411 "data/maps/MtPyre_Summit/scripts.pory"
# 730 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 731 "data/maps/MtPyre_Summit/scripts.pory"
# 412 "data/maps/MtPyre_Summit/scripts.pory"
# 732 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 733 "data/maps/MtPyre_Summit/scripts.pory"

# 734 "data/maps/MtPyre_Summit/scripts.pory"
# 415 "data/maps/MtPyre_Summit/scripts.pory"
# 735 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 736 "data/maps/MtPyre_Summit/scripts.pory"
# 416 "data/maps/MtPyre_Summit/scripts.pory"
# 737 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 738 "data/maps/MtPyre_Summit/scripts.pory"
# 417 "data/maps/MtPyre_Summit/scripts.pory"
# 739 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 740 "data/maps/MtPyre_Summit/scripts.pory"
# 418 "data/maps/MtPyre_Summit/scripts.pory"
# 741 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 742 "data/maps/MtPyre_Summit/scripts.pory"
# 419 "data/maps/MtPyre_Summit/scripts.pory"
# 743 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 744 "data/maps/MtPyre_Summit/scripts.pory"
# 420 "data/maps/MtPyre_Summit/scripts.pory"
# 745 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 746 "data/maps/MtPyre_Summit/scripts.pory"
# 421 "data/maps/MtPyre_Summit/scripts.pory"
# 747 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 748 "data/maps/MtPyre_Summit/scripts.pory"
# 422 "data/maps/MtPyre_Summit/scripts.pory"
# 749 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 750 "data/maps/MtPyre_Summit/scripts.pory"

# 751 "data/maps/MtPyre_Summit/scripts.pory"
# 425 "data/maps/MtPyre_Summit/scripts.pory"
# 752 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 753 "data/maps/MtPyre_Summit/scripts.pory"
# 426 "data/maps/MtPyre_Summit/scripts.pory"
# 754 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 755 "data/maps/MtPyre_Summit/scripts.pory"
# 427 "data/maps/MtPyre_Summit/scripts.pory"
# 756 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 757 "data/maps/MtPyre_Summit/scripts.pory"
# 428 "data/maps/MtPyre_Summit/scripts.pory"
# 758 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 759 "data/maps/MtPyre_Summit/scripts.pory"
# 429 "data/maps/MtPyre_Summit/scripts.pory"
# 760 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 761 "data/maps/MtPyre_Summit/scripts.pory"
# 430 "data/maps/MtPyre_Summit/scripts.pory"
# 762 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 763 "data/maps/MtPyre_Summit/scripts.pory"
# 431 "data/maps/MtPyre_Summit/scripts.pory"
# 764 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 765 "data/maps/MtPyre_Summit/scripts.pory"
# 432 "data/maps/MtPyre_Summit/scripts.pory"
# 766 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 767 "data/maps/MtPyre_Summit/scripts.pory"

# 768 "data/maps/MtPyre_Summit/scripts.pory"
# 435 "data/maps/MtPyre_Summit/scripts.pory"
# 769 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 770 "data/maps/MtPyre_Summit/scripts.pory"
# 436 "data/maps/MtPyre_Summit/scripts.pory"
# 771 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 772 "data/maps/MtPyre_Summit/scripts.pory"
# 437 "data/maps/MtPyre_Summit/scripts.pory"
# 773 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 774 "data/maps/MtPyre_Summit/scripts.pory"
# 438 "data/maps/MtPyre_Summit/scripts.pory"
# 775 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 776 "data/maps/MtPyre_Summit/scripts.pory"
# 439 "data/maps/MtPyre_Summit/scripts.pory"
# 777 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 778 "data/maps/MtPyre_Summit/scripts.pory"
# 440 "data/maps/MtPyre_Summit/scripts.pory"
# 779 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 780 "data/maps/MtPyre_Summit/scripts.pory"
# 441 "data/maps/MtPyre_Summit/scripts.pory"
# 781 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 782 "data/maps/MtPyre_Summit/scripts.pory"

# 783 "data/maps/MtPyre_Summit/scripts.pory"
# 444 "data/maps/MtPyre_Summit/scripts.pory"
# 784 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 785 "data/maps/MtPyre_Summit/scripts.pory"
# 445 "data/maps/MtPyre_Summit/scripts.pory"
# 786 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 787 "data/maps/MtPyre_Summit/scripts.pory"
# 446 "data/maps/MtPyre_Summit/scripts.pory"
# 788 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 789 "data/maps/MtPyre_Summit/scripts.pory"
# 447 "data/maps/MtPyre_Summit/scripts.pory"
# 790 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 791 "data/maps/MtPyre_Summit/scripts.pory"
# 448 "data/maps/MtPyre_Summit/scripts.pory"
# 792 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 793 "data/maps/MtPyre_Summit/scripts.pory"
# 449 "data/maps/MtPyre_Summit/scripts.pory"
# 794 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 795 "data/maps/MtPyre_Summit/scripts.pory"

# 796 "data/maps/MtPyre_Summit/scripts.pory"
# 452 "data/maps/MtPyre_Summit/scripts.pory"
# 797 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 798 "data/maps/MtPyre_Summit/scripts.pory"
# 453 "data/maps/MtPyre_Summit/scripts.pory"
# 799 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 800 "data/maps/MtPyre_Summit/scripts.pory"
# 454 "data/maps/MtPyre_Summit/scripts.pory"
# 801 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 802 "data/maps/MtPyre_Summit/scripts.pory"
# 455 "data/maps/MtPyre_Summit/scripts.pory"
# 803 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 804 "data/maps/MtPyre_Summit/scripts.pory"
# 456 "data/maps/MtPyre_Summit/scripts.pory"
# 805 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 806 "data/maps/MtPyre_Summit/scripts.pory"
# 457 "data/maps/MtPyre_Summit/scripts.pory"
# 807 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 808 "data/maps/MtPyre_Summit/scripts.pory"

# 809 "data/maps/MtPyre_Summit/scripts.pory"
# 460 "data/maps/MtPyre_Summit/scripts.pory"
# 810 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 811 "data/maps/MtPyre_Summit/scripts.pory"
# 461 "data/maps/MtPyre_Summit/scripts.pory"
# 812 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 813 "data/maps/MtPyre_Summit/scripts.pory"
# 462 "data/maps/MtPyre_Summit/scripts.pory"
# 814 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 815 "data/maps/MtPyre_Summit/scripts.pory"
# 463 "data/maps/MtPyre_Summit/scripts.pory"
# 816 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 817 "data/maps/MtPyre_Summit/scripts.pory"
# 464 "data/maps/MtPyre_Summit/scripts.pory"
# 818 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 819 "data/maps/MtPyre_Summit/scripts.pory"
# 465 "data/maps/MtPyre_Summit/scripts.pory"
# 820 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 821 "data/maps/MtPyre_Summit/scripts.pory"

# 822 "data/maps/MtPyre_Summit/scripts.pory"
# 468 "data/maps/MtPyre_Summit/scripts.pory"
# 823 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 824 "data/maps/MtPyre_Summit/scripts.pory"
# 469 "data/maps/MtPyre_Summit/scripts.pory"
# 825 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 826 "data/maps/MtPyre_Summit/scripts.pory"
# 470 "data/maps/MtPyre_Summit/scripts.pory"
# 827 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 828 "data/maps/MtPyre_Summit/scripts.pory"
# 471 "data/maps/MtPyre_Summit/scripts.pory"
# 829 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 830 "data/maps/MtPyre_Summit/scripts.pory"

# 831 "data/maps/MtPyre_Summit/scripts.pory"
# 474 "data/maps/MtPyre_Summit/scripts.pory"
# 832 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 833 "data/maps/MtPyre_Summit/scripts.pory"
# 475 "data/maps/MtPyre_Summit/scripts.pory"
# 834 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 835 "data/maps/MtPyre_Summit/scripts.pory"
# 476 "data/maps/MtPyre_Summit/scripts.pory"
# 836 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 837 "data/maps/MtPyre_Summit/scripts.pory"
# 477 "data/maps/MtPyre_Summit/scripts.pory"
# 838 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 839 "data/maps/MtPyre_Summit/scripts.pory"

# 840 "data/maps/MtPyre_Summit/scripts.pory"
# 480 "data/maps/MtPyre_Summit/scripts.pory"
# 841 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 842 "data/maps/MtPyre_Summit/scripts.pory"
# 481 "data/maps/MtPyre_Summit/scripts.pory"
# 843 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 844 "data/maps/MtPyre_Summit/scripts.pory"
# 482 "data/maps/MtPyre_Summit/scripts.pory"
# 845 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 846 "data/maps/MtPyre_Summit/scripts.pory"
# 483 "data/maps/MtPyre_Summit/scripts.pory"
# 847 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 848 "data/maps/MtPyre_Summit/scripts.pory"
# 484 "data/maps/MtPyre_Summit/scripts.pory"
# 849 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 850 "data/maps/MtPyre_Summit/scripts.pory"
# 485 "data/maps/MtPyre_Summit/scripts.pory"
# 851 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 852 "data/maps/MtPyre_Summit/scripts.pory"
# 486 "data/maps/MtPyre_Summit/scripts.pory"
# 853 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 854 "data/maps/MtPyre_Summit/scripts.pory"

# 855 "data/maps/MtPyre_Summit/scripts.pory"
# 489 "data/maps/MtPyre_Summit/scripts.pory"
# 856 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 857 "data/maps/MtPyre_Summit/scripts.pory"
# 490 "data/maps/MtPyre_Summit/scripts.pory"
# 858 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 859 "data/maps/MtPyre_Summit/scripts.pory"
# 491 "data/maps/MtPyre_Summit/scripts.pory"
# 860 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 861 "data/maps/MtPyre_Summit/scripts.pory"
# 492 "data/maps/MtPyre_Summit/scripts.pory"
# 862 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 863 "data/maps/MtPyre_Summit/scripts.pory"
# 493 "data/maps/MtPyre_Summit/scripts.pory"
# 864 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 865 "data/maps/MtPyre_Summit/scripts.pory"
# 494 "data/maps/MtPyre_Summit/scripts.pory"
# 866 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 867 "data/maps/MtPyre_Summit/scripts.pory"

# 868 "data/maps/MtPyre_Summit/scripts.pory"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
# 869 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 870 "data/maps/MtPyre_Summit/scripts.pory"
# 498 "data/maps/MtPyre_Summit/scripts.pory"
# 871 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 872 "data/maps/MtPyre_Summit/scripts.pory"
# 499 "data/maps/MtPyre_Summit/scripts.pory"
# 873 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 874 "data/maps/MtPyre_Summit/scripts.pory"
# 500 "data/maps/MtPyre_Summit/scripts.pory"
# 875 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 876 "data/maps/MtPyre_Summit/scripts.pory"
# 501 "data/maps/MtPyre_Summit/scripts.pory"
# 877 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 878 "data/maps/MtPyre_Summit/scripts.pory"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
# 879 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 880 "data/maps/MtPyre_Summit/scripts.pory"

# 881 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 882 "data/maps/MtPyre_Summit/scripts.pory"
# 506 "data/maps/MtPyre_Summit/scripts.pory"
# 883 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 884 "data/maps/MtPyre_Summit/scripts.pory"
# 507 "data/maps/MtPyre_Summit/scripts.pory"
# 885 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 886 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 887 "data/maps/MtPyre_Summit/scripts.pory"

# 888 "data/maps/MtPyre_Summit/scripts.pory"

# 889 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 890 "data/maps/MtPyre_Summit/scripts.pory"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
# 891 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 892 "data/maps/MtPyre_Summit/scripts.pory"
# 513 "data/maps/MtPyre_Summit/scripts.pory"
# 893 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 894 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 895 "data/maps/MtPyre_Summit/scripts.pory"

# 896 "data/maps/MtPyre_Summit/scripts.pory"

# 897 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 898 "data/maps/MtPyre_Summit/scripts.pory"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
# 899 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 900 "data/maps/MtPyre_Summit/scripts.pory"
# 519 "data/maps/MtPyre_Summit/scripts.pory"
# 901 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 902 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 903 "data/maps/MtPyre_Summit/scripts.pory"

# 904 "data/maps/MtPyre_Summit/scripts.pory"

# 905 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 906 "data/maps/MtPyre_Summit/scripts.pory"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
# 907 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 908 "data/maps/MtPyre_Summit/scripts.pory"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
# 909 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 910 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 911 "data/maps/MtPyre_Summit/scripts.pory"

# 912 "data/maps/MtPyre_Summit/scripts.pory"

# 913 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro::
# 914 "data/maps/MtPyre_Summit/scripts.pory"
# 529 "data/maps/MtPyre_Summit/scripts.pory"
# 915 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those TEAM MAGMA goons got\n"
# 916 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 917 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 918 "data/maps/MtPyre_Summit/scripts.pory"

# 919 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat::
# 920 "data/maps/MtPyre_Summit/scripts.pory"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
# 921 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the MAGMAS\n"
# 922 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 923 "data/maps/MtPyre_Summit/scripts.pory"

# 924 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle::
# 925 "data/maps/MtPyre_Summit/scripts.pory"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
# 926 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 927 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 928 "data/maps/MtPyre_Summit/scripts.pory"

# 929 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro::
# 930 "data/maps/MtPyre_Summit/scripts.pory"
# 545 "data/maps/MtPyre_Summit/scripts.pory"
# 931 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 932 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 933 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 934 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy TEAM MAGMA.\p"
# 935 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 936 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 937 "data/maps/MtPyre_Summit/scripts.pory"

# 938 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat::
# 939 "data/maps/MtPyre_Summit/scripts.pory"
# 554 "data/maps/MtPyre_Summit/scripts.pory"
# 940 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 941 "data/maps/MtPyre_Summit/scripts.pory"
	.string "TEAM MAGMA first…$"
# 942 "data/maps/MtPyre_Summit/scripts.pory"

# 943 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle::
# 944 "data/maps/MtPyre_Summit/scripts.pory"
# 559 "data/maps/MtPyre_Summit/scripts.pory"
# 945 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 946 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 947 "data/maps/MtPyre_Summit/scripts.pory"

# 948 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro::
# 949 "data/maps/MtPyre_Summit/scripts.pory"
# 564 "data/maps/MtPyre_Summit/scripts.pory"
# 950 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 951 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at MT. CHIMNEY.\p"
# 952 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either TEAM,\n"
# 953 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 954 "data/maps/MtPyre_Summit/scripts.pory"

# 955 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat::
# 956 "data/maps/MtPyre_Summit/scripts.pory"
# 571 "data/maps/MtPyre_Summit/scripts.pory"
# 957 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 958 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be TEAM MAGMA…$"
# 959 "data/maps/MtPyre_Summit/scripts.pory"

# 960 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle::
# 961 "data/maps/MtPyre_Summit/scripts.pory"
# 576 "data/maps/MtPyre_Summit/scripts.pory"
# 962 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 963 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 964 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BOSS should have snatched what\n"
# 965 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 966 "data/maps/MtPyre_Summit/scripts.pory"

# 967 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro::
# 968 "data/maps/MtPyre_Summit/scripts.pory"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
# 969 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 970 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join TEAM MAGMA,\l"
# 971 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 972 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 973 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our TEAM AQUA!$"
# 974 "data/maps/MtPyre_Summit/scripts.pory"

# 975 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat::
# 976 "data/maps/MtPyre_Summit/scripts.pory"
# 591 "data/maps/MtPyre_Summit/scripts.pory"
# 977 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join TEAM AQUA that\n"
# 978 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 979 "data/maps/MtPyre_Summit/scripts.pory"

# 980 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle::
# 981 "data/maps/MtPyre_Summit/scripts.pory"
# 596 "data/maps/MtPyre_Summit/scripts.pory"
# 982 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 983 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 984 "data/maps/MtPyre_Summit/scripts.pory"

# 985 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo::
# 986 "data/maps/MtPyre_Summit/scripts.pory"
# 601 "data/maps/MtPyre_Summit/scripts.pory"
# 987 "data/maps/MtPyre_Summit/scripts.pory"
	.string "ARCHIE: TEAM MAGMA's MAXIE got ahead\n"
# 988 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of us, but we also got what we wanted.\p"
# 989 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The RED ORB preserved at MT. PYRE…\n"
# 990 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I, ARCHIE, now have it in my possession!\p"
# 991 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Fufufu… Now we can bring our ultimate\n"
# 992 "data/maps/MtPyre_Summit/scripts.pory"
	.string "objective to fruition!\p"
# 993 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, TEAM!\n"
# 994 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 995 "data/maps/MtPyre_Summit/scripts.pory"

# 996 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis::
# 997 "data/maps/MtPyre_Summit/scripts.pory"
# 612 "data/maps/MtPyre_Summit/scripts.pory"
# 998 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 999 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 1000 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the BLUE ORB, but even\n"
# 1001 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB has been taken…\p"
# 1002 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB must never\n"
# 1003 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 1004 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 1005 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two ORBS?\p"
# 1006 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 1007 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 1008 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
# 1009 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the BLUE ORB first?\p"
# 1010 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 1011 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 1012 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 1013 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 1014 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 1015 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 1016 "data/maps/MtPyre_Summit/scripts.pory"

# 1017 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken::
# 1018 "data/maps/MtPyre_Summit/scripts.pory"
# 633 "data/maps/MtPyre_Summit/scripts.pory"
# 1019 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
# 1020 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 1021 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 1022 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 1023 "data/maps/MtPyre_Summit/scripts.pory"

# 1024 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened::
# 1025 "data/maps/MtPyre_Summit/scripts.pory"
# 640 "data/maps/MtPyre_Summit/scripts.pory"
# 1026 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 1027 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both GROUDON and KYOGRE\n"
# 1028 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 1029 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the BLUE ORB and\n"
# 1030 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB quelled the rage of\l"
# 1031 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two POKéMON…\p"
# 1032 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 1033 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the ORBS still exists.\p"
# 1034 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 1035 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the ORBS belong to.\p"
# 1036 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 1037 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a POKéMON, but no one knows.$"
# 1038 "data/maps/MtPyre_Summit/scripts.pory"

# 1039 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs::
# 1040 "data/maps/MtPyre_Summit/scripts.pory"
# 655 "data/maps/MtPyre_Summit/scripts.pory"
# 1041 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
# 1042 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 1043 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 1044 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 1045 "data/maps/MtPyre_Summit/scripts.pory"

# 1046 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs::
# 1047 "data/maps/MtPyre_Summit/scripts.pory"
# 662 "data/maps/MtPyre_Summit/scripts.pory"
# 1048 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 1049 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 1050 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 1051 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient POKéMON…\p"
# 1052 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 1053 "data/maps/MtPyre_Summit/scripts.pory"
	.string "POKéMON have life, our world, too,\l"
# 1054 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 1055 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient POKéMON have\n"
# 1056 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 1057 "data/maps/MtPyre_Summit/scripts.pory"

# 1058 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale::
# 1059 "data/maps/MtPyre_Summit/scripts.pory"
# 674 "data/maps/MtPyre_Summit/scripts.pory"
# 1060 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
# 1061 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of POKéMON that have passed on…\p"
# 1062 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 1063 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of HOENN…\p"
# 1064 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of POKéMON\n"
# 1065 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 1066 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 1067 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 1068 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the HOENN region?$"
# 1069 "data/maps/MtPyre_Summit/scripts.pory"

# 1070 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale::
# 1071 "data/maps/MtPyre_Summit/scripts.pory"
# 686 "data/maps/MtPyre_Summit/scripts.pory"
# 1072 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 1073 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 1074 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the POKéMON of the land\l"
# 1075 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the POKéMON of the sea…\p"
# 1076 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the land raised\n"
# 1077 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 1078 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the sea raised huge\n"
# 1079 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 1080 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 1081 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 1082 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 1083 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and the RED ORB brought\n"
# 1084 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 1085 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two ORBS and\n"
# 1086 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 1087 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 1088 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 1089 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 1090 "data/maps/MtPyre_Summit/scripts.pory"

# 1091 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine::
# 1092 "data/maps/MtPyre_Summit/scripts.pory"
# 707 "data/maps/MtPyre_Summit/scripts.pory"
# 1093 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 1094 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 1095 "data/maps/MtPyre_Summit/scripts.pory"

# 1096 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence::
# 1097 "data/maps/MtPyre_Summit/scripts.pory"
# 712 "data/maps/MtPyre_Summit/scripts.pory"
# 1098 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
# 1099 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 1100 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 1101 "data/maps/MtPyre_Summit/scripts.pory"

# 1102 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn::
# 1103 "data/maps/MtPyre_Summit/scripts.pory"
# 718 "data/maps/MtPyre_Summit/scripts.pory"
# 1104 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 1105 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of HOENN to future generations.\p"
# 1106 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 1107 "data/maps/MtPyre_Summit/scripts.pory"
	.string "SOOTOPOLIS rewrote a legend…\p"
# 1108 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 1109 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of HOENN?$"
# 1110 "data/maps/MtPyre_Summit/scripts.pory"

# 1111 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale::
# 1112 "data/maps/MtPyre_Summit/scripts.pory"
# 727 "data/maps/MtPyre_Summit/scripts.pory"
# 1113 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 1114 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 1115 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the POKéMON of the land\l"
# 1116 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the POKéMON of the sea…\p"
# 1117 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the land raised\n"
# 1118 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 1119 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the sea raised huge\n"
# 1120 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 1121 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 1122 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 1123 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 1124 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the POKéMON of\n"
# 1125 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 1126 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON, shining a vivid green,\n"
# 1127 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged POKéMON.\p"
# 1128 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green POKéMON\n"
# 1129 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
