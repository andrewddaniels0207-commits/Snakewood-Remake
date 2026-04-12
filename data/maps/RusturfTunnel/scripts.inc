# 1 "data/maps/RusturfTunnel/scripts.pory"

# 2 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 3 "data/maps/RusturfTunnel/scripts.pory"
# 2 "data/maps/RusturfTunnel/scripts.pory"
# 4 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 5 "data/maps/RusturfTunnel/scripts.pory"
# 3 "data/maps/RusturfTunnel/scripts.pory"
# 6 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 8 "data/maps/RusturfTunnel/scripts.pory"

# 9 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/RusturfTunnel/scripts.pory"
# 4 "data/maps/RusturfTunnel/scripts.pory"
# 11 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 12 "data/maps/RusturfTunnel/scripts.pory"
# 5 "data/maps/RusturfTunnel/scripts.pory"
# 13 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 14 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 15 "data/maps/RusturfTunnel/scripts.pory"

# 16 "data/maps/RusturfTunnel/scripts.pory"

# 17 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition::
# 18 "data/maps/RusturfTunnel/scripts.pory"
# 10 "data/maps/RusturfTunnel/scripts.pory"
# 19 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RUSTURF_TUNNEL_STATE, 2
# 20 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_OnTransition_2
# 21 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition_1:
# 22 "data/maps/RusturfTunnel/scripts.pory"
	end
# 23 "data/maps/RusturfTunnel/scripts.pory"

# 24 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition_2:
# 25 "data/maps/RusturfTunnel/scripts.pory"
# 11 "data/maps/RusturfTunnel/scripts.pory"
# 26 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 27 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_OnTransition_1
# 28 "data/maps/RusturfTunnel/scripts.pory"

# 29 "data/maps/RusturfTunnel/scripts.pory"

# 30 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 31 "data/maps/RusturfTunnel/scripts.pory"
# 17 "data/maps/RusturfTunnel/scripts.pory"
# 32 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_PEEKO, 13, 4
# 33 "data/maps/RusturfTunnel/scripts.pory"
# 18 "data/maps/RusturfTunnel/scripts.pory"
# 34 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_GRUNT, 13, 5
# 35 "data/maps/RusturfTunnel/scripts.pory"
	return
# 36 "data/maps/RusturfTunnel/scripts.pory"

# 37 "data/maps/RusturfTunnel/scripts.pory"

# 38 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 39 "data/maps/RusturfTunnel/scripts.pory"
# 23 "data/maps/RusturfTunnel/scripts.pory"
# 40 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 41 "data/maps/RusturfTunnel/scripts.pory"
# 24 "data/maps/RusturfTunnel/scripts.pory"
# 42 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 43 "data/maps/RusturfTunnel/scripts.pory"
# 25 "data/maps/RusturfTunnel/scripts.pory"
# 44 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 45 "data/maps/RusturfTunnel/scripts.pory"
# 26 "data/maps/RusturfTunnel/scripts.pory"
# 46 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 47 "data/maps/RusturfTunnel/scripts.pory"
# 27 "data/maps/RusturfTunnel/scripts.pory"
# 48 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 49 "data/maps/RusturfTunnel/scripts.pory"
# 28 "data/maps/RusturfTunnel/scripts.pory"
# 50 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 51 "data/maps/RusturfTunnel/scripts.pory"
# 29 "data/maps/RusturfTunnel/scripts.pory"
# 52 "data/maps/RusturfTunnel/scripts.pory"
	release
# 53 "data/maps/RusturfTunnel/scripts.pory"
	end
# 54 "data/maps/RusturfTunnel/scripts.pory"

# 55 "data/maps/RusturfTunnel/scripts.pory"

# 56 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 57 "data/maps/RusturfTunnel/scripts.pory"
# 34 "data/maps/RusturfTunnel/scripts.pory"
# 58 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 59 "data/maps/RusturfTunnel/scripts.pory"
# 35 "data/maps/RusturfTunnel/scripts.pory"
# 60 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 61 "data/maps/RusturfTunnel/scripts.pory"
# 36 "data/maps/RusturfTunnel/scripts.pory"
# 62 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_WandasBoyfriend_2
# 63 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend_1:
# 64 "data/maps/RusturfTunnel/scripts.pory"
# 39 "data/maps/RusturfTunnel/scripts.pory"
# 65 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 66 "data/maps/RusturfTunnel/scripts.pory"
# 40 "data/maps/RusturfTunnel/scripts.pory"
# 67 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 68 "data/maps/RusturfTunnel/scripts.pory"
# 41 "data/maps/RusturfTunnel/scripts.pory"
# 69 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 70 "data/maps/RusturfTunnel/scripts.pory"
# 42 "data/maps/RusturfTunnel/scripts.pory"
# 71 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 72 "data/maps/RusturfTunnel/scripts.pory"
# 43 "data/maps/RusturfTunnel/scripts.pory"
# 73 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 74 "data/maps/RusturfTunnel/scripts.pory"
# 44 "data/maps/RusturfTunnel/scripts.pory"
# 75 "data/maps/RusturfTunnel/scripts.pory"
	release
# 76 "data/maps/RusturfTunnel/scripts.pory"
	end
# 77 "data/maps/RusturfTunnel/scripts.pory"

# 78 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend_2:
# 79 "data/maps/RusturfTunnel/scripts.pory"
# 37 "data/maps/RusturfTunnel/scripts.pory"
# 80 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_AlreadySpokenTo
# 81 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_WandasBoyfriend_1
# 82 "data/maps/RusturfTunnel/scripts.pory"

# 83 "data/maps/RusturfTunnel/scripts.pory"

# 84 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 85 "data/maps/RusturfTunnel/scripts.pory"
# 49 "data/maps/RusturfTunnel/scripts.pory"
# 86 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 87 "data/maps/RusturfTunnel/scripts.pory"
# 50 "data/maps/RusturfTunnel/scripts.pory"
# 88 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 89 "data/maps/RusturfTunnel/scripts.pory"
# 51 "data/maps/RusturfTunnel/scripts.pory"
# 90 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 91 "data/maps/RusturfTunnel/scripts.pory"
# 52 "data/maps/RusturfTunnel/scripts.pory"
# 92 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 93 "data/maps/RusturfTunnel/scripts.pory"
# 53 "data/maps/RusturfTunnel/scripts.pory"
# 94 "data/maps/RusturfTunnel/scripts.pory"
	release
# 95 "data/maps/RusturfTunnel/scripts.pory"
	end
# 96 "data/maps/RusturfTunnel/scripts.pory"

# 97 "data/maps/RusturfTunnel/scripts.pory"

# 98 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 99 "data/maps/RusturfTunnel/scripts.pory"
# 58 "data/maps/RusturfTunnel/scripts.pory"
# 100 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 101 "data/maps/RusturfTunnel/scripts.pory"
# 59 "data/maps/RusturfTunnel/scripts.pory"
# 102 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 1
# 103 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_2
# 104 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_1:
# 105 "data/maps/RusturfTunnel/scripts.pory"
# 62 "data/maps/RusturfTunnel/scripts.pory"
# 106 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 2
# 107 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_5
# 108 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_4:
# 109 "data/maps/RusturfTunnel/scripts.pory"
# 65 "data/maps/RusturfTunnel/scripts.pory"
# 110 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 3
# 111 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_8
# 112 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_7:
# 113 "data/maps/RusturfTunnel/scripts.pory"
# 68 "data/maps/RusturfTunnel/scripts.pory"
# 114 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 115 "data/maps/RusturfTunnel/scripts.pory"
# 69 "data/maps/RusturfTunnel/scripts.pory"
# 116 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 117 "data/maps/RusturfTunnel/scripts.pory"
# 70 "data/maps/RusturfTunnel/scripts.pory"
# 118 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 2
# 119 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_11
# 120 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_10:
# 121 "data/maps/RusturfTunnel/scripts.pory"
# 73 "data/maps/RusturfTunnel/scripts.pory"
# 122 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 3
# 123 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_14
# 124 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_13:
# 125 "data/maps/RusturfTunnel/scripts.pory"
# 76 "data/maps/RusturfTunnel/scripts.pory"
# 126 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 127 "data/maps/RusturfTunnel/scripts.pory"
# 77 "data/maps/RusturfTunnel/scripts.pory"
# 128 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 129 "data/maps/RusturfTunnel/scripts.pory"
# 78 "data/maps/RusturfTunnel/scripts.pory"
# 130 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 131 "data/maps/RusturfTunnel/scripts.pory"
# 79 "data/maps/RusturfTunnel/scripts.pory"
# 132 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 133 "data/maps/RusturfTunnel/scripts.pory"
# 80 "data/maps/RusturfTunnel/scripts.pory"
# 134 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 1
# 135 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_17
# 136 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_16:
# 137 "data/maps/RusturfTunnel/scripts.pory"
# 83 "data/maps/RusturfTunnel/scripts.pory"
# 138 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 2
# 139 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_20
# 140 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_19:
# 141 "data/maps/RusturfTunnel/scripts.pory"
# 86 "data/maps/RusturfTunnel/scripts.pory"
# 142 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 3
# 143 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_23
# 144 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_22:
# 145 "data/maps/RusturfTunnel/scripts.pory"
# 89 "data/maps/RusturfTunnel/scripts.pory"
# 146 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 147 "data/maps/RusturfTunnel/scripts.pory"
# 90 "data/maps/RusturfTunnel/scripts.pory"
# 148 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 149 "data/maps/RusturfTunnel/scripts.pory"
# 91 "data/maps/RusturfTunnel/scripts.pory"
# 150 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 1
# 151 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_26
# 152 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_25:
# 153 "data/maps/RusturfTunnel/scripts.pory"
# 94 "data/maps/RusturfTunnel/scripts.pory"
# 154 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 2
# 155 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_29
# 156 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_28:
# 157 "data/maps/RusturfTunnel/scripts.pory"
# 97 "data/maps/RusturfTunnel/scripts.pory"
# 158 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 3
# 159 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_32
# 160 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_31:
# 161 "data/maps/RusturfTunnel/scripts.pory"
# 100 "data/maps/RusturfTunnel/scripts.pory"
# 162 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 163 "data/maps/RusturfTunnel/scripts.pory"
# 101 "data/maps/RusturfTunnel/scripts.pory"
# 164 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 165 "data/maps/RusturfTunnel/scripts.pory"
	end
# 166 "data/maps/RusturfTunnel/scripts.pory"

# 167 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_2:
# 168 "data/maps/RusturfTunnel/scripts.pory"
# 60 "data/maps/RusturfTunnel/scripts.pory"
# 169 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 170 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_ClearTunnelScene_1
# 171 "data/maps/RusturfTunnel/scripts.pory"

# 172 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_5:
# 173 "data/maps/RusturfTunnel/scripts.pory"
# 63 "data/maps/RusturfTunnel/scripts.pory"
# 174 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 175 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_ClearTunnelScene_4
# 176 "data/maps/RusturfTunnel/scripts.pory"

# 177 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_8:
# 178 "data/maps/RusturfTunnel/scripts.pory"
# 66 "data/maps/RusturfTunnel/scripts.pory"
# 179 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 180 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_ClearTunnelScene_7
# 181 "data/maps/RusturfTunnel/scripts.pory"

# 182 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_11:
# 183 "data/maps/RusturfTunnel/scripts.pory"
# 71 "data/maps/RusturfTunnel/scripts.pory"
# 184 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 185 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_ClearTunnelScene_10
# 186 "data/maps/RusturfTunnel/scripts.pory"

# 187 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_14:
# 188 "data/maps/RusturfTunnel/scripts.pory"
# 74 "data/maps/RusturfTunnel/scripts.pory"
# 189 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 190 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_ClearTunnelScene_13
# 191 "data/maps/RusturfTunnel/scripts.pory"

# 192 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_17:
# 193 "data/maps/RusturfTunnel/scripts.pory"
# 81 "data/maps/RusturfTunnel/scripts.pory"
# 194 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 195 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_ClearTunnelScene_16
# 196 "data/maps/RusturfTunnel/scripts.pory"

# 197 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_20:
# 198 "data/maps/RusturfTunnel/scripts.pory"
# 84 "data/maps/RusturfTunnel/scripts.pory"
# 199 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 200 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_ClearTunnelScene_19
# 201 "data/maps/RusturfTunnel/scripts.pory"

# 202 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_23:
# 203 "data/maps/RusturfTunnel/scripts.pory"
# 87 "data/maps/RusturfTunnel/scripts.pory"
# 204 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 205 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_ClearTunnelScene_22
# 206 "data/maps/RusturfTunnel/scripts.pory"

# 207 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_26:
# 208 "data/maps/RusturfTunnel/scripts.pory"
# 92 "data/maps/RusturfTunnel/scripts.pory"
# 209 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 210 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_ClearTunnelScene_25
# 211 "data/maps/RusturfTunnel/scripts.pory"

# 212 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_29:
# 213 "data/maps/RusturfTunnel/scripts.pory"
# 95 "data/maps/RusturfTunnel/scripts.pory"
# 214 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 215 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_ClearTunnelScene_28
# 216 "data/maps/RusturfTunnel/scripts.pory"

# 217 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_32:
# 218 "data/maps/RusturfTunnel/scripts.pory"
# 98 "data/maps/RusturfTunnel/scripts.pory"
# 219 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 220 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_ClearTunnelScene_31
# 221 "data/maps/RusturfTunnel/scripts.pory"

# 222 "data/maps/RusturfTunnel/scripts.pory"

# 223 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 224 "data/maps/RusturfTunnel/scripts.pory"
# 106 "data/maps/RusturfTunnel/scripts.pory"
# 225 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 226 "data/maps/RusturfTunnel/scripts.pory"
# 107 "data/maps/RusturfTunnel/scripts.pory"
# 227 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 228 "data/maps/RusturfTunnel/scripts.pory"
# 108 "data/maps/RusturfTunnel/scripts.pory"
# 229 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 230 "data/maps/RusturfTunnel/scripts.pory"
	return
# 231 "data/maps/RusturfTunnel/scripts.pory"

# 232 "data/maps/RusturfTunnel/scripts.pory"

# 233 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 234 "data/maps/RusturfTunnel/scripts.pory"
# 113 "data/maps/RusturfTunnel/scripts.pory"
# 235 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 236 "data/maps/RusturfTunnel/scripts.pory"
# 114 "data/maps/RusturfTunnel/scripts.pory"
# 237 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 238 "data/maps/RusturfTunnel/scripts.pory"
# 115 "data/maps/RusturfTunnel/scripts.pory"
# 239 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 240 "data/maps/RusturfTunnel/scripts.pory"
# 116 "data/maps/RusturfTunnel/scripts.pory"
# 241 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 242 "data/maps/RusturfTunnel/scripts.pory"
# 117 "data/maps/RusturfTunnel/scripts.pory"
# 243 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 244 "data/maps/RusturfTunnel/scripts.pory"
	return
# 245 "data/maps/RusturfTunnel/scripts.pory"

# 246 "data/maps/RusturfTunnel/scripts.pory"

# 247 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 248 "data/maps/RusturfTunnel/scripts.pory"
# 122 "data/maps/RusturfTunnel/scripts.pory"
# 249 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 250 "data/maps/RusturfTunnel/scripts.pory"
# 123 "data/maps/RusturfTunnel/scripts.pory"
# 251 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 252 "data/maps/RusturfTunnel/scripts.pory"
# 124 "data/maps/RusturfTunnel/scripts.pory"
# 253 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 254 "data/maps/RusturfTunnel/scripts.pory"
# 125 "data/maps/RusturfTunnel/scripts.pory"
# 255 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 256 "data/maps/RusturfTunnel/scripts.pory"
# 126 "data/maps/RusturfTunnel/scripts.pory"
# 257 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 258 "data/maps/RusturfTunnel/scripts.pory"
	return
# 259 "data/maps/RusturfTunnel/scripts.pory"

# 260 "data/maps/RusturfTunnel/scripts.pory"

# 261 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 262 "data/maps/RusturfTunnel/scripts.pory"
# 131 "data/maps/RusturfTunnel/scripts.pory"
# 263 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 264 "data/maps/RusturfTunnel/scripts.pory"
# 132 "data/maps/RusturfTunnel/scripts.pory"
# 265 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 266 "data/maps/RusturfTunnel/scripts.pory"
# 133 "data/maps/RusturfTunnel/scripts.pory"
# 267 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 268 "data/maps/RusturfTunnel/scripts.pory"
# 134 "data/maps/RusturfTunnel/scripts.pory"
# 269 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 270 "data/maps/RusturfTunnel/scripts.pory"
	return
# 271 "data/maps/RusturfTunnel/scripts.pory"

# 272 "data/maps/RusturfTunnel/scripts.pory"

# 273 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 274 "data/maps/RusturfTunnel/scripts.pory"
# 139 "data/maps/RusturfTunnel/scripts.pory"
# 275 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 276 "data/maps/RusturfTunnel/scripts.pory"
# 140 "data/maps/RusturfTunnel/scripts.pory"
# 277 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 278 "data/maps/RusturfTunnel/scripts.pory"
	return
# 279 "data/maps/RusturfTunnel/scripts.pory"

# 280 "data/maps/RusturfTunnel/scripts.pory"

# 281 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 282 "data/maps/RusturfTunnel/scripts.pory"
	return
# 283 "data/maps/RusturfTunnel/scripts.pory"

# 284 "data/maps/RusturfTunnel/scripts.pory"

# 285 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 286 "data/maps/RusturfTunnel/scripts.pory"
# 149 "data/maps/RusturfTunnel/scripts.pory"
# 287 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 288 "data/maps/RusturfTunnel/scripts.pory"
# 150 "data/maps/RusturfTunnel/scripts.pory"
# 289 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 290 "data/maps/RusturfTunnel/scripts.pory"
# 151 "data/maps/RusturfTunnel/scripts.pory"
# 291 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 292 "data/maps/RusturfTunnel/scripts.pory"
	return
# 293 "data/maps/RusturfTunnel/scripts.pory"

# 294 "data/maps/RusturfTunnel/scripts.pory"

# 295 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 296 "data/maps/RusturfTunnel/scripts.pory"
# 156 "data/maps/RusturfTunnel/scripts.pory"
# 297 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit1
# 298 "data/maps/RusturfTunnel/scripts.pory"
# 157 "data/maps/RusturfTunnel/scripts.pory"
# 299 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 300 "data/maps/RusturfTunnel/scripts.pory"
# 158 "data/maps/RusturfTunnel/scripts.pory"
# 301 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 302 "data/maps/RusturfTunnel/scripts.pory"
	return
# 303 "data/maps/RusturfTunnel/scripts.pory"

# 304 "data/maps/RusturfTunnel/scripts.pory"

# 305 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 306 "data/maps/RusturfTunnel/scripts.pory"
# 163 "data/maps/RusturfTunnel/scripts.pory"
# 307 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 308 "data/maps/RusturfTunnel/scripts.pory"
# 164 "data/maps/RusturfTunnel/scripts.pory"
# 309 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit
# 310 "data/maps/RusturfTunnel/scripts.pory"
# 165 "data/maps/RusturfTunnel/scripts.pory"
# 311 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 312 "data/maps/RusturfTunnel/scripts.pory"
# 166 "data/maps/RusturfTunnel/scripts.pory"
# 313 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 314 "data/maps/RusturfTunnel/scripts.pory"
	return
# 315 "data/maps/RusturfTunnel/scripts.pory"

# 316 "data/maps/RusturfTunnel/scripts.pory"

# 317 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 318 "data/maps/RusturfTunnel/scripts.pory"
# 171 "data/maps/RusturfTunnel/scripts.pory"
# 319 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 320 "data/maps/RusturfTunnel/scripts.pory"
# 172 "data/maps/RusturfTunnel/scripts.pory"
# 321 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_ExclamationMark
# 322 "data/maps/RusturfTunnel/scripts.pory"
# 173 "data/maps/RusturfTunnel/scripts.pory"
# 323 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 324 "data/maps/RusturfTunnel/scripts.pory"
# 174 "data/maps/RusturfTunnel/scripts.pory"
# 325 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_Delay48
# 326 "data/maps/RusturfTunnel/scripts.pory"
# 175 "data/maps/RusturfTunnel/scripts.pory"
# 327 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 328 "data/maps/RusturfTunnel/scripts.pory"
	return
# 329 "data/maps/RusturfTunnel/scripts.pory"

# 330 "data/maps/RusturfTunnel/scripts.pory"

# 331 "data/maps/RusturfTunnel/scripts.pory"
# 179 "data/maps/RusturfTunnel/scripts.pory"
# 332 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 333 "data/maps/RusturfTunnel/scripts.pory"
# 180 "data/maps/RusturfTunnel/scripts.pory"
# 334 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 335 "data/maps/RusturfTunnel/scripts.pory"
# 181 "data/maps/RusturfTunnel/scripts.pory"
# 336 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 337 "data/maps/RusturfTunnel/scripts.pory"
# 182 "data/maps/RusturfTunnel/scripts.pory"
# 338 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 339 "data/maps/RusturfTunnel/scripts.pory"
# 183 "data/maps/RusturfTunnel/scripts.pory"
# 340 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 341 "data/maps/RusturfTunnel/scripts.pory"
# 184 "data/maps/RusturfTunnel/scripts.pory"
# 342 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 343 "data/maps/RusturfTunnel/scripts.pory"
# 185 "data/maps/RusturfTunnel/scripts.pory"
# 344 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 345 "data/maps/RusturfTunnel/scripts.pory"
# 186 "data/maps/RusturfTunnel/scripts.pory"
# 346 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 347 "data/maps/RusturfTunnel/scripts.pory"
# 187 "data/maps/RusturfTunnel/scripts.pory"
# 348 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 349 "data/maps/RusturfTunnel/scripts.pory"
# 188 "data/maps/RusturfTunnel/scripts.pory"
# 350 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 351 "data/maps/RusturfTunnel/scripts.pory"
# 189 "data/maps/RusturfTunnel/scripts.pory"
# 352 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 353 "data/maps/RusturfTunnel/scripts.pory"
# 190 "data/maps/RusturfTunnel/scripts.pory"
# 354 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 355 "data/maps/RusturfTunnel/scripts.pory"
# 191 "data/maps/RusturfTunnel/scripts.pory"
# 356 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 357 "data/maps/RusturfTunnel/scripts.pory"

# 358 "data/maps/RusturfTunnel/scripts.pory"
# 194 "data/maps/RusturfTunnel/scripts.pory"
# 359 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 360 "data/maps/RusturfTunnel/scripts.pory"
# 195 "data/maps/RusturfTunnel/scripts.pory"
# 361 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 362 "data/maps/RusturfTunnel/scripts.pory"
# 196 "data/maps/RusturfTunnel/scripts.pory"
# 363 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 364 "data/maps/RusturfTunnel/scripts.pory"
# 197 "data/maps/RusturfTunnel/scripts.pory"
# 365 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 366 "data/maps/RusturfTunnel/scripts.pory"
# 198 "data/maps/RusturfTunnel/scripts.pory"
# 367 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 368 "data/maps/RusturfTunnel/scripts.pory"
# 199 "data/maps/RusturfTunnel/scripts.pory"
# 369 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 370 "data/maps/RusturfTunnel/scripts.pory"
# 200 "data/maps/RusturfTunnel/scripts.pory"
# 371 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 372 "data/maps/RusturfTunnel/scripts.pory"
# 201 "data/maps/RusturfTunnel/scripts.pory"
# 373 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 374 "data/maps/RusturfTunnel/scripts.pory"
# 202 "data/maps/RusturfTunnel/scripts.pory"
# 375 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 376 "data/maps/RusturfTunnel/scripts.pory"
# 203 "data/maps/RusturfTunnel/scripts.pory"
# 377 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 378 "data/maps/RusturfTunnel/scripts.pory"
# 204 "data/maps/RusturfTunnel/scripts.pory"
# 379 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 380 "data/maps/RusturfTunnel/scripts.pory"
# 205 "data/maps/RusturfTunnel/scripts.pory"
# 381 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 382 "data/maps/RusturfTunnel/scripts.pory"
# 206 "data/maps/RusturfTunnel/scripts.pory"
# 383 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 384 "data/maps/RusturfTunnel/scripts.pory"

# 385 "data/maps/RusturfTunnel/scripts.pory"
# 209 "data/maps/RusturfTunnel/scripts.pory"
# 386 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 387 "data/maps/RusturfTunnel/scripts.pory"
# 210 "data/maps/RusturfTunnel/scripts.pory"
# 388 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 389 "data/maps/RusturfTunnel/scripts.pory"
# 211 "data/maps/RusturfTunnel/scripts.pory"
# 390 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 391 "data/maps/RusturfTunnel/scripts.pory"
# 212 "data/maps/RusturfTunnel/scripts.pory"
# 392 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 393 "data/maps/RusturfTunnel/scripts.pory"
# 213 "data/maps/RusturfTunnel/scripts.pory"
# 394 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 395 "data/maps/RusturfTunnel/scripts.pory"
# 214 "data/maps/RusturfTunnel/scripts.pory"
# 396 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 397 "data/maps/RusturfTunnel/scripts.pory"
# 215 "data/maps/RusturfTunnel/scripts.pory"
# 398 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 399 "data/maps/RusturfTunnel/scripts.pory"

# 400 "data/maps/RusturfTunnel/scripts.pory"
# 218 "data/maps/RusturfTunnel/scripts.pory"
# 401 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 402 "data/maps/RusturfTunnel/scripts.pory"
# 219 "data/maps/RusturfTunnel/scripts.pory"
# 403 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 404 "data/maps/RusturfTunnel/scripts.pory"
# 220 "data/maps/RusturfTunnel/scripts.pory"
# 405 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 406 "data/maps/RusturfTunnel/scripts.pory"
# 221 "data/maps/RusturfTunnel/scripts.pory"
# 407 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 408 "data/maps/RusturfTunnel/scripts.pory"

# 409 "data/maps/RusturfTunnel/scripts.pory"
# 224 "data/maps/RusturfTunnel/scripts.pory"
# 410 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 411 "data/maps/RusturfTunnel/scripts.pory"
# 225 "data/maps/RusturfTunnel/scripts.pory"
# 412 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 413 "data/maps/RusturfTunnel/scripts.pory"
# 226 "data/maps/RusturfTunnel/scripts.pory"
# 414 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 415 "data/maps/RusturfTunnel/scripts.pory"
# 227 "data/maps/RusturfTunnel/scripts.pory"
# 416 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 417 "data/maps/RusturfTunnel/scripts.pory"
# 228 "data/maps/RusturfTunnel/scripts.pory"
# 418 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 419 "data/maps/RusturfTunnel/scripts.pory"
# 229 "data/maps/RusturfTunnel/scripts.pory"
# 420 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 421 "data/maps/RusturfTunnel/scripts.pory"

# 422 "data/maps/RusturfTunnel/scripts.pory"
# 232 "data/maps/RusturfTunnel/scripts.pory"
# 423 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 424 "data/maps/RusturfTunnel/scripts.pory"
# 233 "data/maps/RusturfTunnel/scripts.pory"
# 425 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 426 "data/maps/RusturfTunnel/scripts.pory"
# 234 "data/maps/RusturfTunnel/scripts.pory"
# 427 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
# 428 "data/maps/RusturfTunnel/scripts.pory"
# 235 "data/maps/RusturfTunnel/scripts.pory"
# 429 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 430 "data/maps/RusturfTunnel/scripts.pory"
# 236 "data/maps/RusturfTunnel/scripts.pory"
# 431 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 432 "data/maps/RusturfTunnel/scripts.pory"
# 237 "data/maps/RusturfTunnel/scripts.pory"
# 433 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 434 "data/maps/RusturfTunnel/scripts.pory"

# 435 "data/maps/RusturfTunnel/scripts.pory"
# 240 "data/maps/RusturfTunnel/scripts.pory"
# 436 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 437 "data/maps/RusturfTunnel/scripts.pory"
# 241 "data/maps/RusturfTunnel/scripts.pory"
# 438 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 439 "data/maps/RusturfTunnel/scripts.pory"
# 242 "data/maps/RusturfTunnel/scripts.pory"
# 440 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 441 "data/maps/RusturfTunnel/scripts.pory"
# 243 "data/maps/RusturfTunnel/scripts.pory"
# 442 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 443 "data/maps/RusturfTunnel/scripts.pory"

# 444 "data/maps/RusturfTunnel/scripts.pory"
# 246 "data/maps/RusturfTunnel/scripts.pory"
# 445 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 446 "data/maps/RusturfTunnel/scripts.pory"
# 247 "data/maps/RusturfTunnel/scripts.pory"
# 447 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 448 "data/maps/RusturfTunnel/scripts.pory"
# 248 "data/maps/RusturfTunnel/scripts.pory"
# 449 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 450 "data/maps/RusturfTunnel/scripts.pory"
# 249 "data/maps/RusturfTunnel/scripts.pory"
# 451 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 452 "data/maps/RusturfTunnel/scripts.pory"

# 453 "data/maps/RusturfTunnel/scripts.pory"
# 252 "data/maps/RusturfTunnel/scripts.pory"
# 454 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 455 "data/maps/RusturfTunnel/scripts.pory"
# 253 "data/maps/RusturfTunnel/scripts.pory"
# 456 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 457 "data/maps/RusturfTunnel/scripts.pory"
# 254 "data/maps/RusturfTunnel/scripts.pory"
# 458 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 459 "data/maps/RusturfTunnel/scripts.pory"
# 255 "data/maps/RusturfTunnel/scripts.pory"
# 460 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 461 "data/maps/RusturfTunnel/scripts.pory"

# 462 "data/maps/RusturfTunnel/scripts.pory"
# 258 "data/maps/RusturfTunnel/scripts.pory"
# 463 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 464 "data/maps/RusturfTunnel/scripts.pory"
# 259 "data/maps/RusturfTunnel/scripts.pory"
# 465 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 466 "data/maps/RusturfTunnel/scripts.pory"
# 260 "data/maps/RusturfTunnel/scripts.pory"
# 467 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 468 "data/maps/RusturfTunnel/scripts.pory"
# 261 "data/maps/RusturfTunnel/scripts.pory"
# 469 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 470 "data/maps/RusturfTunnel/scripts.pory"
# 262 "data/maps/RusturfTunnel/scripts.pory"
# 471 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 472 "data/maps/RusturfTunnel/scripts.pory"
# 263 "data/maps/RusturfTunnel/scripts.pory"
# 473 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 474 "data/maps/RusturfTunnel/scripts.pory"
# 264 "data/maps/RusturfTunnel/scripts.pory"
# 475 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 476 "data/maps/RusturfTunnel/scripts.pory"
# 265 "data/maps/RusturfTunnel/scripts.pory"
# 477 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 478 "data/maps/RusturfTunnel/scripts.pory"
# 266 "data/maps/RusturfTunnel/scripts.pory"
# 479 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 480 "data/maps/RusturfTunnel/scripts.pory"
# 267 "data/maps/RusturfTunnel/scripts.pory"
# 481 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 482 "data/maps/RusturfTunnel/scripts.pory"
# 268 "data/maps/RusturfTunnel/scripts.pory"
# 483 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 484 "data/maps/RusturfTunnel/scripts.pory"
# 269 "data/maps/RusturfTunnel/scripts.pory"
# 485 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 486 "data/maps/RusturfTunnel/scripts.pory"
# 270 "data/maps/RusturfTunnel/scripts.pory"
# 487 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 488 "data/maps/RusturfTunnel/scripts.pory"
# 271 "data/maps/RusturfTunnel/scripts.pory"
# 489 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 490 "data/maps/RusturfTunnel/scripts.pory"

# 491 "data/maps/RusturfTunnel/scripts.pory"
# 274 "data/maps/RusturfTunnel/scripts.pory"
# 492 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 493 "data/maps/RusturfTunnel/scripts.pory"
# 275 "data/maps/RusturfTunnel/scripts.pory"
# 494 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 495 "data/maps/RusturfTunnel/scripts.pory"
# 276 "data/maps/RusturfTunnel/scripts.pory"
# 496 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 497 "data/maps/RusturfTunnel/scripts.pory"
# 277 "data/maps/RusturfTunnel/scripts.pory"
# 498 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 499 "data/maps/RusturfTunnel/scripts.pory"
# 278 "data/maps/RusturfTunnel/scripts.pory"
# 500 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 501 "data/maps/RusturfTunnel/scripts.pory"
# 279 "data/maps/RusturfTunnel/scripts.pory"
# 502 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 503 "data/maps/RusturfTunnel/scripts.pory"
# 280 "data/maps/RusturfTunnel/scripts.pory"
# 504 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 505 "data/maps/RusturfTunnel/scripts.pory"
# 281 "data/maps/RusturfTunnel/scripts.pory"
# 506 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 507 "data/maps/RusturfTunnel/scripts.pory"
# 282 "data/maps/RusturfTunnel/scripts.pory"
# 508 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 509 "data/maps/RusturfTunnel/scripts.pory"
# 283 "data/maps/RusturfTunnel/scripts.pory"
# 510 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 511 "data/maps/RusturfTunnel/scripts.pory"
# 284 "data/maps/RusturfTunnel/scripts.pory"
# 512 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 513 "data/maps/RusturfTunnel/scripts.pory"
# 285 "data/maps/RusturfTunnel/scripts.pory"
# 514 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 515 "data/maps/RusturfTunnel/scripts.pory"
# 286 "data/maps/RusturfTunnel/scripts.pory"
# 516 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 517 "data/maps/RusturfTunnel/scripts.pory"
# 287 "data/maps/RusturfTunnel/scripts.pory"
# 518 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 519 "data/maps/RusturfTunnel/scripts.pory"

# 520 "data/maps/RusturfTunnel/scripts.pory"
# 290 "data/maps/RusturfTunnel/scripts.pory"
# 521 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 522 "data/maps/RusturfTunnel/scripts.pory"
# 291 "data/maps/RusturfTunnel/scripts.pory"
# 523 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 524 "data/maps/RusturfTunnel/scripts.pory"
# 292 "data/maps/RusturfTunnel/scripts.pory"
# 525 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 526 "data/maps/RusturfTunnel/scripts.pory"

# 527 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1::
# 528 "data/maps/RusturfTunnel/scripts.pory"
# 296 "data/maps/RusturfTunnel/scripts.pory"
# 529 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 530 "data/maps/RusturfTunnel/scripts.pory"
# 297 "data/maps/RusturfTunnel/scripts.pory"
# 531 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 532 "data/maps/RusturfTunnel/scripts.pory"
# 298 "data/maps/RusturfTunnel/scripts.pory"
# 533 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 534 "data/maps/RusturfTunnel/scripts.pory"
# 299 "data/maps/RusturfTunnel/scripts.pory"
# 535 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 536 "data/maps/RusturfTunnel/scripts.pory"
# 300 "data/maps/RusturfTunnel/scripts.pory"
# 537 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 538 "data/maps/RusturfTunnel/scripts.pory"
	return
# 539 "data/maps/RusturfTunnel/scripts.pory"

# 540 "data/maps/RusturfTunnel/scripts.pory"

# 541 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda::
# 542 "data/maps/RusturfTunnel/scripts.pory"
# 304 "data/maps/RusturfTunnel/scripts.pory"
# 543 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 544 "data/maps/RusturfTunnel/scripts.pory"
# 305 "data/maps/RusturfTunnel/scripts.pory"
# 545 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 546 "data/maps/RusturfTunnel/scripts.pory"
# 306 "data/maps/RusturfTunnel/scripts.pory"
# 547 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 548 "data/maps/RusturfTunnel/scripts.pory"
# 307 "data/maps/RusturfTunnel/scripts.pory"
# 549 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 550 "data/maps/RusturfTunnel/scripts.pory"
# 308 "data/maps/RusturfTunnel/scripts.pory"
# 551 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 552 "data/maps/RusturfTunnel/scripts.pory"
	return
# 553 "data/maps/RusturfTunnel/scripts.pory"

# 554 "data/maps/RusturfTunnel/scripts.pory"

# 555 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 556 "data/maps/RusturfTunnel/scripts.pory"
# 312 "data/maps/RusturfTunnel/scripts.pory"
# 557 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 558 "data/maps/RusturfTunnel/scripts.pory"
	end
# 559 "data/maps/RusturfTunnel/scripts.pory"

# 560 "data/maps/RusturfTunnel/scripts.pory"

# 561 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 562 "data/maps/RusturfTunnel/scripts.pory"
# 317 "data/maps/RusturfTunnel/scripts.pory"
# 563 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 564 "data/maps/RusturfTunnel/scripts.pory"
	end
# 565 "data/maps/RusturfTunnel/scripts.pory"

# 566 "data/maps/RusturfTunnel/scripts.pory"

# 567 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 568 "data/maps/RusturfTunnel/scripts.pory"
# 322 "data/maps/RusturfTunnel/scripts.pory"
# 569 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 570 "data/maps/RusturfTunnel/scripts.pory"
	end
# 571 "data/maps/RusturfTunnel/scripts.pory"

# 572 "data/maps/RusturfTunnel/scripts.pory"

# 573 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 574 "data/maps/RusturfTunnel/scripts.pory"
# 327 "data/maps/RusturfTunnel/scripts.pory"
# 575 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 576 "data/maps/RusturfTunnel/scripts.pory"
# 328 "data/maps/RusturfTunnel/scripts.pory"
# 577 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 578 "data/maps/RusturfTunnel/scripts.pory"
# 329 "data/maps/RusturfTunnel/scripts.pory"
# 579 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 580 "data/maps/RusturfTunnel/scripts.pory"
# 330 "data/maps/RusturfTunnel/scripts.pory"
# 581 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 582 "data/maps/RusturfTunnel/scripts.pory"
# 331 "data/maps/RusturfTunnel/scripts.pory"
# 583 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 584 "data/maps/RusturfTunnel/scripts.pory"
# 332 "data/maps/RusturfTunnel/scripts.pory"
# 585 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 586 "data/maps/RusturfTunnel/scripts.pory"
# 333 "data/maps/RusturfTunnel/scripts.pory"
# 587 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 588 "data/maps/RusturfTunnel/scripts.pory"
# 334 "data/maps/RusturfTunnel/scripts.pory"
# 589 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_GRUNT
# 590 "data/maps/RusturfTunnel/scripts.pory"
# 335 "data/maps/RusturfTunnel/scripts.pory"
# 591 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_PEEKO
# 592 "data/maps/RusturfTunnel/scripts.pory"
# 336 "data/maps/RusturfTunnel/scripts.pory"
# 593 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 594 "data/maps/RusturfTunnel/scripts.pory"
# 337 "data/maps/RusturfTunnel/scripts.pory"
# 595 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 596 "data/maps/RusturfTunnel/scripts.pory"
	end
# 597 "data/maps/RusturfTunnel/scripts.pory"

# 598 "data/maps/RusturfTunnel/scripts.pory"

# 599 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp::
# 600 "data/maps/RusturfTunnel/scripts.pory"
# 342 "data/maps/RusturfTunnel/scripts.pory"
# 601 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 602 "data/maps/RusturfTunnel/scripts.pory"
# 343 "data/maps/RusturfTunnel/scripts.pory"
# 603 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 604 "data/maps/RusturfTunnel/scripts.pory"
# 344 "data/maps/RusturfTunnel/scripts.pory"
# 605 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 606 "data/maps/RusturfTunnel/scripts.pory"
# 345 "data/maps/RusturfTunnel/scripts.pory"
# 607 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 608 "data/maps/RusturfTunnel/scripts.pory"
	return
# 609 "data/maps/RusturfTunnel/scripts.pory"

# 610 "data/maps/RusturfTunnel/scripts.pory"

# 611 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 612 "data/maps/RusturfTunnel/scripts.pory"
# 349 "data/maps/RusturfTunnel/scripts.pory"
# 613 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 614 "data/maps/RusturfTunnel/scripts.pory"
# 350 "data/maps/RusturfTunnel/scripts.pory"
# 615 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 616 "data/maps/RusturfTunnel/scripts.pory"
# 351 "data/maps/RusturfTunnel/scripts.pory"
# 617 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 618 "data/maps/RusturfTunnel/scripts.pory"
# 352 "data/maps/RusturfTunnel/scripts.pory"
# 619 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 620 "data/maps/RusturfTunnel/scripts.pory"
# 353 "data/maps/RusturfTunnel/scripts.pory"
# 621 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 622 "data/maps/RusturfTunnel/scripts.pory"
# 354 "data/maps/RusturfTunnel/scripts.pory"
# 623 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 624 "data/maps/RusturfTunnel/scripts.pory"
# 355 "data/maps/RusturfTunnel/scripts.pory"
# 625 "data/maps/RusturfTunnel/scripts.pory"
	release
# 626 "data/maps/RusturfTunnel/scripts.pory"
	end
# 627 "data/maps/RusturfTunnel/scripts.pory"

# 628 "data/maps/RusturfTunnel/scripts.pory"

# 629 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 630 "data/maps/RusturfTunnel/scripts.pory"
# 360 "data/maps/RusturfTunnel/scripts.pory"
# 631 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 632 "data/maps/RusturfTunnel/scripts.pory"
# 361 "data/maps/RusturfTunnel/scripts.pory"
# 633 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 634 "data/maps/RusturfTunnel/scripts.pory"
# 362 "data/maps/RusturfTunnel/scripts.pory"
# 635 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 636 "data/maps/RusturfTunnel/scripts.pory"
# 363 "data/maps/RusturfTunnel/scripts.pory"
# 637 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 638 "data/maps/RusturfTunnel/scripts.pory"
# 364 "data/maps/RusturfTunnel/scripts.pory"
# 639 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 640 "data/maps/RusturfTunnel/scripts.pory"
# 365 "data/maps/RusturfTunnel/scripts.pory"
# 641 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 642 "data/maps/RusturfTunnel/scripts.pory"
# 366 "data/maps/RusturfTunnel/scripts.pory"
# 643 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 644 "data/maps/RusturfTunnel/scripts.pory"
# 367 "data/maps/RusturfTunnel/scripts.pory"
# 645 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 646 "data/maps/RusturfTunnel/scripts.pory"
# 368 "data/maps/RusturfTunnel/scripts.pory"
# 647 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 648 "data/maps/RusturfTunnel/scripts.pory"
# 369 "data/maps/RusturfTunnel/scripts.pory"
# 649 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntEscape
# 650 "data/maps/RusturfTunnel/scripts.pory"
# 370 "data/maps/RusturfTunnel/scripts.pory"
# 651 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 652 "data/maps/RusturfTunnel/scripts.pory"
# 371 "data/maps/RusturfTunnel/scripts.pory"
# 653 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT
# 654 "data/maps/RusturfTunnel/scripts.pory"
# 372 "data/maps/RusturfTunnel/scripts.pory"
# 655 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 656 "data/maps/RusturfTunnel/scripts.pory"
# 373 "data/maps/RusturfTunnel/scripts.pory"
# 657 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 658 "data/maps/RusturfTunnel/scripts.pory"
# 374 "data/maps/RusturfTunnel/scripts.pory"
# 659 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 660 "data/maps/RusturfTunnel/scripts.pory"
# 375 "data/maps/RusturfTunnel/scripts.pory"
# 661 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 662 "data/maps/RusturfTunnel/scripts.pory"
# 376 "data/maps/RusturfTunnel/scripts.pory"
# 663 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 664 "data/maps/RusturfTunnel/scripts.pory"
# 377 "data/maps/RusturfTunnel/scripts.pory"
# 665 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 666 "data/maps/RusturfTunnel/scripts.pory"
# 378 "data/maps/RusturfTunnel/scripts.pory"
# 667 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 668 "data/maps/RusturfTunnel/scripts.pory"
# 379 "data/maps/RusturfTunnel/scripts.pory"
# 669 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 670 "data/maps/RusturfTunnel/scripts.pory"
# 380 "data/maps/RusturfTunnel/scripts.pory"
# 671 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_FacePlayer
# 672 "data/maps/RusturfTunnel/scripts.pory"
# 381 "data/maps/RusturfTunnel/scripts.pory"
# 673 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 674 "data/maps/RusturfTunnel/scripts.pory"
# 382 "data/maps/RusturfTunnel/scripts.pory"
# 675 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 676 "data/maps/RusturfTunnel/scripts.pory"
# 383 "data/maps/RusturfTunnel/scripts.pory"
# 677 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 678 "data/maps/RusturfTunnel/scripts.pory"
# 384 "data/maps/RusturfTunnel/scripts.pory"
# 679 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 680 "data/maps/RusturfTunnel/scripts.pory"
# 385 "data/maps/RusturfTunnel/scripts.pory"
# 681 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 682 "data/maps/RusturfTunnel/scripts.pory"
# 386 "data/maps/RusturfTunnel/scripts.pory"
# 683 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 684 "data/maps/RusturfTunnel/scripts.pory"
# 387 "data/maps/RusturfTunnel/scripts.pory"
# 685 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 686 "data/maps/RusturfTunnel/scripts.pory"
# 388 "data/maps/RusturfTunnel/scripts.pory"
# 687 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 688 "data/maps/RusturfTunnel/scripts.pory"
# 389 "data/maps/RusturfTunnel/scripts.pory"
# 689 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 690 "data/maps/RusturfTunnel/scripts.pory"
# 390 "data/maps/RusturfTunnel/scripts.pory"
# 691 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyExit
# 692 "data/maps/RusturfTunnel/scripts.pory"
# 391 "data/maps/RusturfTunnel/scripts.pory"
# 693 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_PeekoExit
# 694 "data/maps/RusturfTunnel/scripts.pory"
# 392 "data/maps/RusturfTunnel/scripts.pory"
# 695 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 696 "data/maps/RusturfTunnel/scripts.pory"
# 393 "data/maps/RusturfTunnel/scripts.pory"
# 697 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 698 "data/maps/RusturfTunnel/scripts.pory"
# 394 "data/maps/RusturfTunnel/scripts.pory"
# 699 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_PEEKO
# 700 "data/maps/RusturfTunnel/scripts.pory"
# 395 "data/maps/RusturfTunnel/scripts.pory"
# 701 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 702 "data/maps/RusturfTunnel/scripts.pory"
# 396 "data/maps/RusturfTunnel/scripts.pory"
# 703 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 704 "data/maps/RusturfTunnel/scripts.pory"
# 397 "data/maps/RusturfTunnel/scripts.pory"
# 705 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 706 "data/maps/RusturfTunnel/scripts.pory"
# 398 "data/maps/RusturfTunnel/scripts.pory"
# 707 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 708 "data/maps/RusturfTunnel/scripts.pory"
# 399 "data/maps/RusturfTunnel/scripts.pory"
# 709 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 710 "data/maps/RusturfTunnel/scripts.pory"
# 400 "data/maps/RusturfTunnel/scripts.pory"
# 711 "data/maps/RusturfTunnel/scripts.pory"
	release
# 712 "data/maps/RusturfTunnel/scripts.pory"
	end
# 713 "data/maps/RusturfTunnel/scripts.pory"

# 714 "data/maps/RusturfTunnel/scripts.pory"

# 715 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt::
# 716 "data/maps/RusturfTunnel/scripts.pory"
# 405 "data/maps/RusturfTunnel/scripts.pory"
# 717 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 718 "data/maps/RusturfTunnel/scripts.pory"
# 406 "data/maps/RusturfTunnel/scripts.pory"
# 719 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 720 "data/maps/RusturfTunnel/scripts.pory"
# 407 "data/maps/RusturfTunnel/scripts.pory"
# 721 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 722 "data/maps/RusturfTunnel/scripts.pory"
# 408 "data/maps/RusturfTunnel/scripts.pory"
# 723 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 724 "data/maps/RusturfTunnel/scripts.pory"
# 409 "data/maps/RusturfTunnel/scripts.pory"
# 725 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 726 "data/maps/RusturfTunnel/scripts.pory"
# 410 "data/maps/RusturfTunnel/scripts.pory"
# 727 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 728 "data/maps/RusturfTunnel/scripts.pory"
	return
# 729 "data/maps/RusturfTunnel/scripts.pory"

# 730 "data/maps/RusturfTunnel/scripts.pory"

# 731 "data/maps/RusturfTunnel/scripts.pory"
# 413 "data/maps/RusturfTunnel/scripts.pory"
# 732 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 733 "data/maps/RusturfTunnel/scripts.pory"
# 414 "data/maps/RusturfTunnel/scripts.pory"
# 734 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 735 "data/maps/RusturfTunnel/scripts.pory"
# 415 "data/maps/RusturfTunnel/scripts.pory"
# 736 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 737 "data/maps/RusturfTunnel/scripts.pory"
# 416 "data/maps/RusturfTunnel/scripts.pory"
# 738 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 739 "data/maps/RusturfTunnel/scripts.pory"

# 740 "data/maps/RusturfTunnel/scripts.pory"
# 419 "data/maps/RusturfTunnel/scripts.pory"
# 741 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 742 "data/maps/RusturfTunnel/scripts.pory"
# 420 "data/maps/RusturfTunnel/scripts.pory"
# 743 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 744 "data/maps/RusturfTunnel/scripts.pory"
# 421 "data/maps/RusturfTunnel/scripts.pory"
# 745 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 746 "data/maps/RusturfTunnel/scripts.pory"
# 422 "data/maps/RusturfTunnel/scripts.pory"
# 747 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 748 "data/maps/RusturfTunnel/scripts.pory"
# 423 "data/maps/RusturfTunnel/scripts.pory"
# 749 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 750 "data/maps/RusturfTunnel/scripts.pory"
# 424 "data/maps/RusturfTunnel/scripts.pory"
# 751 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 752 "data/maps/RusturfTunnel/scripts.pory"
# 425 "data/maps/RusturfTunnel/scripts.pory"
# 753 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 754 "data/maps/RusturfTunnel/scripts.pory"
# 426 "data/maps/RusturfTunnel/scripts.pory"
# 755 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 756 "data/maps/RusturfTunnel/scripts.pory"
# 427 "data/maps/RusturfTunnel/scripts.pory"
# 757 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 758 "data/maps/RusturfTunnel/scripts.pory"
# 428 "data/maps/RusturfTunnel/scripts.pory"
# 759 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 760 "data/maps/RusturfTunnel/scripts.pory"
# 429 "data/maps/RusturfTunnel/scripts.pory"
# 761 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 762 "data/maps/RusturfTunnel/scripts.pory"

# 763 "data/maps/RusturfTunnel/scripts.pory"
# 432 "data/maps/RusturfTunnel/scripts.pory"
# 764 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 765 "data/maps/RusturfTunnel/scripts.pory"
# 433 "data/maps/RusturfTunnel/scripts.pory"
# 766 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 767 "data/maps/RusturfTunnel/scripts.pory"
# 434 "data/maps/RusturfTunnel/scripts.pory"
# 768 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 769 "data/maps/RusturfTunnel/scripts.pory"
# 435 "data/maps/RusturfTunnel/scripts.pory"
# 770 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 771 "data/maps/RusturfTunnel/scripts.pory"
# 436 "data/maps/RusturfTunnel/scripts.pory"
# 772 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 773 "data/maps/RusturfTunnel/scripts.pory"
# 437 "data/maps/RusturfTunnel/scripts.pory"
# 774 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 775 "data/maps/RusturfTunnel/scripts.pory"
# 438 "data/maps/RusturfTunnel/scripts.pory"
# 776 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 777 "data/maps/RusturfTunnel/scripts.pory"
# 439 "data/maps/RusturfTunnel/scripts.pory"
# 778 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 779 "data/maps/RusturfTunnel/scripts.pory"
# 440 "data/maps/RusturfTunnel/scripts.pory"
# 780 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 781 "data/maps/RusturfTunnel/scripts.pory"

# 782 "data/maps/RusturfTunnel/scripts.pory"
# 443 "data/maps/RusturfTunnel/scripts.pory"
# 783 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 784 "data/maps/RusturfTunnel/scripts.pory"
# 444 "data/maps/RusturfTunnel/scripts.pory"
# 785 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 786 "data/maps/RusturfTunnel/scripts.pory"
# 445 "data/maps/RusturfTunnel/scripts.pory"
# 787 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 788 "data/maps/RusturfTunnel/scripts.pory"
# 446 "data/maps/RusturfTunnel/scripts.pory"
# 789 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 790 "data/maps/RusturfTunnel/scripts.pory"
# 447 "data/maps/RusturfTunnel/scripts.pory"
# 791 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 792 "data/maps/RusturfTunnel/scripts.pory"
# 448 "data/maps/RusturfTunnel/scripts.pory"
# 793 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 794 "data/maps/RusturfTunnel/scripts.pory"
# 449 "data/maps/RusturfTunnel/scripts.pory"
# 795 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 796 "data/maps/RusturfTunnel/scripts.pory"
# 450 "data/maps/RusturfTunnel/scripts.pory"
# 797 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 798 "data/maps/RusturfTunnel/scripts.pory"
# 451 "data/maps/RusturfTunnel/scripts.pory"
# 799 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 800 "data/maps/RusturfTunnel/scripts.pory"
# 452 "data/maps/RusturfTunnel/scripts.pory"
# 801 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 802 "data/maps/RusturfTunnel/scripts.pory"
# 453 "data/maps/RusturfTunnel/scripts.pory"
# 803 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 804 "data/maps/RusturfTunnel/scripts.pory"
# 454 "data/maps/RusturfTunnel/scripts.pory"
# 805 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 806 "data/maps/RusturfTunnel/scripts.pory"
# 455 "data/maps/RusturfTunnel/scripts.pory"
# 807 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 808 "data/maps/RusturfTunnel/scripts.pory"

# 809 "data/maps/RusturfTunnel/scripts.pory"
# 458 "data/maps/RusturfTunnel/scripts.pory"
# 810 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 811 "data/maps/RusturfTunnel/scripts.pory"
# 459 "data/maps/RusturfTunnel/scripts.pory"
# 812 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 813 "data/maps/RusturfTunnel/scripts.pory"
# 460 "data/maps/RusturfTunnel/scripts.pory"
# 814 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 815 "data/maps/RusturfTunnel/scripts.pory"
# 461 "data/maps/RusturfTunnel/scripts.pory"
# 816 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 817 "data/maps/RusturfTunnel/scripts.pory"
# 462 "data/maps/RusturfTunnel/scripts.pory"
# 818 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 819 "data/maps/RusturfTunnel/scripts.pory"
# 463 "data/maps/RusturfTunnel/scripts.pory"
# 820 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 821 "data/maps/RusturfTunnel/scripts.pory"

# 822 "data/maps/RusturfTunnel/scripts.pory"
# 466 "data/maps/RusturfTunnel/scripts.pory"
# 823 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 824 "data/maps/RusturfTunnel/scripts.pory"
# 467 "data/maps/RusturfTunnel/scripts.pory"
# 825 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 826 "data/maps/RusturfTunnel/scripts.pory"
# 468 "data/maps/RusturfTunnel/scripts.pory"
# 827 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 828 "data/maps/RusturfTunnel/scripts.pory"
# 469 "data/maps/RusturfTunnel/scripts.pory"
# 829 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 830 "data/maps/RusturfTunnel/scripts.pory"

# 831 "data/maps/RusturfTunnel/scripts.pory"
# 472 "data/maps/RusturfTunnel/scripts.pory"
# 832 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 833 "data/maps/RusturfTunnel/scripts.pory"
# 473 "data/maps/RusturfTunnel/scripts.pory"
# 834 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 835 "data/maps/RusturfTunnel/scripts.pory"
# 474 "data/maps/RusturfTunnel/scripts.pory"
# 836 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 837 "data/maps/RusturfTunnel/scripts.pory"
# 475 "data/maps/RusturfTunnel/scripts.pory"
# 838 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 839 "data/maps/RusturfTunnel/scripts.pory"
# 476 "data/maps/RusturfTunnel/scripts.pory"
# 840 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 841 "data/maps/RusturfTunnel/scripts.pory"
# 477 "data/maps/RusturfTunnel/scripts.pory"
# 842 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 843 "data/maps/RusturfTunnel/scripts.pory"
# 478 "data/maps/RusturfTunnel/scripts.pory"
# 844 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 845 "data/maps/RusturfTunnel/scripts.pory"
# 479 "data/maps/RusturfTunnel/scripts.pory"
# 846 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 847 "data/maps/RusturfTunnel/scripts.pory"
# 480 "data/maps/RusturfTunnel/scripts.pory"
# 848 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 849 "data/maps/RusturfTunnel/scripts.pory"
# 481 "data/maps/RusturfTunnel/scripts.pory"
# 850 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 851 "data/maps/RusturfTunnel/scripts.pory"
# 482 "data/maps/RusturfTunnel/scripts.pory"
# 852 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 853 "data/maps/RusturfTunnel/scripts.pory"

# 854 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 855 "data/maps/RusturfTunnel/scripts.pory"
# 486 "data/maps/RusturfTunnel/scripts.pory"
# 856 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 857 "data/maps/RusturfTunnel/scripts.pory"
# 487 "data/maps/RusturfTunnel/scripts.pory"
# 858 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 859 "data/maps/RusturfTunnel/scripts.pory"
	end
# 860 "data/maps/RusturfTunnel/scripts.pory"

# 861 "data/maps/RusturfTunnel/scripts.pory"

# 862 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome::
# 863 "data/maps/RusturfTunnel/scripts.pory"
# 491 "data/maps/RusturfTunnel/scripts.pory"
# 864 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
# 865 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come and get some, then!$"
# 866 "data/maps/RusturfTunnel/scripts.pory"

# 867 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko::
# 868 "data/maps/RusturfTunnel/scripts.pory"
# 496 "data/maps/RusturfTunnel/scripts.pory"
# 869 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pii pihyoh!$"
# 870 "data/maps/RusturfTunnel/scripts.pory"

# 871 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro::
# 872 "data/maps/RusturfTunnel/scripts.pory"
# 500 "data/maps/RusturfTunnel/scripts.pory"
# 873 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 874 "data/maps/RusturfTunnel/scripts.pory"
	.string "That hostage POKéMON turned out to\n"
# 875 "data/maps/RusturfTunnel/scripts.pory"
	.string "be worthless!\p"
# 876 "data/maps/RusturfTunnel/scripts.pory"
	.string "And to think I made a getaway…\n"
# 877 "data/maps/RusturfTunnel/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 878 "data/maps/RusturfTunnel/scripts.pory"
	.string "Hey! You!\n"
# 879 "data/maps/RusturfTunnel/scripts.pory"
	.string "So you want to battle me?$"
# 880 "data/maps/RusturfTunnel/scripts.pory"

# 881 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat::
# 882 "data/maps/RusturfTunnel/scripts.pory"
# 510 "data/maps/RusturfTunnel/scripts.pory"
# 883 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 884 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 885 "data/maps/RusturfTunnel/scripts.pory"

# 886 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage::
# 887 "data/maps/RusturfTunnel/scripts.pory"
# 515 "data/maps/RusturfTunnel/scripts.pory"
# 888 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 889 "data/maps/RusturfTunnel/scripts.pory"
	.string "The BOSS told me this would be a\n"
# 890 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 891 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 892 "data/maps/RusturfTunnel/scripts.pory"
	.string "from DEVON.\p"
# 893 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 894 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 895 "data/maps/RusturfTunnel/scripts.pory"

# 896 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe::
# 897 "data/maps/RusturfTunnel/scripts.pory"
# 525 "data/maps/RusturfTunnel/scripts.pory"
# 898 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO!\n"
# 899 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 900 "data/maps/RusturfTunnel/scripts.pory"

# 901 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko::
# 902 "data/maps/RusturfTunnel/scripts.pory"
# 530 "data/maps/RusturfTunnel/scripts.pory"
# 903 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO owes her life to you!\p"
# 904 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me MR. BRINEY.\n"
# 905 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 906 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 907 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 908 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 909 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 910 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 911 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 912 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 913 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea near PETALBURG WOODS.\p"
# 914 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, PEEKO, we should make our way\n"
# 915 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.\p"
# 916 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pihyoh!$"
# 917 "data/maps/RusturfTunnel/scripts.pory"

# 918 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging::
# 919 "data/maps/RusturfTunnel/scripts.pory"
# 547 "data/maps/RusturfTunnel/scripts.pory"
# 920 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 921 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 922 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 923 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in VERDANTURF\n"
# 924 "data/maps/RusturfTunnel/scripts.pory"
	.string "TOWN just beyond here…\p"
# 925 "data/maps/RusturfTunnel/scripts.pory"
	.string "If RUSTBORO and VERDANTURF were\n"
# 926 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 927 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 928 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 929 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 930 "data/maps/RusturfTunnel/scripts.pory"

# 931 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf::
# 932 "data/maps/RusturfTunnel/scripts.pory"
# 560 "data/maps/RusturfTunnel/scripts.pory"
# 933 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
# 934 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to DEWFORD, then pass\l"
# 935 "data/maps/RusturfTunnel/scripts.pory"
	.string "through SLATEPORT and MAUVILLE…$"
# 936 "data/maps/RusturfTunnel/scripts.pory"

# 937 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM::
# 938 "data/maps/RusturfTunnel/scripts.pory"
# 566 "data/maps/RusturfTunnel/scripts.pory"
# 939 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 940 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 941 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 942 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 943 "data/maps/RusturfTunnel/scripts.pory"

# 944 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength::
# 945 "data/maps/RusturfTunnel/scripts.pory"
# 573 "data/maps/RusturfTunnel/scripts.pory"
# 946 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains STRENGTH.\p"
# 947 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular POKéMON were to learn\n"
# 948 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 949 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 950 "data/maps/RusturfTunnel/scripts.pory"

# 951 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion::
# 952 "data/maps/RusturfTunnel/scripts.pory"
# 580 "data/maps/RusturfTunnel/scripts.pory"
# 953 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA!\n"
# 954 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 955 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA: That's…wonderful.\p"
# 956 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 957 "data/maps/RusturfTunnel/scripts.pory"

# 958 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock::
# 959 "data/maps/RusturfTunnel/scripts.pory"
# 587 "data/maps/RusturfTunnel/scripts.pory"
# 960 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 961 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 962 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 963 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 964 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 965 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"
# 966 "data/maps/RusturfTunnel/scripts.pory"

# 967 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro::
# 968 "data/maps/RusturfTunnel/scripts.pory"
# 596 "data/maps/RusturfTunnel/scripts.pory"
# 969 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 970 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 971 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a POKéMON in\n"
# 972 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain POKéMON?$"
# 973 "data/maps/RusturfTunnel/scripts.pory"

# 974 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat::
# 975 "data/maps/RusturfTunnel/scripts.pory"
# 603 "data/maps/RusturfTunnel/scripts.pory"
# 976 "data/maps/RusturfTunnel/scripts.pory"
	.string "My POKéMON…\n"
# 977 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 978 "data/maps/RusturfTunnel/scripts.pory"

# 979 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle::
# 980 "data/maps/RusturfTunnel/scripts.pory"
# 608 "data/maps/RusturfTunnel/scripts.pory"
# 981 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 982 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect POKéMON, right?\l"
# 983 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"
