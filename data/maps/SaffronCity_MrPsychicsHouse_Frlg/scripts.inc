# 1 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 5 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 6 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_EventScript_MrPsychic::
# 7 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 4 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 8 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	lock
# 9 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 5 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 10 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 6 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 12 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM29_FROM_MR_PSYCHIC, SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_2
# 13 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_1:
# 14 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 9 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 15 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_YouWantedThis
# 16 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 10 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 17 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	checkitemspace ITEM_TM29
# 18 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 11 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 19 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 20 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto_if_eq SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_5
# 21 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_4:
# 22 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 14 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 23 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	giveitem_msg SaffronCity_MrPsychicsHouse_Text_ReceivedTM29FromMrPsychic, ITEM_TM29
# 24 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 15 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 25 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_ExplainTM29
# 26 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 16 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 27 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_TM29_FROM_MR_PSYCHIC
# 28 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 17 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 29 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	release
# 30 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	end
# 31 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 32 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_2:
# 33 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 7 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 34 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto SaffronCity_MrPsychicsHouse_EventScript_AlreadyGotTM29
# 35 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_1
# 36 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 37 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_5:
# 38 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 12 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 39 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto SaffronCity_MrPsychicsHouse_EventScript_NoRoomForTM29
# 40 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_4
# 41 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 42 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 43 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_EventScript_NoRoomForTM29::
# 44 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 22 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 45 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_YouveNoRoom
# 46 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 23 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 47 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	release
# 48 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	end
# 49 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 50 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 51 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_EventScript_AlreadyGotTM29::
# 52 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 28 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 53 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_ExplainTM29
# 54 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 29 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 55 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	release
# 56 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	end
# 57 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 58 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 59 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_Text_YouWantedThis::
# 60 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 33 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 61 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "…Wait! Don't say a word!\p"
# 62 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "You wanted this!$"
# 63 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 64 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_Text_ReceivedTM29FromMrPsychic::
# 65 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 38 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 66 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "{PLAYER} received TM29\n"
# 67 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "from MR. PSYCHIC.$"
# 68 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 69 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_Text_ExplainTM29::
# 70 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 43 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 71 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "You already know, don't you?\n"
# 72 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "TM29 is PSYCHIC.\p"
# 73 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "It's an attack that may also lower\n"
# 74 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "the target's special stats.$"
# 75 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 76 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_Text_YouveNoRoom::
# 77 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 50 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
# 78 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "Where do you plan to put this?\n"
# 79 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "You've no room.$"
