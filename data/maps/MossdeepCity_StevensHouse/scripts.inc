# 1 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_MapScripts::
# 3 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 2 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 4 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_StevensHouse_OnLoad
# 5 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 3 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 6 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_StevensHouse_OnTransition
# 7 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 4 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 8 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.byte 0
# 10 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 11 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 5 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 13 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script_2 VAR_STEVENS_HOUSE_STATE, 1, MossdeepCity_StevensHouse_EventScript_StevenGivesDive
# 14 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.2byte 0
# 15 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 16 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 17 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnLoad::
# 18 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 10 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 19 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_StevensHouse_OnLoad_2
# 20 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnLoad_1:
# 21 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 23 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnLoad_2:
# 24 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 11 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 25 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_HideStevensNote
# 26 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_OnLoad_1
# 27 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 28 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_HideStevensNote::
# 30 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 17 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 31 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setmetatile 6, 4, METATILE_GenericBuilding_TableEdge, TRUE
# 32 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 33 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 34 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 35 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnTransition::
# 36 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 22 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 37 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_STEVENS_HOUSE_STATE, 2
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq MossdeepCity_StevensHouse_OnTransition_2
# 39 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnTransition_1:
# 40 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 41 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 42 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnTransition_2:
# 43 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 23 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 44 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_SetStevenPos
# 45 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_OnTransition_1
# 46 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 47 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 48 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SetStevenPos::
# 49 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 50 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectxyperm LOCALID_STEVENS_HOUSE_STEVEN, 6, 5
# 51 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 30 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 52 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectmovementtype LOCALID_STEVENS_HOUSE_STEVEN, MOVEMENT_TYPE_FACE_UP
# 53 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 54 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 55 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 56 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_StevenGivesDive::
# 57 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 35 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 58 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 59 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 36 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 60 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 37 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 62 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 63 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 64 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playse SE_PIN
# 65 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 39 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 66 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_ExclamationMark
# 67 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 40 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 68 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 69 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 41 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 70 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_Delay48
# 71 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 42 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 72 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 73 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 43 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 74 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, MossdeepCity_StevensHouse_Movement_StevenApproachPlayer
# 75 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 44 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 76 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 77 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 45 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 78 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_YouveEarnedHMDive, MSGBOX_DEFAULT
# 79 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 46 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 80 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	giveitem ITEM_HM_DIVE
# 81 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 47 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 82 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 83 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 48 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 84 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 85 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 49 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 86 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_ExplainDive, MSGBOX_DEFAULT
# 87 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 50 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 88 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	closemessage
# 89 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 51 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 90 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	delay 20
# 91 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 52 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 92 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, MossdeepCity_StevensHouse_Movement_StevenReturn
# 93 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 53 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 94 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 95 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 54 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 96 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 97 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 55 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 98 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
# 99 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 56 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 100 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 101 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 57 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 102 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 103 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 104 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 105 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 106 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 61 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 107 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenApproachPlayer:
# 108 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 62 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 109 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 110 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 63 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 111 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 112 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 64 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 113 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 114 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 65 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 115 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 116 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 66 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 117 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 118 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 67 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 119 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 120 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 68 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 121 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_down
# 122 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 69 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 123 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 124 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 125 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 72 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 126 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenReturn:
# 127 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 73 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 128 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_up
# 129 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 74 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 130 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 131 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 75 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 132 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 133 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 76 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 134 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 135 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 77 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 136 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_up
# 137 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 78 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 138 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 139 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 140 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumPokeball::
# 141 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 82 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 142 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 143 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 83 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 144 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum, MSGBOX_YESNO
# 145 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 84 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 146 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, NO
# 147 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq MossdeepCity_StevensHouse_EventScript_BeldumPokeball_2
# 148 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumPokeball_1:
# 149 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 87 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 150 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum
# 151 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 152 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 153 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumPokeball_2:
# 154 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 85 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 155 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_LeaveBeldum
# 156 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_BeldumPokeball_1
# 157 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 158 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 159 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_LeaveBeldum::
# 160 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 92 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 161 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
# 162 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 93 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 163 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 164 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 165 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 166 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 167 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveBeldum::
# 168 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 98 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 169 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BELDUM
# 170 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 99 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 171 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	givemon SPECIES_BELDUM, 5
# 172 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 100 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 173 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
# 174 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq MossdeepCity_StevensHouse_EventScript_GiveBeldum_2
# 175 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveBeldum_1:
# 176 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 103 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 177 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
# 178 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq MossdeepCity_StevensHouse_EventScript_GiveBeldum_5
# 179 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveBeldum_4:
# 180 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 106 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 181 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 182 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 183 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 184 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveBeldum_2:
# 185 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 101 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 186 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_SendBeldumParty
# 187 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum_1
# 188 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 189 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveBeldum_5:
# 190 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 104 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 191 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_SendBeldumPC
# 192 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum_4
# 193 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 194 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 195 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumParty::
# 196 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 111 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 197 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 198 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 112 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 199 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 200 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 113 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 201 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, NO
# 202 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq MossdeepCity_StevensHouse_EventScript_SendBeldumParty_2
# 203 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumParty_1:
# 204 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 116 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 205 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 206 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 117 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 207 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 208 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 118 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 209 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 210 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 211 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 212 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumParty_2:
# 213 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 114 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 214 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 215 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_SendBeldumParty_1
# 216 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 217 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 218 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumPC::
# 219 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 123 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 220 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 221 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 124 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 222 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 223 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 125 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 224 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, NO
# 225 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq MossdeepCity_StevensHouse_EventScript_SendBeldumPC_2
# 226 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumPC_1:
# 227 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 128 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 228 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 229 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 129 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 230 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 231 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 232 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 233 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumPC_2:
# 234 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 126 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 235 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 236 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_SendBeldumPC_1
# 237 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 238 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 239 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC::
# 240 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 134 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 241 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 242 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 135 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 243 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 244 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 245 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 246 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 247 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare::
# 248 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 140 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 249 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BELDUM
# 250 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 141 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 251 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removeobject LOCALID_STEVENS_HOUSE_BALL
# 252 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 142 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 253 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 254 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 143 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 255 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	message MossdeepCity_StevensHouse_Text_ObtainedBeldum
# 256 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 144 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 257 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmessage
# 258 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 145 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 259 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitfanfare
# 260 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 146 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 261 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
# 262 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 263 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 264 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 265 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldum::
# 266 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 151 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 267 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
# 268 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 152 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 269 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 270 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 153 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 271 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 272 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 273 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 274 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 275 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_RockDisplay::
# 276 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 158 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 277 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_CollectionOfRareRocks, MSGBOX_SIGN
# 278 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 279 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 280 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 281 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Steven::
# 282 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 163 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 283 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis, MSGBOX_NPC
# 284 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 285 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 286 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 287 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Letter::
# 288 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 168 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 289 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 290 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 169 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 291 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LetterFromSteven, MSGBOX_DEFAULT
# 292 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 170 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 293 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 294 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 295 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 296 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 297 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_DiveItemBall::
# 298 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 175 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 299 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	finditem ITEM_HM_DIVE
# 300 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 176 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 301 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 302 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 303 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 304 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 305 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_YouveEarnedHMDive::
# 306 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 180 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 307 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
# 308 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "As you can see, there's not much here,\n"
# 309 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "but this is my home.\p"
# 310 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Thank you for all that you've done.\p"
# 311 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "This is my token of appreciation.\n"
# 312 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's the HIDDEN MACHINE DIVE.\p"
# 313 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "No need to be shy--you've earned\n"
# 314 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "this HM.$"
# 315 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 316 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ExplainDive::
# 317 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 191 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 318 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: While you're using SURF, you\n"
# 319 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "should notice dark patches of water.\p"
# 320 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Use DIVE if you come to deep water\n"
# 321 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "like it. You'll drop to the seafloor.\p"
# 322 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "When you want to come back up, use\n"
# 323 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "DIVE again.\p"
# 324 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "In some places, it won't be possible\n"
# 325 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "for you to surface, though.$"
# 326 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 327 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis::
# 328 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 202 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 329 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: Apparently, there's an\n"
# 330 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "underwater cavern between\l"
# 331 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "MOSSDEEP and SOOTOPOLIS.\p"
# 332 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "You know, the one that CAPT. STERN\n"
# 333 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "found in his submarine.$"
# 334 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 335 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum::
# 336 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 210 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 337 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p"
# 338 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It contained the POKéMON\n"
# 339 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "BELDUM.\p"
# 340 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Take the POKé BALL?$"
# 341 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 342 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ObtainedBeldum::
# 343 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 217 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 344 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} obtained a BELDUM.$"
# 345 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 346 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon::
# 347 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 221 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 348 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "There is no space for another POKéMON.$"
# 349 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 350 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas::
# 351 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 225 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 352 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} left the POKé BALL where\n"
# 353 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "it was.$"
# 354 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 355 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LetterFromSteven::
# 356 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 230 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 357 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a letter.\p"
# 358 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "… … … … … …\p"
# 359 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "To {PLAYER}{KUN}…\p"
# 360 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I've decided to do a little soul-\n"
# 361 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "searching and train on the road.\p"
# 362 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I don't plan to return home for some\n"
# 363 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "time.\p"
# 364 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I have a favor to ask of you.\p"
# 365 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I want you to take the POKé BALL on\n"
# 366 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "the desk.\p"
# 367 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Inside it is a BELDUM, my favorite\n"
# 368 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "POKéMON.\p"
# 369 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I'm counting on you.\p"
# 370 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "May our paths cross someday.\p"
# 371 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN STONE$"
# 372 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 373 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_CollectionOfRareRocks::
# 374 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 248 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
# 375 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 376 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "stones assembled by STEVEN.$"
