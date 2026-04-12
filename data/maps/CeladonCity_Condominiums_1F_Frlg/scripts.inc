# 1 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 6 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman::
# 7 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 8 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 9 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 5 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 10 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 6 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 12 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_TALKED_TO_TEA_LADY_AFTER_HOF, CeladonCity_Condominiums_1F_EventScript_TeaWoman_2
# 13 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman_1:
# 14 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 9 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 15 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CeladonCity_Condominiums_1F_EventScript_TeaWoman_5
# 16 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman_4:
# 17 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 12 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 18 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TEA, CeladonCity_Condominiums_1F_EventScript_TeaWoman_8
# 19 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman_7:
# 20 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 15 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 21 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead
# 22 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 23 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_TEA
# 24 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 17 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 25 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	giveitem ITEM_TEA
# 26 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 18 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 27 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 28 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_eq CeladonCity_Condominiums_1F_EventScript_TeaWoman_11
# 29 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman_10:
# 30 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 21 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea
# 32 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 33 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 34 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 35 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 36 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman_2:
# 37 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 7 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
# 39 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_1
# 40 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 41 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman_5:
# 42 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 10 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 43 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy
# 44 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_4
# 45 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 46 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman_8:
# 47 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 13 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 48 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
# 49 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_7
# 50 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 51 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman_11:
# 52 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 19 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 53 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto EventScript_BagIsFull
# 54 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_10
# 55 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 56 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 57 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea::
# 58 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 27 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 59 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany
# 60 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 28 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 61 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 62 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 63 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 64 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 65 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy::
# 66 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 33 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 67 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 4
# 68 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 34 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 69 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	setflag FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
# 70 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 35 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 71 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea
# 72 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 36 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 73 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 74 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 75 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 76 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 77 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Meowth::
# 78 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 41 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 79 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 80 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 42 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 81 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 82 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 43 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 83 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 84 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 44 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 85 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 86 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 45 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 87 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Meowth
# 88 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 46 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 89 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
# 90 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 47 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 91 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 92 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 93 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 94 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 95 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Clefairy::
# 96 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 52 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 97 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 98 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 53 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 99 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 100 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 54 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 101 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 102 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 55 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 103 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 104 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 56 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 105 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
# 106 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 57 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 107 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
# 108 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 58 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 109 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 110 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 111 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 112 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 113 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Nidoran::
# 114 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 63 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 115 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 116 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 64 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 117 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 118 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 65 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 119 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 120 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 66 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 121 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
# 122 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 67 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 123 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
# 124 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 68 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 125 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
# 126 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 69 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 127 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 128 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 129 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 130 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 131 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_SuiteSign::
# 132 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 74 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 133 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_ManagersSuite, MSGBOX_SIGN
# 134 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 135 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 136 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 137 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_Meowth::
# 138 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 78 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 139 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "MEOWTH: Meow!$"
# 140 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 141 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead::
# 142 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 82 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 143 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "You shouldn't spend all your money\n"
# 144 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "on drinks.\p"
# 145 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Try this instead.$"
# 146 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 147 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea::
# 148 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 88 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 149 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Nothing beats thirst like some hot\n"
# 150 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "TEA.\p"
# 151 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "It really is the best.$"
# 152 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 153 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany::
# 154 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 94 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 155 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "My dear POKéMON keep me company.\n"
# 156 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "MEOWTH even brings money home!$"
# 157 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 158 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea::
# 159 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 99 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 160 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Oh, hello, dearie.\n"
# 161 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Did you enjoy my TEA?\p"
# 162 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "By the way, dear. Are you, by any\n"
# 163 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "chance, from PALLET TOWN?\p"
# 164 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "A girl from PALLET TOWN, DAISY,\n"
# 165 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "she enjoys TEA every day.\p"
# 166 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "She visits the CELADON DEPT. STORE\n"
# 167 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "to buy some TEA.$"
# 168 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 169 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_Clefairy::
# 170 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 110 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 171 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "CLEFAIRY: Pi pippippi!$"
# 172 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 173 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_Nidoran::
# 174 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 114 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 175 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "NIDORAN♀: Kya kyaoo!$"
# 176 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 177 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_ManagersSuite::
# 178 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 118 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
# 179 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "CELADON MANSION\n"
# 180 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Manager's Suite$"
