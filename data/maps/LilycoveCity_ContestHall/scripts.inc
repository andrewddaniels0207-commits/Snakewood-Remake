# 1 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 2 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_MapScripts::
# 3 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 5 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 6 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Boy1::
# 7 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 4 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 8 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_TodayWonSmartnessContest, MSGBOX_NPC
# 9 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 11 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 12 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Boy2::
# 13 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 9 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 14 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredBunchOfContests, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 17 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 18 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Girl::
# 19 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 14 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 20 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks, MSGBOX_NPC
# 21 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 23 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 24 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Sailor::
# 25 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 19 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 26 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous, MSGBOX_NPC
# 27 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 28 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 29 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 30 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestMC::
# 31 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 24 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 32 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 33 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 25 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 34 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 35 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 26 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 36 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal, MSGBOX_DEFAULT
# 37 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 27 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 38 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 39 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 28 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 40 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_MC, Common_Movement_FaceOriginalDirection
# 41 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 29 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 42 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 43 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 30 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 44 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 45 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 46 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 47 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 48 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestJudge::
# 49 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 35 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 50 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 51 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 36 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 52 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 53 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 37 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 54 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest, MSGBOX_DEFAULT
# 55 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 38 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 56 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 57 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 39 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 58 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_JUDGE, Common_Movement_FaceOriginalDirection
# 59 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 40 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 60 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 61 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 41 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 62 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 65 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 66 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant1::
# 67 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 46 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 68 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 69 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 47 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 70 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 71 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 48 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 72 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredWrongContest, MSGBOX_DEFAULT
# 73 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 49 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 74 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 75 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 50 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 76 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 77 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 51 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 78 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 79 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 52 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 80 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 81 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 82 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 83 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 84 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant2::
# 85 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 57 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 86 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 87 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 58 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 88 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 89 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 59 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 90 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_RaisedMonToBeSmart, MSGBOX_DEFAULT
# 91 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 60 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 92 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 93 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 61 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 94 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 95 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 62 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 96 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 97 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 63 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 98 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 99 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 101 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 102 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant3::
# 103 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 68 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 104 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 105 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 69 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 106 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 107 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 70 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 108 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext, MSGBOX_DEFAULT
# 109 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 71 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 110 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 111 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 72 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 112 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 113 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 73 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 114 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 115 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 74 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 116 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 117 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 118 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 119 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 120 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant4::
# 121 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 79 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 122 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 123 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 80 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 124 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 125 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 81 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 126 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife, MSGBOX_DEFAULT
# 127 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 82 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 128 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 129 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 83 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 130 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 131 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 84 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 132 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 133 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 85 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 134 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 135 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 136 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 137 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 138 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience1::
# 139 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 90 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 140 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa, MSGBOX_SIGN
# 141 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 142 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 143 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 144 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience2::
# 145 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 95 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 146 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 147 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 96 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 148 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 149 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 97 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 150 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves, MSGBOX_DEFAULT
# 151 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 98 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 152 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 153 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 99 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 154 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 155 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 100 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 156 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 157 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 101 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 158 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 159 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 160 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 161 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 162 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience3::
# 163 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 106 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 164 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 165 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 107 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 166 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 167 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 108 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 168 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers, MSGBOX_DEFAULT
# 169 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 109 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 170 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 171 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 110 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 172 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 173 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 111 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 174 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 175 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 112 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 176 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 177 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 178 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 179 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 180 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience4::
# 181 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 117 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 182 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 183 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 118 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 184 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 185 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 119 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 186 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_StillLoveSmartnessContests, MSGBOX_DEFAULT
# 187 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 120 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 188 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 189 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 121 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 190 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_4, Common_Movement_FaceOriginalDirection
# 191 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 122 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 192 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 193 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 123 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 194 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 195 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 196 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 197 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 198 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestMC::
# 199 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 128 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 200 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 201 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 129 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 202 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 203 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 130 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 204 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest, MSGBOX_DEFAULT
# 205 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 131 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 206 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 207 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 132 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 208 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_MC, Common_Movement_FaceOriginalDirection
# 209 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 133 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 210 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 211 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 134 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 212 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 213 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 214 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 215 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 216 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestJudge::
# 217 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 139 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 218 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 219 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 140 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 220 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 221 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 141 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 222 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty, MSGBOX_DEFAULT
# 223 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 142 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 224 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 225 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 143 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 226 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_JUDGE, Common_Movement_FaceOriginalDirection
# 227 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 144 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 228 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 229 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 145 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 230 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 231 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 232 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 233 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 234 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant1::
# 235 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 150 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 236 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 237 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 151 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 238 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 239 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 152 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 240 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty, MSGBOX_DEFAULT
# 241 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 153 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 242 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 243 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 154 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 244 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 245 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 155 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 246 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 247 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 156 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 248 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 249 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 250 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 251 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 252 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant2::
# 253 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 161 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 254 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 255 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 162 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 256 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 257 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 163 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 258 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_OverdidGrooming, MSGBOX_DEFAULT
# 259 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 164 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 260 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 261 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 165 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 262 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 263 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 166 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 264 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 265 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 167 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 266 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 267 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 268 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 269 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 270 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant3::
# 271 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 172 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 272 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 273 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 173 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 274 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 275 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 174 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 276 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam, MSGBOX_DEFAULT
# 277 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 175 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 278 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 279 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 176 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 280 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 281 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 177 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 282 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 283 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 178 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 284 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 285 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 286 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 287 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 288 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant4::
# 289 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 183 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 290 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 291 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 184 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 292 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 293 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 185 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 294 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe, MSGBOX_DEFAULT
# 295 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 186 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 296 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 297 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 187 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 298 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 299 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 188 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 300 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 301 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 189 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 302 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 303 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 304 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 305 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 306 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience1::
# 307 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 194 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 308 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 309 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 195 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 310 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 311 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 196 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 312 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy, MSGBOX_DEFAULT
# 313 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 197 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 314 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 315 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 198 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 316 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_1, Common_Movement_FaceOriginalDirection
# 317 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 199 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 318 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 319 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 200 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 320 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 321 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 322 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 323 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 324 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience2::
# 325 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 205 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 326 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 327 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 206 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 328 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 329 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 207 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 330 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon, MSGBOX_DEFAULT
# 331 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 208 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 332 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 333 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 209 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 334 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 335 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 210 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 336 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 337 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 211 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 338 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 339 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 340 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 341 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 342 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience3::
# 343 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 216 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 344 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 345 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 217 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 346 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 347 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 218 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 348 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone, MSGBOX_DEFAULT
# 349 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 219 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 350 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 351 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 220 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 352 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 353 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 221 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 354 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 355 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 222 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 356 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 357 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 358 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 359 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 360 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestMC::
# 361 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 227 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 362 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 363 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 228 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 364 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 365 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 229 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 366 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_InTheMiddleOfContest, MSGBOX_DEFAULT
# 367 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 230 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 368 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 369 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 231 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 370 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_MC, Common_Movement_FaceOriginalDirection
# 371 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 232 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 372 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 373 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 233 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 374 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 375 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 376 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 377 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 378 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestJudge::
# 379 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 238 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 380 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 381 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 239 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 382 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 383 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 240 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 384 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals, MSGBOX_DEFAULT
# 385 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 241 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 386 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 387 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 242 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 388 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_JUDGE, Common_Movement_FaceOriginalDirection
# 389 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 243 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 390 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 391 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 244 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 392 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 393 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 394 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 395 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 396 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant1::
# 397 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 249 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 398 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 399 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 250 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 400 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 401 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 251 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 402 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyAzurillWasDistracted, MSGBOX_DEFAULT
# 403 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 252 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 404 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 405 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 253 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 406 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 407 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 254 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 408 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 409 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 255 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 410 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 411 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 412 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 413 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 414 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant2::
# 415 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 260 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 416 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 417 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 261 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 418 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 419 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 262 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 420 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_NeverWonBattleButContest, MSGBOX_DEFAULT
# 421 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 263 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 422 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 423 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 264 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 424 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 425 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 265 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 426 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 427 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 266 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 428 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 429 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 430 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 431 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 432 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant3::
# 433 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 271 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 434 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 435 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 272 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 436 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 437 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 273 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 438 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PetalDanceIsMarvel, MSGBOX_DEFAULT
# 439 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 274 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 440 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 441 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 275 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 442 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 443 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 276 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 444 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 445 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 277 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 446 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 447 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 448 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 449 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 450 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant4::
# 451 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 282 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 452 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 453 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 283 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 454 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 455 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 284 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 456 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter, MSGBOX_DEFAULT
# 457 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 285 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 458 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 459 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 286 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 460 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 461 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 287 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 462 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 463 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 288 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 464 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 465 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 466 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 467 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 468 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience1::
# 469 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 293 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 470 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lockall
# 471 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 294 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 472 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FacePlayer
# 473 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 295 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 474 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 475 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 296 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 476 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyChildIsInContest, MSGBOX_DEFAULT
# 477 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 297 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 478 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 479 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 298 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 480 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FaceOriginalDirection
# 481 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 299 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 482 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 483 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 300 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 484 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	delay 25
# 485 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 301 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 486 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ComeOnDear, MSGBOX_DEFAULT
# 487 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 302 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 488 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	releaseall
# 489 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 490 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 491 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 492 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience2::
# 493 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 307 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 494 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 495 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 308 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 496 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 497 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 309 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 498 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn, MSGBOX_DEFAULT
# 499 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 310 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 500 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 501 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 311 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 502 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 503 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 312 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 504 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 505 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 313 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 506 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 507 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 508 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 509 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 510 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience3::
# 511 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 318 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 512 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 513 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 319 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 514 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 515 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 320 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 516 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest, MSGBOX_DEFAULT
# 517 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 321 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 518 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 519 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 322 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 520 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 521 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 323 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 522 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 523 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 324 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 524 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 525 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 526 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 527 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 528 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyStageSign::
# 529 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 329 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 530 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_BeautyContestStage, MSGBOX_SIGN
# 531 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 532 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 533 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 534 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteStageSign::
# 535 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 334 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 536 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CuteContestStage, MSGBOX_SIGN
# 537 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 538 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 539 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 540 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartStageSign::
# 541 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 339 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 542 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SmartContestStage, MSGBOX_SIGN
# 543 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 544 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 545 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 546 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_TodayWonSmartnessContest::
# 547 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 343 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 548 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This POKéMON won the BEAUTY CONTEST\n"
# 549 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "here before.\p"
# 550 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Well, guess what? Today, I made it\n"
# 551 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "win a SMARTNESS CONTEST!\p"
# 552 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My abilities scare even me…$"
# 553 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 554 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EnteredBunchOfContests::
# 555 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 351 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 556 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I've entered a bunch of CONTESTS,\n"
# 557 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "so I'm seeing how things work.\p"
# 558 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "If you're in a COOLNESS CONTEST,\n"
# 559 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "cool moves go over as appeals.\p"
# 560 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "But smart moves and cute moves\n"
# 561 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "don't go over well, for instance.$"
# 562 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 563 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks::
# 564 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 360 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 565 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "That young man who won earlier had\n"
# 566 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a whole bunch of different {POKEBLOCK}S.\p"
# 567 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Can you win if you had that many\n"
# 568 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "of those things?$"
# 569 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 570 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous::
# 571 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 367 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 572 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Whoa, isn't this place humongous!\p"
# 573 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "The tension in the air… It's not\n"
# 574 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "like a CONTEST hall in the sticks.$"
# 575 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 576 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal::
# 577 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 373 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 578 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Okay, SMART POKéMON and their\n"
# 579 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "TRAINERS, are you ready?!\p"
# 580 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Give it your best showing!\n"
# 581 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Let's appeal!$"
# 582 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 583 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest::
# 584 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 380 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 585 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUDGE: Are you enjoying this CONTEST?\p"
# 586 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Come back with three friends, and\n"
# 587 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "all of you may enter a CONTEST!$"
# 588 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 589 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EnteredWrongContest::
# 590 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 386 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 591 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ayayayay…\n"
# 592 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I entered the wrong CONTEST.\p"
# 593 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I entered this tough POKéMON in\n"
# 594 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the SMARTNESS CONTEST…\p"
# 595 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Come on, wow them with a smart-looking\n"
# 596 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "ROCK SMASH.$"
# 597 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 598 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_RaisedMonToBeSmart::
# 599 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 395 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 600 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I've spent many a year, and all my\n"
# 601 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "wisdom besides, raising this POKéMON\l"
# 602 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "to be smart.\p"
# 603 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "It won't be easily bested by some\n"
# 604 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "young pup's POKéMON.\p"
# 605 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My dear wife, are you seeing this?$"
# 606 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 607 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext::
# 608 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 404 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 609 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "There it is!\p"
# 610 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "If my POKéMON pulls a smart move next,\n"
# 611 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the audience's excitement will peak!$"
# 612 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 613 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife::
# 614 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 410 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 615 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, dear, no!\p"
# 616 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My darling ZUBAT's LEECH LIFE is so\n"
# 617 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "cute I kept using it over and over!\p"
# 618 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "But these mean people don't appreciate\n"
# 619 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "it at all!$"
# 620 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 621 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa::
# 622 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 418 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 623 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Kiyaaah! You're beautiful, Grandpa!$"
# 624 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 625 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves::
# 626 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 422 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 627 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Even when TRAINERS enter the same\n"
# 628 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "kind of POKéMON, they all seem to use\l"
# 629 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "different moves for appeals.\p"
# 630 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "It's just like the way people have\n"
# 631 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "different styles for battling.$"
# 632 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 633 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers::
# 634 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 430 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 635 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I think the POKéMON look smarter\n"
# 636 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "than their TRAINERS. By a lot.$"
# 637 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 638 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_StillLoveSmartnessContests::
# 639 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 435 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 640 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "When all's said and done, I still love\n"
# 641 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "SMARTNESS CONTESTS.\p"
# 642 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "That intellectual green color…\n"
# 643 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "It's so… So… Cool.$"
# 644 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 645 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest::
# 646 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 442 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 647 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Are you entering the BEAUTY\n"
# 648 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "CONTEST, too? Good luck!$"
# 649 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 650 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty::
# 651 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 447 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 652 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUDGE: Ah, every POKéMON here is\n"
# 653 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a model of pristine beauty!\p"
# 654 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Why, I almost forgot to score them!$"
# 655 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 656 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty::
# 657 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 453 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 658 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "A POKéMON this beautiful…\n"
# 659 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "There isn't another one like it.\p"
# 660 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Everyone's eyes will be glued to\n"
# 661 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "my beauty.$"
# 662 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 663 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_OverdidGrooming::
# 664 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 460 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 665 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Waaaah!\p"
# 666 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I brushed and groomed my POKéMON\n"
# 667 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "carefully for this CONTEST…\p"
# 668 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "But I overdid it…\n"
# 669 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My POKéMON's coat turned all scraggly…\p"
# 670 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "What should I do?$"
# 671 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 672 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam::
# 673 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 469 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 674 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This AURORA BEAM is so dazzling,\n"
# 675 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the JUDGE won't be able to see it.\p"
# 676 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Uh, wait a second…\n"
# 677 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "That'll be meaningless, then!$"
# 678 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 679 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe::
# 680 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 476 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 681 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This pretty POKéMON looks just like\n"
# 682 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "me when I was younger.\p"
# 683 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Right when I said that, my husband\n"
# 684 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "spewed the coffee he was drinking.\p"
# 685 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Did I say something funny?$"
# 686 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 687 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy::
# 688 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 484 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 689 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "You know, if I win at a BEAUTY\n"
# 690 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "CONTEST, sure it makes me\l"
# 691 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "happy. More than usual, anyway.$"
# 692 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 693 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon::
# 694 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 490 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 695 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wahahahah!\p"
# 696 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Will you take a gander at all those\n"
# 697 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "pretty POKéMON!\l"
# 698 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I just love this sort of glitz!$"
# 699 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 700 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone::
# 701 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 497 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 702 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "You can't always win on just beauty\n"
# 703 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "alone.\p"
# 704 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "You have to groom your POKéMON so\n"
# 705 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "it's nice and glossy like mine.$"
# 706 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 707 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_InTheMiddleOfContest::
# 708 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 504 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 709 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Uh-oh! Hello!\n"
# 710 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "We're in the middle of a CONTEST!\p"
# 711 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Please enter at our registration\n"
# 712 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "counter and come out, okay?$"
# 713 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 714 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals::
# 715 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 511 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 716 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUDGE: Oh, such charming and cute\n"
# 717 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "appeals!\p"
# 718 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, my goodness! What a perfectly\n"
# 719 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "adorable WATER SPORT appeal!$"
# 720 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 721 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyAzurillWasDistracted::
# 722 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 518 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 723 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, no… My sweet AZURILL was\n"
# 724 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "distracted by another POKéMON.$"
# 725 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 726 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_NeverWonBattleButContest::
# 727 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 523 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 728 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My POKéMON has never won in a battle,\n"
# 729 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "but put it in a CONTEST and look out!$"
# 730 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 731 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PetalDanceIsMarvel::
# 732 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 528 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 733 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My POKéMON's PETAL DANCE is a marvel\n"
# 734 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "of elegance.\p"
# 735 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I won't let anyone disturb its\n"
# 736 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "performance.$"
# 737 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 738 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter::
# 739 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 535 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 740 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Everyone's POKéMON are very cute.\p"
# 741 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "However, if my POKéMON were to make\n"
# 742 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a cute appeal…\p"
# 743 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I'm sure that it would be so much \n"
# 744 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "cuter than the others.$"
# 745 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 746 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyChildIsInContest::
# 747 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 543 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 748 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My child is in this CONTEST.$"
# 749 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 750 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ComeOnDear::
# 751 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 547 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 752 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Come on, dear. Go for it!\n"
# 753 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Your POKéMON is the best!$"
# 754 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 755 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest::
# 756 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 552 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 757 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I think that girl over there is\n"
# 758 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the cutest of the lot.\p"
# 759 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "What's that? They're judging\n"
# 760 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "POKéMON by their looks?$"
# 761 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 762 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn::
# 763 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 559 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 764 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ohh, seeing all these cute POKéMON,\n"
# 765 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "they make we want to get my own!\p"
# 766 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I'm going to go catch some!$"
# 767 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 768 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_BeautyContestStage::
# 769 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 565 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 770 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BEAUTY CONTEST STAGE\n"
# 771 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BE ALLURED BY BEAUTIFUL POKéMON!$"
# 772 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 773 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_CuteContestStage::
# 774 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 570 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 775 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "CUTENESS CONTEST STAGE\n"
# 776 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BE CHARMED BY CUTE POKéMON!$"
# 777 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 778 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_SmartContestStage::
# 779 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 575 "data/maps/LilycoveCity_ContestHall/scripts.pory"
# 780 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "SMARTNESS CONTEST STAGE\n"
# 781 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BE IMPRESSED BY SMART POKéMON!$"
