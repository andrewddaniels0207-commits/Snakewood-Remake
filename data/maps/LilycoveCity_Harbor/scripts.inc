LilycoveCity_Harbor_MapScripts::
# 2 "data/maps/LilycoveCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_Harbor_OnTransition
	.byte 0


LilycoveCity_Harbor_OnTransition::
# 6 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setescapewarp MAP_LILYCOVE_CITY, 12, 33
	end


LilycoveCity_Harbor_EventScript_FerryAttendant::
# 11 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock
# 12 "data/maps/LilycoveCity_Harbor/scripts.pory"
	faceplayer
# 13 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, LilycoveCity_Harbor_EventScript_FerryAttendant_2
LilycoveCity_Harbor_EventScript_FerryAttendant_1:
# 16 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEonTicketState
# 17 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetAuroraTicketState
# 18 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetOldSeaMapState
# 19 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetMysticTicketState
# 20 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket
# 21 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetHasTicketsState
# 22 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_C, 2
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_5
LilycoveCity_Harbor_EventScript_FerryAttendant_4:
# 25 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_8
LilycoveCity_Harbor_EventScript_FerryAttendant_7:
# 28 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_11
LilycoveCity_Harbor_EventScript_FerryAttendant_10:
# 31 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_B, 4
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_14
LilycoveCity_Harbor_EventScript_FerryAttendant_13:
# 34 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_B, 8
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_17
LilycoveCity_Harbor_EventScript_FerryAttendant_16:
# 37 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_ne LilycoveCity_Harbor_EventScript_FerryAttendant_20
LilycoveCity_Harbor_EventScript_FerryAttendant_19:
# 40 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets
	end

LilycoveCity_Harbor_EventScript_FerryAttendant_2:
# 14 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryUnavailable
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_1

LilycoveCity_Harbor_EventScript_FerryAttendant_5:
# 23 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_4

LilycoveCity_Harbor_EventScript_FerryAttendant_8:
# 26 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_EonTicketFirstTime
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_7

LilycoveCity_Harbor_EventScript_FerryAttendant_11:
# 29 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_AuroraTicketFirstTime
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_10

LilycoveCity_Harbor_EventScript_FerryAttendant_14:
# 32 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_13

LilycoveCity_Harbor_EventScript_FerryAttendant_17:
# 35 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MysticTicketFirstTime
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_16

LilycoveCity_Harbor_EventScript_FerryAttendant_20:
# 38 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_19


LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets::
# 45 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets_2
LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets_1:
# 48 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_FlashTicketWhereTo
# 50 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 51 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
	end

LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets_2:
# 46 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_NoEventTickets
	goto LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets_1


LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect::
# 56 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 57 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special ScriptMenu_CreateLilycoveSSTidalMultichoice
# 58 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 59 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special GetLilycoveSSTidalSelection
# 60 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 0, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_3
# 63 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 1, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_4
# 65 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_5
# 67 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_6
# 69 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 4, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_7
# 71 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 5, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_8
# 73 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 6, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_9
# 75 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_10
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1:
	end

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_3:
# 62 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSlateport
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_4:
# 64 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBattleFrontier
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_5:
# 66 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSouthernIsland
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_6:
# 68 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToNavelRock
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_7:
# 70 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBirthIsland
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_8:
# 72 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToFarawayIsland
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_9:
# 74 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_ExitSailSelect
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_10:
# 76 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_ExitSailSelect
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1


LilycoveCity_Harbor_EventScript_GoToSouthernIsland::
# 82 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 83 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 13, 22
# 84 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 85 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_GoToNavelRock::
# 90 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 91 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 8, 4
# 92 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 93 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_GoToBirthIsland::
# 98 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 99 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 8, 4
# 100 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 101 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_GoToFarawayIsland::
# 106 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 107 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 108 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 109 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_GoToSlateport::
# 114 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SlateportItIs, MSGBOX_YESNO
# 115 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_Harbor_EventScript_GoToSlateport_2
LilycoveCity_Harbor_EventScript_GoToSlateport_1:
# 118 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE
# 119 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 120 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 121 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 122 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end

LilycoveCity_Harbor_EventScript_GoToSlateport_2:
# 116 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
	goto LilycoveCity_Harbor_EventScript_GoToSlateport_1


LilycoveCity_Harbor_EventScript_GoToBattleFrontier::
# 127 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 128 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_Harbor_EventScript_GoToBattleFrontier_2
LilycoveCity_Harbor_EventScript_GoToBattleFrontier_1:
# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 132 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 133 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 134 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end

LilycoveCity_Harbor_EventScript_GoToBattleFrontier_2:
# 129 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
	goto LilycoveCity_Harbor_EventScript_GoToBattleFrontier_1


LilycoveCity_Harbor_EventScript_GetEonTicketState::
# 139 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 0
# 140 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, LilycoveCity_Harbor_EventScript_GetEonTicketState_2
LilycoveCity_Harbor_EventScript_GetEonTicketState_1:
# 143 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_EON_TICKET
# 144 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_Harbor_EventScript_GetEonTicketState_5
LilycoveCity_Harbor_EventScript_GetEonTicketState_4:
# 147 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 1
# 148 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_EON_TICKET, LilycoveCity_Harbor_EventScript_GetEonTicketState_8
LilycoveCity_Harbor_EventScript_GetEonTicketState_7:
# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 2
	return

LilycoveCity_Harbor_EventScript_GetEonTicketState_2:
# 141 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetEonTicketState_1

LilycoveCity_Harbor_EventScript_GetEonTicketState_5:
# 145 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetEonTicketState_4

LilycoveCity_Harbor_EventScript_GetEonTicketState_8:
# 149 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetEonTicketState_7


LilycoveCity_Harbor_EventScript_GetAuroraTicketState::
# 156 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 0
# 157 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, LilycoveCity_Harbor_EventScript_GetAuroraTicketState_2
LilycoveCity_Harbor_EventScript_GetAuroraTicketState_1:
# 160 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 161 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_Harbor_EventScript_GetAuroraTicketState_5
LilycoveCity_Harbor_EventScript_GetAuroraTicketState_4:
# 164 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 165 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_AURORA_TICKET, LilycoveCity_Harbor_EventScript_GetAuroraTicketState_8
LilycoveCity_Harbor_EventScript_GetAuroraTicketState_7:
# 168 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 2
	return

LilycoveCity_Harbor_EventScript_GetAuroraTicketState_2:
# 158 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetAuroraTicketState_1

LilycoveCity_Harbor_EventScript_GetAuroraTicketState_5:
# 162 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetAuroraTicketState_4

LilycoveCity_Harbor_EventScript_GetAuroraTicketState_8:
# 166 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetAuroraTicketState_7


LilycoveCity_Harbor_EventScript_GetOldSeaMapState::
# 173 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 0
# 174 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_FARAWAY_ISLAND, LilycoveCity_Harbor_EventScript_GetOldSeaMapState_2
LilycoveCity_Harbor_EventScript_GetOldSeaMapState_1:
# 177 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP
# 178 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_Harbor_EventScript_GetOldSeaMapState_5
LilycoveCity_Harbor_EventScript_GetOldSeaMapState_4:
# 181 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 1
# 182 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_OLD_SEA_MAP, LilycoveCity_Harbor_EventScript_GetOldSeaMapState_8
LilycoveCity_Harbor_EventScript_GetOldSeaMapState_7:
# 185 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 2
	return

LilycoveCity_Harbor_EventScript_GetOldSeaMapState_2:
# 175 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetOldSeaMapState_1

LilycoveCity_Harbor_EventScript_GetOldSeaMapState_5:
# 179 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetOldSeaMapState_4

LilycoveCity_Harbor_EventScript_GetOldSeaMapState_8:
# 183 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetOldSeaMapState_7


LilycoveCity_Harbor_EventScript_GetMysticTicketState::
# 190 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 0
# 191 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, LilycoveCity_Harbor_EventScript_GetMysticTicketState_2
LilycoveCity_Harbor_EventScript_GetMysticTicketState_1:
# 194 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 195 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_Harbor_EventScript_GetMysticTicketState_5
LilycoveCity_Harbor_EventScript_GetMysticTicketState_4:
# 198 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 1
# 199 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_MYSTIC_TICKET, LilycoveCity_Harbor_EventScript_GetMysticTicketState_8
LilycoveCity_Harbor_EventScript_GetMysticTicketState_7:
# 202 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 2
	return

LilycoveCity_Harbor_EventScript_GetMysticTicketState_2:
# 192 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetMysticTicketState_1

LilycoveCity_Harbor_EventScript_GetMysticTicketState_5:
# 196 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetMysticTicketState_4

LilycoveCity_Harbor_EventScript_GetMysticTicketState_8:
# 200 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto Common_EventScript_NopReturn
	goto LilycoveCity_Harbor_EventScript_GetMysticTicketState_7


LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket::
# 207 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_B, 0
# 208 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_E, 2
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_2
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_1:
# 211 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_5
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_4:
# 214 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_C, 2
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_8
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_7:
# 217 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_9, 2
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_11
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_10:
	return

LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_2:
# 209 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetFirstTimeShowingEonTicket
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_1

LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_5:
# 212 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetFirstTimeShowingAuroraTicket
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_4

LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_8:
# 215 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetFirstTimeShowingOldSeaMap
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_7

LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_11:
# 218 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetFirstTimeShowingMysticTicket
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_10


LilycoveCity_Harbor_EventScript_SetFirstTimeShowingEonTicket::
# 224 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 1
	return


LilycoveCity_Harbor_EventScript_SetFirstTimeShowingAuroraTicket::
# 229 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 2
	return


LilycoveCity_Harbor_EventScript_SetFirstTimeShowingOldSeaMap::
# 234 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 4
	return


LilycoveCity_Harbor_EventScript_SetFirstTimeShowingMysticTicket::
# 239 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 8
	return


LilycoveCity_Harbor_EventScript_GetHasTicketsState::
# 244 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_A, 0
# 245 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_E, 1
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_2
LilycoveCity_Harbor_EventScript_GetHasTicketsState_1:
# 248 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_5
LilycoveCity_Harbor_EventScript_GetHasTicketsState_4:
# 251 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_C, 1
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_8
LilycoveCity_Harbor_EventScript_GetHasTicketsState_7:
# 254 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_11
LilycoveCity_Harbor_EventScript_GetHasTicketsState_10:
	return

LilycoveCity_Harbor_EventScript_GetHasTicketsState_2:
# 246 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetHasEonTicket
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_1

LilycoveCity_Harbor_EventScript_GetHasTicketsState_5:
# 249 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetHasAuroraTicket
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_4

LilycoveCity_Harbor_EventScript_GetHasTicketsState_8:
# 252 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetHasOldSeaMap
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_7

LilycoveCity_Harbor_EventScript_GetHasTicketsState_11:
# 255 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_SetHasMysticTicket
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_10


LilycoveCity_Harbor_EventScript_SetHasEonTicket::
# 261 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 1
	return


LilycoveCity_Harbor_EventScript_SetHasAuroraTicket::
# 266 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 2
	return


LilycoveCity_Harbor_EventScript_SetHasOldSeaMap::
# 271 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 4
	return


LilycoveCity_Harbor_EventScript_SetHasMysticTicket::
# 276 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 8
	return


LilycoveCity_Harbor_EventScript_EonTicketFirstTime::
# 281 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_EON_TICKET
# 282 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 283 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 284 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 285 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowEonTicket, MSGBOX_DEFAULT
# 286 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime
	end


LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime::
# 291 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 292 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 293 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 13, 22
# 294 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 295 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_AuroraTicketFirstTime::
# 300 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 301 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 302 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 303 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 304 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OddTicketGetOnBoard, MSGBOX_DEFAULT
# 305 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime
	end


LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime::
# 310 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 311 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 312 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 8, 4
# 313 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 314 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime::
# 319 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_OLD_SEA_MAP
# 320 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowOldSeaMap, MSGBOX_DEFAULT
# 321 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 322 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 323 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OldSeaMapTooFar, MSGBOX_DEFAULT
# 324 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 325 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 326 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 327 "data/maps/LilycoveCity_Harbor/scripts.pory"
	playse SE_PIN
# 328 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_ExclamationMark
# 329 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 330 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_Delay48
# 331 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 332 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_2
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_1:
# 335 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_5
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_4:
# 338 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_LILYCOVE_HARBOR_BRINEY
# 339 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_8
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_7:
# 342 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_11
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_10:
# 345 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyHoldOnASecond, MSGBOX_DEFAULT
# 346 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_14
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_13:
# 349 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_17
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_16:
# 352 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyLetsSail, MSGBOX_DEFAULT
# 353 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 354 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_20
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_19:
# 357 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_23
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_22:
# 360 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_LILYCOVE_HARBOR_SS_TIDAL
# 361 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 362 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 363 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 364 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_2:
# 333 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayNorth
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_1

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_5:
# 336 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayEast
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_4

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_8:
# 340 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BrineyFaceSailorNorth
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_7

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_11:
# 343 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BrineyFaceSailorEast
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_10

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_14:
# 347 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BrineyFacePlayerNorth
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_13

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_17:
# 350 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BrineyFacePlayerEast
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_16

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_20:
# 355 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorNorth
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_19

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_23:
# 358 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorEast
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_22


LilycoveCity_Harbor_EventScript_GoToFarawayIslandFirstTime::
# 369 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 370 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 371 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 372 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 373 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_MysticTicketFirstTime::
# 378 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 379 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 380 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 381 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 382 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OddTicketGetOnBoard, MSGBOX_DEFAULT
# 383 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime
	end


LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime::
# 388 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 389 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 390 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 8, 4
# 391 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 392 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime::
# 397 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 398 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 399 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 400 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message EventTicket_Text_OddTicketsWhereTo
# 401 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 402 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 1
# 403 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special ScriptMenu_CreateLilycoveSSTidalMultichoice
# 404 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 405 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special GetLilycoveSSTidalSelection
# 406 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 407 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_3
# 409 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_4
# 411 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 4, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_5
# 413 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 5, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_6
# 415 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 6, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_7
# 417 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_8
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1:
# 420 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end

LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_3:
# 408 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1

LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_4:
# 410 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1

LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_5:
# 412 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1

LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_6:
# 414 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToFarawayIslandFirstTime
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1

LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_7:
# 416 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1

LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_8:
# 418 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1


LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect::
# 425 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 426 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 427 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 428 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 429 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 430 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 431 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 432 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_ATTENDANT, Common_Movement_WalkInPlaceFasterDown
# 433 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 434 "data/maps/LilycoveCity_Harbor/scripts.pory"
	showobjectat LOCALID_LILYCOVE_HARBOR_ATTENDANT, MAP_LILYCOVE_CITY_HARBOR
# 435 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 436 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 437 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_GetEventTicketSailor::
# 442 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 443 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 444 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 445 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_LILYCOVE_CITY_HARBOR
# 446 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 60
# 447 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 448 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 449 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_FacePlayer
# 450 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Harbor_EventScript_BoardFerryWithSailor::
# 455 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 456 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 457 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 458 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 459 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_2
LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_1:
# 462 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_5
LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_4:
# 465 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 466 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideplayer
# 467 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_LILYCOVE_HARBOR_SS_TIDAL
# 468 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
	return

LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_2:
# 460 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth
	goto LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_1

LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_5:
# 463 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast
	goto LilycoveCity_Harbor_EventScript_BoardFerryWithSailor_4


LilycoveCity_Harbor_EventScript_FerryUnavailable::
# 473 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_FerryUnavailable, MSGBOX_DEFAULT
# 474 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_NoEventTickets::
# 479 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 480 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_FlashTicketWhereTo
# 481 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 482 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
	end


LilycoveCity_Harbor_EventScript_NoTicket::
# 487 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_NoTicket, MSGBOX_DEFAULT
# 488 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_GoToSlateportUnused::
# 493 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SlateportItIs, MSGBOX_YESNO
# 494 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_Harbor_EventScript_GoToSlateportUnused_2
LilycoveCity_Harbor_EventScript_GoToSlateportUnused_1:
# 497 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE
# 498 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 499 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 500 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 501 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end

LilycoveCity_Harbor_EventScript_GoToSlateportUnused_2:
# 495 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
	goto LilycoveCity_Harbor_EventScript_GoToSlateportUnused_1


LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused::
# 506 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 507 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused_2
LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused_1:
# 510 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 511 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 512 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 513 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end

LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused_2:
# 508 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
	goto LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused_1


LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind::
# 518 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo
# 519 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 520 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
	end


LilycoveCity_Harbor_EventScript_BoardFerry::
# 525 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_PleaseBoard, MSGBOX_DEFAULT
# 526 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 527 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 528 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 529 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 530 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_LILYCOVE_CITY_HARBOR
# 531 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq LilycoveCity_Harbor_EventScript_BoardFerry_2
LilycoveCity_Harbor_EventScript_BoardFerry_1:
# 534 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq LilycoveCity_Harbor_EventScript_BoardFerry_5
LilycoveCity_Harbor_EventScript_BoardFerry_4:
# 537 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 538 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideplayer
# 539 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_LILYCOVE_HARBOR_SS_TIDAL
# 540 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
	return

LilycoveCity_Harbor_EventScript_BoardFerry_2:
# 532 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth
	goto LilycoveCity_Harbor_EventScript_BoardFerry_1

LilycoveCity_Harbor_EventScript_BoardFerry_5:
# 535 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast
	goto LilycoveCity_Harbor_EventScript_BoardFerry_4


LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast::
# 545 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardFerryEast
# 546 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth::
# 551 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardFerryNorth
# 552 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Harbor_EventScript_ExitSailSelect::
# 557 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 558 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


# 562 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardFerryEast:
# 563 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 564 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 565 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end

# 568 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardFerryNorth:
# 569 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 570 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end

# 573 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_UnusedBoardFerry:
# 574 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 575 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end

LilycoveCity_Harbor_EventScript_Sailor::
# 579 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock
# 580 "data/maps/LilycoveCity_Harbor/scripts.pory"
	faceplayer
# 581 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_Harbor_EventScript_Sailor_2
LilycoveCity_Harbor_EventScript_Sailor_1:
# 584 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryUnavailable, MSGBOX_DEFAULT
# 585 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end

LilycoveCity_Harbor_EventScript_Sailor_2:
# 582 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_SailorFerryAvailable
	goto LilycoveCity_Harbor_EventScript_Sailor_1


LilycoveCity_Harbor_EventScript_SailorFerryAvailable::
# 590 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryAvailable, MSGBOX_DEFAULT
# 591 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
	end


LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayNorth::
# 596 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorOutOfWayNorth
# 597 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayEast::
# 602 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorOutOfWayEast
# 603 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Harbor_Movement_SailorOutOfWayNorth::
# 608 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_right
# 609 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_facing_direction
# 610 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_left
# 611 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_facing_direction
# 612 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
	return


LilycoveCity_Harbor_Movement_SailorOutOfWayEast::
# 616 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_facing_direction
# 617 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_down
# 618 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_facing_direction
# 619 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
	return


LilycoveCity_Harbor_EventScript_BrineyFaceSailorNorth::
# 623 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterLeft
# 624 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Harbor_EventScript_BrineyFaceSailorEast::
# 629 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterDown
# 630 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Harbor_EventScript_BrineyFacePlayerNorth::
# 635 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterDown
# 636 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Harbor_EventScript_BrineyFacePlayerEast::
# 641 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_WalkInPlaceFasterLeft
# 642 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorNorth::
# 647 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, LilycoveCity_Harbor_Movement_BrineyBoardFerry
# 648 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyNorth
# 649 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorBoardWithBrineyNorth
# 650 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorEast::
# 655 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, LilycoveCity_Harbor_Movement_BrineyBoardFerry
# 656 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyEast
# 657 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorBoardWithBrineyEast
# 658 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


# 662 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_BrineyBoardFerry:
# 663 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 664 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_8
# 665 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 666 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end

# 669 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyNorth:
# 670 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 671 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 672 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 673 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 674 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end

# 677 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorBoardWithBrineyNorth:
# 678 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 679 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 680 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 681 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 682 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 683 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 684 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 685 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end

# 688 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyEast:
# 689 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 690 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 691 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 692 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 693 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 694 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end

# 697 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorBoardWithBrineyEast:
# 698 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 699 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 700 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 701 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 702 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 703 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 704 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end

LilycoveCity_Harbor_Text_FerryUnavailable::
# 707 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
	.string "You're looking for a ship?\p"
	.string "I'm sorry, the ferry service isn't\n"
	.string "available at present…$"

LilycoveCity_Harbor_Text_MayISeeYourTicket::
# 714 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
	.string "May I see your TICKET?$"

LilycoveCity_Harbor_Text_NoTicket::
# 719 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
	.string "I'm terribly sorry.\p"
	.string "You must have a TICKET to board\n"
	.string "the ferry.$"

LilycoveCity_Harbor_Text_FlashTicketWhereTo::
# 726 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
	.string "Perfect! That's all you need!\p"
	.string "And where would you like to go?$"

LilycoveCity_Harbor_Text_SailAnotherTime::
# 732 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"

LilycoveCity_Harbor_Text_SlateportItIs::
# 736 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"

LilycoveCity_Harbor_Text_BattleFrontierItIs::
# 740 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"

LilycoveCity_Harbor_Text_PleaseBoard::
# 744 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
	.string "departure.$"

LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo::
# 749 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"

LilycoveCity_Harbor_Text_SailorFerryUnavailable::
# 753 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Until they finish making the ferry,\n"
	.string "we sailors have nothing to do…\p"
	.string "I wish they'd get a move on, the folks\n"
	.string "at the SHIPYARD in SLATEPORT.$"

LilycoveCity_Harbor_Text_SailorFerryAvailable::
# 760 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "The ferry S.S. TIDAL is finally in\n"
	.string "operation.\p"
	.string "The folks at the SHIPYARD in SLATEPORT\n"
	.string "must've worked extra hard.\p"
	.string "Well, it's my turn to get busy now!$"
