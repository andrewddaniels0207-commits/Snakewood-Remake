# 1 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 2 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_MapScripts::
# 3 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 5 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 4 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_HallOfFame_OnWarp
# 5 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 2 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 6 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_HallOfFame_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 9 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 3 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 11 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame
# 12 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0
# 13 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 14 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 8 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 16 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 17 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 9 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 18 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_OnWarp:
# 19 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 10 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 20 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth
# 21 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 11 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 22 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0
# 23 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth::
# 25 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 16 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 26 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 27 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 28 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 29 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 30 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame::
# 31 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 21 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 32 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	lockall
# 33 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 22 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 34 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 35 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 23 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 36 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 37 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 38 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 39 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 25 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 40 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 41 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 26 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 42 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 27 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 44 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 45 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 28 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 46 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 47 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 29 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 48 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 49 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 30 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 50 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 51 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 31 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 52 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 53 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 32 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 54 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 55 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 33 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 56 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 57 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 34 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 58 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 59 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 35 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 60 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 36 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 62 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 63 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 37 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 64 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
# 65 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 38 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 66 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 67 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 39 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 68 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 69 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 40 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 70 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 71 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 41 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 72 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 73 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 42 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 74 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 75 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 43 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 76 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 77 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 44 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 78 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 79 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 45 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 80 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 40
# 81 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 46 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 82 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 83 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 47 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 84 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 85 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 48 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 86 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	checkplayergender
# 87 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 49 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 88 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	compare VAR_RESULT, MALE
# 89 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_2
# 90 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_1:
# 91 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 52 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 92 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	compare VAR_RESULT, FEMALE
# 93 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_5
# 94 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_4:
# 95 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 96 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 97 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_2:
# 98 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 50 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 99 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
# 100 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_1
# 101 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 102 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_5:
# 103 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 53 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 104 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto EverGrandeCity_HallOfFame_EventScript_GameClearFemale
# 105 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_4
# 106 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 107 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 108 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_GameClearMale::
# 109 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 59 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 110 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 111 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 60 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 112 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 113 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 61 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 114 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 115 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 62 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 116 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitstate
# 117 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 63 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 118 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
# 119 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 120 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 121 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 122 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_GameClearFemale::
# 123 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 68 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 124 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 125 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 69 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 126 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 127 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 70 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 128 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 129 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 71 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 130 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitstate
# 131 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 72 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 132 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
# 133 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 134 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 135 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 136 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 76 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 137 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1:
# 138 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 77 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 139 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 140 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 78 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 141 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 142 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 79 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 143 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 144 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 80 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 145 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 146 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 81 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 147 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 148 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 82 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 149 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 150 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 83 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 151 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 152 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 153 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 86 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 154 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2:
# 155 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 87 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 156 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 157 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 88 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 158 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 159 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 89 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 160 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 161 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 90 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 162 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 163 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 91 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 164 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 165 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 92 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 166 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 167 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 168 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions::
# 169 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 95 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 170 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "WALLACE: This room…\p"
# 171 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "This is where we keep records of\n"
# 172 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "POKéMON that prevailed through\l"
# 173 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "harsh battles.\p"
# 174 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "It is here that the LEAGUE CHAMPIONS\n"
# 175 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "are honored.$"
# 176 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 177 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames::
# 178 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 104 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
# 179 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "WALLACE: Come on, let's record your\n"
# 180 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "name as a TRAINER who triumphed over\l"
# 181 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "the POKéMON LEAGUE, and the names of\l"
# 182 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "the partners who battled with you.$"
