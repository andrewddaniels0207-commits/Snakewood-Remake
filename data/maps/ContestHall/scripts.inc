# 1 "data/maps/ContestHall/scripts.pory"

# 2 "data/maps/ContestHall/scripts.pory"
ContestHall_MapScripts::
# 3 "data/maps/ContestHall/scripts.pory"
# 2 "data/maps/ContestHall/scripts.pory"
# 4 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ContestHall_OnWarp
# 5 "data/maps/ContestHall/scripts.pory"
# 6 "data/maps/ContestHall/scripts.pory"
# 6 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ContestHall_OnTransition
# 7 "data/maps/ContestHall/scripts.pory"
# 7 "data/maps/ContestHall/scripts.pory"
# 8 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ContestHall_OnResume
# 9 "data/maps/ContestHall/scripts.pory"
# 8 "data/maps/ContestHall/scripts.pory"
# 10 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, ContestHall_OnReturn
# 11 "data/maps/ContestHall/scripts.pory"
# 3 "data/maps/ContestHall/scripts.pory"
# 12 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 13 "data/maps/ContestHall/scripts.pory"
	.byte 0
# 14 "data/maps/ContestHall/scripts.pory"

# 15 "data/maps/ContestHall/scripts.pory"
ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/ContestHall/scripts.pory"
# 4 "data/maps/ContestHall/scripts.pory"
# 17 "data/maps/ContestHall/scripts.pory"
	map_script_2 VAR_CONTEST_HALL_STATE, 1, ContestHall_EventScript_Contest
# 18 "data/maps/ContestHall/scripts.pory"
	.2byte 0
# 19 "data/maps/ContestHall/scripts.pory"

# 20 "data/maps/ContestHall/scripts.pory"

# 21 "data/maps/ContestHall/scripts.pory"
ContestHall_OnReturn::
# 22 "data/maps/ContestHall/scripts.pory"
# 12 "data/maps/ContestHall/scripts.pory"
# 23 "data/maps/ContestHall/scripts.pory"
	special LoadLinkContestPlayerPalettes
# 24 "data/maps/ContestHall/scripts.pory"
	end
# 25 "data/maps/ContestHall/scripts.pory"

# 26 "data/maps/ContestHall/scripts.pory"

# 27 "data/maps/ContestHall/scripts.pory"
ContestHall_OnTransition::
# 28 "data/maps/ContestHall/scripts.pory"
# 17 "data/maps/ContestHall/scripts.pory"
# 29 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_ReadyContestMusic
# 30 "data/maps/ContestHall/scripts.pory"
# 18 "data/maps/ContestHall/scripts.pory"
# 31 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_0, 1
# 32 "data/maps/ContestHall/scripts.pory"
# 19 "data/maps/ContestHall/scripts.pory"
# 33 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_AddRandomAudienceMembers
# 34 "data/maps/ContestHall/scripts.pory"
	end
# 35 "data/maps/ContestHall/scripts.pory"

# 36 "data/maps/ContestHall/scripts.pory"

# 37 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic::
# 38 "data/maps/ContestHall/scripts.pory"
# 24 "data/maps/ContestHall/scripts.pory"
# 39 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_TryWaitForLink
# 40 "data/maps/ContestHall/scripts.pory"
# 25 "data/maps/ContestHall/scripts.pory"
# 41 "data/maps/ContestHall/scripts.pory"
	special GetContestMultiplayerId
# 42 "data/maps/ContestHall/scripts.pory"
# 26 "data/maps/ContestHall/scripts.pory"
# 43 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, 0
# 44 "data/maps/ContestHall/scripts.pory"
	goto_if_eq ContestHall_EventScript_ReadyContestMusic_2
# 45 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic_1:
# 46 "data/maps/ContestHall/scripts.pory"
# 29 "data/maps/ContestHall/scripts.pory"
# 47 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, 1
# 48 "data/maps/ContestHall/scripts.pory"
	goto_if_eq ContestHall_EventScript_ReadyContestMusic_5
# 49 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic_4:
# 50 "data/maps/ContestHall/scripts.pory"
# 32 "data/maps/ContestHall/scripts.pory"
# 51 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, 2
# 52 "data/maps/ContestHall/scripts.pory"
	goto_if_eq ContestHall_EventScript_ReadyContestMusic_8
# 53 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic_7:
# 54 "data/maps/ContestHall/scripts.pory"
# 35 "data/maps/ContestHall/scripts.pory"
# 55 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, 3
# 56 "data/maps/ContestHall/scripts.pory"
	goto_if_eq ContestHall_EventScript_ReadyContestMusic_11
# 57 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic_10:
# 58 "data/maps/ContestHall/scripts.pory"
# 38 "data/maps/ContestHall/scripts.pory"
# 59 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, 4
# 60 "data/maps/ContestHall/scripts.pory"
	goto_if_eq ContestHall_EventScript_ReadyContestMusic_14
# 61 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic_13:
# 62 "data/maps/ContestHall/scripts.pory"
	return
# 63 "data/maps/ContestHall/scripts.pory"

# 64 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic_2:
# 65 "data/maps/ContestHall/scripts.pory"
# 27 "data/maps/ContestHall/scripts.pory"
# 66 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SaveContestMusicPlayer1
# 67 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_ReadyContestMusic_1
# 68 "data/maps/ContestHall/scripts.pory"

# 69 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic_5:
# 70 "data/maps/ContestHall/scripts.pory"
# 30 "data/maps/ContestHall/scripts.pory"
# 71 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SaveContestMusicPlayer2
# 72 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_ReadyContestMusic_4
# 73 "data/maps/ContestHall/scripts.pory"

# 74 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic_8:
# 75 "data/maps/ContestHall/scripts.pory"
# 33 "data/maps/ContestHall/scripts.pory"
# 76 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SaveContestMusicPlayer3
# 77 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_ReadyContestMusic_7
# 78 "data/maps/ContestHall/scripts.pory"

# 79 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic_11:
# 80 "data/maps/ContestHall/scripts.pory"
# 36 "data/maps/ContestHall/scripts.pory"
# 81 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SaveContestMusicPlayer4
# 82 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_ReadyContestMusic_10
# 83 "data/maps/ContestHall/scripts.pory"

# 84 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic_14:
# 85 "data/maps/ContestHall/scripts.pory"
# 39 "data/maps/ContestHall/scripts.pory"
# 86 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SaveContestMusic
# 87 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_ReadyContestMusic_13
# 88 "data/maps/ContestHall/scripts.pory"

# 89 "data/maps/ContestHall/scripts.pory"

# 90 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SaveContestMusicPlayer1::
# 91 "data/maps/ContestHall/scripts.pory"
# 45 "data/maps/ContestHall/scripts.pory"
# 92 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P1
# 93 "data/maps/ContestHall/scripts.pory"
	return
# 94 "data/maps/ContestHall/scripts.pory"

# 95 "data/maps/ContestHall/scripts.pory"

# 96 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SaveContestMusicPlayer2::
# 97 "data/maps/ContestHall/scripts.pory"
# 50 "data/maps/ContestHall/scripts.pory"
# 98 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P2
# 99 "data/maps/ContestHall/scripts.pory"
	return
# 100 "data/maps/ContestHall/scripts.pory"

# 101 "data/maps/ContestHall/scripts.pory"

# 102 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SaveContestMusicPlayer3::
# 103 "data/maps/ContestHall/scripts.pory"
# 55 "data/maps/ContestHall/scripts.pory"
# 104 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P3
# 105 "data/maps/ContestHall/scripts.pory"
	return
# 106 "data/maps/ContestHall/scripts.pory"

# 107 "data/maps/ContestHall/scripts.pory"

# 108 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SaveContestMusicPlayer4::
# 109 "data/maps/ContestHall/scripts.pory"
# 60 "data/maps/ContestHall/scripts.pory"
# 110 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P4
# 111 "data/maps/ContestHall/scripts.pory"
	return
# 112 "data/maps/ContestHall/scripts.pory"

# 113 "data/maps/ContestHall/scripts.pory"

# 114 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SaveContestMusic::
# 115 "data/maps/ContestHall/scripts.pory"
# 65 "data/maps/ContestHall/scripts.pory"
# 116 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_CONTEST
# 117 "data/maps/ContestHall/scripts.pory"
	return
# 118 "data/maps/ContestHall/scripts.pory"

# 119 "data/maps/ContestHall/scripts.pory"

# 120 "data/maps/ContestHall/scripts.pory"
ContestHall_OnResume::
# 121 "data/maps/ContestHall/scripts.pory"
# 70 "data/maps/ContestHall/scripts.pory"
# 122 "data/maps/ContestHall/scripts.pory"
	compare VAR_TEMP_9, 1
# 123 "data/maps/ContestHall/scripts.pory"
	goto_if_eq ContestHall_OnResume_2
# 124 "data/maps/ContestHall/scripts.pory"
ContestHall_OnResume_1:
# 125 "data/maps/ContestHall/scripts.pory"
	end
# 126 "data/maps/ContestHall/scripts.pory"

# 127 "data/maps/ContestHall/scripts.pory"
ContestHall_OnResume_2:
# 128 "data/maps/ContestHall/scripts.pory"
# 71 "data/maps/ContestHall/scripts.pory"
# 129 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_ReShowAudience
# 130 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_OnResume_1
# 131 "data/maps/ContestHall/scripts.pory"

# 132 "data/maps/ContestHall/scripts.pory"

# 133 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReShowAudience::
# 134 "data/maps/ContestHall/scripts.pory"
# 77 "data/maps/ContestHall/scripts.pory"
# 135 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_CreateAudience
# 136 "data/maps/ContestHall/scripts.pory"
	return
# 137 "data/maps/ContestHall/scripts.pory"

# 138 "data/maps/ContestHall/scripts.pory"

# 139 "data/maps/ContestHall/scripts.pory"
# 81 "data/maps/ContestHall/scripts.pory"
# 140 "data/maps/ContestHall/scripts.pory"

# 141 "data/maps/ContestHall/scripts.pory"
# 82 "data/maps/ContestHall/scripts.pory"
# 142 "data/maps/ContestHall/scripts.pory"
ContestHall_OnWarp:
# 143 "data/maps/ContestHall/scripts.pory"
# 83 "data/maps/ContestHall/scripts.pory"
# 144 "data/maps/ContestHall/scripts.pory"
	map_script_2 VAR_CONTEST_HALL_STATE, 1, ContestHall_EventScript_SetContestObjects
# 145 "data/maps/ContestHall/scripts.pory"
# 84 "data/maps/ContestHall/scripts.pory"
# 146 "data/maps/ContestHall/scripts.pory"
	.2byte 0
# 147 "data/maps/ContestHall/scripts.pory"

# 148 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_Contest::
# 149 "data/maps/ContestHall/scripts.pory"
# 89 "data/maps/ContestHall/scripts.pory"
# 150 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_DoContest
# 151 "data/maps/ContestHall/scripts.pory"
# 90 "data/maps/ContestHall/scripts.pory"
# 152 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SetExitWarp
# 153 "data/maps/ContestHall/scripts.pory"
	end
# 154 "data/maps/ContestHall/scripts.pory"

# 155 "data/maps/ContestHall/scripts.pory"

# 156 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetContestObjects::
# 157 "data/maps/ContestHall/scripts.pory"
# 95 "data/maps/ContestHall/scripts.pory"
# 158 "data/maps/ContestHall/scripts.pory"
	special LoadLinkContestPlayerPalettes
# 159 "data/maps/ContestHall/scripts.pory"
# 96 "data/maps/ContestHall/scripts.pory"
# 160 "data/maps/ContestHall/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 161 "data/maps/ContestHall/scripts.pory"
# 97 "data/maps/ContestHall/scripts.pory"
# 162 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_CreateAudience
# 163 "data/maps/ContestHall/scripts.pory"
	end
# 164 "data/maps/ContestHall/scripts.pory"

# 165 "data/maps/ContestHall/scripts.pory"

# 166 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_AddRandomAudienceMembers::
# 167 "data/maps/ContestHall/scripts.pory"
# 102 "data/maps/ContestHall/scripts.pory"
# 168 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_GetRandomAudienceGfxId
# 169 "data/maps/ContestHall/scripts.pory"
# 103 "data/maps/ContestHall/scripts.pory"
# 170 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SetRandomAudienceGfx
# 171 "data/maps/ContestHall/scripts.pory"
# 104 "data/maps/ContestHall/scripts.pory"
# 172 "data/maps/ContestHall/scripts.pory"
	compare VAR_TEMP_0, 8
# 173 "data/maps/ContestHall/scripts.pory"
	goto_if_lt ContestHall_EventScript_AddRandomAudienceMembers_2
# 174 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_AddRandomAudienceMembers_1:
# 175 "data/maps/ContestHall/scripts.pory"
	return
# 176 "data/maps/ContestHall/scripts.pory"

# 177 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_AddRandomAudienceMembers_2:
# 178 "data/maps/ContestHall/scripts.pory"
# 105 "data/maps/ContestHall/scripts.pory"
# 179 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_AddRandomAudienceMembers
# 180 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_AddRandomAudienceMembers_1
# 181 "data/maps/ContestHall/scripts.pory"

# 182 "data/maps/ContestHall/scripts.pory"

# 183 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudienceGfx::
# 184 "data/maps/ContestHall/scripts.pory"
# 111 "data/maps/ContestHall/scripts.pory"
# 185 "data/maps/ContestHall/scripts.pory"
	switch VAR_TEMP_0
# 186 "data/maps/ContestHall/scripts.pory"
# 112 "data/maps/ContestHall/scripts.pory"
# 187 "data/maps/ContestHall/scripts.pory"
	case 1, ContestHall_EventScript_SetRandomAudienceGfx_3
# 188 "data/maps/ContestHall/scripts.pory"
# 114 "data/maps/ContestHall/scripts.pory"
# 189 "data/maps/ContestHall/scripts.pory"
	case 2, ContestHall_EventScript_SetRandomAudienceGfx_4
# 190 "data/maps/ContestHall/scripts.pory"
# 116 "data/maps/ContestHall/scripts.pory"
# 191 "data/maps/ContestHall/scripts.pory"
	case 3, ContestHall_EventScript_SetRandomAudienceGfx_5
# 192 "data/maps/ContestHall/scripts.pory"
# 118 "data/maps/ContestHall/scripts.pory"
# 193 "data/maps/ContestHall/scripts.pory"
	case 4, ContestHall_EventScript_SetRandomAudienceGfx_6
# 194 "data/maps/ContestHall/scripts.pory"
# 120 "data/maps/ContestHall/scripts.pory"
# 195 "data/maps/ContestHall/scripts.pory"
	case 5, ContestHall_EventScript_SetRandomAudienceGfx_7
# 196 "data/maps/ContestHall/scripts.pory"
# 122 "data/maps/ContestHall/scripts.pory"
# 197 "data/maps/ContestHall/scripts.pory"
	case 6, ContestHall_EventScript_SetRandomAudienceGfx_8
# 198 "data/maps/ContestHall/scripts.pory"
# 124 "data/maps/ContestHall/scripts.pory"
# 199 "data/maps/ContestHall/scripts.pory"
	case 7, ContestHall_EventScript_SetRandomAudienceGfx_9
# 200 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudienceGfx_1:
# 201 "data/maps/ContestHall/scripts.pory"
	end
# 202 "data/maps/ContestHall/scripts.pory"

# 203 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudienceGfx_3:
# 204 "data/maps/ContestHall/scripts.pory"
# 113 "data/maps/ContestHall/scripts.pory"
# 205 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience1
# 206 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudienceGfx_1
# 207 "data/maps/ContestHall/scripts.pory"

# 208 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudienceGfx_4:
# 209 "data/maps/ContestHall/scripts.pory"
# 115 "data/maps/ContestHall/scripts.pory"
# 210 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience2
# 211 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudienceGfx_1
# 212 "data/maps/ContestHall/scripts.pory"

# 213 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudienceGfx_5:
# 214 "data/maps/ContestHall/scripts.pory"
# 117 "data/maps/ContestHall/scripts.pory"
# 215 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience3
# 216 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudienceGfx_1
# 217 "data/maps/ContestHall/scripts.pory"

# 218 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudienceGfx_6:
# 219 "data/maps/ContestHall/scripts.pory"
# 119 "data/maps/ContestHall/scripts.pory"
# 220 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience4
# 221 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudienceGfx_1
# 222 "data/maps/ContestHall/scripts.pory"

# 223 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudienceGfx_7:
# 224 "data/maps/ContestHall/scripts.pory"
# 121 "data/maps/ContestHall/scripts.pory"
# 225 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience5
# 226 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudienceGfx_1
# 227 "data/maps/ContestHall/scripts.pory"

# 228 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudienceGfx_8:
# 229 "data/maps/ContestHall/scripts.pory"
# 123 "data/maps/ContestHall/scripts.pory"
# 230 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience6
# 231 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudienceGfx_1
# 232 "data/maps/ContestHall/scripts.pory"

# 233 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudienceGfx_9:
# 234 "data/maps/ContestHall/scripts.pory"
# 125 "data/maps/ContestHall/scripts.pory"
# 235 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience7
# 236 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudienceGfx_1
# 237 "data/maps/ContestHall/scripts.pory"

# 238 "data/maps/ContestHall/scripts.pory"

# 239 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience1::
# 240 "data/maps/ContestHall/scripts.pory"
# 131 "data/maps/ContestHall/scripts.pory"
# 241 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_4, VAR_TEMP_1
# 242 "data/maps/ContestHall/scripts.pory"
# 132 "data/maps/ContestHall/scripts.pory"
# 243 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 244 "data/maps/ContestHall/scripts.pory"
	return
# 245 "data/maps/ContestHall/scripts.pory"

# 246 "data/maps/ContestHall/scripts.pory"

# 247 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience2::
# 248 "data/maps/ContestHall/scripts.pory"
# 137 "data/maps/ContestHall/scripts.pory"
# 249 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_5, VAR_TEMP_1
# 250 "data/maps/ContestHall/scripts.pory"
# 138 "data/maps/ContestHall/scripts.pory"
# 251 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 252 "data/maps/ContestHall/scripts.pory"
	return
# 253 "data/maps/ContestHall/scripts.pory"

# 254 "data/maps/ContestHall/scripts.pory"

# 255 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience3::
# 256 "data/maps/ContestHall/scripts.pory"
# 143 "data/maps/ContestHall/scripts.pory"
# 257 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_6, VAR_TEMP_1
# 258 "data/maps/ContestHall/scripts.pory"
# 144 "data/maps/ContestHall/scripts.pory"
# 259 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 260 "data/maps/ContestHall/scripts.pory"
	return
# 261 "data/maps/ContestHall/scripts.pory"

# 262 "data/maps/ContestHall/scripts.pory"

# 263 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience4::
# 264 "data/maps/ContestHall/scripts.pory"
# 149 "data/maps/ContestHall/scripts.pory"
# 265 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_7, VAR_TEMP_1
# 266 "data/maps/ContestHall/scripts.pory"
# 150 "data/maps/ContestHall/scripts.pory"
# 267 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 268 "data/maps/ContestHall/scripts.pory"
	return
# 269 "data/maps/ContestHall/scripts.pory"

# 270 "data/maps/ContestHall/scripts.pory"

# 271 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience5::
# 272 "data/maps/ContestHall/scripts.pory"
# 155 "data/maps/ContestHall/scripts.pory"
# 273 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_8, VAR_TEMP_1
# 274 "data/maps/ContestHall/scripts.pory"
# 156 "data/maps/ContestHall/scripts.pory"
# 275 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 276 "data/maps/ContestHall/scripts.pory"
	return
# 277 "data/maps/ContestHall/scripts.pory"

# 278 "data/maps/ContestHall/scripts.pory"

# 279 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience6::
# 280 "data/maps/ContestHall/scripts.pory"
# 161 "data/maps/ContestHall/scripts.pory"
# 281 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_9, VAR_TEMP_1
# 282 "data/maps/ContestHall/scripts.pory"
# 162 "data/maps/ContestHall/scripts.pory"
# 283 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 284 "data/maps/ContestHall/scripts.pory"
	return
# 285 "data/maps/ContestHall/scripts.pory"

# 286 "data/maps/ContestHall/scripts.pory"

# 287 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience7::
# 288 "data/maps/ContestHall/scripts.pory"
# 167 "data/maps/ContestHall/scripts.pory"
# 289 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_A, VAR_TEMP_1
# 290 "data/maps/ContestHall/scripts.pory"
# 168 "data/maps/ContestHall/scripts.pory"
# 291 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 292 "data/maps/ContestHall/scripts.pory"
	return
# 293 "data/maps/ContestHall/scripts.pory"

# 294 "data/maps/ContestHall/scripts.pory"

# 295 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId::
# 296 "data/maps/ContestHall/scripts.pory"
# 173 "data/maps/ContestHall/scripts.pory"
# 297 "data/maps/ContestHall/scripts.pory"
	setvar VAR_RESULT, 32
# 298 "data/maps/ContestHall/scripts.pory"
# 174 "data/maps/ContestHall/scripts.pory"
# 299 "data/maps/ContestHall/scripts.pory"
	special GenerateContestRand
# 300 "data/maps/ContestHall/scripts.pory"
# 175 "data/maps/ContestHall/scripts.pory"
# 301 "data/maps/ContestHall/scripts.pory"
	addvar VAR_RESULT, 1
# 302 "data/maps/ContestHall/scripts.pory"
# 176 "data/maps/ContestHall/scripts.pory"
# 303 "data/maps/ContestHall/scripts.pory"
	switch VAR_RESULT
# 304 "data/maps/ContestHall/scripts.pory"
# 177 "data/maps/ContestHall/scripts.pory"
# 305 "data/maps/ContestHall/scripts.pory"
	case 1, ContestHall_EventScript_GetRandomAudienceGfxId_3
# 306 "data/maps/ContestHall/scripts.pory"
# 179 "data/maps/ContestHall/scripts.pory"
# 307 "data/maps/ContestHall/scripts.pory"
	case 2, ContestHall_EventScript_GetRandomAudienceGfxId_4
# 308 "data/maps/ContestHall/scripts.pory"
# 181 "data/maps/ContestHall/scripts.pory"
# 309 "data/maps/ContestHall/scripts.pory"
	case 3, ContestHall_EventScript_GetRandomAudienceGfxId_5
# 310 "data/maps/ContestHall/scripts.pory"
# 183 "data/maps/ContestHall/scripts.pory"
# 311 "data/maps/ContestHall/scripts.pory"
	case 4, ContestHall_EventScript_GetRandomAudienceGfxId_6
# 312 "data/maps/ContestHall/scripts.pory"
# 185 "data/maps/ContestHall/scripts.pory"
# 313 "data/maps/ContestHall/scripts.pory"
	case 5, ContestHall_EventScript_GetRandomAudienceGfxId_7
# 314 "data/maps/ContestHall/scripts.pory"
# 187 "data/maps/ContestHall/scripts.pory"
# 315 "data/maps/ContestHall/scripts.pory"
	case 6, ContestHall_EventScript_GetRandomAudienceGfxId_8
# 316 "data/maps/ContestHall/scripts.pory"
# 189 "data/maps/ContestHall/scripts.pory"
# 317 "data/maps/ContestHall/scripts.pory"
	case 7, ContestHall_EventScript_GetRandomAudienceGfxId_9
# 318 "data/maps/ContestHall/scripts.pory"
# 191 "data/maps/ContestHall/scripts.pory"
# 319 "data/maps/ContestHall/scripts.pory"
	case 8, ContestHall_EventScript_GetRandomAudienceGfxId_10
# 320 "data/maps/ContestHall/scripts.pory"
# 193 "data/maps/ContestHall/scripts.pory"
# 321 "data/maps/ContestHall/scripts.pory"
	case 9, ContestHall_EventScript_GetRandomAudienceGfxId_11
# 322 "data/maps/ContestHall/scripts.pory"
# 195 "data/maps/ContestHall/scripts.pory"
# 323 "data/maps/ContestHall/scripts.pory"
	case 10, ContestHall_EventScript_GetRandomAudienceGfxId_12
# 324 "data/maps/ContestHall/scripts.pory"
# 197 "data/maps/ContestHall/scripts.pory"
# 325 "data/maps/ContestHall/scripts.pory"
	case 11, ContestHall_EventScript_GetRandomAudienceGfxId_13
# 326 "data/maps/ContestHall/scripts.pory"
# 199 "data/maps/ContestHall/scripts.pory"
# 327 "data/maps/ContestHall/scripts.pory"
	case 12, ContestHall_EventScript_GetRandomAudienceGfxId_14
# 328 "data/maps/ContestHall/scripts.pory"
# 201 "data/maps/ContestHall/scripts.pory"
# 329 "data/maps/ContestHall/scripts.pory"
	case 13, ContestHall_EventScript_GetRandomAudienceGfxId_15
# 330 "data/maps/ContestHall/scripts.pory"
# 203 "data/maps/ContestHall/scripts.pory"
# 331 "data/maps/ContestHall/scripts.pory"
	case 14, ContestHall_EventScript_GetRandomAudienceGfxId_16
# 332 "data/maps/ContestHall/scripts.pory"
# 205 "data/maps/ContestHall/scripts.pory"
# 333 "data/maps/ContestHall/scripts.pory"
	case 15, ContestHall_EventScript_GetRandomAudienceGfxId_17
# 334 "data/maps/ContestHall/scripts.pory"
# 207 "data/maps/ContestHall/scripts.pory"
# 335 "data/maps/ContestHall/scripts.pory"
	case 16, ContestHall_EventScript_GetRandomAudienceGfxId_18
# 336 "data/maps/ContestHall/scripts.pory"
# 209 "data/maps/ContestHall/scripts.pory"
# 337 "data/maps/ContestHall/scripts.pory"
	case 17, ContestHall_EventScript_GetRandomAudienceGfxId_19
# 338 "data/maps/ContestHall/scripts.pory"
# 211 "data/maps/ContestHall/scripts.pory"
# 339 "data/maps/ContestHall/scripts.pory"
	case 18, ContestHall_EventScript_GetRandomAudienceGfxId_20
# 340 "data/maps/ContestHall/scripts.pory"
# 213 "data/maps/ContestHall/scripts.pory"
# 341 "data/maps/ContestHall/scripts.pory"
	case 19, ContestHall_EventScript_GetRandomAudienceGfxId_21
# 342 "data/maps/ContestHall/scripts.pory"
# 215 "data/maps/ContestHall/scripts.pory"
# 343 "data/maps/ContestHall/scripts.pory"
	case 20, ContestHall_EventScript_GetRandomAudienceGfxId_22
# 344 "data/maps/ContestHall/scripts.pory"
# 217 "data/maps/ContestHall/scripts.pory"
# 345 "data/maps/ContestHall/scripts.pory"
	case 21, ContestHall_EventScript_GetRandomAudienceGfxId_23
# 346 "data/maps/ContestHall/scripts.pory"
# 219 "data/maps/ContestHall/scripts.pory"
# 347 "data/maps/ContestHall/scripts.pory"
	case 22, ContestHall_EventScript_GetRandomAudienceGfxId_24
# 348 "data/maps/ContestHall/scripts.pory"
# 221 "data/maps/ContestHall/scripts.pory"
# 349 "data/maps/ContestHall/scripts.pory"
	case 23, ContestHall_EventScript_GetRandomAudienceGfxId_25
# 350 "data/maps/ContestHall/scripts.pory"
# 223 "data/maps/ContestHall/scripts.pory"
# 351 "data/maps/ContestHall/scripts.pory"
	case 24, ContestHall_EventScript_GetRandomAudienceGfxId_26
# 352 "data/maps/ContestHall/scripts.pory"
# 225 "data/maps/ContestHall/scripts.pory"
# 353 "data/maps/ContestHall/scripts.pory"
	case 25, ContestHall_EventScript_GetRandomAudienceGfxId_27
# 354 "data/maps/ContestHall/scripts.pory"
# 227 "data/maps/ContestHall/scripts.pory"
# 355 "data/maps/ContestHall/scripts.pory"
	case 26, ContestHall_EventScript_GetRandomAudienceGfxId_28
# 356 "data/maps/ContestHall/scripts.pory"
# 229 "data/maps/ContestHall/scripts.pory"
# 357 "data/maps/ContestHall/scripts.pory"
	case 27, ContestHall_EventScript_GetRandomAudienceGfxId_29
# 358 "data/maps/ContestHall/scripts.pory"
# 231 "data/maps/ContestHall/scripts.pory"
# 359 "data/maps/ContestHall/scripts.pory"
	case 28, ContestHall_EventScript_GetRandomAudienceGfxId_30
# 360 "data/maps/ContestHall/scripts.pory"
# 233 "data/maps/ContestHall/scripts.pory"
# 361 "data/maps/ContestHall/scripts.pory"
	case 29, ContestHall_EventScript_GetRandomAudienceGfxId_31
# 362 "data/maps/ContestHall/scripts.pory"
# 235 "data/maps/ContestHall/scripts.pory"
# 363 "data/maps/ContestHall/scripts.pory"
	case 30, ContestHall_EventScript_GetRandomAudienceGfxId_32
# 364 "data/maps/ContestHall/scripts.pory"
# 237 "data/maps/ContestHall/scripts.pory"
# 365 "data/maps/ContestHall/scripts.pory"
	case 31, ContestHall_EventScript_GetRandomAudienceGfxId_33
# 366 "data/maps/ContestHall/scripts.pory"
# 239 "data/maps/ContestHall/scripts.pory"
# 367 "data/maps/ContestHall/scripts.pory"
	case 32, ContestHall_EventScript_GetRandomAudienceGfxId_34
# 368 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_1:
# 369 "data/maps/ContestHall/scripts.pory"
	end
# 370 "data/maps/ContestHall/scripts.pory"

# 371 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_3:
# 372 "data/maps/ContestHall/scripts.pory"
# 178 "data/maps/ContestHall/scripts.pory"
# 373 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceNinjaBoy
# 374 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 375 "data/maps/ContestHall/scripts.pory"

# 376 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_4:
# 377 "data/maps/ContestHall/scripts.pory"
# 180 "data/maps/ContestHall/scripts.pory"
# 378 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceTwin
# 379 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 380 "data/maps/ContestHall/scripts.pory"

# 381 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_5:
# 382 "data/maps/ContestHall/scripts.pory"
# 182 "data/maps/ContestHall/scripts.pory"
# 383 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceBoy1
# 384 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 385 "data/maps/ContestHall/scripts.pory"

# 386 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_6:
# 387 "data/maps/ContestHall/scripts.pory"
# 184 "data/maps/ContestHall/scripts.pory"
# 388 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceGirl1
# 389 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 390 "data/maps/ContestHall/scripts.pory"

# 391 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_7:
# 392 "data/maps/ContestHall/scripts.pory"
# 186 "data/maps/ContestHall/scripts.pory"
# 393 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceGirl2
# 394 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 395 "data/maps/ContestHall/scripts.pory"

# 396 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_8:
# 397 "data/maps/ContestHall/scripts.pory"
# 188 "data/maps/ContestHall/scripts.pory"
# 398 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceLittleBoy
# 399 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 400 "data/maps/ContestHall/scripts.pory"

# 401 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_9:
# 402 "data/maps/ContestHall/scripts.pory"
# 190 "data/maps/ContestHall/scripts.pory"
# 403 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceGirl
# 404 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 405 "data/maps/ContestHall/scripts.pory"

# 406 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_10:
# 407 "data/maps/ContestHall/scripts.pory"
# 192 "data/maps/ContestHall/scripts.pory"
# 408 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceBoy3
# 409 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 410 "data/maps/ContestHall/scripts.pory"

# 411 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_11:
# 412 "data/maps/ContestHall/scripts.pory"
# 194 "data/maps/ContestHall/scripts.pory"
# 413 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceGirl3
# 414 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 415 "data/maps/ContestHall/scripts.pory"

# 416 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_12:
# 417 "data/maps/ContestHall/scripts.pory"
# 196 "data/maps/ContestHall/scripts.pory"
# 418 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceRichBoy
# 419 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 420 "data/maps/ContestHall/scripts.pory"

# 421 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_13:
# 422 "data/maps/ContestHall/scripts.pory"
# 198 "data/maps/ContestHall/scripts.pory"
# 423 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceFatMan
# 424 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 425 "data/maps/ContestHall/scripts.pory"

# 426 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_14:
# 427 "data/maps/ContestHall/scripts.pory"
# 200 "data/maps/ContestHall/scripts.pory"
# 428 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudiencePokefanF
# 429 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 430 "data/maps/ContestHall/scripts.pory"

# 431 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_15:
# 432 "data/maps/ContestHall/scripts.pory"
# 202 "data/maps/ContestHall/scripts.pory"
# 433 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceMan1
# 434 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 435 "data/maps/ContestHall/scripts.pory"

# 436 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_16:
# 437 "data/maps/ContestHall/scripts.pory"
# 204 "data/maps/ContestHall/scripts.pory"
# 438 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceWoman2
# 439 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 440 "data/maps/ContestHall/scripts.pory"

# 441 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_17:
# 442 "data/maps/ContestHall/scripts.pory"
# 206 "data/maps/ContestHall/scripts.pory"
# 443 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceExpertM
# 444 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 445 "data/maps/ContestHall/scripts.pory"

# 446 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_18:
# 447 "data/maps/ContestHall/scripts.pory"
# 208 "data/maps/ContestHall/scripts.pory"
# 448 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceExpertF
# 449 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 450 "data/maps/ContestHall/scripts.pory"

# 451 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_19:
# 452 "data/maps/ContestHall/scripts.pory"
# 210 "data/maps/ContestHall/scripts.pory"
# 453 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudiencePokefanM
# 454 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 455 "data/maps/ContestHall/scripts.pory"

# 456 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_20:
# 457 "data/maps/ContestHall/scripts.pory"
# 212 "data/maps/ContestHall/scripts.pory"
# 458 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceWoman4
# 459 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 460 "data/maps/ContestHall/scripts.pory"

# 461 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_21:
# 462 "data/maps/ContestHall/scripts.pory"
# 214 "data/maps/ContestHall/scripts.pory"
# 463 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceCook
# 464 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 465 "data/maps/ContestHall/scripts.pory"

# 466 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_22:
# 467 "data/maps/ContestHall/scripts.pory"
# 216 "data/maps/ContestHall/scripts.pory"
# 468 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceLass
# 469 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 470 "data/maps/ContestHall/scripts.pory"

# 471 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_23:
# 472 "data/maps/ContestHall/scripts.pory"
# 218 "data/maps/ContestHall/scripts.pory"
# 473 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceOldWoman
# 474 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 475 "data/maps/ContestHall/scripts.pory"

# 476 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_24:
# 477 "data/maps/ContestHall/scripts.pory"
# 220 "data/maps/ContestHall/scripts.pory"
# 478 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceCamper
# 479 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 480 "data/maps/ContestHall/scripts.pory"

# 481 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_25:
# 482 "data/maps/ContestHall/scripts.pory"
# 222 "data/maps/ContestHall/scripts.pory"
# 483 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudiencePicnicker
# 484 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 485 "data/maps/ContestHall/scripts.pory"

# 486 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_26:
# 487 "data/maps/ContestHall/scripts.pory"
# 224 "data/maps/ContestHall/scripts.pory"
# 488 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceMan3
# 489 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 490 "data/maps/ContestHall/scripts.pory"

# 491 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_27:
# 492 "data/maps/ContestHall/scripts.pory"
# 226 "data/maps/ContestHall/scripts.pory"
# 493 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceWoman5
# 494 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 495 "data/maps/ContestHall/scripts.pory"

# 496 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_28:
# 497 "data/maps/ContestHall/scripts.pory"
# 228 "data/maps/ContestHall/scripts.pory"
# 498 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceYoungster
# 499 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 500 "data/maps/ContestHall/scripts.pory"

# 501 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_29:
# 502 "data/maps/ContestHall/scripts.pory"
# 230 "data/maps/ContestHall/scripts.pory"
# 503 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceBugCatcher
# 504 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 505 "data/maps/ContestHall/scripts.pory"

# 506 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_30:
# 507 "data/maps/ContestHall/scripts.pory"
# 232 "data/maps/ContestHall/scripts.pory"
# 508 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudiencePsychicM
# 509 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 510 "data/maps/ContestHall/scripts.pory"

# 511 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_31:
# 512 "data/maps/ContestHall/scripts.pory"
# 234 "data/maps/ContestHall/scripts.pory"
# 513 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceSchoolKidM
# 514 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 515 "data/maps/ContestHall/scripts.pory"

# 516 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_32:
# 517 "data/maps/ContestHall/scripts.pory"
# 236 "data/maps/ContestHall/scripts.pory"
# 518 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceBlackBelt
# 519 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 520 "data/maps/ContestHall/scripts.pory"

# 521 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_33:
# 522 "data/maps/ContestHall/scripts.pory"
# 238 "data/maps/ContestHall/scripts.pory"
# 523 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceBeauty
# 524 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 525 "data/maps/ContestHall/scripts.pory"

# 526 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId_34:
# 527 "data/maps/ContestHall/scripts.pory"
# 240 "data/maps/ContestHall/scripts.pory"
# 528 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceScientist1
# 529 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1
# 530 "data/maps/ContestHall/scripts.pory"

# 531 "data/maps/ContestHall/scripts.pory"

# 532 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceNinjaBoy::
# 533 "data/maps/ContestHall/scripts.pory"
# 246 "data/maps/ContestHall/scripts.pory"
# 534 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_NINJA_BOY
# 535 "data/maps/ContestHall/scripts.pory"
	return
# 536 "data/maps/ContestHall/scripts.pory"

# 537 "data/maps/ContestHall/scripts.pory"

# 538 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceTwin::
# 539 "data/maps/ContestHall/scripts.pory"
# 251 "data/maps/ContestHall/scripts.pory"
# 540 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_TWIN
# 541 "data/maps/ContestHall/scripts.pory"
	return
# 542 "data/maps/ContestHall/scripts.pory"

# 543 "data/maps/ContestHall/scripts.pory"

# 544 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceBoy1::
# 545 "data/maps/ContestHall/scripts.pory"
# 256 "data/maps/ContestHall/scripts.pory"
# 546 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BOY_1
# 547 "data/maps/ContestHall/scripts.pory"
	return
# 548 "data/maps/ContestHall/scripts.pory"

# 549 "data/maps/ContestHall/scripts.pory"

# 550 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceGirl1::
# 551 "data/maps/ContestHall/scripts.pory"
# 261 "data/maps/ContestHall/scripts.pory"
# 552 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_1
# 553 "data/maps/ContestHall/scripts.pory"
	return
# 554 "data/maps/ContestHall/scripts.pory"

# 555 "data/maps/ContestHall/scripts.pory"

# 556 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceGirl2::
# 557 "data/maps/ContestHall/scripts.pory"
# 266 "data/maps/ContestHall/scripts.pory"
# 558 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_2
# 559 "data/maps/ContestHall/scripts.pory"
	return
# 560 "data/maps/ContestHall/scripts.pory"

# 561 "data/maps/ContestHall/scripts.pory"

# 562 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceLittleBoy::
# 563 "data/maps/ContestHall/scripts.pory"
# 271 "data/maps/ContestHall/scripts.pory"
# 564 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LITTLE_BOY
# 565 "data/maps/ContestHall/scripts.pory"
	return
# 566 "data/maps/ContestHall/scripts.pory"

# 567 "data/maps/ContestHall/scripts.pory"

# 568 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceGirl::
# 569 "data/maps/ContestHall/scripts.pory"
# 276 "data/maps/ContestHall/scripts.pory"
# 570 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LITTLE_GIRL
# 571 "data/maps/ContestHall/scripts.pory"
	return
# 572 "data/maps/ContestHall/scripts.pory"

# 573 "data/maps/ContestHall/scripts.pory"

# 574 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceBoy3::
# 575 "data/maps/ContestHall/scripts.pory"
# 281 "data/maps/ContestHall/scripts.pory"
# 576 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BOY_3
# 577 "data/maps/ContestHall/scripts.pory"
	return
# 578 "data/maps/ContestHall/scripts.pory"

# 579 "data/maps/ContestHall/scripts.pory"

# 580 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceGirl3::
# 581 "data/maps/ContestHall/scripts.pory"
# 286 "data/maps/ContestHall/scripts.pory"
# 582 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_3
# 583 "data/maps/ContestHall/scripts.pory"
	return
# 584 "data/maps/ContestHall/scripts.pory"

# 585 "data/maps/ContestHall/scripts.pory"

# 586 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceRichBoy::
# 587 "data/maps/ContestHall/scripts.pory"
# 291 "data/maps/ContestHall/scripts.pory"
# 588 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_RICH_BOY
# 589 "data/maps/ContestHall/scripts.pory"
	return
# 590 "data/maps/ContestHall/scripts.pory"

# 591 "data/maps/ContestHall/scripts.pory"

# 592 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceFatMan::
# 593 "data/maps/ContestHall/scripts.pory"
# 296 "data/maps/ContestHall/scripts.pory"
# 594 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_FAT_MAN
# 595 "data/maps/ContestHall/scripts.pory"
	return
# 596 "data/maps/ContestHall/scripts.pory"

# 597 "data/maps/ContestHall/scripts.pory"

# 598 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudiencePokefanF::
# 599 "data/maps/ContestHall/scripts.pory"
# 301 "data/maps/ContestHall/scripts.pory"
# 600 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_POKEFAN_F
# 601 "data/maps/ContestHall/scripts.pory"
	return
# 602 "data/maps/ContestHall/scripts.pory"

# 603 "data/maps/ContestHall/scripts.pory"

# 604 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceMan1::
# 605 "data/maps/ContestHall/scripts.pory"
# 306 "data/maps/ContestHall/scripts.pory"
# 606 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_MAN_1
# 607 "data/maps/ContestHall/scripts.pory"
	return
# 608 "data/maps/ContestHall/scripts.pory"

# 609 "data/maps/ContestHall/scripts.pory"

# 610 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceWoman2::
# 611 "data/maps/ContestHall/scripts.pory"
# 311 "data/maps/ContestHall/scripts.pory"
# 612 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_2
# 613 "data/maps/ContestHall/scripts.pory"
	return
# 614 "data/maps/ContestHall/scripts.pory"

# 615 "data/maps/ContestHall/scripts.pory"

# 616 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceExpertM::
# 617 "data/maps/ContestHall/scripts.pory"
# 316 "data/maps/ContestHall/scripts.pory"
# 618 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_EXPERT_M
# 619 "data/maps/ContestHall/scripts.pory"
	return
# 620 "data/maps/ContestHall/scripts.pory"

# 621 "data/maps/ContestHall/scripts.pory"

# 622 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceExpertF::
# 623 "data/maps/ContestHall/scripts.pory"
# 321 "data/maps/ContestHall/scripts.pory"
# 624 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_EXPERT_F
# 625 "data/maps/ContestHall/scripts.pory"
	return
# 626 "data/maps/ContestHall/scripts.pory"

# 627 "data/maps/ContestHall/scripts.pory"

# 628 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudiencePokefanM::
# 629 "data/maps/ContestHall/scripts.pory"
# 326 "data/maps/ContestHall/scripts.pory"
# 630 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_POKEFAN_M
# 631 "data/maps/ContestHall/scripts.pory"
	return
# 632 "data/maps/ContestHall/scripts.pory"

# 633 "data/maps/ContestHall/scripts.pory"

# 634 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceWoman4::
# 635 "data/maps/ContestHall/scripts.pory"
# 331 "data/maps/ContestHall/scripts.pory"
# 636 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_4
# 637 "data/maps/ContestHall/scripts.pory"
	return
# 638 "data/maps/ContestHall/scripts.pory"

# 639 "data/maps/ContestHall/scripts.pory"

# 640 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceCook::
# 641 "data/maps/ContestHall/scripts.pory"
# 336 "data/maps/ContestHall/scripts.pory"
# 642 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_COOK
# 643 "data/maps/ContestHall/scripts.pory"
	return
# 644 "data/maps/ContestHall/scripts.pory"

# 645 "data/maps/ContestHall/scripts.pory"

# 646 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceLass::
# 647 "data/maps/ContestHall/scripts.pory"
# 341 "data/maps/ContestHall/scripts.pory"
# 648 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LASS
# 649 "data/maps/ContestHall/scripts.pory"
	return
# 650 "data/maps/ContestHall/scripts.pory"

# 651 "data/maps/ContestHall/scripts.pory"

# 652 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceOldWoman::
# 653 "data/maps/ContestHall/scripts.pory"
# 346 "data/maps/ContestHall/scripts.pory"
# 654 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_OLD_WOMAN
# 655 "data/maps/ContestHall/scripts.pory"
	return
# 656 "data/maps/ContestHall/scripts.pory"

# 657 "data/maps/ContestHall/scripts.pory"

# 658 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceCamper::
# 659 "data/maps/ContestHall/scripts.pory"
# 351 "data/maps/ContestHall/scripts.pory"
# 660 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_CAMPER
# 661 "data/maps/ContestHall/scripts.pory"
	return
# 662 "data/maps/ContestHall/scripts.pory"

# 663 "data/maps/ContestHall/scripts.pory"

# 664 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudiencePicnicker::
# 665 "data/maps/ContestHall/scripts.pory"
# 356 "data/maps/ContestHall/scripts.pory"
# 666 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_PICNICKER
# 667 "data/maps/ContestHall/scripts.pory"
	return
# 668 "data/maps/ContestHall/scripts.pory"

# 669 "data/maps/ContestHall/scripts.pory"

# 670 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceMan3::
# 671 "data/maps/ContestHall/scripts.pory"
# 361 "data/maps/ContestHall/scripts.pory"
# 672 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_MAN_3
# 673 "data/maps/ContestHall/scripts.pory"
	return
# 674 "data/maps/ContestHall/scripts.pory"

# 675 "data/maps/ContestHall/scripts.pory"

# 676 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceWoman5::
# 677 "data/maps/ContestHall/scripts.pory"
# 366 "data/maps/ContestHall/scripts.pory"
# 678 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_5
# 679 "data/maps/ContestHall/scripts.pory"
	return
# 680 "data/maps/ContestHall/scripts.pory"

# 681 "data/maps/ContestHall/scripts.pory"

# 682 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceYoungster::
# 683 "data/maps/ContestHall/scripts.pory"
# 371 "data/maps/ContestHall/scripts.pory"
# 684 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_YOUNGSTER
# 685 "data/maps/ContestHall/scripts.pory"
	return
# 686 "data/maps/ContestHall/scripts.pory"

# 687 "data/maps/ContestHall/scripts.pory"

# 688 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceBugCatcher::
# 689 "data/maps/ContestHall/scripts.pory"
# 376 "data/maps/ContestHall/scripts.pory"
# 690 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BUG_CATCHER
# 691 "data/maps/ContestHall/scripts.pory"
	return
# 692 "data/maps/ContestHall/scripts.pory"

# 693 "data/maps/ContestHall/scripts.pory"

# 694 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudiencePsychicM::
# 695 "data/maps/ContestHall/scripts.pory"
# 381 "data/maps/ContestHall/scripts.pory"
# 696 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_PSYCHIC_M
# 697 "data/maps/ContestHall/scripts.pory"
	return
# 698 "data/maps/ContestHall/scripts.pory"

# 699 "data/maps/ContestHall/scripts.pory"

# 700 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceSchoolKidM::
# 701 "data/maps/ContestHall/scripts.pory"
# 386 "data/maps/ContestHall/scripts.pory"
# 702 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_SCHOOL_KID_M
# 703 "data/maps/ContestHall/scripts.pory"
	return
# 704 "data/maps/ContestHall/scripts.pory"

# 705 "data/maps/ContestHall/scripts.pory"

# 706 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceBlackBelt::
# 707 "data/maps/ContestHall/scripts.pory"
# 391 "data/maps/ContestHall/scripts.pory"
# 708 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BLACK_BELT
# 709 "data/maps/ContestHall/scripts.pory"
	return
# 710 "data/maps/ContestHall/scripts.pory"

# 711 "data/maps/ContestHall/scripts.pory"

# 712 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceBeauty::
# 713 "data/maps/ContestHall/scripts.pory"
# 396 "data/maps/ContestHall/scripts.pory"
# 714 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BEAUTY
# 715 "data/maps/ContestHall/scripts.pory"
	return
# 716 "data/maps/ContestHall/scripts.pory"

# 717 "data/maps/ContestHall/scripts.pory"

# 718 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceScientist1::
# 719 "data/maps/ContestHall/scripts.pory"
# 401 "data/maps/ContestHall/scripts.pory"
# 720 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_SCIENTIST_1
# 721 "data/maps/ContestHall/scripts.pory"
	return
# 722 "data/maps/ContestHall/scripts.pory"

# 723 "data/maps/ContestHall/scripts.pory"

# 724 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateAudience::
# 725 "data/maps/ContestHall/scripts.pory"
# 406 "data/maps/ContestHall/scripts.pory"
# 726 "data/maps/ContestHall/scripts.pory"
	specialvar VAR_RESULT, IsWirelessContest
# 727 "data/maps/ContestHall/scripts.pory"
# 407 "data/maps/ContestHall/scripts.pory"
# 728 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, TRUE
# 729 "data/maps/ContestHall/scripts.pory"
	goto_if_eq ContestHall_EventScript_CreateAudience_2
# 730 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateAudience_1:
# 731 "data/maps/ContestHall/scripts.pory"
# 410 "data/maps/ContestHall/scripts.pory"
# 732 "data/maps/ContestHall/scripts.pory"
	switch VAR_CONTEST_TYPE
# 733 "data/maps/ContestHall/scripts.pory"
# 411 "data/maps/ContestHall/scripts.pory"
# 734 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_NORMAL, ContestHall_EventScript_CreateAudience_6
# 735 "data/maps/ContestHall/scripts.pory"
# 413 "data/maps/ContestHall/scripts.pory"
# 736 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_SUPER, ContestHall_EventScript_CreateAudience_7
# 737 "data/maps/ContestHall/scripts.pory"
# 415 "data/maps/ContestHall/scripts.pory"
# 738 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_HYPER, ContestHall_EventScript_CreateAudience_8
# 739 "data/maps/ContestHall/scripts.pory"
# 417 "data/maps/ContestHall/scripts.pory"
# 740 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_MASTER, ContestHall_EventScript_CreateAudience_9
# 741 "data/maps/ContestHall/scripts.pory"
# 419 "data/maps/ContestHall/scripts.pory"
# 742 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_LINK, ContestHall_EventScript_CreateAudience_10
# 743 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateAudience_4:
# 744 "data/maps/ContestHall/scripts.pory"
	return
# 745 "data/maps/ContestHall/scripts.pory"

# 746 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateAudience_2:
# 747 "data/maps/ContestHall/scripts.pory"
# 408 "data/maps/ContestHall/scripts.pory"
# 748 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateWirelessContestAudience
# 749 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateAudience_1
# 750 "data/maps/ContestHall/scripts.pory"

# 751 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateAudience_6:
# 752 "data/maps/ContestHall/scripts.pory"
# 412 "data/maps/ContestHall/scripts.pory"
# 753 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateNormalContestAudience
# 754 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateAudience_4
# 755 "data/maps/ContestHall/scripts.pory"

# 756 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateAudience_7:
# 757 "data/maps/ContestHall/scripts.pory"
# 414 "data/maps/ContestHall/scripts.pory"
# 758 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateSuperContestAudience
# 759 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateAudience_4
# 760 "data/maps/ContestHall/scripts.pory"

# 761 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateAudience_8:
# 762 "data/maps/ContestHall/scripts.pory"
# 416 "data/maps/ContestHall/scripts.pory"
# 763 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateHyperContestAudience
# 764 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateAudience_4
# 765 "data/maps/ContestHall/scripts.pory"

# 766 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateAudience_9:
# 767 "data/maps/ContestHall/scripts.pory"
# 418 "data/maps/ContestHall/scripts.pory"
# 768 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateMasterContestAudience
# 769 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateAudience_4
# 770 "data/maps/ContestHall/scripts.pory"

# 771 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateAudience_10:
# 772 "data/maps/ContestHall/scripts.pory"
# 420 "data/maps/ContestHall/scripts.pory"
# 773 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateMasterContestAudience
# 774 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateAudience_4
# 775 "data/maps/ContestHall/scripts.pory"

# 776 "data/maps/ContestHall/scripts.pory"

# 777 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateNormalContestAudience::
# 778 "data/maps/ContestHall/scripts.pory"
# 426 "data/maps/ContestHall/scripts.pory"
# 779 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 20, 3, 2, 3, DIR_SOUTH
# 780 "data/maps/ContestHall/scripts.pory"
# 427 "data/maps/ContestHall/scripts.pory"
# 781 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
# 782 "data/maps/ContestHall/scripts.pory"
	return
# 783 "data/maps/ContestHall/scripts.pory"

# 784 "data/maps/ContestHall/scripts.pory"

# 785 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateSuperContestAudience::
# 786 "data/maps/ContestHall/scripts.pory"
# 432 "data/maps/ContestHall/scripts.pory"
# 787 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 788 "data/maps/ContestHall/scripts.pory"
# 433 "data/maps/ContestHall/scripts.pory"
# 789 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 790 "data/maps/ContestHall/scripts.pory"
# 434 "data/maps/ContestHall/scripts.pory"
# 791 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 792 "data/maps/ContestHall/scripts.pory"
# 435 "data/maps/ContestHall/scripts.pory"
# 793 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 3, 2, 8, 3, DIR_EAST
# 794 "data/maps/ContestHall/scripts.pory"
# 436 "data/maps/ContestHall/scripts.pory"
# 795 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 796 "data/maps/ContestHall/scripts.pory"
# 437 "data/maps/ContestHall/scripts.pory"
# 797 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 798 "data/maps/ContestHall/scripts.pory"
# 438 "data/maps/ContestHall/scripts.pory"
# 799 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 800 "data/maps/ContestHall/scripts.pory"
# 439 "data/maps/ContestHall/scripts.pory"
# 801 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 13, 12, 8, 3, DIR_WEST
# 802 "data/maps/ContestHall/scripts.pory"
# 440 "data/maps/ContestHall/scripts.pory"
# 803 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 20, 3, 2, 3, DIR_SOUTH
# 804 "data/maps/ContestHall/scripts.pory"
# 441 "data/maps/ContestHall/scripts.pory"
# 805 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
# 806 "data/maps/ContestHall/scripts.pory"
	return
# 807 "data/maps/ContestHall/scripts.pory"

# 808 "data/maps/ContestHall/scripts.pory"

# 809 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateHyperContestAudience::
# 810 "data/maps/ContestHall/scripts.pory"
# 446 "data/maps/ContestHall/scripts.pory"
# 811 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 812 "data/maps/ContestHall/scripts.pory"
# 447 "data/maps/ContestHall/scripts.pory"
# 813 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 814 "data/maps/ContestHall/scripts.pory"
# 448 "data/maps/ContestHall/scripts.pory"
# 815 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 816 "data/maps/ContestHall/scripts.pory"
# 449 "data/maps/ContestHall/scripts.pory"
# 817 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 3, 2, 8, 3, DIR_EAST
# 818 "data/maps/ContestHall/scripts.pory"
# 450 "data/maps/ContestHall/scripts.pory"
# 819 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 820 "data/maps/ContestHall/scripts.pory"
# 451 "data/maps/ContestHall/scripts.pory"
# 821 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 822 "data/maps/ContestHall/scripts.pory"
# 452 "data/maps/ContestHall/scripts.pory"
# 823 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 824 "data/maps/ContestHall/scripts.pory"
# 453 "data/maps/ContestHall/scripts.pory"
# 825 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 826 "data/maps/ContestHall/scripts.pory"
# 454 "data/maps/ContestHall/scripts.pory"
# 827 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 3, 2, 3, DIR_SOUTH
# 828 "data/maps/ContestHall/scripts.pory"
# 455 "data/maps/ContestHall/scripts.pory"
# 829 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 20, 6, 2, 3, DIR_SOUTH
# 830 "data/maps/ContestHall/scripts.pory"
# 456 "data/maps/ContestHall/scripts.pory"
# 831 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 20, 7, 2, 3, DIR_SOUTH
# 832 "data/maps/ContestHall/scripts.pory"
# 457 "data/maps/ContestHall/scripts.pory"
# 833 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 8, 2, 3, DIR_SOUTH
# 834 "data/maps/ContestHall/scripts.pory"
# 458 "data/maps/ContestHall/scripts.pory"
# 835 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 24, 11, 2, 3, DIR_SOUTH
# 836 "data/maps/ContestHall/scripts.pory"
# 459 "data/maps/ContestHall/scripts.pory"
# 837 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 3, 9, 3, DIR_NORTH
# 838 "data/maps/ContestHall/scripts.pory"
# 460 "data/maps/ContestHall/scripts.pory"
# 839 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 4, 9, 3, DIR_NORTH
# 840 "data/maps/ContestHall/scripts.pory"
# 461 "data/maps/ContestHall/scripts.pory"
# 841 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 27, 5, 9, 3, DIR_NORTH
# 842 "data/maps/ContestHall/scripts.pory"
# 462 "data/maps/ContestHall/scripts.pory"
# 843 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 9, 9, 3, DIR_NORTH
# 844 "data/maps/ContestHall/scripts.pory"
# 463 "data/maps/ContestHall/scripts.pory"
# 845 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 10, 9, 3, DIR_NORTH
# 846 "data/maps/ContestHall/scripts.pory"
# 464 "data/maps/ContestHall/scripts.pory"
# 847 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 11, 9, 3, DIR_NORTH
# 848 "data/maps/ContestHall/scripts.pory"
	return
# 849 "data/maps/ContestHall/scripts.pory"

# 850 "data/maps/ContestHall/scripts.pory"

# 851 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateMasterContestAudience::
# 852 "data/maps/ContestHall/scripts.pory"
# 469 "data/maps/ContestHall/scripts.pory"
# 853 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 854 "data/maps/ContestHall/scripts.pory"
# 470 "data/maps/ContestHall/scripts.pory"
# 855 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 856 "data/maps/ContestHall/scripts.pory"
# 471 "data/maps/ContestHall/scripts.pory"
# 857 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 858 "data/maps/ContestHall/scripts.pory"
# 472 "data/maps/ContestHall/scripts.pory"
# 859 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 3, 2, 8, 3, DIR_EAST
# 860 "data/maps/ContestHall/scripts.pory"
# 473 "data/maps/ContestHall/scripts.pory"
# 861 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MANIAC, 4, 1, 3, 3, DIR_EAST
# 862 "data/maps/ContestHall/scripts.pory"
# 474 "data/maps/ContestHall/scripts.pory"
# 863 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 6, 1, 5, 3, DIR_EAST
# 864 "data/maps/ContestHall/scripts.pory"
# 475 "data/maps/ContestHall/scripts.pory"
# 865 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 7, 1, 6, 3, DIR_EAST
# 866 "data/maps/ContestHall/scripts.pory"
# 476 "data/maps/ContestHall/scripts.pory"
# 867 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 9, 1, 8, 3, DIR_EAST
# 868 "data/maps/ContestHall/scripts.pory"
# 477 "data/maps/ContestHall/scripts.pory"
# 869 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 870 "data/maps/ContestHall/scripts.pory"
# 478 "data/maps/ContestHall/scripts.pory"
# 871 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 872 "data/maps/ContestHall/scripts.pory"
# 479 "data/maps/ContestHall/scripts.pory"
# 873 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 874 "data/maps/ContestHall/scripts.pory"
# 480 "data/maps/ContestHall/scripts.pory"
# 875 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 876 "data/maps/ContestHall/scripts.pory"
# 481 "data/maps/ContestHall/scripts.pory"
# 877 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 14, 13, 3, 3, DIR_WEST
# 878 "data/maps/ContestHall/scripts.pory"
# 482 "data/maps/ContestHall/scripts.pory"
# 879 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F, 15, 13, 4, 3, DIR_WEST
# 880 "data/maps/ContestHall/scripts.pory"
# 483 "data/maps/ContestHall/scripts.pory"
# 881 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_4, 17, 13, 6, 3, DIR_WEST
# 882 "data/maps/ContestHall/scripts.pory"
# 484 "data/maps/ContestHall/scripts.pory"
# 883 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 18, 13, 7, 3, DIR_WEST
# 884 "data/maps/ContestHall/scripts.pory"
# 485 "data/maps/ContestHall/scripts.pory"
# 885 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_DEVON_EMPLOYEE, 19, 13, 8, 3, DIR_WEST
# 886 "data/maps/ContestHall/scripts.pory"
# 486 "data/maps/ContestHall/scripts.pory"
# 887 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 20, 3, 2, 3, DIR_SOUTH
# 888 "data/maps/ContestHall/scripts.pory"
# 487 "data/maps/ContestHall/scripts.pory"
# 889 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_CAMPER, 21, 6, 2, 3, DIR_SOUTH
# 890 "data/maps/ContestHall/scripts.pory"
# 488 "data/maps/ContestHall/scripts.pory"
# 891 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_3, 22, 7, 2, 3, DIR_SOUTH
# 892 "data/maps/ContestHall/scripts.pory"
# 489 "data/maps/ContestHall/scripts.pory"
# 893 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
# 894 "data/maps/ContestHall/scripts.pory"
# 490 "data/maps/ContestHall/scripts.pory"
# 895 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 25, 3, 9, 3, DIR_NORTH
# 896 "data/maps/ContestHall/scripts.pory"
# 491 "data/maps/ContestHall/scripts.pory"
# 897 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 4, 9, 3, DIR_NORTH
# 898 "data/maps/ContestHall/scripts.pory"
# 492 "data/maps/ContestHall/scripts.pory"
# 899 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 27, 5, 9, 3, DIR_NORTH
# 900 "data/maps/ContestHall/scripts.pory"
# 493 "data/maps/ContestHall/scripts.pory"
# 901 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 9, 9, 3, DIR_NORTH
# 902 "data/maps/ContestHall/scripts.pory"
# 494 "data/maps/ContestHall/scripts.pory"
# 903 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 10, 9, 3, DIR_NORTH
# 904 "data/maps/ContestHall/scripts.pory"
# 495 "data/maps/ContestHall/scripts.pory"
# 905 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 11, 9, 3, DIR_NORTH
# 906 "data/maps/ContestHall/scripts.pory"
	return
# 907 "data/maps/ContestHall/scripts.pory"

# 908 "data/maps/ContestHall/scripts.pory"

# 909 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateWirelessContestAudience::
# 910 "data/maps/ContestHall/scripts.pory"
# 500 "data/maps/ContestHall/scripts.pory"
# 911 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 912 "data/maps/ContestHall/scripts.pory"
# 501 "data/maps/ContestHall/scripts.pory"
# 913 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 914 "data/maps/ContestHall/scripts.pory"
# 502 "data/maps/ContestHall/scripts.pory"
# 915 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 916 "data/maps/ContestHall/scripts.pory"
# 503 "data/maps/ContestHall/scripts.pory"
# 917 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 3, 2, 8, 3, DIR_EAST
# 918 "data/maps/ContestHall/scripts.pory"
# 504 "data/maps/ContestHall/scripts.pory"
# 919 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MANIAC, 4, 1, 3, 3, DIR_EAST
# 920 "data/maps/ContestHall/scripts.pory"
# 505 "data/maps/ContestHall/scripts.pory"
# 921 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 6, 1, 5, 3, DIR_EAST
# 922 "data/maps/ContestHall/scripts.pory"
# 506 "data/maps/ContestHall/scripts.pory"
# 923 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 7, 1, 6, 3, DIR_EAST
# 924 "data/maps/ContestHall/scripts.pory"
# 507 "data/maps/ContestHall/scripts.pory"
# 925 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 9, 1, 8, 3, DIR_EAST
# 926 "data/maps/ContestHall/scripts.pory"
# 508 "data/maps/ContestHall/scripts.pory"
# 927 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 928 "data/maps/ContestHall/scripts.pory"
# 509 "data/maps/ContestHall/scripts.pory"
# 929 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 930 "data/maps/ContestHall/scripts.pory"
# 510 "data/maps/ContestHall/scripts.pory"
# 931 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 932 "data/maps/ContestHall/scripts.pory"
# 511 "data/maps/ContestHall/scripts.pory"
# 933 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 934 "data/maps/ContestHall/scripts.pory"
# 512 "data/maps/ContestHall/scripts.pory"
# 935 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 14, 13, 3, 3, DIR_WEST
# 936 "data/maps/ContestHall/scripts.pory"
# 513 "data/maps/ContestHall/scripts.pory"
# 937 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F, 15, 13, 4, 3, DIR_WEST
# 938 "data/maps/ContestHall/scripts.pory"
# 514 "data/maps/ContestHall/scripts.pory"
# 939 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_4, 17, 13, 6, 3, DIR_WEST
# 940 "data/maps/ContestHall/scripts.pory"
# 515 "data/maps/ContestHall/scripts.pory"
# 941 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 18, 13, 7, 3, DIR_WEST
# 942 "data/maps/ContestHall/scripts.pory"
# 516 "data/maps/ContestHall/scripts.pory"
# 943 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_DEVON_EMPLOYEE, 19, 13, 8, 3, DIR_WEST
# 944 "data/maps/ContestHall/scripts.pory"
# 517 "data/maps/ContestHall/scripts.pory"
# 945 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 20, 3, 2, 3, DIR_SOUTH
# 946 "data/maps/ContestHall/scripts.pory"
# 518 "data/maps/ContestHall/scripts.pory"
# 947 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_CAMPER, 21, 6, 2, 3, DIR_SOUTH
# 948 "data/maps/ContestHall/scripts.pory"
# 519 "data/maps/ContestHall/scripts.pory"
# 949 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_3, 22, 7, 2, 3, DIR_SOUTH
# 950 "data/maps/ContestHall/scripts.pory"
# 520 "data/maps/ContestHall/scripts.pory"
# 951 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
# 952 "data/maps/ContestHall/scripts.pory"
	return
# 953 "data/maps/ContestHall/scripts.pory"

# 954 "data/maps/ContestHall/scripts.pory"

# 955 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarp::
# 956 "data/maps/ContestHall/scripts.pory"
# 525 "data/maps/ContestHall/scripts.pory"
# 957 "data/maps/ContestHall/scripts.pory"
	special ClearLinkContestFlags
# 958 "data/maps/ContestHall/scripts.pory"
# 526 "data/maps/ContestHall/scripts.pory"
# 959 "data/maps/ContestHall/scripts.pory"
	switch VAR_CONTEST_TYPE
# 960 "data/maps/ContestHall/scripts.pory"
# 527 "data/maps/ContestHall/scripts.pory"
# 961 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_NORMAL, ContestHall_EventScript_SetExitWarp_3
# 962 "data/maps/ContestHall/scripts.pory"
# 529 "data/maps/ContestHall/scripts.pory"
# 963 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_SUPER, ContestHall_EventScript_SetExitWarp_4
# 964 "data/maps/ContestHall/scripts.pory"
# 531 "data/maps/ContestHall/scripts.pory"
# 965 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_HYPER, ContestHall_EventScript_SetExitWarp_5
# 966 "data/maps/ContestHall/scripts.pory"
# 533 "data/maps/ContestHall/scripts.pory"
# 967 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_MASTER, ContestHall_EventScript_SetExitWarp_6
# 968 "data/maps/ContestHall/scripts.pory"
# 535 "data/maps/ContestHall/scripts.pory"
# 969 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_LINK, ContestHall_EventScript_SetExitWarp_7
# 970 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarp_1:
# 971 "data/maps/ContestHall/scripts.pory"
	return
# 972 "data/maps/ContestHall/scripts.pory"

# 973 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarp_3:
# 974 "data/maps/ContestHall/scripts.pory"
# 528 "data/maps/ContestHall/scripts.pory"
# 975 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarpNormalContest
# 976 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarp_1
# 977 "data/maps/ContestHall/scripts.pory"

# 978 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarp_4:
# 979 "data/maps/ContestHall/scripts.pory"
# 530 "data/maps/ContestHall/scripts.pory"
# 980 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarpSuperContest
# 981 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarp_1
# 982 "data/maps/ContestHall/scripts.pory"

# 983 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarp_5:
# 984 "data/maps/ContestHall/scripts.pory"
# 532 "data/maps/ContestHall/scripts.pory"
# 985 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarpHyperContest
# 986 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarp_1
# 987 "data/maps/ContestHall/scripts.pory"

# 988 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarp_6:
# 989 "data/maps/ContestHall/scripts.pory"
# 534 "data/maps/ContestHall/scripts.pory"
# 990 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarpMasterContest
# 991 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarp_1
# 992 "data/maps/ContestHall/scripts.pory"

# 993 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarp_7:
# 994 "data/maps/ContestHall/scripts.pory"
# 536 "data/maps/ContestHall/scripts.pory"
# 995 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarpLinkContest
# 996 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarp_1
# 997 "data/maps/ContestHall/scripts.pory"

# 998 "data/maps/ContestHall/scripts.pory"

# 999 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarpNormalContest::
# 1000 "data/maps/ContestHall/scripts.pory"
# 542 "data/maps/ContestHall/scripts.pory"
# 1001 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 1002 "data/maps/ContestHall/scripts.pory"
# 543 "data/maps/ContestHall/scripts.pory"
# 1003 "data/maps/ContestHall/scripts.pory"
	waitstate
# 1004 "data/maps/ContestHall/scripts.pory"
	end
# 1005 "data/maps/ContestHall/scripts.pory"

# 1006 "data/maps/ContestHall/scripts.pory"

# 1007 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarpSuperContest::
# 1008 "data/maps/ContestHall/scripts.pory"
# 548 "data/maps/ContestHall/scripts.pory"
# 1009 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 1010 "data/maps/ContestHall/scripts.pory"
# 549 "data/maps/ContestHall/scripts.pory"
# 1011 "data/maps/ContestHall/scripts.pory"
	waitstate
# 1012 "data/maps/ContestHall/scripts.pory"
	end
# 1013 "data/maps/ContestHall/scripts.pory"

# 1014 "data/maps/ContestHall/scripts.pory"

# 1015 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarpHyperContest::
# 1016 "data/maps/ContestHall/scripts.pory"
# 554 "data/maps/ContestHall/scripts.pory"
# 1017 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 1018 "data/maps/ContestHall/scripts.pory"
# 555 "data/maps/ContestHall/scripts.pory"
# 1019 "data/maps/ContestHall/scripts.pory"
	waitstate
# 1020 "data/maps/ContestHall/scripts.pory"
	end
# 1021 "data/maps/ContestHall/scripts.pory"

# 1022 "data/maps/ContestHall/scripts.pory"

# 1023 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarpMasterContest::
# 1024 "data/maps/ContestHall/scripts.pory"
# 560 "data/maps/ContestHall/scripts.pory"
# 1025 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 1026 "data/maps/ContestHall/scripts.pory"
# 561 "data/maps/ContestHall/scripts.pory"
# 1027 "data/maps/ContestHall/scripts.pory"
	waitstate
# 1028 "data/maps/ContestHall/scripts.pory"
	end
# 1029 "data/maps/ContestHall/scripts.pory"

# 1030 "data/maps/ContestHall/scripts.pory"

# 1031 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarpLinkContest::
# 1032 "data/maps/ContestHall/scripts.pory"
# 566 "data/maps/ContestHall/scripts.pory"
# 1033 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 15, 4
# 1034 "data/maps/ContestHall/scripts.pory"
# 567 "data/maps/ContestHall/scripts.pory"
# 1035 "data/maps/ContestHall/scripts.pory"
	waitstate
# 1036 "data/maps/ContestHall/scripts.pory"
	end
# 1037 "data/maps/ContestHall/scripts.pory"

# 1038 "data/maps/ContestHall/scripts.pory"

# 1039 "data/maps/ContestHall/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPlayerGfx::
# 1040 "data/maps/ContestHall/scripts.pory"
# 572 "data/maps/ContestHall/scripts.pory"
# 1041 "data/maps/ContestHall/scripts.pory"
	checkplayergender
# 1042 "data/maps/ContestHall/scripts.pory"
# 573 "data/maps/ContestHall/scripts.pory"
# 1043 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, MALE
# 1044 "data/maps/ContestHall/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_2
# 1045 "data/maps/ContestHall/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_1:
# 1046 "data/maps/ContestHall/scripts.pory"
# 576 "data/maps/ContestHall/scripts.pory"
# 1047 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, FEMALE
# 1048 "data/maps/ContestHall/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_5
# 1049 "data/maps/ContestHall/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_4:
# 1050 "data/maps/ContestHall/scripts.pory"
	return
# 1051 "data/maps/ContestHall/scripts.pory"

# 1052 "data/maps/ContestHall/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_2:
# 1053 "data/maps/ContestHall/scripts.pory"
# 574 "data/maps/ContestHall/scripts.pory"
# 1054 "data/maps/ContestHall/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetPlayerGfxBrendan
# 1055 "data/maps/ContestHall/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_1
# 1056 "data/maps/ContestHall/scripts.pory"

# 1057 "data/maps/ContestHall/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_5:
# 1058 "data/maps/ContestHall/scripts.pory"
# 577 "data/maps/ContestHall/scripts.pory"
# 1059 "data/maps/ContestHall/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetPlayerGfxMay
# 1060 "data/maps/ContestHall/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_4
# 1061 "data/maps/ContestHall/scripts.pory"

# 1062 "data/maps/ContestHall/scripts.pory"

# 1063 "data/maps/ContestHall/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPlayerGfxBrendan::
# 1064 "data/maps/ContestHall/scripts.pory"
# 583 "data/maps/ContestHall/scripts.pory"
# 1065 "data/maps/ContestHall/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 1066 "data/maps/ContestHall/scripts.pory"
	return
# 1067 "data/maps/ContestHall/scripts.pory"

# 1068 "data/maps/ContestHall/scripts.pory"

# 1069 "data/maps/ContestHall/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPlayerGfxMay::
# 1070 "data/maps/ContestHall/scripts.pory"
# 588 "data/maps/ContestHall/scripts.pory"
# 1071 "data/maps/ContestHall/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 1072 "data/maps/ContestHall/scripts.pory"
	return
