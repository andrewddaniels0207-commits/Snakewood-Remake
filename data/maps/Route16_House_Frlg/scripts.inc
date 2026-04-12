# 1 "data/maps/Route16_House_Frlg/scripts.pory"

# 2 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Frlg_MapScripts::
# 3 "data/maps/Route16_House_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route16_House_Frlg/scripts.pory"

# 5 "data/maps/Route16_House_Frlg/scripts.pory"

# 6 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_Woman::
# 7 "data/maps/Route16_House_Frlg/scripts.pory"
# 4 "data/maps/Route16_House_Frlg/scripts.pory"
# 8 "data/maps/Route16_House_Frlg/scripts.pory"
	lock
# 9 "data/maps/Route16_House_Frlg/scripts.pory"
# 5 "data/maps/Route16_House_Frlg/scripts.pory"
# 10 "data/maps/Route16_House_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/Route16_House_Frlg/scripts.pory"
# 6 "data/maps/Route16_House_Frlg/scripts.pory"
# 12 "data/maps/Route16_House_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM02, Route16_House_EventScript_Woman_2
# 13 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_Woman_1:
# 14 "data/maps/Route16_House_Frlg/scripts.pory"
# 9 "data/maps/Route16_House_Frlg/scripts.pory"
# 15 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_FoundMySecretRetreat
# 16 "data/maps/Route16_House_Frlg/scripts.pory"
# 10 "data/maps/Route16_House_Frlg/scripts.pory"
# 17 "data/maps/Route16_House_Frlg/scripts.pory"
	checkitemspace ITEM_HM02
# 18 "data/maps/Route16_House_Frlg/scripts.pory"
# 11 "data/maps/Route16_House_Frlg/scripts.pory"
# 19 "data/maps/Route16_House_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 20 "data/maps/Route16_House_Frlg/scripts.pory"
	goto_if_eq Route16_House_EventScript_Woman_5
# 21 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_Woman_4:
# 22 "data/maps/Route16_House_Frlg/scripts.pory"
# 14 "data/maps/Route16_House_Frlg/scripts.pory"
# 23 "data/maps/Route16_House_Frlg/scripts.pory"
	giveitem_msg Route16_House_Text_ReceivedHM02FromGirl, ITEM_HM02
# 24 "data/maps/Route16_House_Frlg/scripts.pory"
# 15 "data/maps/Route16_House_Frlg/scripts.pory"
# 25 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_ExplainHM02
# 26 "data/maps/Route16_House_Frlg/scripts.pory"
# 16 "data/maps/Route16_House_Frlg/scripts.pory"
# 27 "data/maps/Route16_House_Frlg/scripts.pory"
	setflag FLAG_GOT_HM02
# 28 "data/maps/Route16_House_Frlg/scripts.pory"
# 17 "data/maps/Route16_House_Frlg/scripts.pory"
# 29 "data/maps/Route16_House_Frlg/scripts.pory"
	release
# 30 "data/maps/Route16_House_Frlg/scripts.pory"
	end
# 31 "data/maps/Route16_House_Frlg/scripts.pory"

# 32 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_Woman_2:
# 33 "data/maps/Route16_House_Frlg/scripts.pory"
# 7 "data/maps/Route16_House_Frlg/scripts.pory"
# 34 "data/maps/Route16_House_Frlg/scripts.pory"
	goto Route16_House_EventScript_AlreadyGotHM02
# 35 "data/maps/Route16_House_Frlg/scripts.pory"
	goto Route16_House_EventScript_Woman_1
# 36 "data/maps/Route16_House_Frlg/scripts.pory"

# 37 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_Woman_5:
# 38 "data/maps/Route16_House_Frlg/scripts.pory"
# 12 "data/maps/Route16_House_Frlg/scripts.pory"
# 39 "data/maps/Route16_House_Frlg/scripts.pory"
	goto Route16_House_EventScript_NoRoomForHM02
# 40 "data/maps/Route16_House_Frlg/scripts.pory"
	goto Route16_House_EventScript_Woman_4
# 41 "data/maps/Route16_House_Frlg/scripts.pory"

# 42 "data/maps/Route16_House_Frlg/scripts.pory"

# 43 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_NoRoomForHM02::
# 44 "data/maps/Route16_House_Frlg/scripts.pory"
# 22 "data/maps/Route16_House_Frlg/scripts.pory"
# 45 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_DontHaveAnyRoomForThis
# 46 "data/maps/Route16_House_Frlg/scripts.pory"
# 23 "data/maps/Route16_House_Frlg/scripts.pory"
# 47 "data/maps/Route16_House_Frlg/scripts.pory"
	release
# 48 "data/maps/Route16_House_Frlg/scripts.pory"
	end
# 49 "data/maps/Route16_House_Frlg/scripts.pory"

# 50 "data/maps/Route16_House_Frlg/scripts.pory"

# 51 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_AlreadyGotHM02::
# 52 "data/maps/Route16_House_Frlg/scripts.pory"
# 28 "data/maps/Route16_House_Frlg/scripts.pory"
# 53 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_ExplainHM02
# 54 "data/maps/Route16_House_Frlg/scripts.pory"
# 29 "data/maps/Route16_House_Frlg/scripts.pory"
# 55 "data/maps/Route16_House_Frlg/scripts.pory"
	release
# 56 "data/maps/Route16_House_Frlg/scripts.pory"
	end
# 57 "data/maps/Route16_House_Frlg/scripts.pory"

# 58 "data/maps/Route16_House_Frlg/scripts.pory"

# 59 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_Fearow::
# 60 "data/maps/Route16_House_Frlg/scripts.pory"
# 34 "data/maps/Route16_House_Frlg/scripts.pory"
# 61 "data/maps/Route16_House_Frlg/scripts.pory"
	lock
# 62 "data/maps/Route16_House_Frlg/scripts.pory"
# 35 "data/maps/Route16_House_Frlg/scripts.pory"
# 63 "data/maps/Route16_House_Frlg/scripts.pory"
	faceplayer
# 64 "data/maps/Route16_House_Frlg/scripts.pory"
# 36 "data/maps/Route16_House_Frlg/scripts.pory"
# 65 "data/maps/Route16_House_Frlg/scripts.pory"
	waitse
# 66 "data/maps/Route16_House_Frlg/scripts.pory"
# 37 "data/maps/Route16_House_Frlg/scripts.pory"
# 67 "data/maps/Route16_House_Frlg/scripts.pory"
	playmoncry SPECIES_FEAROW, CRY_MODE_NORMAL
# 68 "data/maps/Route16_House_Frlg/scripts.pory"
# 38 "data/maps/Route16_House_Frlg/scripts.pory"
# 69 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_Fearow
# 70 "data/maps/Route16_House_Frlg/scripts.pory"
# 39 "data/maps/Route16_House_Frlg/scripts.pory"
# 71 "data/maps/Route16_House_Frlg/scripts.pory"
	waitmoncry
# 72 "data/maps/Route16_House_Frlg/scripts.pory"
# 40 "data/maps/Route16_House_Frlg/scripts.pory"
# 73 "data/maps/Route16_House_Frlg/scripts.pory"
	release
# 74 "data/maps/Route16_House_Frlg/scripts.pory"
	end
# 75 "data/maps/Route16_House_Frlg/scripts.pory"

# 76 "data/maps/Route16_House_Frlg/scripts.pory"

# 77 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Text_FoundMySecretRetreat::
# 78 "data/maps/Route16_House_Frlg/scripts.pory"
# 44 "data/maps/Route16_House_Frlg/scripts.pory"
# 79 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "Oh, dear.\n"
# 80 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "You've found my secret retreat.\p"
# 81 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "Please don't tell anyone I'm here.\n"
# 82 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "I'll make it up to you with this!$"
# 83 "data/maps/Route16_House_Frlg/scripts.pory"

# 84 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Text_ReceivedHM02FromGirl::
# 85 "data/maps/Route16_House_Frlg/scripts.pory"
# 51 "data/maps/Route16_House_Frlg/scripts.pory"
# 86 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "{PLAYER} received HM02\n"
# 87 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "from the girl.$"
# 88 "data/maps/Route16_House_Frlg/scripts.pory"

# 89 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Text_ExplainHM02::
# 90 "data/maps/Route16_House_Frlg/scripts.pory"
# 56 "data/maps/Route16_House_Frlg/scripts.pory"
# 91 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "HM02 is FLY.\n"
# 92 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "It's a wonderfully convenient move.\p"
# 93 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "Please, put it to good use.$"
# 94 "data/maps/Route16_House_Frlg/scripts.pory"

# 95 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Text_DontHaveAnyRoomForThis::
# 96 "data/maps/Route16_House_Frlg/scripts.pory"
# 62 "data/maps/Route16_House_Frlg/scripts.pory"
# 97 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "You don't have any room for this.$"
# 98 "data/maps/Route16_House_Frlg/scripts.pory"

# 99 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Text_Fearow::
# 100 "data/maps/Route16_House_Frlg/scripts.pory"
# 66 "data/maps/Route16_House_Frlg/scripts.pory"
# 101 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "FEAROW: Kyueen!$"
