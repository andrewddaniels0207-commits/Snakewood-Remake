# 1 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 2 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_MapScripts::
# 3 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 2 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 4 "data/maps/LilycoveCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_Harbor_OnTransition
# 5 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 7 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 8 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_OnTransition::
# 9 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 6 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 10 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setescapewarp MAP_LILYCOVE_CITY, 12, 33
# 11 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 13 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 14 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant::
# 15 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 11 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 16 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock
# 17 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 12 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 18 "data/maps/LilycoveCity_Harbor/scripts.pory"
	faceplayer
# 19 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 13 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 20 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, LilycoveCity_Harbor_EventScript_FerryAttendant_2
# 21 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_1:
# 22 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 16 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 23 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEonTicketState
# 24 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 17 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 25 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetAuroraTicketState
# 26 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 18 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 27 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetOldSeaMapState
# 28 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 19 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 29 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetMysticTicketState
# 30 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 20 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 31 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket
# 32 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 21 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 33 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetHasTicketsState
# 34 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 22 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 35 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_C, 2
# 36 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_5
# 37 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_4:
# 38 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 25 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 39 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_B, 1
# 40 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_8
# 41 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_7:
# 42 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 28 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 43 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_B, 2
# 44 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_11
# 45 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_10:
# 46 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 31 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 47 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_B, 4
# 48 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_14
# 49 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_13:
# 50 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 34 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 51 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_B, 8
# 52 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_17
# 53 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_16:
# 54 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 37 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 55 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_B, 0
# 56 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_ne LilycoveCity_Harbor_EventScript_FerryAttendant_20
# 57 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_19:
# 58 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 40 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 59 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets
# 60 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 61 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 62 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_2:
# 63 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 14 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 64 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryUnavailable
# 65 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_1
# 66 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 67 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_5:
# 68 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 23 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 69 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime
# 70 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_4
# 71 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 72 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_8:
# 73 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 26 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 74 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_EonTicketFirstTime
# 75 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_7
# 76 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 77 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_11:
# 78 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 29 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 79 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_AuroraTicketFirstTime
# 80 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_10
# 81 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 82 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_14:
# 83 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 32 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 84 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime
# 85 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_13
# 86 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 87 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_17:
# 88 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 35 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 89 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MysticTicketFirstTime
# 90 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_16
# 91 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 92 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant_20:
# 93 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 38 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 94 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime
# 95 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_19
# 96 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 97 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 98 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets::
# 99 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 45 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 100 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_A, 0
# 101 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets_2
# 102 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets_1:
# 103 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 48 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 104 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 105 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 49 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 106 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_FlashTicketWhereTo
# 107 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 50 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 108 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 109 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 51 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 110 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
# 111 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 112 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 113 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets_2:
# 114 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 46 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 115 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_NoEventTickets
# 116 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets_1
# 117 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 118 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 119 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect::
# 120 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 56 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 121 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 122 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 57 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 123 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special ScriptMenu_CreateLilycoveSSTidalMultichoice
# 124 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 58 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 125 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 126 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 59 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 127 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special GetLilycoveSSTidalSelection
# 128 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 60 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 129 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 130 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 61 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 0, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_3
# 132 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 63 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 133 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 1, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_4
# 134 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 65 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 135 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_5
# 136 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 67 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 137 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_6
# 138 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 69 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 139 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 4, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_7
# 140 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 71 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 141 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 5, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_8
# 142 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 73 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 143 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 6, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_9
# 144 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 75 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 145 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_10
# 146 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1:
# 147 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 148 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 149 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_3:
# 150 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 62 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSlateport
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1
# 153 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 154 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_4:
# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 64 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 156 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBattleFrontier
# 157 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1
# 158 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 159 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_5:
# 160 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 66 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 161 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSouthernIsland
# 162 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1
# 163 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 164 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_6:
# 165 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 68 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 166 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToNavelRock
# 167 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1
# 168 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 169 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_7:
# 170 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 70 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 171 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBirthIsland
# 172 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1
# 173 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 174 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_8:
# 175 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 72 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 176 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToFarawayIsland
# 177 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1
# 178 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 179 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_9:
# 180 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 74 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 181 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_ExitSailSelect
# 182 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1
# 183 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 184 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_10:
# 185 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 76 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 186 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_ExitSailSelect
# 187 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1
# 188 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 189 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 190 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSouthernIsland::
# 191 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 82 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 192 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 193 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 83 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 194 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 13, 22
# 195 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 84 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 196 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 197 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 85 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 198 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 199 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 200 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 201 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 202 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToNavelRock::
# 203 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 90 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 204 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 205 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 91 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 206 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 8, 4
# 207 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 92 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 208 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 209 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 93 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 210 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 211 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 212 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 213 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 214 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBirthIsland::
# 215 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 98 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 216 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 217 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 99 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 218 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 8, 4
# 219 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 100 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 220 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 221 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 101 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 222 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 223 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 224 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 225 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 226 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToFarawayIsland::
# 227 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 106 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 228 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 229 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 107 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 230 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 231 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 108 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 232 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 233 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 109 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 234 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 235 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 236 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 237 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 238 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSlateport::
# 239 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 114 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 240 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SlateportItIs, MSGBOX_YESNO
# 241 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 115 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 242 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 243 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GoToSlateport_2
# 244 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSlateport_1:
# 245 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 118 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 246 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE
# 247 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 119 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 248 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 249 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 120 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 250 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 251 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 121 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 252 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 253 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 122 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 254 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 255 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 256 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 257 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSlateport_2:
# 258 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 116 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 259 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 260 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSlateport_1
# 261 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 262 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 263 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBattleFrontier::
# 264 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 127 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 265 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 266 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 128 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 267 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 268 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GoToBattleFrontier_2
# 269 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBattleFrontier_1:
# 270 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 271 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 272 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 132 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 273 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 274 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 133 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 275 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 276 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 134 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 277 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 278 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 279 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 280 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBattleFrontier_2:
# 281 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 129 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 282 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 283 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBattleFrontier_1
# 284 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 285 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 286 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEonTicketState::
# 287 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 139 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 288 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 0
# 289 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 140 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 290 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, LilycoveCity_Harbor_EventScript_GetEonTicketState_2
# 291 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEonTicketState_1:
# 292 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 143 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 293 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_EON_TICKET
# 294 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 144 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 295 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 296 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetEonTicketState_5
# 297 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEonTicketState_4:
# 298 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 147 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 299 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 1
# 300 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 148 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 301 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_EON_TICKET, LilycoveCity_Harbor_EventScript_GetEonTicketState_8
# 302 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEonTicketState_7:
# 303 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 304 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 2
# 305 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 306 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 307 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEonTicketState_2:
# 308 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 141 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 309 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 310 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetEonTicketState_1
# 311 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 312 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEonTicketState_5:
# 313 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 145 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 314 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 315 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetEonTicketState_4
# 316 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 317 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEonTicketState_8:
# 318 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 149 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 319 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 320 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetEonTicketState_7
# 321 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 322 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 323 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetAuroraTicketState::
# 324 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 156 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 325 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 0
# 326 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 157 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 327 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, LilycoveCity_Harbor_EventScript_GetAuroraTicketState_2
# 328 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetAuroraTicketState_1:
# 329 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 160 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 330 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 331 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 161 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 332 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 333 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetAuroraTicketState_5
# 334 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetAuroraTicketState_4:
# 335 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 164 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 336 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 337 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 165 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 338 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_AURORA_TICKET, LilycoveCity_Harbor_EventScript_GetAuroraTicketState_8
# 339 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetAuroraTicketState_7:
# 340 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 168 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 341 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 2
# 342 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 343 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 344 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetAuroraTicketState_2:
# 345 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 158 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 346 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 347 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetAuroraTicketState_1
# 348 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 349 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetAuroraTicketState_5:
# 350 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 162 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 351 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 352 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetAuroraTicketState_4
# 353 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 354 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetAuroraTicketState_8:
# 355 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 166 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 356 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 357 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetAuroraTicketState_7
# 358 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 359 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 360 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetOldSeaMapState::
# 361 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 173 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 362 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 0
# 363 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 174 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 364 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_FARAWAY_ISLAND, LilycoveCity_Harbor_EventScript_GetOldSeaMapState_2
# 365 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetOldSeaMapState_1:
# 366 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 177 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 367 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP
# 368 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 178 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 369 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 370 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetOldSeaMapState_5
# 371 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetOldSeaMapState_4:
# 372 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 181 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 373 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 1
# 374 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 182 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 375 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_OLD_SEA_MAP, LilycoveCity_Harbor_EventScript_GetOldSeaMapState_8
# 376 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetOldSeaMapState_7:
# 377 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 185 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 378 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 2
# 379 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 380 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 381 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetOldSeaMapState_2:
# 382 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 175 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 383 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 384 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetOldSeaMapState_1
# 385 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 386 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetOldSeaMapState_5:
# 387 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 179 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 388 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 389 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetOldSeaMapState_4
# 390 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 391 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetOldSeaMapState_8:
# 392 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 183 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 393 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 394 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetOldSeaMapState_7
# 395 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 396 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 397 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetMysticTicketState::
# 398 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 190 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 399 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 0
# 400 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 191 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 401 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, LilycoveCity_Harbor_EventScript_GetMysticTicketState_2
# 402 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetMysticTicketState_1:
# 403 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 194 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 404 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 405 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 195 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 406 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 407 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetMysticTicketState_5
# 408 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetMysticTicketState_4:
# 409 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 198 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 410 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 1
# 411 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 199 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 412 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_MYSTIC_TICKET, LilycoveCity_Harbor_EventScript_GetMysticTicketState_8
# 413 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetMysticTicketState_7:
# 414 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 202 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 415 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 2
# 416 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 417 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 418 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetMysticTicketState_2:
# 419 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 192 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 420 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 421 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetMysticTicketState_1
# 422 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 423 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetMysticTicketState_5:
# 424 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 196 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 425 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 426 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetMysticTicketState_4
# 427 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 428 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetMysticTicketState_8:
# 429 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 200 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 430 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
# 431 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetMysticTicketState_7
# 432 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 433 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 434 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket::
# 435 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 207 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 436 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_B, 0
# 437 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 208 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 438 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_E, 2
# 439 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_2
# 440 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_1:
# 441 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 211 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 442 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_D, 2
# 443 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_5
# 444 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_4:
# 445 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 214 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 446 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_C, 2
# 447 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_8
# 448 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_7:
# 449 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 217 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 450 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_9, 2
# 451 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_11
# 452 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_10:
# 453 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 454 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 455 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_2:
# 456 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 209 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 457 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetFirstTimeShowingEonTicket
# 458 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_1
# 459 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 460 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_5:
# 461 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 212 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 462 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetFirstTimeShowingAuroraTicket
# 463 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_4
# 464 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 465 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_8:
# 466 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 215 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 467 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetFirstTimeShowingOldSeaMap
# 468 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_7
# 469 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 470 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_11:
# 471 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 218 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 472 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetFirstTimeShowingMysticTicket
# 473 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_10
# 474 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 475 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 476 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingEonTicket::
# 477 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 224 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 478 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 1
# 479 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 480 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 481 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 482 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingAuroraTicket::
# 483 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 229 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 484 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 2
# 485 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 486 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 487 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 488 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingOldSeaMap::
# 489 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 234 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 490 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 4
# 491 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 492 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 493 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 494 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingMysticTicket::
# 495 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 239 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 496 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 8
# 497 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 498 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 499 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 500 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState::
# 501 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 244 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 502 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_A, 0
# 503 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 245 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 504 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_E, 1
# 505 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_2
# 506 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState_1:
# 507 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 248 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 508 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_D, 1
# 509 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_5
# 510 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState_4:
# 511 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 251 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 512 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_C, 1
# 513 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_8
# 514 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState_7:
# 515 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 254 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 516 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_9, 1
# 517 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_11
# 518 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState_10:
# 519 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 520 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 521 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState_2:
# 522 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 246 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 523 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetHasEonTicket
# 524 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_1
# 525 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 526 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState_5:
# 527 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 249 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 528 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetHasAuroraTicket
# 529 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_4
# 530 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 531 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState_8:
# 532 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 252 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 533 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetHasOldSeaMap
# 534 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_7
# 535 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 536 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState_11:
# 537 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 255 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 538 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetHasMysticTicket
# 539 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_10
# 540 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 541 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 542 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasEonTicket::
# 543 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 261 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 544 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 1
# 545 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 546 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 547 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 548 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasAuroraTicket::
# 549 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 266 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 550 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 2
# 551 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 552 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 553 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 554 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasOldSeaMap::
# 555 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 271 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 556 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 4
# 557 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 558 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 559 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 560 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasMysticTicket::
# 561 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 276 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 562 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 8
# 563 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 564 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 565 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 566 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_EonTicketFirstTime::
# 567 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 281 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 568 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_EON_TICKET
# 569 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 282 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 570 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 571 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 283 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 572 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 573 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 284 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 574 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 575 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 285 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 576 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowEonTicket, MSGBOX_DEFAULT
# 577 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 286 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 578 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime
# 579 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 580 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 581 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 582 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime::
# 583 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 291 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 584 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 585 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 292 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 586 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 587 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 293 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 588 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 13, 22
# 589 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 294 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 590 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 591 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 295 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 592 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 593 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 594 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 595 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 596 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_AuroraTicketFirstTime::
# 597 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 300 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 598 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 599 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 301 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 600 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 601 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 302 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 602 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 603 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 303 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 604 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 605 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 304 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 606 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OddTicketGetOnBoard, MSGBOX_DEFAULT
# 607 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 305 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 608 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime
# 609 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 610 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 611 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 612 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime::
# 613 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 310 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 614 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 615 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 311 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 616 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 617 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 312 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 618 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 8, 4
# 619 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 313 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 620 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 621 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 314 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 622 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 623 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 624 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 625 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 626 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime::
# 627 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 319 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 628 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_OLD_SEA_MAP
# 629 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 320 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 630 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowOldSeaMap, MSGBOX_DEFAULT
# 631 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 321 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 632 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 633 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 322 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 634 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 635 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 323 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 636 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OldSeaMapTooFar, MSGBOX_DEFAULT
# 637 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 324 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 638 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 639 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 325 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 640 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 641 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 326 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 642 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 643 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 327 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 644 "data/maps/LilycoveCity_Harbor/scripts.pory"
	playse SE_PIN
# 645 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 328 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 646 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_ExclamationMark
# 647 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 329 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 648 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 649 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 330 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 650 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_Delay48
# 651 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 331 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 652 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 653 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 332 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 654 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 655 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_2
# 656 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_1:
# 657 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 335 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 658 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 659 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_5
# 660 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_4:
# 661 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 338 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 662 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_LILYCOVE_HARBOR_BRINEY
# 663 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 339 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 664 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 665 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_8
# 666 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_7:
# 667 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 342 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 668 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 669 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_11
# 670 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_10:
# 671 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 345 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 672 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyHoldOnASecond, MSGBOX_DEFAULT
# 673 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 346 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 674 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 675 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_14
# 676 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_13:
# 677 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 349 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 678 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 679 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_17
# 680 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_16:
# 681 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 352 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 682 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyLetsSail, MSGBOX_DEFAULT
# 683 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 353 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 684 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 685 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 354 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 686 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 687 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_20
# 688 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_19:
# 689 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 357 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 690 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 691 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_23
# 692 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_22:
# 693 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 360 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 694 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_LILYCOVE_HARBOR_SS_TIDAL
# 695 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 361 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 696 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 697 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 362 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 698 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 699 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 363 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 700 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 701 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 364 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 702 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 703 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 704 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 705 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_2:
# 706 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 333 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 707 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayNorth
# 708 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_1
# 709 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 710 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_5:
# 711 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 336 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 712 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayEast
# 713 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_4
# 714 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 715 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_8:
# 716 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 340 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 717 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BrineyFaceSailorNorth
# 718 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_7
# 719 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 720 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_11:
# 721 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 343 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 722 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BrineyFaceSailorEast
# 723 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_10
# 724 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 725 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_14:
# 726 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 347 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 727 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BrineyFacePlayerNorth
# 728 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_13
# 729 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 730 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_17:
# 731 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 350 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 732 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BrineyFacePlayerEast
# 733 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_16
# 734 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 735 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_20:
# 736 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 355 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 737 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorNorth
# 738 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_19
# 739 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 740 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_23:
# 741 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 358 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 742 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorEast
# 743 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_22
# 744 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 745 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 746 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToFarawayIslandFirstTime::
# 747 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 369 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 748 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 749 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 370 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 750 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 751 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 371 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 752 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 753 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 372 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 754 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 755 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 373 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 756 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 757 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 758 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 759 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 760 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MysticTicketFirstTime::
# 761 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 378 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 762 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 763 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 379 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 764 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 765 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 380 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 766 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 767 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 381 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 768 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 769 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 382 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 770 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OddTicketGetOnBoard, MSGBOX_DEFAULT
# 771 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 383 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 772 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime
# 773 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 774 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 775 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 776 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime::
# 777 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 388 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 778 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 779 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 389 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 780 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 781 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 390 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 782 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 8, 4
# 783 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 391 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 784 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 785 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 392 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 786 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 787 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 788 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 789 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 790 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime::
# 791 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 397 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 792 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 793 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 398 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 794 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 795 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 399 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 796 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 797 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 400 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 798 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message EventTicket_Text_OddTicketsWhereTo
# 799 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 401 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 800 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 801 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 402 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 802 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 1
# 803 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 403 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 804 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special ScriptMenu_CreateLilycoveSSTidalMultichoice
# 805 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 404 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 806 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 807 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 405 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 808 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special GetLilycoveSSTidalSelection
# 809 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 406 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 810 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 811 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 407 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 812 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_3
# 813 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 409 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 814 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_4
# 815 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 411 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 816 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 4, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_5
# 817 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 413 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 818 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 5, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_6
# 819 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 415 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 820 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 6, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_7
# 821 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 417 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 822 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_8
# 823 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1:
# 824 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 420 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 825 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 826 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 827 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 828 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_3:
# 829 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 408 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 830 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime
# 831 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1
# 832 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 833 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_4:
# 834 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 410 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 835 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime
# 836 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1
# 837 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 838 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_5:
# 839 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 412 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 840 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime
# 841 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1
# 842 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 843 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_6:
# 844 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 414 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 845 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToFarawayIslandFirstTime
# 846 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1
# 847 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 848 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_7:
# 849 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 416 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 850 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect
# 851 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1
# 852 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 853 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_8:
# 854 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 418 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 855 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect
# 856 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1
# 857 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 858 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 859 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect::
# 860 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 425 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 861 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 862 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 426 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 863 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 864 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 427 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 865 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 866 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 428 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 867 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 868 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 429 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 869 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 870 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 430 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 871 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 872 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 431 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 873 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 874 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 432 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 875 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_ATTENDANT, Common_Movement_WalkInPlaceFasterDown
# 876 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 433 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 877 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 878 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 434 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 879 "data/maps/LilycoveCity_Harbor/scripts.pory"
	showobjectat LOCALID_LILYCOVE_HARBOR_ATTENDANT, MAP_LILYCOVE_CITY_HARBOR
# 880 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 435 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 881 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 882 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 436 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 883 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 884 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 437 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 885 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 886 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 887 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 888 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 889 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEventTicketSailor::
# 890 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 442 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 891 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 892 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 443 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 893 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 894 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 444 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 895 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 896 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 445 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 897 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_LILYCOVE_CITY_HARBOR
# 898 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 446 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 899 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 60
# 900 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 447 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 901 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 902 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 448 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 903 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 904 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 449 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 905 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_FacePlayer
# 906 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 450 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 907 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 908 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 909 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 910 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 911 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithSailor::
# 912 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 455 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 913 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 914 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 456 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 915 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 916 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 457 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 917 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 918 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 458 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 919 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 920 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 459 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 921 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 922 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_2
# 923 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_1:
# 924 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 462 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 925 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 926 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_5
# 927 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_4:
# 928 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 465 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 929 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 930 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 466 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 931 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideplayer
# 932 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 467 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 933 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_LILYCOVE_HARBOR_SS_TIDAL
# 934 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 468 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 935 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 936 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 937 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 938 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_2:
# 939 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 460 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 940 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth
# 941 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_1
# 942 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 943 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_5:
# 944 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 463 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 945 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast
# 946 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_4
# 947 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 948 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 949 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryUnavailable::
# 950 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 473 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 951 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_FerryUnavailable, MSGBOX_DEFAULT
# 952 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 474 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 953 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 954 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 955 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 956 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 957 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoEventTickets::
# 958 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 479 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 959 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 960 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 480 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 961 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_FlashTicketWhereTo
# 962 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 481 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 963 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 964 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 482 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 965 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
# 966 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 967 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 968 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 969 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoTicket::
# 970 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 487 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 971 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_NoTicket, MSGBOX_DEFAULT
# 972 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 488 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 973 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 974 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 975 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 976 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 977 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSlateportUnused::
# 978 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 493 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 979 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SlateportItIs, MSGBOX_YESNO
# 980 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 494 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 981 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 982 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GoToSlateportUnused_2
# 983 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSlateportUnused_1:
# 984 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 497 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 985 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE
# 986 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 498 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 987 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 988 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 499 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 989 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 990 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 500 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 991 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 992 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 501 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 993 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 994 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 995 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 996 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSlateportUnused_2:
# 997 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 495 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 998 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 999 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSlateportUnused_1
# 1000 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1001 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1002 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused::
# 1003 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 506 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1004 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 1005 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 507 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1006 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 1007 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused_2
# 1008 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused_1:
# 1009 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 510 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1010 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 1011 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 511 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1012 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 1013 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 512 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1014 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 1015 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 513 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1016 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 1017 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 1018 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1019 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused_2:
# 1020 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 508 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1021 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 1022 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused_1
# 1023 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1024 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1025 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind::
# 1026 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 518 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1027 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo
# 1028 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 519 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1029 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 1030 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 520 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1031 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
# 1032 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 1033 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1034 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1035 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerry::
# 1036 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 525 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1037 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_PleaseBoard, MSGBOX_DEFAULT
# 1038 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 526 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1039 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 1040 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 527 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1041 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 1042 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 528 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1043 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 1044 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 529 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1045 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 1046 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 530 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1047 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_LILYCOVE_CITY_HARBOR
# 1048 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 531 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1049 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 1050 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_BoardFerry_2
# 1051 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerry_1:
# 1052 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 534 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1053 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 1054 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_BoardFerry_5
# 1055 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerry_4:
# 1056 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 537 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1057 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 1058 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 538 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1059 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideplayer
# 1060 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 539 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1061 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_LILYCOVE_HARBOR_SS_TIDAL
# 1062 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 540 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1063 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 1064 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1065 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1066 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerry_2:
# 1067 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 532 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1068 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth
# 1069 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_BoardFerry_1
# 1070 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1071 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerry_5:
# 1072 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 535 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1073 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast
# 1074 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_BoardFerry_4
# 1075 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1076 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1077 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast::
# 1078 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 545 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1079 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardFerryEast
# 1080 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 546 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1081 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 1082 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1083 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1084 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1085 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth::
# 1086 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 551 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1087 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardFerryNorth
# 1088 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 552 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1089 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 1090 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1091 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1092 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1093 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_ExitSailSelect::
# 1094 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 557 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1095 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 1096 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 558 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1097 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 1098 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 1099 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1100 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1101 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 562 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1102 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardFerryEast:
# 1103 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 563 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1104 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 1105 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 564 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1106 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 1107 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 565 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1108 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 1109 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1110 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 568 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1111 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardFerryNorth:
# 1112 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 569 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1113 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 1114 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 570 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1115 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 1116 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1117 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 573 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1118 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_UnusedBoardFerry:
# 1119 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 574 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1120 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 1121 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 575 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1122 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 1123 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1124 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_Sailor::
# 1125 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 579 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1126 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock
# 1127 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 580 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1128 "data/maps/LilycoveCity_Harbor/scripts.pory"
	faceplayer
# 1129 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 581 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1130 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_Harbor_EventScript_Sailor_2
# 1131 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_Sailor_1:
# 1132 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 584 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1133 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryUnavailable, MSGBOX_DEFAULT
# 1134 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 585 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1135 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 1136 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 1137 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1138 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_Sailor_2:
# 1139 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 582 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1140 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_SailorFerryAvailable
# 1141 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_Sailor_1
# 1142 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1143 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1144 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SailorFerryAvailable::
# 1145 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 590 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1146 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryAvailable, MSGBOX_DEFAULT
# 1147 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 591 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1148 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 1149 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 1150 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1151 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1152 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayNorth::
# 1153 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 596 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1154 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorOutOfWayNorth
# 1155 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 597 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1156 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 1157 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1158 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1159 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1160 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayEast::
# 1161 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 602 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1162 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorOutOfWayEast
# 1163 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 603 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1164 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 1165 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1166 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1167 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1168 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorOutOfWayNorth::
# 1169 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 608 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1170 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_right
# 1171 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 609 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1172 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_facing_direction
# 1173 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 610 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1174 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_left
# 1175 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 611 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1176 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_facing_direction
# 1177 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 612 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1178 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 1179 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1180 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1181 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1182 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorOutOfWayEast::
# 1183 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 616 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1184 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_facing_direction
# 1185 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 617 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1186 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_down
# 1187 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 618 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1188 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_facing_direction
# 1189 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 619 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1190 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 1191 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1192 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1193 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1194 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFaceSailorNorth::
# 1195 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 623 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1196 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterLeft
# 1197 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 624 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1198 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 1199 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1200 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1201 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1202 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFaceSailorEast::
# 1203 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 629 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1204 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterDown
# 1205 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 630 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1206 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 1207 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1208 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1209 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1210 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFacePlayerNorth::
# 1211 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 635 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1212 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterDown
# 1213 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 636 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1214 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 1215 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1216 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1217 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1218 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFacePlayerEast::
# 1219 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 641 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1220 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterLeft
# 1221 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 642 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1222 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 1223 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1224 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1225 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1226 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorNorth::
# 1227 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 647 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1228 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, LilycoveCity_Harbor_Movement_BrineyBoardFerry
# 1229 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 648 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1230 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyNorth
# 1231 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 649 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1232 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorBoardWithBrineyNorth
# 1233 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 650 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1234 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 1235 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1236 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1237 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1238 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorEast::
# 1239 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 655 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1240 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, LilycoveCity_Harbor_Movement_BrineyBoardFerry
# 1241 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 656 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1242 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyEast
# 1243 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 657 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1244 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorBoardWithBrineyEast
# 1245 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 658 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1246 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 1247 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 1248 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1249 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1250 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 662 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1251 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_BrineyBoardFerry:
# 1252 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 663 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1253 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 1254 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 664 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1255 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_8
# 1256 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 665 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1257 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 1258 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 666 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1259 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 1260 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1261 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 669 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1262 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyNorth:
# 1263 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 670 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1264 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1265 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 671 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1266 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 1267 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 672 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1268 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1269 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 673 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1270 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 1271 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 674 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1272 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 1273 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1274 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 677 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1275 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorBoardWithBrineyNorth:
# 1276 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 678 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1277 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1278 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 679 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1279 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1280 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 680 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1281 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1282 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 681 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1283 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 1284 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 682 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1285 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 1286 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 683 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1287 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1288 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 684 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1289 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 1290 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 685 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1291 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 1292 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1293 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 688 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1294 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyEast:
# 1295 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 689 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1296 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1297 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 690 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1298 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 1299 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 691 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1300 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 1301 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 692 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1302 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1303 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 693 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1304 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 1305 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 694 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1306 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 1307 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1308 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 697 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1309 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorBoardWithBrineyEast:
# 1310 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 698 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1311 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1312 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 699 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1313 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1314 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 700 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1315 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1316 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 701 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1317 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 1318 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 702 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1319 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 1320 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 703 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1321 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 1322 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 704 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1323 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 1324 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1325 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_FerryUnavailable::
# 1326 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 707 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1327 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 1328 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 1329 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 1330 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "available at present…$"
# 1331 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1332 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_MayISeeYourTicket::
# 1333 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 714 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1334 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 1335 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "May I see your TICKET?$"
# 1336 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1337 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_NoTicket::
# 1338 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 719 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1339 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 1340 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 1341 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "You must have a TICKET to board\n"
# 1342 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 1343 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1344 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_FlashTicketWhereTo::
# 1345 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 726 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1346 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 1347 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 1348 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 1349 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1350 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailAnotherTime::
# 1351 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 732 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1352 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 1353 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1354 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SlateportItIs::
# 1355 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 736 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1356 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 1357 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1358 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_BattleFrontierItIs::
# 1359 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 740 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1360 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"
# 1361 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1362 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_PleaseBoard::
# 1363 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 744 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1364 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 1365 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "departure.$"
# 1366 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1367 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo::
# 1368 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 749 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1369 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 1370 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1371 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailorFerryUnavailable::
# 1372 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 753 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1373 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Until they finish making the ferry,\n"
# 1374 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "we sailors have nothing to do…\p"
# 1375 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I wish they'd get a move on, the folks\n"
# 1376 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "at the SHIPYARD in SLATEPORT.$"
# 1377 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 1378 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailorFerryAvailable::
# 1379 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 760 "data/maps/LilycoveCity_Harbor/scripts.pory"
# 1380 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "The ferry S.S. TIDAL is finally in\n"
# 1381 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "operation.\p"
# 1382 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "The folks at the SHIPYARD in SLATEPORT\n"
# 1383 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "must've worked extra hard.\p"
# 1384 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Well, it's my turn to get busy now!$"
