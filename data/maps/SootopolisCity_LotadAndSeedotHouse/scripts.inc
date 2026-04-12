# 1 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 2 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_MapScripts::
# 3 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 5 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 6 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother::
# 7 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 4 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 8 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 9 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 5 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 10 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 11 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 6 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 12 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 13 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 7 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 14 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot, MSGBOX_DEFAULT
# 15 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 8 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 16 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setvar VAR_0x8009, SPECIES_SEEDOT
# 17 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 9 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 18 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_TRADE
# 19 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 10 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 20 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 21 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 11 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 22 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
# 23 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_2
# 24 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_1:
# 25 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 14 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 26 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareSeedotSize
# 27 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 15 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 28 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_RESULT, 1
# 29 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_5
# 30 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_4:
# 31 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 18 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 32 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_RESULT, 2
# 33 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_8
# 34 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_7:
# 35 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 21 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 36 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_RESULT, 3
# 37 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_11
# 38 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_10:
# 39 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 24 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 40 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 41 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 42 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 43 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_2:
# 44 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 12 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 45 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot
# 46 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_1
# 47 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 48 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_5:
# 49 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 16 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 50 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot
# 51 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_4
# 52 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 53 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_8:
# 54 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 19 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 55 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot
# 56 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_7
# 57 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 58 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_11:
# 59 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 22 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 60 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot
# 61 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_10
# 62 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 63 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 64 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot::
# 65 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 29 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 66 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot, MSGBOX_DEFAULT
# 67 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 30 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 68 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 69 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 70 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 71 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 72 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot::
# 73 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 35 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 74 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot, MSGBOX_DEFAULT
# 75 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 36 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 76 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 77 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 78 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 79 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 80 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot::
# 81 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 41 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 82 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot, MSGBOX_DEFAULT
# 83 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 42 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 84 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 85 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 86 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 87 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 88 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot::
# 89 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 47 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 90 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad, MSGBOX_DEFAULT
# 91 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 48 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 92 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 93 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 49 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 94 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 95 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot_2
# 96 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot_1:
# 97 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 52 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 98 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 99 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 53 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 100 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 101 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 102 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 103 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot_2:
# 104 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 50 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 105 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1
# 106 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot_1
# 107 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 108 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 109 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1::
# 110 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 58 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 111 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
# 112 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 59 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 113 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 114 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 115 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 116 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 117 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother::
# 118 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 64 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 119 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 120 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 65 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 121 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 122 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 66 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 123 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 124 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 67 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 125 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad, MSGBOX_DEFAULT
# 126 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 68 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 127 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setvar VAR_0x8009, SPECIES_LOTAD
# 128 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 69 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 129 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_TRADE
# 130 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 70 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 131 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 132 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 71 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 133 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
# 134 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_2
# 135 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_1:
# 136 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 74 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 137 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareLotadSize
# 138 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 75 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 139 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_RESULT, 1
# 140 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_5
# 141 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_4:
# 142 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 78 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 143 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_RESULT, 2
# 144 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_8
# 145 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_7:
# 146 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 81 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 147 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_RESULT, 3
# 148 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_11
# 149 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_10:
# 150 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 84 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 151 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 152 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 153 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 154 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_2:
# 155 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 72 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 156 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad
# 157 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_1
# 158 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 159 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_5:
# 160 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 76 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 161 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad
# 162 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_4
# 163 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 164 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_8:
# 165 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 79 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 166 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad
# 167 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_7
# 168 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 169 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_11:
# 170 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 82 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 171 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad
# 172 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_10
# 173 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 174 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 175 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad::
# 176 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 89 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 177 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad, MSGBOX_DEFAULT
# 178 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 90 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 179 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 180 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 181 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 182 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 183 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad::
# 184 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 95 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 185 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad, MSGBOX_DEFAULT
# 186 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 96 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 187 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 188 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 189 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 190 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 191 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad::
# 192 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 101 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 193 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad, MSGBOX_DEFAULT
# 194 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 102 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 195 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 196 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 197 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 198 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 199 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad::
# 200 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 107 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 201 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot, MSGBOX_DEFAULT
# 202 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 108 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 203 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 204 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 109 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 205 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 206 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad_2
# 207 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad_1:
# 208 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 112 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 209 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 210 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 113 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 211 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 212 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 213 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 214 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad_2:
# 215 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 110 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 216 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2
# 217 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad_1
# 218 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 219 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 220 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2::
# 221 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 118 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 222 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2, MSGBOX_DEFAULT
# 223 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 119 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 224 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 225 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 226 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 227 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 228 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotSizeRecord::
# 229 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 124 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 230 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 231 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 125 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 232 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 233 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 126 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 234 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory, MSGBOX_DEFAULT
# 235 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 127 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 236 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 237 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 238 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 239 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 240 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadSizeRecord::
# 241 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 132 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 242 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 243 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 133 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 244 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 245 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 134 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 246 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory, MSGBOX_DEFAULT
# 247 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 135 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 248 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 249 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 250 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 251 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 252 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot::
# 253 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 139 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 254 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Do you know the POKéMON SEEDOT?\n"
# 255 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "It's hardly ever seen in SOOTOPOLIS.\p"
# 256 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Anyway, I love big SEEDOT.\n"
# 257 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "The bigger the better.\p"
# 258 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "But my younger brother, he says that\n"
# 259 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "LOTAD is bigger.\p"
# 260 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "That's silly.\n"
# 261 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "SEEDOT has to be bigger than that!\p"
# 262 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Huh? Do you have a SEEDOT with you?\n"
# 263 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "P-p-please, show me!$"
# 264 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 265 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad::
# 266 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 152 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 267 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}!\n"
# 268 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Oh, my gosh, this is a big one!\p"
# 269 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "It might even beat the big LOTAD\n"
# 270 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "my younger brother saw!\p"
# 271 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Thanks for showing me.\n"
# 272 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "This is my thanks!$"
# 273 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 274 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1::
# 275 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 161 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 276 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} received a POTION.$"
# 277 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 278 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1::
# 279 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 165 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 280 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hunh?\n"
# 281 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Your BAG is crammed full.$"
# 282 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 283 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot::
# 284 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 170 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 285 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}, is it?\p"
# 286 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hmm… I've seen a bigger SEEDOT\n"
# 287 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "than this one.$"
# 288 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 289 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot::
# 290 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 176 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 291 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Oh, now this is quite something…\n"
# 292 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "But it's not a SEEDOT!$"
# 293 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 294 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot::
# 295 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 181 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 296 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "You don't have a big SEEDOT?\n"
# 297 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "That's too bad…\p"
# 298 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "If you get a big SEEDOT, please\n"
# 299 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "come show me.$"
# 300 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 301 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory::
# 302 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 188 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 303 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "The biggest SEEDOT in history!\n"
# 304 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}'s {STR_VAR_3} giant!\p"
# 305 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "A SEEDOT bigger than a LOTAD\n"
# 306 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "always wanted!$"
# 307 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 308 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad::
# 309 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 195 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 310 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Do you know the POKéMON LOTAD?\n"
# 311 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "It's rarely seen in SOOTOPOLIS.\p"
# 312 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "I love, I mean love, big LOTAD!\p"
# 313 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "My big brother says that SEEDOT is\n"
# 314 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "bigger.\p"
# 315 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "But that's wrong! Everyone knows that\n"
# 316 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "LOTAD is a lot bigger.\p"
# 317 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hunh? Do you have a LOTAD?\n"
# 318 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "P-p-please show me!$"
# 319 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 320 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot::
# 321 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 207 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 322 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}!\n"
# 323 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Wow, that is big!\p"
# 324 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "It might be even bigger than the huge\n"
# 325 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "SEEDOT my big brother saw.\p"
# 326 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Thanks for showing me!\n"
# 327 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "This is my thanks!$"
# 328 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 329 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion2::
# 330 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 216 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 331 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} received a POTION.$"
# 332 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 333 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2::
# 334 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 220 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 335 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hunh?\n"
# 336 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Your BAG is crammed full.$"
# 337 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 338 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad::
# 339 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 225 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 340 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}?\p"
# 341 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hmm… I've seen a bigger LOTAD\n"
# 342 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "than this one here.$"
# 343 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 344 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad::
# 345 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 231 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 346 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Well, isn't this something!\n"
# 347 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "But it's no LOTAD!$"
# 348 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 349 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad::
# 350 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 236 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 351 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Don't you have a big LOTAD?\n"
# 352 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "How disappointing…\p"
# 353 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "If you get a big LOTAD, please\n"
# 354 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "come show me!$"
# 355 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 356 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory::
# 357 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 243 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
# 358 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "The biggest LOTAD in history!\n"
# 359 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}'s {STR_VAR_3} colossus!\p"
# 360 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "A LOTAD bigger than a SEEDOT\n"
# 361 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "always wanted!$"
