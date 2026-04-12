SaffronCity_MrPsychicsHouse_Frlg_MapScripts::
	.byte 0


SaffronCity_MrPsychicsHouse_EventScript_MrPsychic::
# 4 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	lock
# 5 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM29_FROM_MR_PSYCHIC, SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_2
SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_1:
# 9 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_YouWantedThis
# 10 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	checkitemspace ITEM_TM29
# 11 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_5
SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_4:
# 14 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	giveitem_msg SaffronCity_MrPsychicsHouse_Text_ReceivedTM29FromMrPsychic, ITEM_TM29
# 15 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_ExplainTM29
# 16 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_TM29_FROM_MR_PSYCHIC
# 17 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	release
	end

SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_2:
# 7 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto SaffronCity_MrPsychicsHouse_EventScript_AlreadyGotTM29
	goto SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_1

SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_5:
# 12 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto SaffronCity_MrPsychicsHouse_EventScript_NoRoomForTM29
	goto SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_4


SaffronCity_MrPsychicsHouse_EventScript_NoRoomForTM29::
# 22 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_YouveNoRoom
# 23 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	release
	end


SaffronCity_MrPsychicsHouse_EventScript_AlreadyGotTM29::
# 28 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_ExplainTM29
# 29 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	release
	end


SaffronCity_MrPsychicsHouse_Text_YouWantedThis::
# 33 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "…Wait! Don't say a word!\p"
	.string "You wanted this!$"

SaffronCity_MrPsychicsHouse_Text_ReceivedTM29FromMrPsychic::
# 38 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "{PLAYER} received TM29\n"
	.string "from MR. PSYCHIC.$"

SaffronCity_MrPsychicsHouse_Text_ExplainTM29::
# 43 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "You already know, don't you?\n"
	.string "TM29 is PSYCHIC.\p"
	.string "It's an attack that may also lower\n"
	.string "the target's special stats.$"

SaffronCity_MrPsychicsHouse_Text_YouveNoRoom::
# 50 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "Where do you plan to put this?\n"
	.string "You've no room.$"
