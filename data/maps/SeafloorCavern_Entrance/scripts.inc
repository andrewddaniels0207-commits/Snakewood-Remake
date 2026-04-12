# 1 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 2 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_MapScripts::
# 3 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 2 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 4 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafloorCavern_Entrance_OnResume
# 5 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.byte 0
# 6 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 7 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 8 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_OnResume::
# 9 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 6 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 10 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 11 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 7 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 12 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 13 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 14 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 15 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 16 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt::
# 17 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 12 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 18 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	lockall
# 19 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 13 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 20 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	compare VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
# 21 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq SeafloorCavern_Entrance_EventScript_Grunt_2
# 22 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt_1:
# 23 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 16 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 24 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitse
# 25 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 17 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 26 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	playse SE_PIN
# 27 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 18 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 28 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_ExclamationMark
# 29 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 19 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 30 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 31 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 20 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 32 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_Delay48
# 33 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 21 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 34 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 35 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 22 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 36 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 20
# 37 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 23 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 38 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 39 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq SeafloorCavern_Entrance_EventScript_Grunt_5
# 40 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt_4:
# 41 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 26 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 42 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 43 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq SeafloorCavern_Entrance_EventScript_Grunt_8
# 44 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt_7:
# 45 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 29 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 46 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 47 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq SeafloorCavern_Entrance_EventScript_Grunt_11
# 48 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt_10:
# 49 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 32 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 50 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 30
# 51 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 33 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 52 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
# 53 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 34 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 54 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	copyobjectxytoperm LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT
# 55 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 35 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 56 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep, MSGBOX_DEFAULT
# 57 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 36 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 58 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 59 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 37 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 60 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 38 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 62 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 63 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 39 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 64 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 65 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 66 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 67 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt_2:
# 68 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 14 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 69 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto SeafloorCavern_Entrance_EventScript_GruntSpeechShort
# 70 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto SeafloorCavern_Entrance_EventScript_Grunt_1
# 71 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 72 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt_5:
# 73 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 24 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 74 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 75 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto SeafloorCavern_Entrance_EventScript_Grunt_4
# 76 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 77 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt_8:
# 78 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 27 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 79 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 80 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto SeafloorCavern_Entrance_EventScript_Grunt_7
# 81 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 82 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt_11:
# 83 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 30 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 84 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 85 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto SeafloorCavern_Entrance_EventScript_Grunt_10
# 86 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 87 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 88 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort::
# 89 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 44 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 90 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 91 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq SeafloorCavern_Entrance_EventScript_GruntSpeechShort_2
# 92 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort_1:
# 93 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 47 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 94 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 95 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq SeafloorCavern_Entrance_EventScript_GruntSpeechShort_5
# 96 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort_4:
# 97 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 50 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 98 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 99 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq SeafloorCavern_Entrance_EventScript_GruntSpeechShort_8
# 100 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort_7:
# 101 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 53 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 102 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort, MSGBOX_DEFAULT
# 103 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 54 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 104 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 105 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 55 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 106 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 107 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 56 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 108 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 109 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 57 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 110 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 111 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 112 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 113 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort_2:
# 114 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 45 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 115 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 116 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto SeafloorCavern_Entrance_EventScript_GruntSpeechShort_1
# 117 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 118 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort_5:
# 119 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 48 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 120 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 121 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto SeafloorCavern_Entrance_EventScript_GruntSpeechShort_4
# 122 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 123 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort_8:
# 124 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 51 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 125 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 126 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto SeafloorCavern_Entrance_EventScript_GruntSpeechShort_7
# 127 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 128 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 129 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast::
# 130 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 62 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 131 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterLeft
# 132 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 63 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 133 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 134 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 135 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 136 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 137 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest::
# 138 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 68 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 139 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterRight
# 140 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 69 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 141 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 142 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 143 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 144 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 145 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth::
# 146 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 74 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 147 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 148 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 75 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 149 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 150 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 151 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 152 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 153 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep::
# 154 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 79 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 155 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Hey!\n"
# 156 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I remember your face!\p"
# 157 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "If you're here, it must mean that\n"
# 158 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you're about to mess with us again!\p"
# 159 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "A punk like you, do you really think\n"
# 160 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you can take on TEAM AQUA?\p"
# 161 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I'd say you're too early by about\n"
# 162 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "a trillion years!\p"
# 163 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "You're a perfect fit for the likes of\n"
# 164 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "TEAM MAGMA!\p"
# 165 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Speaking of TEAM MAGMA, I hear they\n"
# 166 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "were spotted near MOSSDEEP.\p"
# 167 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "That bunch of goons, they sure don't\n"
# 168 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "look good near the sea!$"
# 169 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 170 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort::
# 171 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 96 "data/maps/SeafloorCavern_Entrance/scripts.pory"
# 172 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "A punk like you, do you really think\n"
# 173 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you can take on TEAM AQUA?\p"
# 174 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I'd say you're too early by about\n"
# 175 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "a trillion years!\p"
# 176 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "You're a perfect fit for the likes of\n"
# 177 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "TEAM MAGMA!\p"
# 178 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Speaking of TEAM MAGMA, I hear they\n"
# 179 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "were spotted near MOSSDEEP.\p"
# 180 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "That bunch of goons, they sure don't\n"
# 181 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "look good near the sea!$"
