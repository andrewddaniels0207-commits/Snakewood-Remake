# 1 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 2 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 3 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 2 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 4 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 5 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 7 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 8 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition::
# 9 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 6 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 10 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 11 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 7 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 12 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 14 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 15 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 12 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 18 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 19 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 20 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 14 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 22 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 15 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 24 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
# 27 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FerryAttendant_2
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant_1:
# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 19 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 20 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 34 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 35 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 36 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 37 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant_2:
# 38 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 39 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 40 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FerryAttendant_1
# 41 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 42 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 43 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 44 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 45 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 46 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 27 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 47 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 48 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 49 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_3
# 50 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_4
# 52 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 53 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_5
# 54 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 34 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_6
# 56 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1:
# 57 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 59 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_3:
# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 61 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_4:
# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 66 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_5:
# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_6:
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 35 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 76 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 77 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1
# 78 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 79 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 41 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 42 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 85 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 87 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 88 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 89 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 47 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 90 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 48 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
# 93 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FerryToSlateport_2
# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport_1:
# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 96 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 52 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 98 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 53 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 100 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 101 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 54 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 103 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 104 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 105 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport_2:
# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 49 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 109 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 110 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FerryToSlateport_1
# 111 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 114 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 115 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 116 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 61 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
# 118 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FerryToLilycove_2
# 119 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove_1:
# 120 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 121 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 124 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 66 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 125 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 127 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 128 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove_2:
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 135 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FerryToLilycove_1
# 136 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 141 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 152 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 153 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 85 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 86 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 162 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 177 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 178 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 189 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 191 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 192 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 195 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 197 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 198 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 200 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 209 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 127 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 212 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 213 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 128 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 215 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 218 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 220 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 227 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 241 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 246 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 258 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 259 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 264 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 265 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 162 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 270 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 279 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 282 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 284 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Camper_2
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper_1:
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 178 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Camper_5
# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper_4:
# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Camper_8
# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper_7:
# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 300 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 301 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Camper_11
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper_10:
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 305 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 306 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper_2:
# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Camper_1
# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper_5:
# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Camper_4
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper_8:
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 321 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Camper_7
# 323 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper_11:
# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Camper_10
# 328 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 330 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 333 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 334 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 336 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 338 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 341 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 352 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 353 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Girl_2
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_1:
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 357 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Girl_5
# 358 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_4:
# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 213 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Girl_8
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_7:
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Girl_11
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_10:
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 368 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 369 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 220 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 370 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_2:
# 374 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Girl_1
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_5:
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 380 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Girl_4
# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_8:
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 385 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Girl_7
# 387 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 388 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_11:
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Girl_10
# 392 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 393 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 399 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 403 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 407 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 408 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 420 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 425 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 438 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, 1
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Woman2_2
# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2_1:
# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2_2:
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_Woman2_1
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 516 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 520 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 522 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 523 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 525 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 527 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 528 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 529 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 530 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 531 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 532 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 533 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 534 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 535 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 536 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 537 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 538 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 539 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 540 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 541 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 542 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 543 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 544 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 545 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 546 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 547 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 548 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 549 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 550 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 551 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 552 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 553 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 554 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 555 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 556 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 557 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 558 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 559 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 560 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 561 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 562 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 563 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 564 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 565 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 566 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 567 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 568 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 569 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 570 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 571 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 572 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 573 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 574 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 575 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 576 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 577 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 578 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 579 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 580 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 581 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 582 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 583 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 584 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 585 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 586 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 587 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 588 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 589 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 590 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 591 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 592 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 593 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 594 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 595 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 596 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 597 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 598 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 599 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 600 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 601 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 602 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 603 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 604 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 605 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign::
# 606 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 607 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE DOME!\n"
# 608 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Your path to the invincible superstar!$"
# 609 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 610 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign::
# 611 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 612 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE FACTORY!\n"
# 613 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Seek out the toughest POKéMON!$"
# 614 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 615 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign::
# 616 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 617 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE PIKE!\n"
# 618 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Choose one of three paths!$"
# 619 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 620 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower::
# 621 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 622 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE TOWER.\p"
# 623 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "TRAINERS bring their best-raised\n"
# 624 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON for elimination-style matches.$"
# 625 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 626 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket::
# 627 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 628 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 629 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "May I see your TICKET?$"
# 630 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 631 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard::
# 632 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 633 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 634 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm terribly sorry.\p"
# 635 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You must have a TICKET to board\n"
# 636 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the ferry.$"
# 637 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 638 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo::
# 639 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 640 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 641 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 642 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And where would you like to go?$"
# 643 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 644 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs::
# 645 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 646 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 647 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 648 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs::
# 649 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 650 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 651 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 652 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime::
# 653 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 654 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"
# 655 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 656 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry::
# 657 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 658 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 659 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "departure.$"
# 660 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 661 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo::
# 662 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 663 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"
# 664 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 665 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends::
# 666 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 667 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
# 668 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But here…\l"
# 669 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've been useless!$"
# 670 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 671 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower::
# 672 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 673 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the BATTLE TOWER,\n"
# 674 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "but I can't find it even though I have\l"
# 675 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a map of the BATTLE FRONTIER.\p"
# 676 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This place is just too big!$"
# 677 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 678 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere::
# 679 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 680 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
# 681 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "as I arrived here.\p"
# 682 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But on the way, I got seasick…\n"
# 683 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Urrrrp…$"
# 684 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 685 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere::
# 686 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 687 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
# 688 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "here, you know?\p"
# 689 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Only those TRAINERS who've been\n"
# 690 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "recognized as tough are brought here.\p"
# 691 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's why many TRAINERS don't even\n"
# 692 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "know about the BATTLE FRONTIER.$"
# 693 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 694 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons::
# 695 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 696 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
# 697 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Are you sure we can make challenges\n"
# 698 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "even if we don't have any POKéMON?$"
# 699 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 700 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons::
# 701 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 702 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
# 703 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure it'll be okay.\p"
# 704 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I think…\p"
# 705 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But remember that big scary guy?\n"
# 706 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He said, “I'll lend you POKéMON!”$"
# 707 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 708 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons::
# 709 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 710 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the BATTLE FACTORY.\n"
# 711 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You can rent strong POKéMON there.\p"
# 712 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But it makes me wonder.\n"
# 713 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Who's raising those rental POKéMON?$"
# 714 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 715 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper::
# 716 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 717 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the BATTLE\n"
# 718 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "PIKE because of SEVIPER…\p"
# 719 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "B-but I came all the way here, so I will\n"
# 720 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "try to conquer everything!\l"
# 721 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "…Shudder…$"
# 722 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 723 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors::
# 724 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 725 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
# 726 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "One, two, three!\p"
# 727 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 728 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 729 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge::
# 730 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 731 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
# 732 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I will take the BATTLE PIKE challenge!$"
# 733 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 734 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge::
# 735 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 736 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
# 737 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I lost.\p"
# 738 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I guess I'm not very lucky today.\n"
# 739 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll put off my BATTLE PIKE challenge\l"
# 740 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "until tomorrow.$"
# 741 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 742 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling::
# 743 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 744 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
# 745 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "for some unknown reason, would choose\l"
# 746 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "fishing over battling.\p"
# 747 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? You can't catch anything here?\n"
# 748 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's disappointing…$"
# 749 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 750 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol::
# 751 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 752 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
# 753 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "matter what, until I get a Symbol.$"
# 754 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 755 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome::
# 756 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 757 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
# 758 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the BATTLE DOME?\p"
# 759 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll wish you the best of luck.\n"
# 760 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let us both win our way up and meet\l"
# 761 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in challenges.$"
# 762 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 763 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa::
# 764 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 534 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 765 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
# 766 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The BATTLE DOME is here!\l"
# 767 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Go get 'em, Grandpa!$"
# 768 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 769 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe::
# 770 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 540 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 771 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the BATTLE DOME?\n"
# 772 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I won't let GENTLEMEN beat me!\p"
# 773 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But where is the entrance?$"
# 774 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 775 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo::
# 776 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 546 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 777 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
# 778 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "that long ago.\p"
# 779 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But, now look at this place! Amazing!\n"
# 780 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll bring my mother out to see this.$"
# 781 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 782 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier::
# 783 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 553 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 784 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the BATTLE\n"
# 785 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "FRONTIER!\p"
# 786 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure to grab attention with\n"
# 787 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "my looks and ability!$"
# 788 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 789 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople::
# 790 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 560 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 791 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
# 792 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It looks like this square's filled with\n"
# 793 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "tough people.\p"
# 794 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…$"
# 795 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 796 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike::
# 797 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 567 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 798 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 799 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A while back, I met this older girl\n"
# 800 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "at the BATTLE PIKE.\p"
# 801 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She had these eyes that were scary\n"
# 802 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in a real ornery way.\p"
# 803 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 804 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She got all furious: “Will you quit\n"
# 805 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eating!” Then she whaled on me.\p"
# 806 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It was a hair-raising kind of\n"
# 807 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "scary experience, sure enough.\p"
# 808 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…$"
# 809 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 810 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet::
# 811 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 581 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 812 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
# 813 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's nothing!\p"
# 814 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Why, the last time I cheered for him,\n"
# 815 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "our eyes met and sparks flew!$"
# 816 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 817 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering::
# 818 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 588 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 819 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
# 820 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pfft!\p"
# 821 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That only happened because\n"
# 822 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I happened to be sitting next to you!\p"
# 823 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE only looked our way\n"
# 824 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "because my cheering was so loud!$"
# 825 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 826 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine::
# 827 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 597 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 828 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
# 829 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Keep that racket down!\p"
# 830 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You fair-weather fans should stick\n"
# 831 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to cheering for some GYM LEADER!\p"
# 832 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE is mine!\n"
# 833 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The only idol for me!$"
# 834 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 835 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers::
# 836 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 606 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 837 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
# 838 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's hard to believe, but they once\n"
# 839 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "were TRAINERS, and good ones, too.\p"
# 840 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They used to be incredibly tough,\n"
# 841 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "and they were famous, too.\p"
# 842 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But they were obliterated by this\n"
# 843 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "certain TRAINER at a tournament.\p"
# 844 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They were so thoroughly whipped,\n"
# 845 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "they became smitten by the TRAINER.\p"
# 846 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Now they're just fans of the TRAINER.\n"
# 847 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They go cheer for their idol at the\l"
# 848 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "BATTLE DOME every day now.$"
# 849 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 850 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier::
# 851 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 621 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
# 852 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
# 853 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a POKéMON with an unusually long tail\l"
# 854 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "somewhere in the BATTLE FRONTIER.\p"
# 855 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It must be adorable. I'm sure of it…\p"
# 856 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, challenges can wait. I feel driven\n"
# 857 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to find the delightful creature!$"
