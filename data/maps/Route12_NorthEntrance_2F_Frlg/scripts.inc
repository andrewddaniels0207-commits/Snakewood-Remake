# 1 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 2 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Frlg_MapScripts::
# 3 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 5 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 6 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_LeftBinoculars::
# 7 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 4 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 8 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TheresManFishing, MSGBOX_SIGN
# 9 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 10 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 11 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 12 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_RightBinoculars::
# 13 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 9 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 14 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ItsPokemonTower, MSGBOX_SIGN
# 15 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 16 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 17 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 18 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_Lass::
# 19 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 14 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 20 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	lock
# 21 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 15 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 22 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 16 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 24 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM27, Route12_NorthEntrance_2F_EventScript_Lass_2
# 25 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_Lass_1:
# 26 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 19 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 27 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	checkplayergender
# 28 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 20 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 29 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 30 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_eq Route12_NorthEntrance_2F_EventScript_Lass_5
# 31 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_Lass_4:
# 32 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 23 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 33 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
# 34 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_eq Route12_NorthEntrance_2F_EventScript_Lass_8
# 35 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_Lass_7:
# 36 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 26 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 37 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	checkitemspace ITEM_TM27
# 38 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 27 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 39 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 40 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_eq Route12_NorthEntrance_2F_EventScript_Lass_11
# 41 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_Lass_10:
# 42 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 30 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 43 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl, ITEM_TM27
# 44 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 31 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 45 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
# 46 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 32 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 47 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_TM27
# 48 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 33 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 49 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	release
# 50 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 51 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 52 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_Lass_2:
# 53 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 17 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 54 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto Route12_NorthEntrance_2F_EventScript_ExplainTM27
# 55 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto Route12_NorthEntrance_2F_EventScript_Lass_1
# 56 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 57 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_Lass_5:
# 58 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 21 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 59 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	call Route12_NorthEntrance_2F_EventScript_TakeTMMale
# 60 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto Route12_NorthEntrance_2F_EventScript_Lass_4
# 61 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 62 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_Lass_8:
# 63 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 24 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 64 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	call Route12_NorthEntrance_2F_EventScript_TakeTMFemale
# 65 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto Route12_NorthEntrance_2F_EventScript_Lass_7
# 66 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 67 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_Lass_11:
# 68 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 28 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 69 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto Route12_NorthEntrance_2F_EventScript_NoRoomForTM27
# 70 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto Route12_NorthEntrance_2F_EventScript_Lass_10
# 71 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 72 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 73 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_TakeTMMale::
# 74 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 38 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 75 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreMale
# 76 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	return
# 77 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 78 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 79 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_TakeTMFemale::
# 80 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 43 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 81 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreFemale
# 82 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	return
# 83 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 84 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 85 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_NoRoomForTM27::
# 86 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 48 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 87 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_DontHaveRoomForThis
# 88 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 49 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 89 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	release
# 90 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 91 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 92 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 93 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_ExplainTM27::
# 94 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 54 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 95 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
# 96 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 55 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 97 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	release
# 98 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 99 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 100 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 101 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreMale::
# 102 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 59 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 103 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "My POKéMON's ashes are stored in\n"
# 104 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "POKéMON TOWER.\p"
# 105 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "You can have this TM.\n"
# 106 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "I don't need it anymore…$"
# 107 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 108 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreFemale::
# 109 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 66 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 110 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "My POKéMON's ashes are stored in\n"
# 111 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "POKéMON TOWER.\p"
# 112 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "You can have this TM.\n"
# 113 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "I don't need it anymore…$"
# 114 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 115 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl::
# 116 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 73 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 117 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received TM27\n"
# 118 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "from the little girl.$"
# 119 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 120 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_ExplainTM27::
# 121 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 78 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 122 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "TM27 is a move called RETURN…\p"
# 123 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "If you treat your POKéMON good,\n"
# 124 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "it will return your love by working\l"
# 125 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "its hardest in battle.$"
# 126 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 127 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_DontHaveRoomForThis::
# 128 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 85 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 129 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "You don't have room for this.$"
# 130 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 131 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_TheresManFishing::
# 132 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 89 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 133 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 134 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 135 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "There's a man fishing!$"
# 136 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 137 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_ItsPokemonTower::
# 138 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 95 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
# 139 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 140 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 141 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "It's POKéMON TOWER!$"
