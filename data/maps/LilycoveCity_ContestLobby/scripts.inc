# 1 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_MapScripts::
# 3 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 4 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_ContestLobby_OnTransition
# 5 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 3 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 6 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 9 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 4 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 11 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script_2 VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1, LilycoveCity_ContestLobby_EventScript_TryDoContestArtist
# 12 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 5 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 13 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script_2 VAR_LILYCOVE_CONTEST_LOBBY_STATE, 2, LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist
# 14 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.2byte 0
# 15 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 16 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 17 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_OnTransition::
# 18 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 10 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 19 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryShowContestReporter
# 20 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 11 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 21 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster
# 22 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 23 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 24 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 25 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster::
# 26 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 16 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 27 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	getpokenewsactive POKENEWS_BLENDMASTER
# 28 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 17 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 29 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 30 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster_2
# 31 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster_1:
# 32 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 20 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 33 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
# 34 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 21 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 35 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
# 36 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 38 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster_2:
# 39 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 18 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 40 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowBlendMaster
# 41 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster_1
# 42 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 43 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 44 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowBlendMaster::
# 45 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 26 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 46 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
# 47 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 27 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 48 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
# 49 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 50 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 51 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 52 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryDoContestArtist::
# 53 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 32 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 54 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_EventScript_TryDoContestArtist_2
# 55 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryDoContestArtist_1:
# 56 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 35 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 57 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 58 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 59 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 60 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryDoContestArtist_2:
# 61 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 33 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 62 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ContestArtist
# 63 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryDoContestArtist_1
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 65 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 66 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestArtist::
# 67 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 40 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 68 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 69 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 41 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 70 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addobject LOCALID_CONTEST_LOBBY_ARTIST
# 71 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 42 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 72 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistApproachPlayer
# 73 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 43 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 74 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement LOCALID_CONTEST_LOBBY_ARTIST
# 75 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 44 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 76 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerFaceArtist
# 77 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 45 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 78 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 79 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 46 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 80 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint, MSGBOX_DEFAULT
# 81 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 47 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 82 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 83 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 48 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 84 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 49 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 86 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_ARTIST
# 87 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 50 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 88 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 89 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 51 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 90 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum, MSGBOX_YESNO
# 91 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 52 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 92 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
# 93 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ContestArtist_2
# 94 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestArtist_1:
# 95 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 55 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, NO
# 97 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ContestArtist_5
# 98 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestArtist_4:
# 99 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 58 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 100 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 101 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 102 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 103 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestArtist_2:
# 104 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 53 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 105 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
# 106 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ContestArtist_1
# 107 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 108 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestArtist_5:
# 109 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 56 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 110 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting
# 111 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ContestArtist_4
# 112 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 113 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 114 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum::
# 115 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 63 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 116 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum, MSGBOX_DEFAULT
# 117 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 118 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 119 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 65 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 120 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SaveMuseumContestPainting
# 121 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 66 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 122 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 123 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 67 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 124 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 125 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 68 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 126 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 127 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_2
# 128 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_1:
# 129 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 71 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 130 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistExit
# 131 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 72 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 132 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 133 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 73 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_ARTIST
# 135 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 74 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 136 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons
# 137 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 75 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 138 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPaintingFlag
# 139 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 76 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 140 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 141 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 142 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 143 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_2:
# 144 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 69 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 145 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon
# 146 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_1
# 147 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 148 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 149 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting::
# 150 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 81 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 151 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum, MSGBOX_YESNO
# 152 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 82 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 153 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
# 154 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_2
# 155 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_1:
# 156 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 85 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 157 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs, MSGBOX_DEFAULT
# 158 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 86 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 159 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 160 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 87 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 161 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistExit
# 162 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 88 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 163 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 164 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 89 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 165 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 166 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 90 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 167 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_ARTIST
# 168 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 91 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 169 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 170 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 171 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 172 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_2:
# 173 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 83 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 174 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
# 175 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_1
# 176 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 177 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 178 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon::
# 179 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 180 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	incrementgamestat GAME_STAT_RECEIVED_RIBBONS
# 181 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 97 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 182 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special BufferContestWinnerMonName
# 183 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 98 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 184 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistBeginToExit
# 185 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 99 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 186 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 187 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 100 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 188 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_PIN
# 189 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 101 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 190 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, Common_Movement_ExclamationMark
# 191 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 102 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 193 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 103 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 194 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistReturnToPlayer
# 195 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 104 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 196 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 197 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 105 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 198 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeMementoOfPainting, MSGBOX_DEFAULT
# 199 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 106 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 200 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 107 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 202 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ReceivedARibbon, MSGBOX_DEFAULT
# 203 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 108 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 204 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitfanfare
# 205 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 109 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 206 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon, MSGBOX_DEFAULT
# 207 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 110 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 208 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_OkaySeeYou, MSGBOX_DEFAULT
# 209 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 111 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 210 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 211 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 212 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 213 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 214 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons::
# 215 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 116 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 216 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 217 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 117 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 218 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_0x8004
# 219 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 118 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 220 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_3
# 221 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 120 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 222 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_4
# 223 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 122 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 224 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 3, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_5
# 225 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 124 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 226 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 4, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_6
# 227 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 126 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 228 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 5, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_7
# 229 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1:
# 230 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 231 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 232 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_3:
# 233 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 119 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 234 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowPatron1
# 235 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1
# 236 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 237 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_4:
# 238 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 121 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 239 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowPatron2
# 240 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1
# 241 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 242 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_5:
# 243 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 123 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 244 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowPatron3
# 245 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1
# 246 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 247 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_6:
# 248 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 125 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 249 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowPatron4
# 250 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1
# 251 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 252 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_7:
# 253 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 127 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 254 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ShowTourists
# 255 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1
# 256 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 257 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 258 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron1::
# 259 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 133 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 260 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
# 261 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 262 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 263 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 264 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron2::
# 265 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 138 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
# 267 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 268 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 269 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 270 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron3::
# 271 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 143 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3
# 273 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 274 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 275 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 276 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron4::
# 277 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 148 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 278 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4
# 279 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 280 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 281 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 282 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowTourists::
# 283 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 153 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 284 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 287 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 288 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPaintingFlag::
# 289 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 158 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 290 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_CATEGORY
# 291 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 159 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 292 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_3
# 293 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 161 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 294 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_4
# 295 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 163 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 296 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_5
# 297 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 165 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 298 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_6
# 299 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 167 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 300 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_7
# 301 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1:
# 302 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 303 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 304 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_3:
# 305 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 160 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 306 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_MadeCoolPainting
# 307 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1
# 308 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 309 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_4:
# 310 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 162 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 311 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_MadeBeautyPainting
# 312 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1
# 313 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 314 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_5:
# 315 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 164 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 316 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_MadeCutePainting
# 317 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1
# 318 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 319 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_6:
# 320 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 166 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 321 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_MadeSmartPainting
# 322 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1
# 323 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 324 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_7:
# 325 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 168 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 326 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_MadeToughPainting
# 327 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1
# 328 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 329 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 330 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeCoolPainting::
# 331 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 174 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 332 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_COOL_PAINTING_MADE
# 333 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 334 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 335 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 336 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeBeautyPainting::
# 337 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 179 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 338 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_BEAUTY_PAINTING_MADE
# 339 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 340 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 341 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 342 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeCutePainting::
# 343 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 184 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 344 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_CUTE_PAINTING_MADE
# 345 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 346 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 347 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 348 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeSmartPainting::
# 349 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 189 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 350 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SMART_PAINTING_MADE
# 351 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 352 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 353 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 354 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeToughPainting::
# 355 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 194 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 356 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_TOUGH_PAINTING_MADE
# 357 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 358 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 359 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 360 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 198 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 361 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistApproachPlayer:
# 362 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 199 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 363 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 364 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 200 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 365 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 366 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 201 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 367 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 368 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 202 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 369 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 370 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 203 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 371 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 372 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 204 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 373 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 374 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 205 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 375 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 376 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 206 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 377 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 378 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 379 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 209 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 380 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistExit:
# 381 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 210 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 382 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 383 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 211 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 384 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 385 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 212 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 386 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 387 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 213 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 388 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 389 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 214 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 390 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 391 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 215 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 392 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 393 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 216 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 394 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 395 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 217 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 396 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 397 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 218 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 398 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 399 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 400 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 221 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 401 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerFaceArtist:
# 402 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 222 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 403 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 404 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 223 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 405 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 406 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 407 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 226 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 408 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistBeginToExit:
# 409 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 227 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 410 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 411 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 228 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 412 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 413 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 229 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 414 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 415 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 230 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 416 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 417 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 418 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 233 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 419 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistReturnToPlayer:
# 420 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 234 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 421 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 422 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 235 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 423 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 424 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 236 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 425 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 426 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 237 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 427 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 428 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 238 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 429 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 430 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 239 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 431 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 432 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 240 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 433 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 434 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 241 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 435 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 436 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 242 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 437 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 438 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 439 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist::
# 440 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 246 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 441 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist_2
# 442 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist_1:
# 443 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 249 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 444 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 445 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 446 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 447 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist_2:
# 448 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 247 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 449 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestArtist
# 450 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist_1
# 451 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 452 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 453 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestArtist::
# 454 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 254 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 455 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 456 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 255 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 457 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 458 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 256 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 459 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistApproachPlayer
# 460 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 257 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 461 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 462 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 258 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 463 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerFaceLinkArtist
# 464 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 259 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 465 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 466 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 260 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 467 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint, MSGBOX_DEFAULT
# 468 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 261 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 469 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 470 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 262 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 471 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 472 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 263 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 473 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_ARTIST
# 474 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 264 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 475 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum, MSGBOX_YESNO
# 476 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 265 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 477 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
# 478 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_LinkContestArtist_2
# 479 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestArtist_1:
# 480 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 268 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 481 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, NO
# 482 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_LinkContestArtist_5
# 483 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestArtist_4:
# 484 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 485 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 486 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestArtist_2:
# 487 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 488 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink
# 489 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestArtist_1
# 490 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 491 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestArtist_5:
# 492 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 269 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 493 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink
# 494 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestArtist_4
# 495 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 496 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 497 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink::
# 498 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 275 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 499 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum, MSGBOX_DEFAULT
# 500 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 276 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 501 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 502 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 277 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 503 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SaveMuseumContestPainting
# 504 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 278 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 505 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 506 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 279 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 507 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 508 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 280 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 509 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 510 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_2
# 511 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_1:
# 512 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 283 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 513 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistExit
# 514 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 284 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 515 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 516 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 517 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 518 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 519 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons
# 520 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 287 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 521 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPaintingFlag
# 522 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 288 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 523 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 524 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 525 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 526 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_2:
# 527 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 281 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 528 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon
# 529 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_1
# 530 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 531 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 532 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink::
# 533 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 293 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 534 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum, MSGBOX_YESNO
# 535 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 294 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 536 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
# 537 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_2
# 538 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_1:
# 539 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 297 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 540 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs, MSGBOX_DEFAULT
# 541 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 298 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 542 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 543 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 299 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 544 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistExit
# 545 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 300 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 546 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 547 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 301 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 548 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 549 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 302 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 550 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 551 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 303 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 552 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 553 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 554 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 555 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_2:
# 556 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 295 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 557 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink
# 558 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_1
# 559 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 560 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 561 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon::
# 562 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 308 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 563 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	incrementgamestat GAME_STAT_RECEIVED_RIBBONS
# 564 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 309 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 565 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SYS_RIBBON_GET
# 566 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 310 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 567 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special BufferContestWinnerMonName
# 568 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 311 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 569 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistBeginExit
# 570 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 312 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 571 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 572 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 313 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 573 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_PIN
# 574 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 314 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 575 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, Common_Movement_ExclamationMark
# 576 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 315 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 577 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 578 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 316 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 579 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistReturnToPlayer
# 580 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 317 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 581 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 582 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 318 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 583 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeMementoOfPainting, MSGBOX_DEFAULT
# 584 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 319 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 585 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 586 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 320 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 587 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ReceivedARibbon, MSGBOX_DEFAULT
# 588 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 321 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 589 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitfanfare
# 590 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 322 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 591 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon, MSGBOX_DEFAULT
# 592 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 323 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 593 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_OkaySeeYou, MSGBOX_DEFAULT
# 594 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 324 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 595 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 596 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 597 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 598 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 599 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 328 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 600 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistApproachPlayer:
# 601 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 329 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 602 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 603 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 330 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 604 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 605 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 331 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 606 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 607 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 332 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 608 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 609 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 333 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 610 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 611 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 334 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 612 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 613 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 335 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 614 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 615 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 336 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 616 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 617 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 337 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 618 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 619 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 620 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 340 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 621 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistExit:
# 622 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 341 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 623 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 624 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 342 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 625 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 626 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 343 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 627 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 628 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 344 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 629 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 630 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 345 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 631 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 632 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 346 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 633 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 634 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 347 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 635 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 636 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 348 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 637 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 638 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 349 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 639 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 640 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 641 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 352 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 642 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerFaceLinkArtist:
# 643 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 353 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 644 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 645 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 354 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 646 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 647 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 648 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 357 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 649 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistBeginExit:
# 650 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 358 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 651 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 652 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 359 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 653 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 654 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 360 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 655 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 656 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 361 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 657 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 658 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 659 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 364 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 660 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistReturnToPlayer:
# 661 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 365 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 662 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 663 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 366 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 664 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 665 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 367 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 666 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 667 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 368 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 668 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 669 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 369 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 670 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 671 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 370 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 672 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 673 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 371 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 674 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 675 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 372 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 676 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 677 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 373 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 678 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 679 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 680 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestReceptionist::
# 681 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 377 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 682 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ClearLinkContestFlags
# 683 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 378 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 684 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, IsContestDebugActive
# 685 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 379 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 686 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 687 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ContestReceptionist_2
# 688 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestReceptionist_1:
# 689 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 382 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 690 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SpeakToContestReceptionist
# 691 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 383 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 692 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_LeadToContestHall
# 693 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 384 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 694 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SetContestTrainerGfxIds
# 695 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 385 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 696 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPlayerGfx
# 697 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 386 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 698 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetContestType
# 699 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 387 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 700 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
# 701 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 388 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 704 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 705 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestReceptionist_2:
# 706 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 380 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 707 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetDebug
# 708 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ContestReceptionist_1
# 709 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 710 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 711 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetContestType::
# 712 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 393 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 713 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_RANK
# 714 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 394 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 715 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_NORMAL, LilycoveCity_ContestLobby_EventScript_SetContestType_3
# 716 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 396 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 717 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_SUPER, LilycoveCity_ContestLobby_EventScript_SetContestType_4
# 718 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 398 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 719 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_HYPER, LilycoveCity_ContestLobby_EventScript_SetContestType_5
# 720 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 400 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 721 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_MASTER, LilycoveCity_ContestLobby_EventScript_SetContestType_6
# 722 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetContestType_1:
# 723 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 724 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 725 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetContestType_3:
# 726 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 395 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 727 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetNormalContestType
# 728 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1
# 729 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 730 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetContestType_4:
# 731 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 397 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 732 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetSuperContestType
# 733 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1
# 734 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 735 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetContestType_5:
# 736 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 399 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 737 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetHyperContestType
# 738 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1
# 739 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 740 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetContestType_6:
# 741 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 401 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 742 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetMasterContestType
# 743 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1
# 744 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 745 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 746 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetNormalContestType::
# 747 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 407 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 748 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_NORMAL
# 749 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 750 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 751 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 752 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetSuperContestType::
# 753 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 412 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 754 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_SUPER
# 755 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 756 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 757 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 758 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetHyperContestType::
# 759 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 417 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 760 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_HYPER
# 761 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 762 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 763 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 764 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetMasterContestType::
# 765 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 422 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 766 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_MASTER
# 767 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 768 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 769 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 770 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetDebug::
# 771 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 427 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 772 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR
# 773 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 429 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 774 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
# 775 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 431 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 776 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1, warn = FALSE
# 777 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 433 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 778 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	additem ITEM_CONTEST_PASS
# 779 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 434 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 780 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x800B, 8
# 781 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 435 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 782 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
# 783 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 436 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 784 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1
# 785 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 437 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 786 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SYS_RIBBON_GET
# 787 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 788 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 789 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 790 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToContestHall::
# 791 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 442 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 792 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_ENTERED_CONTEST
# 793 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 443 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 794 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_CATEGORY
# 795 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 444 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 796 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_3
# 797 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 446 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 798 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_4
# 799 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 448 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 800 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_5
# 801 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 450 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 802 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_6
# 803 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 452 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 804 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_7
# 805 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1:
# 806 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 807 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 808 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToContestHall_3:
# 809 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 445 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 810 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToCoolContestHall
# 811 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1
# 812 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 813 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToContestHall_4:
# 814 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 447 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 815 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToBeautyContestHall
# 816 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1
# 817 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 818 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToContestHall_5:
# 819 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 449 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 820 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToCuteContestHall
# 821 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1
# 822 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 823 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToContestHall_6:
# 824 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 451 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 825 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToSmartContestHall
# 826 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1
# 827 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 828 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToContestHall_7:
# 829 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 453 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 830 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToToughContestHall
# 831 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1
# 832 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 833 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 834 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToCoolContestHall::
# 835 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 459 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 836 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_COOL, 7, 5
# 837 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 460 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 838 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 839 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 461 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 840 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
# 841 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 842 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 843 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 844 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToBeautyContestHall::
# 845 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 466 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 846 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_BEAUTY, 7, 5
# 847 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 467 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 848 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 849 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 468 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 850 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
# 851 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 852 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 853 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 854 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToCuteContestHall::
# 855 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 473 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 856 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_CUTE, 7, 5
# 857 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 474 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 858 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 859 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 475 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 860 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
# 861 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 862 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 863 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 864 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToSmartContestHall::
# 865 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 480 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 866 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_SMART, 7, 5
# 867 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 481 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 868 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 869 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 482 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 870 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
# 871 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 872 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 873 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 874 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToToughContestHall::
# 875 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 487 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 876 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_TOUGH, 7, 5
# 877 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 488 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 878 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 879 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 489 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 880 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
# 881 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 882 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 883 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 884 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToContestHall::
# 885 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 494 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 886 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 887 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 495 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 888 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistApproachCounter
# 889 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 496 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 890 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 891 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 497 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 892 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 893 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 498 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 894 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 2, METATILE_Contest_WallShadow, TRUE
# 895 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 499 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 896 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 3, METATILE_Contest_FloorShadow, TRUE
# 897 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 500 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 898 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 899 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 501 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 900 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistExitCounter
# 901 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 502 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 902 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 903 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 503 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 904 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 905 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 504 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 906 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 2, METATILE_Contest_CounterFlap_Top, TRUE
# 907 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 505 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 908 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 3, METATILE_Contest_CounterFlap_Bottom, TRUE
# 909 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 506 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 910 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 911 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 507 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 912 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 913 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 508 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 914 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistFacePlayer
# 915 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 509 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 916 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 917 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 510 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 918 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerApproachReceptionist
# 919 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 511 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 920 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 921 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 512 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 922 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ComeThroughHere, MSGBOX_DEFAULT
# 923 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 513 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 924 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 925 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 514 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 926 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistWalkToContestHall
# 927 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 515 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 928 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerWalkToContestHall
# 929 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 516 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 930 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 931 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 517 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 932 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 933 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 934 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 935 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 936 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 521 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 937 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerWalkToContestHall:
# 938 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 522 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 939 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 940 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 523 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 941 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 942 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 524 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 943 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 944 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 525 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 945 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 946 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 526 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 947 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 948 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 527 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 949 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 950 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 528 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 951 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 952 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 529 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 953 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 954 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 530 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 955 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 956 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 531 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 957 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 958 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 959 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 534 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 960 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerApproachReceptionist:
# 961 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 535 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 962 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 963 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 536 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 964 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 965 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 537 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 966 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 967 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 968 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 540 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 969 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistApproachCounter:
# 970 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 541 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 971 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 972 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 542 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 973 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 974 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 543 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 975 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_down
# 976 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 544 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 977 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 978 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 979 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 547 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 980 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistExitCounter:
# 981 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 548 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 982 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 983 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 549 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 984 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 985 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 550 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 986 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_up
# 987 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 551 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 988 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 989 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 990 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 554 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 991 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistWalkToContestHall:
# 992 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 555 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 993 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 994 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 556 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 995 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 996 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 557 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 997 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 998 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 558 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 999 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 1000 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 559 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1001 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 1002 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 560 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1003 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 1004 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 561 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1005 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 1006 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 562 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1007 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 1008 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 563 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1009 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 1010 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1011 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 566 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1012 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistFacePlayer:
# 1013 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 567 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1014 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 1015 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 568 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1016 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 1017 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1018 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlackBelt::
# 1019 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 572 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1020 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MasterRankHereICome, MSGBOX_NPC
# 1021 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1022 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1023 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1024 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Girl::
# 1025 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 577 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1026 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere, MSGBOX_NPC
# 1027 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1028 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1029 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1030 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Artist::
# 1031 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 582 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1032 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ContestFeastForEyes, MSGBOX_NPC
# 1033 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1034 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1035 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1036 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_FatMan::
# 1037 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 587 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1038 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ToughContestIsExtreme, MSGBOX_NPC
# 1039 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1040 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1041 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1042 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Fisherman::
# 1043 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 592 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1044 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LavishedCareOnMon, MSGBOX_NPC
# 1045 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1046 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1047 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1048 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_NinjaBoy::
# 1049 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 597 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1050 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily, MSGBOX_NPC
# 1051 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1052 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1053 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1054 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner1::
# 1055 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 602 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1056 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 1057 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 603 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1058 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1059 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 604 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1060 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_1
# 1061 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 605 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1062 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 1063 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1064 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1065 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1066 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner2::
# 1067 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 610 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1068 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 1069 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 611 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1070 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1071 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 612 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1072 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_2
# 1073 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 613 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1074 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 1075 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1076 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1077 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1078 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner3::
# 1079 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 618 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1080 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 1081 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 619 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1082 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1083 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 620 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1084 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_3
# 1085 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 621 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1086 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 1087 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1088 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1089 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1090 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner4::
# 1091 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 626 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1092 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 1093 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 627 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1094 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1095 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 628 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1096 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_4
# 1097 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 629 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1098 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 1099 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1100 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1101 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1102 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner5::
# 1103 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 634 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1104 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 1105 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 635 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1106 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1107 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 636 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1108 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_5
# 1109 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 637 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1110 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 1111 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1112 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1113 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1114 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner6::
# 1115 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 642 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1116 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 1117 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 643 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1118 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1119 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 644 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1120 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_6
# 1121 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 645 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1122 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 1123 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1124 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1125 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1126 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Blender3Boy::
# 1127 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 650 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1128 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_LetsGetBlendingAlready, MSGBOX_NPC
# 1129 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1130 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1131 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1132 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Blender3Girl::
# 1133 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 655 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhatKindOfPokeblockWillIGet, MSGBOX_NPC
# 1135 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1136 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1137 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1138 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BerryBlenderSpeedRecords::
# 1139 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 660 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1140 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 1141 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 661 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1142 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ShowBerryBlenderRecordWindow
# 1143 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 662 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1144 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitbuttonpress
# 1145 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 663 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1146 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special RemoveRecordsWindow
# 1147 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 664 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1148 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 1149 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1150 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1151 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1152 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestResults::
# 1153 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 669 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1154 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 1155 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 670 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1156 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	frontier_results FACILITY_LINK_CONTEST
# 1157 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 671 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1158 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitbuttonpress
# 1159 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 672 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1160 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special RemoveRecordsWindow
# 1161 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 673 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1162 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 1163 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1164 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1165 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1166 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMaster::
# 1167 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 678 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1168 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 1169 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 679 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1170 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 1171 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 680 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1172 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_BlendWithTheBlendMaster, MSGBOX_DEFAULT
# 1173 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 681 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1174 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 1175 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1176 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1177 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1178 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker1::
# 1179 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 686 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1180 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 1181 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 687 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1182 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhoaAwesome, MSGBOX_DEFAULT
# 1183 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 688 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1184 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 1185 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1186 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1187 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1188 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker2::
# 1189 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 693 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1190 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 1191 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 694 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WickedlyFast, MSGBOX_DEFAULT
# 1193 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 695 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1194 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 1195 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1196 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1197 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1198 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker3::
# 1199 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 700 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1200 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 1201 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 701 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1202 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhatAnExpert, MSGBOX_DEFAULT
# 1203 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1204 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 1205 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1206 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1207 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1208 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker4::
# 1209 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 707 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1210 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 1211 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 708 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1212 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 1213 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 709 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1214 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_MadeAmazingPokeblocksWithMaster, MSGBOX_DEFAULT
# 1215 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 710 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1216 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 1217 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1218 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1219 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1220 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker5::
# 1221 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 715 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1222 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 1223 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 716 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1224 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 1225 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 717 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1226 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_QualitiesOfBlendMaster, MSGBOX_DEFAULT
# 1227 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 718 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1228 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 1229 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1230 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1231 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1232 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker6::
# 1233 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 723 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1234 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 1235 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 724 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1236 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 1237 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 725 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1238 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_MasterWorksOnSkillsInMountains, MSGBOX_DEFAULT
# 1239 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 726 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1240 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 1241 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1242 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1243 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1244 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection::
# 1245 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 731 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1246 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 1247 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 732 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1248 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1249 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 733 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1250 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 1251 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 734 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1252 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 1253 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1254 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1255 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1256 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestReceptionist::
# 1257 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 739 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1258 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ClearLinkContestFlags
# 1259 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 740 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1260 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 1261 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 741 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1262 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 1263 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 742 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1264 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LinkContestReception, MSGBOX_DEFAULT
# 1265 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 743 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
# 1267 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1268 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1269 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1270 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest::
# 1271 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 748 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_EnterContest3
# 1273 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 749 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1274 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 1275 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 750 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1276 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_ENTERINFO, FALSE
# 1277 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 751 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1278 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 1279 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 752 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1280 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_3
# 1281 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 754 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1282 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_4
# 1283 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 756 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1284 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_5
# 1285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 758 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_6
# 1287 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1:
# 1288 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1289 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1290 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_3:
# 1291 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 753 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1292 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest
# 1293 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1
# 1294 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1295 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_4:
# 1296 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 755 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1297 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 1298 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1
# 1299 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1300 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_5:
# 1301 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 757 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1302 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1303 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1
# 1304 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1305 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_6:
# 1306 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 759 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1307 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1308 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1
# 1309 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1310 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1311 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest::
# 1312 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 765 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1313 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ProgressWillBeSaved, MSGBOX_YESNO
# 1314 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 766 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1315 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, NO
# 1316 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_2
# 1317 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_1:
# 1318 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 769 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1319 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 1320 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 770 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1321 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, FALSE
# 1322 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_5
# 1323 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_4:
# 1324 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 773 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1325 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_WhichContestMode
# 1326 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 774 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1327 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 1328 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 775 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1329 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_TEMP_D, IsWirelessAdapterConnected
# 1330 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 776 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1331 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_LINK_CONTEST_MODE, FALSE
# 1332 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 777 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1333 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 1334 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 778 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1335 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_9
# 1336 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 780 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1337 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_10
# 1338 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 782 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1339 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_11
# 1340 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 784 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1341 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_12
# 1342 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7:
# 1343 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1344 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1345 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_2:
# 1346 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 767 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1347 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1348 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_1
# 1349 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1350 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_5:
# 1351 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 771 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1352 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1353 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_4
# 1354 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1355 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_9:
# 1356 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 779 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1357 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_EmeraldMode
# 1358 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7
# 1359 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1360 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_10:
# 1361 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 781 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1362 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_GlobalMode
# 1363 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7
# 1364 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1365 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_11:
# 1366 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 783 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1367 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1368 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7
# 1369 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1370 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_12:
# 1371 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 785 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1372 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1373 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7
# 1374 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1375 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1376 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_EmeraldMode::
# 1377 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 791 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1378 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_TEMP_C, 0
# 1379 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 792 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1380 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType
# 1381 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1382 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1383 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1384 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_GlobalMode::
# 1385 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 797 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1386 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_TEMP_C, 1
# 1387 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 798 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1388 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_D, 1
# 1389 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_GlobalMode_2
# 1390 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_GlobalMode_1:
# 1391 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 801 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1392 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType
# 1393 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1394 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1395 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_GlobalMode_2:
# 1396 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 799 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1397 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkNoWirelessGMode
# 1398 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_GlobalMode_1
# 1399 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1400 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1401 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType::
# 1402 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 806 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1403 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_EnterWhichContest3
# 1404 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 807 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1405 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 1406 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 808 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1407 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_CONTEST_TYPE, FALSE
# 1408 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 809 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1409 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 1410 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 810 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1411 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORIES_COUNT, LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_3
# 1412 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 812 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1413 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_4
# 1414 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_1:
# 1415 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 815 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1416 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
# 1417 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 816 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1418 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 1419 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1420 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1421 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_3:
# 1422 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 811 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1423 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1424 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_1
# 1425 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1426 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_4:
# 1427 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 813 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1428 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1429 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_1
# 1430 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1431 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1432 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestInfo::
# 1433 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 821 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1434 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_WhichTopic2
# 1435 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 822 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1436 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 1437 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 823 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1438 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_LINK_CONTEST_INFO, FALSE
# 1439 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 824 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1440 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 1441 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 825 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1442 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_3
# 1443 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 827 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1444 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_4
# 1445 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 829 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1446 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_5
# 1447 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 831 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1448 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 3, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_6
# 1449 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 833 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1450 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_7
# 1451 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1:
# 1452 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1453 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1454 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestInfo_3:
# 1455 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 826 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1456 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ExplainLinkContest
# 1457 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1
# 1458 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1459 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestInfo_4:
# 1460 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 828 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1461 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ExplainEMode
# 1462 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1
# 1463 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1464 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestInfo_5:
# 1465 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 830 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1466 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ExplainGMode
# 1467 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1
# 1468 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1469 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestInfo_6:
# 1470 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 832 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1471 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
# 1472 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1
# 1473 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1474 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestInfo_7:
# 1475 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 834 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1476 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
# 1477 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1
# 1478 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1479 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1480 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ExplainLinkContest::
# 1481 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 840 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1482 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainLinkContest, MSGBOX_DEFAULT
# 1483 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 841 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1484 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 1485 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1486 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1487 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1488 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ExplainEMode::
# 1489 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 846 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1490 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainEMode, MSGBOX_DEFAULT
# 1491 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 847 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1492 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 1493 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1494 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1495 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1496 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ExplainGMode::
# 1497 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 852 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1498 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainGMode, MSGBOX_DEFAULT
# 1499 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 853 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1500 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 1501 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1502 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1503 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1504 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkContest::
# 1505 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 858 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1506 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 1507 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 859 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1508 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ParticipateAnotherTime, MSGBOX_DEFAULT
# 1509 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 860 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1510 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 1511 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1512 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1513 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1514 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon::
# 1515 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 865 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1516 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_EnterWhichPokemon3, MSGBOX_DEFAULT
# 1517 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 866 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1518 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, 0
# 1519 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 867 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1520 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	choosecontestmon
# 1521 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 868 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1522 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
# 1523 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_2
# 1524 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_1:
# 1525 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 871 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1526 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryEnterContestMon
# 1527 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 872 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1528 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, CANT_ENTER_CONTEST
# 1529 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_5
# 1530 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_4:
# 1531 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 875 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1532 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, CAN_ENTER_CONTEST_EQUAL_RANK
# 1533 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_8
# 1534 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_7:
# 1535 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 878 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1536 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, CAN_ENTER_CONTEST_HIGH_RANK
# 1537 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_11
# 1538 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_10:
# 1539 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 881 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1540 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, CANT_ENTER_CONTEST_EGG
# 1541 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_14
# 1542 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_13:
# 1543 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 884 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1544 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, CANT_ENTER_CONTEST_FAINTED
# 1545 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_17
# 1546 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_16:
# 1547 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1548 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1549 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_2:
# 1550 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 869 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1551 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1552 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_1
# 1553 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1554 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_5:
# 1555 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 873 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1556 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkCantEnterLowRank
# 1557 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_4
# 1558 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1559 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_8:
# 1560 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 876 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1561 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest
# 1562 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_7
# 1563 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1564 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_11:
# 1565 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 879 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1566 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest
# 1567 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_10
# 1568 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1569 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_14:
# 1570 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 882 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1571 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkCantEnterEgg
# 1572 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_13
# 1573 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1574 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_17:
# 1575 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 885 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1576 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkCantEnterFainted
# 1577 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_16
# 1578 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1579 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1580 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkCantEnterLowRank::
# 1581 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 891 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1582 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MonNotQualifiedForRank, MSGBOX_DEFAULT
# 1583 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 892 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1584 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 1585 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1586 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1587 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1588 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkCantEnterEgg::
# 1589 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 897 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1590 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_EggCannotTakePart2, MSGBOX_DEFAULT
# 1591 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 898 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1592 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 1593 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1594 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1595 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1596 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkCantEnterFainted::
# 1597 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 903 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1598 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MonInNoCondition2, MSGBOX_DEFAULT
# 1599 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 904 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1600 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 1601 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1602 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1603 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1604 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest::
# 1605 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 909 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1606 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8004
# 1607 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 910 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1608 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest
# 1609 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1610 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1611 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1612 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest::
# 1613 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 915 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1614 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_D, 1
# 1615 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_2
# 1616 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_1:
# 1617 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 918 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1618 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_D, 2
# 1619 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_ge LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_5
# 1620 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_4:
# 1621 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 921 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1622 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_PleaseWaitBButtonCancel
# 1623 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 922 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1624 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 1625 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 923 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1626 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 1627 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 924 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1628 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_C, 0
# 1629 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_8
# 1630 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_7:
# 1631 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 927 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1632 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_C, 1
# 1633 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_11
# 1634 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_10:
# 1635 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 930 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1636 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_C, 2
# 1637 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_ge LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_14
# 1638 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_13:
# 1639 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 933 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1640 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS
# 1641 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_17
# 1642 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_16:
# 1643 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 936 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1644 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_DIFF_SELECTIONS
# 1645 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_20
# 1646 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_19:
# 1647 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 939 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1648 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED
# 1649 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_23
# 1650 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_22:
# 1651 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 942 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1652 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_CONNECTION_ERROR
# 1653 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_26
# 1654 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_25:
# 1655 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 945 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1656 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED_CONTEST_GMODE
# 1657 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_29
# 1658 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_28:
# 1659 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 948 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1660 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageinstant LilycoveCity_ContestLobby_Text_Transmitting
# 1661 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 949 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1662 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	contestlinktransfer
# 1663 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 950 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1664 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_0x8004
# 1665 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 951 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1666 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_33
# 1667 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 953 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1668 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_34
# 1669 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 955 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1670 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_35
# 1671 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_31:
# 1672 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1673 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1674 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_2:
# 1675 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 916 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1676 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType
# 1677 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_1
# 1678 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1679 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_5:
# 1680 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 919 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1681 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1682 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_4
# 1683 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1684 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_8:
# 1685 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 925 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1686 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryLinkEMode
# 1687 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_7
# 1688 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1689 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_11:
# 1690 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 928 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1691 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryLinkGMode
# 1692 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_10
# 1693 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1694 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_14:
# 1695 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 931 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1696 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1697 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_13
# 1698 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1699 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_17:
# 1700 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 934 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1701 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices
# 1702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_16
# 1703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1704 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_20:
# 1705 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 937 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1706 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices
# 1707 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_19
# 1708 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1709 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_23:
# 1710 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 940 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1711 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1712 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_22
# 1713 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1714 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_26:
# 1715 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 943 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1716 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkError
# 1717 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_25
# 1718 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1719 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_29:
# 1720 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 946 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1721 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkModeDifference
# 1722 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_28
# 1723 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1724 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_33:
# 1725 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 952 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1726 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_StartLinkContest
# 1727 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_31
# 1728 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1729 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_34:
# 1730 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 954 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1731 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentContest
# 1732 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_31
# 1733 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1734 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_35:
# 1735 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 956 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1736 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkTransmissionError
# 1737 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_31
# 1738 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1739 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1740 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLinkEMode::
# 1741 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 962 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1742 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryContestEModeLinkup
# 1743 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 963 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1744 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
# 1745 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 1746 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1747 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1748 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLinkGMode::
# 1749 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 968 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1750 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryContestGModeLinkup
# 1751 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 969 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1752 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
# 1753 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 1754 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1755 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1756 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentContest::
# 1757 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 974 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1758 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayersChoseDifferentContest, MSGBOX_DEFAULT
# 1759 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 975 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1760 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1761 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1762 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1763 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1764 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices::
# 1765 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 980 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1766 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayersMadeDifferentChoice, MSGBOX_DEFAULT
# 1767 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 981 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1768 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1769 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1770 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1771 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1772 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkModeDifference::
# 1773 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 986 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1774 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayerAt4PCounterUseGMode, MSGBOX_DEFAULT
# 1775 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 987 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1776 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1777 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1778 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1779 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1780 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkError::
# 1781 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 992 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1782 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 1783 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 993 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1784 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox Text_LinkErrorPleaseReset, MSGBOX_DEFAULT
# 1785 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 994 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1786 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 1787 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1788 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1789 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1790 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkNoWirelessGMode::
# 1791 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 999 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1792 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 1793 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1000 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1794 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_NoWirelessAdapterInGMode, MSGBOX_DEFAULT
# 1795 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1001 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1796 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 1797 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1798 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1799 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1800 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkTransmissionError::
# 1801 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1006 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1802 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TransmissionError, MSGBOX_DEFAULT
# 1803 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1007 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1804 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1805 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1806 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1807 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1808 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_StartLinkContest::
# 1809 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1012 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1810 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special GetContestPlayerId
# 1811 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1013 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1812 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addvar VAR_0x8004, 1
# 1813 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1014 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1814 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8004
# 1815 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1015 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1816 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_YourMonIsEntryNumX
# 1817 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1016 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1818 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 1819 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1017 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1820 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	subvar VAR_0x8004, 1
# 1821 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1018 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1822 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall
# 1823 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1019 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1824 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 1
# 1825 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1020 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1826 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SetLinkContestPlayerGfx
# 1827 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1021 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1828 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_LINK
# 1829 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1022 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1830 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
# 1831 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1023 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1832 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
# 1833 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1834 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1835 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1836 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType::
# 1837 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1028 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1838 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_COOL
# 1839 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_2
# 1840 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_1:
# 1841 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1031 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1842 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_BEAUTY
# 1843 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_5
# 1844 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_4:
# 1845 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1034 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1846 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_CUTE
# 1847 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_8
# 1848 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_7:
# 1849 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1037 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1850 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_SMART
# 1851 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_11
# 1852 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_10:
# 1853 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1040 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1854 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_TOUGH
# 1855 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_14
# 1856 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_13:
# 1857 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1043 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1858 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
# 1859 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1860 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1861 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_2:
# 1862 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1029 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1863 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetLinkGroupCoolContest
# 1864 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_1
# 1865 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1866 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_5:
# 1867 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1032 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1868 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetLinkGroupBeautyContest
# 1869 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_4
# 1870 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1871 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_8:
# 1872 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1035 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1873 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetLinkGroupCuteContest
# 1874 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_7
# 1875 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1876 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_11:
# 1877 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1038 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1878 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetLinkGroupSmartContest
# 1879 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_10
# 1880 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1881 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_14:
# 1882 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1041 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1883 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetLinkGroupToughContest
# 1884 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_13
# 1885 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1886 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1887 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupCoolContest::
# 1888 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1048 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1889 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_COOL_CONTEST
# 1890 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 1891 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1892 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1893 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupBeautyContest::
# 1894 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1053 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1895 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BEAUTY_CONTEST
# 1896 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 1897 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1898 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1899 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupCuteContest::
# 1900 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1058 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1901 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_CUTE_CONTEST
# 1902 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 1903 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1904 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1905 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupSmartContest::
# 1906 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1063 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1907 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_SMART_CONTEST
# 1908 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 1909 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1910 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1911 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupToughContest::
# 1912 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1068 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1913 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_TOUGH_CONTEST
# 1914 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 1915 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1916 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1917 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_DecideLinkLeader::
# 1918 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1073 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1919 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_PleaseDecideLinkLeader
# 1920 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1074 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1921 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 1922 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1075 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1923 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 1924 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1076 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1925 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 1926 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1077 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1927 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_3
# 1928 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1079 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1929 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_4
# 1930 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1081 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1931 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_5
# 1932 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1083 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1933 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_6
# 1934 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1:
# 1935 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1936 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1937 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_3:
# 1938 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1078 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1939 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup
# 1940 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1
# 1941 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1942 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_4:
# 1943 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1080 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1944 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup
# 1945 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1
# 1946 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1947 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_5:
# 1948 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1082 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1949 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1950 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1
# 1951 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1952 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_6:
# 1953 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1084 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1954 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 1955 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1
# 1956 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1957 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1958 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLeadGroup::
# 1959 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1090 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1960 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryBecomeLinkLeader
# 1961 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1091 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1962 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_SUCCESS
# 1963 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryLeadGroup_2
# 1964 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLeadGroup_1:
# 1965 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1094 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1966 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED
# 1967 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryLeadGroup_5
# 1968 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLeadGroup_4:
# 1969 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1097 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1970 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN
# 1971 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryLeadGroup_8
# 1972 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLeadGroup_7:
# 1973 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1100 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1974 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 1975 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 1976 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1977 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLeadGroup_2:
# 1978 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1092 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1979 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided
# 1980 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup_1
# 1981 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1982 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLeadGroup_5:
# 1983 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1095 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1984 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
# 1985 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup_4
# 1986 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1987 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLeadGroup_8:
# 1988 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1098 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1989 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup
# 1990 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup_7
# 1991 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1992 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1993 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinGroup::
# 1994 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1105 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1995 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryJoinLinkGroup
# 1996 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1106 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1997 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_SUCCESS
# 1998 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryJoinGroup_2
# 1999 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinGroup_1:
# 2000 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1109 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2001 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_FAILED
# 2002 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryJoinGroup_5
# 2003 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinGroup_4:
# 2004 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1112 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2005 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN
# 2006 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryJoinGroup_8
# 2007 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinGroup_7:
# 2008 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1115 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2009 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 2010 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 2011 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2012 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinGroup_2:
# 2013 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1107 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2014 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided
# 2015 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup_1
# 2016 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2017 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinGroup_5:
# 2018 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1110 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2019 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
# 2020 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup_4
# 2021 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2022 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinGroup_8:
# 2023 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1113 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2024 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup
# 2025 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup_7
# 2026 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2027 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2028 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryBecomeLinkLeader::
# 2029 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1120 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2030 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryBecomeLinkLeader
# 2031 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1121 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2032 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
# 2033 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 2034 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2035 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2036 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinLinkGroup::
# 2037 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1126 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2038 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryJoinLinkGroup
# 2039 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1127 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2040 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
# 2041 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 2042 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2043 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2044 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided::
# 2045 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1132 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2046 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageinstant LilycoveCity_ContestLobby_Text_Transmitting
# 2047 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1133 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2048 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	contestlinktransfer
# 2049 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2050 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_StartLinkContest
# 2051 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 2052 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2053 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2054 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall::
# 2055 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1139 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2056 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_ContestBeginShortly
# 2057 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1140 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2058 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 2059 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1141 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2060 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 2061 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1142 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2062 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 2063 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1143 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2064 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistApproachCounter
# 2065 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1144 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2066 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 2067 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1145 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2068 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 2069 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1146 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2070 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 2, METATILE_Contest_WallShadow, TRUE
# 2071 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1147 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2072 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 3, METATILE_Contest_FloorShadow, TRUE
# 2073 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1148 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2074 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 2075 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1149 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2076 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistExitCounter
# 2077 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1150 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2078 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 2079 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1151 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2080 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 2081 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1152 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2082 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 2, METATILE_Contest_CounterFlap_Top, TRUE
# 2083 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1153 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2084 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 3, METATILE_Contest_CounterFlap_Bottom, TRUE
# 2085 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1154 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2086 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 2087 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1155 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2088 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 2089 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1156 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2090 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistFacePlayer
# 2091 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1157 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2092 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 2093 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1158 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2094 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerApproachLinkReceptionist
# 2095 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1159 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2096 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 2097 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1160 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2098 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_ComeThroughHere
# 2099 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1161 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2100 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 2101 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1162 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2102 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 2103 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1163 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2104 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 2105 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1164 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2106 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_DelayIfContestWithRSPlayer
# 2107 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1165 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2108 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistWalkToContestHall
# 2109 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1166 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2110 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerWalkToLinkContestHall
# 2111 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1167 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2112 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 2113 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1168 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2114 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 2115 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 2116 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2117 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2118 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1172 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2119 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerWalkToLinkContestHall:
# 2120 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1173 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2121 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2122 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1174 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2123 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2124 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1175 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2125 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2126 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1176 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2127 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2128 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1177 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2129 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2130 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1178 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2131 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 2132 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1179 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2133 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 2134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1180 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2135 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 2136 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1181 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2137 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 2138 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1182 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2139 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 2140 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1183 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2141 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 2142 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2143 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1186 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2144 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerApproachLinkReceptionist:
# 2145 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1187 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2146 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2147 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1188 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2148 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 2149 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2150 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1191 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2151 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistApproachCounter:
# 2152 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2153 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2154 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1193 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2155 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2156 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1194 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2157 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_down
# 2158 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1195 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2159 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 2160 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2161 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1198 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2162 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistExitCounter:
# 2163 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1199 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2164 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 2165 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1200 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2166 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 2167 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1201 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2168 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_up
# 2169 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1202 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2170 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 2171 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2172 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1205 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2173 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistWalkToContestHall:
# 2174 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1206 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2175 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2176 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1207 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2177 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2178 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1208 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2179 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2180 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1209 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2181 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 2182 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1210 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2183 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 2184 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1211 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2185 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 2186 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1212 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2187 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 2188 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1213 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2189 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 2190 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1214 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2191 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 2192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1215 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2193 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 2194 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2195 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1218 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2196 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistFacePlayer:
# 2197 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1219 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2198 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 2199 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1220 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2200 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 2201 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2202 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LittleGirl::
# 2203 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1224 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2204 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 2205 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1225 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2206 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 2207 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1226 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2208 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEBLOCK_CASE, LilycoveCity_ContestLobby_EventScript_LittleGirl_2
# 2209 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LittleGirl_1:
# 2210 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1229 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2211 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase, MSGBOX_DEFAULT
# 2212 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1230 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2213 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 2214 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 2215 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2216 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LittleGirl_2:
# 2217 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1227 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2218 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LittleGirlHaveCase
# 2219 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LittleGirl_1
# 2220 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2221 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2222 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LittleGirlHaveCase::
# 2223 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1235 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2224 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries, MSGBOX_DEFAULT
# 2225 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1236 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2226 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 2227 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 2228 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2229 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2230 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase::
# 2231 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1240 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2232 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Yippee!\p"
# 2233 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "The lady at the reception counter\n"
# 2234 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "gave me a case for {POKEBLOCK}S!$"
# 2235 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2236 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries::
# 2237 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1246 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2238 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Make {POKEBLOCK}S and put them in there.\p"
# 2239 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "When you make a {POKEBLOCK}, everyone\n"
# 2240 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "has to put in a different BERRY.$"
# 2241 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2242 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint::
# 2243 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1252 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2244 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Congratulations!\p"
# 2245 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I did a painting of your POKéMON to\n"
# 2246 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "commemorate its victory…\p"
# 2247 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Well, your POKéMON's appeals were\n"
# 2248 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "so fantastic, it spurred me into\l"
# 2249 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "painting better than I usually do.\l"
# 2250 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Look, see?$"
# 2251 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2252 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum::
# 2253 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1262 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2254 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "What do you think? I'm confident in\n"
# 2255 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "what I've done, but do you like it?\p"
# 2256 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "A work of this caliber, it wouldn't look\n"
# 2257 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "out of place in an art museum.\p"
# 2258 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Huh? An art museum really is looking\n"
# 2259 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "for paintings?\p"
# 2260 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Do you think I should take this there?$"
# 2261 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2262 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum::
# 2263 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2264 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "What, really? Then, sure, I will take\n"
# 2265 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "this painting there right now.\p"
# 2266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I'll give it a proper title, too.\p"
# 2267 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I hope they'll like it and consider\n"
# 2268 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "exhibiting this.\p"
# 2269 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Please check if they did accept this.\n"
# 2270 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Thank you!$"
# 2271 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_TakeMementoOfPainting::
# 2273 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1282 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2274 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh, that's right!\p"
# 2275 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "As a memento of me painting your\n"
# 2276 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "POKéMON, please take this.$"
# 2277 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2278 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ReceivedARibbon::
# 2279 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1288 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2280 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{PLAYER} received a RIBBON.$"
# 2281 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2282 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon::
# 2283 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1292 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2284 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{PLAYER} put the RIBBON on\n"
# 2285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 2286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2287 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_OkaySeeYou::
# 2288 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1297 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2289 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Okay, see you!$"
# 2290 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2291 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum::
# 2292 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1301 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2293 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh… Then, I guess I'll just take\n"
# 2294 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "this home with me…\p"
# 2295 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "But, you know, I would like to take\n"
# 2296 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "this to the art museum… Okay?$"
# 2297 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2298 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs::
# 2299 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1308 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2300 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh, fine, that's the way it is.\n"
# 2301 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I will hang this in my own house.\p"
# 2302 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I'll just have to try harder next time.\n"
# 2303 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Well, be seeing you.$"
# 2304 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2305 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_MasterRankHereICome::
# 2306 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1315 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2307 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Hoo, boy… Master Rank CONTESTS,\n"
# 2308 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "here I come.\p"
# 2309 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "The world will know that my dearest\n"
# 2310 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "POKéMON is the cutest being in all\l"
# 2311 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "existence. The time has come!\l"
# 2312 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Uheheheh.$"
# 2313 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2314 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere::
# 2315 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1324 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2316 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "You can see a whole variety of\n"
# 2317 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "POKéMON here.\p"
# 2318 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "That's why I make this place a regular\n"
# 2319 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "part of my daily stroll.$"
# 2320 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2321 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ContestFeastForEyes::
# 2322 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1331 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2323 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Wow, coming out to a CONTEST is\n"
# 2324 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "a feast for these eyes!\p"
# 2325 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Would you look at all the POKéMON\n"
# 2326 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "that just scream to be painted?$"
# 2327 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2328 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ToughContestIsExtreme::
# 2329 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1338 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2330 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "The TOUGHNESS CONTEST is like\n"
# 2331 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "extreme, man!\p"
# 2332 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Those muscular appeals…\n"
# 2333 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Cascading sweat… I swoon!$"
# 2334 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2335 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_LavishedCareOnMon::
# 2336 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1345 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2337 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Day in and day out, I lavished my care\n"
# 2338 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "on this POKéMON.\p"
# 2339 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Its condition is peaking.\n"
# 2340 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Today, victory is mine!$"
# 2341 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2342 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily::
# 2343 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 1352 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
# 2344 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I made {POKEBLOCK}S with Mom, Dad, and\n"
# 2345 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Big Sister. They turned out great!\p"
# 2346 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I bet you can make smoother, better\n"
# 2347 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{POKEBLOCK}S if you have more people.$"
