DewfordTown_Hall_MapScripts::
	.byte 0


DewfordTown_Hall_EventScript_Girl::
# 4 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 5 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 6 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 7 "data/maps/DewfordTown_Hall/scripts.pory"
	special IsTrendyPhraseBoring
# 8 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_Hall_EventScript_Girl_2
DewfordTown_Hall_EventScript_Girl_1:
# 11 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CantImagineLifeWithoutTrend, MSGBOX_DEFAULT
# 12 "data/maps/DewfordTown_Hall/scripts.pory"
	release
	end

DewfordTown_Hall_EventScript_Girl_2:
# 9 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_GirlBoredOfTrend
	goto DewfordTown_Hall_EventScript_Girl_1


DewfordTown_Hall_EventScript_GirlBoredOfTrend::
# 17 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GettingBoredOfTrend, MSGBOX_DEFAULT
# 18 "data/maps/DewfordTown_Hall/scripts.pory"
	release
	end


DewfordTown_Hall_EventScript_Woman::
# 23 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 24 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 25 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 26 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TeachingMonAboutTrend, MSGBOX_DEFAULT
# 27 "data/maps/DewfordTown_Hall/scripts.pory"
	release
	end


DewfordTown_Hall_EventScript_Man::
# 32 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 33 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 34 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 35 "data/maps/DewfordTown_Hall/scripts.pory"
	special BufferDeepLinkPhrase
# 36 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_DeepLinkBetweenXAndY, MSGBOX_YESNO
# 37 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_Hall_EventScript_Man_2
DewfordTown_Hall_EventScript_Man_1:
# 40 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DewfordTown_Hall_EventScript_Man_5
DewfordTown_Hall_EventScript_Man_4:
	end

DewfordTown_Hall_EventScript_Man_2:
# 38 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_ConfirmTrendLink
	goto DewfordTown_Hall_EventScript_Man_1

DewfordTown_Hall_EventScript_Man_5:
# 41 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_RejectTrendLink
	goto DewfordTown_Hall_EventScript_Man_4


DewfordTown_Hall_EventScript_ConfirmTrendLink::
# 47 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_MyHunchWasRight, MSGBOX_DEFAULT
# 48 "data/maps/DewfordTown_Hall/scripts.pory"
	release
	end


DewfordTown_Hall_EventScript_RejectTrendLink::
# 53 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_NotEasyToKeepUp, MSGBOX_DEFAULT
# 54 "data/maps/DewfordTown_Hall/scripts.pory"
	release
	end


DewfordTown_Hall_EventScript_ExpertM::
# 59 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 60 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 61 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 62 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TVShowAboutTrend, MSGBOX_DEFAULT
# 63 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 64 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_EXPERT_M, Common_Movement_WalkInPlaceFasterUp
# 65 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 66 "data/maps/DewfordTown_Hall/scripts.pory"
	release
	end


DewfordTown_Hall_EventScript_Twin::
# 71 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 72 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 73 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 74 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea, MSGBOX_DEFAULT
# 75 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 76 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_TWIN, Common_Movement_WalkInPlaceFasterUp
# 77 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 78 "data/maps/DewfordTown_Hall/scripts.pory"
	release
	end


DewfordTown_Hall_EventScript_LittleBoy::
# 83 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 84 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 85 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 86 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CollectTrendMerchandise, MSGBOX_DEFAULT
# 87 "data/maps/DewfordTown_Hall/scripts.pory"
	release
	end


DewfordTown_Hall_EventScript_Bookshelf::
# 92 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 93 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 94 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BooksAboutTrend, MSGBOX_DEFAULT
# 95 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_Painting::
# 100 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 101 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 102 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 103 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_Painting_3
# 106 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_Painting_4
# 108 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_Painting_5
# 110 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_Painting_6
# 112 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_Painting_7
# 114 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_Painting_8
# 116 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_Painting_9
# 118 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_Painting_10
DewfordTown_Hall_EventScript_Painting_1:
	end

DewfordTown_Hall_EventScript_Painting_3:
# 105 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_ScreamTitle
	goto DewfordTown_Hall_EventScript_Painting_1

DewfordTown_Hall_EventScript_Painting_4:
# 107 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_ScreamTitle
	goto DewfordTown_Hall_EventScript_Painting_1

DewfordTown_Hall_EventScript_Painting_5:
# 109 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_SmileTitle
	goto DewfordTown_Hall_EventScript_Painting_1

DewfordTown_Hall_EventScript_Painting_6:
# 111 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_ScreamTitle
	goto DewfordTown_Hall_EventScript_Painting_1

DewfordTown_Hall_EventScript_Painting_7:
# 113 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_LastTitle
	goto DewfordTown_Hall_EventScript_Painting_1

DewfordTown_Hall_EventScript_Painting_8:
# 115 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_LastTitle
	goto DewfordTown_Hall_EventScript_Painting_1

DewfordTown_Hall_EventScript_Painting_9:
# 117 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_BirthTitle
	goto DewfordTown_Hall_EventScript_Painting_1

DewfordTown_Hall_EventScript_Painting_10:
# 119 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_LastTitle
	goto DewfordTown_Hall_EventScript_Painting_1


DewfordTown_Hall_EventScript_ScreamTitle::
# 125 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsScream, MSGBOX_DEFAULT
# 126 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_SmileTitle::
# 131 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsSmile, MSGBOX_DEFAULT
# 132 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_LastTitle::
# 137 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LastTrend, MSGBOX_DEFAULT
# 138 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_BirthTitle::
# 143 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BirthOfTrend, MSGBOX_DEFAULT
# 144 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_SchoolKidM::
# 149 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 150 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 0
# 151 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
	end


DewfordTown_Hall_EventScript_PsychicM::
# 156 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 157 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 1
# 158 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
	end


DewfordTown_Hall_EventScript_DoTrendDebate::
# 163 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 164 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 165 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 166 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_DoTrendDebate_3
# 168 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_DoTrendDebate_4
# 170 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_DoTrendDebate_5
# 172 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_DoTrendDebate_6
# 174 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_DoTrendDebate_7
# 176 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_DoTrendDebate_8
# 178 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_DoTrendDebate_9
# 180 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_DoTrendDebate_10
DewfordTown_Hall_EventScript_DoTrendDebate_1:
	end

DewfordTown_Hall_EventScript_DoTrendDebate_3:
# 167 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate1
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1

DewfordTown_Hall_EventScript_DoTrendDebate_4:
# 169 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate1
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1

DewfordTown_Hall_EventScript_DoTrendDebate_5:
# 171 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate2
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1

DewfordTown_Hall_EventScript_DoTrendDebate_6:
# 173 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate2
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1

DewfordTown_Hall_EventScript_DoTrendDebate_7:
# 175 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate3
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1

DewfordTown_Hall_EventScript_DoTrendDebate_8:
# 177 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate3
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1

DewfordTown_Hall_EventScript_DoTrendDebate_9:
# 179 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate4
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1

DewfordTown_Hall_EventScript_DoTrendDebate_10:
# 181 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate5
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1


DewfordTown_Hall_EventScript_TrendDebate1::
# 187 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 188 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_SawTrendCoolestThing, MSGBOX_DEFAULT
# 189 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 190 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_AllegedTrendNotAuthentic, MSGBOX_DEFAULT
# 191 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_TrendDebate2::
# 196 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 197 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_ComposedTrendThemeSong, MSGBOX_DEFAULT
# 198 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 199 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WorkOnYourSinging, MSGBOX_DEFAULT
# 200 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_TrendDebate3::
# 205 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 206 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_OrganizeTrendParty, MSGBOX_DEFAULT
# 207 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 208 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BrilliantIndeed, MSGBOX_DEFAULT
# 209 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_TrendDebate4::
# 214 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 215 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendHasBecomePartOfLife, MSGBOX_DEFAULT
# 216 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 217 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind, MSGBOX_DEFAULT
# 218 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_TrendDebate5::
# 223 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 224 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible, MSGBOX_DEFAULT
# 225 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 226 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WellBeTrendDuo, MSGBOX_DEFAULT
# 227 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_DontMovePlayer1::
	return


DewfordTown_Hall_EventScript_DebateReact1::
# 236 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_PSYCHIC_M, DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft
# 237 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 238 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq DewfordTown_Hall_EventScript_DebateReact1_2
DewfordTown_Hall_EventScript_DebateReact1_1:
# 241 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq DewfordTown_Hall_EventScript_DebateReact1_5
DewfordTown_Hall_EventScript_DebateReact1_4:
	end

DewfordTown_Hall_EventScript_DebateReact1_2:
# 239 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_PlayerReactWest
	goto DewfordTown_Hall_EventScript_DebateReact1_1

DewfordTown_Hall_EventScript_DebateReact1_5:
# 242 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DontMovePlayer2
	goto DewfordTown_Hall_EventScript_DebateReact1_4


DewfordTown_Hall_EventScript_PlayerReactWest::
# 248 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq DewfordTown_Hall_EventScript_PlayerReactWest_2
DewfordTown_Hall_EventScript_PlayerReactWest_1:
# 251 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 252 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
	return

DewfordTown_Hall_EventScript_PlayerReactWest_2:
# 249 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DontMovePlayer1
	goto DewfordTown_Hall_EventScript_PlayerReactWest_1


DewfordTown_Hall_EventScript_DontMovePlayer2::
	return


DewfordTown_Hall_EventScript_DebateReact2::
# 261 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_SCHOOL_KID_M, DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight
# 262 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 263 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq DewfordTown_Hall_EventScript_DebateReact2_2
DewfordTown_Hall_EventScript_DebateReact2_1:
# 266 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq DewfordTown_Hall_EventScript_DebateReact2_5
DewfordTown_Hall_EventScript_DebateReact2_4:
	end

DewfordTown_Hall_EventScript_DebateReact2_2:
# 264 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_PlayerReactNorthSouth
	goto DewfordTown_Hall_EventScript_DebateReact2_1

DewfordTown_Hall_EventScript_DebateReact2_5:
# 267 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_PlayerReactEast
	goto DewfordTown_Hall_EventScript_DebateReact2_4


DewfordTown_Hall_EventScript_PlayerReactNorthSouth::
# 273 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq DewfordTown_Hall_EventScript_PlayerReactNorthSouth_2
DewfordTown_Hall_EventScript_PlayerReactNorthSouth_1:
# 276 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq DewfordTown_Hall_EventScript_PlayerReactNorthSouth_5
DewfordTown_Hall_EventScript_PlayerReactNorthSouth_4:
	return

DewfordTown_Hall_EventScript_PlayerReactNorthSouth_2:
# 274 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp
	goto DewfordTown_Hall_EventScript_PlayerReactNorthSouth_1

DewfordTown_Hall_EventScript_PlayerReactNorthSouth_5:
# 277 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown
	goto DewfordTown_Hall_EventScript_PlayerReactNorthSouth_4


DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp::
# 283 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 284 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
	return


DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown::
# 289 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 290 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
	return


DewfordTown_Hall_EventScript_PlayerReactEast::
# 295 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq DewfordTown_Hall_EventScript_PlayerReactEast_2
DewfordTown_Hall_EventScript_PlayerReactEast_1:
# 298 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 299 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
	return

DewfordTown_Hall_EventScript_PlayerReactEast_2:
# 296 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DontMovePlayer1
	goto DewfordTown_Hall_EventScript_PlayerReactEast_1


# 303 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft:
# 304 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_left
# 305 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end

# 308 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight:
# 309 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_right
# 310 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end

DewfordTown_Hall_EventScript_SludgeBombMan::
# 314 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 315 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 316 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 317 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SLUDGE_BOMB, DewfordTown_Hall_EventScript_SludgeBombMan_2
DewfordTown_Hall_EventScript_SludgeBombMan_1:
# 320 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GiveYouSludgeBomb, MSGBOX_DEFAULT
# 321 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB
# 322 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Hall_EventScript_SludgeBombMan_5
DewfordTown_Hall_EventScript_SludgeBombMan_4:
# 325 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_RECEIVED_TM_SLUDGE_BOMB
# 326 "data/maps/DewfordTown_Hall/scripts.pory"
	release
	end

DewfordTown_Hall_EventScript_SludgeBombMan_2:
# 318 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_ReceivedSludgeBomb
	goto DewfordTown_Hall_EventScript_SludgeBombMan_1

DewfordTown_Hall_EventScript_SludgeBombMan_5:
# 323 "data/maps/DewfordTown_Hall/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DewfordTown_Hall_EventScript_SludgeBombMan_4


DewfordTown_Hall_EventScript_ReceivedSludgeBomb::
# 331 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo, MSGBOX_DEFAULT
# 332 "data/maps/DewfordTown_Hall/scripts.pory"
	release
	end


DewfordTown_Hall_Text_CantImagineLifeWithoutTrend::
# 336 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What's in vogue? Why, it has to be\n"
	.string "“{STR_VAR_1}”!\p"
	.string "I can't imagine what life would be like\n"
	.string "without “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_GettingBoredOfTrend::
# 343 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What's in vogue? Why, it has to be\n"
	.string "“{STR_VAR_1}”!\p"
	.string "But I'm getting kind of bored with it.\p"
	.string "I should look for the next big thing.$"

DewfordTown_Hall_Text_TeachingMonAboutTrend::
# 350 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm teaching my POKéMON about\n"
	.string "“{STR_VAR_1},”\l"
	.string "but it's not going well.\p"
	.string "It's a bit too much, I think.$"

DewfordTown_Hall_Text_DeepLinkBetweenXAndY::
# 357 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm studying up on the hip and trendy\n"
	.string "“{STR_VAR_1}” now.\p"
	.string "Is it true that there's a deep link\n"
	.string "between “{STR_VAR_1}”\l"
	.string "and “{STR_VAR_2}”?$"

DewfordTown_Hall_Text_MyHunchWasRight::
# 365 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh!\n"
	.string "So, my hunch was right!\p"
	.string "I'm one step closer to being hip and\n"
	.string "happening, yowza!$"

DewfordTown_Hall_Text_NotEasyToKeepUp::
# 372 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What?!\n"
	.string "Is that so?!\p"
	.string "It's not easy for an older fellow like\n"
	.string "me to keep up with trends!$"

DewfordTown_Hall_Text_TVShowAboutTrend::
# 379 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "This whole business about\n"
	.string "“{STR_VAR_1}”…\l"
	.string "Isn't there a TV show on it?$"

DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea::
# 385 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Across the sea…\p"
	.string "Is “{STR_VAR_1}”\n"
	.string "even more popular?$"

DewfordTown_Hall_Text_CollectTrendMerchandise::
# 391 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I collect official\n"
	.string "“{STR_VAR_1}”\l"
	.string "licensed merchandise.\p"
	.string "I have official\n"
	.string "“{STR_VAR_1}” DOLLS…\p"
	.string "Official “{STR_VAR_1}”\n"
	.string "brand clothing…\p"
	.string "And officially licensed\n"
	.string "“{STR_VAR_1}”\l"
	.string "picture books.\p"
	.string "Heheh, I own!\n"
	.string "I'm not sharing anything with you!$"

DewfordTown_Hall_Text_BooksAboutTrend::
# 406 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "IDENTIFYING GOOD\n"
	.string "“{STR_VAR_1}” &\l"
	.string "BAD “{STR_VAR_1}”…\p"
	.string "THE LINK BETWEEN\n"
	.string "“{STR_VAR_1}” AND\l"
	.string "POKéMON…\p"
	.string "USEFUL\n"
	.string "“{STR_VAR_1}”…\p"
	.string "It's neatly jammed with books about\n"
	.string "“{STR_VAR_1}.”$"

DewfordTown_Hall_Text_TrendsScream::
# 419 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}'S\n"
	.string "SCREAM” is the title.$"

DewfordTown_Hall_Text_TrendsSmile::
# 424 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}'S\n"
	.string "SMILE” is the title.$"

DewfordTown_Hall_Text_LastTrend::
# 429 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's titled “THE LAST\n"
	.string "{STR_VAR_1}”.$"

DewfordTown_Hall_Text_BirthOfTrend::
# 434 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's titled “THE BIRTH OF\n"
	.string "{STR_VAR_1}”.$"

DewfordTown_Hall_Text_SawTrendCoolestThing::
# 439 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I saw “{STR_VAR_1}”!\n"
	.string "Cool, huh?\p"
	.string "It's, like, the coolest thing going!\p"
	.string "It was awesome!\n"
	.string "It was the real thing, oh yeah!$"

DewfordTown_Hall_Text_AllegedTrendNotAuthentic::
# 447 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh, no, no, no.\p"
	.string "That alleged\n"
	.string "“{STR_VAR_1}”\l"
	.string "you claim to have seen--it's not.\p"
	.string "The authentic article is much…\n"
	.string "How should I say it?\l"
	.string "Sharper, yet more mellow!\p"
	.string "Ah, no matter. It's astonishing!$"

DewfordTown_Hall_Text_ComposedTrendThemeSong::
# 458 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hey, listen, I composed a theme song\n"
	.string "for “{STR_VAR_1}.”\p"
	.string "“{STR_VAR_1}”\n"
	.string "is really popular right now.\p"
	.string "Okay, listen!\n"
	.string "… …\p"
	.string "Oh!\n"
	.string "{STR_VAR_1}!\p"
	.string "Wonderful\n"
	.string "{STR_VAR_1}!$"

DewfordTown_Hall_Text_WorkOnYourSinging::
# 471 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "… …\p"
	.string "I dare say, chap, it would pay for you\n"
	.string "to work on your singing before you\l"
	.string "trifle yourself with\l"
	.string "“{STR_VAR_1}.”$"

DewfordTown_Hall_Text_OrganizeTrendParty::
# 479 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Anyway, as I was saying earlier, we\n"
	.string "should get together and organize a\l"
	.string "“{STR_VAR_1}” party\l"
	.string "on the island.$"

DewfordTown_Hall_Text_BrilliantIndeed::
# 486 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh, a smashing good idea!\p"
	.string "It will settle once and for all\n"
	.string "who is the best at\l"
	.string "“{STR_VAR_1}.”\l"
	.string "Brilliant, indeed!\p"
	.string "Starting today, our lives will revolve\n"
	.string "around “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_TrendHasBecomePartOfLife::
# 496 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I was thinking, though…\p"
	.string "Wouldn't you agree that\n"
	.string "“{STR_VAR_1}” has\l"
	.string "grown from being something trendy to\l"
	.string "being a part of our daily lives?$"

DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind::
# 504 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Beg pardon?\n"
	.string "That much, what?\p"
	.string "However, it's true that\n"
	.string "“{STR_VAR_1}”\l"
	.string "weighs heavily on your mind, whether\l"
	.string "you're awake or asleep.\p"
	.string "Absolutely, you're the\n"
	.string "“{STR_VAR_1}”\l"
	.string "PROFESSOR, old sport!$"

DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible::
# 516 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "If you and me team up as a combo,\n"
	.string "we'll be invincible when it comes to all\l"
	.string "things “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_WellBeTrendDuo::
# 522 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Spot on, my friend!\p"
	.string "We shall be the\n"
	.string "“{STR_VAR_1}” DUO!\p"
	.string "Isn't that a ripe image?\n"
	.string "Hahahah!$"

DewfordTown_Hall_Text_GiveYouSludgeBomb::
# 530 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "For me, SLUDGE BOMB is at the peak\n"
	.string "of popularity. It's the one.\p"
	.string "Hunh? You're telling me that you don't\n"
	.string "know about SLUDGE BOMB?\p"
	.string "That's outright pitiful.\n"
	.string "I'll give you one.$"

DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo::
# 539 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I love SLUDGE BOMB.\p"
	.string "But POKéMON with the move\n"
	.string "“{STR_VAR_1}”\l"
	.string "are in, too.$"
