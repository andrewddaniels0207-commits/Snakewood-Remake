Route25_SeaCottage_Frlg_MapScripts::
# 2 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_SeaCottage_OnTransition
	.byte 0


Route25_SeaCottage_OnTransition::
# 6 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_unset FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_OnTransition_2
Route25_SeaCottage_OnTransition_1:
# 9 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_OnTransition_5
Route25_SeaCottage_OnTransition_4:
	end

Route25_SeaCottage_OnTransition_2:
# 7 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_HideClefairyBill
	goto Route25_SeaCottage_OnTransition_1

Route25_SeaCottage_OnTransition_5:
# 10 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket
	goto Route25_SeaCottage_OnTransition_4


Route25_SeaCottage_EventScript_HideClefairyBill::
# 16 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BILL_CLEFAIRY
# 17 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setobjectxyperm LOCALID_BILL_HUMAN, 3, 3
	return


Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket::
# 22 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag RETURN_AFTER_SS_TICKET
	return


Route25_SeaCottage_EventScript_Bill::
# 27 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	lock
# 28 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set RETURN_AFTER_SS_TICKET, Route25_SeaCottage_EventScript_Bill_2
Route25_SeaCottage_EventScript_Bill_1:
# 32 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_EventScript_Bill_5
Route25_SeaCottage_EventScript_Bill_4:
# 35 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_EventScript_Bill_8
Route25_SeaCottage_EventScript_Bill_7:
# 38 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkplayergender
# 39 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route25_SeaCottage_EventScript_Bill_11
Route25_SeaCottage_EventScript_Bill_10:
# 42 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route25_SeaCottage_EventScript_Bill_14
Route25_SeaCottage_EventScript_Bill_13:
	end

Route25_SeaCottage_EventScript_Bill_2:
# 30 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGoLookAtPC
	goto Route25_SeaCottage_EventScript_Bill_1

Route25_SeaCottage_EventScript_Bill_5:
# 33 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGoToSSAnne
	goto Route25_SeaCottage_EventScript_Bill_4

Route25_SeaCottage_EventScript_Bill_8:
# 36 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGiveSSTicket
	goto Route25_SeaCottage_EventScript_Bill_7

Route25_SeaCottage_EventScript_Bill_11:
# 40 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelpMale
	goto Route25_SeaCottage_EventScript_Bill_10

Route25_SeaCottage_EventScript_Bill_14:
# 43 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelpFemale
	goto Route25_SeaCottage_EventScript_Bill_13


Route25_SeaCottage_EventScript_BillAskForHelpMale::
# 49 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutPal, MSGBOX_YESNO
# 50 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
	end


Route25_SeaCottage_EventScript_BillAskForHelpFemale::
# 55 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutLady, MSGBOX_YESNO
# 56 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
	end


Route25_SeaCottage_EventScript_BillAskForHelp::
# 61 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route25_SeaCottage_EventScript_BillAskForHelp_2
Route25_SeaCottage_EventScript_BillAskForHelp_1:
# 64 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_RunCellSeparationOnPC
# 65 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closemessage
# 66 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 10
# 67 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Route25_SeaCottage_EventScript_BillAskForHelp_5
Route25_SeaCottage_EventScript_BillAskForHelp_4:
# 70 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Route25_SeaCottage_EventScript_BillAskForHelp_8
Route25_SeaCottage_EventScript_BillAskForHelp_7:
# 73 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq Route25_SeaCottage_EventScript_BillAskForHelp_11
Route25_SeaCottage_EventScript_BillAskForHelp_10:
# 76 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq Route25_SeaCottage_EventScript_BillAskForHelp_14
Route25_SeaCottage_EventScript_BillAskForHelp_13:
# 79 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	opendoor 10, 3
# 80 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 81 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillEnterTeleporter
# 82 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	removeobject LOCALID_BILL_CLEFAIRY
# 84 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 85 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closedoor 10, 3
# 86 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 87 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag BILL_IN_TELEPORTER
# 88 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
	end

Route25_SeaCottage_EventScript_BillAskForHelp_2:
# 62 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_DeclineHelpBill
	goto Route25_SeaCottage_EventScript_BillAskForHelp_1

Route25_SeaCottage_EventScript_BillAskForHelp_5:
# 68 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth
	goto Route25_SeaCottage_EventScript_BillAskForHelp_4

Route25_SeaCottage_EventScript_BillAskForHelp_8:
# 71 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillWalkToTeleporter
	goto Route25_SeaCottage_EventScript_BillAskForHelp_7

Route25_SeaCottage_EventScript_BillAskForHelp_11:
# 74 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillWalkToTeleporter
	goto Route25_SeaCottage_EventScript_BillAskForHelp_10

Route25_SeaCottage_EventScript_BillAskForHelp_14:
# 77 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillWalkToTeleporter
	goto Route25_SeaCottage_EventScript_BillAskForHelp_13


Route25_SeaCottage_EventScript_DeclineHelpBill::
# 93 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkplayergender
# 94 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route25_SeaCottage_EventScript_DeclineHelpBill_2
Route25_SeaCottage_EventScript_DeclineHelpBill_1:
# 97 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route25_SeaCottage_EventScript_DeclineHelpBill_5
Route25_SeaCottage_EventScript_DeclineHelpBill_4:
	return

Route25_SeaCottage_EventScript_DeclineHelpBill_2:
# 95 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_DeclineHelpBillMale
	goto Route25_SeaCottage_EventScript_DeclineHelpBill_1

Route25_SeaCottage_EventScript_DeclineHelpBill_5:
# 98 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_DeclineHelpBillFemale
	goto Route25_SeaCottage_EventScript_DeclineHelpBill_4


Route25_SeaCottage_EventScript_DeclineHelpBillMale::
# 104 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseChief
	return


Route25_SeaCottage_EventScript_DeclineHelpBillFemale::
# 109 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseBeautiful
	return


Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth::
# 114 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporterSouth
# 115 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
	return


Route25_SeaCottage_EventScript_BillWalkToTeleporter::
# 120 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporter
# 121 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
	return


Route25_SeaCottage_EventScript_BillGoToSSAnne::
# 126 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_SSAnnePartyYouGoInstead
# 127 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
	end


Route25_SeaCottage_EventScript_BillGiveSSTicket::
# 132 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 133 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkplayergender
# 134 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route25_SeaCottage_EventScript_BillGiveSSTicket_2
Route25_SeaCottage_EventScript_BillGiveSSTicket_1:
# 137 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route25_SeaCottage_EventScript_BillGiveSSTicket_5
Route25_SeaCottage_EventScript_BillGiveSSTicket_4:
# 140 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkitemspace ITEM_SS_TICKET
# 141 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route25_SeaCottage_EventScript_BillGiveSSTicket_8
Route25_SeaCottage_EventScript_BillGiveSSTicket_7:
# 144 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	giveitem_msg Route25_SeaCottage_Text_ReceivedSSTicketFromBill, ITEM_SS_TICKET, 1, MUS_RG_OBTAIN_KEY_ITEM
# 145 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_GOT_SS_TICKET_DUP
# 146 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_HIDE_NUGGET_BRIDGE_ROCKET
# 147 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_GOT_SS_TICKET
# 148 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 149 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGoToSSAnne
	end

Route25_SeaCottage_EventScript_BillGiveSSTicket_2:
# 135 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillThanksMale
	goto Route25_SeaCottage_EventScript_BillGiveSSTicket_1

Route25_SeaCottage_EventScript_BillGiveSSTicket_5:
# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_BillThanksFemale
	goto Route25_SeaCottage_EventScript_BillGiveSSTicket_4

Route25_SeaCottage_EventScript_BillGiveSSTicket_8:
# 142 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_NoRoomForSSTicket
	goto Route25_SeaCottage_EventScript_BillGiveSSTicket_7


Route25_SeaCottage_EventScript_BillThanksMale::
# 154 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksBudTakeThis
	return


Route25_SeaCottage_EventScript_BillThanksFemale::
# 159 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksLadyTakeThis
	return


Route25_SeaCottage_EventScript_NoRoomForSSTicket::
# 164 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_YouveGotTooMuchStuff
# 165 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
	end


Route25_SeaCottage_EventScript_BillGoLookAtPC::
# 170 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_CheckOutRareMonsOnPC
# 171 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
	end


# 175 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporter:
# 176 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 177 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 178 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end

# 181 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporterSouth:
# 182 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 183 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 184 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 185 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
# 186 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_in_place_faster_up
# 187 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end

# 190 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillEnterTeleporter:
# 191 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 192 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end

Route25_SeaCottage_EventScript_Computer::
# 196 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	lockall
# 197 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set RETURN_AFTER_SS_TICKET, Route25_SeaCottage_EventScript_Computer_2
Route25_SeaCottage_EventScript_Computer_1:
# 200 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set BILL_IN_TELEPORTER, Route25_SeaCottage_EventScript_Computer_5
Route25_SeaCottage_EventScript_Computer_4:
# 203 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_TeleporterIsDisplayed
# 204 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
	end

Route25_SeaCottage_EventScript_Computer_2:
# 198 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_OpenBillsMonList
	goto Route25_SeaCottage_EventScript_Computer_1

Route25_SeaCottage_EventScript_Computer_5:
# 201 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_RunCellSeparator
	goto Route25_SeaCottage_EventScript_Computer_4


Route25_SeaCottage_EventScript_RunCellSeparator::
# 209 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	fadeoutbgm 0
# 210 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator
# 211 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closemessage
# 212 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag BILL_IN_TELEPORTER
# 213 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_HELPED_BILL_IN_SEA_COTTAGE
# 214 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SpawnCameraObject
# 215 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, Route25_SeaCottage_Movement_CameraPanToTeleporters
# 216 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 35
# 218 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_PIN
# 219 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 220 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 221 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterHousing
# 222 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 10
# 223 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 224 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 225 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 226 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 227 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 228 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 229 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 230 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 231 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterHousing
# 232 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_WARP_IN
# 233 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterCable
# 234 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 235 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 236 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 237 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 238 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 239 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 240 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	opendoor 3, 3
# 241 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 242 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	fadeinbgm 0
# 243 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	addobject LOCALID_BILL_HUMAN
# 244 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE
# 245 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 50
# 246 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 247 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillExitTeleporter
# 248 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitfanfare
# 250 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, Route25_SeaCottage_Movement_CameraPanBackFromTeleporters
# 251 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 253 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closedoor 3, 3
# 254 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 255 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom
# 256 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special RemoveCameraObject
# 258 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
	end


Route25_SeaCottage_EventScript_PlayTeleporterBeepSE::
# 263 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_BALL
# 264 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 265 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 20
	return


# 269 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_CameraPanToTeleporters:
# 270 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 272 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 273 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 274 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end

# 277 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_CameraPanBackFromTeleporters:
# 278 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay_16
# 279 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay_16
# 280 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 281 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 282 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
# 283 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
# 284 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end

Route25_SeaCottage_EventScript_OpenBillsMonList::
# 288 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_BillsFavoriteMonList
# 289 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_BillsMonList::
# 294 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	message Route25_SeaCottage_Text_SeeWhichMon
# 295 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmessage
# 296 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_EEVEELUTIONS, FALSE
# 297 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	switch VAR_RESULT
# 298 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 0, Route25_SeaCottage_EventScript_BillsMonList_3
# 300 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 1, Route25_SeaCottage_EventScript_BillsMonList_4
# 302 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 2, Route25_SeaCottage_EventScript_BillsMonList_5
# 304 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 3, Route25_SeaCottage_EventScript_BillsMonList_6
# 306 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 4, Route25_SeaCottage_EventScript_BillsMonList_7
# 308 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 127, Route25_SeaCottage_EventScript_BillsMonList_8
Route25_SeaCottage_EventScript_BillsMonList_1:
	end

Route25_SeaCottage_EventScript_BillsMonList_3:
# 299 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ViewEevee
	goto Route25_SeaCottage_EventScript_BillsMonList_1

Route25_SeaCottage_EventScript_BillsMonList_4:
# 301 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ViewFlareon
	goto Route25_SeaCottage_EventScript_BillsMonList_1

Route25_SeaCottage_EventScript_BillsMonList_5:
# 303 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ViewJolteon
	goto Route25_SeaCottage_EventScript_BillsMonList_1

Route25_SeaCottage_EventScript_BillsMonList_6:
# 305 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ViewVaporeon
	goto Route25_SeaCottage_EventScript_BillsMonList_1

Route25_SeaCottage_EventScript_BillsMonList_7:
# 307 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ExitBillsMonList
	goto Route25_SeaCottage_EventScript_BillsMonList_1

Route25_SeaCottage_EventScript_BillsMonList_8:
# 309 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_ExitBillsMonList
	goto Route25_SeaCottage_EventScript_BillsMonList_1


Route25_SeaCottage_EventScript_ViewEevee::
# 315 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 316 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 317 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 318 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_EEVEE
# 319 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 320 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ViewFlareon::
# 325 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_FLAREON, 10, 3
# 326 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 327 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 328 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_FLAREON
# 329 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 330 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ViewJolteon::
# 335 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_JOLTEON, 10, 3
# 336 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 337 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 338 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_JOLTEON
# 339 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 340 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ViewVaporeon::
# 345 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_VAPOREON, 10, 3
# 346 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 347 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 348 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_VAPOREON
# 349 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 350 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ExitBillsMonList::
# 355 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
	end


# 359 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom:
# 360 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 361 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 362 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 363 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 364 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 365 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 366 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end

# 369 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillExitTeleporter:
# 370 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 371 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end

Route25_SeaCottage_Text_ImBillHelpMeOutPal::
# 374 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hiya! I'm a POKéMON…\n"
	.string "…No I'm not!\p"
	.string "Call me BILL!\n"
	.string "I'm a true-blue POKéMANIAC!\p"
	.string "Hey!\n"
	.string "What's with that skeptical look?\p"
	.string "I'm not joshing you, pal.\p"
	.string "I screwed up an experiment and got\n"
	.string "combined with a POKéMON!\p"
	.string "So, how about it?\n"
	.string "Help me out here!$"

Route25_SeaCottage_Text_ImBillHelpMeOutLady::
# 388 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hiya! I'm a POKéMON…\n"
	.string "…No I'm not!\p"
	.string "Call me BILL!\n"
	.string "I'm a true-blue POKéMANIAC!\p"
	.string "Hey!\n"
	.string "What's with that skeptical look?\p"
	.string "I'm not joshing you, lady.\p"
	.string "I screwed up an experiment and got\n"
	.string "combined with a POKéMON!\p"
	.string "So, how about it?\n"
	.string "Help me out here!$"

Route25_SeaCottage_Text_RunCellSeparationOnPC::
# 402 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Wait till I get inside the\n"
	.string "TELEPORTER.\p"
	.string "When I do, go to my PC and run\n"
	.string "the Cell Separation System.$"

Route25_SeaCottage_Text_NoPleaseChief::
# 409 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "No!?\n"
	.string "Now don't be so cold!\p"
	.string "Come on, you gotta help a guy in\n"
	.string "deep, deep trouble!\p"
	.string "What do you say, chief?\n"
	.string "Please?\l"
	.string "Okay?\l"
	.string "All right!$"

Route25_SeaCottage_Text_NoPleaseBeautiful::
# 420 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "No!?\n"
	.string "Now don't be so cold!\p"
	.string "Come on, you gotta help a guy in\n"
	.string "deep, deep trouble!\p"
	.string "What do you say, beautiful?\n"
	.string "Please?\l"
	.string "Okay?\l"
	.string "All right!$"

Route25_SeaCottage_Text_ThanksBudTakeThis::
# 431 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Yeehah!\n"
	.string "Thanks, bud! I owe you one!\p"
	.string "So, did you come to see my\n"
	.string "POKéMON collection?\p"
	.string "You didn't?\n"
	.string "That's a bummer.\p"
	.string "I've got to thank you…\n"
	.string "Oh, here, maybe this'll do.$"

Route25_SeaCottage_Text_ThanksLadyTakeThis::
# 442 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Yeehah!\n"
	.string "Thanks, lady! I owe you one!\p"
	.string "So, did you come to see my\n"
	.string "POKéMON collection?\p"
	.string "You didn't?\n"
	.string "That's a bummer.\p"
	.string "I've got to thank you…\n"
	.string "Oh, here, maybe this'll do.$"

Route25_SeaCottage_Text_ReceivedSSTicketFromBill::
# 453 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "{PLAYER} received an S.S. TICKET\n"
	.string "from BILL.$"

Route25_SeaCottage_Text_YouveGotTooMuchStuff::
# 458 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "You've got too much stuff!$"

Route25_SeaCottage_Text_SSAnnePartyYouGoInstead::
# 462 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "That cruise ship S.S. ANNE is in\n"
	.string "VERMILION CITY.\p"
	.string "I hear there are lots of TRAINERS\n"
	.string "on board, too.\p"
	.string "They invited me to their party, but\n"
	.string "I can't stand fancy do's.\p"
	.string "Why don't you go instead of me?\n"
	.string "Go on and have a good time.$"

Route25_SeaCottage_Text_CheckOutRareMonsOnPC::
# 473 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Feel like checking out some\n"
	.string "of my rare POKéMON on my PC?\p"
	.string "Go on, check out my PC.$"

Route25_SeaCottage_Text_TeleporterIsDisplayed::
# 479 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "TELEPORTER is displayed on the PC\n"
	.string "monitor.$"

Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator::
# 484 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "{PLAYER} initiated the TELEPORTER's\n"
	.string "Cell Separator.$"

Route25_SeaCottage_Text_BillsFavoriteMonList::
# 489 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL's favorite POKéMON list!$"

Route25_SeaCottage_Text_SeeWhichMon::
# 493 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Which POKéMON do you want to see?$"
