# 1 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_MapScripts::
# 3 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 5 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 6 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_EntranceAttendant::
# 7 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 4 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 8 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_NPC
# 9 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 10 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 11 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 12 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeLeft::
# 13 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 9 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 14 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 15 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 10 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 16 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 17 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 11 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 18 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 12 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 20 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 21 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 22 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 23 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 24 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeRight::
# 25 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 17 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 26 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 27 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 18 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 28 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 29 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 19 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 30 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 20 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 32 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 33 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 34 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 35 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 36 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee::
# 37 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 25 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 38 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	showmoneybox 0, 0
# 39 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 26 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 40 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter, MSGBOX_YESNO
# 41 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 27 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 42 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	compare VAR_RESULT, YES
# 43 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee_2
# 44 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee_1:
# 45 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 30 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 46 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 47 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 31 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 48 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 49 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 32 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 50 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 51 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 33 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 52 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 34 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 54 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 55 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 56 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 57 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee_2:
# 58 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 28 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 59 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee
# 60 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee_1
# 61 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 62 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 63 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee::
# 64 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 39 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 65 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	checkmoney 50
# 66 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 40 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 67 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 68 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee_2
# 69 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee_1:
# 70 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 43 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 71 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_SHOP
# 72 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 44 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 73 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removemoney 50
# 74 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 45 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 75 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	updatemoneybox
# 76 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 46 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 77 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 78 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 47 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 79 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 80 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 48 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 81 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 82 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 49 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 83 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 84 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 85 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 86 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee_2:
# 87 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 41 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 88 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney
# 89 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee_1
# 90 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 91 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 92 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney::
# 93 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 54 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 94 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney_2
# 95 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney_1:
# 96 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 57 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 97 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 98 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 58 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 99 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 100 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 59 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 101 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 102 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 60 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 103 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 104 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 61 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 105 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 106 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 62 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 107 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 108 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 109 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 110 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney_2:
# 111 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 55 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 112 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway
# 113 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney_1
# 114 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 115 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 116 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway::
# 117 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 67 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 118 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup, MSGBOX_DEFAULT
# 119 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 68 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 120 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 121 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 69 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 122 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 123 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 70 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 124 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 125 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 126 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 127 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 128 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 74 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 129 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter:
# 130 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 75 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 131 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_down
# 132 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 76 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 133 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 134 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 135 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt1::
# 136 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 80 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 137 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll, MSGBOX_NPC
# 138 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 139 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 140 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 141 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt2::
# 142 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 85 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 143 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere, MSGBOX_NPC
# 144 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 145 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 146 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 147 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt3::
# 148 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 90 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 149 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich, MSGBOX_NPC
# 150 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 151 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 152 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 153 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt4::
# 154 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 95 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 155 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds, MSGBOX_SIGN
# 156 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 157 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 158 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 159 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt5::
# 160 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 100 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 161 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RustboroBungled, MSGBOX_NPC
# 162 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 163 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 164 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 165 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt6::
# 166 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 105 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 167 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney, MSGBOX_NPC
# 168 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 169 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 170 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 171 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WhirlpoolExperiment::
# 172 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 110 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 173 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment, MSGBOX_SIGN
# 174 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 175 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WaterfallExperiment::
# 178 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 115 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment, MSGBOX_SIGN
# 180 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 181 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 182 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 183 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanSoilDisplay::
# 184 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 120 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 185 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay, MSGBOX_SIGN
# 186 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 187 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 188 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 189 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_BeachSandDisplay::
# 190 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 125 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 191 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay, MSGBOX_SIGN
# 192 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 193 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 194 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 195 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact1::
# 196 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 130 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 197 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1, MSGBOX_SIGN
# 198 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 199 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 200 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 201 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact2::
# 202 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 135 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 203 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2, MSGBOX_SIGN
# 204 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 205 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 206 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 207 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact3::
# 208 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 140 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 209 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3, MSGBOX_SIGN
# 210 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 211 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 212 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 213 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FossilDisplay::
# 214 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 145 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 215 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_FossilDisplay, MSGBOX_SIGN
# 216 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 217 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 218 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 219 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_DepthMeasuringMachine::
# 220 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 150 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 221 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine, MSGBOX_SIGN
# 222 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 223 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 224 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 225 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron1::
# 226 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 155 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 227 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling, MSGBOX_NPC
# 228 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 229 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 230 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 231 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron2::
# 232 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 160 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 233 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel, MSGBOX_NPC
# 234 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 235 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 236 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 237 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron3::
# 238 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 165 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 239 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow, MSGBOX_NPC
# 240 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 241 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 242 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 243 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron4::
# 244 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 170 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 245 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon, MSGBOX_NPC
# 246 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 247 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 248 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 249 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt::
# 250 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 175 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 251 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lock
# 252 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 253 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	faceplayer
# 254 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 255 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay 8
# 256 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 178 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 257 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_PIN
# 258 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 259 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, Common_Movement_ExclamationMark
# 260 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 180 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 261 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 262 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 181 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 263 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, Common_Movement_Delay48
# 264 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 182 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 265 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 266 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 183 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 267 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis, MSGBOX_DEFAULT
# 268 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 184 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 269 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	giveitem ITEM_TM_THIEF
# 270 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 185 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 271 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	compare VAR_RESULT, 0
# 272 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_2
# 273 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_1:
# 274 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 188 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 275 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_THIEF
# 276 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 189 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 277 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain, MSGBOX_DEFAULT
# 278 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 190 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 279 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 280 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 191 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 281 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 282 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_5
# 283 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_4:
# 284 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 194 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 285 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 286 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_8
# 287 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_7:
# 288 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 197 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 289 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 290 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_11
# 291 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_10:
# 292 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 200 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 293 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 294 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_14
# 295 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_13:
# 296 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 297 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 298 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_2:
# 299 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 186 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 300 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief
# 301 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_1
# 302 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 303 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_5:
# 304 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 192 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 305 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth
# 306 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_4
# 307 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 308 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_8:
# 309 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 195 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 310 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth
# 311 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_7
# 312 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 313 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_11:
# 314 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 198 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 315 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 316 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_10
# 317 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 318 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_14:
# 319 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 201 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 320 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 321 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_13
# 322 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 323 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 324 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth::
# 325 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 207 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 326 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth
# 327 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 208 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 328 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth
# 329 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 209 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 330 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 331 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 210 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 332 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 333 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 334 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 335 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 336 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth::
# 337 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 215 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 338 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 339 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 216 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 340 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 341 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 217 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 342 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 343 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 344 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 345 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 346 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast::
# 347 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 222 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 348 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast
# 349 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 223 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 350 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 351 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 224 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 352 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 353 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 225 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 354 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 355 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 356 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 357 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 358 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited::
# 359 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 230 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 360 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
# 361 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 231 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 362 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_EXIT
# 363 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 232 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 364 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT
# 365 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 233 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 366 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 367 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 368 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 369 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 370 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief::
# 371 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 238 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 372 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis, MSGBOX_DEFAULT
# 373 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 239 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 374 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 375 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 376 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 377 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 378 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 243 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 379 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth:
# 380 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 244 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 381 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 382 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 245 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 383 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 384 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 246 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 385 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_4
# 386 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 247 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 387 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 388 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 248 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 389 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 390 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 391 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 251 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 392 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast:
# 393 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 252 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 394 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 395 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 253 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 396 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 397 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 254 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 398 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 399 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 400 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 257 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 401 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit:
# 402 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 258 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 403 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	face_down
# 404 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 259 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 405 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 406 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 260 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 407 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 408 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 261 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 409 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 410 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 262 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 411 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 412 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 263 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 413 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 414 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 264 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 415 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 416 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 417 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 267 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 418 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth:
# 419 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 268 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 420 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 421 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 269 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 422 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 423 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 270 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 424 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 425 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 271 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 426 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 427 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 272 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 428 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 429 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 273 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 430 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 431 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 274 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 432 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 433 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 434 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter::
# 435 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 277 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 436 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Welcome to the OCEANIC MUSEUM.\p"
# 437 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "The entrance fee is ¥50.\n"
# 438 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Would you like to enter?$"
# 439 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 440 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself::
# 441 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 283 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 442 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Please enjoy yourself.$"
# 443 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 444 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney::
# 445 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 287 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 446 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Oh? I'm sorry, but you don't seem to\n"
# 447 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "have enough money.$"
# 448 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 449 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup::
# 450 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 292 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 451 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Oh? You're with that group that\n"
# 452 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "went in earlier?\p"
# 453 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "You're the only one who's late.\n"
# 454 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "You'd better go catch up to them!$"
# 455 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 456 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll::
# 457 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 299 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 458 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "We, TEAM AQUA, exist for the good\n"
# 459 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "of all!$"
# 460 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 461 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere::
# 462 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 304 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 463 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "We were told to assemble here,\n"
# 464 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "so we did, but…\p"
# 465 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Our BOSS, the linchpin, isn't here.$"
# 466 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 467 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich::
# 468 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 310 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 469 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "If I ripped off the stuff here,\n"
# 470 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "would it make me rich?$"
# 471 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 472 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds::
# 473 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 315 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 474 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "What I learn here, I can put to use on\n"
# 475 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "nefarious deeds…$"
# 476 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 477 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RustboroBungled::
# 478 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 320 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 479 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "If our goons didn't bungle things\n"
# 480 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "in RUSTBORO, we wouldn't be here!$"
# 481 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 482 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney::
# 483 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 325 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 484 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I didn't have ¥50, so it took a long\n"
# 485 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "time getting by the receptionist.$"
# 486 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 487 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling::
# 488 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 330 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 489 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I want to learn about the sea and\n"
# 490 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "use that knowledge for battling.$"
# 491 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 492 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel::
# 493 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 335 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 494 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I get all giddy and gooey when\n"
# 495 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I see the sea!\p"
# 496 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "For me, CAPT. STERN is the number\n"
# 497 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "one role model!$"
# 498 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 499 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow::
# 500 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 342 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 501 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "The sea is vast without end, and\n"
# 502 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "infinitely deep…\p"
# 503 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "There must be many POKéMON that\n"
# 504 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "we don't know about.$"
# 505 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 506 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon::
# 507 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 349 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 508 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I want a sea POKéMON.\p"
# 509 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I think it would feel cool and nice\n"
# 510 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "to hug.$"
# 511 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 512 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis::
# 513 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 355 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 514 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Aiyeeeh!\n"
# 515 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "What are you doing here?\p"
# 516 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Me? I'm the TEAM AQUA member\n"
# 517 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "you thumped before, remember?\l"
# 518 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Back in RUSTURF TUNNEL?\p"
# 519 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Here, take this!\n"
# 520 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "You have to forgive me!$"
# 521 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 522 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain::
# 523 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 365 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 524 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "That TM, it suits you more than it\n"
# 525 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "does me.\p"
# 526 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Hope I never see you again!\n"
# 527 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Wahahaha!$"
# 528 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 529 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis::
# 530 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 372 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 531 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Awww, come on!\n"
# 532 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "You have to take this and let me go!$"
# 533 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 534 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment::
# 535 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 377 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 536 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A blue fluid is spiraling inside\n"
# 537 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "a glass vessel.\p"
# 538 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“This is an experiment to create a\n"
# 539 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "WHIRLPOOL artificially using wind.”$"
# 540 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 541 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment::
# 542 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 384 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 543 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A red ball is bobbing up and down\n"
# 544 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "inside a glass vessel.\p"
# 545 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“This is an experiment simulating a\n"
# 546 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "WATERFALL using the ball's buoyancy.”$"
# 547 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 548 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay::
# 549 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 391 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 550 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a sample of soil from the ocean\n"
# 551 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "floor.\p"
# 552 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Over many years, the remains of\n"
# 553 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "life-forms settle at the bottom of\l"
# 554 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the sea, making sedimentary layers.\p"
# 555 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“By analyzing these layers, the\n"
# 556 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "ancient past is revealed.”$"
# 557 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 558 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay::
# 559 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 401 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 560 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a sample of beach sand.\p"
# 561 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Stones from mountains are washed\n"
# 562 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "down by rivers where they are\l"
# 563 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "chipped and ground down.\p"
# 564 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“They are reduced to grains and end\n"
# 565 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "up as sand on beaches.”$"
# 566 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 567 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1::
# 568 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 410 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 569 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 1\n"
# 570 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Why is seawater blue?\p"
# 571 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Light is composed of many colors.\p"
# 572 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“When light passes through water,\n"
# 573 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "most kinds of light lose color.\p"
# 574 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“However, blue light retains its\n"
# 575 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "color, making the sea appear blue.”$"
# 576 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 577 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2::
# 578 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 420 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 579 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 2\n"
# 580 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Why is the sea salty?\p"
# 581 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Seawater contains dissolved salt in\n"
# 582 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the form of sodium and chlorine ions.\p"
# 583 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“These ions leech out of rocks\n"
# 584 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "and are carried out to sea by rain.\p"
# 585 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The concentration of dissolved salt\n"
# 586 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "makes the sea salty.”$"
# 587 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 588 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3::
# 589 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 431 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 590 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 3\n"
# 591 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Which is bigger? The sea or land?\p"
# 592 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The sea covers about 70% of\n"
# 593 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the planet, and the rest is land.\p"
# 594 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The sea is therefore more than twice\n"
# 595 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the size of land.”$"
# 596 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 597 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_FossilDisplay::
# 598 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 440 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 599 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a fossil with wavy ridges on it.\p"
# 600 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Soil on the ocean floor gets scoured\n"
# 601 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "by the tide.\p"
# 602 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The flowing seawater marks the soil\n"
# 603 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "with small ridges and valleys.\p"
# 604 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“If this soil becomes fossilized, it is\n"
# 605 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "called a ripple mark.”$"
# 606 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 607 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine::
# 608 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 450 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
# 609 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A strange machine is rotating under\n"
# 610 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "a glass dome.\p"
# 611 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Maybe it's for measuring the depth\n"
# 612 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "of something…$"
