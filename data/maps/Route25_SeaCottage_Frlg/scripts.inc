# 1 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 2 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Frlg_MapScripts::
# 3 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 2 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 4 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_SeaCottage_OnTransition
# 5 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 7 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 8 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_OnTransition::
# 9 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 6 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 10 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_unset FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_OnTransition_2
# 11 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_OnTransition_1:
# 12 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 9 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 13 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_OnTransition_5
# 14 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_OnTransition_4:
# 15 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 16 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 17 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_OnTransition_2:
# 18 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 7 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 19 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_HideClefairyBill
# 20 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_OnTransition_1
# 21 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 22 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_OnTransition_5:
# 23 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 10 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 24 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket
# 25 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_OnTransition_4
# 26 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 27 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 28 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_HideClefairyBill::
# 29 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 16 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 30 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BILL_CLEFAIRY
# 31 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 17 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 32 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setobjectxyperm LOCALID_BILL_HUMAN, 3, 3
# 33 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 34 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 35 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 36 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket::
# 37 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 22 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 38 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag RETURN_AFTER_SS_TICKET
# 39 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 40 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 41 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 42 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill::
# 43 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 27 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 44 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	lock
# 45 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 28 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 46 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	faceplayer
# 47 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 29 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 48 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set RETURN_AFTER_SS_TICKET, Route25_SeaCottage_EventScript_Bill_2
# 49 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_1:
# 50 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 32 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 51 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_EventScript_Bill_5
# 52 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_4:
# 53 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 35 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 54 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_EventScript_Bill_8
# 55 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_7:
# 56 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 38 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 57 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkplayergender
# 58 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 39 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 59 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 60 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_Bill_11
# 61 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_10:
# 62 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 42 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 63 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
# 64 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_Bill_14
# 65 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_13:
# 66 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 67 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 68 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_2:
# 69 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 30 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 70 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGoLookAtPC
# 71 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_Bill_1
# 72 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 73 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_5:
# 74 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 33 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 75 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGoToSSAnne
# 76 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_Bill_4
# 77 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 78 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_8:
# 79 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 36 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 80 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGiveSSTicket
# 81 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_Bill_7
# 82 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 83 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_11:
# 84 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 40 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 85 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelpMale
# 86 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_Bill_10
# 87 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 88 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_14:
# 89 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 43 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 90 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelpFemale
# 91 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_Bill_13
# 92 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 93 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 94 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelpMale::
# 95 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 49 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 96 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutPal, MSGBOX_YESNO
# 97 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 50 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 98 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
# 99 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 100 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 101 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 102 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelpFemale::
# 103 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 55 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 104 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutLady, MSGBOX_YESNO
# 105 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 56 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 106 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
# 107 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 108 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 109 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 110 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp::
# 111 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 61 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 112 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 113 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_BillAskForHelp_2
# 114 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp_1:
# 115 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 64 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 116 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_RunCellSeparationOnPC
# 117 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 65 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 118 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closemessage
# 119 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 66 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 120 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 10
# 121 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 67 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 122 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 123 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_BillAskForHelp_5
# 124 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp_4:
# 125 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 70 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 126 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 127 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_BillAskForHelp_8
# 128 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp_7:
# 129 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 73 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 130 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 131 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_BillAskForHelp_11
# 132 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp_10:
# 133 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 76 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 134 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 135 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_BillAskForHelp_14
# 136 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp_13:
# 137 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 79 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	opendoor 10, 3
# 139 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 80 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 140 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 141 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 81 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 142 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillEnterTeleporter
# 143 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 82 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 144 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 83 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 146 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	removeobject LOCALID_BILL_CLEFAIRY
# 147 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 84 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 148 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 149 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 85 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 150 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closedoor 10, 3
# 151 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 86 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 152 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 153 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 87 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 154 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag BILL_IN_TELEPORTER
# 155 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 88 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 156 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
# 157 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 158 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 159 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp_2:
# 160 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 62 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 161 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_DeclineHelpBill
# 162 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp_1
# 163 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 164 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp_5:
# 165 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 68 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 166 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth
# 167 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp_4
# 168 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 169 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp_8:
# 170 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 71 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 171 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 172 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp_7
# 173 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 174 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp_11:
# 175 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 74 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 176 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 177 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp_10
# 178 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 179 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp_14:
# 180 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 77 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 181 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 182 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp_13
# 183 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 184 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 185 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBill::
# 186 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 93 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 187 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkplayergender
# 188 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 94 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 189 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 190 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_DeclineHelpBill_2
# 191 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBill_1:
# 192 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 97 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 193 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
# 194 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_DeclineHelpBill_5
# 195 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBill_4:
# 196 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 197 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 198 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBill_2:
# 199 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 95 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 200 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_DeclineHelpBillMale
# 201 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_DeclineHelpBill_1
# 202 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 203 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBill_5:
# 204 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 98 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 205 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_DeclineHelpBillFemale
# 206 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_DeclineHelpBill_4
# 207 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 208 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 209 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBillMale::
# 210 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 104 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 211 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseChief
# 212 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 213 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 214 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 215 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBillFemale::
# 216 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 109 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 217 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseBeautiful
# 218 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 219 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 220 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 221 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth::
# 222 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 114 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 223 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporterSouth
# 224 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 115 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 225 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 227 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 228 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 229 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillWalkToTeleporter::
# 230 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 120 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 231 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporter
# 232 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 121 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 233 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 235 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 236 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 237 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGoToSSAnne::
# 238 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 126 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 239 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_SSAnnePartyYouGoInstead
# 240 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 127 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 241 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
# 242 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 243 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 244 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 245 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGiveSSTicket::
# 246 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 132 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 247 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 248 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 133 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 249 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkplayergender
# 250 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 134 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 251 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 252 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_BillGiveSSTicket_2
# 253 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGiveSSTicket_1:
# 254 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 137 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 255 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
# 256 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_BillGiveSSTicket_5
# 257 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGiveSSTicket_4:
# 258 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 140 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 259 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkitemspace ITEM_SS_TICKET
# 260 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 141 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 261 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 262 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq Route25_SeaCottage_EventScript_BillGiveSSTicket_8
# 263 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGiveSSTicket_7:
# 264 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 144 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 265 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	giveitem_msg Route25_SeaCottage_Text_ReceivedSSTicketFromBill, ITEM_SS_TICKET, 1, MUS_RG_OBTAIN_KEY_ITEM
# 266 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 145 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 267 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_GOT_SS_TICKET_DUP
# 268 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 146 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 269 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_HIDE_NUGGET_BRIDGE_ROCKET
# 270 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 147 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 271 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_GOT_SS_TICKET
# 272 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 148 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 273 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 274 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 149 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 275 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGoToSSAnne
# 276 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 277 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 278 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGiveSSTicket_2:
# 279 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 135 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 280 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillThanksMale
# 281 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGiveSSTicket_1
# 282 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 283 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGiveSSTicket_5:
# 284 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 285 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillThanksFemale
# 286 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGiveSSTicket_4
# 287 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 288 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGiveSSTicket_8:
# 289 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 142 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 290 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_NoRoomForSSTicket
# 291 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGiveSSTicket_7
# 292 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 293 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 294 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillThanksMale::
# 295 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 154 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 296 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksBudTakeThis
# 297 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 298 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 299 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 300 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillThanksFemale::
# 301 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 159 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 302 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksLadyTakeThis
# 303 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 304 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 305 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 306 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_NoRoomForSSTicket::
# 307 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 164 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 308 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_YouveGotTooMuchStuff
# 309 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 165 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 310 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
# 311 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 312 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 313 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 314 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGoLookAtPC::
# 315 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 170 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 316 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_CheckOutRareMonsOnPC
# 317 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 171 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 318 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
# 319 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 320 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 321 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 322 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 175 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 323 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporter:
# 324 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 176 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 325 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 326 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 177 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 327 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 328 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 178 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 329 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 330 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 331 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 181 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 332 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporterSouth:
# 333 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 182 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 334 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 335 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 183 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 336 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 337 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 184 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 338 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 339 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 185 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 340 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
# 341 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 186 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 342 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_in_place_faster_up
# 343 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 187 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 344 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 345 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 346 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 190 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 347 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillEnterTeleporter:
# 348 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 191 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 349 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 350 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 192 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 351 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 352 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 353 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Computer::
# 354 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 196 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 355 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	lockall
# 356 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 197 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 357 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set RETURN_AFTER_SS_TICKET, Route25_SeaCottage_EventScript_Computer_2
# 358 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Computer_1:
# 359 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 200 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 360 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set BILL_IN_TELEPORTER, Route25_SeaCottage_EventScript_Computer_5
# 361 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Computer_4:
# 362 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 203 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 363 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_TeleporterIsDisplayed
# 364 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 204 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 365 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
# 366 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 367 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 368 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Computer_2:
# 369 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 198 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 370 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_OpenBillsMonList
# 371 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_Computer_1
# 372 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 373 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Computer_5:
# 374 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 201 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 375 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_RunCellSeparator
# 376 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_Computer_4
# 377 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 378 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 379 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_RunCellSeparator::
# 380 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 209 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 381 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	fadeoutbgm 0
# 382 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 210 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 383 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator
# 384 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 211 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 385 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closemessage
# 386 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 212 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 387 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag BILL_IN_TELEPORTER
# 388 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 213 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 389 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_HELPED_BILL_IN_SEA_COTTAGE
# 390 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 214 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 391 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SpawnCameraObject
# 392 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 215 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 393 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, Route25_SeaCottage_Movement_CameraPanToTeleporters
# 394 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 216 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 395 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 396 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 217 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 397 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 35
# 398 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 218 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 399 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_PIN
# 400 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 219 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 401 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 402 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 220 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 403 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 404 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 221 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 405 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterHousing
# 406 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 222 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 407 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 10
# 408 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 223 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 409 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 410 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 224 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 411 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 412 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 225 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 413 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 414 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 226 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 415 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 416 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 227 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 417 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 418 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 228 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 419 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 420 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 229 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 421 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 422 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 230 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 423 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 424 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 231 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 425 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterHousing
# 426 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 232 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 427 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_WARP_IN
# 428 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 233 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 429 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterCable
# 430 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 234 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 431 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 432 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 235 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 433 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 434 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 236 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 435 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 436 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 237 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 437 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 438 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 238 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 439 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 440 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 239 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 441 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 442 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 240 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 443 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	opendoor 3, 3
# 444 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 241 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 445 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 446 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 242 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 447 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	fadeinbgm 0
# 448 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 243 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 449 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	addobject LOCALID_BILL_HUMAN
# 450 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 244 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 451 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE
# 452 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 245 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 453 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 50
# 454 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 246 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 455 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 456 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 247 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 457 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillExitTeleporter
# 458 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 248 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 459 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 460 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 249 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 461 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitfanfare
# 462 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 250 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 463 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, Route25_SeaCottage_Movement_CameraPanBackFromTeleporters
# 464 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 251 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 465 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 466 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 252 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 467 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 468 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 253 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 469 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closedoor 3, 3
# 470 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 254 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 471 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 472 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 255 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 473 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom
# 474 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 256 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 475 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 476 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 257 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 477 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special RemoveCameraObject
# 478 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 258 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 479 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
# 480 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 481 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 482 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 483 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_PlayTeleporterBeepSE::
# 484 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 263 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 485 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_BALL
# 486 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 264 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 487 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 488 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 265 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 489 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 20
# 490 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 491 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 492 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 493 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 269 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 494 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_CameraPanToTeleporters:
# 495 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 270 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 496 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 497 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 271 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 498 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 499 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 272 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 500 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 501 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 273 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 502 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 503 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 274 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 504 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 505 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 506 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 277 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 507 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_CameraPanBackFromTeleporters:
# 508 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 278 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 509 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay_16
# 510 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 279 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 511 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay_16
# 512 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 280 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 513 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 514 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 281 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 515 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 516 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 282 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 517 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
# 518 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 283 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 519 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
# 520 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 284 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 521 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 522 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 523 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_OpenBillsMonList::
# 524 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 288 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 525 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_BillsFavoriteMonList
# 526 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 289 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 527 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 528 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 529 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 530 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 531 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList::
# 532 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 294 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 533 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	message Route25_SeaCottage_Text_SeeWhichMon
# 534 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 295 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 535 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmessage
# 536 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 296 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 537 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_EEVEELUTIONS, FALSE
# 538 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 297 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 539 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	switch VAR_RESULT
# 540 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 298 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 541 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 0, Route25_SeaCottage_EventScript_BillsMonList_3
# 542 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 300 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 543 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 1, Route25_SeaCottage_EventScript_BillsMonList_4
# 544 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 302 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 545 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 2, Route25_SeaCottage_EventScript_BillsMonList_5
# 546 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 304 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 547 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 3, Route25_SeaCottage_EventScript_BillsMonList_6
# 548 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 306 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 549 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 4, Route25_SeaCottage_EventScript_BillsMonList_7
# 550 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 308 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 551 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 127, Route25_SeaCottage_EventScript_BillsMonList_8
# 552 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList_1:
# 553 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 554 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 555 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList_3:
# 556 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 299 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 557 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ViewEevee
# 558 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList_1
# 559 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 560 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList_4:
# 561 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 301 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 562 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ViewFlareon
# 563 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList_1
# 564 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 565 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList_5:
# 566 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 303 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 567 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ViewJolteon
# 568 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList_1
# 569 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 570 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList_6:
# 571 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 305 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 572 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ViewVaporeon
# 573 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList_1
# 574 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 575 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList_7:
# 576 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 307 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 577 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ExitBillsMonList
# 578 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList_1
# 579 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 580 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList_8:
# 581 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 309 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 582 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ExitBillsMonList
# 583 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList_1
# 584 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 585 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 586 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_ViewEevee::
# 587 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 315 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 588 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 589 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 316 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 590 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 591 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 317 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 592 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 593 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 318 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 594 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_EEVEE
# 595 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 319 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 596 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 597 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 320 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 598 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 599 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 600 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 601 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 602 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_ViewFlareon::
# 603 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 325 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 604 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_FLAREON, 10, 3
# 605 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 326 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 606 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 607 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 327 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 608 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 609 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 328 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 610 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_FLAREON
# 611 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 329 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 612 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 613 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 330 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 614 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 615 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 616 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 617 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 618 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_ViewJolteon::
# 619 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 335 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 620 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_JOLTEON, 10, 3
# 621 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 336 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 622 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 623 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 337 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 624 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 625 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 338 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 626 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_JOLTEON
# 627 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 339 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 628 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 629 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 340 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 630 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 631 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 632 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 633 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 634 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_ViewVaporeon::
# 635 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 345 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 636 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_VAPOREON, 10, 3
# 637 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 346 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 638 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 639 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 347 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 640 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 641 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 348 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 642 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_VAPOREON
# 643 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 349 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 644 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 645 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 350 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 646 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 647 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 648 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 649 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 650 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_ExitBillsMonList::
# 651 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 355 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 652 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
# 653 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 654 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 655 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 656 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 359 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 657 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom:
# 658 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 360 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 659 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 660 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 361 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 661 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 662 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 362 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 663 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 664 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 363 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 665 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 666 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 364 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 667 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 668 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 365 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 669 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 670 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 366 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 671 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 672 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 673 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 369 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 674 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillExitTeleporter:
# 675 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 370 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 676 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 677 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 371 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 678 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 679 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 680 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_ImBillHelpMeOutPal::
# 681 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 374 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 682 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hiya! I'm a POKéMON…\n"
# 683 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "…No I'm not!\p"
# 684 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Call me BILL!\n"
# 685 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I'm a true-blue POKéMANIAC!\p"
# 686 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hey!\n"
# 687 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "What's with that skeptical look?\p"
# 688 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I'm not joshing you, pal.\p"
# 689 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I screwed up an experiment and got\n"
# 690 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "combined with a POKéMON!\p"
# 691 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "So, how about it?\n"
# 692 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Help me out here!$"
# 693 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 694 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_ImBillHelpMeOutLady::
# 695 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 388 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 696 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hiya! I'm a POKéMON…\n"
# 697 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "…No I'm not!\p"
# 698 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Call me BILL!\n"
# 699 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I'm a true-blue POKéMANIAC!\p"
# 700 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hey!\n"
# 701 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "What's with that skeptical look?\p"
# 702 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I'm not joshing you, lady.\p"
# 703 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I screwed up an experiment and got\n"
# 704 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "combined with a POKéMON!\p"
# 705 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "So, how about it?\n"
# 706 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Help me out here!$"
# 707 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 708 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_RunCellSeparationOnPC::
# 709 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 402 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 710 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Wait till I get inside the\n"
# 711 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "TELEPORTER.\p"
# 712 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "When I do, go to my PC and run\n"
# 713 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "the Cell Separation System.$"
# 714 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 715 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_NoPleaseChief::
# 716 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 409 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 717 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "No!?\n"
# 718 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Now don't be so cold!\p"
# 719 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Come on, you gotta help a guy in\n"
# 720 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "deep, deep trouble!\p"
# 721 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "What do you say, chief?\n"
# 722 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Please?\l"
# 723 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Okay?\l"
# 724 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "All right!$"
# 725 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 726 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_NoPleaseBeautiful::
# 727 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 420 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 728 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "No!?\n"
# 729 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Now don't be so cold!\p"
# 730 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Come on, you gotta help a guy in\n"
# 731 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "deep, deep trouble!\p"
# 732 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "What do you say, beautiful?\n"
# 733 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Please?\l"
# 734 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Okay?\l"
# 735 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "All right!$"
# 736 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 737 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_ThanksBudTakeThis::
# 738 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 431 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 739 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Yeehah!\n"
# 740 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Thanks, bud! I owe you one!\p"
# 741 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "So, did you come to see my\n"
# 742 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "POKéMON collection?\p"
# 743 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "You didn't?\n"
# 744 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "That's a bummer.\p"
# 745 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I've got to thank you…\n"
# 746 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Oh, here, maybe this'll do.$"
# 747 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 748 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_ThanksLadyTakeThis::
# 749 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 442 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 750 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Yeehah!\n"
# 751 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Thanks, lady! I owe you one!\p"
# 752 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "So, did you come to see my\n"
# 753 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "POKéMON collection?\p"
# 754 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "You didn't?\n"
# 755 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "That's a bummer.\p"
# 756 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I've got to thank you…\n"
# 757 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Oh, here, maybe this'll do.$"
# 758 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 759 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_ReceivedSSTicketFromBill::
# 760 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 453 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 761 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "{PLAYER} received an S.S. TICKET\n"
# 762 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "from BILL.$"
# 763 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 764 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_YouveGotTooMuchStuff::
# 765 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 458 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 766 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "You've got too much stuff!$"
# 767 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 768 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_SSAnnePartyYouGoInstead::
# 769 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 462 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 770 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "That cruise ship S.S. ANNE is in\n"
# 771 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "VERMILION CITY.\p"
# 772 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I hear there are lots of TRAINERS\n"
# 773 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "on board, too.\p"
# 774 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "They invited me to their party, but\n"
# 775 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I can't stand fancy do's.\p"
# 776 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Why don't you go instead of me?\n"
# 777 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Go on and have a good time.$"
# 778 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 779 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_CheckOutRareMonsOnPC::
# 780 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 473 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 781 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Feel like checking out some\n"
# 782 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "of my rare POKéMON on my PC?\p"
# 783 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Go on, check out my PC.$"
# 784 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 785 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_TeleporterIsDisplayed::
# 786 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 479 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 787 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "TELEPORTER is displayed on the PC\n"
# 788 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "monitor.$"
# 789 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 790 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator::
# 791 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 484 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 792 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "{PLAYER} initiated the TELEPORTER's\n"
# 793 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Cell Separator.$"
# 794 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 795 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_BillsFavoriteMonList::
# 796 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 489 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 797 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL's favorite POKéMON list!$"
# 798 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 799 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_SeeWhichMon::
# 800 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 493 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
# 801 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Which POKéMON do you want to see?$"
