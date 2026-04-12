# 1 "data/maps/MtPyre_1F/scripts.pory"

# 2 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_MapScripts::
# 3 "data/maps/MtPyre_1F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_1F/scripts.pory"

# 5 "data/maps/MtPyre_1F/scripts.pory"

# 6 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman::
# 7 "data/maps/MtPyre_1F/scripts.pory"
# 4 "data/maps/MtPyre_1F/scripts.pory"
# 8 "data/maps/MtPyre_1F/scripts.pory"
	lock
# 9 "data/maps/MtPyre_1F/scripts.pory"
# 5 "data/maps/MtPyre_1F/scripts.pory"
# 10 "data/maps/MtPyre_1F/scripts.pory"
	faceplayer
# 11 "data/maps/MtPyre_1F/scripts.pory"
# 6 "data/maps/MtPyre_1F/scripts.pory"
# 12 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_CleanseTagWoman_2
# 13 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman_1:
# 14 "data/maps/MtPyre_1F/scripts.pory"
# 9 "data/maps/MtPyre_1F/scripts.pory"
# 15 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
# 16 "data/maps/MtPyre_1F/scripts.pory"
# 10 "data/maps/MtPyre_1F/scripts.pory"
# 17 "data/maps/MtPyre_1F/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 18 "data/maps/MtPyre_1F/scripts.pory"
# 11 "data/maps/MtPyre_1F/scripts.pory"
# 19 "data/maps/MtPyre_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 20 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_eq MtPyre_1F_EventScript_CleanseTagWoman_5
# 21 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman_4:
# 22 "data/maps/MtPyre_1F/scripts.pory"
# 14 "data/maps/MtPyre_1F/scripts.pory"
# 23 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_RECEIVED_CLEANSE_TAG
# 24 "data/maps/MtPyre_1F/scripts.pory"
# 15 "data/maps/MtPyre_1F/scripts.pory"
# 25 "data/maps/MtPyre_1F/scripts.pory"
	release
# 26 "data/maps/MtPyre_1F/scripts.pory"
	end
# 27 "data/maps/MtPyre_1F/scripts.pory"

# 28 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman_2:
# 29 "data/maps/MtPyre_1F/scripts.pory"
# 7 "data/maps/MtPyre_1F/scripts.pory"
# 30 "data/maps/MtPyre_1F/scripts.pory"
	goto MtPyre_1F_EventScript_ReceivedCleanseTag
# 31 "data/maps/MtPyre_1F/scripts.pory"
	goto MtPyre_1F_EventScript_CleanseTagWoman_1
# 32 "data/maps/MtPyre_1F/scripts.pory"

# 33 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman_5:
# 34 "data/maps/MtPyre_1F/scripts.pory"
# 12 "data/maps/MtPyre_1F/scripts.pory"
# 35 "data/maps/MtPyre_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 36 "data/maps/MtPyre_1F/scripts.pory"
	goto MtPyre_1F_EventScript_CleanseTagWoman_4
# 37 "data/maps/MtPyre_1F/scripts.pory"

# 38 "data/maps/MtPyre_1F/scripts.pory"

# 39 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_ReceivedCleanseTag::
# 40 "data/maps/MtPyre_1F/scripts.pory"
# 20 "data/maps/MtPyre_1F/scripts.pory"
# 41 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
# 42 "data/maps/MtPyre_1F/scripts.pory"
# 21 "data/maps/MtPyre_1F/scripts.pory"
# 43 "data/maps/MtPyre_1F/scripts.pory"
	release
# 44 "data/maps/MtPyre_1F/scripts.pory"
	end
# 45 "data/maps/MtPyre_1F/scripts.pory"

# 46 "data/maps/MtPyre_1F/scripts.pory"

# 47 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_PokefanF::
# 48 "data/maps/MtPyre_1F/scripts.pory"
# 26 "data/maps/MtPyre_1F/scripts.pory"
# 49 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
# 50 "data/maps/MtPyre_1F/scripts.pory"
	end
# 51 "data/maps/MtPyre_1F/scripts.pory"

# 52 "data/maps/MtPyre_1F/scripts.pory"

# 53 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Man::
# 54 "data/maps/MtPyre_1F/scripts.pory"
# 31 "data/maps/MtPyre_1F/scripts.pory"
# 55 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
# 56 "data/maps/MtPyre_1F/scripts.pory"
	end
# 57 "data/maps/MtPyre_1F/scripts.pory"

# 58 "data/maps/MtPyre_1F/scripts.pory"

# 59 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_TakeThisForYourOwnGood::
# 60 "data/maps/MtPyre_1F/scripts.pory"
# 35 "data/maps/MtPyre_1F/scripts.pory"
# 61 "data/maps/MtPyre_1F/scripts.pory"
	.string "All sorts of beings wander the slopes\n"
# 62 "data/maps/MtPyre_1F/scripts.pory"
	.string "of MT. PYRE…\p"
# 63 "data/maps/MtPyre_1F/scripts.pory"
	.string "There is no telling what may happen.\n"
# 64 "data/maps/MtPyre_1F/scripts.pory"
	.string "Take this. It's for your own good.$"
# 65 "data/maps/MtPyre_1F/scripts.pory"

# 66 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ExplainCleanseTag::
# 67 "data/maps/MtPyre_1F/scripts.pory"
# 42 "data/maps/MtPyre_1F/scripts.pory"
# 68 "data/maps/MtPyre_1F/scripts.pory"
	.string "Have a POKéMON hold that\n"
# 69 "data/maps/MtPyre_1F/scripts.pory"
	.string "CLEANSE TAG.\p"
# 70 "data/maps/MtPyre_1F/scripts.pory"
	.string "It will help ward off wild POKéMON.$"
# 71 "data/maps/MtPyre_1F/scripts.pory"

# 72 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ComeToPayRespects::
# 73 "data/maps/MtPyre_1F/scripts.pory"
# 48 "data/maps/MtPyre_1F/scripts.pory"
# 74 "data/maps/MtPyre_1F/scripts.pory"
	.string "Did you come to pay your respect\n"
# 75 "data/maps/MtPyre_1F/scripts.pory"
	.string "to the spirits of departed POKéMON?\p"
# 76 "data/maps/MtPyre_1F/scripts.pory"
	.string "You must care for your POKéMON a lot.$"
# 77 "data/maps/MtPyre_1F/scripts.pory"

# 78 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_RestingPlaceOfZigzagoon::
# 79 "data/maps/MtPyre_1F/scripts.pory"
# 54 "data/maps/MtPyre_1F/scripts.pory"
# 80 "data/maps/MtPyre_1F/scripts.pory"
	.string "This is the final resting place of my\n"
# 81 "data/maps/MtPyre_1F/scripts.pory"
	.string "ZIGZAGOON. I cherished it…$"
