ContestHall_MapScripts::
# 2 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ContestHall_OnWarp
# 6 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ContestHall_OnTransition
# 7 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ContestHall_OnResume
# 8 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, ContestHall_OnReturn
# 3 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/ContestHall/scripts.pory"
	map_script_2 VAR_CONTEST_HALL_STATE, 1, ContestHall_EventScript_Contest
	.2byte 0


ContestHall_OnReturn::
# 12 "data/maps/ContestHall/scripts.pory"
	special LoadLinkContestPlayerPalettes
	end


ContestHall_OnTransition::
# 17 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_ReadyContestMusic
# 18 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_0, 1
# 19 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_AddRandomAudienceMembers
	end


ContestHall_EventScript_ReadyContestMusic::
# 24 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_TryWaitForLink
# 25 "data/maps/ContestHall/scripts.pory"
	special GetContestMultiplayerId
# 26 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ContestHall_EventScript_ReadyContestMusic_2
ContestHall_EventScript_ReadyContestMusic_1:
# 29 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ContestHall_EventScript_ReadyContestMusic_5
ContestHall_EventScript_ReadyContestMusic_4:
# 32 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ContestHall_EventScript_ReadyContestMusic_8
ContestHall_EventScript_ReadyContestMusic_7:
# 35 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ContestHall_EventScript_ReadyContestMusic_11
ContestHall_EventScript_ReadyContestMusic_10:
# 38 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ContestHall_EventScript_ReadyContestMusic_14
ContestHall_EventScript_ReadyContestMusic_13:
	return

ContestHall_EventScript_ReadyContestMusic_2:
# 27 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SaveContestMusicPlayer1
	goto ContestHall_EventScript_ReadyContestMusic_1

ContestHall_EventScript_ReadyContestMusic_5:
# 30 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SaveContestMusicPlayer2
	goto ContestHall_EventScript_ReadyContestMusic_4

ContestHall_EventScript_ReadyContestMusic_8:
# 33 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SaveContestMusicPlayer3
	goto ContestHall_EventScript_ReadyContestMusic_7

ContestHall_EventScript_ReadyContestMusic_11:
# 36 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SaveContestMusicPlayer4
	goto ContestHall_EventScript_ReadyContestMusic_10

ContestHall_EventScript_ReadyContestMusic_14:
# 39 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SaveContestMusic
	goto ContestHall_EventScript_ReadyContestMusic_13


ContestHall_EventScript_SaveContestMusicPlayer1::
# 45 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P1
	return


ContestHall_EventScript_SaveContestMusicPlayer2::
# 50 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P2
	return


ContestHall_EventScript_SaveContestMusicPlayer3::
# 55 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P3
	return


ContestHall_EventScript_SaveContestMusicPlayer4::
# 60 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P4
	return


ContestHall_EventScript_SaveContestMusic::
# 65 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_CONTEST
	return


ContestHall_OnResume::
# 70 "data/maps/ContestHall/scripts.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq ContestHall_OnResume_2
ContestHall_OnResume_1:
	end

ContestHall_OnResume_2:
# 71 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_ReShowAudience
	goto ContestHall_OnResume_1


ContestHall_EventScript_ReShowAudience::
# 77 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_CreateAudience
	return


# 81 "data/maps/ContestHall/scripts.pory"

# 82 "data/maps/ContestHall/scripts.pory"
ContestHall_OnWarp:
# 83 "data/maps/ContestHall/scripts.pory"
	map_script_2 VAR_CONTEST_HALL_STATE, 1, ContestHall_EventScript_SetContestObjects
# 84 "data/maps/ContestHall/scripts.pory"
	.2byte 0

ContestHall_EventScript_Contest::
# 89 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_DoContest
# 90 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SetExitWarp
	end


ContestHall_EventScript_SetContestObjects::
# 95 "data/maps/ContestHall/scripts.pory"
	special LoadLinkContestPlayerPalettes
# 96 "data/maps/ContestHall/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 97 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_CreateAudience
	end


ContestHall_EventScript_AddRandomAudienceMembers::
# 102 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_GetRandomAudienceGfxId
# 103 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SetRandomAudienceGfx
# 104 "data/maps/ContestHall/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_lt ContestHall_EventScript_AddRandomAudienceMembers_2
ContestHall_EventScript_AddRandomAudienceMembers_1:
	return

ContestHall_EventScript_AddRandomAudienceMembers_2:
# 105 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_AddRandomAudienceMembers
	goto ContestHall_EventScript_AddRandomAudienceMembers_1


ContestHall_EventScript_SetRandomAudienceGfx::
# 111 "data/maps/ContestHall/scripts.pory"
	switch VAR_TEMP_0
# 112 "data/maps/ContestHall/scripts.pory"
	case 1, ContestHall_EventScript_SetRandomAudienceGfx_3
# 114 "data/maps/ContestHall/scripts.pory"
	case 2, ContestHall_EventScript_SetRandomAudienceGfx_4
# 116 "data/maps/ContestHall/scripts.pory"
	case 3, ContestHall_EventScript_SetRandomAudienceGfx_5
# 118 "data/maps/ContestHall/scripts.pory"
	case 4, ContestHall_EventScript_SetRandomAudienceGfx_6
# 120 "data/maps/ContestHall/scripts.pory"
	case 5, ContestHall_EventScript_SetRandomAudienceGfx_7
# 122 "data/maps/ContestHall/scripts.pory"
	case 6, ContestHall_EventScript_SetRandomAudienceGfx_8
# 124 "data/maps/ContestHall/scripts.pory"
	case 7, ContestHall_EventScript_SetRandomAudienceGfx_9
ContestHall_EventScript_SetRandomAudienceGfx_1:
	end

ContestHall_EventScript_SetRandomAudienceGfx_3:
# 113 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience1
	goto ContestHall_EventScript_SetRandomAudienceGfx_1

ContestHall_EventScript_SetRandomAudienceGfx_4:
# 115 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience2
	goto ContestHall_EventScript_SetRandomAudienceGfx_1

ContestHall_EventScript_SetRandomAudienceGfx_5:
# 117 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience3
	goto ContestHall_EventScript_SetRandomAudienceGfx_1

ContestHall_EventScript_SetRandomAudienceGfx_6:
# 119 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience4
	goto ContestHall_EventScript_SetRandomAudienceGfx_1

ContestHall_EventScript_SetRandomAudienceGfx_7:
# 121 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience5
	goto ContestHall_EventScript_SetRandomAudienceGfx_1

ContestHall_EventScript_SetRandomAudienceGfx_8:
# 123 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience6
	goto ContestHall_EventScript_SetRandomAudienceGfx_1

ContestHall_EventScript_SetRandomAudienceGfx_9:
# 125 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetRandomAudience7
	goto ContestHall_EventScript_SetRandomAudienceGfx_1


ContestHall_EventScript_SetRandomAudience1::
# 131 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_4, VAR_TEMP_1
# 132 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


ContestHall_EventScript_SetRandomAudience2::
# 137 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_5, VAR_TEMP_1
# 138 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


ContestHall_EventScript_SetRandomAudience3::
# 143 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_6, VAR_TEMP_1
# 144 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


ContestHall_EventScript_SetRandomAudience4::
# 149 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_7, VAR_TEMP_1
# 150 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


ContestHall_EventScript_SetRandomAudience5::
# 155 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_8, VAR_TEMP_1
# 156 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


ContestHall_EventScript_SetRandomAudience6::
# 161 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_9, VAR_TEMP_1
# 162 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


ContestHall_EventScript_SetRandomAudience7::
# 167 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_A, VAR_TEMP_1
# 168 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


ContestHall_EventScript_GetRandomAudienceGfxId::
# 173 "data/maps/ContestHall/scripts.pory"
	setvar VAR_RESULT, 32
# 174 "data/maps/ContestHall/scripts.pory"
	special GenerateContestRand
# 175 "data/maps/ContestHall/scripts.pory"
	addvar VAR_RESULT, 1
# 176 "data/maps/ContestHall/scripts.pory"
	switch VAR_RESULT
# 177 "data/maps/ContestHall/scripts.pory"
	case 1, ContestHall_EventScript_GetRandomAudienceGfxId_3
# 179 "data/maps/ContestHall/scripts.pory"
	case 2, ContestHall_EventScript_GetRandomAudienceGfxId_4
# 181 "data/maps/ContestHall/scripts.pory"
	case 3, ContestHall_EventScript_GetRandomAudienceGfxId_5
# 183 "data/maps/ContestHall/scripts.pory"
	case 4, ContestHall_EventScript_GetRandomAudienceGfxId_6
# 185 "data/maps/ContestHall/scripts.pory"
	case 5, ContestHall_EventScript_GetRandomAudienceGfxId_7
# 187 "data/maps/ContestHall/scripts.pory"
	case 6, ContestHall_EventScript_GetRandomAudienceGfxId_8
# 189 "data/maps/ContestHall/scripts.pory"
	case 7, ContestHall_EventScript_GetRandomAudienceGfxId_9
# 191 "data/maps/ContestHall/scripts.pory"
	case 8, ContestHall_EventScript_GetRandomAudienceGfxId_10
# 193 "data/maps/ContestHall/scripts.pory"
	case 9, ContestHall_EventScript_GetRandomAudienceGfxId_11
# 195 "data/maps/ContestHall/scripts.pory"
	case 10, ContestHall_EventScript_GetRandomAudienceGfxId_12
# 197 "data/maps/ContestHall/scripts.pory"
	case 11, ContestHall_EventScript_GetRandomAudienceGfxId_13
# 199 "data/maps/ContestHall/scripts.pory"
	case 12, ContestHall_EventScript_GetRandomAudienceGfxId_14
# 201 "data/maps/ContestHall/scripts.pory"
	case 13, ContestHall_EventScript_GetRandomAudienceGfxId_15
# 203 "data/maps/ContestHall/scripts.pory"
	case 14, ContestHall_EventScript_GetRandomAudienceGfxId_16
# 205 "data/maps/ContestHall/scripts.pory"
	case 15, ContestHall_EventScript_GetRandomAudienceGfxId_17
# 207 "data/maps/ContestHall/scripts.pory"
	case 16, ContestHall_EventScript_GetRandomAudienceGfxId_18
# 209 "data/maps/ContestHall/scripts.pory"
	case 17, ContestHall_EventScript_GetRandomAudienceGfxId_19
# 211 "data/maps/ContestHall/scripts.pory"
	case 18, ContestHall_EventScript_GetRandomAudienceGfxId_20
# 213 "data/maps/ContestHall/scripts.pory"
	case 19, ContestHall_EventScript_GetRandomAudienceGfxId_21
# 215 "data/maps/ContestHall/scripts.pory"
	case 20, ContestHall_EventScript_GetRandomAudienceGfxId_22
# 217 "data/maps/ContestHall/scripts.pory"
	case 21, ContestHall_EventScript_GetRandomAudienceGfxId_23
# 219 "data/maps/ContestHall/scripts.pory"
	case 22, ContestHall_EventScript_GetRandomAudienceGfxId_24
# 221 "data/maps/ContestHall/scripts.pory"
	case 23, ContestHall_EventScript_GetRandomAudienceGfxId_25
# 223 "data/maps/ContestHall/scripts.pory"
	case 24, ContestHall_EventScript_GetRandomAudienceGfxId_26
# 225 "data/maps/ContestHall/scripts.pory"
	case 25, ContestHall_EventScript_GetRandomAudienceGfxId_27
# 227 "data/maps/ContestHall/scripts.pory"
	case 26, ContestHall_EventScript_GetRandomAudienceGfxId_28
# 229 "data/maps/ContestHall/scripts.pory"
	case 27, ContestHall_EventScript_GetRandomAudienceGfxId_29
# 231 "data/maps/ContestHall/scripts.pory"
	case 28, ContestHall_EventScript_GetRandomAudienceGfxId_30
# 233 "data/maps/ContestHall/scripts.pory"
	case 29, ContestHall_EventScript_GetRandomAudienceGfxId_31
# 235 "data/maps/ContestHall/scripts.pory"
	case 30, ContestHall_EventScript_GetRandomAudienceGfxId_32
# 237 "data/maps/ContestHall/scripts.pory"
	case 31, ContestHall_EventScript_GetRandomAudienceGfxId_33
# 239 "data/maps/ContestHall/scripts.pory"
	case 32, ContestHall_EventScript_GetRandomAudienceGfxId_34
ContestHall_EventScript_GetRandomAudienceGfxId_1:
	end

ContestHall_EventScript_GetRandomAudienceGfxId_3:
# 178 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceNinjaBoy
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_4:
# 180 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceTwin
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_5:
# 182 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceBoy1
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_6:
# 184 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceGirl1
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_7:
# 186 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceGirl2
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_8:
# 188 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceLittleBoy
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_9:
# 190 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceGirl
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_10:
# 192 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceBoy3
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_11:
# 194 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceGirl3
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_12:
# 196 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceRichBoy
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_13:
# 198 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceFatMan
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_14:
# 200 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudiencePokefanF
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_15:
# 202 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceMan1
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_16:
# 204 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceWoman2
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_17:
# 206 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceExpertM
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_18:
# 208 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceExpertF
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_19:
# 210 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudiencePokefanM
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_20:
# 212 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceWoman4
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_21:
# 214 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceCook
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_22:
# 216 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceLass
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_23:
# 218 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceOldWoman
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_24:
# 220 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceCamper
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_25:
# 222 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudiencePicnicker
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_26:
# 224 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceMan3
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_27:
# 226 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceWoman5
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_28:
# 228 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceYoungster
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_29:
# 230 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceBugCatcher
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_30:
# 232 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudiencePsychicM
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_31:
# 234 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceSchoolKidM
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_32:
# 236 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceBlackBelt
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_33:
# 238 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceBeauty
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_34:
# 240 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_RandomAudienceScientist1
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1


ContestHall_EventScript_RandomAudienceNinjaBoy::
# 246 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_NINJA_BOY
	return


ContestHall_EventScript_RandomAudienceTwin::
# 251 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_TWIN
	return


ContestHall_EventScript_RandomAudienceBoy1::
# 256 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BOY_1
	return


ContestHall_EventScript_RandomAudienceGirl1::
# 261 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_1
	return


ContestHall_EventScript_RandomAudienceGirl2::
# 266 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_2
	return


ContestHall_EventScript_RandomAudienceLittleBoy::
# 271 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LITTLE_BOY
	return


ContestHall_EventScript_RandomAudienceGirl::
# 276 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LITTLE_GIRL
	return


ContestHall_EventScript_RandomAudienceBoy3::
# 281 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BOY_3
	return


ContestHall_EventScript_RandomAudienceGirl3::
# 286 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_3
	return


ContestHall_EventScript_RandomAudienceRichBoy::
# 291 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_RICH_BOY
	return


ContestHall_EventScript_RandomAudienceFatMan::
# 296 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_FAT_MAN
	return


ContestHall_EventScript_RandomAudiencePokefanF::
# 301 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_POKEFAN_F
	return


ContestHall_EventScript_RandomAudienceMan1::
# 306 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_MAN_1
	return


ContestHall_EventScript_RandomAudienceWoman2::
# 311 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_2
	return


ContestHall_EventScript_RandomAudienceExpertM::
# 316 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_EXPERT_M
	return


ContestHall_EventScript_RandomAudienceExpertF::
# 321 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_EXPERT_F
	return


ContestHall_EventScript_RandomAudiencePokefanM::
# 326 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_POKEFAN_M
	return


ContestHall_EventScript_RandomAudienceWoman4::
# 331 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_4
	return


ContestHall_EventScript_RandomAudienceCook::
# 336 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_COOK
	return


ContestHall_EventScript_RandomAudienceLass::
# 341 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LASS
	return


ContestHall_EventScript_RandomAudienceOldWoman::
# 346 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_OLD_WOMAN
	return


ContestHall_EventScript_RandomAudienceCamper::
# 351 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_CAMPER
	return


ContestHall_EventScript_RandomAudiencePicnicker::
# 356 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_PICNICKER
	return


ContestHall_EventScript_RandomAudienceMan3::
# 361 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_MAN_3
	return


ContestHall_EventScript_RandomAudienceWoman5::
# 366 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_5
	return


ContestHall_EventScript_RandomAudienceYoungster::
# 371 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_YOUNGSTER
	return


ContestHall_EventScript_RandomAudienceBugCatcher::
# 376 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BUG_CATCHER
	return


ContestHall_EventScript_RandomAudiencePsychicM::
# 381 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_PSYCHIC_M
	return


ContestHall_EventScript_RandomAudienceSchoolKidM::
# 386 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_SCHOOL_KID_M
	return


ContestHall_EventScript_RandomAudienceBlackBelt::
# 391 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BLACK_BELT
	return


ContestHall_EventScript_RandomAudienceBeauty::
# 396 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BEAUTY
	return


ContestHall_EventScript_RandomAudienceScientist1::
# 401 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_SCIENTIST_1
	return


ContestHall_EventScript_CreateAudience::
# 406 "data/maps/ContestHall/scripts.pory"
	specialvar VAR_RESULT, IsWirelessContest
# 407 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ContestHall_EventScript_CreateAudience_2
ContestHall_EventScript_CreateAudience_1:
# 410 "data/maps/ContestHall/scripts.pory"
	switch VAR_CONTEST_TYPE
# 411 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_NORMAL, ContestHall_EventScript_CreateAudience_6
# 413 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_SUPER, ContestHall_EventScript_CreateAudience_7
# 415 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_HYPER, ContestHall_EventScript_CreateAudience_8
# 417 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_MASTER, ContestHall_EventScript_CreateAudience_9
# 419 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_LINK, ContestHall_EventScript_CreateAudience_10
ContestHall_EventScript_CreateAudience_4:
	return

ContestHall_EventScript_CreateAudience_2:
# 408 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateWirelessContestAudience
	goto ContestHall_EventScript_CreateAudience_1

ContestHall_EventScript_CreateAudience_6:
# 412 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateNormalContestAudience
	goto ContestHall_EventScript_CreateAudience_4

ContestHall_EventScript_CreateAudience_7:
# 414 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateSuperContestAudience
	goto ContestHall_EventScript_CreateAudience_4

ContestHall_EventScript_CreateAudience_8:
# 416 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateHyperContestAudience
	goto ContestHall_EventScript_CreateAudience_4

ContestHall_EventScript_CreateAudience_9:
# 418 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateMasterContestAudience
	goto ContestHall_EventScript_CreateAudience_4

ContestHall_EventScript_CreateAudience_10:
# 420 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateMasterContestAudience
	goto ContestHall_EventScript_CreateAudience_4


ContestHall_EventScript_CreateNormalContestAudience::
# 426 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 20, 3, 2, 3, DIR_SOUTH
# 427 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
	return


ContestHall_EventScript_CreateSuperContestAudience::
# 432 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 433 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 434 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 435 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 3, 2, 8, 3, DIR_EAST
# 436 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 437 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 438 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 439 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 13, 12, 8, 3, DIR_WEST
# 440 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 20, 3, 2, 3, DIR_SOUTH
# 441 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
	return


ContestHall_EventScript_CreateHyperContestAudience::
# 446 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 447 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 448 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 449 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 3, 2, 8, 3, DIR_EAST
# 450 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 451 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 452 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 453 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 454 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 3, 2, 3, DIR_SOUTH
# 455 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 20, 6, 2, 3, DIR_SOUTH
# 456 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 20, 7, 2, 3, DIR_SOUTH
# 457 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 8, 2, 3, DIR_SOUTH
# 458 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 24, 11, 2, 3, DIR_SOUTH
# 459 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 3, 9, 3, DIR_NORTH
# 460 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 4, 9, 3, DIR_NORTH
# 461 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 27, 5, 9, 3, DIR_NORTH
# 462 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 9, 9, 3, DIR_NORTH
# 463 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 10, 9, 3, DIR_NORTH
# 464 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 11, 9, 3, DIR_NORTH
	return


ContestHall_EventScript_CreateMasterContestAudience::
# 469 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 470 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 471 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 472 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 3, 2, 8, 3, DIR_EAST
# 473 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MANIAC, 4, 1, 3, 3, DIR_EAST
# 474 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 6, 1, 5, 3, DIR_EAST
# 475 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 7, 1, 6, 3, DIR_EAST
# 476 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 9, 1, 8, 3, DIR_EAST
# 477 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 478 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 479 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 480 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 481 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 14, 13, 3, 3, DIR_WEST
# 482 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F, 15, 13, 4, 3, DIR_WEST
# 483 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_4, 17, 13, 6, 3, DIR_WEST
# 484 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 18, 13, 7, 3, DIR_WEST
# 485 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_DEVON_EMPLOYEE, 19, 13, 8, 3, DIR_WEST
# 486 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 20, 3, 2, 3, DIR_SOUTH
# 487 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_CAMPER, 21, 6, 2, 3, DIR_SOUTH
# 488 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_3, 22, 7, 2, 3, DIR_SOUTH
# 489 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
# 490 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 25, 3, 9, 3, DIR_NORTH
# 491 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 4, 9, 3, DIR_NORTH
# 492 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 27, 5, 9, 3, DIR_NORTH
# 493 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 9, 9, 3, DIR_NORTH
# 494 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 10, 9, 3, DIR_NORTH
# 495 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 11, 9, 3, DIR_NORTH
	return


ContestHall_EventScript_CreateWirelessContestAudience::
# 500 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 501 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 502 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 503 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 3, 2, 8, 3, DIR_EAST
# 504 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MANIAC, 4, 1, 3, 3, DIR_EAST
# 505 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 6, 1, 5, 3, DIR_EAST
# 506 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 7, 1, 6, 3, DIR_EAST
# 507 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 9, 1, 8, 3, DIR_EAST
# 508 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 509 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 510 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 511 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 512 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 14, 13, 3, 3, DIR_WEST
# 513 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F, 15, 13, 4, 3, DIR_WEST
# 514 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_4, 17, 13, 6, 3, DIR_WEST
# 515 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 18, 13, 7, 3, DIR_WEST
# 516 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_DEVON_EMPLOYEE, 19, 13, 8, 3, DIR_WEST
# 517 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 20, 3, 2, 3, DIR_SOUTH
# 518 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_CAMPER, 21, 6, 2, 3, DIR_SOUTH
# 519 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_3, 22, 7, 2, 3, DIR_SOUTH
# 520 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
	return


ContestHall_EventScript_SetExitWarp::
# 525 "data/maps/ContestHall/scripts.pory"
	special ClearLinkContestFlags
# 526 "data/maps/ContestHall/scripts.pory"
	switch VAR_CONTEST_TYPE
# 527 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_NORMAL, ContestHall_EventScript_SetExitWarp_3
# 529 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_SUPER, ContestHall_EventScript_SetExitWarp_4
# 531 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_HYPER, ContestHall_EventScript_SetExitWarp_5
# 533 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_MASTER, ContestHall_EventScript_SetExitWarp_6
# 535 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_LINK, ContestHall_EventScript_SetExitWarp_7
ContestHall_EventScript_SetExitWarp_1:
	return

ContestHall_EventScript_SetExitWarp_3:
# 528 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarpNormalContest
	goto ContestHall_EventScript_SetExitWarp_1

ContestHall_EventScript_SetExitWarp_4:
# 530 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarpSuperContest
	goto ContestHall_EventScript_SetExitWarp_1

ContestHall_EventScript_SetExitWarp_5:
# 532 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarpHyperContest
	goto ContestHall_EventScript_SetExitWarp_1

ContestHall_EventScript_SetExitWarp_6:
# 534 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarpMasterContest
	goto ContestHall_EventScript_SetExitWarp_1

ContestHall_EventScript_SetExitWarp_7:
# 536 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_SetExitWarpLinkContest
	goto ContestHall_EventScript_SetExitWarp_1


ContestHall_EventScript_SetExitWarpNormalContest::
# 542 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 543 "data/maps/ContestHall/scripts.pory"
	waitstate
	end


ContestHall_EventScript_SetExitWarpSuperContest::
# 548 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 549 "data/maps/ContestHall/scripts.pory"
	waitstate
	end


ContestHall_EventScript_SetExitWarpHyperContest::
# 554 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 555 "data/maps/ContestHall/scripts.pory"
	waitstate
	end


ContestHall_EventScript_SetExitWarpMasterContest::
# 560 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 561 "data/maps/ContestHall/scripts.pory"
	waitstate
	end


ContestHall_EventScript_SetExitWarpLinkContest::
# 566 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 15, 4
# 567 "data/maps/ContestHall/scripts.pory"
	waitstate
	end


LilycoveCity_ContestLobby_EventScript_SetPlayerGfx::
# 572 "data/maps/ContestHall/scripts.pory"
	checkplayergender
# 573 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_2
LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_1:
# 576 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_5
LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_4:
	return

LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_2:
# 574 "data/maps/ContestHall/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetPlayerGfxBrendan
	goto LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_1

LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_5:
# 577 "data/maps/ContestHall/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetPlayerGfxMay
	goto LilycoveCity_ContestLobby_EventScript_SetPlayerGfx_4


LilycoveCity_ContestLobby_EventScript_SetPlayerGfxBrendan::
# 583 "data/maps/ContestHall/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return


LilycoveCity_ContestLobby_EventScript_SetPlayerGfxMay::
# 588 "data/maps/ContestHall/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return

