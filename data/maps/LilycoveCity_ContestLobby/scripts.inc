LilycoveCity_ContestLobby_MapScripts::
# 2 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_ContestLobby_OnTransition
# 3 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script_2 VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1, LilycoveCity_ContestLobby_EventScript_TryDoContestArtist
# 5 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script_2 VAR_LILYCOVE_CONTEST_LOBBY_STATE, 2, LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist
	.2byte 0


LilycoveCity_ContestLobby_OnTransition::
# 10 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryShowContestReporter
# 11 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster
	end


LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster::
# 16 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	getpokenewsactive POKENEWS_BLENDMASTER
# 17 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster_2
LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster_1:
# 20 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
# 21 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
	return

LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster_2:
# 18 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowBlendMaster
	goto LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster_1


LilycoveCity_ContestLobby_EventScript_ShowBlendMaster::
# 26 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
# 27 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
	return


LilycoveCity_ContestLobby_EventScript_TryDoContestArtist::
# 32 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_EventScript_TryDoContestArtist_2
LilycoveCity_ContestLobby_EventScript_TryDoContestArtist_1:
# 35 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
	end

LilycoveCity_ContestLobby_EventScript_TryDoContestArtist_2:
# 33 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ContestArtist
	goto LilycoveCity_ContestLobby_EventScript_TryDoContestArtist_1


LilycoveCity_ContestLobby_EventScript_ContestArtist::
# 40 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 41 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addobject LOCALID_CONTEST_LOBBY_ARTIST
# 42 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistApproachPlayer
# 43 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement LOCALID_CONTEST_LOBBY_ARTIST
# 44 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerFaceArtist
# 45 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 46 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint, MSGBOX_DEFAULT
# 47 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 48 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_ARTIST
# 50 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 51 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum, MSGBOX_YESNO
# 52 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ContestArtist_2
LilycoveCity_ContestLobby_EventScript_ContestArtist_1:
# 55 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ContestArtist_5
LilycoveCity_ContestLobby_EventScript_ContestArtist_4:
# 58 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ContestArtist_2:
# 53 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
	goto LilycoveCity_ContestLobby_EventScript_ContestArtist_1

LilycoveCity_ContestLobby_EventScript_ContestArtist_5:
# 56 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting
	goto LilycoveCity_ContestLobby_EventScript_ContestArtist_4


LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum::
# 63 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum, MSGBOX_DEFAULT
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 65 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SaveMuseumContestPainting
# 66 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 67 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 68 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_2
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_1:
# 71 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistExit
# 72 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 73 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_ARTIST
# 74 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons
# 75 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPaintingFlag
# 76 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_2:
# 69 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_1


LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting::
# 81 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum, MSGBOX_YESNO
# 82 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_2
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_1:
# 85 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs, MSGBOX_DEFAULT
# 86 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 87 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistExit
# 88 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 89 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 90 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_ARTIST
# 91 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_2:
# 83 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_1


LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon::
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	incrementgamestat GAME_STAT_RECEIVED_RIBBONS
# 97 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special BufferContestWinnerMonName
# 98 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistBeginToExit
# 99 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 100 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_PIN
# 101 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, Common_Movement_ExclamationMark
# 102 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 103 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistReturnToPlayer
# 104 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 105 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeMementoOfPainting, MSGBOX_DEFAULT
# 106 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 107 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ReceivedARibbon, MSGBOX_DEFAULT
# 108 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitfanfare
# 109 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon, MSGBOX_DEFAULT
# 110 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_OkaySeeYou, MSGBOX_DEFAULT
# 111 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
	return


LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons::
# 116 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 117 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_0x8004
# 118 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_3
# 120 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_4
# 122 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 3, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_5
# 124 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 4, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_6
# 126 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 5, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_7
LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1:
	return

LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_3:
# 119 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowPatron1
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1

LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_4:
# 121 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowPatron2
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1

LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_5:
# 123 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowPatron3
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1

LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_6:
# 125 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowPatron4
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1

LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_7:
# 127 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowTourists
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1


LilycoveCity_ContestLobby_EventScript_ShowPatron1::
# 133 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
	return


LilycoveCity_ContestLobby_EventScript_ShowPatron2::
# 138 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
	return


LilycoveCity_ContestLobby_EventScript_ShowPatron3::
# 143 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3
	return


LilycoveCity_ContestLobby_EventScript_ShowPatron4::
# 148 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4
	return


LilycoveCity_ContestLobby_EventScript_ShowTourists::
# 153 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS
	return


LilycoveCity_ContestLobby_EventScript_SetPaintingFlag::
# 158 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_CATEGORY
# 159 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_3
# 161 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_4
# 163 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_5
# 165 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_6
# 167 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_7
LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1:
	return

LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_3:
# 160 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_MadeCoolPainting
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1

LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_4:
# 162 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_MadeBeautyPainting
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1

LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_5:
# 164 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_MadeCutePainting
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1

LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_6:
# 166 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_MadeSmartPainting
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1

LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_7:
# 168 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_MadeToughPainting
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1


LilycoveCity_ContestLobby_EventScript_MadeCoolPainting::
# 174 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_COOL_PAINTING_MADE
	return


LilycoveCity_ContestLobby_EventScript_MadeBeautyPainting::
# 179 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_BEAUTY_PAINTING_MADE
	return


LilycoveCity_ContestLobby_EventScript_MadeCutePainting::
# 184 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_CUTE_PAINTING_MADE
	return


LilycoveCity_ContestLobby_EventScript_MadeSmartPainting::
# 189 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SMART_PAINTING_MADE
	return


LilycoveCity_ContestLobby_EventScript_MadeToughPainting::
# 194 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_TOUGH_PAINTING_MADE
	return


# 198 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistApproachPlayer:
# 199 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 200 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 201 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 202 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 203 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 204 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 205 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 206 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 209 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistExit:
# 210 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 211 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 212 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 213 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 214 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 215 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 216 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 217 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 218 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 221 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerFaceArtist:
# 222 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 223 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 226 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistBeginToExit:
# 227 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 228 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 229 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 230 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 233 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistReturnToPlayer:
# 234 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 235 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 236 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 237 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 238 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 239 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 240 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 241 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 242 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist::
# 246 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist_2
LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist_1:
# 249 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
	end

LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist_2:
# 247 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestArtist
	goto LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist_1


LilycoveCity_ContestLobby_EventScript_LinkContestArtist::
# 254 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 255 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 256 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistApproachPlayer
# 257 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 258 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerFaceLinkArtist
# 259 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 260 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint, MSGBOX_DEFAULT
# 261 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 262 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 263 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_ARTIST
# 264 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum, MSGBOX_YESNO
# 265 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_ContestLobby_EventScript_LinkContestArtist_2
LilycoveCity_ContestLobby_EventScript_LinkContestArtist_1:
# 268 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_ContestLobby_EventScript_LinkContestArtist_5
LilycoveCity_ContestLobby_EventScript_LinkContestArtist_4:
	end

LilycoveCity_ContestLobby_EventScript_LinkContestArtist_2:
# 266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink
	goto LilycoveCity_ContestLobby_EventScript_LinkContestArtist_1

LilycoveCity_ContestLobby_EventScript_LinkContestArtist_5:
# 269 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink
	goto LilycoveCity_ContestLobby_EventScript_LinkContestArtist_4


LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink::
# 275 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum, MSGBOX_DEFAULT
# 276 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 277 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SaveMuseumContestPainting
# 278 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 279 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 280 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_2
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_1:
# 283 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistExit
# 284 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons
# 287 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPaintingFlag
# 288 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_2:
# 281 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_1


LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink::
# 293 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum, MSGBOX_YESNO
# 294 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_2
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_1:
# 297 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs, MSGBOX_DEFAULT
# 298 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 299 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistExit
# 300 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 301 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 302 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 303 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_2:
# 295 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_1


LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon::
# 308 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	incrementgamestat GAME_STAT_RECEIVED_RIBBONS
# 309 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SYS_RIBBON_GET
# 310 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special BufferContestWinnerMonName
# 311 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistBeginExit
# 312 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 313 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_PIN
# 314 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, Common_Movement_ExclamationMark
# 315 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 316 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistReturnToPlayer
# 317 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 318 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeMementoOfPainting, MSGBOX_DEFAULT
# 319 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 320 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ReceivedARibbon, MSGBOX_DEFAULT
# 321 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitfanfare
# 322 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon, MSGBOX_DEFAULT
# 323 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_OkaySeeYou, MSGBOX_DEFAULT
# 324 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
	return


# 328 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistApproachPlayer:
# 329 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 330 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 331 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 332 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 333 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 334 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 335 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 336 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 337 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 340 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistExit:
# 341 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 342 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 343 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 344 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 345 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 346 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 347 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 348 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 349 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 352 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerFaceLinkArtist:
# 353 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 354 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 357 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistBeginExit:
# 358 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 359 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 360 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 361 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 364 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistReturnToPlayer:
# 365 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 366 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 367 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 368 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 369 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 370 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 371 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 372 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 373 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

LilycoveCity_ContestLobby_EventScript_ContestReceptionist::
# 377 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ClearLinkContestFlags
# 378 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, IsContestDebugActive
# 379 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ContestReceptionist_2
LilycoveCity_ContestLobby_EventScript_ContestReceptionist_1:
# 382 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SpeakToContestReceptionist
# 383 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_LeadToContestHall
# 384 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SetContestTrainerGfxIds
# 385 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPlayerGfx
# 386 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetContestType
# 387 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
# 388 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
	end

LilycoveCity_ContestLobby_EventScript_ContestReceptionist_2:
# 380 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetDebug
	goto LilycoveCity_ContestLobby_EventScript_ContestReceptionist_1


LilycoveCity_ContestLobby_EventScript_SetContestType::
# 393 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_RANK
# 394 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_NORMAL, LilycoveCity_ContestLobby_EventScript_SetContestType_3
# 396 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_SUPER, LilycoveCity_ContestLobby_EventScript_SetContestType_4
# 398 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_HYPER, LilycoveCity_ContestLobby_EventScript_SetContestType_5
# 400 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_MASTER, LilycoveCity_ContestLobby_EventScript_SetContestType_6
LilycoveCity_ContestLobby_EventScript_SetContestType_1:
	return

LilycoveCity_ContestLobby_EventScript_SetContestType_3:
# 395 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetNormalContestType
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1

LilycoveCity_ContestLobby_EventScript_SetContestType_4:
# 397 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetSuperContestType
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1

LilycoveCity_ContestLobby_EventScript_SetContestType_5:
# 399 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetHyperContestType
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1

LilycoveCity_ContestLobby_EventScript_SetContestType_6:
# 401 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetMasterContestType
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1


LilycoveCity_ContestLobby_EventScript_SetNormalContestType::
# 407 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_NORMAL
	return


LilycoveCity_ContestLobby_EventScript_SetSuperContestType::
# 412 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_SUPER
	return


LilycoveCity_ContestLobby_EventScript_SetHyperContestType::
# 417 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_HYPER
	return


LilycoveCity_ContestLobby_EventScript_SetMasterContestType::
# 422 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_MASTER
	return


LilycoveCity_ContestLobby_EventScript_SetDebug::
# 427 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR
# 429 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
# 431 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1, warn = FALSE
# 433 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	additem ITEM_CONTEST_PASS
# 434 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x800B, 8
# 435 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
# 436 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1
# 437 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SYS_RIBBON_GET
	end


LilycoveCity_ContestLobby_EventScript_WarpToContestHall::
# 442 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_ENTERED_CONTEST
# 443 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_CATEGORY
# 444 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_3
# 446 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_4
# 448 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_5
# 450 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_6
# 452 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_7
LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1:
	return

LilycoveCity_ContestLobby_EventScript_WarpToContestHall_3:
# 445 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToCoolContestHall
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1

LilycoveCity_ContestLobby_EventScript_WarpToContestHall_4:
# 447 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToBeautyContestHall
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1

LilycoveCity_ContestLobby_EventScript_WarpToContestHall_5:
# 449 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToCuteContestHall
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1

LilycoveCity_ContestLobby_EventScript_WarpToContestHall_6:
# 451 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToSmartContestHall
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1

LilycoveCity_ContestLobby_EventScript_WarpToContestHall_7:
# 453 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToToughContestHall
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1


LilycoveCity_ContestLobby_EventScript_WarpToCoolContestHall::
# 459 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_COOL, 7, 5
# 460 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 461 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
	return


LilycoveCity_ContestLobby_EventScript_WarpToBeautyContestHall::
# 466 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_BEAUTY, 7, 5
# 467 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 468 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
	return


LilycoveCity_ContestLobby_EventScript_WarpToCuteContestHall::
# 473 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_CUTE, 7, 5
# 474 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 475 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
	return


LilycoveCity_ContestLobby_EventScript_WarpToSmartContestHall::
# 480 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_SMART, 7, 5
# 481 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 482 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
	return


LilycoveCity_ContestLobby_EventScript_WarpToToughContestHall::
# 487 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_TOUGH, 7, 5
# 488 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 489 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
	return


LilycoveCity_ContestLobby_EventScript_LeadToContestHall::
# 494 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 495 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistApproachCounter
# 496 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 497 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 498 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 2, METATILE_Contest_WallShadow, TRUE
# 499 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 3, METATILE_Contest_FloorShadow, TRUE
# 500 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 501 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistExitCounter
# 502 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 503 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 504 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 2, METATILE_Contest_CounterFlap_Top, TRUE
# 505 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 3, METATILE_Contest_CounterFlap_Bottom, TRUE
# 506 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 507 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 508 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistFacePlayer
# 509 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 510 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerApproachReceptionist
# 511 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 512 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ComeThroughHere, MSGBOX_DEFAULT
# 513 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 514 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistWalkToContestHall
# 515 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerWalkToContestHall
# 516 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 517 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	return


# 521 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerWalkToContestHall:
# 522 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 523 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 524 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 525 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 526 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 527 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 528 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 529 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 530 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 531 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 534 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerApproachReceptionist:
# 535 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 536 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 537 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 540 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistApproachCounter:
# 541 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 542 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 543 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_down
# 544 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 547 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistExitCounter:
# 548 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 549 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 550 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_up
# 551 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 554 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistWalkToContestHall:
# 555 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 556 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 557 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 558 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 559 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 560 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 561 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 562 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 563 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 566 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistFacePlayer:
# 567 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 568 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

LilycoveCity_ContestLobby_EventScript_BlackBelt::
# 572 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MasterRankHereICome, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_Girl::
# 577 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_Artist::
# 582 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ContestFeastForEyes, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_FatMan::
# 587 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ToughContestIsExtreme, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_Fisherman::
# 592 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LavishedCareOnMon, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_NinjaBoy::
# 597 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner1::
# 602 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 603 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 604 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_1
# 605 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner2::
# 610 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 611 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 612 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_2
# 613 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner3::
# 618 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 619 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 620 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_3
# 621 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner4::
# 626 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 627 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 628 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_4
# 629 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner5::
# 634 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 635 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 636 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_5
# 637 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner6::
# 642 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 643 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 644 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_6
# 645 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_Blender3Boy::
# 650 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_LetsGetBlendingAlready, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_Blender3Girl::
# 655 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhatKindOfPokeblockWillIGet, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_BerryBlenderSpeedRecords::
# 660 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 661 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ShowBerryBlenderRecordWindow
# 662 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitbuttonpress
# 663 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special RemoveRecordsWindow
# 664 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_LinkContestResults::
# 669 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 670 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	frontier_results FACILITY_LINK_CONTEST
# 671 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitbuttonpress
# 672 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special RemoveRecordsWindow
# 673 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_BlendMaster::
# 678 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 679 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 680 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_BlendWithTheBlendMaster, MSGBOX_DEFAULT
# 681 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
	end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker1::
# 686 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 687 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhoaAwesome, MSGBOX_DEFAULT
# 688 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker2::
# 693 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 694 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WickedlyFast, MSGBOX_DEFAULT
# 695 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker3::
# 700 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 701 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhatAnExpert, MSGBOX_DEFAULT
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker4::
# 707 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 708 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 709 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_MadeAmazingPokeblocksWithMaster, MSGBOX_DEFAULT
# 710 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
	end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker5::
# 715 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 716 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 717 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_QualitiesOfBlendMaster, MSGBOX_DEFAULT
# 718 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
	end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker6::
# 723 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 724 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 725 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_MasterWorksOnSkillsInMountains, MSGBOX_DEFAULT
# 726 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
	end


LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection::
# 731 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 732 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 733 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 734 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	end


LilycoveCity_ContestLobby_EventScript_LinkContestReceptionist::
# 739 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ClearLinkContestFlags
# 740 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 741 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 742 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LinkContestReception, MSGBOX_DEFAULT
# 743 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
	end


LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest::
# 748 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_EnterContest3
# 749 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 750 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_ENTERINFO, FALSE
# 751 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 752 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_3
# 754 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_4
# 756 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_5
# 758 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_6
LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1:
	end

LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_3:
# 753 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1

LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_4:
# 755 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1

LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_5:
# 757 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1

LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_6:
# 759 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1


LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest::
# 765 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ProgressWillBeSaved, MSGBOX_YESNO
# 766 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_2
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_1:
# 769 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 770 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_5
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_4:
# 773 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_WhichContestMode
# 774 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 775 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_TEMP_D, IsWirelessAdapterConnected
# 776 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_LINK_CONTEST_MODE, FALSE
# 777 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 778 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_9
# 780 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_10
# 782 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_11
# 784 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_12
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7:
	end

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_2:
# 767 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_1

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_5:
# 771 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_4

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_9:
# 779 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_EmeraldMode
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_10:
# 781 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_GlobalMode
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_11:
# 783 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_12:
# 785 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7


LilycoveCity_ContestLobby_EventScript_EmeraldMode::
# 791 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_TEMP_C, 0
# 792 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType
	end


LilycoveCity_ContestLobby_EventScript_GlobalMode::
# 797 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_TEMP_C, 1
# 798 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_GlobalMode_2
LilycoveCity_ContestLobby_EventScript_GlobalMode_1:
# 801 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType
	end

LilycoveCity_ContestLobby_EventScript_GlobalMode_2:
# 799 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkNoWirelessGMode
	goto LilycoveCity_ContestLobby_EventScript_GlobalMode_1


LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType::
# 806 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_EnterWhichContest3
# 807 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 808 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_CONTEST_TYPE, FALSE
# 809 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 810 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORIES_COUNT, LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_3
# 812 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_4
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_1:
# 815 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
# 816 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
	end

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_3:
# 811 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_1

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_4:
# 813 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_1


LilycoveCity_ContestLobby_EventScript_LinkContestInfo::
# 821 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_WhichTopic2
# 822 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 823 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_LINK_CONTEST_INFO, FALSE
# 824 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 825 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_3
# 827 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_4
# 829 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_5
# 831 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 3, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_6
# 833 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_7
LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1:
	end

LilycoveCity_ContestLobby_EventScript_LinkContestInfo_3:
# 826 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ExplainLinkContest
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1

LilycoveCity_ContestLobby_EventScript_LinkContestInfo_4:
# 828 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ExplainEMode
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1

LilycoveCity_ContestLobby_EventScript_LinkContestInfo_5:
# 830 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ExplainGMode
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1

LilycoveCity_ContestLobby_EventScript_LinkContestInfo_6:
# 832 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1

LilycoveCity_ContestLobby_EventScript_LinkContestInfo_7:
# 834 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1


LilycoveCity_ContestLobby_EventScript_ExplainLinkContest::
# 840 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainLinkContest, MSGBOX_DEFAULT
# 841 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
	end


LilycoveCity_ContestLobby_EventScript_ExplainEMode::
# 846 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainEMode, MSGBOX_DEFAULT
# 847 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
	end


LilycoveCity_ContestLobby_EventScript_ExplainGMode::
# 852 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainGMode, MSGBOX_DEFAULT
# 853 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
	end


LilycoveCity_ContestLobby_EventScript_CancelLinkContest::
# 858 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 859 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ParticipateAnotherTime, MSGBOX_DEFAULT
# 860 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	end


LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon::
# 865 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_EnterWhichPokemon3, MSGBOX_DEFAULT
# 866 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, 0
# 867 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	choosecontestmon
# 868 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_2
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_1:
# 871 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryEnterContestMon
# 872 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, CANT_ENTER_CONTEST
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_5
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_4:
# 875 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, CAN_ENTER_CONTEST_EQUAL_RANK
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_8
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_7:
# 878 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, CAN_ENTER_CONTEST_HIGH_RANK
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_11
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_10:
# 881 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, CANT_ENTER_CONTEST_EGG
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_14
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_13:
# 884 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, CANT_ENTER_CONTEST_FAINTED
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_17
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_16:
	end

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_2:
# 869 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_1

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_5:
# 873 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkCantEnterLowRank
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_4

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_8:
# 876 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_7

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_11:
# 879 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_10

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_14:
# 882 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkCantEnterEgg
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_13

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_17:
# 885 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkCantEnterFainted
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_16


LilycoveCity_ContestLobby_EventScript_LinkCantEnterLowRank::
# 891 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MonNotQualifiedForRank, MSGBOX_DEFAULT
# 892 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
	end


LilycoveCity_ContestLobby_EventScript_LinkCantEnterEgg::
# 897 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_EggCannotTakePart2, MSGBOX_DEFAULT
# 898 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
	end


LilycoveCity_ContestLobby_EventScript_LinkCantEnterFainted::
# 903 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MonInNoCondition2, MSGBOX_DEFAULT
# 904 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
	end


LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest::
# 909 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8004
# 910 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest
	end


LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest::
# 915 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_2
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_1:
# 918 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_ge LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_5
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_4:
# 921 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_PleaseWaitBButtonCancel
# 922 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 923 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 924 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_C, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_8
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_7:
# 927 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_C, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_11
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_10:
# 930 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_C, 2
	goto_if_ge LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_14
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_13:
# 933 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_17
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_16:
# 936 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_DIFF_SELECTIONS
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_20
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_19:
# 939 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_23
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_22:
# 942 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_CONNECTION_ERROR
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_26
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_25:
# 945 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED_CONTEST_GMODE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_29
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_28:
# 948 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageinstant LilycoveCity_ContestLobby_Text_Transmitting
# 949 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	contestlinktransfer
# 950 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_0x8004
# 951 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_33
# 953 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_34
# 955 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_35
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_31:
	end

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_2:
# 916 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_1

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_5:
# 919 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_4

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_8:
# 925 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryLinkEMode
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_7

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_11:
# 928 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryLinkGMode
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_10

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_14:
# 931 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_13

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_17:
# 934 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_16

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_20:
# 937 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_19

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_23:
# 940 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_22

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_26:
# 943 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkError
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_25

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_29:
# 946 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkModeDifference
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_28

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_33:
# 952 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_StartLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_31

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_34:
# 954 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_31

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_35:
# 956 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkTransmissionError
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_31


LilycoveCity_ContestLobby_EventScript_TryLinkEMode::
# 962 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryContestEModeLinkup
# 963 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
	return


LilycoveCity_ContestLobby_EventScript_TryLinkGMode::
# 968 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryContestGModeLinkup
# 969 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
	return


LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentContest::
# 974 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayersChoseDifferentContest, MSGBOX_DEFAULT
# 975 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	end


LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices::
# 980 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayersMadeDifferentChoice, MSGBOX_DEFAULT
# 981 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	end


LilycoveCity_ContestLobby_EventScript_CancelLinkModeDifference::
# 986 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayerAt4PCounterUseGMode, MSGBOX_DEFAULT
# 987 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	end


LilycoveCity_ContestLobby_EventScript_CancelLinkError::
# 992 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 993 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox Text_LinkErrorPleaseReset, MSGBOX_DEFAULT
# 994 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	end


LilycoveCity_ContestLobby_EventScript_CancelLinkNoWirelessGMode::
# 999 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 1000 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_NoWirelessAdapterInGMode, MSGBOX_DEFAULT
# 1001 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	end


LilycoveCity_ContestLobby_EventScript_CancelLinkTransmissionError::
# 1006 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TransmissionError, MSGBOX_DEFAULT
# 1007 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	end


LilycoveCity_ContestLobby_EventScript_StartLinkContest::
# 1012 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special GetContestPlayerId
# 1013 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addvar VAR_0x8004, 1
# 1014 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8004
# 1015 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_YourMonIsEntryNumX
# 1016 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 1017 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	subvar VAR_0x8004, 1
# 1018 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall
# 1019 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 1
# 1020 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SetLinkContestPlayerGfx
# 1021 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_LINK
# 1022 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
# 1023 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
	end


LilycoveCity_ContestLobby_EventScript_SetLinkGroupType::
# 1028 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_COOL
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_2
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_1:
# 1031 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_BEAUTY
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_5
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_4:
# 1034 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_CUTE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_8
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_7:
# 1037 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_SMART
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_11
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_10:
# 1040 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_TOUGH
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_14
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_13:
# 1043 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
	end

LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_2:
# 1029 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetLinkGroupCoolContest
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_1

LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_5:
# 1032 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetLinkGroupBeautyContest
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_4

LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_8:
# 1035 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetLinkGroupCuteContest
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_7

LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_11:
# 1038 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetLinkGroupSmartContest
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_10

LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_14:
# 1041 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetLinkGroupToughContest
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_13


LilycoveCity_ContestLobby_EventScript_SetLinkGroupCoolContest::
# 1048 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_COOL_CONTEST
	return


LilycoveCity_ContestLobby_EventScript_SetLinkGroupBeautyContest::
# 1053 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BEAUTY_CONTEST
	return


LilycoveCity_ContestLobby_EventScript_SetLinkGroupCuteContest::
# 1058 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_CUTE_CONTEST
	return


LilycoveCity_ContestLobby_EventScript_SetLinkGroupSmartContest::
# 1063 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_SMART_CONTEST
	return


LilycoveCity_ContestLobby_EventScript_SetLinkGroupToughContest::
# 1068 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_TOUGH_CONTEST
	return


LilycoveCity_ContestLobby_EventScript_DecideLinkLeader::
# 1073 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_PleaseDecideLinkLeader
# 1074 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 1075 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 1076 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 1077 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_3
# 1079 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_4
# 1081 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_5
# 1083 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_6
LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1:
	end

LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_3:
# 1078 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1

LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_4:
# 1080 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1

LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_5:
# 1082 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1

LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_6:
# 1084 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1


LilycoveCity_ContestLobby_EventScript_TryLeadGroup::
# 1090 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryBecomeLinkLeader
# 1091 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_SUCCESS
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryLeadGroup_2
LilycoveCity_ContestLobby_EventScript_TryLeadGroup_1:
# 1094 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryLeadGroup_5
LilycoveCity_ContestLobby_EventScript_TryLeadGroup_4:
# 1097 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryLeadGroup_8
LilycoveCity_ContestLobby_EventScript_TryLeadGroup_7:
# 1100 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	end

LilycoveCity_ContestLobby_EventScript_TryLeadGroup_2:
# 1092 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup_1

LilycoveCity_ContestLobby_EventScript_TryLeadGroup_5:
# 1095 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup_4

LilycoveCity_ContestLobby_EventScript_TryLeadGroup_8:
# 1098 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup_7


LilycoveCity_ContestLobby_EventScript_TryJoinGroup::
# 1105 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryJoinLinkGroup
# 1106 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_SUCCESS
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryJoinGroup_2
LilycoveCity_ContestLobby_EventScript_TryJoinGroup_1:
# 1109 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryJoinGroup_5
LilycoveCity_ContestLobby_EventScript_TryJoinGroup_4:
# 1112 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryJoinGroup_8
LilycoveCity_ContestLobby_EventScript_TryJoinGroup_7:
# 1115 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	end

LilycoveCity_ContestLobby_EventScript_TryJoinGroup_2:
# 1107 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup_1

LilycoveCity_ContestLobby_EventScript_TryJoinGroup_5:
# 1110 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup_4

LilycoveCity_ContestLobby_EventScript_TryJoinGroup_8:
# 1113 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup_7


LilycoveCity_ContestLobby_EventScript_TryBecomeLinkLeader::
# 1120 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryBecomeLinkLeader
# 1121 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
	return


LilycoveCity_ContestLobby_EventScript_TryJoinLinkGroup::
# 1126 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryJoinLinkGroup
# 1127 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
	return


LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided::
# 1132 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageinstant LilycoveCity_ContestLobby_Text_Transmitting
# 1133 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	contestlinktransfer
# 1134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_StartLinkContest
	end


LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall::
# 1139 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_ContestBeginShortly
# 1140 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 1141 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 1142 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 1143 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistApproachCounter
# 1144 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 1145 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 1146 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 2, METATILE_Contest_WallShadow, TRUE
# 1147 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 3, METATILE_Contest_FloorShadow, TRUE
# 1148 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 1149 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistExitCounter
# 1150 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 1151 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 1152 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 2, METATILE_Contest_CounterFlap_Top, TRUE
# 1153 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 3, METATILE_Contest_CounterFlap_Bottom, TRUE
# 1154 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 1155 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 1156 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistFacePlayer
# 1157 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 1158 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerApproachLinkReceptionist
# 1159 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 1160 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_ComeThroughHere
# 1161 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 1162 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 1163 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 1164 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_DelayIfContestWithRSPlayer
# 1165 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistWalkToContestHall
# 1166 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerWalkToLinkContestHall
# 1167 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 1168 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	return


# 1172 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerWalkToLinkContestHall:
# 1173 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1174 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1175 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1176 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1177 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1178 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 1179 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 1180 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 1181 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 1182 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 1183 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 1186 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerApproachLinkReceptionist:
# 1187 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1188 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 1191 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistApproachCounter:
# 1192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1193 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1194 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_down
# 1195 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 1198 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistExitCounter:
# 1199 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 1200 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 1201 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_up
# 1202 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 1205 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistWalkToContestHall:
# 1206 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1207 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1208 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1209 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 1210 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 1211 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 1212 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 1213 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 1214 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 1215 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

# 1218 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistFacePlayer:
# 1219 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 1220 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end

LilycoveCity_ContestLobby_EventScript_LittleGirl::
# 1224 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 1225 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 1226 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEBLOCK_CASE, LilycoveCity_ContestLobby_EventScript_LittleGirl_2
LilycoveCity_ContestLobby_EventScript_LittleGirl_1:
# 1229 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase, MSGBOX_DEFAULT
# 1230 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	end

LilycoveCity_ContestLobby_EventScript_LittleGirl_2:
# 1227 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LittleGirlHaveCase
	goto LilycoveCity_ContestLobby_EventScript_LittleGirl_1


LilycoveCity_ContestLobby_EventScript_LittleGirlHaveCase::
# 1235 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries, MSGBOX_DEFAULT
# 1236 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	end


LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase::
# 1240 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Yippee!\p"
	.string "The lady at the reception counter\n"
	.string "gave me a case for {POKEBLOCK}S!$"

LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries::
# 1246 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Make {POKEBLOCK}S and put them in there.\p"
	.string "When you make a {POKEBLOCK}, everyone\n"
	.string "has to put in a different BERRY.$"

LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint::
# 1252 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Congratulations!\p"
	.string "I did a painting of your POKéMON to\n"
	.string "commemorate its victory…\p"
	.string "Well, your POKéMON's appeals were\n"
	.string "so fantastic, it spurred me into\l"
	.string "painting better than I usually do.\l"
	.string "Look, see?$"

LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum::
# 1262 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "What do you think? I'm confident in\n"
	.string "what I've done, but do you like it?\p"
	.string "A work of this caliber, it wouldn't look\n"
	.string "out of place in an art museum.\p"
	.string "Huh? An art museum really is looking\n"
	.string "for paintings?\p"
	.string "Do you think I should take this there?$"

LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum::
# 1272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "What, really? Then, sure, I will take\n"
	.string "this painting there right now.\p"
	.string "I'll give it a proper title, too.\p"
	.string "I hope they'll like it and consider\n"
	.string "exhibiting this.\p"
	.string "Please check if they did accept this.\n"
	.string "Thank you!$"

LilycoveCity_ContestLobby_Text_TakeMementoOfPainting::
# 1282 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh, that's right!\p"
	.string "As a memento of me painting your\n"
	.string "POKéMON, please take this.$"

LilycoveCity_ContestLobby_Text_ReceivedARibbon::
# 1288 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{PLAYER} received a RIBBON.$"

LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon::
# 1292 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{PLAYER} put the RIBBON on\n"
	.string "{STR_VAR_1}.$"

LilycoveCity_ContestLobby_Text_OkaySeeYou::
# 1297 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Okay, see you!$"

LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum::
# 1301 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh… Then, I guess I'll just take\n"
	.string "this home with me…\p"
	.string "But, you know, I would like to take\n"
	.string "this to the art museum… Okay?$"

LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs::
# 1308 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh, fine, that's the way it is.\n"
	.string "I will hang this in my own house.\p"
	.string "I'll just have to try harder next time.\n"
	.string "Well, be seeing you.$"

LilycoveCity_ContestLobby_Text_MasterRankHereICome::
# 1315 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Hoo, boy… Master Rank CONTESTS,\n"
	.string "here I come.\p"
	.string "The world will know that my dearest\n"
	.string "POKéMON is the cutest being in all\l"
	.string "existence. The time has come!\l"
	.string "Uheheheh.$"

LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere::
# 1324 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "You can see a whole variety of\n"
	.string "POKéMON here.\p"
	.string "That's why I make this place a regular\n"
	.string "part of my daily stroll.$"

LilycoveCity_ContestLobby_Text_ContestFeastForEyes::
# 1331 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Wow, coming out to a CONTEST is\n"
	.string "a feast for these eyes!\p"
	.string "Would you look at all the POKéMON\n"
	.string "that just scream to be painted?$"

LilycoveCity_ContestLobby_Text_ToughContestIsExtreme::
# 1338 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "The TOUGHNESS CONTEST is like\n"
	.string "extreme, man!\p"
	.string "Those muscular appeals…\n"
	.string "Cascading sweat… I swoon!$"

LilycoveCity_ContestLobby_Text_LavishedCareOnMon::
# 1345 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Day in and day out, I lavished my care\n"
	.string "on this POKéMON.\p"
	.string "Its condition is peaking.\n"
	.string "Today, victory is mine!$"

LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily::
# 1352 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I made {POKEBLOCK}S with Mom, Dad, and\n"
	.string "Big Sister. They turned out great!\p"
	.string "I bet you can make smoother, better\n"
	.string "{POKEBLOCK}S if you have more people.$"
