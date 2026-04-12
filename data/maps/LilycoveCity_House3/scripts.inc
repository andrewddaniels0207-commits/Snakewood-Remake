# 1 "data/maps/LilycoveCity_House3/scripts.pory"

# 2 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_MapScripts::
# 3 "data/maps/LilycoveCity_House3/scripts.pory"
# 2 "data/maps/LilycoveCity_House3/scripts.pory"
# 4 "data/maps/LilycoveCity_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_House3_OnTransition
# 5 "data/maps/LilycoveCity_House3/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_House3/scripts.pory"

# 7 "data/maps/LilycoveCity_House3/scripts.pory"

# 8 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_OnTransition::
# 9 "data/maps/LilycoveCity_House3/scripts.pory"
# 6 "data/maps/LilycoveCity_House3/scripts.pory"
# 10 "data/maps/LilycoveCity_House3/scripts.pory"
	random 4
# 11 "data/maps/LilycoveCity_House3/scripts.pory"
# 7 "data/maps/LilycoveCity_House3/scripts.pory"
# 12 "data/maps/LilycoveCity_House3/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 13 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_House3/scripts.pory"

# 15 "data/maps/LilycoveCity_House3/scripts.pory"

# 16 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_PokefanF::
# 17 "data/maps/LilycoveCity_House3/scripts.pory"
# 12 "data/maps/LilycoveCity_House3/scripts.pory"
# 18 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 19 "data/maps/LilycoveCity_House3/scripts.pory"
# 13 "data/maps/LilycoveCity_House3/scripts.pory"
# 20 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 21 "data/maps/LilycoveCity_House3/scripts.pory"
# 14 "data/maps/LilycoveCity_House3/scripts.pory"
# 22 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks, MSGBOX_YESNO
# 23 "data/maps/LilycoveCity_House3/scripts.pory"
# 15 "data/maps/LilycoveCity_House3/scripts.pory"
# 24 "data/maps/LilycoveCity_House3/scripts.pory"
	compare VAR_RESULT, NO
# 25 "data/maps/LilycoveCity_House3/scripts.pory"
	goto_if_eq LilycoveCity_House3_EventScript_PokefanF_2
# 26 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_PokefanF_1:
# 27 "data/maps/LilycoveCity_House3/scripts.pory"
# 18 "data/maps/LilycoveCity_House3/scripts.pory"
# 28 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_ExplainPokeblocks, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity_House3/scripts.pory"
# 19 "data/maps/LilycoveCity_House3/scripts.pory"
# 30 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 31 "data/maps/LilycoveCity_House3/scripts.pory"
# 20 "data/maps/LilycoveCity_House3/scripts.pory"
# 32 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 33 "data/maps/LilycoveCity_House3/scripts.pory"
# 21 "data/maps/LilycoveCity_House3/scripts.pory"
# 34 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 35 "data/maps/LilycoveCity_House3/scripts.pory"
# 22 "data/maps/LilycoveCity_House3/scripts.pory"
# 36 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 37 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 38 "data/maps/LilycoveCity_House3/scripts.pory"

# 39 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_PokefanF_2:
# 40 "data/maps/LilycoveCity_House3/scripts.pory"
# 16 "data/maps/LilycoveCity_House3/scripts.pory"
# 41 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_DeclinePokeblockLearn
# 42 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_PokefanF_1
# 43 "data/maps/LilycoveCity_House3/scripts.pory"

# 44 "data/maps/LilycoveCity_House3/scripts.pory"

# 45 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_DeclinePokeblockLearn::
# 46 "data/maps/LilycoveCity_House3/scripts.pory"
# 27 "data/maps/LilycoveCity_House3/scripts.pory"
# 47 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_OhAreYouSure, MSGBOX_DEFAULT
# 48 "data/maps/LilycoveCity_House3/scripts.pory"
# 28 "data/maps/LilycoveCity_House3/scripts.pory"
# 49 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 50 "data/maps/LilycoveCity_House3/scripts.pory"
# 29 "data/maps/LilycoveCity_House3/scripts.pory"
# 51 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 52 "data/maps/LilycoveCity_House3/scripts.pory"
# 30 "data/maps/LilycoveCity_House3/scripts.pory"
# 53 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 54 "data/maps/LilycoveCity_House3/scripts.pory"
# 31 "data/maps/LilycoveCity_House3/scripts.pory"
# 55 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 56 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 57 "data/maps/LilycoveCity_House3/scripts.pory"

# 58 "data/maps/LilycoveCity_House3/scripts.pory"

# 59 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_Man::
# 60 "data/maps/LilycoveCity_House3/scripts.pory"
# 36 "data/maps/LilycoveCity_House3/scripts.pory"
# 61 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 62 "data/maps/LilycoveCity_House3/scripts.pory"
# 37 "data/maps/LilycoveCity_House3/scripts.pory"
# 63 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 64 "data/maps/LilycoveCity_House3/scripts.pory"
# 38 "data/maps/LilycoveCity_House3/scripts.pory"
# 65 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_HappyToHaveQuadruplets, MSGBOX_DEFAULT
# 66 "data/maps/LilycoveCity_House3/scripts.pory"
# 39 "data/maps/LilycoveCity_House3/scripts.pory"
# 67 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 68 "data/maps/LilycoveCity_House3/scripts.pory"
# 40 "data/maps/LilycoveCity_House3/scripts.pory"
# 69 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 70 "data/maps/LilycoveCity_House3/scripts.pory"
# 41 "data/maps/LilycoveCity_House3/scripts.pory"
# 71 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 72 "data/maps/LilycoveCity_House3/scripts.pory"
# 42 "data/maps/LilycoveCity_House3/scripts.pory"
# 73 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 74 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 75 "data/maps/LilycoveCity_House3/scripts.pory"

# 76 "data/maps/LilycoveCity_House3/scripts.pory"

# 77 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid1::
# 78 "data/maps/LilycoveCity_House3/scripts.pory"
# 47 "data/maps/LilycoveCity_House3/scripts.pory"
# 79 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 80 "data/maps/LilycoveCity_House3/scripts.pory"
# 48 "data/maps/LilycoveCity_House3/scripts.pory"
# 81 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 82 "data/maps/LilycoveCity_House3/scripts.pory"
# 49 "data/maps/LilycoveCity_House3/scripts.pory"
# 83 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 84 "data/maps/LilycoveCity_House3/scripts.pory"
# 50 "data/maps/LilycoveCity_House3/scripts.pory"
# 85 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_GameBoyKid1_3
# 86 "data/maps/LilycoveCity_House3/scripts.pory"
# 52 "data/maps/LilycoveCity_House3/scripts.pory"
# 87 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_GameBoyKid1_4
# 88 "data/maps/LilycoveCity_House3/scripts.pory"
# 54 "data/maps/LilycoveCity_House3/scripts.pory"
# 89 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_GameBoyKid1_5
# 90 "data/maps/LilycoveCity_House3/scripts.pory"
# 56 "data/maps/LilycoveCity_House3/scripts.pory"
# 91 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_GameBoyKid1_6
# 92 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid1_1:
# 93 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 94 "data/maps/LilycoveCity_House3/scripts.pory"

# 95 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid1_3:
# 96 "data/maps/LilycoveCity_House3/scripts.pory"
# 51 "data/maps/LilycoveCity_House3/scripts.pory"
# 97 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 98 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid1_1
# 99 "data/maps/LilycoveCity_House3/scripts.pory"

# 100 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid1_4:
# 101 "data/maps/LilycoveCity_House3/scripts.pory"
# 53 "data/maps/LilycoveCity_House3/scripts.pory"
# 102 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereMixingRecords
# 103 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid1_1
# 104 "data/maps/LilycoveCity_House3/scripts.pory"

# 105 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid1_5:
# 106 "data/maps/LilycoveCity_House3/scripts.pory"
# 55 "data/maps/LilycoveCity_House3/scripts.pory"
# 107 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereBlendingBerries
# 108 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid1_1
# 109 "data/maps/LilycoveCity_House3/scripts.pory"

# 110 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid1_6:
# 111 "data/maps/LilycoveCity_House3/scripts.pory"
# 57 "data/maps/LilycoveCity_House3/scripts.pory"
# 112 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingContest
# 113 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid1_1
# 114 "data/maps/LilycoveCity_House3/scripts.pory"

# 115 "data/maps/LilycoveCity_House3/scripts.pory"

# 116 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid2::
# 117 "data/maps/LilycoveCity_House3/scripts.pory"
# 63 "data/maps/LilycoveCity_House3/scripts.pory"
# 118 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 119 "data/maps/LilycoveCity_House3/scripts.pory"
# 64 "data/maps/LilycoveCity_House3/scripts.pory"
# 120 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 121 "data/maps/LilycoveCity_House3/scripts.pory"
# 65 "data/maps/LilycoveCity_House3/scripts.pory"
# 122 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 123 "data/maps/LilycoveCity_House3/scripts.pory"
# 66 "data/maps/LilycoveCity_House3/scripts.pory"
# 124 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_GameBoyKid2_3
# 125 "data/maps/LilycoveCity_House3/scripts.pory"
# 68 "data/maps/LilycoveCity_House3/scripts.pory"
# 126 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_GameBoyKid2_4
# 127 "data/maps/LilycoveCity_House3/scripts.pory"
# 70 "data/maps/LilycoveCity_House3/scripts.pory"
# 128 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_GameBoyKid2_5
# 129 "data/maps/LilycoveCity_House3/scripts.pory"
# 72 "data/maps/LilycoveCity_House3/scripts.pory"
# 130 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_GameBoyKid2_6
# 131 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid2_1:
# 132 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 133 "data/maps/LilycoveCity_House3/scripts.pory"

# 134 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid2_3:
# 135 "data/maps/LilycoveCity_House3/scripts.pory"
# 67 "data/maps/LilycoveCity_House3/scripts.pory"
# 136 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 137 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid2_1
# 138 "data/maps/LilycoveCity_House3/scripts.pory"

# 139 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid2_4:
# 140 "data/maps/LilycoveCity_House3/scripts.pory"
# 69 "data/maps/LilycoveCity_House3/scripts.pory"
# 141 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereMixingRecords
# 142 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid2_1
# 143 "data/maps/LilycoveCity_House3/scripts.pory"

# 144 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid2_5:
# 145 "data/maps/LilycoveCity_House3/scripts.pory"
# 71 "data/maps/LilycoveCity_House3/scripts.pory"
# 146 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereBlendingBerries
# 147 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid2_1
# 148 "data/maps/LilycoveCity_House3/scripts.pory"

# 149 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid2_6:
# 150 "data/maps/LilycoveCity_House3/scripts.pory"
# 73 "data/maps/LilycoveCity_House3/scripts.pory"
# 151 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingContest
# 152 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid2_1
# 153 "data/maps/LilycoveCity_House3/scripts.pory"

# 154 "data/maps/LilycoveCity_House3/scripts.pory"

# 155 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid3::
# 156 "data/maps/LilycoveCity_House3/scripts.pory"
# 79 "data/maps/LilycoveCity_House3/scripts.pory"
# 157 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 158 "data/maps/LilycoveCity_House3/scripts.pory"
# 80 "data/maps/LilycoveCity_House3/scripts.pory"
# 159 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 160 "data/maps/LilycoveCity_House3/scripts.pory"
# 81 "data/maps/LilycoveCity_House3/scripts.pory"
# 161 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 162 "data/maps/LilycoveCity_House3/scripts.pory"
# 82 "data/maps/LilycoveCity_House3/scripts.pory"
# 163 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_GameBoyKid3_3
# 164 "data/maps/LilycoveCity_House3/scripts.pory"
# 84 "data/maps/LilycoveCity_House3/scripts.pory"
# 165 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_GameBoyKid3_4
# 166 "data/maps/LilycoveCity_House3/scripts.pory"
# 86 "data/maps/LilycoveCity_House3/scripts.pory"
# 167 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_GameBoyKid3_5
# 168 "data/maps/LilycoveCity_House3/scripts.pory"
# 88 "data/maps/LilycoveCity_House3/scripts.pory"
# 169 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_GameBoyKid3_6
# 170 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid3_1:
# 171 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 172 "data/maps/LilycoveCity_House3/scripts.pory"

# 173 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid3_3:
# 174 "data/maps/LilycoveCity_House3/scripts.pory"
# 83 "data/maps/LilycoveCity_House3/scripts.pory"
# 175 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 176 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid3_1
# 177 "data/maps/LilycoveCity_House3/scripts.pory"

# 178 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid3_4:
# 179 "data/maps/LilycoveCity_House3/scripts.pory"
# 85 "data/maps/LilycoveCity_House3/scripts.pory"
# 180 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereMixingRecords
# 181 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid3_1
# 182 "data/maps/LilycoveCity_House3/scripts.pory"

# 183 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid3_5:
# 184 "data/maps/LilycoveCity_House3/scripts.pory"
# 87 "data/maps/LilycoveCity_House3/scripts.pory"
# 185 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereBlendingBerries
# 186 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid3_1
# 187 "data/maps/LilycoveCity_House3/scripts.pory"

# 188 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid3_6:
# 189 "data/maps/LilycoveCity_House3/scripts.pory"
# 89 "data/maps/LilycoveCity_House3/scripts.pory"
# 190 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingContest
# 191 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid3_1
# 192 "data/maps/LilycoveCity_House3/scripts.pory"

# 193 "data/maps/LilycoveCity_House3/scripts.pory"

# 194 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid4::
# 195 "data/maps/LilycoveCity_House3/scripts.pory"
# 95 "data/maps/LilycoveCity_House3/scripts.pory"
# 196 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 197 "data/maps/LilycoveCity_House3/scripts.pory"
# 96 "data/maps/LilycoveCity_House3/scripts.pory"
# 198 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 199 "data/maps/LilycoveCity_House3/scripts.pory"
# 97 "data/maps/LilycoveCity_House3/scripts.pory"
# 200 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 201 "data/maps/LilycoveCity_House3/scripts.pory"
# 98 "data/maps/LilycoveCity_House3/scripts.pory"
# 202 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_GameBoyKid4_3
# 203 "data/maps/LilycoveCity_House3/scripts.pory"
# 100 "data/maps/LilycoveCity_House3/scripts.pory"
# 204 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_GameBoyKid4_4
# 205 "data/maps/LilycoveCity_House3/scripts.pory"
# 102 "data/maps/LilycoveCity_House3/scripts.pory"
# 206 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_GameBoyKid4_5
# 207 "data/maps/LilycoveCity_House3/scripts.pory"
# 104 "data/maps/LilycoveCity_House3/scripts.pory"
# 208 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_GameBoyKid4_6
# 209 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid4_1:
# 210 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 211 "data/maps/LilycoveCity_House3/scripts.pory"

# 212 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid4_3:
# 213 "data/maps/LilycoveCity_House3/scripts.pory"
# 99 "data/maps/LilycoveCity_House3/scripts.pory"
# 214 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 215 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid4_1
# 216 "data/maps/LilycoveCity_House3/scripts.pory"

# 217 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid4_4:
# 218 "data/maps/LilycoveCity_House3/scripts.pory"
# 101 "data/maps/LilycoveCity_House3/scripts.pory"
# 219 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereMixingRecords
# 220 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid4_1
# 221 "data/maps/LilycoveCity_House3/scripts.pory"

# 222 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid4_5:
# 223 "data/maps/LilycoveCity_House3/scripts.pory"
# 103 "data/maps/LilycoveCity_House3/scripts.pory"
# 224 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereBlendingBerries
# 225 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid4_1
# 226 "data/maps/LilycoveCity_House3/scripts.pory"

# 227 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid4_6:
# 228 "data/maps/LilycoveCity_House3/scripts.pory"
# 105 "data/maps/LilycoveCity_House3/scripts.pory"
# 229 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingContest
# 230 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKid4_1
# 231 "data/maps/LilycoveCity_House3/scripts.pory"

# 232 "data/maps/LilycoveCity_House3/scripts.pory"

# 233 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereDoingMultiBattle::
# 234 "data/maps/LilycoveCity_House3/scripts.pory"
# 111 "data/maps/LilycoveCity_House3/scripts.pory"
# 235 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToWinMultiBattles, MSGBOX_DEFAULT
# 236 "data/maps/LilycoveCity_House3/scripts.pory"
# 112 "data/maps/LilycoveCity_House3/scripts.pory"
# 237 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 238 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 239 "data/maps/LilycoveCity_House3/scripts.pory"

# 240 "data/maps/LilycoveCity_House3/scripts.pory"

# 241 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereMixingRecords::
# 242 "data/maps/LilycoveCity_House3/scripts.pory"
# 117 "data/maps/LilycoveCity_House3/scripts.pory"
# 243 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LikeMixingAtRecordCorner, MSGBOX_DEFAULT
# 244 "data/maps/LilycoveCity_House3/scripts.pory"
# 118 "data/maps/LilycoveCity_House3/scripts.pory"
# 245 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 246 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 247 "data/maps/LilycoveCity_House3/scripts.pory"

# 248 "data/maps/LilycoveCity_House3/scripts.pory"

# 249 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereBlendingBerries::
# 250 "data/maps/LilycoveCity_House3/scripts.pory"
# 123 "data/maps/LilycoveCity_House3/scripts.pory"
# 251 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender, MSGBOX_DEFAULT
# 252 "data/maps/LilycoveCity_House3/scripts.pory"
# 124 "data/maps/LilycoveCity_House3/scripts.pory"
# 253 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 254 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 255 "data/maps/LilycoveCity_House3/scripts.pory"

# 256 "data/maps/LilycoveCity_House3/scripts.pory"

# 257 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereDoingContest::
# 258 "data/maps/LilycoveCity_House3/scripts.pory"
# 129 "data/maps/LilycoveCity_House3/scripts.pory"
# 259 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToEnterContest, MSGBOX_DEFAULT
# 260 "data/maps/LilycoveCity_House3/scripts.pory"
# 130 "data/maps/LilycoveCity_House3/scripts.pory"
# 261 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 262 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 263 "data/maps/LilycoveCity_House3/scripts.pory"

# 264 "data/maps/LilycoveCity_House3/scripts.pory"

# 265 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks::
# 266 "data/maps/LilycoveCity_House3/scripts.pory"
# 134 "data/maps/LilycoveCity_House3/scripts.pory"
# 267 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh, my, my! Are you traveling alone?\n"
# 268 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "But you're so young! Good for you!\p"
# 269 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "I'm sure my kids could learn a thing\n"
# 270 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "or two from you!\p"
# 271 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Me? I'm a master of {POKEBLOCK}S.\p"
# 272 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "If I get serious just a little, why,\n"
# 273 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "I can concoct great {POKEBLOCK}S.\p"
# 274 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Would you like to learn from me,\n"
# 275 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "a master of {POKEBLOCK}S?$"
# 276 "data/maps/LilycoveCity_House3/scripts.pory"

# 277 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_OhAreYouSure::
# 278 "data/maps/LilycoveCity_House3/scripts.pory"
# 146 "data/maps/LilycoveCity_House3/scripts.pory"
# 279 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh? Are you sure?\p"
# 280 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "You shouldn't always try to do\n"
# 281 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "everything by yourself, dear!$"
# 282 "data/maps/LilycoveCity_House3/scripts.pory"

# 283 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_ExplainPokeblocks::
# 284 "data/maps/LilycoveCity_House3/scripts.pory"
# 152 "data/maps/LilycoveCity_House3/scripts.pory"
# 285 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh, good! You're a smart soul!\n"
# 286 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "This is a bit long, so listen up!\p"
# 287 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Are you ready?\p"
# 288 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "If you look at {POKEBLOCK}S, you should see\n"
# 289 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "that they are rated on how they feel.\p"
# 290 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "The lower the feel rating,\n"
# 291 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "the better it is. Don't forget this!\p"
# 292 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "A good {POKEBLOCK} has a low feel\n"
# 293 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "rating and a high level.\p"
# 294 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "A POKéMON can eat more good\n"
# 295 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "{POKEBLOCK}S than ordinary ones, too.\p"
# 296 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "And this is important.\p"
# 297 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "If you want to make smooth {POKEBLOCK}S,\n"
# 298 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "use different kinds of BERRIES.\p"
# 299 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Don't be stingy--the kinds of BERRIES\n"
# 300 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "affect the smoothness of {POKEBLOCK}S.\p"
# 301 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "And another thing.\p"
# 302 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "The more people blending BERRIES,\n"
# 303 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "the smoother the {POKEBLOCK}S.\p"
# 304 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "That's why you should talk to other\n"
# 305 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "people and make {POKEBLOCK}S together.\p"
# 306 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "That's about all you need to know to\n"
# 307 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "make good {POKEBLOCK}S.\p"
# 308 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "If everyone had POKéMON they love,\n"
# 309 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "smooth {POKEBLOCK}S, and a loving family,\l"
# 310 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "the world would be a happier place.\p"
# 311 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Don't give up, dear!$"
# 312 "data/maps/LilycoveCity_House3/scripts.pory"

# 313 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_HappyToHaveQuadruplets::
# 314 "data/maps/LilycoveCity_House3/scripts.pory"
# 182 "data/maps/LilycoveCity_House3/scripts.pory"
# 315 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "When my wife gave birth to quadruplets,\n"
# 316 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "you bet I was shocked.\p"
# 317 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "But, now, seeing them play together,\n"
# 318 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "it makes me happy.$"
# 319 "data/maps/LilycoveCity_House3/scripts.pory"

# 320 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_GoingToWinMultiBattles::
# 321 "data/maps/LilycoveCity_House3/scripts.pory"
# 189 "data/maps/LilycoveCity_House3/scripts.pory"
# 322 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We're having MULTI BATTLES, but I know\n"
# 323 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "I'm going to win.$"
# 324 "data/maps/LilycoveCity_House3/scripts.pory"

# 325 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_LikeMixingAtRecordCorner::
# 326 "data/maps/LilycoveCity_House3/scripts.pory"
# 194 "data/maps/LilycoveCity_House3/scripts.pory"
# 327 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We like mixing stuff at\n"
# 328 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "the RECORD CORNER.\p"
# 329 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "But what gets mixed up?$"
# 330 "data/maps/LilycoveCity_House3/scripts.pory"

# 331 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender::
# 332 "data/maps/LilycoveCity_House3/scripts.pory"
# 200 "data/maps/LilycoveCity_House3/scripts.pory"
# 333 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We're going to make super {POKEBLOCK}S\n"
# 334 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "with a BERRY BLENDER!$"
# 335 "data/maps/LilycoveCity_House3/scripts.pory"

# 336 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_GoingToEnterContest::
# 337 "data/maps/LilycoveCity_House3/scripts.pory"
# 205 "data/maps/LilycoveCity_House3/scripts.pory"
# 338 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "I want to brag about how tough my\n"
# 339 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "POKéMON is, so we're going to enter\l"
# 340 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "a CONTEST together.$"
