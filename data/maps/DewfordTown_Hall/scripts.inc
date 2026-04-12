# 1 "data/maps/DewfordTown_Hall/scripts.pory"

# 2 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_MapScripts::
# 3 "data/maps/DewfordTown_Hall/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_Hall/scripts.pory"

# 5 "data/maps/DewfordTown_Hall/scripts.pory"

# 6 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Girl::
# 7 "data/maps/DewfordTown_Hall/scripts.pory"
# 4 "data/maps/DewfordTown_Hall/scripts.pory"
# 8 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 9 "data/maps/DewfordTown_Hall/scripts.pory"
# 5 "data/maps/DewfordTown_Hall/scripts.pory"
# 10 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 11 "data/maps/DewfordTown_Hall/scripts.pory"
# 6 "data/maps/DewfordTown_Hall/scripts.pory"
# 12 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 13 "data/maps/DewfordTown_Hall/scripts.pory"
# 7 "data/maps/DewfordTown_Hall/scripts.pory"
# 14 "data/maps/DewfordTown_Hall/scripts.pory"
	special IsTrendyPhraseBoring
# 15 "data/maps/DewfordTown_Hall/scripts.pory"
# 8 "data/maps/DewfordTown_Hall/scripts.pory"
# 16 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, TRUE
# 17 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_Girl_2
# 18 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Girl_1:
# 19 "data/maps/DewfordTown_Hall/scripts.pory"
# 11 "data/maps/DewfordTown_Hall/scripts.pory"
# 20 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CantImagineLifeWithoutTrend, MSGBOX_DEFAULT
# 21 "data/maps/DewfordTown_Hall/scripts.pory"
# 12 "data/maps/DewfordTown_Hall/scripts.pory"
# 22 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 23 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 24 "data/maps/DewfordTown_Hall/scripts.pory"

# 25 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Girl_2:
# 26 "data/maps/DewfordTown_Hall/scripts.pory"
# 9 "data/maps/DewfordTown_Hall/scripts.pory"
# 27 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_GirlBoredOfTrend
# 28 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_Girl_1
# 29 "data/maps/DewfordTown_Hall/scripts.pory"

# 30 "data/maps/DewfordTown_Hall/scripts.pory"

# 31 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_GirlBoredOfTrend::
# 32 "data/maps/DewfordTown_Hall/scripts.pory"
# 17 "data/maps/DewfordTown_Hall/scripts.pory"
# 33 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GettingBoredOfTrend, MSGBOX_DEFAULT
# 34 "data/maps/DewfordTown_Hall/scripts.pory"
# 18 "data/maps/DewfordTown_Hall/scripts.pory"
# 35 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 36 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 37 "data/maps/DewfordTown_Hall/scripts.pory"

# 38 "data/maps/DewfordTown_Hall/scripts.pory"

# 39 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Woman::
# 40 "data/maps/DewfordTown_Hall/scripts.pory"
# 23 "data/maps/DewfordTown_Hall/scripts.pory"
# 41 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 42 "data/maps/DewfordTown_Hall/scripts.pory"
# 24 "data/maps/DewfordTown_Hall/scripts.pory"
# 43 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 44 "data/maps/DewfordTown_Hall/scripts.pory"
# 25 "data/maps/DewfordTown_Hall/scripts.pory"
# 45 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 46 "data/maps/DewfordTown_Hall/scripts.pory"
# 26 "data/maps/DewfordTown_Hall/scripts.pory"
# 47 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TeachingMonAboutTrend, MSGBOX_DEFAULT
# 48 "data/maps/DewfordTown_Hall/scripts.pory"
# 27 "data/maps/DewfordTown_Hall/scripts.pory"
# 49 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 50 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 51 "data/maps/DewfordTown_Hall/scripts.pory"

# 52 "data/maps/DewfordTown_Hall/scripts.pory"

# 53 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Man::
# 54 "data/maps/DewfordTown_Hall/scripts.pory"
# 32 "data/maps/DewfordTown_Hall/scripts.pory"
# 55 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 56 "data/maps/DewfordTown_Hall/scripts.pory"
# 33 "data/maps/DewfordTown_Hall/scripts.pory"
# 57 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 58 "data/maps/DewfordTown_Hall/scripts.pory"
# 34 "data/maps/DewfordTown_Hall/scripts.pory"
# 59 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 60 "data/maps/DewfordTown_Hall/scripts.pory"
# 35 "data/maps/DewfordTown_Hall/scripts.pory"
# 61 "data/maps/DewfordTown_Hall/scripts.pory"
	special BufferDeepLinkPhrase
# 62 "data/maps/DewfordTown_Hall/scripts.pory"
# 36 "data/maps/DewfordTown_Hall/scripts.pory"
# 63 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_DeepLinkBetweenXAndY, MSGBOX_YESNO
# 64 "data/maps/DewfordTown_Hall/scripts.pory"
# 37 "data/maps/DewfordTown_Hall/scripts.pory"
# 65 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, YES
# 66 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_Man_2
# 67 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Man_1:
# 68 "data/maps/DewfordTown_Hall/scripts.pory"
# 40 "data/maps/DewfordTown_Hall/scripts.pory"
# 69 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, NO
# 70 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_Man_5
# 71 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Man_4:
# 72 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 73 "data/maps/DewfordTown_Hall/scripts.pory"

# 74 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Man_2:
# 75 "data/maps/DewfordTown_Hall/scripts.pory"
# 38 "data/maps/DewfordTown_Hall/scripts.pory"
# 76 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_ConfirmTrendLink
# 77 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_Man_1
# 78 "data/maps/DewfordTown_Hall/scripts.pory"

# 79 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Man_5:
# 80 "data/maps/DewfordTown_Hall/scripts.pory"
# 41 "data/maps/DewfordTown_Hall/scripts.pory"
# 81 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_RejectTrendLink
# 82 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_Man_4
# 83 "data/maps/DewfordTown_Hall/scripts.pory"

# 84 "data/maps/DewfordTown_Hall/scripts.pory"

# 85 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ConfirmTrendLink::
# 86 "data/maps/DewfordTown_Hall/scripts.pory"
# 47 "data/maps/DewfordTown_Hall/scripts.pory"
# 87 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_MyHunchWasRight, MSGBOX_DEFAULT
# 88 "data/maps/DewfordTown_Hall/scripts.pory"
# 48 "data/maps/DewfordTown_Hall/scripts.pory"
# 89 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 90 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 91 "data/maps/DewfordTown_Hall/scripts.pory"

# 92 "data/maps/DewfordTown_Hall/scripts.pory"

# 93 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_RejectTrendLink::
# 94 "data/maps/DewfordTown_Hall/scripts.pory"
# 53 "data/maps/DewfordTown_Hall/scripts.pory"
# 95 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_NotEasyToKeepUp, MSGBOX_DEFAULT
# 96 "data/maps/DewfordTown_Hall/scripts.pory"
# 54 "data/maps/DewfordTown_Hall/scripts.pory"
# 97 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 98 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 99 "data/maps/DewfordTown_Hall/scripts.pory"

# 100 "data/maps/DewfordTown_Hall/scripts.pory"

# 101 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ExpertM::
# 102 "data/maps/DewfordTown_Hall/scripts.pory"
# 59 "data/maps/DewfordTown_Hall/scripts.pory"
# 103 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 104 "data/maps/DewfordTown_Hall/scripts.pory"
# 60 "data/maps/DewfordTown_Hall/scripts.pory"
# 105 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 106 "data/maps/DewfordTown_Hall/scripts.pory"
# 61 "data/maps/DewfordTown_Hall/scripts.pory"
# 107 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 108 "data/maps/DewfordTown_Hall/scripts.pory"
# 62 "data/maps/DewfordTown_Hall/scripts.pory"
# 109 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TVShowAboutTrend, MSGBOX_DEFAULT
# 110 "data/maps/DewfordTown_Hall/scripts.pory"
# 63 "data/maps/DewfordTown_Hall/scripts.pory"
# 111 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 112 "data/maps/DewfordTown_Hall/scripts.pory"
# 64 "data/maps/DewfordTown_Hall/scripts.pory"
# 113 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_EXPERT_M, Common_Movement_WalkInPlaceFasterUp
# 114 "data/maps/DewfordTown_Hall/scripts.pory"
# 65 "data/maps/DewfordTown_Hall/scripts.pory"
# 115 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 116 "data/maps/DewfordTown_Hall/scripts.pory"
# 66 "data/maps/DewfordTown_Hall/scripts.pory"
# 117 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 118 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 119 "data/maps/DewfordTown_Hall/scripts.pory"

# 120 "data/maps/DewfordTown_Hall/scripts.pory"

# 121 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Twin::
# 122 "data/maps/DewfordTown_Hall/scripts.pory"
# 71 "data/maps/DewfordTown_Hall/scripts.pory"
# 123 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 124 "data/maps/DewfordTown_Hall/scripts.pory"
# 72 "data/maps/DewfordTown_Hall/scripts.pory"
# 125 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 126 "data/maps/DewfordTown_Hall/scripts.pory"
# 73 "data/maps/DewfordTown_Hall/scripts.pory"
# 127 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 128 "data/maps/DewfordTown_Hall/scripts.pory"
# 74 "data/maps/DewfordTown_Hall/scripts.pory"
# 129 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea, MSGBOX_DEFAULT
# 130 "data/maps/DewfordTown_Hall/scripts.pory"
# 75 "data/maps/DewfordTown_Hall/scripts.pory"
# 131 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 132 "data/maps/DewfordTown_Hall/scripts.pory"
# 76 "data/maps/DewfordTown_Hall/scripts.pory"
# 133 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_TWIN, Common_Movement_WalkInPlaceFasterUp
# 134 "data/maps/DewfordTown_Hall/scripts.pory"
# 77 "data/maps/DewfordTown_Hall/scripts.pory"
# 135 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 136 "data/maps/DewfordTown_Hall/scripts.pory"
# 78 "data/maps/DewfordTown_Hall/scripts.pory"
# 137 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 138 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 139 "data/maps/DewfordTown_Hall/scripts.pory"

# 140 "data/maps/DewfordTown_Hall/scripts.pory"

# 141 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LittleBoy::
# 142 "data/maps/DewfordTown_Hall/scripts.pory"
# 83 "data/maps/DewfordTown_Hall/scripts.pory"
# 143 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 144 "data/maps/DewfordTown_Hall/scripts.pory"
# 84 "data/maps/DewfordTown_Hall/scripts.pory"
# 145 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 146 "data/maps/DewfordTown_Hall/scripts.pory"
# 85 "data/maps/DewfordTown_Hall/scripts.pory"
# 147 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 148 "data/maps/DewfordTown_Hall/scripts.pory"
# 86 "data/maps/DewfordTown_Hall/scripts.pory"
# 149 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CollectTrendMerchandise, MSGBOX_DEFAULT
# 150 "data/maps/DewfordTown_Hall/scripts.pory"
# 87 "data/maps/DewfordTown_Hall/scripts.pory"
# 151 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 152 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 153 "data/maps/DewfordTown_Hall/scripts.pory"

# 154 "data/maps/DewfordTown_Hall/scripts.pory"

# 155 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Bookshelf::
# 156 "data/maps/DewfordTown_Hall/scripts.pory"
# 92 "data/maps/DewfordTown_Hall/scripts.pory"
# 157 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 158 "data/maps/DewfordTown_Hall/scripts.pory"
# 93 "data/maps/DewfordTown_Hall/scripts.pory"
# 159 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 160 "data/maps/DewfordTown_Hall/scripts.pory"
# 94 "data/maps/DewfordTown_Hall/scripts.pory"
# 161 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BooksAboutTrend, MSGBOX_DEFAULT
# 162 "data/maps/DewfordTown_Hall/scripts.pory"
# 95 "data/maps/DewfordTown_Hall/scripts.pory"
# 163 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 164 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 165 "data/maps/DewfordTown_Hall/scripts.pory"

# 166 "data/maps/DewfordTown_Hall/scripts.pory"

# 167 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting::
# 168 "data/maps/DewfordTown_Hall/scripts.pory"
# 100 "data/maps/DewfordTown_Hall/scripts.pory"
# 169 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 170 "data/maps/DewfordTown_Hall/scripts.pory"
# 101 "data/maps/DewfordTown_Hall/scripts.pory"
# 171 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 172 "data/maps/DewfordTown_Hall/scripts.pory"
# 102 "data/maps/DewfordTown_Hall/scripts.pory"
# 173 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 174 "data/maps/DewfordTown_Hall/scripts.pory"
# 103 "data/maps/DewfordTown_Hall/scripts.pory"
# 175 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 176 "data/maps/DewfordTown_Hall/scripts.pory"
# 104 "data/maps/DewfordTown_Hall/scripts.pory"
# 177 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_Painting_3
# 178 "data/maps/DewfordTown_Hall/scripts.pory"
# 106 "data/maps/DewfordTown_Hall/scripts.pory"
# 179 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_Painting_4
# 180 "data/maps/DewfordTown_Hall/scripts.pory"
# 108 "data/maps/DewfordTown_Hall/scripts.pory"
# 181 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_Painting_5
# 182 "data/maps/DewfordTown_Hall/scripts.pory"
# 110 "data/maps/DewfordTown_Hall/scripts.pory"
# 183 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_Painting_6
# 184 "data/maps/DewfordTown_Hall/scripts.pory"
# 112 "data/maps/DewfordTown_Hall/scripts.pory"
# 185 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_Painting_7
# 186 "data/maps/DewfordTown_Hall/scripts.pory"
# 114 "data/maps/DewfordTown_Hall/scripts.pory"
# 187 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_Painting_8
# 188 "data/maps/DewfordTown_Hall/scripts.pory"
# 116 "data/maps/DewfordTown_Hall/scripts.pory"
# 189 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_Painting_9
# 190 "data/maps/DewfordTown_Hall/scripts.pory"
# 118 "data/maps/DewfordTown_Hall/scripts.pory"
# 191 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_Painting_10
# 192 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting_1:
# 193 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 194 "data/maps/DewfordTown_Hall/scripts.pory"

# 195 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting_3:
# 196 "data/maps/DewfordTown_Hall/scripts.pory"
# 105 "data/maps/DewfordTown_Hall/scripts.pory"
# 197 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_ScreamTitle
# 198 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_Painting_1
# 199 "data/maps/DewfordTown_Hall/scripts.pory"

# 200 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting_4:
# 201 "data/maps/DewfordTown_Hall/scripts.pory"
# 107 "data/maps/DewfordTown_Hall/scripts.pory"
# 202 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_ScreamTitle
# 203 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_Painting_1
# 204 "data/maps/DewfordTown_Hall/scripts.pory"

# 205 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting_5:
# 206 "data/maps/DewfordTown_Hall/scripts.pory"
# 109 "data/maps/DewfordTown_Hall/scripts.pory"
# 207 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_SmileTitle
# 208 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_Painting_1
# 209 "data/maps/DewfordTown_Hall/scripts.pory"

# 210 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting_6:
# 211 "data/maps/DewfordTown_Hall/scripts.pory"
# 111 "data/maps/DewfordTown_Hall/scripts.pory"
# 212 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_ScreamTitle
# 213 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_Painting_1
# 214 "data/maps/DewfordTown_Hall/scripts.pory"

# 215 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting_7:
# 216 "data/maps/DewfordTown_Hall/scripts.pory"
# 113 "data/maps/DewfordTown_Hall/scripts.pory"
# 217 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_LastTitle
# 218 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_Painting_1
# 219 "data/maps/DewfordTown_Hall/scripts.pory"

# 220 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting_8:
# 221 "data/maps/DewfordTown_Hall/scripts.pory"
# 115 "data/maps/DewfordTown_Hall/scripts.pory"
# 222 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_LastTitle
# 223 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_Painting_1
# 224 "data/maps/DewfordTown_Hall/scripts.pory"

# 225 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting_9:
# 226 "data/maps/DewfordTown_Hall/scripts.pory"
# 117 "data/maps/DewfordTown_Hall/scripts.pory"
# 227 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_BirthTitle
# 228 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_Painting_1
# 229 "data/maps/DewfordTown_Hall/scripts.pory"

# 230 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting_10:
# 231 "data/maps/DewfordTown_Hall/scripts.pory"
# 119 "data/maps/DewfordTown_Hall/scripts.pory"
# 232 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_LastTitle
# 233 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_Painting_1
# 234 "data/maps/DewfordTown_Hall/scripts.pory"

# 235 "data/maps/DewfordTown_Hall/scripts.pory"

# 236 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ScreamTitle::
# 237 "data/maps/DewfordTown_Hall/scripts.pory"
# 125 "data/maps/DewfordTown_Hall/scripts.pory"
# 238 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsScream, MSGBOX_DEFAULT
# 239 "data/maps/DewfordTown_Hall/scripts.pory"
# 126 "data/maps/DewfordTown_Hall/scripts.pory"
# 240 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 241 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 242 "data/maps/DewfordTown_Hall/scripts.pory"

# 243 "data/maps/DewfordTown_Hall/scripts.pory"

# 244 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SmileTitle::
# 245 "data/maps/DewfordTown_Hall/scripts.pory"
# 131 "data/maps/DewfordTown_Hall/scripts.pory"
# 246 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsSmile, MSGBOX_DEFAULT
# 247 "data/maps/DewfordTown_Hall/scripts.pory"
# 132 "data/maps/DewfordTown_Hall/scripts.pory"
# 248 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 249 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 250 "data/maps/DewfordTown_Hall/scripts.pory"

# 251 "data/maps/DewfordTown_Hall/scripts.pory"

# 252 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LastTitle::
# 253 "data/maps/DewfordTown_Hall/scripts.pory"
# 137 "data/maps/DewfordTown_Hall/scripts.pory"
# 254 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LastTrend, MSGBOX_DEFAULT
# 255 "data/maps/DewfordTown_Hall/scripts.pory"
# 138 "data/maps/DewfordTown_Hall/scripts.pory"
# 256 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 257 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 258 "data/maps/DewfordTown_Hall/scripts.pory"

# 259 "data/maps/DewfordTown_Hall/scripts.pory"

# 260 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_BirthTitle::
# 261 "data/maps/DewfordTown_Hall/scripts.pory"
# 143 "data/maps/DewfordTown_Hall/scripts.pory"
# 262 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BirthOfTrend, MSGBOX_DEFAULT
# 263 "data/maps/DewfordTown_Hall/scripts.pory"
# 144 "data/maps/DewfordTown_Hall/scripts.pory"
# 264 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 265 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 266 "data/maps/DewfordTown_Hall/scripts.pory"

# 267 "data/maps/DewfordTown_Hall/scripts.pory"

# 268 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SchoolKidM::
# 269 "data/maps/DewfordTown_Hall/scripts.pory"
# 149 "data/maps/DewfordTown_Hall/scripts.pory"
# 270 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 271 "data/maps/DewfordTown_Hall/scripts.pory"
# 150 "data/maps/DewfordTown_Hall/scripts.pory"
# 272 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 0
# 273 "data/maps/DewfordTown_Hall/scripts.pory"
# 151 "data/maps/DewfordTown_Hall/scripts.pory"
# 274 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
# 275 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 276 "data/maps/DewfordTown_Hall/scripts.pory"

# 277 "data/maps/DewfordTown_Hall/scripts.pory"

# 278 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PsychicM::
# 279 "data/maps/DewfordTown_Hall/scripts.pory"
# 156 "data/maps/DewfordTown_Hall/scripts.pory"
# 280 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 281 "data/maps/DewfordTown_Hall/scripts.pory"
# 157 "data/maps/DewfordTown_Hall/scripts.pory"
# 282 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 1
# 283 "data/maps/DewfordTown_Hall/scripts.pory"
# 158 "data/maps/DewfordTown_Hall/scripts.pory"
# 284 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
# 285 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 286 "data/maps/DewfordTown_Hall/scripts.pory"

# 287 "data/maps/DewfordTown_Hall/scripts.pory"

# 288 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate::
# 289 "data/maps/DewfordTown_Hall/scripts.pory"
# 163 "data/maps/DewfordTown_Hall/scripts.pory"
# 290 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 291 "data/maps/DewfordTown_Hall/scripts.pory"
# 164 "data/maps/DewfordTown_Hall/scripts.pory"
# 292 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 293 "data/maps/DewfordTown_Hall/scripts.pory"
# 165 "data/maps/DewfordTown_Hall/scripts.pory"
# 294 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 295 "data/maps/DewfordTown_Hall/scripts.pory"
# 166 "data/maps/DewfordTown_Hall/scripts.pory"
# 296 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_DoTrendDebate_3
# 297 "data/maps/DewfordTown_Hall/scripts.pory"
# 168 "data/maps/DewfordTown_Hall/scripts.pory"
# 298 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_DoTrendDebate_4
# 299 "data/maps/DewfordTown_Hall/scripts.pory"
# 170 "data/maps/DewfordTown_Hall/scripts.pory"
# 300 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_DoTrendDebate_5
# 301 "data/maps/DewfordTown_Hall/scripts.pory"
# 172 "data/maps/DewfordTown_Hall/scripts.pory"
# 302 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_DoTrendDebate_6
# 303 "data/maps/DewfordTown_Hall/scripts.pory"
# 174 "data/maps/DewfordTown_Hall/scripts.pory"
# 304 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_DoTrendDebate_7
# 305 "data/maps/DewfordTown_Hall/scripts.pory"
# 176 "data/maps/DewfordTown_Hall/scripts.pory"
# 306 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_DoTrendDebate_8
# 307 "data/maps/DewfordTown_Hall/scripts.pory"
# 178 "data/maps/DewfordTown_Hall/scripts.pory"
# 308 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_DoTrendDebate_9
# 309 "data/maps/DewfordTown_Hall/scripts.pory"
# 180 "data/maps/DewfordTown_Hall/scripts.pory"
# 310 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_DoTrendDebate_10
# 311 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate_1:
# 312 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 313 "data/maps/DewfordTown_Hall/scripts.pory"

# 314 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate_3:
# 315 "data/maps/DewfordTown_Hall/scripts.pory"
# 167 "data/maps/DewfordTown_Hall/scripts.pory"
# 316 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate1
# 317 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1
# 318 "data/maps/DewfordTown_Hall/scripts.pory"

# 319 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate_4:
# 320 "data/maps/DewfordTown_Hall/scripts.pory"
# 169 "data/maps/DewfordTown_Hall/scripts.pory"
# 321 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate1
# 322 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1
# 323 "data/maps/DewfordTown_Hall/scripts.pory"

# 324 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate_5:
# 325 "data/maps/DewfordTown_Hall/scripts.pory"
# 171 "data/maps/DewfordTown_Hall/scripts.pory"
# 326 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate2
# 327 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1
# 328 "data/maps/DewfordTown_Hall/scripts.pory"

# 329 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate_6:
# 330 "data/maps/DewfordTown_Hall/scripts.pory"
# 173 "data/maps/DewfordTown_Hall/scripts.pory"
# 331 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate2
# 332 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1
# 333 "data/maps/DewfordTown_Hall/scripts.pory"

# 334 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate_7:
# 335 "data/maps/DewfordTown_Hall/scripts.pory"
# 175 "data/maps/DewfordTown_Hall/scripts.pory"
# 336 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate3
# 337 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1
# 338 "data/maps/DewfordTown_Hall/scripts.pory"

# 339 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate_8:
# 340 "data/maps/DewfordTown_Hall/scripts.pory"
# 177 "data/maps/DewfordTown_Hall/scripts.pory"
# 341 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate3
# 342 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1
# 343 "data/maps/DewfordTown_Hall/scripts.pory"

# 344 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate_9:
# 345 "data/maps/DewfordTown_Hall/scripts.pory"
# 179 "data/maps/DewfordTown_Hall/scripts.pory"
# 346 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate4
# 347 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1
# 348 "data/maps/DewfordTown_Hall/scripts.pory"

# 349 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate_10:
# 350 "data/maps/DewfordTown_Hall/scripts.pory"
# 181 "data/maps/DewfordTown_Hall/scripts.pory"
# 351 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate5
# 352 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1
# 353 "data/maps/DewfordTown_Hall/scripts.pory"

# 354 "data/maps/DewfordTown_Hall/scripts.pory"

# 355 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate1::
# 356 "data/maps/DewfordTown_Hall/scripts.pory"
# 187 "data/maps/DewfordTown_Hall/scripts.pory"
# 357 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 358 "data/maps/DewfordTown_Hall/scripts.pory"
# 188 "data/maps/DewfordTown_Hall/scripts.pory"
# 359 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_SawTrendCoolestThing, MSGBOX_DEFAULT
# 360 "data/maps/DewfordTown_Hall/scripts.pory"
# 189 "data/maps/DewfordTown_Hall/scripts.pory"
# 361 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 362 "data/maps/DewfordTown_Hall/scripts.pory"
# 190 "data/maps/DewfordTown_Hall/scripts.pory"
# 363 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_AllegedTrendNotAuthentic, MSGBOX_DEFAULT
# 364 "data/maps/DewfordTown_Hall/scripts.pory"
# 191 "data/maps/DewfordTown_Hall/scripts.pory"
# 365 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 366 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 367 "data/maps/DewfordTown_Hall/scripts.pory"

# 368 "data/maps/DewfordTown_Hall/scripts.pory"

# 369 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate2::
# 370 "data/maps/DewfordTown_Hall/scripts.pory"
# 196 "data/maps/DewfordTown_Hall/scripts.pory"
# 371 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 372 "data/maps/DewfordTown_Hall/scripts.pory"
# 197 "data/maps/DewfordTown_Hall/scripts.pory"
# 373 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_ComposedTrendThemeSong, MSGBOX_DEFAULT
# 374 "data/maps/DewfordTown_Hall/scripts.pory"
# 198 "data/maps/DewfordTown_Hall/scripts.pory"
# 375 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 376 "data/maps/DewfordTown_Hall/scripts.pory"
# 199 "data/maps/DewfordTown_Hall/scripts.pory"
# 377 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WorkOnYourSinging, MSGBOX_DEFAULT
# 378 "data/maps/DewfordTown_Hall/scripts.pory"
# 200 "data/maps/DewfordTown_Hall/scripts.pory"
# 379 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 380 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 381 "data/maps/DewfordTown_Hall/scripts.pory"

# 382 "data/maps/DewfordTown_Hall/scripts.pory"

# 383 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate3::
# 384 "data/maps/DewfordTown_Hall/scripts.pory"
# 205 "data/maps/DewfordTown_Hall/scripts.pory"
# 385 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 386 "data/maps/DewfordTown_Hall/scripts.pory"
# 206 "data/maps/DewfordTown_Hall/scripts.pory"
# 387 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_OrganizeTrendParty, MSGBOX_DEFAULT
# 388 "data/maps/DewfordTown_Hall/scripts.pory"
# 207 "data/maps/DewfordTown_Hall/scripts.pory"
# 389 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 390 "data/maps/DewfordTown_Hall/scripts.pory"
# 208 "data/maps/DewfordTown_Hall/scripts.pory"
# 391 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BrilliantIndeed, MSGBOX_DEFAULT
# 392 "data/maps/DewfordTown_Hall/scripts.pory"
# 209 "data/maps/DewfordTown_Hall/scripts.pory"
# 393 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 394 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 395 "data/maps/DewfordTown_Hall/scripts.pory"

# 396 "data/maps/DewfordTown_Hall/scripts.pory"

# 397 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate4::
# 398 "data/maps/DewfordTown_Hall/scripts.pory"
# 214 "data/maps/DewfordTown_Hall/scripts.pory"
# 399 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 400 "data/maps/DewfordTown_Hall/scripts.pory"
# 215 "data/maps/DewfordTown_Hall/scripts.pory"
# 401 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendHasBecomePartOfLife, MSGBOX_DEFAULT
# 402 "data/maps/DewfordTown_Hall/scripts.pory"
# 216 "data/maps/DewfordTown_Hall/scripts.pory"
# 403 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 404 "data/maps/DewfordTown_Hall/scripts.pory"
# 217 "data/maps/DewfordTown_Hall/scripts.pory"
# 405 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind, MSGBOX_DEFAULT
# 406 "data/maps/DewfordTown_Hall/scripts.pory"
# 218 "data/maps/DewfordTown_Hall/scripts.pory"
# 407 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 408 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 409 "data/maps/DewfordTown_Hall/scripts.pory"

# 410 "data/maps/DewfordTown_Hall/scripts.pory"

# 411 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate5::
# 412 "data/maps/DewfordTown_Hall/scripts.pory"
# 223 "data/maps/DewfordTown_Hall/scripts.pory"
# 413 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 414 "data/maps/DewfordTown_Hall/scripts.pory"
# 224 "data/maps/DewfordTown_Hall/scripts.pory"
# 415 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible, MSGBOX_DEFAULT
# 416 "data/maps/DewfordTown_Hall/scripts.pory"
# 225 "data/maps/DewfordTown_Hall/scripts.pory"
# 417 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 418 "data/maps/DewfordTown_Hall/scripts.pory"
# 226 "data/maps/DewfordTown_Hall/scripts.pory"
# 419 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WellBeTrendDuo, MSGBOX_DEFAULT
# 420 "data/maps/DewfordTown_Hall/scripts.pory"
# 227 "data/maps/DewfordTown_Hall/scripts.pory"
# 421 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 422 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 423 "data/maps/DewfordTown_Hall/scripts.pory"

# 424 "data/maps/DewfordTown_Hall/scripts.pory"

# 425 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DontMovePlayer1::
# 426 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 427 "data/maps/DewfordTown_Hall/scripts.pory"

# 428 "data/maps/DewfordTown_Hall/scripts.pory"

# 429 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact1::
# 430 "data/maps/DewfordTown_Hall/scripts.pory"
# 236 "data/maps/DewfordTown_Hall/scripts.pory"
# 431 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_PSYCHIC_M, DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft
# 432 "data/maps/DewfordTown_Hall/scripts.pory"
# 237 "data/maps/DewfordTown_Hall/scripts.pory"
# 433 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 434 "data/maps/DewfordTown_Hall/scripts.pory"
# 238 "data/maps/DewfordTown_Hall/scripts.pory"
# 435 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 0
# 436 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_DebateReact1_2
# 437 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact1_1:
# 438 "data/maps/DewfordTown_Hall/scripts.pory"
# 241 "data/maps/DewfordTown_Hall/scripts.pory"
# 439 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 1
# 440 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_DebateReact1_5
# 441 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact1_4:
# 442 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 443 "data/maps/DewfordTown_Hall/scripts.pory"

# 444 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact1_2:
# 445 "data/maps/DewfordTown_Hall/scripts.pory"
# 239 "data/maps/DewfordTown_Hall/scripts.pory"
# 446 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_PlayerReactWest
# 447 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DebateReact1_1
# 448 "data/maps/DewfordTown_Hall/scripts.pory"

# 449 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact1_5:
# 450 "data/maps/DewfordTown_Hall/scripts.pory"
# 242 "data/maps/DewfordTown_Hall/scripts.pory"
# 451 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DontMovePlayer2
# 452 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DebateReact1_4
# 453 "data/maps/DewfordTown_Hall/scripts.pory"

# 454 "data/maps/DewfordTown_Hall/scripts.pory"

# 455 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactWest::
# 456 "data/maps/DewfordTown_Hall/scripts.pory"
# 248 "data/maps/DewfordTown_Hall/scripts.pory"
# 457 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 458 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_PlayerReactWest_2
# 459 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactWest_1:
# 460 "data/maps/DewfordTown_Hall/scripts.pory"
# 251 "data/maps/DewfordTown_Hall/scripts.pory"
# 461 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 462 "data/maps/DewfordTown_Hall/scripts.pory"
# 252 "data/maps/DewfordTown_Hall/scripts.pory"
# 463 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 464 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 465 "data/maps/DewfordTown_Hall/scripts.pory"

# 466 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactWest_2:
# 467 "data/maps/DewfordTown_Hall/scripts.pory"
# 249 "data/maps/DewfordTown_Hall/scripts.pory"
# 468 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DontMovePlayer1
# 469 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_PlayerReactWest_1
# 470 "data/maps/DewfordTown_Hall/scripts.pory"

# 471 "data/maps/DewfordTown_Hall/scripts.pory"

# 472 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DontMovePlayer2::
# 473 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 474 "data/maps/DewfordTown_Hall/scripts.pory"

# 475 "data/maps/DewfordTown_Hall/scripts.pory"

# 476 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact2::
# 477 "data/maps/DewfordTown_Hall/scripts.pory"
# 261 "data/maps/DewfordTown_Hall/scripts.pory"
# 478 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_SCHOOL_KID_M, DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight
# 479 "data/maps/DewfordTown_Hall/scripts.pory"
# 262 "data/maps/DewfordTown_Hall/scripts.pory"
# 480 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 481 "data/maps/DewfordTown_Hall/scripts.pory"
# 263 "data/maps/DewfordTown_Hall/scripts.pory"
# 482 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 0
# 483 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_DebateReact2_2
# 484 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact2_1:
# 485 "data/maps/DewfordTown_Hall/scripts.pory"
# 266 "data/maps/DewfordTown_Hall/scripts.pory"
# 486 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 1
# 487 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_DebateReact2_5
# 488 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact2_4:
# 489 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 490 "data/maps/DewfordTown_Hall/scripts.pory"

# 491 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact2_2:
# 492 "data/maps/DewfordTown_Hall/scripts.pory"
# 264 "data/maps/DewfordTown_Hall/scripts.pory"
# 493 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_PlayerReactNorthSouth
# 494 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DebateReact2_1
# 495 "data/maps/DewfordTown_Hall/scripts.pory"

# 496 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact2_5:
# 497 "data/maps/DewfordTown_Hall/scripts.pory"
# 267 "data/maps/DewfordTown_Hall/scripts.pory"
# 498 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_PlayerReactEast
# 499 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DebateReact2_4
# 500 "data/maps/DewfordTown_Hall/scripts.pory"

# 501 "data/maps/DewfordTown_Hall/scripts.pory"

# 502 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactNorthSouth::
# 503 "data/maps/DewfordTown_Hall/scripts.pory"
# 273 "data/maps/DewfordTown_Hall/scripts.pory"
# 504 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 505 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_PlayerReactNorthSouth_2
# 506 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactNorthSouth_1:
# 507 "data/maps/DewfordTown_Hall/scripts.pory"
# 276 "data/maps/DewfordTown_Hall/scripts.pory"
# 508 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 509 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_PlayerReactNorthSouth_5
# 510 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactNorthSouth_4:
# 511 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 512 "data/maps/DewfordTown_Hall/scripts.pory"

# 513 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactNorthSouth_2:
# 514 "data/maps/DewfordTown_Hall/scripts.pory"
# 274 "data/maps/DewfordTown_Hall/scripts.pory"
# 515 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp
# 516 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_PlayerReactNorthSouth_1
# 517 "data/maps/DewfordTown_Hall/scripts.pory"

# 518 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactNorthSouth_5:
# 519 "data/maps/DewfordTown_Hall/scripts.pory"
# 277 "data/maps/DewfordTown_Hall/scripts.pory"
# 520 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown
# 521 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_PlayerReactNorthSouth_4
# 522 "data/maps/DewfordTown_Hall/scripts.pory"

# 523 "data/maps/DewfordTown_Hall/scripts.pory"

# 524 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp::
# 525 "data/maps/DewfordTown_Hall/scripts.pory"
# 283 "data/maps/DewfordTown_Hall/scripts.pory"
# 526 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 527 "data/maps/DewfordTown_Hall/scripts.pory"
# 284 "data/maps/DewfordTown_Hall/scripts.pory"
# 528 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 529 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 530 "data/maps/DewfordTown_Hall/scripts.pory"

# 531 "data/maps/DewfordTown_Hall/scripts.pory"

# 532 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown::
# 533 "data/maps/DewfordTown_Hall/scripts.pory"
# 289 "data/maps/DewfordTown_Hall/scripts.pory"
# 534 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 535 "data/maps/DewfordTown_Hall/scripts.pory"
# 290 "data/maps/DewfordTown_Hall/scripts.pory"
# 536 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 537 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 538 "data/maps/DewfordTown_Hall/scripts.pory"

# 539 "data/maps/DewfordTown_Hall/scripts.pory"

# 540 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactEast::
# 541 "data/maps/DewfordTown_Hall/scripts.pory"
# 295 "data/maps/DewfordTown_Hall/scripts.pory"
# 542 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 543 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_PlayerReactEast_2
# 544 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactEast_1:
# 545 "data/maps/DewfordTown_Hall/scripts.pory"
# 298 "data/maps/DewfordTown_Hall/scripts.pory"
# 546 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 547 "data/maps/DewfordTown_Hall/scripts.pory"
# 299 "data/maps/DewfordTown_Hall/scripts.pory"
# 548 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 549 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 550 "data/maps/DewfordTown_Hall/scripts.pory"

# 551 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactEast_2:
# 552 "data/maps/DewfordTown_Hall/scripts.pory"
# 296 "data/maps/DewfordTown_Hall/scripts.pory"
# 553 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DontMovePlayer1
# 554 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_PlayerReactEast_1
# 555 "data/maps/DewfordTown_Hall/scripts.pory"

# 556 "data/maps/DewfordTown_Hall/scripts.pory"

# 557 "data/maps/DewfordTown_Hall/scripts.pory"
# 303 "data/maps/DewfordTown_Hall/scripts.pory"
# 558 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft:
# 559 "data/maps/DewfordTown_Hall/scripts.pory"
# 304 "data/maps/DewfordTown_Hall/scripts.pory"
# 560 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_left
# 561 "data/maps/DewfordTown_Hall/scripts.pory"
# 305 "data/maps/DewfordTown_Hall/scripts.pory"
# 562 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end
# 563 "data/maps/DewfordTown_Hall/scripts.pory"

# 564 "data/maps/DewfordTown_Hall/scripts.pory"
# 308 "data/maps/DewfordTown_Hall/scripts.pory"
# 565 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight:
# 566 "data/maps/DewfordTown_Hall/scripts.pory"
# 309 "data/maps/DewfordTown_Hall/scripts.pory"
# 567 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_right
# 568 "data/maps/DewfordTown_Hall/scripts.pory"
# 310 "data/maps/DewfordTown_Hall/scripts.pory"
# 569 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end
# 570 "data/maps/DewfordTown_Hall/scripts.pory"

# 571 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SludgeBombMan::
# 572 "data/maps/DewfordTown_Hall/scripts.pory"
# 314 "data/maps/DewfordTown_Hall/scripts.pory"
# 573 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 574 "data/maps/DewfordTown_Hall/scripts.pory"
# 315 "data/maps/DewfordTown_Hall/scripts.pory"
# 575 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 576 "data/maps/DewfordTown_Hall/scripts.pory"
# 316 "data/maps/DewfordTown_Hall/scripts.pory"
# 577 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 578 "data/maps/DewfordTown_Hall/scripts.pory"
# 317 "data/maps/DewfordTown_Hall/scripts.pory"
# 579 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SLUDGE_BOMB, DewfordTown_Hall_EventScript_SludgeBombMan_2
# 580 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SludgeBombMan_1:
# 581 "data/maps/DewfordTown_Hall/scripts.pory"
# 320 "data/maps/DewfordTown_Hall/scripts.pory"
# 582 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GiveYouSludgeBomb, MSGBOX_DEFAULT
# 583 "data/maps/DewfordTown_Hall/scripts.pory"
# 321 "data/maps/DewfordTown_Hall/scripts.pory"
# 584 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB
# 585 "data/maps/DewfordTown_Hall/scripts.pory"
# 322 "data/maps/DewfordTown_Hall/scripts.pory"
# 586 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, FALSE
# 587 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq DewfordTown_Hall_EventScript_SludgeBombMan_5
# 588 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SludgeBombMan_4:
# 589 "data/maps/DewfordTown_Hall/scripts.pory"
# 325 "data/maps/DewfordTown_Hall/scripts.pory"
# 590 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_RECEIVED_TM_SLUDGE_BOMB
# 591 "data/maps/DewfordTown_Hall/scripts.pory"
# 326 "data/maps/DewfordTown_Hall/scripts.pory"
# 592 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 593 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 594 "data/maps/DewfordTown_Hall/scripts.pory"

# 595 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SludgeBombMan_2:
# 596 "data/maps/DewfordTown_Hall/scripts.pory"
# 318 "data/maps/DewfordTown_Hall/scripts.pory"
# 597 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_ReceivedSludgeBomb
# 598 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_SludgeBombMan_1
# 599 "data/maps/DewfordTown_Hall/scripts.pory"

# 600 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SludgeBombMan_5:
# 601 "data/maps/DewfordTown_Hall/scripts.pory"
# 323 "data/maps/DewfordTown_Hall/scripts.pory"
# 602 "data/maps/DewfordTown_Hall/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 603 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_SludgeBombMan_4
# 604 "data/maps/DewfordTown_Hall/scripts.pory"

# 605 "data/maps/DewfordTown_Hall/scripts.pory"

# 606 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ReceivedSludgeBomb::
# 607 "data/maps/DewfordTown_Hall/scripts.pory"
# 331 "data/maps/DewfordTown_Hall/scripts.pory"
# 608 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo, MSGBOX_DEFAULT
# 609 "data/maps/DewfordTown_Hall/scripts.pory"
# 332 "data/maps/DewfordTown_Hall/scripts.pory"
# 610 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 611 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 612 "data/maps/DewfordTown_Hall/scripts.pory"

# 613 "data/maps/DewfordTown_Hall/scripts.pory"

# 614 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_CantImagineLifeWithoutTrend::
# 615 "data/maps/DewfordTown_Hall/scripts.pory"
# 336 "data/maps/DewfordTown_Hall/scripts.pory"
# 616 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What's in vogue? Why, it has to be\n"
# 617 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”!\p"
# 618 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I can't imagine what life would be like\n"
# 619 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "without “{STR_VAR_1}”!$"
# 620 "data/maps/DewfordTown_Hall/scripts.pory"

# 621 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_GettingBoredOfTrend::
# 622 "data/maps/DewfordTown_Hall/scripts.pory"
# 343 "data/maps/DewfordTown_Hall/scripts.pory"
# 623 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What's in vogue? Why, it has to be\n"
# 624 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”!\p"
# 625 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "But I'm getting kind of bored with it.\p"
# 626 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I should look for the next big thing.$"
# 627 "data/maps/DewfordTown_Hall/scripts.pory"

# 628 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TeachingMonAboutTrend::
# 629 "data/maps/DewfordTown_Hall/scripts.pory"
# 350 "data/maps/DewfordTown_Hall/scripts.pory"
# 630 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm teaching my POKéMON about\n"
# 631 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1},”\l"
# 632 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "but it's not going well.\p"
# 633 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's a bit too much, I think.$"
# 634 "data/maps/DewfordTown_Hall/scripts.pory"

# 635 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_DeepLinkBetweenXAndY::
# 636 "data/maps/DewfordTown_Hall/scripts.pory"
# 357 "data/maps/DewfordTown_Hall/scripts.pory"
# 637 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm studying up on the hip and trendy\n"
# 638 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” now.\p"
# 639 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Is it true that there's a deep link\n"
# 640 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "between “{STR_VAR_1}”\l"
# 641 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "and “{STR_VAR_2}”?$"
# 642 "data/maps/DewfordTown_Hall/scripts.pory"

# 643 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_MyHunchWasRight::
# 644 "data/maps/DewfordTown_Hall/scripts.pory"
# 365 "data/maps/DewfordTown_Hall/scripts.pory"
# 645 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh!\n"
# 646 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "So, my hunch was right!\p"
# 647 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm one step closer to being hip and\n"
# 648 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "happening, yowza!$"
# 649 "data/maps/DewfordTown_Hall/scripts.pory"

# 650 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_NotEasyToKeepUp::
# 651 "data/maps/DewfordTown_Hall/scripts.pory"
# 372 "data/maps/DewfordTown_Hall/scripts.pory"
# 652 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What?!\n"
# 653 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Is that so?!\p"
# 654 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's not easy for an older fellow like\n"
# 655 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "me to keep up with trends!$"
# 656 "data/maps/DewfordTown_Hall/scripts.pory"

# 657 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TVShowAboutTrend::
# 658 "data/maps/DewfordTown_Hall/scripts.pory"
# 379 "data/maps/DewfordTown_Hall/scripts.pory"
# 659 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "This whole business about\n"
# 660 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 661 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Isn't there a TV show on it?$"
# 662 "data/maps/DewfordTown_Hall/scripts.pory"

# 663 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea::
# 664 "data/maps/DewfordTown_Hall/scripts.pory"
# 385 "data/maps/DewfordTown_Hall/scripts.pory"
# 665 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Across the sea…\p"
# 666 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Is “{STR_VAR_1}”\n"
# 667 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "even more popular?$"
# 668 "data/maps/DewfordTown_Hall/scripts.pory"

# 669 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_CollectTrendMerchandise::
# 670 "data/maps/DewfordTown_Hall/scripts.pory"
# 391 "data/maps/DewfordTown_Hall/scripts.pory"
# 671 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I collect official\n"
# 672 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 673 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "licensed merchandise.\p"
# 674 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I have official\n"
# 675 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” DOLLS…\p"
# 676 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Official “{STR_VAR_1}”\n"
# 677 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "brand clothing…\p"
# 678 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "And officially licensed\n"
# 679 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 680 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "picture books.\p"
# 681 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Heheh, I own!\n"
# 682 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm not sharing anything with you!$"
# 683 "data/maps/DewfordTown_Hall/scripts.pory"

# 684 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BooksAboutTrend::
# 685 "data/maps/DewfordTown_Hall/scripts.pory"
# 406 "data/maps/DewfordTown_Hall/scripts.pory"
# 686 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "IDENTIFYING GOOD\n"
# 687 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” &\l"
# 688 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "BAD “{STR_VAR_1}”…\p"
# 689 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "THE LINK BETWEEN\n"
# 690 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” AND\l"
# 691 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "POKéMON…\p"
# 692 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "USEFUL\n"
# 693 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”…\p"
# 694 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's neatly jammed with books about\n"
# 695 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}.”$"
# 696 "data/maps/DewfordTown_Hall/scripts.pory"

# 697 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendsScream::
# 698 "data/maps/DewfordTown_Hall/scripts.pory"
# 419 "data/maps/DewfordTown_Hall/scripts.pory"
# 699 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}'S\n"
# 700 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "SCREAM” is the title.$"
# 701 "data/maps/DewfordTown_Hall/scripts.pory"

# 702 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendsSmile::
# 703 "data/maps/DewfordTown_Hall/scripts.pory"
# 424 "data/maps/DewfordTown_Hall/scripts.pory"
# 704 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}'S\n"
# 705 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "SMILE” is the title.$"
# 706 "data/maps/DewfordTown_Hall/scripts.pory"

# 707 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_LastTrend::
# 708 "data/maps/DewfordTown_Hall/scripts.pory"
# 429 "data/maps/DewfordTown_Hall/scripts.pory"
# 709 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's titled “THE LAST\n"
# 710 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}”.$"
# 711 "data/maps/DewfordTown_Hall/scripts.pory"

# 712 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BirthOfTrend::
# 713 "data/maps/DewfordTown_Hall/scripts.pory"
# 434 "data/maps/DewfordTown_Hall/scripts.pory"
# 714 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's titled “THE BIRTH OF\n"
# 715 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}”.$"
# 716 "data/maps/DewfordTown_Hall/scripts.pory"

# 717 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_SawTrendCoolestThing::
# 718 "data/maps/DewfordTown_Hall/scripts.pory"
# 439 "data/maps/DewfordTown_Hall/scripts.pory"
# 719 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I saw “{STR_VAR_1}”!\n"
# 720 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Cool, huh?\p"
# 721 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's, like, the coolest thing going!\p"
# 722 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It was awesome!\n"
# 723 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It was the real thing, oh yeah!$"
# 724 "data/maps/DewfordTown_Hall/scripts.pory"

# 725 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_AllegedTrendNotAuthentic::
# 726 "data/maps/DewfordTown_Hall/scripts.pory"
# 447 "data/maps/DewfordTown_Hall/scripts.pory"
# 727 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh, no, no, no.\p"
# 728 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "That alleged\n"
# 729 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 730 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "you claim to have seen--it's not.\p"
# 731 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "The authentic article is much…\n"
# 732 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "How should I say it?\l"
# 733 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Sharper, yet more mellow!\p"
# 734 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Ah, no matter. It's astonishing!$"
# 735 "data/maps/DewfordTown_Hall/scripts.pory"

# 736 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_ComposedTrendThemeSong::
# 737 "data/maps/DewfordTown_Hall/scripts.pory"
# 458 "data/maps/DewfordTown_Hall/scripts.pory"
# 738 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hey, listen, I composed a theme song\n"
# 739 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "for “{STR_VAR_1}.”\p"
# 740 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\n"
# 741 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "is really popular right now.\p"
# 742 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Okay, listen!\n"
# 743 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "… …\p"
# 744 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh!\n"
# 745 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}!\p"
# 746 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Wonderful\n"
# 747 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}!$"
# 748 "data/maps/DewfordTown_Hall/scripts.pory"

# 749 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_WorkOnYourSinging::
# 750 "data/maps/DewfordTown_Hall/scripts.pory"
# 471 "data/maps/DewfordTown_Hall/scripts.pory"
# 751 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "… …\p"
# 752 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I dare say, chap, it would pay for you\n"
# 753 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "to work on your singing before you\l"
# 754 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "trifle yourself with\l"
# 755 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}.”$"
# 756 "data/maps/DewfordTown_Hall/scripts.pory"

# 757 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_OrganizeTrendParty::
# 758 "data/maps/DewfordTown_Hall/scripts.pory"
# 479 "data/maps/DewfordTown_Hall/scripts.pory"
# 759 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Anyway, as I was saying earlier, we\n"
# 760 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "should get together and organize a\l"
# 761 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” party\l"
# 762 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "on the island.$"
# 763 "data/maps/DewfordTown_Hall/scripts.pory"

# 764 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BrilliantIndeed::
# 765 "data/maps/DewfordTown_Hall/scripts.pory"
# 486 "data/maps/DewfordTown_Hall/scripts.pory"
# 766 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh, a smashing good idea!\p"
# 767 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It will settle once and for all\n"
# 768 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "who is the best at\l"
# 769 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}.”\l"
# 770 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Brilliant, indeed!\p"
# 771 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Starting today, our lives will revolve\n"
# 772 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "around “{STR_VAR_1}”!$"
# 773 "data/maps/DewfordTown_Hall/scripts.pory"

# 774 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendHasBecomePartOfLife::
# 775 "data/maps/DewfordTown_Hall/scripts.pory"
# 496 "data/maps/DewfordTown_Hall/scripts.pory"
# 776 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I was thinking, though…\p"
# 777 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Wouldn't you agree that\n"
# 778 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” has\l"
# 779 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "grown from being something trendy to\l"
# 780 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "being a part of our daily lives?$"
# 781 "data/maps/DewfordTown_Hall/scripts.pory"

# 782 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind::
# 783 "data/maps/DewfordTown_Hall/scripts.pory"
# 504 "data/maps/DewfordTown_Hall/scripts.pory"
# 784 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Beg pardon?\n"
# 785 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "That much, what?\p"
# 786 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "However, it's true that\n"
# 787 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 788 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "weighs heavily on your mind, whether\l"
# 789 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "you're awake or asleep.\p"
# 790 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Absolutely, you're the\n"
# 791 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 792 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "PROFESSOR, old sport!$"
# 793 "data/maps/DewfordTown_Hall/scripts.pory"

# 794 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible::
# 795 "data/maps/DewfordTown_Hall/scripts.pory"
# 516 "data/maps/DewfordTown_Hall/scripts.pory"
# 796 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "If you and me team up as a combo,\n"
# 797 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "we'll be invincible when it comes to all\l"
# 798 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "things “{STR_VAR_1}”!$"
# 799 "data/maps/DewfordTown_Hall/scripts.pory"

# 800 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_WellBeTrendDuo::
# 801 "data/maps/DewfordTown_Hall/scripts.pory"
# 522 "data/maps/DewfordTown_Hall/scripts.pory"
# 802 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Spot on, my friend!\p"
# 803 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "We shall be the\n"
# 804 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” DUO!\p"
# 805 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Isn't that a ripe image?\n"
# 806 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hahahah!$"
# 807 "data/maps/DewfordTown_Hall/scripts.pory"

# 808 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_GiveYouSludgeBomb::
# 809 "data/maps/DewfordTown_Hall/scripts.pory"
# 530 "data/maps/DewfordTown_Hall/scripts.pory"
# 810 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "For me, SLUDGE BOMB is at the peak\n"
# 811 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "of popularity. It's the one.\p"
# 812 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hunh? You're telling me that you don't\n"
# 813 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "know about SLUDGE BOMB?\p"
# 814 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "That's outright pitiful.\n"
# 815 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'll give you one.$"
# 816 "data/maps/DewfordTown_Hall/scripts.pory"

# 817 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo::
# 818 "data/maps/DewfordTown_Hall/scripts.pory"
# 539 "data/maps/DewfordTown_Hall/scripts.pory"
# 819 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I love SLUDGE BOMB.\p"
# 820 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "But POKéMON with the move\n"
# 821 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 822 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "are in, too.$"
