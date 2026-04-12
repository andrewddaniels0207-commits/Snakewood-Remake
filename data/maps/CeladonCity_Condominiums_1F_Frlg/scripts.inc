CeladonCity_Condominiums_1F_Frlg_MapScripts::
	.byte 0


CeladonCity_Condominiums_1F_EventScript_TeaWoman::
# 4 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 5 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_TALKED_TO_TEA_LADY_AFTER_HOF, CeladonCity_Condominiums_1F_EventScript_TeaWoman_2
CeladonCity_Condominiums_1F_EventScript_TeaWoman_1:
# 9 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CeladonCity_Condominiums_1F_EventScript_TeaWoman_5
CeladonCity_Condominiums_1F_EventScript_TeaWoman_4:
# 12 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TEA, CeladonCity_Condominiums_1F_EventScript_TeaWoman_8
CeladonCity_Condominiums_1F_EventScript_TeaWoman_7:
# 15 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead
# 16 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_TEA
# 17 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	giveitem ITEM_TEA
# 18 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_Condominiums_1F_EventScript_TeaWoman_11
CeladonCity_Condominiums_1F_EventScript_TeaWoman_10:
# 21 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea
# 22 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
	end

CeladonCity_Condominiums_1F_EventScript_TeaWoman_2:
# 7 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_1

CeladonCity_Condominiums_1F_EventScript_TeaWoman_5:
# 10 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_4

CeladonCity_Condominiums_1F_EventScript_TeaWoman_8:
# 13 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_7

CeladonCity_Condominiums_1F_EventScript_TeaWoman_11:
# 19 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto EventScript_BagIsFull
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_10


CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea::
# 27 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany
# 28 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
	end


CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy::
# 33 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 4
# 34 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	setflag FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
# 35 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea
# 36 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
	end


CeladonCity_Condominiums_1F_EventScript_Meowth::
# 41 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 42 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 43 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 44 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 45 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Meowth
# 46 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
# 47 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
	end


CeladonCity_Condominiums_1F_EventScript_Clefairy::
# 52 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 53 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 54 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 55 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 56 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
# 57 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
# 58 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
	end


CeladonCity_Condominiums_1F_EventScript_Nidoran::
# 63 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 64 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 65 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 66 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
# 67 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
# 68 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
# 69 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
	end


CeladonCity_Condominiums_1F_EventScript_SuiteSign::
# 74 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_ManagersSuite, MSGBOX_SIGN
	end


CeladonCity_Condominiums_1F_Text_Meowth::
# 78 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "MEOWTH: Meow!$"

CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead::
# 82 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "You shouldn't spend all your money\n"
	.string "on drinks.\p"
	.string "Try this instead.$"

CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea::
# 88 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Nothing beats thirst like some hot\n"
	.string "TEA.\p"
	.string "It really is the best.$"

CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany::
# 94 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "My dear POKéMON keep me company.\n"
	.string "MEOWTH even brings money home!$"

CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea::
# 99 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Oh, hello, dearie.\n"
	.string "Did you enjoy my TEA?\p"
	.string "By the way, dear. Are you, by any\n"
	.string "chance, from PALLET TOWN?\p"
	.string "A girl from PALLET TOWN, DAISY,\n"
	.string "she enjoys TEA every day.\p"
	.string "She visits the CELADON DEPT. STORE\n"
	.string "to buy some TEA.$"

CeladonCity_Condominiums_1F_Text_Clefairy::
# 110 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "CLEFAIRY: Pi pippippi!$"

CeladonCity_Condominiums_1F_Text_Nidoran::
# 114 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "NIDORAN♀: Kya kyaoo!$"

CeladonCity_Condominiums_1F_Text_ManagersSuite::
# 118 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "CELADON MANSION\n"
	.string "Manager's Suite$"
